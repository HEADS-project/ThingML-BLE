#include "MQTT.h"

const char *MQTT_topics[1] = {
    "ThingML"
};
int MQTT_topics_subscribed[1];

const int MQTT_qos = 1;

struct mosquitto *MQTT_mosq = NULL;

// Callback declarations
void MQTT_log_callback(struct mosquitto *, void *, int , const char *);
void MQTT_connect_callback(struct mosquitto *, void *, int);
void MQTT_subscribe_callback(struct mosquitto *, void *, int , int , const int *);
void MQTT_message_callback(struct mosquitto *, void *, const struct mosquitto_message *);

// Setup
void MQTT_setup(struct MQTT_Instance *_instance)
{
    const char *host = "10.218.149.140";
    int port = 1883;
    const char *username = NULL;
    const char *password = NULL;
    const char *will_topic = "ThingML";
    const char *will_string = "{ \"ERROR\": \"Unexpected disconnect\" }";

    // Initialise
    printf("[MQTT] Initialising MQTT at %s:%i\n", host, port);
    mosquitto_lib_init();
    MQTT_mosq = mosquitto_new(NULL, true, _instance);
    if (!MQTT_mosq) {
        perror("[MQTT] mosquitto_new failed ");
        return;
    }

    // Set username and password
    if (password && !username) fprintf(stderr, "[MQTT] Warning: Not using password since username is not set.\n");
    if (username && !password) fprintf(stderr, "[MQTT] Warning: Not using username since password is not set.\n");
    if (username && password && mosquitto_username_pw_set(MQTT_mosq, username, password)) {
        fprintf(stderr, "[MQTT] mosquitto_username_pw_set failed\n");
        return;
    }

    // Set callbacks
    mosquitto_log_callback_set(MQTT_mosq, MQTT_log_callback);
    mosquitto_connect_callback_set(MQTT_mosq, MQTT_connect_callback);
    mosquitto_subscribe_callback_set(MQTT_mosq, MQTT_subscribe_callback);
    mosquitto_message_callback_set(MQTT_mosq, MQTT_message_callback);

    // Set will
    if (will_string && !will_topic) fprintf(stderr, "[MQTT] Warning: Not setting will since will_topic is not set.\n");
    if (will_string && will_topic && mosquitto_will_set(MQTT_mosq, will_topic, strlen(will_string), will_string, MQTT_qos, false)) {
        fprintf(stderr, "[MQTT] mosquitto_will_set failed\n");
        return;
    }

    // Connect to broker
    int result = mosquitto_connect(MQTT_mosq, host, port, 10);
    if (result == MOSQ_ERR_ERRNO) perror("[MQTT] mosquitto_connect failed ");
    else if (result) fprintf(stderr, "[MQTT] mosquitto_connect failed : %s\n", mosquitto_strerror(result));

    if (result) MQTT_mosq = NULL;
}

// Threaded execution and polling functions
void MQTT_start_receiver_thread() {
    int result = mosquitto_loop_forever(MQTT_mosq, -1, 1);

    if (result == MOSQ_ERR_ERRNO) perror("[MQTT] mosquitto_loop_forever_failed ");
    else if (result) fprintf(stderr, "[MQTT] mosquitto_connect failed : %s\n", mosquitto_strerror(result));

	mosquitto_destroy(MQTT_mosq);
	MQTT_mosq = NULL;
	mosquitto_lib_cleanup();
}
void MQTT_loop_poll() {
	if (MQTT_mosq) {
        int result = mosquitto_loop(MQTT_mosq, 0, 1);

        if (result == MOSQ_ERR_ERRNO) perror("[MQTT] mosquitto_loop_forever_failed ");
        else if (result) fprintf(stderr, "[MQTT] mosquitto_connect failed : %s\n", mosquitto_strerror(result));

        if (result) {
            mosquitto_destroy(MQTT_mosq);
            MQTT_mosq = NULL;
            mosquitto_lib_cleanup();
        }
    }
}

// Logging
void MQTT_log_callback(struct mosquitto *mosq, void *_instance, int level, const char *str)
{
    //printf("[MQTT] %s\n", str);
}

// On connected
void MQTT_connect_callback(struct mosquitto *mosq, void *_instance, int result)
{
    int ret, i;
    switch (result) {
        case 0:
            for (i = 0; i < 1; i++) {
                ret = mosquitto_subscribe(mosq, &MQTT_topics_subscribed[i], MQTT_topics[i], MQTT_qos);
                if (ret) fprintf(stderr, "[MQTT] mosquitto_subscribe failed for %s : %s\n", MQTT_topics[i], mosquitto_strerror(result));
            }
            break;
        case 1:
            fprintf(stderr, "[MQTT] Connection error : unacceptable protocol version\n");
            break;
        case 2:
            fprintf(stderr, "[MQTT] Connection error : identifier rejected\n");
            break;
        case 3:
            fprintf(stderr, "[MQTT] Connection error : broker unavailable\n");
            break;
        default:
            fprintf(stderr, "[MQTT] Connection error : unknown reason\n");
            break;
    }
}

// On subscribed
void MQTT_subscribe_callback(struct mosquitto *mosq, void *_instance, int mid, int qos_count, const int *granted_qos)
{
    int print = false, i;
    print = true;
    if (print) {
        // Find subscribed topic
        for (i = 0; i < 1; i++) {
            if (MQTT_topics_subscribed[i] == mid) break;
        }
        printf("[MQTT] Subscribed to topic '%s' - QoS levels ", MQTT_topics[i]);
        for (i = 0; i < qos_count; i++) printf("%i ",granted_qos[i]);
        printf("\n");
    }
    for (i = 0; i < qos_count; i++)
        if (granted_qos[i] == MQTT_qos) return;

    for (i = 0; i < 1; i++) {
        if (MQTT_topics_subscribed[i] == mid) break;
    }
    fprintf(stderr, "[MQTT] Topic '%s' was not granted the specified QoS level\n", MQTT_topics[i]);
}

/* ---------- INCOMMING MESSAGES ----------*/
uint8_t *jump_to(uint8_t *msg, int len, uint8_t *ptr, uint8_t a, uint8_t b)
{
    if (!ptr) return NULL;
    while (ptr-msg <= len) {
        if(*ptr == a || *ptr == b) return ptr;
        ptr++;
    }
    return NULL;
}

uint8_t *jump_space(uint8_t *msg, int len, uint8_t *ptr)
{
    if (!ptr) return NULL;
    while (ptr-msg <= len) {
        if (!isspace(*ptr)) return ptr;
        ptr++;
    }
    return NULL;
}

int parse_MqttConfirmBloodPressureMeasurement(uint8_t *msg, int size, uint8_t *out_buffer) {
    uint8_t *ptr = msg;
    uint8_t *start = NULL;
    uint8_t *end = NULL;
    uint8_t *pstart = NULL;
    int index = 0;
    // Port-message code
    out_buffer[index+0] = (66 >> 8);
    out_buffer[index+1] = (66 & 0xFF);
    index += 2;
    // Find all forwarded parameters
    int np;
    for (np = 0; np < 0; np++) {
        // Parameter name
        ptr = jump_space(msg, size, ptr);
        if (!ptr || *ptr != '"') return -2;
        start = ptr+1;
        ptr = jump_to(msg, size, start, '"', '"');
        if (!ptr) return -3;
        end = ptr;
        // Parameter value
        ptr = jump_to(msg, size, end, ':', ':');
        if (!ptr) return -4;
        ptr = jump_space(msg, size, ptr+1);
        if (!ptr) return -5;
        pstart = ptr;
        ptr = jump_to(msg, size, pstart, ',', '}');
        if (!ptr) return -6;
        // Find matching parameter
        if (ptr-pstart < 1) return -7;
        ptr = jump_to(msg, size, ptr, ',', '}');
        if (!ptr) return -8;
        ptr = ptr+1;
    }
    // Zero-init all non-forwarded messages
    // Make sure we are at the end of the message
    ptr = jump_space(msg, size, ptr);
    if (!ptr || *ptr != '}') return -9;
    // Parsing complete
    return 2;
}

int parse_MqttRequestBloodPressureMeasurement(uint8_t *msg, int size, uint8_t *out_buffer) {
    uint8_t *ptr = msg;
    uint8_t *start = NULL;
    uint8_t *end = NULL;
    uint8_t *pstart = NULL;
    int index = 0;
    // Port-message code
    out_buffer[index+0] = (65 >> 8);
    out_buffer[index+1] = (65 & 0xFF);
    index += 2;
    // Find all forwarded parameters
    int np;
    for (np = 0; np < 0; np++) {
        // Parameter name
        ptr = jump_space(msg, size, ptr);
        if (!ptr || *ptr != '"') return -2;
        start = ptr+1;
        ptr = jump_to(msg, size, start, '"', '"');
        if (!ptr) return -3;
        end = ptr;
        // Parameter value
        ptr = jump_to(msg, size, end, ':', ':');
        if (!ptr) return -4;
        ptr = jump_space(msg, size, ptr+1);
        if (!ptr) return -5;
        pstart = ptr;
        ptr = jump_to(msg, size, pstart, ',', '}');
        if (!ptr) return -6;
        // Find matching parameter
        if (ptr-pstart < 1) return -7;
        ptr = jump_to(msg, size, ptr, ',', '}');
        if (!ptr) return -8;
        ptr = ptr+1;
    }
    // Zero-init all non-forwarded messages
    // Make sure we are at the end of the message
    ptr = jump_space(msg, size, ptr);
    if (!ptr || *ptr != '}') return -9;
    // Parsing complete
    return 2;
}

void MQTT_parser(uint8_t *msg, int size, struct MQTT_Instance *_instance) {
    uint8_t *ptr = msg;
    uint8_t *start = NULL;
    uint8_t *end = NULL;
    // Find opening '{'
    ptr = jump_space(msg, size, ptr);
    if (!ptr || *ptr != '{') return;
    // Find start of message name '"'
    ptr = jump_space(msg, size, ptr+1);
    if (!ptr || *ptr != '"') return;
    start = ptr+1;
    // Find end of message name '"'
    ptr = jump_to(msg, size, start, '"', '"');
    if (!ptr) return;
    end = ptr;

    // Find the message object ':{'
    ptr = jump_space(msg, size, ptr+1);
    if (!ptr || *ptr != ':') return;
    ptr = jump_space(msg, size, ptr+1);
    if (!ptr || *ptr != '{') return;
    ptr++;

    // Make room for parsing
    uint8_t enqueue_buffer[2];

    // Parse the message
    int result = -1;
    if (0) {}
    else if (strncmp("MqttConfirmBloodPressureMeasurement", start, end-start) == 0) {
        result = parse_MqttConfirmBloodPressureMeasurement(ptr, size-(ptr-msg), enqueue_buffer);
    }
    else if (strncmp("MqttRequestBloodPressureMeasurement", start, end-start) == 0) {
        result = parse_MqttRequestBloodPressureMeasurement(ptr, size-(ptr-msg), enqueue_buffer);
    }

    // Enqueue the message
    if (result > 0) {
        externalMessageEnqueue(enqueue_buffer, result, _instance->listener_id);
    } else {
        fprintf(stderr, "[MQTT]: Error parsing message %i\n", result);
    }

}

void MQTT_message_callback(struct mosquitto *mosq, void *_instance, const struct mosquitto_message *msg)
{
    printf("[MQTT] Received message (%i bytes) on topic %s\n", msg->payloadlen, msg->topic);
    MQTT_parser(msg->payload, msg->payloadlen, (struct MQTT_Instance*)_instance);
}


/* ---------- FORWARDERS ----------*/
void MQTT_send_message(uint8_t *msg, int msglen)
{
    int ret, i;
    for (i = 0; i < 1; i++) {
        printf("[MQTT] Sending message (%i bytes) on topic %s\n", msglen, MQTT_topics[i]);
        ret = mosquitto_publish(MQTT_mosq, NULL, MQTT_topics[i], msglen, msg, MQTT_qos, false);
        if (ret) fprintf(stderr, "[MQTT] mosquitto_publish failed for %s : %s\n", MQTT_topics[i], mosquitto_strerror(ret));
    }
}

// Forwarding of messages MQTT::Main::Gateway::MqttBloodPressureMeasurement
void forward_MQTT_Main_send_Gateway_MqttBloodPressureMeasurement(struct Main_Instance *_instance, float Systolic, float Diastolic, float MeanArterial, uint8_t UnitKPA, uint16_t Year, uint8_t Month, uint8_t Day, uint8_t Hour, uint8_t Minute, uint8_t Second, float Pulse, uint8_t IrregularPulse){
    uint8_t buffer[273];
    int index = 0;
    int result;

    //Start of serialized message
    result = sprintf(&buffer[index], "%.*s", 273-index, "{\"MqttBloodPressureMeasurement\":{");
    if (result >= 0) { index += result; } else { return; }
    // Parameter Systolic
    result = sprintf(&buffer[index], "%.*s", 273-index, "\"Systolic\":");
    if (result >= 0) { index += result; } else { return; }
    if (isnan(Systolic) || isinf(Systolic)) {
        result = sprintf(&buffer[index],"%.*s", 273-index, "null");
    } else {
        result = sprintf(&buffer[index], "%#.15g", Systolic);
    }
    if (result >= 0) { index += result; } else { return; }
    // Parameter Diastolic
    result = sprintf(&buffer[index], "%.*s", 273-index, ",\"Diastolic\":");
    if (result >= 0) { index += result; } else { return; }
    if (isnan(Diastolic) || isinf(Diastolic)) {
        result = sprintf(&buffer[index],"%.*s", 273-index, "null");
    } else {
        result = sprintf(&buffer[index], "%#.15g", Diastolic);
    }
    if (result >= 0) { index += result; } else { return; }
    // Parameter MeanArterial
    result = sprintf(&buffer[index], "%.*s", 273-index, ",\"MeanArterial\":");
    if (result >= 0) { index += result; } else { return; }
    if (isnan(MeanArterial) || isinf(MeanArterial)) {
        result = sprintf(&buffer[index],"%.*s", 273-index, "null");
    } else {
        result = sprintf(&buffer[index], "%#.15g", MeanArterial);
    }
    if (result >= 0) { index += result; } else { return; }
    // Parameter UnitKPA
    result = sprintf(&buffer[index], "%.*s", 273-index, ",\"UnitKPA\":");
    if (result >= 0) { index += result; } else { return; }
    result = sprintf(&buffer[index], "%u", UnitKPA);
    if (result >= 0) { index += result; } else { return; }
    // Parameter Year
    result = sprintf(&buffer[index], "%.*s", 273-index, ",\"Year\":");
    if (result >= 0) { index += result; } else { return; }
    result = sprintf(&buffer[index], "%u", Year);
    if (result >= 0) { index += result; } else { return; }
    // Parameter Month
    result = sprintf(&buffer[index], "%.*s", 273-index, ",\"Month\":");
    if (result >= 0) { index += result; } else { return; }
    result = sprintf(&buffer[index], "%u", Month);
    if (result >= 0) { index += result; } else { return; }
    // Parameter Day
    result = sprintf(&buffer[index], "%.*s", 273-index, ",\"Day\":");
    if (result >= 0) { index += result; } else { return; }
    result = sprintf(&buffer[index], "%u", Day);
    if (result >= 0) { index += result; } else { return; }
    // Parameter Hour
    result = sprintf(&buffer[index], "%.*s", 273-index, ",\"Hour\":");
    if (result >= 0) { index += result; } else { return; }
    result = sprintf(&buffer[index], "%u", Hour);
    if (result >= 0) { index += result; } else { return; }
    // Parameter Minute
    result = sprintf(&buffer[index], "%.*s", 273-index, ",\"Minute\":");
    if (result >= 0) { index += result; } else { return; }
    result = sprintf(&buffer[index], "%u", Minute);
    if (result >= 0) { index += result; } else { return; }
    // Parameter Second
    result = sprintf(&buffer[index], "%.*s", 273-index, ",\"Second\":");
    if (result >= 0) { index += result; } else { return; }
    result = sprintf(&buffer[index], "%u", Second);
    if (result >= 0) { index += result; } else { return; }
    // Parameter Pulse
    result = sprintf(&buffer[index], "%.*s", 273-index, ",\"Pulse\":");
    if (result >= 0) { index += result; } else { return; }
    if (isnan(Pulse) || isinf(Pulse)) {
        result = sprintf(&buffer[index],"%.*s", 273-index, "null");
    } else {
        result = sprintf(&buffer[index], "%#.15g", Pulse);
    }
    if (result >= 0) { index += result; } else { return; }
    // Parameter IrregularPulse
    result = sprintf(&buffer[index], "%.*s", 273-index, ",\"IrregularPulse\":");
    if (result >= 0) { index += result; } else { return; }
    result = sprintf(&buffer[index], "%u", IrregularPulse);
    if (result >= 0) { index += result; } else { return; }
    //End of serialized message
    result = sprintf(&buffer[index], "%.*s", 273-index, "}}");
    if (result >= 0) { index += result; } else { return; }
    index += 1; //Also count zero-terminator

    // Publish the serialized message
    MQTT_send_message(buffer, index);
}

