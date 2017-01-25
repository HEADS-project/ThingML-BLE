/*****************************************************************************
 * Headers for type : NeoPixel
 *****************************************************************************/

// Definition of the instance struct:
struct NeoPixel_Instance {

// Instances of different sessions
bool active;
// Variables for the ID of the ports of the instance
uint16_t id_ctrl;
uint16_t id_clock;
// Variables for the current instance state
int NeoPixel_NeoPixelStateChart_State;
// Variables for the properties of the instance
uint8_t NeoPixel_neopixel_pin_var;
uint8_t NeoPixel_neopixel_count_var;
uint8_t NeoPixel_NeoPixelStateChart_color_r_var;
uint8_t NeoPixel_NeoPixelStateChart_color_g_var;
uint8_t NeoPixel_NeoPixelStateChart_color_b_var;
int8_t NeoPixel_NeoPixelStateChart_rotate_speed_var;
uint8_t NeoPixel_NeoPixelStateChart_breath_speed_var;
int16_t NeoPixel_NeoPixelStateChart_ROTATE_angle_var;
uint8_t NeoPixel_NeoPixelStateChart_ROTATE_maxangle_var;
uint8_t NeoPixel_NeoPixelStateChart_BREATH_counter_var;
uint8_t NeoPixel_NeoPixelStateChart_BREATH_maxcount_var;
uint8_t NeoPixel_NeoPixelStateChart_PULSE_counter_var;
uint8_t NeoPixel_NeoPixelStateChart_PULSE_maxcount_var;
// CEP stream pointers

};
// Declaration of prototypes outgoing messages:
void NeoPixel_NeoPixelStateChart_OnEntry(int state, struct NeoPixel_Instance *_instance);
void NeoPixel_handle_ctrl_breath(struct NeoPixel_Instance *_instance);
void NeoPixel_handle_ctrl_pulse(struct NeoPixel_Instance *_instance);
void NeoPixel_handle_ctrl_off(struct NeoPixel_Instance *_instance);
void NeoPixel_handle_ctrl_solid(struct NeoPixel_Instance *_instance);
void NeoPixel_handle_ctrl_setColor(struct NeoPixel_Instance *_instance, uint8_t red, uint8_t green, uint8_t blue);
void NeoPixel_handle_ctrl_rotate(struct NeoPixel_Instance *_instance, int8_t speed);
void NeoPixel_handle_clock_fps_clock(struct NeoPixel_Instance *_instance);
// Declaration of callbacks for incoming messages:

// Definition of the states:
#define NEOPIXEL_NEOPIXELSTATECHART_STATE 0
#define NEOPIXEL_NEOPIXELSTATECHART_OFF_STATE 1
#define NEOPIXEL_NEOPIXELSTATECHART_SOLID_STATE 2
#define NEOPIXEL_NEOPIXELSTATECHART_ROTATE_STATE 3
#define NEOPIXEL_NEOPIXELSTATECHART_BREATH_STATE 4
#define NEOPIXEL_NEOPIXELSTATECHART_PULSE_STATE 5


/*****************************************************************************
 * Headers for type : BPSensor
 *****************************************************************************/

// Definition of the instance struct:
struct BPSensor_Instance {

// Instances of different sessions
bool active;
// Variables for the ID of the ports of the instance
uint16_t id_clock;
uint16_t id_ctrl;
// Variables for the current instance state
int BPSensor_BPSensorImpl_State;
// Variables for the properties of the instance
// CEP stream pointers

};
// Declaration of prototypes outgoing messages:
void BPSensor_BPSensorImpl_OnEntry(int state, struct BPSensor_Instance *_instance);
void BPSensor_handle_clock_ui_clock(struct BPSensor_Instance *_instance);
// Declaration of callbacks for incoming messages:
void register_BPSensor_send_ctrl_idle_listener(void (*_listener)(struct BPSensor_Instance *));
void register_external_BPSensor_send_ctrl_idle_listener(void (*_listener)(struct BPSensor_Instance *));
void register_BPSensor_send_ctrl_pumping_listener(void (*_listener)(struct BPSensor_Instance *));
void register_external_BPSensor_send_ctrl_pumping_listener(void (*_listener)(struct BPSensor_Instance *));
void register_BPSensor_send_ctrl_measuring_listener(void (*_listener)(struct BPSensor_Instance *));
void register_external_BPSensor_send_ctrl_measuring_listener(void (*_listener)(struct BPSensor_Instance *));

// Definition of the states:
#define BPSENSOR_BPSENSORIMPL_STATE 0
#define BPSENSOR_BPSENSORIMPL_IDLE_STATE 1
#define BPSENSOR_BPSENSORIMPL_PUMPING_STATE 2
#define BPSENSOR_BPSENSORIMPL_MEASURING_STATE 3


/*****************************************************************************
 * Headers for type : BLENotifier
 *****************************************************************************/

// Definition of the instance struct:
struct BLENotifier_Instance {

// Instances of different sessions
bool active;
// Variables for the ID of the ports of the instance
uint16_t id_gateway;
uint16_t id_sensor;
uint16_t id_neopixels;
uint16_t id_clock;
// Variables for the current instance state
int BLENotifier_BLENotifierSC_State;
// Variables for the properties of the instance
// CEP stream pointers

};
// Declaration of prototypes outgoing messages:
void BLENotifier_BLENotifierSC_OnEntry(int state, struct BLENotifier_Instance *_instance);
void BLENotifier_handle_sensor_measuring(struct BLENotifier_Instance *_instance);
void BLENotifier_handle_sensor_idle(struct BLENotifier_Instance *_instance);
void BLENotifier_handle_sensor_pumping(struct BLENotifier_Instance *_instance);
void BLENotifier_handle_clock_timer_timeout(struct BLENotifier_Instance *_instance, uint8_t id);
void BLENotifier_handle_gateway_bad_measurement(struct BLENotifier_Instance *_instance);
void BLENotifier_handle_gateway_request_measurement(struct BLENotifier_Instance *_instance);
void BLENotifier_handle_gateway_measurement_received(struct BLENotifier_Instance *_instance);
void BLENotifier_handle_gateway_measurement_stored(struct BLENotifier_Instance *_instance);
void BLENotifier_handle_gateway_set_base_color(struct BLENotifier_Instance *_instance, uint8_t r, uint8_t g, uint8_t b);
// Declaration of callbacks for incoming messages:
void register_BLENotifier_send_neopixels_setColor_listener(void (*_listener)(struct BLENotifier_Instance *, uint8_t, uint8_t, uint8_t));
void register_external_BLENotifier_send_neopixels_setColor_listener(void (*_listener)(struct BLENotifier_Instance *, uint8_t, uint8_t, uint8_t));
void register_BLENotifier_send_neopixels_off_listener(void (*_listener)(struct BLENotifier_Instance *));
void register_external_BLENotifier_send_neopixels_off_listener(void (*_listener)(struct BLENotifier_Instance *));
void register_BLENotifier_send_neopixels_pulse_listener(void (*_listener)(struct BLENotifier_Instance *));
void register_external_BLENotifier_send_neopixels_pulse_listener(void (*_listener)(struct BLENotifier_Instance *));
void register_BLENotifier_send_neopixels_rotate_listener(void (*_listener)(struct BLENotifier_Instance *, int8_t));
void register_external_BLENotifier_send_neopixels_rotate_listener(void (*_listener)(struct BLENotifier_Instance *, int8_t));
void register_BLENotifier_send_neopixels_breath_listener(void (*_listener)(struct BLENotifier_Instance *));
void register_external_BLENotifier_send_neopixels_breath_listener(void (*_listener)(struct BLENotifier_Instance *));
void register_BLENotifier_send_neopixels_solid_listener(void (*_listener)(struct BLENotifier_Instance *));
void register_external_BLENotifier_send_neopixels_solid_listener(void (*_listener)(struct BLENotifier_Instance *));
void register_BLENotifier_send_clock_timer_start_listener(void (*_listener)(struct BLENotifier_Instance *, uint8_t, uint32_t));
void register_external_BLENotifier_send_clock_timer_start_listener(void (*_listener)(struct BLENotifier_Instance *, uint8_t, uint32_t));
void register_BLENotifier_send_clock_timer_cancel_listener(void (*_listener)(struct BLENotifier_Instance *, uint8_t));
void register_external_BLENotifier_send_clock_timer_cancel_listener(void (*_listener)(struct BLENotifier_Instance *, uint8_t));

// Definition of the states:
#define BLENOTIFIER_BLENOTIFIERSC_STATE 0
#define BLENOTIFIER_BLENOTIFIERSC_INIT_STATE 1
#define BLENOTIFIER_BLENOTIFIERSC_READY_STATE 2
#define BLENOTIFIER_BLENOTIFIERSC_MEASURING_STATE 3
#define BLENOTIFIER_BLENOTIFIERSC_WAITGATEWAYACK_STATE 4
#define BLENOTIFIER_BLENOTIFIERSC_GATEWAYERROR_STATE 5
#define BLENOTIFIER_BLENOTIFIERSC_WAITSERVERACK_STATE 6
#define BLENOTIFIER_BLENOTIFIERSC_SERVERERROR_STATE 7


/* Adds and instance to the runtime and returns its id */
uint16_t add_instance(void * instance_struct);
/* Returns the instance with id */
void * instance_by_id(uint16_t id);

/* Returns the number of byte currently in the fifo */
int fifo_byte_length();
/* Returns the number of bytes currently available in the fifo */
int fifo_byte_available();
/* Returns true if the fifo is empty */
int fifo_empty();
/* Return true if the fifo is full */
int fifo_full();
/* Enqueue 1 byte in the fifo if there is space
   returns 1 for sucess and 0 if the fifo was full */
int fifo_enqueue(byte b);
/* Enqueue 1 byte in the fifo without checking for available space
   The caller should have checked that there is enough space */
int _fifo_enqueue(byte b);
/* Dequeue 1 byte in the fifo.
   The caller should check that the fifo is not empty */
byte fifo_dequeue();
/*****************************************************************************
 * Headers for type : GatewayCommandParser
 *****************************************************************************/

// Definition of the instance struct:
struct GatewayCommandParser_Instance {

// Instances of different sessions
bool active;
// Variables for the ID of the ports of the instance
uint16_t id_blerx;
uint16_t id_bletx;
uint16_t id_gateway;
// Variables for the current instance state
int GatewayCommandParser_GatewayCommandParserSC_State;
// Variables for the properties of the instance
uint8_t * GatewayCommandParser_GatewayCommandParserSC_SetColor_buf_var;
uint16_t GatewayCommandParser_GatewayCommandParserSC_SetColor_buf_var_size;
uint8_t GatewayCommandParser_GatewayCommandParserSC_SetColor_idx_var;
// CEP stream pointers

};
// Declaration of prototypes outgoing messages:
void GatewayCommandParser_GatewayCommandParserSC_OnEntry(int state, struct GatewayCommandParser_Instance *_instance);
void GatewayCommandParser_handle_blerx_receive_byte(struct GatewayCommandParser_Instance *_instance, uint8_t b);
// Declaration of callbacks for incoming messages:
void register_GatewayCommandParser_send_bletx_write_byte_listener(void (*_listener)(struct GatewayCommandParser_Instance *, uint8_t));
void register_external_GatewayCommandParser_send_bletx_write_byte_listener(void (*_listener)(struct GatewayCommandParser_Instance *, uint8_t));
void register_GatewayCommandParser_send_bletx_print_message_listener(void (*_listener)(struct GatewayCommandParser_Instance *, char *));
void register_external_GatewayCommandParser_send_bletx_print_message_listener(void (*_listener)(struct GatewayCommandParser_Instance *, char *));
void register_GatewayCommandParser_send_gateway_request_measurement_listener(void (*_listener)(struct GatewayCommandParser_Instance *));
void register_external_GatewayCommandParser_send_gateway_request_measurement_listener(void (*_listener)(struct GatewayCommandParser_Instance *));
void register_GatewayCommandParser_send_gateway_measurement_received_listener(void (*_listener)(struct GatewayCommandParser_Instance *));
void register_external_GatewayCommandParser_send_gateway_measurement_received_listener(void (*_listener)(struct GatewayCommandParser_Instance *));
void register_GatewayCommandParser_send_gateway_bad_measurement_listener(void (*_listener)(struct GatewayCommandParser_Instance *));
void register_external_GatewayCommandParser_send_gateway_bad_measurement_listener(void (*_listener)(struct GatewayCommandParser_Instance *));
void register_GatewayCommandParser_send_gateway_measurement_stored_listener(void (*_listener)(struct GatewayCommandParser_Instance *));
void register_external_GatewayCommandParser_send_gateway_measurement_stored_listener(void (*_listener)(struct GatewayCommandParser_Instance *));
void register_GatewayCommandParser_send_gateway_set_base_color_listener(void (*_listener)(struct GatewayCommandParser_Instance *, uint8_t, uint8_t, uint8_t));
void register_external_GatewayCommandParser_send_gateway_set_base_color_listener(void (*_listener)(struct GatewayCommandParser_Instance *, uint8_t, uint8_t, uint8_t));

// Definition of the states:
#define GATEWAYCOMMANDPARSER_GATEWAYCOMMANDPARSERSC_STATE 0
#define GATEWAYCOMMANDPARSER_GATEWAYCOMMANDPARSERSC_READY_STATE 1
#define GATEWAYCOMMANDPARSER_GATEWAYCOMMANDPARSERSC_PARSECOMMAND_STATE 2
#define GATEWAYCOMMANDPARSER_GATEWAYCOMMANDPARSERSC_SETCOLOR_STATE 3


/*****************************************************************************
 * Headers for type : Serial
 *****************************************************************************/

// Definition of the instance struct:
struct Serial_Instance {

// Instances of different sessions
bool active;
// Variables for the ID of the ports of the instance
uint16_t id_rx;
uint16_t id_tx;
// Variables for the current instance state
int Serial_SerialImpl_State;
// Variables for the properties of the instance
// CEP stream pointers

};
// Declaration of prototypes outgoing messages:
void Serial_SerialImpl_OnEntry(int state, struct Serial_Instance *_instance);
// Declaration of callbacks for incoming messages:
void register_Serial_send_rx_receive_byte_listener(void (*_listener)(struct Serial_Instance *, uint8_t));
void register_external_Serial_send_rx_receive_byte_listener(void (*_listener)(struct Serial_Instance *, uint8_t));

// Definition of the states:
#define SERIAL_SERIALIMPL_STATE 0
#define SERIAL_SERIALIMPL_RECEIVING_STATE 1


//timer2

/*****************************************************************************
 * Implementation for type : BLENotifier
 *****************************************************************************/

// Declaration of prototypes:
//Prototypes: State Machine
void BLENotifier_BLENotifierSC_OnExit(int state, struct BLENotifier_Instance *_instance);
//Prototypes: Message Sending
void BLENotifier_send_neopixels_setColor(struct BLENotifier_Instance *_instance, uint8_t red, uint8_t green, uint8_t blue);
void BLENotifier_send_neopixels_off(struct BLENotifier_Instance *_instance);
void BLENotifier_send_neopixels_pulse(struct BLENotifier_Instance *_instance);
void BLENotifier_send_neopixels_rotate(struct BLENotifier_Instance *_instance, int8_t speed);
void BLENotifier_send_neopixels_breath(struct BLENotifier_Instance *_instance);
void BLENotifier_send_neopixels_solid(struct BLENotifier_Instance *_instance);
void BLENotifier_send_clock_timer_start(struct BLENotifier_Instance *_instance, uint8_t id, uint32_t time);
void BLENotifier_send_clock_timer_cancel(struct BLENotifier_Instance *_instance, uint8_t id);
//Prototypes: Function
void f_BLENotifier_breath(struct BLENotifier_Instance *_instance);
void f_BLENotifier_pulse(struct BLENotifier_Instance *_instance);
void f_BLENotifier_pump(struct BLENotifier_Instance *_instance);
void f_BLENotifier_measure(struct BLENotifier_Instance *_instance);
void f_BLENotifier_solid(struct BLENotifier_Instance *_instance, uint8_t r, uint8_t g, uint8_t b);
// Declaration of functions:
// Definition of function breath
void f_BLENotifier_breath(struct BLENotifier_Instance *_instance) {
BLENotifier_send_neopixels_off(_instance);
BLENotifier_send_neopixels_setColor(_instance, 120, 132, 132);
BLENotifier_send_neopixels_breath(_instance);
}
// Definition of function pulse
void f_BLENotifier_pulse(struct BLENotifier_Instance *_instance) {
BLENotifier_send_neopixels_off(_instance);
BLENotifier_send_neopixels_setColor(_instance, 255, 32, 0);
BLENotifier_send_neopixels_pulse(_instance);
}
// Definition of function pump
void f_BLENotifier_pump(struct BLENotifier_Instance *_instance) {
BLENotifier_send_neopixels_off(_instance);
BLENotifier_send_neopixels_setColor(_instance, 255, 32, 0);
BLENotifier_send_neopixels_rotate(_instance, 12);
}
// Definition of function measure
void f_BLENotifier_measure(struct BLENotifier_Instance *_instance) {
BLENotifier_send_neopixels_off(_instance);
BLENotifier_send_neopixels_setColor(_instance, 160, 140, 0);
BLENotifier_send_neopixels_rotate(_instance,  -2);
}
// Definition of function solid
void f_BLENotifier_solid(struct BLENotifier_Instance *_instance, uint8_t r, uint8_t g, uint8_t b) {
BLENotifier_send_neopixels_off(_instance);
BLENotifier_send_neopixels_setColor(_instance, r, g, b);
BLENotifier_send_neopixels_solid(_instance);
}

// Sessions functionss:


// On Entry Actions:
void BLENotifier_BLENotifierSC_OnEntry(int state, struct BLENotifier_Instance *_instance) {
switch(state) {
case BLENOTIFIER_BLENOTIFIERSC_STATE:{
_instance->BLENotifier_BLENotifierSC_State = BLENOTIFIER_BLENOTIFIERSC_INIT_STATE;
BLENotifier_BLENotifierSC_OnEntry(_instance->BLENotifier_BLENotifierSC_State, _instance);
break;
}
case BLENOTIFIER_BLENOTIFIERSC_INIT_STATE:{
f_BLENotifier_solid(_instance, 0, 128, 32);
BLENotifier_send_clock_timer_start(_instance, 0, 1000);
break;
}
case BLENOTIFIER_BLENOTIFIERSC_READY_STATE:{
break;
}
case BLENOTIFIER_BLENOTIFIERSC_MEASURING_STATE:{
break;
}
case BLENOTIFIER_BLENOTIFIERSC_WAITGATEWAYACK_STATE:{
f_BLENotifier_solid(_instance, 128, 128, 0);
BLENotifier_send_clock_timer_start(_instance, 0, 5000);
break;
}
case BLENOTIFIER_BLENOTIFIERSC_GATEWAYERROR_STATE:{
f_BLENotifier_solid(_instance, 255, 0, 0);
BLENotifier_send_clock_timer_start(_instance, 0, 2000);
break;
}
case BLENOTIFIER_BLENOTIFIERSC_WAITSERVERACK_STATE:{
BLENotifier_send_neopixels_off(_instance);
BLENotifier_send_neopixels_setColor(_instance, 0, 255, 32);
BLENotifier_send_neopixels_rotate(_instance, 25);
BLENotifier_send_clock_timer_start(_instance, 0, 5000);
break;
}
case BLENOTIFIER_BLENOTIFIERSC_SERVERERROR_STATE:{
BLENotifier_send_neopixels_setColor(_instance, 255, 32, 0);
BLENotifier_send_clock_timer_start(_instance, 0, 2000);
break;
}
default: break;
}
}

// On Exit Actions:
void BLENotifier_BLENotifierSC_OnExit(int state, struct BLENotifier_Instance *_instance) {
switch(state) {
case BLENOTIFIER_BLENOTIFIERSC_STATE:{
BLENotifier_BLENotifierSC_OnExit(_instance->BLENotifier_BLENotifierSC_State, _instance);
break;}
case BLENOTIFIER_BLENOTIFIERSC_INIT_STATE:{
break;}
case BLENOTIFIER_BLENOTIFIERSC_READY_STATE:{
break;}
case BLENOTIFIER_BLENOTIFIERSC_MEASURING_STATE:{
break;}
case BLENOTIFIER_BLENOTIFIERSC_WAITGATEWAYACK_STATE:{
break;}
case BLENOTIFIER_BLENOTIFIERSC_GATEWAYERROR_STATE:{
break;}
case BLENOTIFIER_BLENOTIFIERSC_WAITSERVERACK_STATE:{
break;}
case BLENOTIFIER_BLENOTIFIERSC_SERVERERROR_STATE:{
break;}
default: break;
}
}

// Event Handlers for incoming messages:
void BLENotifier_handle_sensor_measuring(struct BLENotifier_Instance *_instance) {
if(!(_instance->active)) return;
//Region BLENotifierSC
uint8_t BLENotifier_BLENotifierSC_State_event_consumed = 0;
if (_instance->BLENotifier_BLENotifierSC_State == BLENOTIFIER_BLENOTIFIERSC_MEASURING_STATE) {
if (BLENotifier_BLENotifierSC_State_event_consumed == 0 && 1) {
f_BLENotifier_measure(_instance);
BLENotifier_BLENotifierSC_State_event_consumed = 1;
}
}
//End Region BLENotifierSC
//End dsregion BLENotifierSC
//Session list: 
}
void BLENotifier_handle_sensor_idle(struct BLENotifier_Instance *_instance) {
if(!(_instance->active)) return;
//Region BLENotifierSC
uint8_t BLENotifier_BLENotifierSC_State_event_consumed = 0;
if (_instance->BLENotifier_BLENotifierSC_State == BLENOTIFIER_BLENOTIFIERSC_MEASURING_STATE) {
if (BLENotifier_BLENotifierSC_State_event_consumed == 0 && 1) {
BLENotifier_BLENotifierSC_OnExit(BLENOTIFIER_BLENOTIFIERSC_MEASURING_STATE, _instance);
_instance->BLENotifier_BLENotifierSC_State = BLENOTIFIER_BLENOTIFIERSC_WAITGATEWAYACK_STATE;
BLENotifier_BLENotifierSC_OnEntry(BLENOTIFIER_BLENOTIFIERSC_WAITGATEWAYACK_STATE, _instance);
BLENotifier_BLENotifierSC_State_event_consumed = 1;
}
}
//End Region BLENotifierSC
//End dsregion BLENotifierSC
//Session list: 
}
void BLENotifier_handle_sensor_pumping(struct BLENotifier_Instance *_instance) {
if(!(_instance->active)) return;
//Region BLENotifierSC
uint8_t BLENotifier_BLENotifierSC_State_event_consumed = 0;
if (_instance->BLENotifier_BLENotifierSC_State == BLENOTIFIER_BLENOTIFIERSC_READY_STATE) {
if (BLENotifier_BLENotifierSC_State_event_consumed == 0 && 1) {
BLENotifier_BLENotifierSC_OnExit(BLENOTIFIER_BLENOTIFIERSC_READY_STATE, _instance);
_instance->BLENotifier_BLENotifierSC_State = BLENOTIFIER_BLENOTIFIERSC_MEASURING_STATE;
f_BLENotifier_pump(_instance);
BLENotifier_BLENotifierSC_OnEntry(BLENOTIFIER_BLENOTIFIERSC_MEASURING_STATE, _instance);
BLENotifier_BLENotifierSC_State_event_consumed = 1;
}
}
else if (_instance->BLENotifier_BLENotifierSC_State == BLENOTIFIER_BLENOTIFIERSC_MEASURING_STATE) {
if (BLENotifier_BLENotifierSC_State_event_consumed == 0 && 1) {
f_BLENotifier_pump(_instance);
BLENotifier_BLENotifierSC_State_event_consumed = 1;
}
}
//End Region BLENotifierSC
//End dsregion BLENotifierSC
//Session list: 
}
void BLENotifier_handle_clock_timer_timeout(struct BLENotifier_Instance *_instance, uint8_t id) {
if(!(_instance->active)) return;
//Region BLENotifierSC
uint8_t BLENotifier_BLENotifierSC_State_event_consumed = 0;
if (_instance->BLENotifier_BLENotifierSC_State == BLENOTIFIER_BLENOTIFIERSC_INIT_STATE) {
if (BLENotifier_BLENotifierSC_State_event_consumed == 0 && id == 0) {
BLENotifier_BLENotifierSC_OnExit(BLENOTIFIER_BLENOTIFIERSC_INIT_STATE, _instance);
_instance->BLENotifier_BLENotifierSC_State = BLENOTIFIER_BLENOTIFIERSC_READY_STATE;
f_BLENotifier_breath(_instance);
BLENotifier_BLENotifierSC_OnEntry(BLENOTIFIER_BLENOTIFIERSC_READY_STATE, _instance);
BLENotifier_BLENotifierSC_State_event_consumed = 1;
}
}
else if (_instance->BLENotifier_BLENotifierSC_State == BLENOTIFIER_BLENOTIFIERSC_WAITGATEWAYACK_STATE) {
if (BLENotifier_BLENotifierSC_State_event_consumed == 0 && id == 0) {
BLENotifier_BLENotifierSC_OnExit(BLENOTIFIER_BLENOTIFIERSC_WAITGATEWAYACK_STATE, _instance);
_instance->BLENotifier_BLENotifierSC_State = BLENOTIFIER_BLENOTIFIERSC_GATEWAYERROR_STATE;
BLENotifier_BLENotifierSC_OnEntry(BLENOTIFIER_BLENOTIFIERSC_GATEWAYERROR_STATE, _instance);
BLENotifier_BLENotifierSC_State_event_consumed = 1;
}
}
else if (_instance->BLENotifier_BLENotifierSC_State == BLENOTIFIER_BLENOTIFIERSC_GATEWAYERROR_STATE) {
if (BLENotifier_BLENotifierSC_State_event_consumed == 0 && id == 0) {
BLENotifier_BLENotifierSC_OnExit(BLENOTIFIER_BLENOTIFIERSC_GATEWAYERROR_STATE, _instance);
_instance->BLENotifier_BLENotifierSC_State = BLENOTIFIER_BLENOTIFIERSC_READY_STATE;
f_BLENotifier_pulse(_instance);
BLENotifier_BLENotifierSC_OnEntry(BLENOTIFIER_BLENOTIFIERSC_READY_STATE, _instance);
BLENotifier_BLENotifierSC_State_event_consumed = 1;
}
}
else if (_instance->BLENotifier_BLENotifierSC_State == BLENOTIFIER_BLENOTIFIERSC_WAITSERVERACK_STATE) {
if (BLENotifier_BLENotifierSC_State_event_consumed == 0 && id == 0) {
BLENotifier_BLENotifierSC_OnExit(BLENOTIFIER_BLENOTIFIERSC_WAITSERVERACK_STATE, _instance);
_instance->BLENotifier_BLENotifierSC_State = BLENOTIFIER_BLENOTIFIERSC_SERVERERROR_STATE;
BLENotifier_BLENotifierSC_OnEntry(BLENOTIFIER_BLENOTIFIERSC_SERVERERROR_STATE, _instance);
BLENotifier_BLENotifierSC_State_event_consumed = 1;
}
}
else if (_instance->BLENotifier_BLENotifierSC_State == BLENOTIFIER_BLENOTIFIERSC_SERVERERROR_STATE) {
if (BLENotifier_BLENotifierSC_State_event_consumed == 0 && id == 0) {
BLENotifier_BLENotifierSC_OnExit(BLENOTIFIER_BLENOTIFIERSC_SERVERERROR_STATE, _instance);
_instance->BLENotifier_BLENotifierSC_State = BLENOTIFIER_BLENOTIFIERSC_READY_STATE;
f_BLENotifier_breath(_instance);
BLENotifier_BLENotifierSC_OnEntry(BLENOTIFIER_BLENOTIFIERSC_READY_STATE, _instance);
BLENotifier_BLENotifierSC_State_event_consumed = 1;
}
}
//End Region BLENotifierSC
//End dsregion BLENotifierSC
//Session list: 
}
void BLENotifier_handle_gateway_bad_measurement(struct BLENotifier_Instance *_instance) {
if(!(_instance->active)) return;
//Region BLENotifierSC
uint8_t BLENotifier_BLENotifierSC_State_event_consumed = 0;
if (_instance->BLENotifier_BLENotifierSC_State == BLENOTIFIER_BLENOTIFIERSC_WAITGATEWAYACK_STATE) {
if (BLENotifier_BLENotifierSC_State_event_consumed == 0 && 1) {
BLENotifier_BLENotifierSC_OnExit(BLENOTIFIER_BLENOTIFIERSC_WAITGATEWAYACK_STATE, _instance);
_instance->BLENotifier_BLENotifierSC_State = BLENOTIFIER_BLENOTIFIERSC_GATEWAYERROR_STATE;
BLENotifier_BLENotifierSC_OnEntry(BLENOTIFIER_BLENOTIFIERSC_GATEWAYERROR_STATE, _instance);
BLENotifier_BLENotifierSC_State_event_consumed = 1;
}
}
//End Region BLENotifierSC
//End dsregion BLENotifierSC
//Session list: 
}
void BLENotifier_handle_gateway_request_measurement(struct BLENotifier_Instance *_instance) {
if(!(_instance->active)) return;
//Region BLENotifierSC
uint8_t BLENotifier_BLENotifierSC_State_event_consumed = 0;
if (_instance->BLENotifier_BLENotifierSC_State == BLENOTIFIER_BLENOTIFIERSC_READY_STATE) {
if (BLENotifier_BLENotifierSC_State_event_consumed == 0 && 1) {
f_BLENotifier_pulse(_instance);
BLENotifier_BLENotifierSC_State_event_consumed = 1;
}
}
//End Region BLENotifierSC
//End dsregion BLENotifierSC
//Session list: 
}
void BLENotifier_handle_gateway_measurement_received(struct BLENotifier_Instance *_instance) {
if(!(_instance->active)) return;
//Region BLENotifierSC
uint8_t BLENotifier_BLENotifierSC_State_event_consumed = 0;
if (_instance->BLENotifier_BLENotifierSC_State == BLENOTIFIER_BLENOTIFIERSC_WAITGATEWAYACK_STATE) {
if (BLENotifier_BLENotifierSC_State_event_consumed == 0 && 1) {
BLENotifier_BLENotifierSC_OnExit(BLENOTIFIER_BLENOTIFIERSC_WAITGATEWAYACK_STATE, _instance);
_instance->BLENotifier_BLENotifierSC_State = BLENOTIFIER_BLENOTIFIERSC_WAITSERVERACK_STATE;
BLENotifier_BLENotifierSC_OnEntry(BLENOTIFIER_BLENOTIFIERSC_WAITSERVERACK_STATE, _instance);
BLENotifier_BLENotifierSC_State_event_consumed = 1;
}
}
//End Region BLENotifierSC
//End dsregion BLENotifierSC
//Session list: 
}
void BLENotifier_handle_gateway_measurement_stored(struct BLENotifier_Instance *_instance) {
if(!(_instance->active)) return;
//Region BLENotifierSC
uint8_t BLENotifier_BLENotifierSC_State_event_consumed = 0;
if (_instance->BLENotifier_BLENotifierSC_State == BLENOTIFIER_BLENOTIFIERSC_WAITSERVERACK_STATE) {
if (BLENotifier_BLENotifierSC_State_event_consumed == 0 && 1) {
BLENotifier_BLENotifierSC_OnExit(BLENOTIFIER_BLENOTIFIERSC_WAITSERVERACK_STATE, _instance);
_instance->BLENotifier_BLENotifierSC_State = BLENOTIFIER_BLENOTIFIERSC_READY_STATE;
f_BLENotifier_breath(_instance);
BLENotifier_BLENotifierSC_OnEntry(BLENOTIFIER_BLENOTIFIERSC_READY_STATE, _instance);
BLENotifier_BLENotifierSC_State_event_consumed = 1;
}
}
//End Region BLENotifierSC
//End dsregion BLENotifierSC
//Session list: 
}
void BLENotifier_handle_gateway_set_base_color(struct BLENotifier_Instance *_instance, uint8_t r, uint8_t g, uint8_t b) {
if(!(_instance->active)) return;
//Region BLENotifierSC
uint8_t BLENotifier_BLENotifierSC_State_event_consumed = 0;
//End Region BLENotifierSC
//End dsregion BLENotifierSC
//Session list: 
if (1) {
BLENotifier_send_neopixels_setColor(_instance, r, g, b);
BLENotifier_BLENotifierSC_State_event_consumed = 1;
}
}

// Observers for outgoing messages:
void (*external_BLENotifier_send_neopixels_setColor_listener)(struct BLENotifier_Instance *, uint8_t, uint8_t, uint8_t)= 0x0;
void (*BLENotifier_send_neopixels_setColor_listener)(struct BLENotifier_Instance *, uint8_t, uint8_t, uint8_t)= 0x0;
void register_external_BLENotifier_send_neopixels_setColor_listener(void (*_listener)(struct BLENotifier_Instance *, uint8_t, uint8_t, uint8_t)){
external_BLENotifier_send_neopixels_setColor_listener = _listener;
}
void register_BLENotifier_send_neopixels_setColor_listener(void (*_listener)(struct BLENotifier_Instance *, uint8_t, uint8_t, uint8_t)){
BLENotifier_send_neopixels_setColor_listener = _listener;
}
void BLENotifier_send_neopixels_setColor(struct BLENotifier_Instance *_instance, uint8_t red, uint8_t green, uint8_t blue){
if (BLENotifier_send_neopixels_setColor_listener != 0x0) BLENotifier_send_neopixels_setColor_listener(_instance, red, green, blue);
if (external_BLENotifier_send_neopixels_setColor_listener != 0x0) external_BLENotifier_send_neopixels_setColor_listener(_instance, red, green, blue);
;
}
void (*external_BLENotifier_send_neopixels_off_listener)(struct BLENotifier_Instance *)= 0x0;
void (*BLENotifier_send_neopixels_off_listener)(struct BLENotifier_Instance *)= 0x0;
void register_external_BLENotifier_send_neopixels_off_listener(void (*_listener)(struct BLENotifier_Instance *)){
external_BLENotifier_send_neopixels_off_listener = _listener;
}
void register_BLENotifier_send_neopixels_off_listener(void (*_listener)(struct BLENotifier_Instance *)){
BLENotifier_send_neopixels_off_listener = _listener;
}
void BLENotifier_send_neopixels_off(struct BLENotifier_Instance *_instance){
if (BLENotifier_send_neopixels_off_listener != 0x0) BLENotifier_send_neopixels_off_listener(_instance);
if (external_BLENotifier_send_neopixels_off_listener != 0x0) external_BLENotifier_send_neopixels_off_listener(_instance);
;
}
void (*external_BLENotifier_send_neopixels_pulse_listener)(struct BLENotifier_Instance *)= 0x0;
void (*BLENotifier_send_neopixels_pulse_listener)(struct BLENotifier_Instance *)= 0x0;
void register_external_BLENotifier_send_neopixels_pulse_listener(void (*_listener)(struct BLENotifier_Instance *)){
external_BLENotifier_send_neopixels_pulse_listener = _listener;
}
void register_BLENotifier_send_neopixels_pulse_listener(void (*_listener)(struct BLENotifier_Instance *)){
BLENotifier_send_neopixels_pulse_listener = _listener;
}
void BLENotifier_send_neopixels_pulse(struct BLENotifier_Instance *_instance){
if (BLENotifier_send_neopixels_pulse_listener != 0x0) BLENotifier_send_neopixels_pulse_listener(_instance);
if (external_BLENotifier_send_neopixels_pulse_listener != 0x0) external_BLENotifier_send_neopixels_pulse_listener(_instance);
;
}
void (*external_BLENotifier_send_neopixels_rotate_listener)(struct BLENotifier_Instance *, int8_t)= 0x0;
void (*BLENotifier_send_neopixels_rotate_listener)(struct BLENotifier_Instance *, int8_t)= 0x0;
void register_external_BLENotifier_send_neopixels_rotate_listener(void (*_listener)(struct BLENotifier_Instance *, int8_t)){
external_BLENotifier_send_neopixels_rotate_listener = _listener;
}
void register_BLENotifier_send_neopixels_rotate_listener(void (*_listener)(struct BLENotifier_Instance *, int8_t)){
BLENotifier_send_neopixels_rotate_listener = _listener;
}
void BLENotifier_send_neopixels_rotate(struct BLENotifier_Instance *_instance, int8_t speed){
if (BLENotifier_send_neopixels_rotate_listener != 0x0) BLENotifier_send_neopixels_rotate_listener(_instance, speed);
if (external_BLENotifier_send_neopixels_rotate_listener != 0x0) external_BLENotifier_send_neopixels_rotate_listener(_instance, speed);
;
}
void (*external_BLENotifier_send_neopixels_breath_listener)(struct BLENotifier_Instance *)= 0x0;
void (*BLENotifier_send_neopixels_breath_listener)(struct BLENotifier_Instance *)= 0x0;
void register_external_BLENotifier_send_neopixels_breath_listener(void (*_listener)(struct BLENotifier_Instance *)){
external_BLENotifier_send_neopixels_breath_listener = _listener;
}
void register_BLENotifier_send_neopixels_breath_listener(void (*_listener)(struct BLENotifier_Instance *)){
BLENotifier_send_neopixels_breath_listener = _listener;
}
void BLENotifier_send_neopixels_breath(struct BLENotifier_Instance *_instance){
if (BLENotifier_send_neopixels_breath_listener != 0x0) BLENotifier_send_neopixels_breath_listener(_instance);
if (external_BLENotifier_send_neopixels_breath_listener != 0x0) external_BLENotifier_send_neopixels_breath_listener(_instance);
;
}
void (*external_BLENotifier_send_neopixels_solid_listener)(struct BLENotifier_Instance *)= 0x0;
void (*BLENotifier_send_neopixels_solid_listener)(struct BLENotifier_Instance *)= 0x0;
void register_external_BLENotifier_send_neopixels_solid_listener(void (*_listener)(struct BLENotifier_Instance *)){
external_BLENotifier_send_neopixels_solid_listener = _listener;
}
void register_BLENotifier_send_neopixels_solid_listener(void (*_listener)(struct BLENotifier_Instance *)){
BLENotifier_send_neopixels_solid_listener = _listener;
}
void BLENotifier_send_neopixels_solid(struct BLENotifier_Instance *_instance){
if (BLENotifier_send_neopixels_solid_listener != 0x0) BLENotifier_send_neopixels_solid_listener(_instance);
if (external_BLENotifier_send_neopixels_solid_listener != 0x0) external_BLENotifier_send_neopixels_solid_listener(_instance);
;
}
void (*external_BLENotifier_send_clock_timer_start_listener)(struct BLENotifier_Instance *, uint8_t, uint32_t)= 0x0;
void (*BLENotifier_send_clock_timer_start_listener)(struct BLENotifier_Instance *, uint8_t, uint32_t)= 0x0;
void register_external_BLENotifier_send_clock_timer_start_listener(void (*_listener)(struct BLENotifier_Instance *, uint8_t, uint32_t)){
external_BLENotifier_send_clock_timer_start_listener = _listener;
}
void register_BLENotifier_send_clock_timer_start_listener(void (*_listener)(struct BLENotifier_Instance *, uint8_t, uint32_t)){
BLENotifier_send_clock_timer_start_listener = _listener;
}
void BLENotifier_send_clock_timer_start(struct BLENotifier_Instance *_instance, uint8_t id, uint32_t time){
if (BLENotifier_send_clock_timer_start_listener != 0x0) BLENotifier_send_clock_timer_start_listener(_instance, id, time);
if (external_BLENotifier_send_clock_timer_start_listener != 0x0) external_BLENotifier_send_clock_timer_start_listener(_instance, id, time);
;
}
void (*external_BLENotifier_send_clock_timer_cancel_listener)(struct BLENotifier_Instance *, uint8_t)= 0x0;
void (*BLENotifier_send_clock_timer_cancel_listener)(struct BLENotifier_Instance *, uint8_t)= 0x0;
void register_external_BLENotifier_send_clock_timer_cancel_listener(void (*_listener)(struct BLENotifier_Instance *, uint8_t)){
external_BLENotifier_send_clock_timer_cancel_listener = _listener;
}
void register_BLENotifier_send_clock_timer_cancel_listener(void (*_listener)(struct BLENotifier_Instance *, uint8_t)){
BLENotifier_send_clock_timer_cancel_listener = _listener;
}
void BLENotifier_send_clock_timer_cancel(struct BLENotifier_Instance *_instance, uint8_t id){
if (BLENotifier_send_clock_timer_cancel_listener != 0x0) BLENotifier_send_clock_timer_cancel_listener(_instance, id);
if (external_BLENotifier_send_clock_timer_cancel_listener != 0x0) external_BLENotifier_send_clock_timer_cancel_listener(_instance, id);
;
}



/*****************************************************************************
 * Implementation for type : GatewayCommandParser
 *****************************************************************************/

// Declaration of prototypes:
//Prototypes: State Machine
void GatewayCommandParser_GatewayCommandParserSC_OnExit(int state, struct GatewayCommandParser_Instance *_instance);
//Prototypes: Message Sending
void GatewayCommandParser_send_bletx_write_byte(struct GatewayCommandParser_Instance *_instance, uint8_t b);
void GatewayCommandParser_send_bletx_print_message(struct GatewayCommandParser_Instance *_instance, char * msg);
void GatewayCommandParser_send_gateway_request_measurement(struct GatewayCommandParser_Instance *_instance);
void GatewayCommandParser_send_gateway_measurement_received(struct GatewayCommandParser_Instance *_instance);
void GatewayCommandParser_send_gateway_bad_measurement(struct GatewayCommandParser_Instance *_instance);
void GatewayCommandParser_send_gateway_measurement_stored(struct GatewayCommandParser_Instance *_instance);
void GatewayCommandParser_send_gateway_set_base_color(struct GatewayCommandParser_Instance *_instance, uint8_t r, uint8_t g, uint8_t b);
//Prototypes: Function
// Declaration of functions:

// Sessions functionss:


// On Entry Actions:
void GatewayCommandParser_GatewayCommandParserSC_OnEntry(int state, struct GatewayCommandParser_Instance *_instance) {
switch(state) {
case GATEWAYCOMMANDPARSER_GATEWAYCOMMANDPARSERSC_STATE:{
_instance->GatewayCommandParser_GatewayCommandParserSC_State = GATEWAYCOMMANDPARSER_GATEWAYCOMMANDPARSERSC_READY_STATE;
GatewayCommandParser_GatewayCommandParserSC_OnEntry(_instance->GatewayCommandParser_GatewayCommandParserSC_State, _instance);
break;
}
case GATEWAYCOMMANDPARSER_GATEWAYCOMMANDPARSERSC_READY_STATE:{
break;
}
case GATEWAYCOMMANDPARSER_GATEWAYCOMMANDPARSERSC_PARSECOMMAND_STATE:{
break;
}
case GATEWAYCOMMANDPARSER_GATEWAYCOMMANDPARSERSC_SETCOLOR_STATE:{
_instance->GatewayCommandParser_GatewayCommandParserSC_SetColor_idx_var = 0;
break;
}
default: break;
}
}

// On Exit Actions:
void GatewayCommandParser_GatewayCommandParserSC_OnExit(int state, struct GatewayCommandParser_Instance *_instance) {
switch(state) {
case GATEWAYCOMMANDPARSER_GATEWAYCOMMANDPARSERSC_STATE:{
GatewayCommandParser_GatewayCommandParserSC_OnExit(_instance->GatewayCommandParser_GatewayCommandParserSC_State, _instance);
break;}
case GATEWAYCOMMANDPARSER_GATEWAYCOMMANDPARSERSC_READY_STATE:{
break;}
case GATEWAYCOMMANDPARSER_GATEWAYCOMMANDPARSERSC_PARSECOMMAND_STATE:{
break;}
case GATEWAYCOMMANDPARSER_GATEWAYCOMMANDPARSERSC_SETCOLOR_STATE:{
break;}
default: break;
}
}

// Event Handlers for incoming messages:
void GatewayCommandParser_handle_blerx_receive_byte(struct GatewayCommandParser_Instance *_instance, uint8_t b) {
if(!(_instance->active)) return;
//Region GatewayCommandParserSC
uint8_t GatewayCommandParser_GatewayCommandParserSC_State_event_consumed = 0;
if (_instance->GatewayCommandParser_GatewayCommandParserSC_State == GATEWAYCOMMANDPARSER_GATEWAYCOMMANDPARSERSC_READY_STATE) {
if (GatewayCommandParser_GatewayCommandParserSC_State_event_consumed == 0 && b == '!') {
GatewayCommandParser_GatewayCommandParserSC_OnExit(GATEWAYCOMMANDPARSER_GATEWAYCOMMANDPARSERSC_READY_STATE, _instance);
_instance->GatewayCommandParser_GatewayCommandParserSC_State = GATEWAYCOMMANDPARSER_GATEWAYCOMMANDPARSERSC_PARSECOMMAND_STATE;
GatewayCommandParser_GatewayCommandParserSC_OnEntry(GATEWAYCOMMANDPARSER_GATEWAYCOMMANDPARSERSC_PARSECOMMAND_STATE, _instance);
GatewayCommandParser_GatewayCommandParserSC_State_event_consumed = 1;
}
}
else if (_instance->GatewayCommandParser_GatewayCommandParserSC_State == GATEWAYCOMMANDPARSER_GATEWAYCOMMANDPARSERSC_PARSECOMMAND_STATE) {
if (GatewayCommandParser_GatewayCommandParserSC_State_event_consumed == 0 && b == 'C') {
GatewayCommandParser_GatewayCommandParserSC_OnExit(GATEWAYCOMMANDPARSER_GATEWAYCOMMANDPARSERSC_PARSECOMMAND_STATE, _instance);
_instance->GatewayCommandParser_GatewayCommandParserSC_State = GATEWAYCOMMANDPARSER_GATEWAYCOMMANDPARSERSC_SETCOLOR_STATE;
GatewayCommandParser_GatewayCommandParserSC_OnEntry(GATEWAYCOMMANDPARSER_GATEWAYCOMMANDPARSERSC_SETCOLOR_STATE, _instance);
GatewayCommandParser_GatewayCommandParserSC_State_event_consumed = 1;
}
else if (GatewayCommandParser_GatewayCommandParserSC_State_event_consumed == 0 && b == 'R') {
GatewayCommandParser_GatewayCommandParserSC_OnExit(GATEWAYCOMMANDPARSER_GATEWAYCOMMANDPARSERSC_PARSECOMMAND_STATE, _instance);
_instance->GatewayCommandParser_GatewayCommandParserSC_State = GATEWAYCOMMANDPARSER_GATEWAYCOMMANDPARSERSC_READY_STATE;
GatewayCommandParser_send_gateway_request_measurement(_instance);
GatewayCommandParser_GatewayCommandParserSC_OnEntry(GATEWAYCOMMANDPARSER_GATEWAYCOMMANDPARSERSC_READY_STATE, _instance);
GatewayCommandParser_GatewayCommandParserSC_State_event_consumed = 1;
}
else if (GatewayCommandParser_GatewayCommandParserSC_State_event_consumed == 0 && b == 'G') {
GatewayCommandParser_GatewayCommandParserSC_OnExit(GATEWAYCOMMANDPARSER_GATEWAYCOMMANDPARSERSC_PARSECOMMAND_STATE, _instance);
_instance->GatewayCommandParser_GatewayCommandParserSC_State = GATEWAYCOMMANDPARSER_GATEWAYCOMMANDPARSERSC_READY_STATE;
GatewayCommandParser_send_gateway_measurement_received(_instance);
GatewayCommandParser_GatewayCommandParserSC_OnEntry(GATEWAYCOMMANDPARSER_GATEWAYCOMMANDPARSERSC_READY_STATE, _instance);
GatewayCommandParser_GatewayCommandParserSC_State_event_consumed = 1;
}
else if (GatewayCommandParser_GatewayCommandParserSC_State_event_consumed == 0 && b == 'E') {
GatewayCommandParser_GatewayCommandParserSC_OnExit(GATEWAYCOMMANDPARSER_GATEWAYCOMMANDPARSERSC_PARSECOMMAND_STATE, _instance);
_instance->GatewayCommandParser_GatewayCommandParserSC_State = GATEWAYCOMMANDPARSER_GATEWAYCOMMANDPARSERSC_READY_STATE;
GatewayCommandParser_send_gateway_bad_measurement(_instance);
GatewayCommandParser_GatewayCommandParserSC_OnEntry(GATEWAYCOMMANDPARSER_GATEWAYCOMMANDPARSERSC_READY_STATE, _instance);
GatewayCommandParser_GatewayCommandParserSC_State_event_consumed = 1;
}
else if (GatewayCommandParser_GatewayCommandParserSC_State_event_consumed == 0 && b == 'S') {
GatewayCommandParser_GatewayCommandParserSC_OnExit(GATEWAYCOMMANDPARSER_GATEWAYCOMMANDPARSERSC_PARSECOMMAND_STATE, _instance);
_instance->GatewayCommandParser_GatewayCommandParserSC_State = GATEWAYCOMMANDPARSER_GATEWAYCOMMANDPARSERSC_READY_STATE;
GatewayCommandParser_send_gateway_measurement_stored(_instance);
GatewayCommandParser_GatewayCommandParserSC_OnEntry(GATEWAYCOMMANDPARSER_GATEWAYCOMMANDPARSERSC_READY_STATE, _instance);
GatewayCommandParser_GatewayCommandParserSC_State_event_consumed = 1;
}
}
else if (_instance->GatewayCommandParser_GatewayCommandParserSC_State == GATEWAYCOMMANDPARSER_GATEWAYCOMMANDPARSERSC_SETCOLOR_STATE) {
if (GatewayCommandParser_GatewayCommandParserSC_State_event_consumed == 0 && _instance->GatewayCommandParser_GatewayCommandParserSC_SetColor_idx_var == 2) {
GatewayCommandParser_GatewayCommandParserSC_OnExit(GATEWAYCOMMANDPARSER_GATEWAYCOMMANDPARSERSC_SETCOLOR_STATE, _instance);
_instance->GatewayCommandParser_GatewayCommandParserSC_State = GATEWAYCOMMANDPARSER_GATEWAYCOMMANDPARSERSC_READY_STATE;
GatewayCommandParser_send_gateway_set_base_color(_instance, _instance->GatewayCommandParser_GatewayCommandParserSC_SetColor_buf_var[0]
, _instance->GatewayCommandParser_GatewayCommandParserSC_SetColor_buf_var[1]
, b);
GatewayCommandParser_GatewayCommandParserSC_OnEntry(GATEWAYCOMMANDPARSER_GATEWAYCOMMANDPARSERSC_READY_STATE, _instance);
GatewayCommandParser_GatewayCommandParserSC_State_event_consumed = 1;
}
else if (GatewayCommandParser_GatewayCommandParserSC_State_event_consumed == 0 && _instance->GatewayCommandParser_GatewayCommandParserSC_SetColor_idx_var < 2) {
_instance->GatewayCommandParser_GatewayCommandParserSC_SetColor_buf_var[_instance->GatewayCommandParser_GatewayCommandParserSC_SetColor_idx_var] = b;
_instance->GatewayCommandParser_GatewayCommandParserSC_SetColor_idx_var = _instance->GatewayCommandParser_GatewayCommandParserSC_SetColor_idx_var + 1;
GatewayCommandParser_GatewayCommandParserSC_State_event_consumed = 1;
}
}
//End Region GatewayCommandParserSC
//End dsregion GatewayCommandParserSC
//Session list: 
}

// Observers for outgoing messages:
void (*external_GatewayCommandParser_send_bletx_write_byte_listener)(struct GatewayCommandParser_Instance *, uint8_t)= 0x0;
void (*GatewayCommandParser_send_bletx_write_byte_listener)(struct GatewayCommandParser_Instance *, uint8_t)= 0x0;
void register_external_GatewayCommandParser_send_bletx_write_byte_listener(void (*_listener)(struct GatewayCommandParser_Instance *, uint8_t)){
external_GatewayCommandParser_send_bletx_write_byte_listener = _listener;
}
void register_GatewayCommandParser_send_bletx_write_byte_listener(void (*_listener)(struct GatewayCommandParser_Instance *, uint8_t)){
GatewayCommandParser_send_bletx_write_byte_listener = _listener;
}
void GatewayCommandParser_send_bletx_write_byte(struct GatewayCommandParser_Instance *_instance, uint8_t b){
if (GatewayCommandParser_send_bletx_write_byte_listener != 0x0) GatewayCommandParser_send_bletx_write_byte_listener(_instance, b);
if (external_GatewayCommandParser_send_bletx_write_byte_listener != 0x0) external_GatewayCommandParser_send_bletx_write_byte_listener(_instance, b);
;
}
void (*external_GatewayCommandParser_send_bletx_print_message_listener)(struct GatewayCommandParser_Instance *, char *)= 0x0;
void (*GatewayCommandParser_send_bletx_print_message_listener)(struct GatewayCommandParser_Instance *, char *)= 0x0;
void register_external_GatewayCommandParser_send_bletx_print_message_listener(void (*_listener)(struct GatewayCommandParser_Instance *, char *)){
external_GatewayCommandParser_send_bletx_print_message_listener = _listener;
}
void register_GatewayCommandParser_send_bletx_print_message_listener(void (*_listener)(struct GatewayCommandParser_Instance *, char *)){
GatewayCommandParser_send_bletx_print_message_listener = _listener;
}
void GatewayCommandParser_send_bletx_print_message(struct GatewayCommandParser_Instance *_instance, char * msg){
if (GatewayCommandParser_send_bletx_print_message_listener != 0x0) GatewayCommandParser_send_bletx_print_message_listener(_instance, msg);
if (external_GatewayCommandParser_send_bletx_print_message_listener != 0x0) external_GatewayCommandParser_send_bletx_print_message_listener(_instance, msg);
;
}
void (*external_GatewayCommandParser_send_gateway_request_measurement_listener)(struct GatewayCommandParser_Instance *)= 0x0;
void (*GatewayCommandParser_send_gateway_request_measurement_listener)(struct GatewayCommandParser_Instance *)= 0x0;
void register_external_GatewayCommandParser_send_gateway_request_measurement_listener(void (*_listener)(struct GatewayCommandParser_Instance *)){
external_GatewayCommandParser_send_gateway_request_measurement_listener = _listener;
}
void register_GatewayCommandParser_send_gateway_request_measurement_listener(void (*_listener)(struct GatewayCommandParser_Instance *)){
GatewayCommandParser_send_gateway_request_measurement_listener = _listener;
}
void GatewayCommandParser_send_gateway_request_measurement(struct GatewayCommandParser_Instance *_instance){
if (GatewayCommandParser_send_gateway_request_measurement_listener != 0x0) GatewayCommandParser_send_gateway_request_measurement_listener(_instance);
if (external_GatewayCommandParser_send_gateway_request_measurement_listener != 0x0) external_GatewayCommandParser_send_gateway_request_measurement_listener(_instance);
;
}
void (*external_GatewayCommandParser_send_gateway_measurement_received_listener)(struct GatewayCommandParser_Instance *)= 0x0;
void (*GatewayCommandParser_send_gateway_measurement_received_listener)(struct GatewayCommandParser_Instance *)= 0x0;
void register_external_GatewayCommandParser_send_gateway_measurement_received_listener(void (*_listener)(struct GatewayCommandParser_Instance *)){
external_GatewayCommandParser_send_gateway_measurement_received_listener = _listener;
}
void register_GatewayCommandParser_send_gateway_measurement_received_listener(void (*_listener)(struct GatewayCommandParser_Instance *)){
GatewayCommandParser_send_gateway_measurement_received_listener = _listener;
}
void GatewayCommandParser_send_gateway_measurement_received(struct GatewayCommandParser_Instance *_instance){
if (GatewayCommandParser_send_gateway_measurement_received_listener != 0x0) GatewayCommandParser_send_gateway_measurement_received_listener(_instance);
if (external_GatewayCommandParser_send_gateway_measurement_received_listener != 0x0) external_GatewayCommandParser_send_gateway_measurement_received_listener(_instance);
;
}
void (*external_GatewayCommandParser_send_gateway_bad_measurement_listener)(struct GatewayCommandParser_Instance *)= 0x0;
void (*GatewayCommandParser_send_gateway_bad_measurement_listener)(struct GatewayCommandParser_Instance *)= 0x0;
void register_external_GatewayCommandParser_send_gateway_bad_measurement_listener(void (*_listener)(struct GatewayCommandParser_Instance *)){
external_GatewayCommandParser_send_gateway_bad_measurement_listener = _listener;
}
void register_GatewayCommandParser_send_gateway_bad_measurement_listener(void (*_listener)(struct GatewayCommandParser_Instance *)){
GatewayCommandParser_send_gateway_bad_measurement_listener = _listener;
}
void GatewayCommandParser_send_gateway_bad_measurement(struct GatewayCommandParser_Instance *_instance){
if (GatewayCommandParser_send_gateway_bad_measurement_listener != 0x0) GatewayCommandParser_send_gateway_bad_measurement_listener(_instance);
if (external_GatewayCommandParser_send_gateway_bad_measurement_listener != 0x0) external_GatewayCommandParser_send_gateway_bad_measurement_listener(_instance);
;
}
void (*external_GatewayCommandParser_send_gateway_measurement_stored_listener)(struct GatewayCommandParser_Instance *)= 0x0;
void (*GatewayCommandParser_send_gateway_measurement_stored_listener)(struct GatewayCommandParser_Instance *)= 0x0;
void register_external_GatewayCommandParser_send_gateway_measurement_stored_listener(void (*_listener)(struct GatewayCommandParser_Instance *)){
external_GatewayCommandParser_send_gateway_measurement_stored_listener = _listener;
}
void register_GatewayCommandParser_send_gateway_measurement_stored_listener(void (*_listener)(struct GatewayCommandParser_Instance *)){
GatewayCommandParser_send_gateway_measurement_stored_listener = _listener;
}
void GatewayCommandParser_send_gateway_measurement_stored(struct GatewayCommandParser_Instance *_instance){
if (GatewayCommandParser_send_gateway_measurement_stored_listener != 0x0) GatewayCommandParser_send_gateway_measurement_stored_listener(_instance);
if (external_GatewayCommandParser_send_gateway_measurement_stored_listener != 0x0) external_GatewayCommandParser_send_gateway_measurement_stored_listener(_instance);
;
}
void (*external_GatewayCommandParser_send_gateway_set_base_color_listener)(struct GatewayCommandParser_Instance *, uint8_t, uint8_t, uint8_t)= 0x0;
void (*GatewayCommandParser_send_gateway_set_base_color_listener)(struct GatewayCommandParser_Instance *, uint8_t, uint8_t, uint8_t)= 0x0;
void register_external_GatewayCommandParser_send_gateway_set_base_color_listener(void (*_listener)(struct GatewayCommandParser_Instance *, uint8_t, uint8_t, uint8_t)){
external_GatewayCommandParser_send_gateway_set_base_color_listener = _listener;
}
void register_GatewayCommandParser_send_gateway_set_base_color_listener(void (*_listener)(struct GatewayCommandParser_Instance *, uint8_t, uint8_t, uint8_t)){
GatewayCommandParser_send_gateway_set_base_color_listener = _listener;
}
void GatewayCommandParser_send_gateway_set_base_color(struct GatewayCommandParser_Instance *_instance, uint8_t r, uint8_t g, uint8_t b){
if (GatewayCommandParser_send_gateway_set_base_color_listener != 0x0) GatewayCommandParser_send_gateway_set_base_color_listener(_instance, r, g, b);
if (external_GatewayCommandParser_send_gateway_set_base_color_listener != 0x0) external_GatewayCommandParser_send_gateway_set_base_color_listener(_instance, r, g, b);
;
}



/*****************************************************************************
 * Implementation for type : NeoPixel
 *****************************************************************************/


// BEGIN: Code from the c_global annotation NeoPixel

#include <Adafruit_NeoPixel.h>
Adafruit_NeoPixel strip;

#define BREATH_LEN 31
//uint8_t breath[] = {0, 1, 2, 3, 5, 8, 11, 14, 18, 23, 29, 36, 43, 52, 61, 72, 83, 96, 110, 124, 140, 155, 171, 186, 202, 216, 228, 238, 247, 252, 255};
uint8_t breath[] = {0, 0, 0, 0, 5, 8, 11, 14, 18, 23, 29, 36, 43, 52, 61, 72, 83, 96, 110, 124, 140, 155, 171, 186, 202, 216, 228, 238, 247, 252, 255};

#define PULSE_LEN 37
uint8_t pulse[] =  {32, 40, 50, 55, 50, 32, 32, 32, 20, 10, 20, 40, 80, 160, 230, 255, 230, 160, 80, 40, 20, 10, 5, 2, 0, 6, 16, 30, 32, 32, 40, 48, 55, 60, 50, 36, 32};

#define ROTATE_LEN 10
uint8_t rotatep[] =  {0, 0, 255, 0, 0, 0, 0, 255, 0, 0};

//uint8_t rotatep[] =  {0, 0, 0, 0, 255, 0, 0, 0, 0, 0};


// Input a value 0 to 255 to get a color value.
// The colours are a transition r - g - b - back to r.
uint32_t Wheel(byte WheelPos) {
  WheelPos = 255 - WheelPos;
  if(WheelPos < 85) {
    return strip.Color(255 - WheelPos * 3, 0, WheelPos * 3);
  }
  if(WheelPos < 170) {
    WheelPos -= 85;
    return strip.Color(0, WheelPos * 3, 255 - WheelPos * 3);
  }
  WheelPos -= 170;
  return strip.Color(WheelPos * 3, 255 - WheelPos * 3, 0);
}

// END: Code from the c_global annotation NeoPixel

// Declaration of prototypes:
//Prototypes: State Machine
void NeoPixel_NeoPixelStateChart_OnExit(int state, struct NeoPixel_Instance *_instance);
//Prototypes: Message Sending
//Prototypes: Function
void f_NeoPixel_setPixelColor(struct NeoPixel_Instance *_instance, uint8_t pixel, uint32_t color);
uint32_t f_NeoPixel_getColor(struct NeoPixel_Instance *_instance, uint8_t red, uint8_t green, uint8_t blue);
void f_NeoPixel_updateNeopixels(struct NeoPixel_Instance *_instance);
uint8_t f_NeoPixel_breath_brightness(struct NeoPixel_Instance *_instance, uint8_t time, uint8_t max);
uint8_t f_NeoPixel_rotate_brightness(struct NeoPixel_Instance *_instance, uint8_t angle, uint8_t max);
uint8_t f_NeoPixel_pulse_brightness(struct NeoPixel_Instance *_instance, uint8_t time);
void f_NeoPixel_initializeNeopixels(struct NeoPixel_Instance *_instance);
// Declaration of functions:
// Definition of function setPixelColor
void f_NeoPixel_setPixelColor(struct NeoPixel_Instance *_instance, uint8_t pixel, uint32_t color) {
strip.setPixelColor(pixel, color);
}
// Definition of function getColor
uint32_t f_NeoPixel_getColor(struct NeoPixel_Instance *_instance, uint8_t red, uint8_t green, uint8_t blue) {
return strip.Color(red, green, blue);
}
// Definition of function updateNeopixels
void f_NeoPixel_updateNeopixels(struct NeoPixel_Instance *_instance) {
strip.show();
}
// Definition of function breath_brightness
uint8_t f_NeoPixel_breath_brightness(struct NeoPixel_Instance *_instance, uint8_t time, uint8_t max) {
if(time > max / 2) {
return f_NeoPixel_breath_brightness(_instance, max - time, max);

}
if(time == max / 2) {
return breath[BREATH_LEN-1];

}
;uint16_t index = (time * BREATH_LEN) / (max / 2);
;uint16_t prev = (index * (max / 2)) / BREATH_LEN;
;uint16_t next = ((index + 1) * (max / 2)) / BREATH_LEN;
;uint16_t nextv;
if(index < BREATH_LEN - 1) {
nextv = breath[index + 1];

} else {
nextv = breath[index];

}
return ((next - time) * breath[index] + (time - prev) * nextv) / (next - prev);
}
// Definition of function rotate_brightness
uint8_t f_NeoPixel_rotate_brightness(struct NeoPixel_Instance *_instance, uint8_t angle, uint8_t max) {
;uint16_t index = (angle * ROTATE_LEN) / max;
;uint16_t prev = (index * max) / ROTATE_LEN;
;uint16_t next = ((index + 1) * max) / ROTATE_LEN;
;uint8_t nextv;
if(index < ROTATE_LEN - 1) {
nextv = rotatep[index + 1];

} else {
nextv = rotatep[0];

}
return ((next - angle) * rotatep[index] + (angle - prev) * nextv) / (next - prev);
}
// Definition of function pulse_brightness
uint8_t f_NeoPixel_pulse_brightness(struct NeoPixel_Instance *_instance, uint8_t time) {
if(time < PULSE_LEN) {
return pulse[time];

} else {
return pulse[0];

}
}
// Definition of function initializeNeopixels
void f_NeoPixel_initializeNeopixels(struct NeoPixel_Instance *_instance) {
strip = Adafruit_NeoPixel(_instance->NeoPixel_neopixel_count_var, _instance->NeoPixel_neopixel_pin_var, NEO_GRB + NEO_KHZ800);
		 strip.begin();
		 strip.setBrightness(255);
		 strip.show();
}

// Sessions functionss:


// On Entry Actions:
void NeoPixel_NeoPixelStateChart_OnEntry(int state, struct NeoPixel_Instance *_instance) {
switch(state) {
case NEOPIXEL_NEOPIXELSTATECHART_STATE:{
_instance->NeoPixel_NeoPixelStateChart_State = NEOPIXEL_NEOPIXELSTATECHART_OFF_STATE;
f_NeoPixel_initializeNeopixels(_instance);
NeoPixel_NeoPixelStateChart_OnEntry(_instance->NeoPixel_NeoPixelStateChart_State, _instance);
break;
}
case NEOPIXEL_NEOPIXELSTATECHART_OFF_STATE:{
;uint8_t i = 0;
;uint32_t color = f_NeoPixel_getColor(_instance, 0, 0, 0);
while(i < _instance->NeoPixel_neopixel_count_var) {
f_NeoPixel_setPixelColor(_instance, i, color);
i = i + 1;

}
f_NeoPixel_updateNeopixels(_instance);
break;
}
case NEOPIXEL_NEOPIXELSTATECHART_SOLID_STATE:{
break;
}
case NEOPIXEL_NEOPIXELSTATECHART_ROTATE_STATE:{
break;
}
case NEOPIXEL_NEOPIXELSTATECHART_BREATH_STATE:{
break;
}
case NEOPIXEL_NEOPIXELSTATECHART_PULSE_STATE:{
break;
}
default: break;
}
}

// On Exit Actions:
void NeoPixel_NeoPixelStateChart_OnExit(int state, struct NeoPixel_Instance *_instance) {
switch(state) {
case NEOPIXEL_NEOPIXELSTATECHART_STATE:{
NeoPixel_NeoPixelStateChart_OnExit(_instance->NeoPixel_NeoPixelStateChart_State, _instance);
break;}
case NEOPIXEL_NEOPIXELSTATECHART_OFF_STATE:{
break;}
case NEOPIXEL_NEOPIXELSTATECHART_SOLID_STATE:{
break;}
case NEOPIXEL_NEOPIXELSTATECHART_ROTATE_STATE:{
break;}
case NEOPIXEL_NEOPIXELSTATECHART_BREATH_STATE:{
break;}
case NEOPIXEL_NEOPIXELSTATECHART_PULSE_STATE:{
break;}
default: break;
}
}

// Event Handlers for incoming messages:
void NeoPixel_handle_ctrl_breath(struct NeoPixel_Instance *_instance) {
if(!(_instance->active)) return;
//Region NeoPixelStateChart
uint8_t NeoPixel_NeoPixelStateChart_State_event_consumed = 0;
if (_instance->NeoPixel_NeoPixelStateChart_State == NEOPIXEL_NEOPIXELSTATECHART_OFF_STATE) {
if (NeoPixel_NeoPixelStateChart_State_event_consumed == 0 && 1) {
NeoPixel_NeoPixelStateChart_OnExit(NEOPIXEL_NEOPIXELSTATECHART_OFF_STATE, _instance);
_instance->NeoPixel_NeoPixelStateChart_State = NEOPIXEL_NEOPIXELSTATECHART_BREATH_STATE;
NeoPixel_NeoPixelStateChart_OnEntry(NEOPIXEL_NEOPIXELSTATECHART_BREATH_STATE, _instance);
NeoPixel_NeoPixelStateChart_State_event_consumed = 1;
}
}
//End Region NeoPixelStateChart
//End dsregion NeoPixelStateChart
//Session list: 
}
void NeoPixel_handle_ctrl_pulse(struct NeoPixel_Instance *_instance) {
if(!(_instance->active)) return;
//Region NeoPixelStateChart
uint8_t NeoPixel_NeoPixelStateChart_State_event_consumed = 0;
if (_instance->NeoPixel_NeoPixelStateChart_State == NEOPIXEL_NEOPIXELSTATECHART_OFF_STATE) {
if (NeoPixel_NeoPixelStateChart_State_event_consumed == 0 && 1) {
NeoPixel_NeoPixelStateChart_OnExit(NEOPIXEL_NEOPIXELSTATECHART_OFF_STATE, _instance);
_instance->NeoPixel_NeoPixelStateChart_State = NEOPIXEL_NEOPIXELSTATECHART_PULSE_STATE;
NeoPixel_NeoPixelStateChart_OnEntry(NEOPIXEL_NEOPIXELSTATECHART_PULSE_STATE, _instance);
NeoPixel_NeoPixelStateChart_State_event_consumed = 1;
}
}
//End Region NeoPixelStateChart
//End dsregion NeoPixelStateChart
//Session list: 
}
void NeoPixel_handle_ctrl_off(struct NeoPixel_Instance *_instance) {
if(!(_instance->active)) return;
//Region NeoPixelStateChart
uint8_t NeoPixel_NeoPixelStateChart_State_event_consumed = 0;
if (_instance->NeoPixel_NeoPixelStateChart_State == NEOPIXEL_NEOPIXELSTATECHART_SOLID_STATE) {
if (NeoPixel_NeoPixelStateChart_State_event_consumed == 0 && 1) {
NeoPixel_NeoPixelStateChart_OnExit(NEOPIXEL_NEOPIXELSTATECHART_SOLID_STATE, _instance);
_instance->NeoPixel_NeoPixelStateChart_State = NEOPIXEL_NEOPIXELSTATECHART_OFF_STATE;
NeoPixel_NeoPixelStateChart_OnEntry(NEOPIXEL_NEOPIXELSTATECHART_OFF_STATE, _instance);
NeoPixel_NeoPixelStateChart_State_event_consumed = 1;
}
}
else if (_instance->NeoPixel_NeoPixelStateChart_State == NEOPIXEL_NEOPIXELSTATECHART_ROTATE_STATE) {
if (NeoPixel_NeoPixelStateChart_State_event_consumed == 0 && 1) {
NeoPixel_NeoPixelStateChart_OnExit(NEOPIXEL_NEOPIXELSTATECHART_ROTATE_STATE, _instance);
_instance->NeoPixel_NeoPixelStateChart_State = NEOPIXEL_NEOPIXELSTATECHART_OFF_STATE;
NeoPixel_NeoPixelStateChart_OnEntry(NEOPIXEL_NEOPIXELSTATECHART_OFF_STATE, _instance);
NeoPixel_NeoPixelStateChart_State_event_consumed = 1;
}
}
else if (_instance->NeoPixel_NeoPixelStateChart_State == NEOPIXEL_NEOPIXELSTATECHART_BREATH_STATE) {
if (NeoPixel_NeoPixelStateChart_State_event_consumed == 0 && 1) {
NeoPixel_NeoPixelStateChart_OnExit(NEOPIXEL_NEOPIXELSTATECHART_BREATH_STATE, _instance);
_instance->NeoPixel_NeoPixelStateChart_State = NEOPIXEL_NEOPIXELSTATECHART_OFF_STATE;
NeoPixel_NeoPixelStateChart_OnEntry(NEOPIXEL_NEOPIXELSTATECHART_OFF_STATE, _instance);
NeoPixel_NeoPixelStateChart_State_event_consumed = 1;
}
}
else if (_instance->NeoPixel_NeoPixelStateChart_State == NEOPIXEL_NEOPIXELSTATECHART_PULSE_STATE) {
if (NeoPixel_NeoPixelStateChart_State_event_consumed == 0 && 1) {
NeoPixel_NeoPixelStateChart_OnExit(NEOPIXEL_NEOPIXELSTATECHART_PULSE_STATE, _instance);
_instance->NeoPixel_NeoPixelStateChart_State = NEOPIXEL_NEOPIXELSTATECHART_OFF_STATE;
NeoPixel_NeoPixelStateChart_OnEntry(NEOPIXEL_NEOPIXELSTATECHART_OFF_STATE, _instance);
NeoPixel_NeoPixelStateChart_State_event_consumed = 1;
}
}
//End Region NeoPixelStateChart
//End dsregion NeoPixelStateChart
//Session list: 
}
void NeoPixel_handle_ctrl_solid(struct NeoPixel_Instance *_instance) {
if(!(_instance->active)) return;
//Region NeoPixelStateChart
uint8_t NeoPixel_NeoPixelStateChart_State_event_consumed = 0;
if (_instance->NeoPixel_NeoPixelStateChart_State == NEOPIXEL_NEOPIXELSTATECHART_OFF_STATE) {
if (NeoPixel_NeoPixelStateChart_State_event_consumed == 0 && 1) {
NeoPixel_NeoPixelStateChart_OnExit(NEOPIXEL_NEOPIXELSTATECHART_OFF_STATE, _instance);
_instance->NeoPixel_NeoPixelStateChart_State = NEOPIXEL_NEOPIXELSTATECHART_SOLID_STATE;
NeoPixel_NeoPixelStateChart_OnEntry(NEOPIXEL_NEOPIXELSTATECHART_SOLID_STATE, _instance);
NeoPixel_NeoPixelStateChart_State_event_consumed = 1;
}
}
//End Region NeoPixelStateChart
//End dsregion NeoPixelStateChart
//Session list: 
}
void NeoPixel_handle_ctrl_setColor(struct NeoPixel_Instance *_instance, uint8_t red, uint8_t green, uint8_t blue) {
if(!(_instance->active)) return;
//Region NeoPixelStateChart
uint8_t NeoPixel_NeoPixelStateChart_State_event_consumed = 0;
//End Region NeoPixelStateChart
//End dsregion NeoPixelStateChart
//Session list: 
if (1) {
_instance->NeoPixel_NeoPixelStateChart_color_r_var = red;
_instance->NeoPixel_NeoPixelStateChart_color_g_var = green;
_instance->NeoPixel_NeoPixelStateChart_color_b_var = blue;
NeoPixel_NeoPixelStateChart_State_event_consumed = 1;
}
}
void NeoPixel_handle_ctrl_rotate(struct NeoPixel_Instance *_instance, int8_t speed) {
if(!(_instance->active)) return;
//Region NeoPixelStateChart
uint8_t NeoPixel_NeoPixelStateChart_State_event_consumed = 0;
if (_instance->NeoPixel_NeoPixelStateChart_State == NEOPIXEL_NEOPIXELSTATECHART_OFF_STATE) {
if (NeoPixel_NeoPixelStateChart_State_event_consumed == 0 && 1) {
NeoPixel_NeoPixelStateChart_OnExit(NEOPIXEL_NEOPIXELSTATECHART_OFF_STATE, _instance);
_instance->NeoPixel_NeoPixelStateChart_State = NEOPIXEL_NEOPIXELSTATECHART_ROTATE_STATE;
_instance->NeoPixel_NeoPixelStateChart_rotate_speed_var = speed;
NeoPixel_NeoPixelStateChart_OnEntry(NEOPIXEL_NEOPIXELSTATECHART_ROTATE_STATE, _instance);
NeoPixel_NeoPixelStateChart_State_event_consumed = 1;
}
}
//End Region NeoPixelStateChart
//End dsregion NeoPixelStateChart
//Session list: 
}
void NeoPixel_handle_clock_fps_clock(struct NeoPixel_Instance *_instance) {
if(!(_instance->active)) return;
//Region NeoPixelStateChart
uint8_t NeoPixel_NeoPixelStateChart_State_event_consumed = 0;
if (_instance->NeoPixel_NeoPixelStateChart_State == NEOPIXEL_NEOPIXELSTATECHART_SOLID_STATE) {
if (NeoPixel_NeoPixelStateChart_State_event_consumed == 0 && 1) {
;uint8_t i = 0;
;uint32_t color = f_NeoPixel_getColor(_instance, _instance->NeoPixel_NeoPixelStateChart_color_r_var, _instance->NeoPixel_NeoPixelStateChart_color_g_var, _instance->NeoPixel_NeoPixelStateChart_color_b_var);
while(i < _instance->NeoPixel_neopixel_count_var) {
f_NeoPixel_setPixelColor(_instance, i, color);
i = i + 1;

}
f_NeoPixel_updateNeopixels(_instance);
NeoPixel_NeoPixelStateChart_State_event_consumed = 1;
}
}
else if (_instance->NeoPixel_NeoPixelStateChart_State == NEOPIXEL_NEOPIXELSTATECHART_ROTATE_STATE) {
if (NeoPixel_NeoPixelStateChart_State_event_consumed == 0 && 1) {
;uint8_t i = 0;
while(i < _instance->NeoPixel_neopixel_count_var) {
;uint16_t pangle = _instance->NeoPixel_NeoPixelStateChart_ROTATE_angle_var + (i * _instance->NeoPixel_NeoPixelStateChart_ROTATE_maxangle_var) / _instance->NeoPixel_neopixel_count_var;
pangle = pangle % _instance->NeoPixel_NeoPixelStateChart_ROTATE_maxangle_var;
;uint8_t bright = f_NeoPixel_rotate_brightness(_instance, pangle, _instance->NeoPixel_NeoPixelStateChart_ROTATE_maxangle_var);
;uint32_t color = f_NeoPixel_getColor(_instance, (_instance->NeoPixel_NeoPixelStateChart_color_r_var * bright) / 256, (_instance->NeoPixel_NeoPixelStateChart_color_g_var * bright) / 256, (_instance->NeoPixel_NeoPixelStateChart_color_b_var * bright) / 256);
f_NeoPixel_setPixelColor(_instance, i, color);
i = i + 1;

}
f_NeoPixel_updateNeopixels(_instance);
_instance->NeoPixel_NeoPixelStateChart_ROTATE_angle_var = _instance->NeoPixel_NeoPixelStateChart_ROTATE_angle_var + _instance->NeoPixel_NeoPixelStateChart_rotate_speed_var;
if(_instance->NeoPixel_NeoPixelStateChart_ROTATE_angle_var < 0) {
_instance->NeoPixel_NeoPixelStateChart_ROTATE_angle_var = _instance->NeoPixel_NeoPixelStateChart_ROTATE_maxangle_var + _instance->NeoPixel_NeoPixelStateChart_ROTATE_angle_var;

}
if(_instance->NeoPixel_NeoPixelStateChart_ROTATE_angle_var > _instance->NeoPixel_NeoPixelStateChart_ROTATE_maxangle_var - 1) {
_instance->NeoPixel_NeoPixelStateChart_ROTATE_angle_var = _instance->NeoPixel_NeoPixelStateChart_ROTATE_angle_var - _instance->NeoPixel_NeoPixelStateChart_ROTATE_maxangle_var;

}
NeoPixel_NeoPixelStateChart_State_event_consumed = 1;
}
}
else if (_instance->NeoPixel_NeoPixelStateChart_State == NEOPIXEL_NEOPIXELSTATECHART_BREATH_STATE) {
if (NeoPixel_NeoPixelStateChart_State_event_consumed == 0 && 1) {
;uint8_t bright = f_NeoPixel_breath_brightness(_instance, _instance->NeoPixel_NeoPixelStateChart_BREATH_counter_var, _instance->NeoPixel_NeoPixelStateChart_BREATH_maxcount_var);
;uint32_t color = f_NeoPixel_getColor(_instance, (_instance->NeoPixel_NeoPixelStateChart_color_r_var * bright) / 256, (_instance->NeoPixel_NeoPixelStateChart_color_g_var * bright) / 256, (_instance->NeoPixel_NeoPixelStateChart_color_b_var * bright) / 256);
;uint8_t i = 0;
while(i < _instance->NeoPixel_neopixel_count_var) {
f_NeoPixel_setPixelColor(_instance, i, color);
i = i + 1;

}
f_NeoPixel_updateNeopixels(_instance);
_instance->NeoPixel_NeoPixelStateChart_BREATH_counter_var = _instance->NeoPixel_NeoPixelStateChart_BREATH_counter_var + 1;
if(_instance->NeoPixel_NeoPixelStateChart_BREATH_counter_var == _instance->NeoPixel_NeoPixelStateChart_BREATH_maxcount_var) {
_instance->NeoPixel_NeoPixelStateChart_BREATH_counter_var = 0;

}
NeoPixel_NeoPixelStateChart_State_event_consumed = 1;
}
}
else if (_instance->NeoPixel_NeoPixelStateChart_State == NEOPIXEL_NEOPIXELSTATECHART_PULSE_STATE) {
if (NeoPixel_NeoPixelStateChart_State_event_consumed == 0 && 1) {
;uint8_t bright = f_NeoPixel_pulse_brightness(_instance, _instance->NeoPixel_NeoPixelStateChart_PULSE_counter_var);
;uint32_t color = f_NeoPixel_getColor(_instance, (_instance->NeoPixel_NeoPixelStateChart_color_r_var * bright) / 256, (_instance->NeoPixel_NeoPixelStateChart_color_g_var * bright) / 256, (_instance->NeoPixel_NeoPixelStateChart_color_b_var * bright) / 256);
;uint8_t i = 0;
while(i < _instance->NeoPixel_neopixel_count_var) {
f_NeoPixel_setPixelColor(_instance, i, color);
i = i + 1;

}
f_NeoPixel_updateNeopixels(_instance);
_instance->NeoPixel_NeoPixelStateChart_PULSE_counter_var = _instance->NeoPixel_NeoPixelStateChart_PULSE_counter_var + 1;
if(_instance->NeoPixel_NeoPixelStateChart_PULSE_counter_var == _instance->NeoPixel_NeoPixelStateChart_PULSE_maxcount_var) {
_instance->NeoPixel_NeoPixelStateChart_PULSE_counter_var = 0;

}
NeoPixel_NeoPixelStateChart_State_event_consumed = 1;
}
}
//End Region NeoPixelStateChart
//End dsregion NeoPixelStateChart
//Session list: 
}

// Observers for outgoing messages:




#define MAX_INSTANCES 16
#define FIFO_SIZE 256

/*********************************
 * Instance IDs and lookup
 *********************************/

void * instances[MAX_INSTANCES];
uint16_t instances_count = 0;

void * instance_by_id(uint16_t id) {
  return instances[id];
}

uint16_t add_instance(void * instance_struct) {
  instances[instances_count] = instance_struct;
  return instances_count++;
}

/******************************************
 * Simple byte FIFO implementation
 ******************************************/

byte fifo[FIFO_SIZE];
int fifo_head = 0;
int fifo_tail = 0;

// Returns the number of byte currently in the fifo
int fifo_byte_length() {
  if (fifo_tail >= fifo_head)
    return fifo_tail - fifo_head;
  return fifo_tail + FIFO_SIZE - fifo_head;
}

// Returns the number of bytes currently available in the fifo
int fifo_byte_available() {
  return FIFO_SIZE - 1 - fifo_byte_length();
}

// Returns true if the fifo is empty
int fifo_empty() {
  return fifo_head == fifo_tail;
}

// Return true if the fifo is full
int fifo_full() {
  return fifo_head == ((fifo_tail + 1) % FIFO_SIZE);
}

// Enqueue 1 byte in the fifo if there is space
// returns 1 for sucess and 0 if the fifo was full
int fifo_enqueue(byte b) {
  int new_tail = (fifo_tail + 1) % FIFO_SIZE;
  if (new_tail == fifo_head) return 0; // the fifo is full
  fifo[fifo_tail] = b;
  fifo_tail = new_tail;
  return 1;
}

// Enqueue 1 byte in the fifo without checking for available space
// The caller should have checked that there is enough space
int _fifo_enqueue(byte b) {
  fifo[fifo_tail] = b;
  fifo_tail = (fifo_tail + 1) % FIFO_SIZE;
  return 0; // Dummy added by steffend
}

// Dequeue 1 byte in the fifo.
// The caller should check that the fifo is not empty
byte fifo_dequeue() {
  if (!fifo_empty()) {
    byte result = fifo[fifo_head];
    fifo_head = (fifo_head + 1) % FIFO_SIZE;
    return result;
  }
  return 0;
}

#define timer2_NB_SOFT_TIMER 4
uint32_t timer2_timer[timer2_NB_SOFT_TIMER];
uint32_t  timer2_prev_1sec = 0;

uint8_t timer2_tic_flags = 0;

void externalMessageEnqueue(uint8_t * msg, uint8_t msgSize, uint16_t listener_id);

uint8_t timer2_interrupt_counter = 0;
SIGNAL(TIMER2_OVF_vect) {
TCNT2 = 5;
timer2_interrupt_counter++;
if((timer2_interrupt_counter % 33) == 0) {
timer2_tic_flags |= 0b00000001;
}
if((timer2_interrupt_counter % 231) == 0) {
timer2_tic_flags |= 0b00000010;
}
if(timer2_interrupt_counter >= 231) {
timer2_interrupt_counter = 0;
}
}



struct timer2_instance_type {
    uint16_t listener_id;
    /*INSTANCE_INFORMATION*/
} timer2_instance;

void timer2_setup() {
	// Run timer2 interrupt up counting at 250kHz 
		 TCCR2A = 0;
		 TCCR2B = 1<<CS22 | 0<<CS21 | 0<<CS20;
		
		 //Timer2 Overflow Interrupt Enable
		 TIMSK2 |= 1<<TOIE2;


	timer2_prev_1sec = millis() + 1000;
}

void timer2_set_listener_id(uint16_t id) {
	timer2_instance.listener_id = id;
}

void timer2_timer_start(uint8_t id, uint32_t ms) {
if(id <timer2_NB_SOFT_TIMER) {
timer2_timer[id] = ms + millis();
}
}

void timer2_timer_cancel(uint8_t id) {
if(id <timer2_NB_SOFT_TIMER) {
timer2_timer[id] = 0;
}
}

void timer2_timeout(uint8_t id) {
uint8_t enqueue_buf[3];
enqueue_buf[0] = (1 >> 8) & 0xFF;
enqueue_buf[1] = 1 & 0xFF;
enqueue_buf[2] = id;
externalMessageEnqueue(enqueue_buf, 3, timer2_instance.listener_id);
}

void timer2_33ms_tic() {
{
uint8_t enqueue_buf[2];
enqueue_buf[0] = (2 >> 8) & 0xFF;
enqueue_buf[1] = 2 & 0xFF;
externalMessageEnqueue(enqueue_buf, 2, timer2_instance.listener_id);
}
}

void timer2_231ms_tic() {
{
uint8_t enqueue_buf[2];
enqueue_buf[0] = (3 >> 8) & 0xFF;
enqueue_buf[1] = 3 & 0xFF;
externalMessageEnqueue(enqueue_buf, 2, timer2_instance.listener_id);
}
}





void timer2_read() {
    uint32_t tms = millis();
    uint8_t t;
for(t = 0; t < 4; t++) {
if((timer2_timer[t] > 0) && (timer2_timer[t] < tms)) {
timer2_timer[t] = 0;
timer2_timeout(t);
}
}

    if (timer2_prev_1sec < tms) {
        timer2_prev_1sec += 1000;
    }
    if((timer2_tic_flags & 0b00000001) >> 0) {
timer2_33ms_tic();
timer2_tic_flags &= 0b11111110;
}
if((timer2_tic_flags & 0b00000010) >> 1) {
timer2_231ms_tic();
timer2_tic_flags &= 0b11111101;
}

}
// Forwarding of messages timer2::BLENotifier::clock::timer_start
void forward_timer2_BLENotifier_send_clock_timer_start(struct BLENotifier_Instance *_instance, uint8_t id, uint32_t time){
timer2_timer_start(id, time);}

// Forwarding of messages timer2::BLENotifier::clock::timer_cancel
void forward_timer2_BLENotifier_send_clock_timer_cancel(struct BLENotifier_Instance *_instance, uint8_t id){
timer2_timer_cancel(id);}

/*****************************************************************************
 * Implementation for type : BPSensor
 *****************************************************************************/

// Declaration of prototypes:
//Prototypes: State Machine
void BPSensor_BPSensorImpl_OnExit(int state, struct BPSensor_Instance *_instance);
//Prototypes: Message Sending
void BPSensor_send_ctrl_idle(struct BPSensor_Instance *_instance);
void BPSensor_send_ctrl_pumping(struct BPSensor_Instance *_instance);
void BPSensor_send_ctrl_measuring(struct BPSensor_Instance *_instance);
//Prototypes: Function
// Declaration of functions:

// Sessions functionss:


// On Entry Actions:
void BPSensor_BPSensorImpl_OnEntry(int state, struct BPSensor_Instance *_instance) {
switch(state) {
case BPSENSOR_BPSENSORIMPL_STATE:{
_instance->BPSensor_BPSensorImpl_State = BPSENSOR_BPSENSORIMPL_IDLE_STATE;
pinMode(4, INPUT);
  			 pinMode(5, INPUT);
BPSensor_BPSensorImpl_OnEntry(_instance->BPSensor_BPSensorImpl_State, _instance);
break;
}
case BPSENSOR_BPSENSORIMPL_IDLE_STATE:{
BPSensor_send_ctrl_idle(_instance);
break;
}
case BPSENSOR_BPSENSORIMPL_PUMPING_STATE:{
BPSensor_send_ctrl_pumping(_instance);
break;
}
case BPSENSOR_BPSENSORIMPL_MEASURING_STATE:{
BPSensor_send_ctrl_measuring(_instance);
break;
}
default: break;
}
}

// On Exit Actions:
void BPSensor_BPSensorImpl_OnExit(int state, struct BPSensor_Instance *_instance) {
switch(state) {
case BPSENSOR_BPSENSORIMPL_STATE:{
BPSensor_BPSensorImpl_OnExit(_instance->BPSensor_BPSensorImpl_State, _instance);
break;}
case BPSENSOR_BPSENSORIMPL_IDLE_STATE:{
break;}
case BPSENSOR_BPSENSORIMPL_PUMPING_STATE:{
break;}
case BPSENSOR_BPSENSORIMPL_MEASURING_STATE:{
break;}
default: break;
}
}

// Event Handlers for incoming messages:
void BPSensor_handle_clock_ui_clock(struct BPSensor_Instance *_instance) {
if(!(_instance->active)) return;
//Region BPSensorImpl
uint8_t BPSensor_BPSensorImpl_State_event_consumed = 0;
if (_instance->BPSensor_BPSensorImpl_State == BPSENSOR_BPSENSORIMPL_IDLE_STATE) {
if (BPSensor_BPSensorImpl_State_event_consumed == 0 && digitalRead(4) == 0) {
BPSensor_BPSensorImpl_OnExit(BPSENSOR_BPSENSORIMPL_IDLE_STATE, _instance);
_instance->BPSensor_BPSensorImpl_State = BPSENSOR_BPSENSORIMPL_PUMPING_STATE;
BPSensor_BPSensorImpl_OnEntry(BPSENSOR_BPSENSORIMPL_PUMPING_STATE, _instance);
BPSensor_BPSensorImpl_State_event_consumed = 1;
}
}
else if (_instance->BPSensor_BPSensorImpl_State == BPSENSOR_BPSENSORIMPL_PUMPING_STATE) {
if (BPSensor_BPSensorImpl_State_event_consumed == 0 && digitalRead(4) != 0 && digitalRead(5) != 0) {
BPSensor_BPSensorImpl_OnExit(BPSENSOR_BPSENSORIMPL_PUMPING_STATE, _instance);
_instance->BPSensor_BPSensorImpl_State = BPSENSOR_BPSENSORIMPL_IDLE_STATE;
BPSensor_BPSensorImpl_OnEntry(BPSENSOR_BPSENSORIMPL_IDLE_STATE, _instance);
BPSensor_BPSensorImpl_State_event_consumed = 1;
}
else if (BPSensor_BPSensorImpl_State_event_consumed == 0 && digitalRead(4) != 0 && digitalRead(5) == 0) {
BPSensor_BPSensorImpl_OnExit(BPSENSOR_BPSENSORIMPL_PUMPING_STATE, _instance);
_instance->BPSensor_BPSensorImpl_State = BPSENSOR_BPSENSORIMPL_MEASURING_STATE;
BPSensor_BPSensorImpl_OnEntry(BPSENSOR_BPSENSORIMPL_MEASURING_STATE, _instance);
BPSensor_BPSensorImpl_State_event_consumed = 1;
}
}
else if (_instance->BPSensor_BPSensorImpl_State == BPSENSOR_BPSENSORIMPL_MEASURING_STATE) {
if (BPSensor_BPSensorImpl_State_event_consumed == 0 && digitalRead(4) != 0 && digitalRead(5) != 0) {
BPSensor_BPSensorImpl_OnExit(BPSENSOR_BPSENSORIMPL_MEASURING_STATE, _instance);
_instance->BPSensor_BPSensorImpl_State = BPSENSOR_BPSENSORIMPL_IDLE_STATE;
BPSensor_BPSensorImpl_OnEntry(BPSENSOR_BPSENSORIMPL_IDLE_STATE, _instance);
BPSensor_BPSensorImpl_State_event_consumed = 1;
}
else if (BPSensor_BPSensorImpl_State_event_consumed == 0 && digitalRead(4) == 0) {
BPSensor_BPSensorImpl_OnExit(BPSENSOR_BPSENSORIMPL_MEASURING_STATE, _instance);
_instance->BPSensor_BPSensorImpl_State = BPSENSOR_BPSENSORIMPL_PUMPING_STATE;
BPSensor_BPSensorImpl_OnEntry(BPSENSOR_BPSENSORIMPL_PUMPING_STATE, _instance);
BPSensor_BPSensorImpl_State_event_consumed = 1;
}
}
//End Region BPSensorImpl
//End dsregion BPSensorImpl
//Session list: 
}

// Observers for outgoing messages:
void (*external_BPSensor_send_ctrl_idle_listener)(struct BPSensor_Instance *)= 0x0;
void (*BPSensor_send_ctrl_idle_listener)(struct BPSensor_Instance *)= 0x0;
void register_external_BPSensor_send_ctrl_idle_listener(void (*_listener)(struct BPSensor_Instance *)){
external_BPSensor_send_ctrl_idle_listener = _listener;
}
void register_BPSensor_send_ctrl_idle_listener(void (*_listener)(struct BPSensor_Instance *)){
BPSensor_send_ctrl_idle_listener = _listener;
}
void BPSensor_send_ctrl_idle(struct BPSensor_Instance *_instance){
if (BPSensor_send_ctrl_idle_listener != 0x0) BPSensor_send_ctrl_idle_listener(_instance);
if (external_BPSensor_send_ctrl_idle_listener != 0x0) external_BPSensor_send_ctrl_idle_listener(_instance);
;
}
void (*external_BPSensor_send_ctrl_pumping_listener)(struct BPSensor_Instance *)= 0x0;
void (*BPSensor_send_ctrl_pumping_listener)(struct BPSensor_Instance *)= 0x0;
void register_external_BPSensor_send_ctrl_pumping_listener(void (*_listener)(struct BPSensor_Instance *)){
external_BPSensor_send_ctrl_pumping_listener = _listener;
}
void register_BPSensor_send_ctrl_pumping_listener(void (*_listener)(struct BPSensor_Instance *)){
BPSensor_send_ctrl_pumping_listener = _listener;
}
void BPSensor_send_ctrl_pumping(struct BPSensor_Instance *_instance){
if (BPSensor_send_ctrl_pumping_listener != 0x0) BPSensor_send_ctrl_pumping_listener(_instance);
if (external_BPSensor_send_ctrl_pumping_listener != 0x0) external_BPSensor_send_ctrl_pumping_listener(_instance);
;
}
void (*external_BPSensor_send_ctrl_measuring_listener)(struct BPSensor_Instance *)= 0x0;
void (*BPSensor_send_ctrl_measuring_listener)(struct BPSensor_Instance *)= 0x0;
void register_external_BPSensor_send_ctrl_measuring_listener(void (*_listener)(struct BPSensor_Instance *)){
external_BPSensor_send_ctrl_measuring_listener = _listener;
}
void register_BPSensor_send_ctrl_measuring_listener(void (*_listener)(struct BPSensor_Instance *)){
BPSensor_send_ctrl_measuring_listener = _listener;
}
void BPSensor_send_ctrl_measuring(struct BPSensor_Instance *_instance){
if (BPSensor_send_ctrl_measuring_listener != 0x0) BPSensor_send_ctrl_measuring_listener(_instance);
if (external_BPSensor_send_ctrl_measuring_listener != 0x0) external_BPSensor_send_ctrl_measuring_listener(_instance);
;
}



/*****************************************************************************
 * Implementation for type : Serial
 *****************************************************************************/

// Declaration of prototypes:
//Prototypes: State Machine
void Serial_SerialImpl_OnExit(int state, struct Serial_Instance *_instance);
//Prototypes: Message Sending
void Serial_send_rx_receive_byte(struct Serial_Instance *_instance, uint8_t b);
//Prototypes: Function
// Declaration of functions:

// Sessions functionss:


// On Entry Actions:
void Serial_SerialImpl_OnEntry(int state, struct Serial_Instance *_instance) {
switch(state) {
case SERIAL_SERIALIMPL_STATE:{
_instance->Serial_SerialImpl_State = SERIAL_SERIALIMPL_RECEIVING_STATE;
Serial_SerialImpl_OnEntry(_instance->Serial_SerialImpl_State, _instance);
break;
}
case SERIAL_SERIALIMPL_RECEIVING_STATE:{
Serial.begin(9600);
break;
}
default: break;
}
}

// On Exit Actions:
void Serial_SerialImpl_OnExit(int state, struct Serial_Instance *_instance) {
switch(state) {
case SERIAL_SERIALIMPL_STATE:{
Serial_SerialImpl_OnExit(_instance->Serial_SerialImpl_State, _instance);
break;}
case SERIAL_SERIALIMPL_RECEIVING_STATE:{
break;}
default: break;
}
}

// Event Handlers for incoming messages:
int Serial_handle_empty_event(struct Serial_Instance *_instance) {
 uint8_t empty_event_consumed = 0;
if(!(_instance->active)) return 0;
//Region SerialImpl
if (_instance->Serial_SerialImpl_State == SERIAL_SERIALIMPL_RECEIVING_STATE) {
if (Serial.available() > 0) {
Serial_send_rx_receive_byte(_instance, (char)Serial.read());
return 1;
}
}
//begin dispatchEmptyToSession
//end dispatchEmptyToSession
return empty_event_consumed;
}

// Observers for outgoing messages:
void (*external_Serial_send_rx_receive_byte_listener)(struct Serial_Instance *, uint8_t)= 0x0;
void (*Serial_send_rx_receive_byte_listener)(struct Serial_Instance *, uint8_t)= 0x0;
void register_external_Serial_send_rx_receive_byte_listener(void (*_listener)(struct Serial_Instance *, uint8_t)){
external_Serial_send_rx_receive_byte_listener = _listener;
}
void register_Serial_send_rx_receive_byte_listener(void (*_listener)(struct Serial_Instance *, uint8_t)){
Serial_send_rx_receive_byte_listener = _listener;
}
void Serial_send_rx_receive_byte(struct Serial_Instance *_instance, uint8_t b){
if (Serial_send_rx_receive_byte_listener != 0x0) Serial_send_rx_receive_byte_listener(_instance, b);
if (external_Serial_send_rx_receive_byte_listener != 0x0) external_Serial_send_rx_receive_byte_listener(_instance, b);
;
}






/*****************************************************************************
 * Definitions for configuration : BLENotifier
 *****************************************************************************/

uint8_t array_gwcmd_GatewayCommandParser_GatewayCommandParserSC_SetColor_buf_var[2];
//Declaration of instance variables
//Instance neopixels
// Variables for the properties of the instance
struct NeoPixel_Instance neopixels_var;
// Variables for the sessions of the instance
//Instance uart
// Variables for the properties of the instance
struct Serial_Instance uart_var;
// Variables for the sessions of the instance
//Instance gwcmd
// Variables for the properties of the instance
struct GatewayCommandParser_Instance gwcmd_var;
// Variables for the sessions of the instance
//Instance notifier
// Variables for the properties of the instance
struct BLENotifier_Instance notifier_var;
// Variables for the sessions of the instance
//Instance sensor
// Variables for the properties of the instance
struct BPSensor_Instance sensor_var;
// Variables for the sessions of the instance


// Enqueue of messages GatewayCommandParser::gateway::bad_measurement
void enqueue_GatewayCommandParser_send_gateway_bad_measurement(struct GatewayCommandParser_Instance *_instance){
if ( fifo_byte_available() > 4 ) {

_fifo_enqueue( (4 >> 8) & 0xFF );
_fifo_enqueue( 4 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_gateway >> 8) & 0xFF );
_fifo_enqueue( _instance->id_gateway & 0xFF );
}
}
// Enqueue of messages GatewayCommandParser::gateway::request_measurement
void enqueue_GatewayCommandParser_send_gateway_request_measurement(struct GatewayCommandParser_Instance *_instance){
if ( fifo_byte_available() > 4 ) {

_fifo_enqueue( (5 >> 8) & 0xFF );
_fifo_enqueue( 5 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_gateway >> 8) & 0xFF );
_fifo_enqueue( _instance->id_gateway & 0xFF );
}
}
// Enqueue of messages GatewayCommandParser::gateway::measurement_received
void enqueue_GatewayCommandParser_send_gateway_measurement_received(struct GatewayCommandParser_Instance *_instance){
if ( fifo_byte_available() > 4 ) {

_fifo_enqueue( (6 >> 8) & 0xFF );
_fifo_enqueue( 6 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_gateway >> 8) & 0xFF );
_fifo_enqueue( _instance->id_gateway & 0xFF );
}
}
// Enqueue of messages GatewayCommandParser::gateway::measurement_stored
void enqueue_GatewayCommandParser_send_gateway_measurement_stored(struct GatewayCommandParser_Instance *_instance){
if ( fifo_byte_available() > 4 ) {

_fifo_enqueue( (7 >> 8) & 0xFF );
_fifo_enqueue( 7 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_gateway >> 8) & 0xFF );
_fifo_enqueue( _instance->id_gateway & 0xFF );
}
}
// Enqueue of messages GatewayCommandParser::gateway::set_base_color
void enqueue_GatewayCommandParser_send_gateway_set_base_color(struct GatewayCommandParser_Instance *_instance, uint8_t r, uint8_t g, uint8_t b){
if ( fifo_byte_available() > 7 ) {

_fifo_enqueue( (8 >> 8) & 0xFF );
_fifo_enqueue( 8 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_gateway >> 8) & 0xFF );
_fifo_enqueue( _instance->id_gateway & 0xFF );

// parameter r
union u_r_t {
uint8_t p;
byte bytebuffer[1];
} u_r;
u_r.p = r;
_fifo_enqueue(u_r.bytebuffer[0] & 0xFF );

// parameter g
union u_g_t {
uint8_t p;
byte bytebuffer[1];
} u_g;
u_g.p = g;
_fifo_enqueue(u_g.bytebuffer[0] & 0xFF );

// parameter b
union u_b_t {
uint8_t p;
byte bytebuffer[1];
} u_b;
u_b.p = b;
_fifo_enqueue(u_b.bytebuffer[0] & 0xFF );
}
}
// Enqueue of messages BLENotifier::neopixels::breath
void enqueue_BLENotifier_send_neopixels_breath(struct BLENotifier_Instance *_instance){
if ( fifo_byte_available() > 4 ) {

_fifo_enqueue( (9 >> 8) & 0xFF );
_fifo_enqueue( 9 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_neopixels >> 8) & 0xFF );
_fifo_enqueue( _instance->id_neopixels & 0xFF );
}
}
// Enqueue of messages BLENotifier::neopixels::pulse
void enqueue_BLENotifier_send_neopixels_pulse(struct BLENotifier_Instance *_instance){
if ( fifo_byte_available() > 4 ) {

_fifo_enqueue( (10 >> 8) & 0xFF );
_fifo_enqueue( 10 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_neopixels >> 8) & 0xFF );
_fifo_enqueue( _instance->id_neopixels & 0xFF );
}
}
// Enqueue of messages BLENotifier::neopixels::off
void enqueue_BLENotifier_send_neopixels_off(struct BLENotifier_Instance *_instance){
if ( fifo_byte_available() > 4 ) {

_fifo_enqueue( (11 >> 8) & 0xFF );
_fifo_enqueue( 11 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_neopixels >> 8) & 0xFF );
_fifo_enqueue( _instance->id_neopixels & 0xFF );
}
}
// Enqueue of messages BLENotifier::neopixels::solid
void enqueue_BLENotifier_send_neopixels_solid(struct BLENotifier_Instance *_instance){
if ( fifo_byte_available() > 4 ) {

_fifo_enqueue( (12 >> 8) & 0xFF );
_fifo_enqueue( 12 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_neopixels >> 8) & 0xFF );
_fifo_enqueue( _instance->id_neopixels & 0xFF );
}
}
// Enqueue of messages BLENotifier::neopixels::setColor
void enqueue_BLENotifier_send_neopixels_setColor(struct BLENotifier_Instance *_instance, uint8_t red, uint8_t green, uint8_t blue){
if ( fifo_byte_available() > 7 ) {

_fifo_enqueue( (13 >> 8) & 0xFF );
_fifo_enqueue( 13 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_neopixels >> 8) & 0xFF );
_fifo_enqueue( _instance->id_neopixels & 0xFF );

// parameter red
union u_red_t {
uint8_t p;
byte bytebuffer[1];
} u_red;
u_red.p = red;
_fifo_enqueue(u_red.bytebuffer[0] & 0xFF );

// parameter green
union u_green_t {
uint8_t p;
byte bytebuffer[1];
} u_green;
u_green.p = green;
_fifo_enqueue(u_green.bytebuffer[0] & 0xFF );

// parameter blue
union u_blue_t {
uint8_t p;
byte bytebuffer[1];
} u_blue;
u_blue.p = blue;
_fifo_enqueue(u_blue.bytebuffer[0] & 0xFF );
}
}
// Enqueue of messages BLENotifier::neopixels::rotate
void enqueue_BLENotifier_send_neopixels_rotate(struct BLENotifier_Instance *_instance, int8_t speed){
if ( fifo_byte_available() > 5 ) {

_fifo_enqueue( (14 >> 8) & 0xFF );
_fifo_enqueue( 14 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_neopixels >> 8) & 0xFF );
_fifo_enqueue( _instance->id_neopixels & 0xFF );

// parameter speed
union u_speed_t {
int8_t p;
byte bytebuffer[1];
} u_speed;
u_speed.p = speed;
_fifo_enqueue(u_speed.bytebuffer[0] & 0xFF );
}
}
// Enqueue of messages Serial::rx::receive_byte
void enqueue_Serial_send_rx_receive_byte(struct Serial_Instance *_instance, uint8_t b){
if ( fifo_byte_available() > 5 ) {

_fifo_enqueue( (15 >> 8) & 0xFF );
_fifo_enqueue( 15 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_rx >> 8) & 0xFF );
_fifo_enqueue( _instance->id_rx & 0xFF );

// parameter b
union u_b_t {
uint8_t p;
byte bytebuffer[1];
} u_b;
u_b.p = b;
_fifo_enqueue(u_b.bytebuffer[0] & 0xFF );
}
}
// Enqueue of messages BPSensor::ctrl::measuring
void enqueue_BPSensor_send_ctrl_measuring(struct BPSensor_Instance *_instance){
if ( fifo_byte_available() > 4 ) {

_fifo_enqueue( (16 >> 8) & 0xFF );
_fifo_enqueue( 16 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_ctrl >> 8) & 0xFF );
_fifo_enqueue( _instance->id_ctrl & 0xFF );
}
}
// Enqueue of messages BPSensor::ctrl::idle
void enqueue_BPSensor_send_ctrl_idle(struct BPSensor_Instance *_instance){
if ( fifo_byte_available() > 4 ) {

_fifo_enqueue( (17 >> 8) & 0xFF );
_fifo_enqueue( 17 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_ctrl >> 8) & 0xFF );
_fifo_enqueue( _instance->id_ctrl & 0xFF );
}
}
// Enqueue of messages BPSensor::ctrl::pumping
void enqueue_BPSensor_send_ctrl_pumping(struct BPSensor_Instance *_instance){
if ( fifo_byte_available() > 4 ) {

_fifo_enqueue( (18 >> 8) & 0xFF );
_fifo_enqueue( 18 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_ctrl >> 8) & 0xFF );
_fifo_enqueue( _instance->id_ctrl & 0xFF );
}
}


//New dispatcher for messages
void dispatch_breath(uint16_t sender) {
if (sender == notifier_var.id_neopixels) {
NeoPixel_handle_ctrl_breath(&neopixels_var);

}

}


//New dispatcher for messages
void dispatch_request_measurement(uint16_t sender) {
if (sender == gwcmd_var.id_gateway) {
BLENotifier_handle_gateway_request_measurement(&notifier_var);

}

}


//New dispatcher for messages
void dispatch_idle(uint16_t sender) {
if (sender == sensor_var.id_ctrl) {
BLENotifier_handle_sensor_idle(&notifier_var);

}

}


//New dispatcher for messages
void dispatch_off(uint16_t sender) {
if (sender == notifier_var.id_neopixels) {
NeoPixel_handle_ctrl_off(&neopixels_var);

}

}


//New dispatcher for messages
void dispatch_measurement_received(uint16_t sender) {
if (sender == gwcmd_var.id_gateway) {
BLENotifier_handle_gateway_measurement_received(&notifier_var);

}

}


//New dispatcher for messages
void dispatch_solid(uint16_t sender) {
if (sender == notifier_var.id_neopixels) {
NeoPixel_handle_ctrl_solid(&neopixels_var);

}

}


//New dispatcher for messages
void dispatch_receive_byte(uint16_t sender, uint8_t param_b) {
if (sender == uart_var.id_rx) {
GatewayCommandParser_handle_blerx_receive_byte(&gwcmd_var, param_b);

}

}


//New dispatcher for messages
void dispatch_ui_clock(uint16_t sender) {
if (sender == timer2_instance.listener_id) {
BPSensor_handle_clock_ui_clock(&sensor_var);

}

}


//New dispatcher for messages
void dispatch_set_base_color(uint16_t sender, uint8_t param_r, uint8_t param_g, uint8_t param_b) {
if (sender == gwcmd_var.id_gateway) {
BLENotifier_handle_gateway_set_base_color(&notifier_var, param_r, param_g, param_b);

}

}


//New dispatcher for messages
void dispatch_setColor(uint16_t sender, uint8_t param_red, uint8_t param_green, uint8_t param_blue) {
if (sender == notifier_var.id_neopixels) {
NeoPixel_handle_ctrl_setColor(&neopixels_var, param_red, param_green, param_blue);

}

}


//New dispatcher for messages
void dispatch_bad_measurement(uint16_t sender) {
if (sender == gwcmd_var.id_gateway) {
BLENotifier_handle_gateway_bad_measurement(&notifier_var);

}

}


//New dispatcher for messages
void dispatch_measuring(uint16_t sender) {
if (sender == sensor_var.id_ctrl) {
BLENotifier_handle_sensor_measuring(&notifier_var);

}

}


//New dispatcher for messages
void dispatch_pulse(uint16_t sender) {
if (sender == notifier_var.id_neopixels) {
NeoPixel_handle_ctrl_pulse(&neopixels_var);

}

}


//New dispatcher for messages
void dispatch_timer_timeout(uint16_t sender, uint8_t param_id) {
if (sender == timer2_instance.listener_id) {
BLENotifier_handle_clock_timer_timeout(&notifier_var, param_id);

}

}


//New dispatcher for messages
void dispatch_write_byte(uint16_t sender, uint8_t param_b) {
if (sender == gwcmd_var.id_bletx) {

}

}

void sync_dispatch_GatewayCommandParser_send_bletx_write_byte(struct GatewayCommandParser_Instance *_instance, uint8_t b){
dispatch_write_byte(_instance->id_bletx, b);
}

//New dispatcher for messages
void dispatch_measurement_stored(uint16_t sender) {
if (sender == gwcmd_var.id_gateway) {
BLENotifier_handle_gateway_measurement_stored(&notifier_var);

}

}


//New dispatcher for messages
void dispatch_fps_clock(uint16_t sender) {
if (sender == timer2_instance.listener_id) {
NeoPixel_handle_clock_fps_clock(&neopixels_var);

}

}


//New dispatcher for messages
void dispatch_pumping(uint16_t sender) {
if (sender == sensor_var.id_ctrl) {
BLENotifier_handle_sensor_pumping(&notifier_var);

}

}


//New dispatcher for messages
void dispatch_print_message(uint16_t sender, char * param_msg) {
if (sender == gwcmd_var.id_bletx) {

}

}

void sync_dispatch_GatewayCommandParser_send_bletx_print_message(struct GatewayCommandParser_Instance *_instance, char * msg){
dispatch_print_message(_instance->id_bletx, msg);
}

//New dispatcher for messages
void dispatch_rotate(uint16_t sender, int8_t param_speed) {
if (sender == notifier_var.id_neopixels) {
NeoPixel_handle_ctrl_rotate(&neopixels_var, param_speed);

}

}


int processMessageQueue() {
if (fifo_empty()) return 0; // return 0 if there is nothing to do

uint8_t mbufi = 0;

// Read the code of the next port/message in the queue
uint16_t code = fifo_dequeue() << 8;

code += fifo_dequeue();

// Switch to call the appropriate handler
switch(code) {
case 9:{
byte mbuf[4 - 2];
while (mbufi < (4 - 2)) mbuf[mbufi++] = fifo_dequeue();
uint8_t mbufi_breath = 2;
dispatch_breath((mbuf[0] << 8) + mbuf[1] /* instance port*/);
break;
}
case 5:{
byte mbuf[4 - 2];
while (mbufi < (4 - 2)) mbuf[mbufi++] = fifo_dequeue();
uint8_t mbufi_request_measurement = 2;
dispatch_request_measurement((mbuf[0] << 8) + mbuf[1] /* instance port*/);
break;
}
case 17:{
byte mbuf[4 - 2];
while (mbufi < (4 - 2)) mbuf[mbufi++] = fifo_dequeue();
uint8_t mbufi_idle = 2;
dispatch_idle((mbuf[0] << 8) + mbuf[1] /* instance port*/);
break;
}
case 11:{
byte mbuf[4 - 2];
while (mbufi < (4 - 2)) mbuf[mbufi++] = fifo_dequeue();
uint8_t mbufi_off = 2;
dispatch_off((mbuf[0] << 8) + mbuf[1] /* instance port*/);
break;
}
case 6:{
byte mbuf[4 - 2];
while (mbufi < (4 - 2)) mbuf[mbufi++] = fifo_dequeue();
uint8_t mbufi_measurement_received = 2;
dispatch_measurement_received((mbuf[0] << 8) + mbuf[1] /* instance port*/);
break;
}
case 12:{
byte mbuf[4 - 2];
while (mbufi < (4 - 2)) mbuf[mbufi++] = fifo_dequeue();
uint8_t mbufi_solid = 2;
dispatch_solid((mbuf[0] << 8) + mbuf[1] /* instance port*/);
break;
}
case 15:{
byte mbuf[5 - 2];
while (mbufi < (5 - 2)) mbuf[mbufi++] = fifo_dequeue();
uint8_t mbufi_receive_byte = 2;
union u_receive_byte_b_t {
uint8_t p;
byte bytebuffer[1];
} u_receive_byte_b;
u_receive_byte_b.bytebuffer[0] = mbuf[mbufi_receive_byte + 0];
mbufi_receive_byte += 1;
dispatch_receive_byte((mbuf[0] << 8) + mbuf[1] /* instance port*/,
 u_receive_byte_b.p /* b */ );
break;
}
case 3:{
byte mbuf[4 - 2];
while (mbufi < (4 - 2)) mbuf[mbufi++] = fifo_dequeue();
uint8_t mbufi_ui_clock = 2;
dispatch_ui_clock((mbuf[0] << 8) + mbuf[1] /* instance port*/);
break;
}
case 8:{
byte mbuf[7 - 2];
while (mbufi < (7 - 2)) mbuf[mbufi++] = fifo_dequeue();
uint8_t mbufi_set_base_color = 2;
union u_set_base_color_r_t {
uint8_t p;
byte bytebuffer[1];
} u_set_base_color_r;
u_set_base_color_r.bytebuffer[0] = mbuf[mbufi_set_base_color + 0];
mbufi_set_base_color += 1;
union u_set_base_color_g_t {
uint8_t p;
byte bytebuffer[1];
} u_set_base_color_g;
u_set_base_color_g.bytebuffer[0] = mbuf[mbufi_set_base_color + 0];
mbufi_set_base_color += 1;
union u_set_base_color_b_t {
uint8_t p;
byte bytebuffer[1];
} u_set_base_color_b;
u_set_base_color_b.bytebuffer[0] = mbuf[mbufi_set_base_color + 0];
mbufi_set_base_color += 1;
dispatch_set_base_color((mbuf[0] << 8) + mbuf[1] /* instance port*/,
 u_set_base_color_r.p /* r */ ,
 u_set_base_color_g.p /* g */ ,
 u_set_base_color_b.p /* b */ );
break;
}
case 13:{
byte mbuf[7 - 2];
while (mbufi < (7 - 2)) mbuf[mbufi++] = fifo_dequeue();
uint8_t mbufi_setColor = 2;
union u_setColor_red_t {
uint8_t p;
byte bytebuffer[1];
} u_setColor_red;
u_setColor_red.bytebuffer[0] = mbuf[mbufi_setColor + 0];
mbufi_setColor += 1;
union u_setColor_green_t {
uint8_t p;
byte bytebuffer[1];
} u_setColor_green;
u_setColor_green.bytebuffer[0] = mbuf[mbufi_setColor + 0];
mbufi_setColor += 1;
union u_setColor_blue_t {
uint8_t p;
byte bytebuffer[1];
} u_setColor_blue;
u_setColor_blue.bytebuffer[0] = mbuf[mbufi_setColor + 0];
mbufi_setColor += 1;
dispatch_setColor((mbuf[0] << 8) + mbuf[1] /* instance port*/,
 u_setColor_red.p /* red */ ,
 u_setColor_green.p /* green */ ,
 u_setColor_blue.p /* blue */ );
break;
}
case 4:{
byte mbuf[4 - 2];
while (mbufi < (4 - 2)) mbuf[mbufi++] = fifo_dequeue();
uint8_t mbufi_bad_measurement = 2;
dispatch_bad_measurement((mbuf[0] << 8) + mbuf[1] /* instance port*/);
break;
}
case 16:{
byte mbuf[4 - 2];
while (mbufi < (4 - 2)) mbuf[mbufi++] = fifo_dequeue();
uint8_t mbufi_measuring = 2;
dispatch_measuring((mbuf[0] << 8) + mbuf[1] /* instance port*/);
break;
}
case 10:{
byte mbuf[4 - 2];
while (mbufi < (4 - 2)) mbuf[mbufi++] = fifo_dequeue();
uint8_t mbufi_pulse = 2;
dispatch_pulse((mbuf[0] << 8) + mbuf[1] /* instance port*/);
break;
}
case 1:{
byte mbuf[5 - 2];
while (mbufi < (5 - 2)) mbuf[mbufi++] = fifo_dequeue();
uint8_t mbufi_timer_timeout = 2;
union u_timer_timeout_id_t {
uint8_t p;
byte bytebuffer[1];
} u_timer_timeout_id;
u_timer_timeout_id.bytebuffer[0] = mbuf[mbufi_timer_timeout + 0];
mbufi_timer_timeout += 1;
dispatch_timer_timeout((mbuf[0] << 8) + mbuf[1] /* instance port*/,
 u_timer_timeout_id.p /* id */ );
break;
}
case 7:{
byte mbuf[4 - 2];
while (mbufi < (4 - 2)) mbuf[mbufi++] = fifo_dequeue();
uint8_t mbufi_measurement_stored = 2;
dispatch_measurement_stored((mbuf[0] << 8) + mbuf[1] /* instance port*/);
break;
}
case 2:{
byte mbuf[4 - 2];
while (mbufi < (4 - 2)) mbuf[mbufi++] = fifo_dequeue();
uint8_t mbufi_fps_clock = 2;
dispatch_fps_clock((mbuf[0] << 8) + mbuf[1] /* instance port*/);
break;
}
case 18:{
byte mbuf[4 - 2];
while (mbufi < (4 - 2)) mbuf[mbufi++] = fifo_dequeue();
uint8_t mbufi_pumping = 2;
dispatch_pumping((mbuf[0] << 8) + mbuf[1] /* instance port*/);
break;
}
case 14:{
byte mbuf[5 - 2];
while (mbufi < (5 - 2)) mbuf[mbufi++] = fifo_dequeue();
uint8_t mbufi_rotate = 2;
union u_rotate_speed_t {
int8_t p;
byte bytebuffer[1];
} u_rotate_speed;
u_rotate_speed.bytebuffer[0] = mbuf[mbufi_rotate + 0];
mbufi_rotate += 1;
dispatch_rotate((mbuf[0] << 8) + mbuf[1] /* instance port*/,
 u_rotate_speed.p /* speed */ );
break;
}
}
return 1;
}

void forward_BLENotifier_send_clock_timer_cancel(struct BLENotifier_Instance *_instance, uint8_t id){
if(_instance->id_clock == notifier_var.id_clock) {
forward_timer2_BLENotifier_send_clock_timer_cancel(_instance, id);
}
}
void forward_BLENotifier_send_clock_timer_start(struct BLENotifier_Instance *_instance, uint8_t id, uint32_t time){
if(_instance->id_clock == notifier_var.id_clock) {
forward_timer2_BLENotifier_send_clock_timer_start(_instance, id, time);
}
}

//external Message enqueue
void externalMessageEnqueue(uint8_t * msg, uint8_t msgSize, uint16_t listener_id) {
if ((msgSize >= 2) && (msg != NULL)) {
uint8_t msgSizeOK = 0;
switch(msg[0] * 256 + msg[1]) {
case 1:
if(msgSize == 3) {
msgSizeOK = 1;}
break;
case 2:
if(msgSize == 2) {
msgSizeOK = 1;}
break;
case 3:
if(msgSize == 2) {
msgSizeOK = 1;}
break;
}

if(msgSizeOK == 1) {
if ( fifo_byte_available() > (msgSize + 2) ) {
	uint8_t i;
	for (i = 0; i < 2; i++) {
		_fifo_enqueue(msg[i]);
	}
	_fifo_enqueue((listener_id >> 8) & 0xFF);
	_fifo_enqueue(listener_id & 0xFF);
	for (i = 2; i < msgSize; i++) {
		_fifo_enqueue(msg[i]);
	}
}
}
}
}

void initialize_configuration_BLENotifier() {
// Initialize connectors
register_external_BLENotifier_send_clock_timer_start_listener(&forward_BLENotifier_send_clock_timer_start);
register_external_BLENotifier_send_clock_timer_cancel_listener(&forward_BLENotifier_send_clock_timer_cancel);
register_GatewayCommandParser_send_bletx_write_byte_listener(&sync_dispatch_GatewayCommandParser_send_bletx_write_byte);
register_GatewayCommandParser_send_bletx_print_message_listener(&sync_dispatch_GatewayCommandParser_send_bletx_print_message);
register_GatewayCommandParser_send_gateway_request_measurement_listener(&enqueue_GatewayCommandParser_send_gateway_request_measurement);
register_GatewayCommandParser_send_gateway_measurement_received_listener(&enqueue_GatewayCommandParser_send_gateway_measurement_received);
register_GatewayCommandParser_send_gateway_bad_measurement_listener(&enqueue_GatewayCommandParser_send_gateway_bad_measurement);
register_GatewayCommandParser_send_gateway_measurement_stored_listener(&enqueue_GatewayCommandParser_send_gateway_measurement_stored);
register_GatewayCommandParser_send_gateway_set_base_color_listener(&enqueue_GatewayCommandParser_send_gateway_set_base_color);
register_BLENotifier_send_neopixels_setColor_listener(&enqueue_BLENotifier_send_neopixels_setColor);
register_BLENotifier_send_neopixels_off_listener(&enqueue_BLENotifier_send_neopixels_off);
register_BLENotifier_send_neopixels_pulse_listener(&enqueue_BLENotifier_send_neopixels_pulse);
register_BLENotifier_send_neopixels_rotate_listener(&enqueue_BLENotifier_send_neopixels_rotate);
register_BLENotifier_send_neopixels_breath_listener(&enqueue_BLENotifier_send_neopixels_breath);
register_BLENotifier_send_neopixels_solid_listener(&enqueue_BLENotifier_send_neopixels_solid);
register_BPSensor_send_ctrl_idle_listener(&enqueue_BPSensor_send_ctrl_idle);
register_BPSensor_send_ctrl_pumping_listener(&enqueue_BPSensor_send_ctrl_pumping);
register_BPSensor_send_ctrl_measuring_listener(&enqueue_BPSensor_send_ctrl_measuring);
register_Serial_send_rx_receive_byte_listener(&enqueue_Serial_send_rx_receive_byte);

// Init the ID, state variables and properties for external connector timer2
// Init the ID, state variables and properties for external connector timer2
// Init the ID, state variables and properties for external connector timer2

// Network Initialization

timer2_instance.listener_id = add_instance(&timer2_instance);

timer2_setup();

// End Network Initialization

// Init the ID, state variables and properties for instance uart
uart_var.active = true;
uart_var.id_rx = add_instance( (void*) &uart_var);
uart_var.id_tx = add_instance( (void*) &uart_var);
uart_var.Serial_SerialImpl_State = SERIAL_SERIALIMPL_RECEIVING_STATE;

Serial_SerialImpl_OnEntry(SERIAL_SERIALIMPL_STATE, &uart_var);
// Init the ID, state variables and properties for instance gwcmd
gwcmd_var.active = true;
gwcmd_var.id_blerx = add_instance( (void*) &gwcmd_var);
gwcmd_var.id_bletx = add_instance( (void*) &gwcmd_var);
gwcmd_var.id_gateway = add_instance( (void*) &gwcmd_var);
gwcmd_var.GatewayCommandParser_GatewayCommandParserSC_State = GATEWAYCOMMANDPARSER_GATEWAYCOMMANDPARSERSC_READY_STATE;
gwcmd_var.GatewayCommandParser_GatewayCommandParserSC_SetColor_buf_var = array_gwcmd_GatewayCommandParser_GatewayCommandParserSC_SetColor_buf_var;
gwcmd_var.GatewayCommandParser_GatewayCommandParserSC_SetColor_buf_var_size = 2;

GatewayCommandParser_GatewayCommandParserSC_OnEntry(GATEWAYCOMMANDPARSER_GATEWAYCOMMANDPARSERSC_STATE, &gwcmd_var);
// Init the ID, state variables and properties for instance neopixels
neopixels_var.active = true;
neopixels_var.id_ctrl = add_instance( (void*) &neopixels_var);
neopixels_var.id_clock = add_instance( (void*) &neopixels_var);
neopixels_var.NeoPixel_NeoPixelStateChart_State = NEOPIXEL_NEOPIXELSTATECHART_OFF_STATE;
neopixels_var.NeoPixel_neopixel_pin_var = 7;
neopixels_var.NeoPixel_neopixel_count_var = 10;
neopixels_var.NeoPixel_NeoPixelStateChart_color_r_var = 110;
neopixels_var.NeoPixel_NeoPixelStateChart_color_g_var = 128;
neopixels_var.NeoPixel_NeoPixelStateChart_color_b_var = 128;
neopixels_var.NeoPixel_NeoPixelStateChart_rotate_speed_var = 10;
neopixels_var.NeoPixel_NeoPixelStateChart_breath_speed_var = 100;
neopixels_var.NeoPixel_NeoPixelStateChart_ROTATE_angle_var = 0;
neopixels_var.NeoPixel_NeoPixelStateChart_ROTATE_maxangle_var = 200;
neopixels_var.NeoPixel_NeoPixelStateChart_BREATH_counter_var = 0;
neopixels_var.NeoPixel_NeoPixelStateChart_BREATH_maxcount_var = 186;
neopixels_var.NeoPixel_NeoPixelStateChart_PULSE_counter_var = 0;
neopixels_var.NeoPixel_NeoPixelStateChart_PULSE_maxcount_var = 100;

NeoPixel_NeoPixelStateChart_OnEntry(NEOPIXEL_NEOPIXELSTATECHART_STATE, &neopixels_var);
// Init the ID, state variables and properties for instance sensor
sensor_var.active = true;
sensor_var.id_clock = add_instance( (void*) &sensor_var);
sensor_var.id_ctrl = add_instance( (void*) &sensor_var);
sensor_var.BPSensor_BPSensorImpl_State = BPSENSOR_BPSENSORIMPL_IDLE_STATE;

BPSensor_BPSensorImpl_OnEntry(BPSENSOR_BPSENSORIMPL_STATE, &sensor_var);
// Init the ID, state variables and properties for instance notifier
notifier_var.active = true;
notifier_var.id_gateway = add_instance( (void*) &notifier_var);
notifier_var.id_sensor = add_instance( (void*) &notifier_var);
notifier_var.id_neopixels = add_instance( (void*) &notifier_var);
notifier_var.id_clock = add_instance( (void*) &notifier_var);
notifier_var.BLENotifier_BLENotifierSC_State = BLENOTIFIER_BLENOTIFIERSC_INIT_STATE;

BLENotifier_BLENotifierSC_OnEntry(BLENOTIFIER_BLENOTIFIERSC_STATE, &notifier_var);
}




void setup() {
initialize_configuration_BLENotifier();

}

void loop() {

// Network Listener
timer2_read();
// End Network Listener

Serial_handle_empty_event(&uart_var);

    processMessageQueue();
}
