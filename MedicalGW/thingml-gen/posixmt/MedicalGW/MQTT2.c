#include "MQTT2.h"

const char *MQTT2_topics[4] = {
    "ThingML",
    "5C:31:3E:5F:00:7A/MqttConfirmWeightScaleMeasurement",
    "5C:31:3E:5F:00:7A/MqttRequestWeightScaleMeasurement",
    "5C:31:3E:5F:00:7A/smarttracker/mass"
};
int MQTT2_topics_subscribed[4];

const int MQTT2_qos = 1;

struct mosquitto *MQTT2_mosq = NULL;

// Callback declarations
void MQTT2_log_callback(struct mosquitto *, void *, int , const char *);
void MQTT2_connect_callback(struct mosquitto *, void *, int);
void MQTT2_subscribe_callback(struct mosquitto *, void *, int , int , const int *);
void MQTT2_message_callback(struct mosquitto *, void *, const struct mosquitto_message *);

// Setup
void MQTT2_setup(struct MQTT2_Instance *_instance)
{
    const char *host = "localhost";
    int port = 1883;
    const char *username = NULL;
    const char *password = NULL;
    const char *will_topic = NULL;
    const char *will_string = NULL;

    // Initialise
    printf("[MQTT2] Initialising MQTT at %s:%i\n", host, port);
    mosquitto_lib_init();
    MQTT2_mosq = mosquitto_new(NULL, true, _instance);
    if (!MQTT2_mosq) {
        perror("[MQTT2] mosquitto_new failed ");
        return;
    }

    // Set username and password
    if (password && !username) fprintf(stderr, "[MQTT2] Warning: Not using password since username is not set.\n");
    if (username && !password) fprintf(stderr, "[MQTT2] Warning: Not using username since password is not set.\n");
    if (username && password && mosquitto_username_pw_set(MQTT2_mosq, username, password)) {
        fprintf(stderr, "[MQTT2] mosquitto_username_pw_set failed\n");
        return;
    }

    // Set callbacks
    mosquitto_log_callback_set(MQTT2_mosq, MQTT2_log_callback);
    mosquitto_connect_callback_set(MQTT2_mosq, MQTT2_connect_callback);
    mosquitto_subscribe_callback_set(MQTT2_mosq, MQTT2_subscribe_callback);
    mosquitto_message_callback_set(MQTT2_mosq, MQTT2_message_callback);

    // Set will
    if (will_string && !will_topic) fprintf(stderr, "[MQTT2] Warning: Not setting will since will_topic is not set.\n");
    if (will_string && will_topic && mosquitto_will_set(MQTT2_mosq, will_topic, strlen(will_string), will_string, MQTT2_qos, false)) {
        fprintf(stderr, "[MQTT2] mosquitto_will_set failed\n");
        return;
    }

    // Connect to broker
    int result = mosquitto_connect(MQTT2_mosq, host, port, 10);
    if (result == MOSQ_ERR_ERRNO) perror("[MQTT2] mosquitto_connect failed ");
    else if (result) fprintf(stderr, "[MQTT2] mosquitto_connect failed : %s\n", mosquitto_strerror(result));

    if (result) MQTT2_mosq = NULL;
}

// Threaded execution and polling functions
void MQTT2_start_receiver_thread() {
    int result = mosquitto_loop_forever(MQTT2_mosq, -1, 1);

    if (result == MOSQ_ERR_ERRNO) perror("[MQTT2] mosquitto_loop_forever_failed ");
    else if (result) fprintf(stderr, "[MQTT2] mosquitto_connect failed : %s\n", mosquitto_strerror(result));

	mosquitto_destroy(MQTT2_mosq);
	MQTT2_mosq = NULL;
	mosquitto_lib_cleanup();
}
void MQTT2_loop_poll() {
	if (MQTT2_mosq) {
        int result = mosquitto_loop(MQTT2_mosq, 0, 1);

        if (result == MOSQ_ERR_ERRNO) perror("[MQTT2] mosquitto_loop_forever_failed ");
        else if (result) fprintf(stderr, "[MQTT2] mosquitto_connect failed : %s\n", mosquitto_strerror(result));

        if (result) {
            mosquitto_destroy(MQTT2_mosq);
            MQTT2_mosq = NULL;
            mosquitto_lib_cleanup();
        }
    }
}

// Logging
void MQTT2_log_callback(struct mosquitto *mosq, void *_instance, int level, const char *str)
{
    //printf("[MQTT2] %s\n", str);
}

// On connected
void MQTT2_connect_callback(struct mosquitto *mosq, void *_instance, int result)
{
    int ret, i;
    switch (result) {
        case 0:
            for (i = 0; i < 4; i++) {
                ret = mosquitto_subscribe(mosq, &MQTT2_topics_subscribed[i], MQTT2_topics[i], MQTT2_qos);
                if (ret) fprintf(stderr, "[MQTT] mosquitto_subscribe failed for %s : %s\n", MQTT2_topics[i], mosquitto_strerror(result));
            }
            break;
        case 1:
            fprintf(stderr, "[MQTT2] Connection error : unacceptable protocol version\n");
            break;
        case 2:
            fprintf(stderr, "[MQTT2] Connection error : identifier rejected\n");
            break;
        case 3:
            fprintf(stderr, "[MQTT2] Connection error : broker unavailable\n");
            break;
        default:
            fprintf(stderr, "[MQTT2] Connection error : unknown reason\n");
            break;
    }
}

// On subscribed
void MQTT2_subscribe_callback(struct mosquitto *mosq, void *_instance, int mid, int qos_count, const int *granted_qos)
{
    int print = false, i;
    print = true;
    if (print) {
        // Find subscribed topic
        for (i = 0; i < 4; i++) {
            if (MQTT2_topics_subscribed[i] == mid) break;
        }
        printf("[MQTT2] Subscribed to topic '%s' - QoS levels ", MQTT2_topics[i]);
        for (i = 0; i < qos_count; i++) printf("%i ",granted_qos[i]);
        printf("\n");
    }
    for (i = 0; i < qos_count; i++)
        if (granted_qos[i] == MQTT2_qos) return;

    for (i = 0; i < 4; i++) {
        if (MQTT2_topics_subscribed[i] == mid) break;
    }
    fprintf(stderr, "[MQTT2] Topic '%s' was not granted the specified QoS level\n", MQTT2_topics[i]);
}

/* ---------- INCOMMING MESSAGES ----------*/
static uint8_t *jump_to(uint8_t *msg, int len, uint8_t *ptr, uint8_t a, uint8_t b)
{
    if (!ptr) return NULL;
    while (ptr-msg <= len) {
        if(*ptr == a || *ptr == b) return ptr;
        ptr++;
    }
    return NULL;
}

static uint8_t *jump_space(uint8_t *msg, int len, uint8_t *ptr)
{
    if (!ptr) return NULL;
    while (ptr-msg <= len) {
        if (!isspace(*ptr)) return ptr;
        ptr++;
    }
    return NULL;
}

static int parse_MqttRequestWeightScaleMeasurement(uint8_t *msg, int size, uint8_t *out_buffer) {
    uint8_t *ptr = msg;
    uint8_t *start = NULL;
    uint8_t *end = NULL;
    uint8_t *pstart = NULL;
    int index = 0;
    // Port-message code
    out_buffer[index+0] = (104 >> 8);
    out_buffer[index+1] = (104 & 0xFF);
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

static int parse_MqttConfirmWeightScaleMeasurement(uint8_t *msg, int size, uint8_t *out_buffer) {
    uint8_t *ptr = msg;
    uint8_t *start = NULL;
    uint8_t *end = NULL;
    uint8_t *pstart = NULL;
    int index = 0;
    // Port-message code
    out_buffer[index+0] = (105 >> 8);
    out_buffer[index+1] = (105 & 0xFF);
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

void MQTT2_parser(uint8_t *msg, int size, struct MQTT2_Instance *_instance) {
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
    else if (strncmp("MqttRequestWeightScaleMeasurement", start, end-start) == 0) {
        result = parse_MqttRequestWeightScaleMeasurement(ptr, size-(ptr-msg), enqueue_buffer);
    }
    else if (strncmp("MqttConfirmWeightScaleMeasurement", start, end-start) == 0) {
        result = parse_MqttConfirmWeightScaleMeasurement(ptr, size-(ptr-msg), enqueue_buffer);
    }

    // Enqueue the message
    if (result > 0) {
        externalMessageEnqueue(enqueue_buffer, result, _instance->listener_id);
    } else {
        fprintf(stderr, "[MQTT]: Error parsing message %i\n", result);
    }

}

void MQTT2_message_callback(struct mosquitto *mosq, void *_instance, const struct mosquitto_message *msg)
{
    printf("[MQTT2] Received message (%i bytes) on topic %s\n", msg->payloadlen, msg->topic);
    // Find the topic index of the message
    int i;
    for (i = 0; i < 4; i++)
        if (strcmp(msg->topic, MQTT2_topics[i]) == 0) break;

    // Only parse and enqueue the message if we are listening for it on this topic
    if (i < 4 && (i == 1 || i == 2)) {
        MQTT2_parser(msg->payload, msg->payloadlen, (struct MQTT2_Instance*)_instance);
    }
}


/* ---------- FORWARDERS ----------*/
void MQTT2_send_message(uint8_t *msg, int msglen, int topic)
{
    int ret;
    if (topic < 4) {
        printf("[MQTT2] Sending message (%i bytes) on topic %s\n", msglen, MQTT2_topics[topic]);
        ret = mosquitto_publish(MQTT2_mosq, NULL, MQTT2_topics[topic], msglen, msg, MQTT2_qos, false);
        if (ret) fprintf(stderr, "[MQTT] mosquitto_publish failed for %s : %s\n", MQTT2_topics[topic], mosquitto_strerror(ret));
    }
}

// Forwarding of messages MQTT2::ANDUC352BLEImpl::Tellu::TelluCloudWeightScale
void forward_MQTT2_ANDUC352BLEImpl_send_Tellu_TelluCloudWeightScale(struct ANDUC352BLEImpl_Instance *_instance, time_t observationTime, float mass){
    uint8_t buffer[143];
    int index = 0;
    int result;

    //Start of serialized message
    result = sprintf(&buffer[index], "%.*s", 143-index, "{\"observation\":{");
    if (result >= 0) { index += result; } else { return; }
    // Parameter deviceId
    result = sprintf(&buffer[index], "%.*s", 143-index, "\"deviceId\":");
    if (result >= 0) { index += result; } else { return; }
    result = sprintf(&buffer[index], "%.*s", 143-index, "\"5C:31:3E:5F:00:7A\"");
    if (result >= 0) { index += result; } else { return; }
    // Parameter observationTime
    result = sprintf(&buffer[index], "%.*s", 143-index, ",\"observationTime\":");
    if (result >= 0) { index += result; } else { return; }
    struct tm tbuf;
    struct tm *timebuf = gmtime(&observationTime);
    result = strftime(&buffer[index], 143-index, "\"%FT%T.000Z\"", timebuf);
    if (result >= 0) { index += result; } else { return; }
    // Parameter observations
    result = sprintf(&buffer[index], "%.*s", 143-index, ",\"observations\":");
    if (result >= 0) { index += result; } else { return; }
    result = sprintf(&buffer[index], "%.*s", 143-index, "[");
    if (result >= 0) { index += result; } else { return; }
    /* ---------- Start Tellu Cloud grouped observations ---------- */
    // Parameter mass
    result = sprintf(&buffer[index], "%.*s", 143-index, "{");
    if (result >= 0) { index += result; } else { return; }
    result = sprintf(&buffer[index], "%.*s", 143-index, "\"mass\":");
    if (result >= 0) { index += result; } else { return; }
    if (isnan(mass) || isinf(mass)) {
        result = sprintf(&buffer[index],"%.*s", 143-index, "null");
    } else {
        result = sprintf(&buffer[index], "%#.15g", mass);
    }
    if (result >= 0) { index += result; } else { return; }
    result = sprintf(&buffer[index], "%.*s", 143-index, "}");
    if (result >= 0) { index += result; } else { return; }
    /* ----------- End Tellu Cloud grouped observations ----------- */
    result = sprintf(&buffer[index], "%.*s", 143-index, "]");
    if (result >= 0) { index += result; } else { return; }
    //End of serialized message
    result = sprintf(&buffer[index], "%.*s", 143-index, "}}");
    if (result >= 0) { index += result; } else { return; }
    index += 1; //Also count zero-terminator

    // Publish the serialized message
    MQTT2_send_message(buffer, index, 3);
}

