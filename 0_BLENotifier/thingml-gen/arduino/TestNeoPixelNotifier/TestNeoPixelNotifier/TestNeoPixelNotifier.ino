/*****************************************************************************
 * Headers for type : NeoPixelNotifierGWTest
 *****************************************************************************/

// Definition of the instance struct:
struct NeoPixelNotifierGWTest_Instance {

// Instances of different sessions
bool active;
// Variables for the ID of the ports of the instance
uint16_t id_clock;
uint16_t id_neopixels;
// Variables for the current instance state
int NeoPixelNotifierGWTest_Test_State;
// Variables for the properties of the instance

};
// Declaration of prototypes outgoing messages:
void NeoPixelNotifierGWTest_Test_OnEntry(int state, struct NeoPixelNotifierGWTest_Instance *_instance);
void NeoPixelNotifierGWTest_handle_clock_timer_timeout(struct NeoPixelNotifierGWTest_Instance *_instance, uint8_t id);
// Declaration of callbacks for incoming messages:
void register_NeoPixelNotifierGWTest_send_clock_timer_start_listener(void (*_listener)(struct NeoPixelNotifierGWTest_Instance *, uint8_t, uint32_t));
void register_external_NeoPixelNotifierGWTest_send_clock_timer_start_listener(void (*_listener)(struct NeoPixelNotifierGWTest_Instance *, uint8_t, uint32_t));
void register_NeoPixelNotifierGWTest_send_clock_timer_cancel_listener(void (*_listener)(struct NeoPixelNotifierGWTest_Instance *, uint8_t));
void register_external_NeoPixelNotifierGWTest_send_clock_timer_cancel_listener(void (*_listener)(struct NeoPixelNotifierGWTest_Instance *, uint8_t));
void register_NeoPixelNotifierGWTest_send_neopixels_setColor_listener(void (*_listener)(struct NeoPixelNotifierGWTest_Instance *, uint8_t, uint8_t, uint8_t));
void register_external_NeoPixelNotifierGWTest_send_neopixels_setColor_listener(void (*_listener)(struct NeoPixelNotifierGWTest_Instance *, uint8_t, uint8_t, uint8_t));
void register_NeoPixelNotifierGWTest_send_neopixels_setLogoColor_listener(void (*_listener)(struct NeoPixelNotifierGWTest_Instance *, uint8_t, uint8_t, uint8_t));
void register_external_NeoPixelNotifierGWTest_send_neopixels_setLogoColor_listener(void (*_listener)(struct NeoPixelNotifierGWTest_Instance *, uint8_t, uint8_t, uint8_t));
void register_NeoPixelNotifierGWTest_send_neopixels_setRingColor_listener(void (*_listener)(struct NeoPixelNotifierGWTest_Instance *, uint8_t, uint8_t, uint8_t));
void register_external_NeoPixelNotifierGWTest_send_neopixels_setRingColor_listener(void (*_listener)(struct NeoPixelNotifierGWTest_Instance *, uint8_t, uint8_t, uint8_t));
void register_NeoPixelNotifierGWTest_send_neopixels_off_listener(void (*_listener)(struct NeoPixelNotifierGWTest_Instance *));
void register_external_NeoPixelNotifierGWTest_send_neopixels_off_listener(void (*_listener)(struct NeoPixelNotifierGWTest_Instance *));
void register_NeoPixelNotifierGWTest_send_neopixels_pulse_listener(void (*_listener)(struct NeoPixelNotifierGWTest_Instance *));
void register_external_NeoPixelNotifierGWTest_send_neopixels_pulse_listener(void (*_listener)(struct NeoPixelNotifierGWTest_Instance *));
void register_NeoPixelNotifierGWTest_send_neopixels_rotate_listener(void (*_listener)(struct NeoPixelNotifierGWTest_Instance *, int8_t));
void register_external_NeoPixelNotifierGWTest_send_neopixels_rotate_listener(void (*_listener)(struct NeoPixelNotifierGWTest_Instance *, int8_t));
void register_NeoPixelNotifierGWTest_send_neopixels_breath_listener(void (*_listener)(struct NeoPixelNotifierGWTest_Instance *));
void register_external_NeoPixelNotifierGWTest_send_neopixels_breath_listener(void (*_listener)(struct NeoPixelNotifierGWTest_Instance *));
void register_NeoPixelNotifierGWTest_send_neopixels_solid_listener(void (*_listener)(struct NeoPixelNotifierGWTest_Instance *));
void register_external_NeoPixelNotifierGWTest_send_neopixels_solid_listener(void (*_listener)(struct NeoPixelNotifierGWTest_Instance *));
void register_NeoPixelNotifierGWTest_send_neopixels_blink_listener(void (*_listener)(struct NeoPixelNotifierGWTest_Instance *));
void register_external_NeoPixelNotifierGWTest_send_neopixels_blink_listener(void (*_listener)(struct NeoPixelNotifierGWTest_Instance *));
void register_NeoPixelNotifierGWTest_send_neopixels_blink_logo_listener(void (*_listener)(struct NeoPixelNotifierGWTest_Instance *));
void register_external_NeoPixelNotifierGWTest_send_neopixels_blink_logo_listener(void (*_listener)(struct NeoPixelNotifierGWTest_Instance *));

// Definition of the states:
#define NEOPIXELNOTIFIERGWTEST_TEST_STATE 0
#define NEOPIXELNOTIFIERGWTEST_TEST_TEST_STATE 1
#define NEOPIXELNOTIFIERGWTEST_TEST_GREEN_STATE 2
#define NEOPIXELNOTIFIERGWTEST_TEST_OFF_STATE 3
#define NEOPIXELNOTIFIERGWTEST_TEST_BREATH_STATE 4
#define NEOPIXELNOTIFIERGWTEST_TEST_PULSE_STATE 5
#define NEOPIXELNOTIFIERGWTEST_TEST_PUMP_STATE 6
#define NEOPIXELNOTIFIERGWTEST_TEST_MEASURE_STATE 7
#define NEOPIXELNOTIFIERGWTEST_TEST_BLINK_STATE 8
#define NEOPIXELNOTIFIERGWTEST_TEST_GWOK_STATE 9
#define NEOPIXELNOTIFIERGWTEST_TEST_TELLUERR_STATE 10


/*****************************************************************************
 * Headers for type : NeoPixelNotifierGW
 *****************************************************************************/

// Definition of the instance struct:
struct NeoPixelNotifierGW_Instance {

// Instances of different sessions
bool active;
// Variables for the ID of the ports of the instance
uint16_t id_ctrl;
uint16_t id_clock;
// Variables for the current instance state
int NeoPixelNotifierGW_NeoPixelStateChart_State;
// Variables for the properties of the instance
uint8_t NeoPixelNotifierGW_NeoPixelStateChart_l_color_g_var;
uint8_t NeoPixelNotifierGW_neopixel_logo_first_var;
uint8_t NeoPixelNotifierGW_NeoPixelStateChart_BLINKLOGO_counter_var;
uint8_t NeoPixelNotifierGW_NeoPixelStateChart_color_b_var;
uint8_t NeoPixelNotifierGW_NeoPixelStateChart_breath_speed_var;
uint8_t NeoPixelNotifierGW_NeoPixelStateChart_color_r_var;
uint8_t NeoPixelNotifierGW_NeoPixelStateChart_l_color_r_var;
uint8_t NeoPixelNotifierGW_neopixel_ring_last_var;
uint8_t NeoPixelNotifierGW_NeoPixelStateChart_BLINKALL_maxcount_var;
uint8_t NeoPixelNotifierGW_ring_brightness_divider_var;
uint8_t NeoPixelNotifierGW_NeoPixelStateChart_ROTATE_maxangle_var;
uint8_t NeoPixelNotifierGW_NeoPixelStateChart_PULSE_counter_var;
uint8_t NeoPixelNotifierGW_NeoPixelStateChart_BLINKALL_counter_var;
uint8_t NeoPixelNotifierGW_neopixel_logo_last_var;
uint8_t NeoPixelNotifierGW_NeoPixelStateChart_l_color_b_var;
uint8_t NeoPixelNotifierGW_NeoPixelStateChart_BLINKLOGO_maxcount_var;
uint8_t NeoPixelNotifierGW_NeoPixelStateChart_color_g_var;
int16_t NeoPixelNotifierGW_NeoPixelStateChart_ROTATE_angle_var;
int8_t NeoPixelNotifierGW_NeoPixelStateChart_rotate_speed_var;
uint8_t NeoPixelNotifierGW_NeoPixelStateChart_BREATH_maxcount_var;
uint8_t NeoPixelNotifierGW_NeoPixelStateChart_PULSE_maxcount_var;
uint8_t NeoPixelNotifierGW_neopixel_pin_var;
uint8_t NeoPixelNotifierGW_neopixel_total_count_var;
uint8_t NeoPixelNotifierGW_neopixel_ring_first_var;
uint8_t NeoPixelNotifierGW_NeoPixelStateChart_BREATH_counter_var;

};
// Declaration of prototypes outgoing messages:
void NeoPixelNotifierGW_NeoPixelStateChart_OnEntry(int state, struct NeoPixelNotifierGW_Instance *_instance);
void NeoPixelNotifierGW_handle_ctrl_off(struct NeoPixelNotifierGW_Instance *_instance);
void NeoPixelNotifierGW_handle_ctrl_setColor(struct NeoPixelNotifierGW_Instance *_instance, uint8_t red, uint8_t green, uint8_t blue);
void NeoPixelNotifierGW_handle_ctrl_breath(struct NeoPixelNotifierGW_Instance *_instance);
void NeoPixelNotifierGW_handle_ctrl_setRingColor(struct NeoPixelNotifierGW_Instance *_instance, uint8_t red, uint8_t green, uint8_t blue);
void NeoPixelNotifierGW_handle_ctrl_blink(struct NeoPixelNotifierGW_Instance *_instance);
void NeoPixelNotifierGW_handle_ctrl_pulse(struct NeoPixelNotifierGW_Instance *_instance);
void NeoPixelNotifierGW_handle_ctrl_rotate(struct NeoPixelNotifierGW_Instance *_instance, int8_t speed);
void NeoPixelNotifierGW_handle_ctrl_solid(struct NeoPixelNotifierGW_Instance *_instance);
void NeoPixelNotifierGW_handle_ctrl_setLogoColor(struct NeoPixelNotifierGW_Instance *_instance, uint8_t red, uint8_t green, uint8_t blue);
void NeoPixelNotifierGW_handle_ctrl_blink_logo(struct NeoPixelNotifierGW_Instance *_instance);
void NeoPixelNotifierGW_handle_clock_fps_clock(struct NeoPixelNotifierGW_Instance *_instance);
// Declaration of callbacks for incoming messages:

// Definition of the states:
#define NEOPIXELNOTIFIERGW_NEOPIXELSTATECHART_STATE 0
#define NEOPIXELNOTIFIERGW_NEOPIXELSTATECHART_OFF_STATE 1
#define NEOPIXELNOTIFIERGW_NEOPIXELSTATECHART_SOLID_STATE 2
#define NEOPIXELNOTIFIERGW_NEOPIXELSTATECHART_ROTATE_STATE 3
#define NEOPIXELNOTIFIERGW_NEOPIXELSTATECHART_BREATH_STATE 4
#define NEOPIXELNOTIFIERGW_NEOPIXELSTATECHART_PULSE_STATE 5
#define NEOPIXELNOTIFIERGW_NEOPIXELSTATECHART_BLINKALL_STATE 6
#define NEOPIXELNOTIFIERGW_NEOPIXELSTATECHART_BLINKLOGO_STATE 7


//timer2

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

#define MAX_INSTANCES 6
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

/*****************************************************************************
 * Implementation for type : NeoPixelNotifierGW
 *****************************************************************************/


// BEGIN: Code from the c_global annotation NeoPixelNotifierGW

#include <Adafruit_NeoPixel.h>
Adafruit_NeoPixel strip;

#define BREATH_LEN 36
uint8_t breath[] = {0, 0, 0, 0, 0, 0, 1, 2, 3, 5, 8, 11, 14, 18, 23, 29, 36, 43, 52, 61, 72, 83, 96, 110, 124, 140, 155, 171, 186, 202, 216, 228, 238, 247, 252, 255};

#define PULSE_LEN 37
uint8_t pulse[] =  {32, 40, 50, 55, 50, 32, 32, 32, 20, 10, 20, 40, 80, 160, 230, 255, 230, 160, 80, 40, 20, 10, 5, 2, 0, 6, 16, 30, 32, 32, 40, 48, 55, 60, 50, 36, 32};

#define BLINK_LEN 11
uint8_t blink[] =  {0, 6, 24, 52, 88, 127, 166, 202, 230, 248, 255};

#define ROTATE_LEN 10
uint8_t rotatep[] =  {0, 0, 255, 0, 0, 0, 0, 255, 0, 0};

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

// END: Code from the c_global annotation NeoPixelNotifierGW

// Declaration of prototypes:
//Prototypes: State Machine
void NeoPixelNotifierGW_NeoPixelStateChart_OnExit(int state, struct NeoPixelNotifierGW_Instance *_instance);
//Prototypes: Message Sending
//Prototypes: Function
void f_NeoPixelNotifierGW_setPixelColor(struct NeoPixelNotifierGW_Instance *_instance, uint8_t pixel, uint32_t color);
uint32_t f_NeoPixelNotifierGW_getColor(struct NeoPixelNotifierGW_Instance *_instance, uint8_t red, uint8_t green, uint8_t blue);
void f_NeoPixelNotifierGW_updateNeopixels(struct NeoPixelNotifierGW_Instance *_instance);
uint8_t f_NeoPixelNotifierGW_breath_brightness(struct NeoPixelNotifierGW_Instance *_instance, uint8_t time, uint8_t max);
uint8_t f_NeoPixelNotifierGW_rotate_brightness(struct NeoPixelNotifierGW_Instance *_instance, uint8_t angle, uint8_t max);
uint8_t f_NeoPixelNotifierGW_pulse_brightness(struct NeoPixelNotifierGW_Instance *_instance, uint8_t time);
uint8_t f_NeoPixelNotifierGW_blink_brightness(struct NeoPixelNotifierGW_Instance *_instance, uint8_t time);
void f_NeoPixelNotifierGW_initializeNeopixels(struct NeoPixelNotifierGW_Instance *_instance);
// Declaration of functions:
// Definition of function setPixelColor
void f_NeoPixelNotifierGW_setPixelColor(struct NeoPixelNotifierGW_Instance *_instance, uint8_t pixel, uint32_t color) {
strip.setPixelColor(pixel, color);
}
// Definition of function getColor
uint32_t f_NeoPixelNotifierGW_getColor(struct NeoPixelNotifierGW_Instance *_instance, uint8_t red, uint8_t green, uint8_t blue) {
return strip.Color(red, green, blue);
}
// Definition of function updateNeopixels
void f_NeoPixelNotifierGW_updateNeopixels(struct NeoPixelNotifierGW_Instance *_instance) {
strip.show();
}
// Definition of function breath_brightness
uint8_t f_NeoPixelNotifierGW_breath_brightness(struct NeoPixelNotifierGW_Instance *_instance, uint8_t time, uint8_t max) {
if(time > max / 2) {
return f_NeoPixelNotifierGW_breath_brightness(_instance, max - time, max);

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
uint8_t f_NeoPixelNotifierGW_rotate_brightness(struct NeoPixelNotifierGW_Instance *_instance, uint8_t angle, uint8_t max) {
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
uint8_t f_NeoPixelNotifierGW_pulse_brightness(struct NeoPixelNotifierGW_Instance *_instance, uint8_t time) {
if(time < PULSE_LEN) {
return pulse[time];

} else {
return pulse[0];

}
}
// Definition of function blink_brightness
uint8_t f_NeoPixelNotifierGW_blink_brightness(struct NeoPixelNotifierGW_Instance *_instance, uint8_t time) {
if(time < BLINK_LEN) {
return blink[time];

} else {
if(time < BLINK_LEN*2) {
return blink[BLINK_LEN*2-time-1];

} else {
return blink[0];

}

}
}
// Definition of function initializeNeopixels
void f_NeoPixelNotifierGW_initializeNeopixels(struct NeoPixelNotifierGW_Instance *_instance) {
strip = Adafruit_NeoPixel(_instance->NeoPixelNotifierGW_neopixel_total_count_var, _instance->NeoPixelNotifierGW_neopixel_pin_var, NEO_GRBW + NEO_KHZ800);
		 strip.begin();
		 strip.setBrightness(255);
		 strip.show();
;uint32_t color = f_NeoPixelNotifierGW_getColor(_instance, 0, 50, 255);
f_NeoPixelNotifierGW_setPixelColor(_instance, _instance->NeoPixelNotifierGW_neopixel_total_count_var, color);
f_NeoPixelNotifierGW_updateNeopixels(_instance);
}

// Sessions functionss:


// On Entry Actions:
void NeoPixelNotifierGW_NeoPixelStateChart_OnEntry(int state, struct NeoPixelNotifierGW_Instance *_instance) {
switch(state) {
case NEOPIXELNOTIFIERGW_NEOPIXELSTATECHART_STATE:{
_instance->NeoPixelNotifierGW_NeoPixelStateChart_State = NEOPIXELNOTIFIERGW_NEOPIXELSTATECHART_PULSE_STATE;
f_NeoPixelNotifierGW_initializeNeopixels(_instance);
NeoPixelNotifierGW_NeoPixelStateChart_OnEntry(_instance->NeoPixelNotifierGW_NeoPixelStateChart_State, _instance);
break;
}
case NEOPIXELNOTIFIERGW_NEOPIXELSTATECHART_OFF_STATE:{
;uint8_t i = 0;
;uint32_t color = f_NeoPixelNotifierGW_getColor(_instance, 0, 0, 0);
while(i < _instance->NeoPixelNotifierGW_neopixel_total_count_var) {
f_NeoPixelNotifierGW_setPixelColor(_instance, i, color);
i = i + 1;

}
f_NeoPixelNotifierGW_updateNeopixels(_instance);
break;
}
case NEOPIXELNOTIFIERGW_NEOPIXELSTATECHART_SOLID_STATE:{
break;
}
case NEOPIXELNOTIFIERGW_NEOPIXELSTATECHART_ROTATE_STATE:{
;uint8_t i = _instance->NeoPixelNotifierGW_neopixel_logo_first_var;
;uint32_t color = f_NeoPixelNotifierGW_getColor(_instance, _instance->NeoPixelNotifierGW_NeoPixelStateChart_l_color_r_var, _instance->NeoPixelNotifierGW_NeoPixelStateChart_l_color_g_var, _instance->NeoPixelNotifierGW_NeoPixelStateChart_l_color_b_var);
while(i <= _instance->NeoPixelNotifierGW_neopixel_logo_last_var) {
f_NeoPixelNotifierGW_setPixelColor(_instance, i, color);
i = i + 1;

}
f_NeoPixelNotifierGW_updateNeopixels(_instance);
break;
}
case NEOPIXELNOTIFIERGW_NEOPIXELSTATECHART_BREATH_STATE:{
break;
}
case NEOPIXELNOTIFIERGW_NEOPIXELSTATECHART_PULSE_STATE:{
;uint8_t i = _instance->NeoPixelNotifierGW_neopixel_logo_first_var;
;uint32_t color = f_NeoPixelNotifierGW_getColor(_instance, _instance->NeoPixelNotifierGW_NeoPixelStateChart_l_color_r_var, _instance->NeoPixelNotifierGW_NeoPixelStateChart_l_color_g_var, _instance->NeoPixelNotifierGW_NeoPixelStateChart_l_color_b_var);
while(i <= _instance->NeoPixelNotifierGW_neopixel_logo_last_var) {
f_NeoPixelNotifierGW_setPixelColor(_instance, i, color);
i = i + 1;

}
f_NeoPixelNotifierGW_updateNeopixels(_instance);
break;
}
case NEOPIXELNOTIFIERGW_NEOPIXELSTATECHART_BLINKALL_STATE:{
break;
}
case NEOPIXELNOTIFIERGW_NEOPIXELSTATECHART_BLINKLOGO_STATE:{
;uint32_t rcolor = f_NeoPixelNotifierGW_getColor(_instance, _instance->NeoPixelNotifierGW_NeoPixelStateChart_color_r_var, _instance->NeoPixelNotifierGW_NeoPixelStateChart_color_g_var, _instance->NeoPixelNotifierGW_NeoPixelStateChart_color_b_var);
;uint8_t i = _instance->NeoPixelNotifierGW_neopixel_ring_first_var;
while(i <= _instance->NeoPixelNotifierGW_neopixel_ring_last_var) {
f_NeoPixelNotifierGW_setPixelColor(_instance, i, rcolor);
i = i + 1;

}
f_NeoPixelNotifierGW_updateNeopixels(_instance);
break;
}
default: break;
}
}

// On Exit Actions:
void NeoPixelNotifierGW_NeoPixelStateChart_OnExit(int state, struct NeoPixelNotifierGW_Instance *_instance) {
switch(state) {
case NEOPIXELNOTIFIERGW_NEOPIXELSTATECHART_STATE:{
NeoPixelNotifierGW_NeoPixelStateChart_OnExit(_instance->NeoPixelNotifierGW_NeoPixelStateChart_State, _instance);
break;}
case NEOPIXELNOTIFIERGW_NEOPIXELSTATECHART_OFF_STATE:{
break;}
case NEOPIXELNOTIFIERGW_NEOPIXELSTATECHART_SOLID_STATE:{
break;}
case NEOPIXELNOTIFIERGW_NEOPIXELSTATECHART_ROTATE_STATE:{
break;}
case NEOPIXELNOTIFIERGW_NEOPIXELSTATECHART_BREATH_STATE:{
break;}
case NEOPIXELNOTIFIERGW_NEOPIXELSTATECHART_PULSE_STATE:{
break;}
case NEOPIXELNOTIFIERGW_NEOPIXELSTATECHART_BLINKALL_STATE:{
break;}
case NEOPIXELNOTIFIERGW_NEOPIXELSTATECHART_BLINKLOGO_STATE:{
break;}
default: break;
}
}

// Event Handlers for incoming messages:
void NeoPixelNotifierGW_handle_ctrl_off(struct NeoPixelNotifierGW_Instance *_instance) {
if(!(_instance->active)) return;
//Region NeoPixelStateChart
uint8_t NeoPixelNotifierGW_NeoPixelStateChart_State_event_consumed = 0;
if (_instance->NeoPixelNotifierGW_NeoPixelStateChart_State == NEOPIXELNOTIFIERGW_NEOPIXELSTATECHART_SOLID_STATE) {
if (NeoPixelNotifierGW_NeoPixelStateChart_State_event_consumed == 0 && 1) {
NeoPixelNotifierGW_NeoPixelStateChart_OnExit(NEOPIXELNOTIFIERGW_NEOPIXELSTATECHART_SOLID_STATE, _instance);
_instance->NeoPixelNotifierGW_NeoPixelStateChart_State = NEOPIXELNOTIFIERGW_NEOPIXELSTATECHART_OFF_STATE;
NeoPixelNotifierGW_NeoPixelStateChart_OnEntry(NEOPIXELNOTIFIERGW_NEOPIXELSTATECHART_OFF_STATE, _instance);
NeoPixelNotifierGW_NeoPixelStateChart_State_event_consumed = 1;
}
}
else if (_instance->NeoPixelNotifierGW_NeoPixelStateChart_State == NEOPIXELNOTIFIERGW_NEOPIXELSTATECHART_ROTATE_STATE) {
if (NeoPixelNotifierGW_NeoPixelStateChart_State_event_consumed == 0 && 1) {
NeoPixelNotifierGW_NeoPixelStateChart_OnExit(NEOPIXELNOTIFIERGW_NEOPIXELSTATECHART_ROTATE_STATE, _instance);
_instance->NeoPixelNotifierGW_NeoPixelStateChart_State = NEOPIXELNOTIFIERGW_NEOPIXELSTATECHART_OFF_STATE;
NeoPixelNotifierGW_NeoPixelStateChart_OnEntry(NEOPIXELNOTIFIERGW_NEOPIXELSTATECHART_OFF_STATE, _instance);
NeoPixelNotifierGW_NeoPixelStateChart_State_event_consumed = 1;
}
}
else if (_instance->NeoPixelNotifierGW_NeoPixelStateChart_State == NEOPIXELNOTIFIERGW_NEOPIXELSTATECHART_BREATH_STATE) {
if (NeoPixelNotifierGW_NeoPixelStateChart_State_event_consumed == 0 && 1) {
NeoPixelNotifierGW_NeoPixelStateChart_OnExit(NEOPIXELNOTIFIERGW_NEOPIXELSTATECHART_BREATH_STATE, _instance);
_instance->NeoPixelNotifierGW_NeoPixelStateChart_State = NEOPIXELNOTIFIERGW_NEOPIXELSTATECHART_OFF_STATE;
NeoPixelNotifierGW_NeoPixelStateChart_OnEntry(NEOPIXELNOTIFIERGW_NEOPIXELSTATECHART_OFF_STATE, _instance);
NeoPixelNotifierGW_NeoPixelStateChart_State_event_consumed = 1;
}
}
else if (_instance->NeoPixelNotifierGW_NeoPixelStateChart_State == NEOPIXELNOTIFIERGW_NEOPIXELSTATECHART_PULSE_STATE) {
if (NeoPixelNotifierGW_NeoPixelStateChart_State_event_consumed == 0 && 1) {
NeoPixelNotifierGW_NeoPixelStateChart_OnExit(NEOPIXELNOTIFIERGW_NEOPIXELSTATECHART_PULSE_STATE, _instance);
_instance->NeoPixelNotifierGW_NeoPixelStateChart_State = NEOPIXELNOTIFIERGW_NEOPIXELSTATECHART_OFF_STATE;
NeoPixelNotifierGW_NeoPixelStateChart_OnEntry(NEOPIXELNOTIFIERGW_NEOPIXELSTATECHART_OFF_STATE, _instance);
NeoPixelNotifierGW_NeoPixelStateChart_State_event_consumed = 1;
}
}
else if (_instance->NeoPixelNotifierGW_NeoPixelStateChart_State == NEOPIXELNOTIFIERGW_NEOPIXELSTATECHART_BLINKALL_STATE) {
if (NeoPixelNotifierGW_NeoPixelStateChart_State_event_consumed == 0 && 1) {
NeoPixelNotifierGW_NeoPixelStateChart_OnExit(NEOPIXELNOTIFIERGW_NEOPIXELSTATECHART_BLINKALL_STATE, _instance);
_instance->NeoPixelNotifierGW_NeoPixelStateChart_State = NEOPIXELNOTIFIERGW_NEOPIXELSTATECHART_OFF_STATE;
NeoPixelNotifierGW_NeoPixelStateChart_OnEntry(NEOPIXELNOTIFIERGW_NEOPIXELSTATECHART_OFF_STATE, _instance);
NeoPixelNotifierGW_NeoPixelStateChart_State_event_consumed = 1;
}
}
else if (_instance->NeoPixelNotifierGW_NeoPixelStateChart_State == NEOPIXELNOTIFIERGW_NEOPIXELSTATECHART_BLINKLOGO_STATE) {
if (NeoPixelNotifierGW_NeoPixelStateChart_State_event_consumed == 0 && 1) {
NeoPixelNotifierGW_NeoPixelStateChart_OnExit(NEOPIXELNOTIFIERGW_NEOPIXELSTATECHART_BLINKLOGO_STATE, _instance);
_instance->NeoPixelNotifierGW_NeoPixelStateChart_State = NEOPIXELNOTIFIERGW_NEOPIXELSTATECHART_OFF_STATE;
NeoPixelNotifierGW_NeoPixelStateChart_OnEntry(NEOPIXELNOTIFIERGW_NEOPIXELSTATECHART_OFF_STATE, _instance);
NeoPixelNotifierGW_NeoPixelStateChart_State_event_consumed = 1;
}
}
//End Region NeoPixelStateChart
//End dsregion NeoPixelStateChart
//Session list: 
}
void NeoPixelNotifierGW_handle_ctrl_setColor(struct NeoPixelNotifierGW_Instance *_instance, uint8_t red, uint8_t green, uint8_t blue) {
if(!(_instance->active)) return;
//Region NeoPixelStateChart
uint8_t NeoPixelNotifierGW_NeoPixelStateChart_State_event_consumed = 0;
//End Region NeoPixelStateChart
//End dsregion NeoPixelStateChart
//Session list: 
if (1) {
_instance->NeoPixelNotifierGW_NeoPixelStateChart_color_r_var = red / _instance->NeoPixelNotifierGW_ring_brightness_divider_var;
_instance->NeoPixelNotifierGW_NeoPixelStateChart_color_g_var = green / _instance->NeoPixelNotifierGW_ring_brightness_divider_var;
_instance->NeoPixelNotifierGW_NeoPixelStateChart_color_b_var = blue / _instance->NeoPixelNotifierGW_ring_brightness_divider_var;
_instance->NeoPixelNotifierGW_NeoPixelStateChart_l_color_r_var = red;
_instance->NeoPixelNotifierGW_NeoPixelStateChart_l_color_g_var = green;
_instance->NeoPixelNotifierGW_NeoPixelStateChart_l_color_b_var = blue;
NeoPixelNotifierGW_NeoPixelStateChart_State_event_consumed = 1;
}
}
void NeoPixelNotifierGW_handle_ctrl_breath(struct NeoPixelNotifierGW_Instance *_instance) {
if(!(_instance->active)) return;
//Region NeoPixelStateChart
uint8_t NeoPixelNotifierGW_NeoPixelStateChart_State_event_consumed = 0;
if (_instance->NeoPixelNotifierGW_NeoPixelStateChart_State == NEOPIXELNOTIFIERGW_NEOPIXELSTATECHART_OFF_STATE) {
if (NeoPixelNotifierGW_NeoPixelStateChart_State_event_consumed == 0 && 1) {
NeoPixelNotifierGW_NeoPixelStateChart_OnExit(NEOPIXELNOTIFIERGW_NEOPIXELSTATECHART_OFF_STATE, _instance);
_instance->NeoPixelNotifierGW_NeoPixelStateChart_State = NEOPIXELNOTIFIERGW_NEOPIXELSTATECHART_BREATH_STATE;
NeoPixelNotifierGW_NeoPixelStateChart_OnEntry(NEOPIXELNOTIFIERGW_NEOPIXELSTATECHART_BREATH_STATE, _instance);
NeoPixelNotifierGW_NeoPixelStateChart_State_event_consumed = 1;
}
}
//End Region NeoPixelStateChart
//End dsregion NeoPixelStateChart
//Session list: 
}
void NeoPixelNotifierGW_handle_ctrl_setRingColor(struct NeoPixelNotifierGW_Instance *_instance, uint8_t red, uint8_t green, uint8_t blue) {
if(!(_instance->active)) return;
//Region NeoPixelStateChart
uint8_t NeoPixelNotifierGW_NeoPixelStateChart_State_event_consumed = 0;
//End Region NeoPixelStateChart
//End dsregion NeoPixelStateChart
//Session list: 
if (1) {
_instance->NeoPixelNotifierGW_NeoPixelStateChart_color_r_var = red / _instance->NeoPixelNotifierGW_ring_brightness_divider_var;
_instance->NeoPixelNotifierGW_NeoPixelStateChart_color_g_var = green / _instance->NeoPixelNotifierGW_ring_brightness_divider_var;
_instance->NeoPixelNotifierGW_NeoPixelStateChart_color_b_var = blue / _instance->NeoPixelNotifierGW_ring_brightness_divider_var;
NeoPixelNotifierGW_NeoPixelStateChart_State_event_consumed = 1;
}
}
void NeoPixelNotifierGW_handle_ctrl_blink(struct NeoPixelNotifierGW_Instance *_instance) {
if(!(_instance->active)) return;
//Region NeoPixelStateChart
uint8_t NeoPixelNotifierGW_NeoPixelStateChart_State_event_consumed = 0;
if (_instance->NeoPixelNotifierGW_NeoPixelStateChart_State == NEOPIXELNOTIFIERGW_NEOPIXELSTATECHART_OFF_STATE) {
if (NeoPixelNotifierGW_NeoPixelStateChart_State_event_consumed == 0 && 1) {
NeoPixelNotifierGW_NeoPixelStateChart_OnExit(NEOPIXELNOTIFIERGW_NEOPIXELSTATECHART_OFF_STATE, _instance);
_instance->NeoPixelNotifierGW_NeoPixelStateChart_State = NEOPIXELNOTIFIERGW_NEOPIXELSTATECHART_BLINKALL_STATE;
NeoPixelNotifierGW_NeoPixelStateChart_OnEntry(NEOPIXELNOTIFIERGW_NEOPIXELSTATECHART_BLINKALL_STATE, _instance);
NeoPixelNotifierGW_NeoPixelStateChart_State_event_consumed = 1;
}
}
//End Region NeoPixelStateChart
//End dsregion NeoPixelStateChart
//Session list: 
}
void NeoPixelNotifierGW_handle_ctrl_pulse(struct NeoPixelNotifierGW_Instance *_instance) {
if(!(_instance->active)) return;
//Region NeoPixelStateChart
uint8_t NeoPixelNotifierGW_NeoPixelStateChart_State_event_consumed = 0;
if (_instance->NeoPixelNotifierGW_NeoPixelStateChart_State == NEOPIXELNOTIFIERGW_NEOPIXELSTATECHART_OFF_STATE) {
if (NeoPixelNotifierGW_NeoPixelStateChart_State_event_consumed == 0 && 1) {
NeoPixelNotifierGW_NeoPixelStateChart_OnExit(NEOPIXELNOTIFIERGW_NEOPIXELSTATECHART_OFF_STATE, _instance);
_instance->NeoPixelNotifierGW_NeoPixelStateChart_State = NEOPIXELNOTIFIERGW_NEOPIXELSTATECHART_PULSE_STATE;
NeoPixelNotifierGW_NeoPixelStateChart_OnEntry(NEOPIXELNOTIFIERGW_NEOPIXELSTATECHART_PULSE_STATE, _instance);
NeoPixelNotifierGW_NeoPixelStateChart_State_event_consumed = 1;
}
}
//End Region NeoPixelStateChart
//End dsregion NeoPixelStateChart
//Session list: 
}
void NeoPixelNotifierGW_handle_ctrl_rotate(struct NeoPixelNotifierGW_Instance *_instance, int8_t speed) {
if(!(_instance->active)) return;
//Region NeoPixelStateChart
uint8_t NeoPixelNotifierGW_NeoPixelStateChart_State_event_consumed = 0;
if (_instance->NeoPixelNotifierGW_NeoPixelStateChart_State == NEOPIXELNOTIFIERGW_NEOPIXELSTATECHART_OFF_STATE) {
if (NeoPixelNotifierGW_NeoPixelStateChart_State_event_consumed == 0 && 1) {
NeoPixelNotifierGW_NeoPixelStateChart_OnExit(NEOPIXELNOTIFIERGW_NEOPIXELSTATECHART_OFF_STATE, _instance);
_instance->NeoPixelNotifierGW_NeoPixelStateChart_State = NEOPIXELNOTIFIERGW_NEOPIXELSTATECHART_ROTATE_STATE;
_instance->NeoPixelNotifierGW_NeoPixelStateChart_rotate_speed_var = speed;
NeoPixelNotifierGW_NeoPixelStateChart_OnEntry(NEOPIXELNOTIFIERGW_NEOPIXELSTATECHART_ROTATE_STATE, _instance);
NeoPixelNotifierGW_NeoPixelStateChart_State_event_consumed = 1;
}
}
//End Region NeoPixelStateChart
//End dsregion NeoPixelStateChart
//Session list: 
}
void NeoPixelNotifierGW_handle_ctrl_solid(struct NeoPixelNotifierGW_Instance *_instance) {
if(!(_instance->active)) return;
//Region NeoPixelStateChart
uint8_t NeoPixelNotifierGW_NeoPixelStateChart_State_event_consumed = 0;
if (_instance->NeoPixelNotifierGW_NeoPixelStateChart_State == NEOPIXELNOTIFIERGW_NEOPIXELSTATECHART_OFF_STATE) {
if (NeoPixelNotifierGW_NeoPixelStateChart_State_event_consumed == 0 && 1) {
NeoPixelNotifierGW_NeoPixelStateChart_OnExit(NEOPIXELNOTIFIERGW_NEOPIXELSTATECHART_OFF_STATE, _instance);
_instance->NeoPixelNotifierGW_NeoPixelStateChart_State = NEOPIXELNOTIFIERGW_NEOPIXELSTATECHART_SOLID_STATE;
NeoPixelNotifierGW_NeoPixelStateChart_OnEntry(NEOPIXELNOTIFIERGW_NEOPIXELSTATECHART_SOLID_STATE, _instance);
NeoPixelNotifierGW_NeoPixelStateChart_State_event_consumed = 1;
}
}
//End Region NeoPixelStateChart
//End dsregion NeoPixelStateChart
//Session list: 
}
void NeoPixelNotifierGW_handle_ctrl_setLogoColor(struct NeoPixelNotifierGW_Instance *_instance, uint8_t red, uint8_t green, uint8_t blue) {
if(!(_instance->active)) return;
//Region NeoPixelStateChart
uint8_t NeoPixelNotifierGW_NeoPixelStateChart_State_event_consumed = 0;
//End Region NeoPixelStateChart
//End dsregion NeoPixelStateChart
//Session list: 
if (1) {
_instance->NeoPixelNotifierGW_NeoPixelStateChart_l_color_r_var = red;
_instance->NeoPixelNotifierGW_NeoPixelStateChart_l_color_g_var = green;
_instance->NeoPixelNotifierGW_NeoPixelStateChart_l_color_b_var = blue;
NeoPixelNotifierGW_NeoPixelStateChart_State_event_consumed = 1;
}
}
void NeoPixelNotifierGW_handle_ctrl_blink_logo(struct NeoPixelNotifierGW_Instance *_instance) {
if(!(_instance->active)) return;
//Region NeoPixelStateChart
uint8_t NeoPixelNotifierGW_NeoPixelStateChart_State_event_consumed = 0;
if (_instance->NeoPixelNotifierGW_NeoPixelStateChart_State == NEOPIXELNOTIFIERGW_NEOPIXELSTATECHART_OFF_STATE) {
if (NeoPixelNotifierGW_NeoPixelStateChart_State_event_consumed == 0 && 1) {
NeoPixelNotifierGW_NeoPixelStateChart_OnExit(NEOPIXELNOTIFIERGW_NEOPIXELSTATECHART_OFF_STATE, _instance);
_instance->NeoPixelNotifierGW_NeoPixelStateChart_State = NEOPIXELNOTIFIERGW_NEOPIXELSTATECHART_BLINKLOGO_STATE;
NeoPixelNotifierGW_NeoPixelStateChart_OnEntry(NEOPIXELNOTIFIERGW_NEOPIXELSTATECHART_BLINKLOGO_STATE, _instance);
NeoPixelNotifierGW_NeoPixelStateChart_State_event_consumed = 1;
}
}
//End Region NeoPixelStateChart
//End dsregion NeoPixelStateChart
//Session list: 
}
void NeoPixelNotifierGW_handle_clock_fps_clock(struct NeoPixelNotifierGW_Instance *_instance) {
if(!(_instance->active)) return;
//Region NeoPixelStateChart
uint8_t NeoPixelNotifierGW_NeoPixelStateChart_State_event_consumed = 0;
if (_instance->NeoPixelNotifierGW_NeoPixelStateChart_State == NEOPIXELNOTIFIERGW_NEOPIXELSTATECHART_SOLID_STATE) {
if (NeoPixelNotifierGW_NeoPixelStateChart_State_event_consumed == 0 && 1) {
;uint32_t rcolor = f_NeoPixelNotifierGW_getColor(_instance, _instance->NeoPixelNotifierGW_NeoPixelStateChart_color_r_var, _instance->NeoPixelNotifierGW_NeoPixelStateChart_color_g_var, _instance->NeoPixelNotifierGW_NeoPixelStateChart_color_b_var);
;uint32_t lcolor = f_NeoPixelNotifierGW_getColor(_instance, _instance->NeoPixelNotifierGW_NeoPixelStateChart_l_color_r_var, _instance->NeoPixelNotifierGW_NeoPixelStateChart_l_color_g_var, _instance->NeoPixelNotifierGW_NeoPixelStateChart_l_color_b_var);
;uint8_t i = _instance->NeoPixelNotifierGW_neopixel_ring_first_var;
while(i <= _instance->NeoPixelNotifierGW_neopixel_ring_last_var) {
f_NeoPixelNotifierGW_setPixelColor(_instance, i, rcolor);
i = i + 1;

}
i = _instance->NeoPixelNotifierGW_neopixel_logo_first_var;
while(i <= _instance->NeoPixelNotifierGW_neopixel_logo_last_var) {
f_NeoPixelNotifierGW_setPixelColor(_instance, i, lcolor);
i = i + 1;

}
f_NeoPixelNotifierGW_updateNeopixels(_instance);
NeoPixelNotifierGW_NeoPixelStateChart_State_event_consumed = 1;
}
}
else if (_instance->NeoPixelNotifierGW_NeoPixelStateChart_State == NEOPIXELNOTIFIERGW_NEOPIXELSTATECHART_ROTATE_STATE) {
if (NeoPixelNotifierGW_NeoPixelStateChart_State_event_consumed == 0 && 1) {
;uint8_t i = _instance->NeoPixelNotifierGW_neopixel_ring_first_var;
while(i <= _instance->NeoPixelNotifierGW_neopixel_ring_last_var) {
;uint16_t pangle = _instance->NeoPixelNotifierGW_NeoPixelStateChart_ROTATE_angle_var + (i * _instance->NeoPixelNotifierGW_NeoPixelStateChart_ROTATE_maxangle_var) / (_instance->NeoPixelNotifierGW_neopixel_ring_last_var - _instance->NeoPixelNotifierGW_neopixel_ring_first_var + 1);
pangle = pangle % _instance->NeoPixelNotifierGW_NeoPixelStateChart_ROTATE_maxangle_var;
;uint8_t bright = f_NeoPixelNotifierGW_rotate_brightness(_instance, pangle, _instance->NeoPixelNotifierGW_NeoPixelStateChart_ROTATE_maxangle_var);
;uint32_t color = f_NeoPixelNotifierGW_getColor(_instance, (_instance->NeoPixelNotifierGW_NeoPixelStateChart_color_r_var * bright) / 256, (_instance->NeoPixelNotifierGW_NeoPixelStateChart_color_g_var * bright) / 256, (_instance->NeoPixelNotifierGW_NeoPixelStateChart_color_b_var * bright) / 256);
f_NeoPixelNotifierGW_setPixelColor(_instance, i, color);
i = i + 1;

}
f_NeoPixelNotifierGW_updateNeopixels(_instance);
_instance->NeoPixelNotifierGW_NeoPixelStateChart_ROTATE_angle_var = _instance->NeoPixelNotifierGW_NeoPixelStateChart_ROTATE_angle_var + _instance->NeoPixelNotifierGW_NeoPixelStateChart_rotate_speed_var;
if(_instance->NeoPixelNotifierGW_NeoPixelStateChart_ROTATE_angle_var < 0) {
_instance->NeoPixelNotifierGW_NeoPixelStateChart_ROTATE_angle_var = _instance->NeoPixelNotifierGW_NeoPixelStateChart_ROTATE_maxangle_var + _instance->NeoPixelNotifierGW_NeoPixelStateChart_ROTATE_angle_var;

}
if(_instance->NeoPixelNotifierGW_NeoPixelStateChart_ROTATE_angle_var > _instance->NeoPixelNotifierGW_NeoPixelStateChart_ROTATE_maxangle_var - 1) {
_instance->NeoPixelNotifierGW_NeoPixelStateChart_ROTATE_angle_var = _instance->NeoPixelNotifierGW_NeoPixelStateChart_ROTATE_angle_var - _instance->NeoPixelNotifierGW_NeoPixelStateChart_ROTATE_maxangle_var;

}
NeoPixelNotifierGW_NeoPixelStateChart_State_event_consumed = 1;
}
}
else if (_instance->NeoPixelNotifierGW_NeoPixelStateChart_State == NEOPIXELNOTIFIERGW_NEOPIXELSTATECHART_BREATH_STATE) {
if (NeoPixelNotifierGW_NeoPixelStateChart_State_event_consumed == 0 && 1) {
;uint8_t bright = f_NeoPixelNotifierGW_breath_brightness(_instance, _instance->NeoPixelNotifierGW_NeoPixelStateChart_BREATH_counter_var, _instance->NeoPixelNotifierGW_NeoPixelStateChart_BREATH_maxcount_var);
;uint32_t color = f_NeoPixelNotifierGW_getColor(_instance, (_instance->NeoPixelNotifierGW_NeoPixelStateChart_l_color_r_var * bright) / 256, (_instance->NeoPixelNotifierGW_NeoPixelStateChart_l_color_g_var * bright) / 256, (_instance->NeoPixelNotifierGW_NeoPixelStateChart_l_color_b_var * bright) / 256);
;uint8_t i = _instance->NeoPixelNotifierGW_neopixel_logo_first_var;
while(i <= _instance->NeoPixelNotifierGW_neopixel_logo_last_var) {
f_NeoPixelNotifierGW_setPixelColor(_instance, i, color);
i = i + 1;

}
f_NeoPixelNotifierGW_updateNeopixels(_instance);
_instance->NeoPixelNotifierGW_NeoPixelStateChart_BREATH_counter_var = _instance->NeoPixelNotifierGW_NeoPixelStateChart_BREATH_counter_var + 1;
if(_instance->NeoPixelNotifierGW_NeoPixelStateChart_BREATH_counter_var == _instance->NeoPixelNotifierGW_NeoPixelStateChart_BREATH_maxcount_var) {
_instance->NeoPixelNotifierGW_NeoPixelStateChart_BREATH_counter_var = 0;

}
NeoPixelNotifierGW_NeoPixelStateChart_State_event_consumed = 1;
}
}
else if (_instance->NeoPixelNotifierGW_NeoPixelStateChart_State == NEOPIXELNOTIFIERGW_NEOPIXELSTATECHART_PULSE_STATE) {
if (NeoPixelNotifierGW_NeoPixelStateChart_State_event_consumed == 0 && 1) {
;uint8_t bright = f_NeoPixelNotifierGW_pulse_brightness(_instance, _instance->NeoPixelNotifierGW_NeoPixelStateChart_PULSE_counter_var);
;uint32_t color = f_NeoPixelNotifierGW_getColor(_instance, (_instance->NeoPixelNotifierGW_NeoPixelStateChart_color_r_var * bright) / 256, (_instance->NeoPixelNotifierGW_NeoPixelStateChart_color_g_var * bright) / 256, (_instance->NeoPixelNotifierGW_NeoPixelStateChart_color_b_var * bright) / 256);
;uint8_t i = _instance->NeoPixelNotifierGW_neopixel_ring_first_var;
while(i <= _instance->NeoPixelNotifierGW_neopixel_ring_last_var) {
f_NeoPixelNotifierGW_setPixelColor(_instance, i, color);
i = i + 1;

}
f_NeoPixelNotifierGW_updateNeopixels(_instance);
_instance->NeoPixelNotifierGW_NeoPixelStateChart_PULSE_counter_var = _instance->NeoPixelNotifierGW_NeoPixelStateChart_PULSE_counter_var + 1;
if(_instance->NeoPixelNotifierGW_NeoPixelStateChart_PULSE_counter_var == _instance->NeoPixelNotifierGW_NeoPixelStateChart_PULSE_maxcount_var) {
_instance->NeoPixelNotifierGW_NeoPixelStateChart_PULSE_counter_var = 0;

}
NeoPixelNotifierGW_NeoPixelStateChart_State_event_consumed = 1;
}
}
else if (_instance->NeoPixelNotifierGW_NeoPixelStateChart_State == NEOPIXELNOTIFIERGW_NEOPIXELSTATECHART_BLINKALL_STATE) {
if (NeoPixelNotifierGW_NeoPixelStateChart_State_event_consumed == 0 && 1) {
;uint8_t bright = f_NeoPixelNotifierGW_blink_brightness(_instance, _instance->NeoPixelNotifierGW_NeoPixelStateChart_BLINKALL_counter_var);
;uint32_t rcolor = f_NeoPixelNotifierGW_getColor(_instance, (_instance->NeoPixelNotifierGW_NeoPixelStateChart_color_r_var * bright) / 256, (_instance->NeoPixelNotifierGW_NeoPixelStateChart_color_g_var * bright) / 256, (_instance->NeoPixelNotifierGW_NeoPixelStateChart_color_b_var * bright) / 256);
;uint8_t i = _instance->NeoPixelNotifierGW_neopixel_ring_first_var;
while(i <= _instance->NeoPixelNotifierGW_neopixel_ring_last_var) {
f_NeoPixelNotifierGW_setPixelColor(_instance, i, rcolor);
i = i + 1;

}
;uint32_t lcolor = f_NeoPixelNotifierGW_getColor(_instance, (_instance->NeoPixelNotifierGW_NeoPixelStateChart_l_color_r_var * bright) / 256, (_instance->NeoPixelNotifierGW_NeoPixelStateChart_l_color_g_var * bright) / 256, (_instance->NeoPixelNotifierGW_NeoPixelStateChart_l_color_b_var * bright) / 256);
i = _instance->NeoPixelNotifierGW_neopixel_logo_first_var;
while(i <= _instance->NeoPixelNotifierGW_neopixel_logo_last_var) {
f_NeoPixelNotifierGW_setPixelColor(_instance, i, lcolor);
i = i + 1;

}
f_NeoPixelNotifierGW_updateNeopixels(_instance);
_instance->NeoPixelNotifierGW_NeoPixelStateChart_BLINKALL_counter_var = _instance->NeoPixelNotifierGW_NeoPixelStateChart_BLINKALL_counter_var + 1;
if(_instance->NeoPixelNotifierGW_NeoPixelStateChart_BLINKALL_counter_var == _instance->NeoPixelNotifierGW_NeoPixelStateChart_BLINKALL_maxcount_var) {
_instance->NeoPixelNotifierGW_NeoPixelStateChart_BLINKALL_counter_var = 0;

}
NeoPixelNotifierGW_NeoPixelStateChart_State_event_consumed = 1;
}
}
else if (_instance->NeoPixelNotifierGW_NeoPixelStateChart_State == NEOPIXELNOTIFIERGW_NEOPIXELSTATECHART_BLINKLOGO_STATE) {
if (NeoPixelNotifierGW_NeoPixelStateChart_State_event_consumed == 0 && 1) {
;uint8_t bright = f_NeoPixelNotifierGW_blink_brightness(_instance, _instance->NeoPixelNotifierGW_NeoPixelStateChart_BLINKLOGO_counter_var);
;uint32_t lcolor = f_NeoPixelNotifierGW_getColor(_instance, (_instance->NeoPixelNotifierGW_NeoPixelStateChart_l_color_r_var * bright) / 256, (_instance->NeoPixelNotifierGW_NeoPixelStateChart_l_color_g_var * bright) / 256, (_instance->NeoPixelNotifierGW_NeoPixelStateChart_l_color_b_var * bright) / 256);
;uint8_t i = _instance->NeoPixelNotifierGW_neopixel_logo_first_var;
while(i <= _instance->NeoPixelNotifierGW_neopixel_logo_last_var) {
f_NeoPixelNotifierGW_setPixelColor(_instance, i, lcolor);
i = i + 1;

}
f_NeoPixelNotifierGW_updateNeopixels(_instance);
_instance->NeoPixelNotifierGW_NeoPixelStateChart_BLINKLOGO_counter_var = _instance->NeoPixelNotifierGW_NeoPixelStateChart_BLINKLOGO_counter_var + 1;
if(_instance->NeoPixelNotifierGW_NeoPixelStateChart_BLINKLOGO_counter_var == _instance->NeoPixelNotifierGW_NeoPixelStateChart_BLINKLOGO_maxcount_var) {
_instance->NeoPixelNotifierGW_NeoPixelStateChart_BLINKLOGO_counter_var = 0;

}
NeoPixelNotifierGW_NeoPixelStateChart_State_event_consumed = 1;
}
}
//End Region NeoPixelStateChart
//End dsregion NeoPixelStateChart
//Session list: 
}

// Observers for outgoing messages:



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
if(timer2_interrupt_counter >= 33) {
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

}
// Forwarding of messages timer2::NeoPixelNotifierGWTest::clock::timer_start
void forward_timer2_NeoPixelNotifierGWTest_send_clock_timer_start(struct NeoPixelNotifierGWTest_Instance *_instance, uint8_t id, uint32_t time){
timer2_timer_start(id, time);}

// Forwarding of messages timer2::NeoPixelNotifierGWTest::clock::timer_cancel
void forward_timer2_NeoPixelNotifierGWTest_send_clock_timer_cancel(struct NeoPixelNotifierGWTest_Instance *_instance, uint8_t id){
timer2_timer_cancel(id);}

/*****************************************************************************
 * Implementation for type : NeoPixelNotifierGWTest
 *****************************************************************************/

// Declaration of prototypes:
//Prototypes: State Machine
void NeoPixelNotifierGWTest_Test_OnExit(int state, struct NeoPixelNotifierGWTest_Instance *_instance);
//Prototypes: Message Sending
void NeoPixelNotifierGWTest_send_clock_timer_start(struct NeoPixelNotifierGWTest_Instance *_instance, uint8_t id, uint32_t time);
void NeoPixelNotifierGWTest_send_clock_timer_cancel(struct NeoPixelNotifierGWTest_Instance *_instance, uint8_t id);
void NeoPixelNotifierGWTest_send_neopixels_setColor(struct NeoPixelNotifierGWTest_Instance *_instance, uint8_t red, uint8_t green, uint8_t blue);
void NeoPixelNotifierGWTest_send_neopixels_setLogoColor(struct NeoPixelNotifierGWTest_Instance *_instance, uint8_t red, uint8_t green, uint8_t blue);
void NeoPixelNotifierGWTest_send_neopixels_setRingColor(struct NeoPixelNotifierGWTest_Instance *_instance, uint8_t red, uint8_t green, uint8_t blue);
void NeoPixelNotifierGWTest_send_neopixels_off(struct NeoPixelNotifierGWTest_Instance *_instance);
void NeoPixelNotifierGWTest_send_neopixels_pulse(struct NeoPixelNotifierGWTest_Instance *_instance);
void NeoPixelNotifierGWTest_send_neopixels_rotate(struct NeoPixelNotifierGWTest_Instance *_instance, int8_t speed);
void NeoPixelNotifierGWTest_send_neopixels_breath(struct NeoPixelNotifierGWTest_Instance *_instance);
void NeoPixelNotifierGWTest_send_neopixels_solid(struct NeoPixelNotifierGWTest_Instance *_instance);
void NeoPixelNotifierGWTest_send_neopixels_blink(struct NeoPixelNotifierGWTest_Instance *_instance);
void NeoPixelNotifierGWTest_send_neopixels_blink_logo(struct NeoPixelNotifierGWTest_Instance *_instance);
//Prototypes: Function
void f_NeoPixelNotifierGWTest_neo_standby(struct NeoPixelNotifierGWTest_Instance *_instance);
void f_NeoPixelNotifierGWTest_neo_requested(struct NeoPixelNotifierGWTest_Instance *_instance);
void f_NeoPixelNotifierGWTest_neo_measuring1(struct NeoPixelNotifierGWTest_Instance *_instance);
void f_NeoPixelNotifierGWTest_neo_measuring2(struct NeoPixelNotifierGWTest_Instance *_instance);
void f_NeoPixelNotifierGWTest_neo_bluetooth(struct NeoPixelNotifierGWTest_Instance *_instance);
void f_NeoPixelNotifierGWTest_neo_gateway_ack(struct NeoPixelNotifierGWTest_Instance *_instance);
void f_NeoPixelNotifierGWTest_neo_gateway_error(struct NeoPixelNotifierGWTest_Instance *_instance);
void f_NeoPixelNotifierGWTest_neo_tellucloud_ack(struct NeoPixelNotifierGWTest_Instance *_instance);
void f_NeoPixelNotifierGWTest_neo_tellucloud_error(struct NeoPixelNotifierGWTest_Instance *_instance);
void f_NeoPixelNotifierGWTest_neo_solid(struct NeoPixelNotifierGWTest_Instance *_instance, uint8_t r, uint8_t g, uint8_t b);
// Declaration of functions:
// Definition of function neo_standby
void f_NeoPixelNotifierGWTest_neo_standby(struct NeoPixelNotifierGWTest_Instance *_instance) {
NeoPixelNotifierGWTest_send_neopixels_off(_instance);
NeoPixelNotifierGWTest_send_neopixels_setColor(_instance, 0, 50, 255);
NeoPixelNotifierGWTest_send_neopixels_breath(_instance);
}
// Definition of function neo_requested
void f_NeoPixelNotifierGWTest_neo_requested(struct NeoPixelNotifierGWTest_Instance *_instance) {
NeoPixelNotifierGWTest_send_neopixels_off(_instance);
NeoPixelNotifierGWTest_send_neopixels_setColor(_instance, 0, 255, 96);
NeoPixelNotifierGWTest_send_neopixels_pulse(_instance);
}
// Definition of function neo_measuring1
void f_NeoPixelNotifierGWTest_neo_measuring1(struct NeoPixelNotifierGWTest_Instance *_instance) {
NeoPixelNotifierGWTest_send_neopixels_off(_instance);
NeoPixelNotifierGWTest_send_neopixels_setColor(_instance, 255, 32, 0);
NeoPixelNotifierGWTest_send_neopixels_rotate(_instance, 12);
}
// Definition of function neo_measuring2
void f_NeoPixelNotifierGWTest_neo_measuring2(struct NeoPixelNotifierGWTest_Instance *_instance) {
NeoPixelNotifierGWTest_send_neopixels_off(_instance);
NeoPixelNotifierGWTest_send_neopixels_setColor(_instance, 160, 140, 0);
NeoPixelNotifierGWTest_send_neopixels_rotate(_instance,  -2);
}
// Definition of function neo_bluetooth
void f_NeoPixelNotifierGWTest_neo_bluetooth(struct NeoPixelNotifierGWTest_Instance *_instance) {
NeoPixelNotifierGWTest_send_neopixels_off(_instance);
NeoPixelNotifierGWTest_send_neopixels_setColor(_instance, 0, 40, 255);
NeoPixelNotifierGWTest_send_neopixels_blink(_instance);
}
// Definition of function neo_gateway_ack
void f_NeoPixelNotifierGWTest_neo_gateway_ack(struct NeoPixelNotifierGWTest_Instance *_instance) {
NeoPixelNotifierGWTest_send_neopixels_off(_instance);
NeoPixelNotifierGWTest_send_neopixels_setRingColor(_instance, 0, 255, 40);
NeoPixelNotifierGWTest_send_neopixels_blink_logo(_instance);
}
// Definition of function neo_gateway_error
void f_NeoPixelNotifierGWTest_neo_gateway_error(struct NeoPixelNotifierGWTest_Instance *_instance) {
NeoPixelNotifierGWTest_send_neopixels_off(_instance);
NeoPixelNotifierGWTest_send_neopixels_setColor(_instance, 255, 40, 0);
NeoPixelNotifierGWTest_send_neopixels_solid(_instance);
}
// Definition of function neo_tellucloud_ack
void f_NeoPixelNotifierGWTest_neo_tellucloud_ack(struct NeoPixelNotifierGWTest_Instance *_instance) {
NeoPixelNotifierGWTest_send_neopixels_off(_instance);
NeoPixelNotifierGWTest_send_neopixels_setLogoColor(_instance, 0, 255, 40);
NeoPixelNotifierGWTest_send_neopixels_solid(_instance);
}
// Definition of function neo_tellucloud_error
void f_NeoPixelNotifierGWTest_neo_tellucloud_error(struct NeoPixelNotifierGWTest_Instance *_instance) {
NeoPixelNotifierGWTest_send_neopixels_off(_instance);
NeoPixelNotifierGWTest_send_neopixels_setLogoColor(_instance, 255, 40, 0);
NeoPixelNotifierGWTest_send_neopixels_solid(_instance);
}
// Definition of function neo_solid
void f_NeoPixelNotifierGWTest_neo_solid(struct NeoPixelNotifierGWTest_Instance *_instance, uint8_t r, uint8_t g, uint8_t b) {
NeoPixelNotifierGWTest_send_neopixels_off(_instance);
NeoPixelNotifierGWTest_send_neopixels_setColor(_instance, r, g, b);
NeoPixelNotifierGWTest_send_neopixels_solid(_instance);
}

// Sessions functionss:


// On Entry Actions:
void NeoPixelNotifierGWTest_Test_OnEntry(int state, struct NeoPixelNotifierGWTest_Instance *_instance) {
switch(state) {
case NEOPIXELNOTIFIERGWTEST_TEST_STATE:{
_instance->NeoPixelNotifierGWTest_Test_State = NEOPIXELNOTIFIERGWTEST_TEST_MEASURE_STATE;
NeoPixelNotifierGWTest_Test_OnEntry(_instance->NeoPixelNotifierGWTest_Test_State, _instance);
break;
}
case NEOPIXELNOTIFIERGWTEST_TEST_TEST_STATE:{
f_NeoPixelNotifierGWTest_neo_bluetooth(_instance);
break;
}
case NEOPIXELNOTIFIERGWTEST_TEST_GREEN_STATE:{
f_NeoPixelNotifierGWTest_neo_solid(_instance, 0, 255, 32);
NeoPixelNotifierGWTest_send_clock_timer_start(_instance, 0, 1000);
break;
}
case NEOPIXELNOTIFIERGWTEST_TEST_OFF_STATE:{
NeoPixelNotifierGWTest_send_neopixels_off(_instance);
NeoPixelNotifierGWTest_send_clock_timer_start(_instance, 0, 500);
break;
}
case NEOPIXELNOTIFIERGWTEST_TEST_BREATH_STATE:{
f_NeoPixelNotifierGWTest_neo_standby(_instance);
NeoPixelNotifierGWTest_send_clock_timer_start(_instance, 0, 5000);
break;
}
case NEOPIXELNOTIFIERGWTEST_TEST_PULSE_STATE:{
f_NeoPixelNotifierGWTest_neo_requested(_instance);
NeoPixelNotifierGWTest_send_clock_timer_start(_instance, 0, 5000);
break;
}
case NEOPIXELNOTIFIERGWTEST_TEST_PUMP_STATE:{
f_NeoPixelNotifierGWTest_neo_measuring1(_instance);
NeoPixelNotifierGWTest_send_clock_timer_start(_instance, 0, 2000);
break;
}
case NEOPIXELNOTIFIERGWTEST_TEST_MEASURE_STATE:{
f_NeoPixelNotifierGWTest_neo_measuring2(_instance);
NeoPixelNotifierGWTest_send_clock_timer_start(_instance, 0, 2000);
break;
}
case NEOPIXELNOTIFIERGWTEST_TEST_BLINK_STATE:{
f_NeoPixelNotifierGWTest_neo_bluetooth(_instance);
NeoPixelNotifierGWTest_send_clock_timer_start(_instance, 0, 3000);
break;
}
case NEOPIXELNOTIFIERGWTEST_TEST_GWOK_STATE:{
f_NeoPixelNotifierGWTest_neo_gateway_ack(_instance);
NeoPixelNotifierGWTest_send_clock_timer_start(_instance, 0, 2000);
break;
}
case NEOPIXELNOTIFIERGWTEST_TEST_TELLUERR_STATE:{
f_NeoPixelNotifierGWTest_neo_tellucloud_error(_instance);
NeoPixelNotifierGWTest_send_clock_timer_start(_instance, 0, 2000);
break;
}
default: break;
}
}

// On Exit Actions:
void NeoPixelNotifierGWTest_Test_OnExit(int state, struct NeoPixelNotifierGWTest_Instance *_instance) {
switch(state) {
case NEOPIXELNOTIFIERGWTEST_TEST_STATE:{
NeoPixelNotifierGWTest_Test_OnExit(_instance->NeoPixelNotifierGWTest_Test_State, _instance);
break;}
case NEOPIXELNOTIFIERGWTEST_TEST_TEST_STATE:{
break;}
case NEOPIXELNOTIFIERGWTEST_TEST_GREEN_STATE:{
break;}
case NEOPIXELNOTIFIERGWTEST_TEST_OFF_STATE:{
break;}
case NEOPIXELNOTIFIERGWTEST_TEST_BREATH_STATE:{
break;}
case NEOPIXELNOTIFIERGWTEST_TEST_PULSE_STATE:{
break;}
case NEOPIXELNOTIFIERGWTEST_TEST_PUMP_STATE:{
break;}
case NEOPIXELNOTIFIERGWTEST_TEST_MEASURE_STATE:{
break;}
case NEOPIXELNOTIFIERGWTEST_TEST_BLINK_STATE:{
break;}
case NEOPIXELNOTIFIERGWTEST_TEST_GWOK_STATE:{
break;}
case NEOPIXELNOTIFIERGWTEST_TEST_TELLUERR_STATE:{
break;}
default: break;
}
}

// Event Handlers for incoming messages:
void NeoPixelNotifierGWTest_handle_clock_timer_timeout(struct NeoPixelNotifierGWTest_Instance *_instance, uint8_t id) {
if(!(_instance->active)) return;
//Region Test
uint8_t NeoPixelNotifierGWTest_Test_State_event_consumed = 0;
if (_instance->NeoPixelNotifierGWTest_Test_State == NEOPIXELNOTIFIERGWTEST_TEST_GREEN_STATE) {
if (NeoPixelNotifierGWTest_Test_State_event_consumed == 0 && 1) {
NeoPixelNotifierGWTest_Test_OnExit(NEOPIXELNOTIFIERGWTEST_TEST_GREEN_STATE, _instance);
_instance->NeoPixelNotifierGWTest_Test_State = NEOPIXELNOTIFIERGWTEST_TEST_OFF_STATE;
NeoPixelNotifierGWTest_Test_OnEntry(NEOPIXELNOTIFIERGWTEST_TEST_OFF_STATE, _instance);
NeoPixelNotifierGWTest_Test_State_event_consumed = 1;
}
}
else if (_instance->NeoPixelNotifierGWTest_Test_State == NEOPIXELNOTIFIERGWTEST_TEST_OFF_STATE) {
if (NeoPixelNotifierGWTest_Test_State_event_consumed == 0 && 1) {
NeoPixelNotifierGWTest_Test_OnExit(NEOPIXELNOTIFIERGWTEST_TEST_OFF_STATE, _instance);
_instance->NeoPixelNotifierGWTest_Test_State = NEOPIXELNOTIFIERGWTEST_TEST_BREATH_STATE;
NeoPixelNotifierGWTest_Test_OnEntry(NEOPIXELNOTIFIERGWTEST_TEST_BREATH_STATE, _instance);
NeoPixelNotifierGWTest_Test_State_event_consumed = 1;
}
}
else if (_instance->NeoPixelNotifierGWTest_Test_State == NEOPIXELNOTIFIERGWTEST_TEST_BREATH_STATE) {
if (NeoPixelNotifierGWTest_Test_State_event_consumed == 0 && 1) {
NeoPixelNotifierGWTest_Test_OnExit(NEOPIXELNOTIFIERGWTEST_TEST_BREATH_STATE, _instance);
_instance->NeoPixelNotifierGWTest_Test_State = NEOPIXELNOTIFIERGWTEST_TEST_PULSE_STATE;
NeoPixelNotifierGWTest_Test_OnEntry(NEOPIXELNOTIFIERGWTEST_TEST_PULSE_STATE, _instance);
NeoPixelNotifierGWTest_Test_State_event_consumed = 1;
}
}
else if (_instance->NeoPixelNotifierGWTest_Test_State == NEOPIXELNOTIFIERGWTEST_TEST_PULSE_STATE) {
if (NeoPixelNotifierGWTest_Test_State_event_consumed == 0 && 1) {
NeoPixelNotifierGWTest_Test_OnExit(NEOPIXELNOTIFIERGWTEST_TEST_PULSE_STATE, _instance);
_instance->NeoPixelNotifierGWTest_Test_State = NEOPIXELNOTIFIERGWTEST_TEST_PUMP_STATE;
NeoPixelNotifierGWTest_Test_OnEntry(NEOPIXELNOTIFIERGWTEST_TEST_PUMP_STATE, _instance);
NeoPixelNotifierGWTest_Test_State_event_consumed = 1;
}
}
else if (_instance->NeoPixelNotifierGWTest_Test_State == NEOPIXELNOTIFIERGWTEST_TEST_PUMP_STATE) {
if (NeoPixelNotifierGWTest_Test_State_event_consumed == 0 && 1) {
NeoPixelNotifierGWTest_Test_OnExit(NEOPIXELNOTIFIERGWTEST_TEST_PUMP_STATE, _instance);
_instance->NeoPixelNotifierGWTest_Test_State = NEOPIXELNOTIFIERGWTEST_TEST_MEASURE_STATE;
NeoPixelNotifierGWTest_Test_OnEntry(NEOPIXELNOTIFIERGWTEST_TEST_MEASURE_STATE, _instance);
NeoPixelNotifierGWTest_Test_State_event_consumed = 1;
}
}
else if (_instance->NeoPixelNotifierGWTest_Test_State == NEOPIXELNOTIFIERGWTEST_TEST_MEASURE_STATE) {
if (NeoPixelNotifierGWTest_Test_State_event_consumed == 0 && 1) {
NeoPixelNotifierGWTest_Test_OnExit(NEOPIXELNOTIFIERGWTEST_TEST_MEASURE_STATE, _instance);
_instance->NeoPixelNotifierGWTest_Test_State = NEOPIXELNOTIFIERGWTEST_TEST_BLINK_STATE;
NeoPixelNotifierGWTest_Test_OnEntry(NEOPIXELNOTIFIERGWTEST_TEST_BLINK_STATE, _instance);
NeoPixelNotifierGWTest_Test_State_event_consumed = 1;
}
}
else if (_instance->NeoPixelNotifierGWTest_Test_State == NEOPIXELNOTIFIERGWTEST_TEST_BLINK_STATE) {
if (NeoPixelNotifierGWTest_Test_State_event_consumed == 0 && 1) {
NeoPixelNotifierGWTest_Test_OnExit(NEOPIXELNOTIFIERGWTEST_TEST_BLINK_STATE, _instance);
_instance->NeoPixelNotifierGWTest_Test_State = NEOPIXELNOTIFIERGWTEST_TEST_GWOK_STATE;
NeoPixelNotifierGWTest_Test_OnEntry(NEOPIXELNOTIFIERGWTEST_TEST_GWOK_STATE, _instance);
NeoPixelNotifierGWTest_Test_State_event_consumed = 1;
}
}
else if (_instance->NeoPixelNotifierGWTest_Test_State == NEOPIXELNOTIFIERGWTEST_TEST_GWOK_STATE) {
if (NeoPixelNotifierGWTest_Test_State_event_consumed == 0 && 1) {
NeoPixelNotifierGWTest_Test_OnExit(NEOPIXELNOTIFIERGWTEST_TEST_GWOK_STATE, _instance);
_instance->NeoPixelNotifierGWTest_Test_State = NEOPIXELNOTIFIERGWTEST_TEST_TELLUERR_STATE;
NeoPixelNotifierGWTest_Test_OnEntry(NEOPIXELNOTIFIERGWTEST_TEST_TELLUERR_STATE, _instance);
NeoPixelNotifierGWTest_Test_State_event_consumed = 1;
}
}
else if (_instance->NeoPixelNotifierGWTest_Test_State == NEOPIXELNOTIFIERGWTEST_TEST_TELLUERR_STATE) {
if (NeoPixelNotifierGWTest_Test_State_event_consumed == 0 && 1) {
NeoPixelNotifierGWTest_Test_OnExit(NEOPIXELNOTIFIERGWTEST_TEST_TELLUERR_STATE, _instance);
_instance->NeoPixelNotifierGWTest_Test_State = NEOPIXELNOTIFIERGWTEST_TEST_GREEN_STATE;
NeoPixelNotifierGWTest_Test_OnEntry(NEOPIXELNOTIFIERGWTEST_TEST_GREEN_STATE, _instance);
NeoPixelNotifierGWTest_Test_State_event_consumed = 1;
}
}
//End Region Test
//End dsregion Test
//Session list: 
}

// Observers for outgoing messages:
void (*external_NeoPixelNotifierGWTest_send_clock_timer_start_listener)(struct NeoPixelNotifierGWTest_Instance *, uint8_t, uint32_t)= 0x0;
void (*NeoPixelNotifierGWTest_send_clock_timer_start_listener)(struct NeoPixelNotifierGWTest_Instance *, uint8_t, uint32_t)= 0x0;
void register_external_NeoPixelNotifierGWTest_send_clock_timer_start_listener(void (*_listener)(struct NeoPixelNotifierGWTest_Instance *, uint8_t, uint32_t)){
external_NeoPixelNotifierGWTest_send_clock_timer_start_listener = _listener;
}
void register_NeoPixelNotifierGWTest_send_clock_timer_start_listener(void (*_listener)(struct NeoPixelNotifierGWTest_Instance *, uint8_t, uint32_t)){
NeoPixelNotifierGWTest_send_clock_timer_start_listener = _listener;
}
void NeoPixelNotifierGWTest_send_clock_timer_start(struct NeoPixelNotifierGWTest_Instance *_instance, uint8_t id, uint32_t time){
if (NeoPixelNotifierGWTest_send_clock_timer_start_listener != 0x0) NeoPixelNotifierGWTest_send_clock_timer_start_listener(_instance, id, time);
if (external_NeoPixelNotifierGWTest_send_clock_timer_start_listener != 0x0) external_NeoPixelNotifierGWTest_send_clock_timer_start_listener(_instance, id, time);
;
}
void (*external_NeoPixelNotifierGWTest_send_clock_timer_cancel_listener)(struct NeoPixelNotifierGWTest_Instance *, uint8_t)= 0x0;
void (*NeoPixelNotifierGWTest_send_clock_timer_cancel_listener)(struct NeoPixelNotifierGWTest_Instance *, uint8_t)= 0x0;
void register_external_NeoPixelNotifierGWTest_send_clock_timer_cancel_listener(void (*_listener)(struct NeoPixelNotifierGWTest_Instance *, uint8_t)){
external_NeoPixelNotifierGWTest_send_clock_timer_cancel_listener = _listener;
}
void register_NeoPixelNotifierGWTest_send_clock_timer_cancel_listener(void (*_listener)(struct NeoPixelNotifierGWTest_Instance *, uint8_t)){
NeoPixelNotifierGWTest_send_clock_timer_cancel_listener = _listener;
}
void NeoPixelNotifierGWTest_send_clock_timer_cancel(struct NeoPixelNotifierGWTest_Instance *_instance, uint8_t id){
if (NeoPixelNotifierGWTest_send_clock_timer_cancel_listener != 0x0) NeoPixelNotifierGWTest_send_clock_timer_cancel_listener(_instance, id);
if (external_NeoPixelNotifierGWTest_send_clock_timer_cancel_listener != 0x0) external_NeoPixelNotifierGWTest_send_clock_timer_cancel_listener(_instance, id);
;
}
void (*external_NeoPixelNotifierGWTest_send_neopixels_setColor_listener)(struct NeoPixelNotifierGWTest_Instance *, uint8_t, uint8_t, uint8_t)= 0x0;
void (*NeoPixelNotifierGWTest_send_neopixels_setColor_listener)(struct NeoPixelNotifierGWTest_Instance *, uint8_t, uint8_t, uint8_t)= 0x0;
void register_external_NeoPixelNotifierGWTest_send_neopixels_setColor_listener(void (*_listener)(struct NeoPixelNotifierGWTest_Instance *, uint8_t, uint8_t, uint8_t)){
external_NeoPixelNotifierGWTest_send_neopixels_setColor_listener = _listener;
}
void register_NeoPixelNotifierGWTest_send_neopixels_setColor_listener(void (*_listener)(struct NeoPixelNotifierGWTest_Instance *, uint8_t, uint8_t, uint8_t)){
NeoPixelNotifierGWTest_send_neopixels_setColor_listener = _listener;
}
void NeoPixelNotifierGWTest_send_neopixels_setColor(struct NeoPixelNotifierGWTest_Instance *_instance, uint8_t red, uint8_t green, uint8_t blue){
if (NeoPixelNotifierGWTest_send_neopixels_setColor_listener != 0x0) NeoPixelNotifierGWTest_send_neopixels_setColor_listener(_instance, red, green, blue);
if (external_NeoPixelNotifierGWTest_send_neopixels_setColor_listener != 0x0) external_NeoPixelNotifierGWTest_send_neopixels_setColor_listener(_instance, red, green, blue);
;
}
void (*external_NeoPixelNotifierGWTest_send_neopixels_setLogoColor_listener)(struct NeoPixelNotifierGWTest_Instance *, uint8_t, uint8_t, uint8_t)= 0x0;
void (*NeoPixelNotifierGWTest_send_neopixels_setLogoColor_listener)(struct NeoPixelNotifierGWTest_Instance *, uint8_t, uint8_t, uint8_t)= 0x0;
void register_external_NeoPixelNotifierGWTest_send_neopixels_setLogoColor_listener(void (*_listener)(struct NeoPixelNotifierGWTest_Instance *, uint8_t, uint8_t, uint8_t)){
external_NeoPixelNotifierGWTest_send_neopixels_setLogoColor_listener = _listener;
}
void register_NeoPixelNotifierGWTest_send_neopixels_setLogoColor_listener(void (*_listener)(struct NeoPixelNotifierGWTest_Instance *, uint8_t, uint8_t, uint8_t)){
NeoPixelNotifierGWTest_send_neopixels_setLogoColor_listener = _listener;
}
void NeoPixelNotifierGWTest_send_neopixels_setLogoColor(struct NeoPixelNotifierGWTest_Instance *_instance, uint8_t red, uint8_t green, uint8_t blue){
if (NeoPixelNotifierGWTest_send_neopixels_setLogoColor_listener != 0x0) NeoPixelNotifierGWTest_send_neopixels_setLogoColor_listener(_instance, red, green, blue);
if (external_NeoPixelNotifierGWTest_send_neopixels_setLogoColor_listener != 0x0) external_NeoPixelNotifierGWTest_send_neopixels_setLogoColor_listener(_instance, red, green, blue);
;
}
void (*external_NeoPixelNotifierGWTest_send_neopixels_setRingColor_listener)(struct NeoPixelNotifierGWTest_Instance *, uint8_t, uint8_t, uint8_t)= 0x0;
void (*NeoPixelNotifierGWTest_send_neopixels_setRingColor_listener)(struct NeoPixelNotifierGWTest_Instance *, uint8_t, uint8_t, uint8_t)= 0x0;
void register_external_NeoPixelNotifierGWTest_send_neopixels_setRingColor_listener(void (*_listener)(struct NeoPixelNotifierGWTest_Instance *, uint8_t, uint8_t, uint8_t)){
external_NeoPixelNotifierGWTest_send_neopixels_setRingColor_listener = _listener;
}
void register_NeoPixelNotifierGWTest_send_neopixels_setRingColor_listener(void (*_listener)(struct NeoPixelNotifierGWTest_Instance *, uint8_t, uint8_t, uint8_t)){
NeoPixelNotifierGWTest_send_neopixels_setRingColor_listener = _listener;
}
void NeoPixelNotifierGWTest_send_neopixels_setRingColor(struct NeoPixelNotifierGWTest_Instance *_instance, uint8_t red, uint8_t green, uint8_t blue){
if (NeoPixelNotifierGWTest_send_neopixels_setRingColor_listener != 0x0) NeoPixelNotifierGWTest_send_neopixels_setRingColor_listener(_instance, red, green, blue);
if (external_NeoPixelNotifierGWTest_send_neopixels_setRingColor_listener != 0x0) external_NeoPixelNotifierGWTest_send_neopixels_setRingColor_listener(_instance, red, green, blue);
;
}
void (*external_NeoPixelNotifierGWTest_send_neopixels_off_listener)(struct NeoPixelNotifierGWTest_Instance *)= 0x0;
void (*NeoPixelNotifierGWTest_send_neopixels_off_listener)(struct NeoPixelNotifierGWTest_Instance *)= 0x0;
void register_external_NeoPixelNotifierGWTest_send_neopixels_off_listener(void (*_listener)(struct NeoPixelNotifierGWTest_Instance *)){
external_NeoPixelNotifierGWTest_send_neopixels_off_listener = _listener;
}
void register_NeoPixelNotifierGWTest_send_neopixels_off_listener(void (*_listener)(struct NeoPixelNotifierGWTest_Instance *)){
NeoPixelNotifierGWTest_send_neopixels_off_listener = _listener;
}
void NeoPixelNotifierGWTest_send_neopixels_off(struct NeoPixelNotifierGWTest_Instance *_instance){
if (NeoPixelNotifierGWTest_send_neopixels_off_listener != 0x0) NeoPixelNotifierGWTest_send_neopixels_off_listener(_instance);
if (external_NeoPixelNotifierGWTest_send_neopixels_off_listener != 0x0) external_NeoPixelNotifierGWTest_send_neopixels_off_listener(_instance);
;
}
void (*external_NeoPixelNotifierGWTest_send_neopixels_pulse_listener)(struct NeoPixelNotifierGWTest_Instance *)= 0x0;
void (*NeoPixelNotifierGWTest_send_neopixels_pulse_listener)(struct NeoPixelNotifierGWTest_Instance *)= 0x0;
void register_external_NeoPixelNotifierGWTest_send_neopixels_pulse_listener(void (*_listener)(struct NeoPixelNotifierGWTest_Instance *)){
external_NeoPixelNotifierGWTest_send_neopixels_pulse_listener = _listener;
}
void register_NeoPixelNotifierGWTest_send_neopixels_pulse_listener(void (*_listener)(struct NeoPixelNotifierGWTest_Instance *)){
NeoPixelNotifierGWTest_send_neopixels_pulse_listener = _listener;
}
void NeoPixelNotifierGWTest_send_neopixels_pulse(struct NeoPixelNotifierGWTest_Instance *_instance){
if (NeoPixelNotifierGWTest_send_neopixels_pulse_listener != 0x0) NeoPixelNotifierGWTest_send_neopixels_pulse_listener(_instance);
if (external_NeoPixelNotifierGWTest_send_neopixels_pulse_listener != 0x0) external_NeoPixelNotifierGWTest_send_neopixels_pulse_listener(_instance);
;
}
void (*external_NeoPixelNotifierGWTest_send_neopixels_rotate_listener)(struct NeoPixelNotifierGWTest_Instance *, int8_t)= 0x0;
void (*NeoPixelNotifierGWTest_send_neopixels_rotate_listener)(struct NeoPixelNotifierGWTest_Instance *, int8_t)= 0x0;
void register_external_NeoPixelNotifierGWTest_send_neopixels_rotate_listener(void (*_listener)(struct NeoPixelNotifierGWTest_Instance *, int8_t)){
external_NeoPixelNotifierGWTest_send_neopixels_rotate_listener = _listener;
}
void register_NeoPixelNotifierGWTest_send_neopixels_rotate_listener(void (*_listener)(struct NeoPixelNotifierGWTest_Instance *, int8_t)){
NeoPixelNotifierGWTest_send_neopixels_rotate_listener = _listener;
}
void NeoPixelNotifierGWTest_send_neopixels_rotate(struct NeoPixelNotifierGWTest_Instance *_instance, int8_t speed){
if (NeoPixelNotifierGWTest_send_neopixels_rotate_listener != 0x0) NeoPixelNotifierGWTest_send_neopixels_rotate_listener(_instance, speed);
if (external_NeoPixelNotifierGWTest_send_neopixels_rotate_listener != 0x0) external_NeoPixelNotifierGWTest_send_neopixels_rotate_listener(_instance, speed);
;
}
void (*external_NeoPixelNotifierGWTest_send_neopixels_breath_listener)(struct NeoPixelNotifierGWTest_Instance *)= 0x0;
void (*NeoPixelNotifierGWTest_send_neopixels_breath_listener)(struct NeoPixelNotifierGWTest_Instance *)= 0x0;
void register_external_NeoPixelNotifierGWTest_send_neopixels_breath_listener(void (*_listener)(struct NeoPixelNotifierGWTest_Instance *)){
external_NeoPixelNotifierGWTest_send_neopixels_breath_listener = _listener;
}
void register_NeoPixelNotifierGWTest_send_neopixels_breath_listener(void (*_listener)(struct NeoPixelNotifierGWTest_Instance *)){
NeoPixelNotifierGWTest_send_neopixels_breath_listener = _listener;
}
void NeoPixelNotifierGWTest_send_neopixels_breath(struct NeoPixelNotifierGWTest_Instance *_instance){
if (NeoPixelNotifierGWTest_send_neopixels_breath_listener != 0x0) NeoPixelNotifierGWTest_send_neopixels_breath_listener(_instance);
if (external_NeoPixelNotifierGWTest_send_neopixels_breath_listener != 0x0) external_NeoPixelNotifierGWTest_send_neopixels_breath_listener(_instance);
;
}
void (*external_NeoPixelNotifierGWTest_send_neopixels_solid_listener)(struct NeoPixelNotifierGWTest_Instance *)= 0x0;
void (*NeoPixelNotifierGWTest_send_neopixels_solid_listener)(struct NeoPixelNotifierGWTest_Instance *)= 0x0;
void register_external_NeoPixelNotifierGWTest_send_neopixels_solid_listener(void (*_listener)(struct NeoPixelNotifierGWTest_Instance *)){
external_NeoPixelNotifierGWTest_send_neopixels_solid_listener = _listener;
}
void register_NeoPixelNotifierGWTest_send_neopixels_solid_listener(void (*_listener)(struct NeoPixelNotifierGWTest_Instance *)){
NeoPixelNotifierGWTest_send_neopixels_solid_listener = _listener;
}
void NeoPixelNotifierGWTest_send_neopixels_solid(struct NeoPixelNotifierGWTest_Instance *_instance){
if (NeoPixelNotifierGWTest_send_neopixels_solid_listener != 0x0) NeoPixelNotifierGWTest_send_neopixels_solid_listener(_instance);
if (external_NeoPixelNotifierGWTest_send_neopixels_solid_listener != 0x0) external_NeoPixelNotifierGWTest_send_neopixels_solid_listener(_instance);
;
}
void (*external_NeoPixelNotifierGWTest_send_neopixels_blink_listener)(struct NeoPixelNotifierGWTest_Instance *)= 0x0;
void (*NeoPixelNotifierGWTest_send_neopixels_blink_listener)(struct NeoPixelNotifierGWTest_Instance *)= 0x0;
void register_external_NeoPixelNotifierGWTest_send_neopixels_blink_listener(void (*_listener)(struct NeoPixelNotifierGWTest_Instance *)){
external_NeoPixelNotifierGWTest_send_neopixels_blink_listener = _listener;
}
void register_NeoPixelNotifierGWTest_send_neopixels_blink_listener(void (*_listener)(struct NeoPixelNotifierGWTest_Instance *)){
NeoPixelNotifierGWTest_send_neopixels_blink_listener = _listener;
}
void NeoPixelNotifierGWTest_send_neopixels_blink(struct NeoPixelNotifierGWTest_Instance *_instance){
if (NeoPixelNotifierGWTest_send_neopixels_blink_listener != 0x0) NeoPixelNotifierGWTest_send_neopixels_blink_listener(_instance);
if (external_NeoPixelNotifierGWTest_send_neopixels_blink_listener != 0x0) external_NeoPixelNotifierGWTest_send_neopixels_blink_listener(_instance);
;
}
void (*external_NeoPixelNotifierGWTest_send_neopixels_blink_logo_listener)(struct NeoPixelNotifierGWTest_Instance *)= 0x0;
void (*NeoPixelNotifierGWTest_send_neopixels_blink_logo_listener)(struct NeoPixelNotifierGWTest_Instance *)= 0x0;
void register_external_NeoPixelNotifierGWTest_send_neopixels_blink_logo_listener(void (*_listener)(struct NeoPixelNotifierGWTest_Instance *)){
external_NeoPixelNotifierGWTest_send_neopixels_blink_logo_listener = _listener;
}
void register_NeoPixelNotifierGWTest_send_neopixels_blink_logo_listener(void (*_listener)(struct NeoPixelNotifierGWTest_Instance *)){
NeoPixelNotifierGWTest_send_neopixels_blink_logo_listener = _listener;
}
void NeoPixelNotifierGWTest_send_neopixels_blink_logo(struct NeoPixelNotifierGWTest_Instance *_instance){
if (NeoPixelNotifierGWTest_send_neopixels_blink_logo_listener != 0x0) NeoPixelNotifierGWTest_send_neopixels_blink_logo_listener(_instance);
if (external_NeoPixelNotifierGWTest_send_neopixels_blink_logo_listener != 0x0) external_NeoPixelNotifierGWTest_send_neopixels_blink_logo_listener(_instance);
;
}






/*****************************************************************************
 * Definitions for configuration : TestNeoPixelNotifier
 *****************************************************************************/

//Declaration of instance variables
//Instance neo
// Variables for the properties of the instance
struct NeoPixelNotifierGW_Instance neo_var;
// Variables for the sessions of the instance
//Instance test
// Variables for the properties of the instance
struct NeoPixelNotifierGWTest_Instance test_var;
// Variables for the sessions of the instance


// Enqueue of messages NeoPixelNotifierGWTest::neopixels::off
void enqueue_NeoPixelNotifierGWTest_send_neopixels_off(struct NeoPixelNotifierGWTest_Instance *_instance){
if ( fifo_byte_available() > 4 ) {

_fifo_enqueue( (3 >> 8) & 0xFF );
_fifo_enqueue( 3 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_neopixels >> 8) & 0xFF );
_fifo_enqueue( _instance->id_neopixels & 0xFF );
}
}
// Enqueue of messages NeoPixelNotifierGWTest::neopixels::setColor
void enqueue_NeoPixelNotifierGWTest_send_neopixels_setColor(struct NeoPixelNotifierGWTest_Instance *_instance, uint8_t red, uint8_t green, uint8_t blue){
if ( fifo_byte_available() > 7 ) {

_fifo_enqueue( (4 >> 8) & 0xFF );
_fifo_enqueue( 4 & 0xFF );

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
// Enqueue of messages NeoPixelNotifierGWTest::neopixels::breath
void enqueue_NeoPixelNotifierGWTest_send_neopixels_breath(struct NeoPixelNotifierGWTest_Instance *_instance){
if ( fifo_byte_available() > 4 ) {

_fifo_enqueue( (5 >> 8) & 0xFF );
_fifo_enqueue( 5 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_neopixels >> 8) & 0xFF );
_fifo_enqueue( _instance->id_neopixels & 0xFF );
}
}
// Enqueue of messages NeoPixelNotifierGWTest::neopixels::setRingColor
void enqueue_NeoPixelNotifierGWTest_send_neopixels_setRingColor(struct NeoPixelNotifierGWTest_Instance *_instance, uint8_t red, uint8_t green, uint8_t blue){
if ( fifo_byte_available() > 7 ) {

_fifo_enqueue( (6 >> 8) & 0xFF );
_fifo_enqueue( 6 & 0xFF );

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
// Enqueue of messages NeoPixelNotifierGWTest::neopixels::blink
void enqueue_NeoPixelNotifierGWTest_send_neopixels_blink(struct NeoPixelNotifierGWTest_Instance *_instance){
if ( fifo_byte_available() > 4 ) {

_fifo_enqueue( (7 >> 8) & 0xFF );
_fifo_enqueue( 7 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_neopixels >> 8) & 0xFF );
_fifo_enqueue( _instance->id_neopixels & 0xFF );
}
}
// Enqueue of messages NeoPixelNotifierGWTest::neopixels::pulse
void enqueue_NeoPixelNotifierGWTest_send_neopixels_pulse(struct NeoPixelNotifierGWTest_Instance *_instance){
if ( fifo_byte_available() > 4 ) {

_fifo_enqueue( (8 >> 8) & 0xFF );
_fifo_enqueue( 8 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_neopixels >> 8) & 0xFF );
_fifo_enqueue( _instance->id_neopixels & 0xFF );
}
}
// Enqueue of messages NeoPixelNotifierGWTest::neopixels::rotate
void enqueue_NeoPixelNotifierGWTest_send_neopixels_rotate(struct NeoPixelNotifierGWTest_Instance *_instance, int8_t speed){
if ( fifo_byte_available() > 5 ) {

_fifo_enqueue( (9 >> 8) & 0xFF );
_fifo_enqueue( 9 & 0xFF );

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
// Enqueue of messages NeoPixelNotifierGWTest::neopixels::solid
void enqueue_NeoPixelNotifierGWTest_send_neopixels_solid(struct NeoPixelNotifierGWTest_Instance *_instance){
if ( fifo_byte_available() > 4 ) {

_fifo_enqueue( (10 >> 8) & 0xFF );
_fifo_enqueue( 10 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_neopixels >> 8) & 0xFF );
_fifo_enqueue( _instance->id_neopixels & 0xFF );
}
}
// Enqueue of messages NeoPixelNotifierGWTest::neopixels::setLogoColor
void enqueue_NeoPixelNotifierGWTest_send_neopixels_setLogoColor(struct NeoPixelNotifierGWTest_Instance *_instance, uint8_t red, uint8_t green, uint8_t blue){
if ( fifo_byte_available() > 7 ) {

_fifo_enqueue( (11 >> 8) & 0xFF );
_fifo_enqueue( 11 & 0xFF );

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
// Enqueue of messages NeoPixelNotifierGWTest::neopixels::blink_logo
void enqueue_NeoPixelNotifierGWTest_send_neopixels_blink_logo(struct NeoPixelNotifierGWTest_Instance *_instance){
if ( fifo_byte_available() > 4 ) {

_fifo_enqueue( (12 >> 8) & 0xFF );
_fifo_enqueue( 12 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_neopixels >> 8) & 0xFF );
_fifo_enqueue( _instance->id_neopixels & 0xFF );
}
}


//New dispatcher for messages
void dispatch_setColor(uint16_t sender, uint8_t param_red, uint8_t param_green, uint8_t param_blue) {
if (sender == test_var.id_neopixels) {
NeoPixelNotifierGW_handle_ctrl_setColor(&neo_var, param_red, param_green, param_blue);

}

}


//New dispatcher for messages
void dispatch_blink(uint16_t sender) {
if (sender == test_var.id_neopixels) {
NeoPixelNotifierGW_handle_ctrl_blink(&neo_var);

}

}


//New dispatcher for messages
void dispatch_pulse(uint16_t sender) {
if (sender == test_var.id_neopixels) {
NeoPixelNotifierGW_handle_ctrl_pulse(&neo_var);

}

}


//New dispatcher for messages
void dispatch_timer_timeout(uint16_t sender, uint8_t param_id) {
if (sender == timer2_instance.listener_id) {
NeoPixelNotifierGWTest_handle_clock_timer_timeout(&test_var, param_id);

}

}


//New dispatcher for messages
void dispatch_rotate(uint16_t sender, int8_t param_speed) {
if (sender == test_var.id_neopixels) {
NeoPixelNotifierGW_handle_ctrl_rotate(&neo_var, param_speed);

}

}


//New dispatcher for messages
void dispatch_off(uint16_t sender) {
if (sender == test_var.id_neopixels) {
NeoPixelNotifierGW_handle_ctrl_off(&neo_var);

}

}


//New dispatcher for messages
void dispatch_fps_clock(uint16_t sender) {
if (sender == timer2_instance.listener_id) {
NeoPixelNotifierGW_handle_clock_fps_clock(&neo_var);

}

}


//New dispatcher for messages
void dispatch_breath(uint16_t sender) {
if (sender == test_var.id_neopixels) {
NeoPixelNotifierGW_handle_ctrl_breath(&neo_var);

}

}


//New dispatcher for messages
void dispatch_setRingColor(uint16_t sender, uint8_t param_red, uint8_t param_green, uint8_t param_blue) {
if (sender == test_var.id_neopixels) {
NeoPixelNotifierGW_handle_ctrl_setRingColor(&neo_var, param_red, param_green, param_blue);

}

}


//New dispatcher for messages
void dispatch_solid(uint16_t sender) {
if (sender == test_var.id_neopixels) {
NeoPixelNotifierGW_handle_ctrl_solid(&neo_var);

}

}


//New dispatcher for messages
void dispatch_setLogoColor(uint16_t sender, uint8_t param_red, uint8_t param_green, uint8_t param_blue) {
if (sender == test_var.id_neopixels) {
NeoPixelNotifierGW_handle_ctrl_setLogoColor(&neo_var, param_red, param_green, param_blue);

}

}


//New dispatcher for messages
void dispatch_blink_logo(uint16_t sender) {
if (sender == test_var.id_neopixels) {
NeoPixelNotifierGW_handle_ctrl_blink_logo(&neo_var);

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
case 3:{
byte mbuf[4 - 2];
while (mbufi < (4 - 2)) mbuf[mbufi++] = fifo_dequeue();
uint8_t mbufi_off = 2;
dispatch_off((mbuf[0] << 8) + mbuf[1] /* instance port*/);
break;
}
case 2:{
byte mbuf[4 - 2];
while (mbufi < (4 - 2)) mbuf[mbufi++] = fifo_dequeue();
uint8_t mbufi_fps_clock = 2;
dispatch_fps_clock((mbuf[0] << 8) + mbuf[1] /* instance port*/);
break;
}
case 4:{
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
case 5:{
byte mbuf[4 - 2];
while (mbufi < (4 - 2)) mbuf[mbufi++] = fifo_dequeue();
uint8_t mbufi_breath = 2;
dispatch_breath((mbuf[0] << 8) + mbuf[1] /* instance port*/);
break;
}
case 6:{
byte mbuf[7 - 2];
while (mbufi < (7 - 2)) mbuf[mbufi++] = fifo_dequeue();
uint8_t mbufi_setRingColor = 2;
union u_setRingColor_red_t {
uint8_t p;
byte bytebuffer[1];
} u_setRingColor_red;
u_setRingColor_red.bytebuffer[0] = mbuf[mbufi_setRingColor + 0];
mbufi_setRingColor += 1;
union u_setRingColor_green_t {
uint8_t p;
byte bytebuffer[1];
} u_setRingColor_green;
u_setRingColor_green.bytebuffer[0] = mbuf[mbufi_setRingColor + 0];
mbufi_setRingColor += 1;
union u_setRingColor_blue_t {
uint8_t p;
byte bytebuffer[1];
} u_setRingColor_blue;
u_setRingColor_blue.bytebuffer[0] = mbuf[mbufi_setRingColor + 0];
mbufi_setRingColor += 1;
dispatch_setRingColor((mbuf[0] << 8) + mbuf[1] /* instance port*/,
 u_setRingColor_red.p /* red */ ,
 u_setRingColor_green.p /* green */ ,
 u_setRingColor_blue.p /* blue */ );
break;
}
case 7:{
byte mbuf[4 - 2];
while (mbufi < (4 - 2)) mbuf[mbufi++] = fifo_dequeue();
uint8_t mbufi_blink = 2;
dispatch_blink((mbuf[0] << 8) + mbuf[1] /* instance port*/);
break;
}
case 8:{
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
case 9:{
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
case 10:{
byte mbuf[4 - 2];
while (mbufi < (4 - 2)) mbuf[mbufi++] = fifo_dequeue();
uint8_t mbufi_solid = 2;
dispatch_solid((mbuf[0] << 8) + mbuf[1] /* instance port*/);
break;
}
case 11:{
byte mbuf[7 - 2];
while (mbufi < (7 - 2)) mbuf[mbufi++] = fifo_dequeue();
uint8_t mbufi_setLogoColor = 2;
union u_setLogoColor_red_t {
uint8_t p;
byte bytebuffer[1];
} u_setLogoColor_red;
u_setLogoColor_red.bytebuffer[0] = mbuf[mbufi_setLogoColor + 0];
mbufi_setLogoColor += 1;
union u_setLogoColor_green_t {
uint8_t p;
byte bytebuffer[1];
} u_setLogoColor_green;
u_setLogoColor_green.bytebuffer[0] = mbuf[mbufi_setLogoColor + 0];
mbufi_setLogoColor += 1;
union u_setLogoColor_blue_t {
uint8_t p;
byte bytebuffer[1];
} u_setLogoColor_blue;
u_setLogoColor_blue.bytebuffer[0] = mbuf[mbufi_setLogoColor + 0];
mbufi_setLogoColor += 1;
dispatch_setLogoColor((mbuf[0] << 8) + mbuf[1] /* instance port*/,
 u_setLogoColor_red.p /* red */ ,
 u_setLogoColor_green.p /* green */ ,
 u_setLogoColor_blue.p /* blue */ );
break;
}
case 12:{
byte mbuf[4 - 2];
while (mbufi < (4 - 2)) mbuf[mbufi++] = fifo_dequeue();
uint8_t mbufi_blink_logo = 2;
dispatch_blink_logo((mbuf[0] << 8) + mbuf[1] /* instance port*/);
break;
}
}
return 1;
}

void forward_NeoPixelNotifierGWTest_send_clock_timer_cancel(struct NeoPixelNotifierGWTest_Instance *_instance, uint8_t id){
if(_instance->id_clock == test_var.id_clock) {
forward_timer2_NeoPixelNotifierGWTest_send_clock_timer_cancel(_instance, id);
}
}
void forward_NeoPixelNotifierGWTest_send_clock_timer_start(struct NeoPixelNotifierGWTest_Instance *_instance, uint8_t id, uint32_t time){
if(_instance->id_clock == test_var.id_clock) {
forward_timer2_NeoPixelNotifierGWTest_send_clock_timer_start(_instance, id, time);
}
}

//external Message enqueue
void externalMessageEnqueue(uint8_t * msg, uint8_t msgSize, uint16_t listener_id) {
if ((msgSize >= 2) && (msg != NULL)) {
uint8_t msgSizeOK = 0;
switch(msg[0] * 256 + msg[1]) {
case 2:
if(msgSize == 2) {
msgSizeOK = 1;}
break;
case 1:
if(msgSize == 3) {
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

void initialize_configuration_TestNeoPixelNotifier() {
// Initialize connectors
register_external_NeoPixelNotifierGWTest_send_clock_timer_start_listener(&forward_NeoPixelNotifierGWTest_send_clock_timer_start);
register_external_NeoPixelNotifierGWTest_send_clock_timer_cancel_listener(&forward_NeoPixelNotifierGWTest_send_clock_timer_cancel);
register_NeoPixelNotifierGWTest_send_neopixels_setColor_listener(&enqueue_NeoPixelNotifierGWTest_send_neopixels_setColor);
register_NeoPixelNotifierGWTest_send_neopixels_setLogoColor_listener(&enqueue_NeoPixelNotifierGWTest_send_neopixels_setLogoColor);
register_NeoPixelNotifierGWTest_send_neopixels_setRingColor_listener(&enqueue_NeoPixelNotifierGWTest_send_neopixels_setRingColor);
register_NeoPixelNotifierGWTest_send_neopixels_off_listener(&enqueue_NeoPixelNotifierGWTest_send_neopixels_off);
register_NeoPixelNotifierGWTest_send_neopixels_pulse_listener(&enqueue_NeoPixelNotifierGWTest_send_neopixels_pulse);
register_NeoPixelNotifierGWTest_send_neopixels_rotate_listener(&enqueue_NeoPixelNotifierGWTest_send_neopixels_rotate);
register_NeoPixelNotifierGWTest_send_neopixels_breath_listener(&enqueue_NeoPixelNotifierGWTest_send_neopixels_breath);
register_NeoPixelNotifierGWTest_send_neopixels_solid_listener(&enqueue_NeoPixelNotifierGWTest_send_neopixels_solid);
register_NeoPixelNotifierGWTest_send_neopixels_blink_listener(&enqueue_NeoPixelNotifierGWTest_send_neopixels_blink);
register_NeoPixelNotifierGWTest_send_neopixels_blink_logo_listener(&enqueue_NeoPixelNotifierGWTest_send_neopixels_blink_logo);

// Init the ID, state variables and properties for external connector timer2
// Init the ID, state variables and properties for external connector timer2

// Network Initialization

timer2_instance.listener_id = add_instance(&timer2_instance);

timer2_setup();

// End Network Initialization

// Init the ID, state variables and properties for instance neo
neo_var.active = true;
neo_var.id_ctrl = add_instance( (void*) &neo_var);
neo_var.id_clock = add_instance( (void*) &neo_var);
neo_var.NeoPixelNotifierGW_NeoPixelStateChart_State = NEOPIXELNOTIFIERGW_NEOPIXELSTATECHART_PULSE_STATE;
neo_var.NeoPixelNotifierGW_NeoPixelStateChart_l_color_g_var = 10;
neo_var.NeoPixelNotifierGW_neopixel_logo_first_var = 8;
neo_var.NeoPixelNotifierGW_NeoPixelStateChart_BLINKLOGO_counter_var = 0;
neo_var.NeoPixelNotifierGW_NeoPixelStateChart_color_b_var = 0;
neo_var.NeoPixelNotifierGW_NeoPixelStateChart_breath_speed_var = 100;
neo_var.NeoPixelNotifierGW_NeoPixelStateChart_color_r_var = 100;
neo_var.NeoPixelNotifierGW_NeoPixelStateChart_l_color_r_var = 100;
neo_var.NeoPixelNotifierGW_neopixel_ring_last_var = 7;
neo_var.NeoPixelNotifierGW_NeoPixelStateChart_BLINKALL_maxcount_var = 22;
neo_var.NeoPixelNotifierGW_ring_brightness_divider_var = 1;
neo_var.NeoPixelNotifierGW_NeoPixelStateChart_ROTATE_maxangle_var = 200;
neo_var.NeoPixelNotifierGW_NeoPixelStateChart_PULSE_counter_var = 0;
neo_var.NeoPixelNotifierGW_NeoPixelStateChart_BLINKALL_counter_var = 0;
neo_var.NeoPixelNotifierGW_neopixel_logo_last_var = 9;
neo_var.NeoPixelNotifierGW_NeoPixelStateChart_l_color_b_var = 0;
neo_var.NeoPixelNotifierGW_NeoPixelStateChart_BLINKLOGO_maxcount_var = 22;
neo_var.NeoPixelNotifierGW_NeoPixelStateChart_color_g_var = 10;
neo_var.NeoPixelNotifierGW_NeoPixelStateChart_ROTATE_angle_var = 0;
neo_var.NeoPixelNotifierGW_NeoPixelStateChart_rotate_speed_var = 4;
neo_var.NeoPixelNotifierGW_NeoPixelStateChart_BREATH_maxcount_var = 186;
neo_var.NeoPixelNotifierGW_NeoPixelStateChart_PULSE_maxcount_var = 100;
neo_var.NeoPixelNotifierGW_neopixel_pin_var = 7;
neo_var.NeoPixelNotifierGW_neopixel_total_count_var = 10;
neo_var.NeoPixelNotifierGW_neopixel_ring_first_var = 0;
neo_var.NeoPixelNotifierGW_NeoPixelStateChart_BREATH_counter_var = 0;

NeoPixelNotifierGW_NeoPixelStateChart_OnEntry(NEOPIXELNOTIFIERGW_NEOPIXELSTATECHART_STATE, &neo_var);
// Init the ID, state variables and properties for instance test
test_var.active = true;
test_var.id_clock = add_instance( (void*) &test_var);
test_var.id_neopixels = add_instance( (void*) &test_var);
test_var.NeoPixelNotifierGWTest_Test_State = NEOPIXELNOTIFIERGWTEST_TEST_MEASURE_STATE;

NeoPixelNotifierGWTest_Test_OnEntry(NEOPIXELNOTIFIERGWTEST_TEST_STATE, &test_var);
}




void setup() {
initialize_configuration_TestNeoPixelNotifier();

}

void loop() {

// Network Listener
timer2_read();
// End Network Listener


    processMessageQueue();
}
