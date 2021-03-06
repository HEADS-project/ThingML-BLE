//timer2
/*****************************************************************************
 * Headers for type : NeoPixelThermo
 *****************************************************************************/

// Definition of the instance struct:
struct NeoPixelThermo_Instance {

// Instances of different sessions
bool active;
// Variables for the ID of the ports of the instance
uint16_t id_ctrl;
uint16_t id_clock;
// Variables for the current instance state
int NeoPixelThermo_NeoPixelStateChart_State;
// Variables for the properties of the instance
uint8_t NeoPixelThermo_neopixel_pin_var;
uint8_t NeoPixelThermo_neopixel_count_var;
uint8_t NeoPixelThermo_NeoPixelStateChart_color_r_var;
uint8_t NeoPixelThermo_NeoPixelStateChart_color_g_var;
uint8_t NeoPixelThermo_NeoPixelStateChart_color_b_var;
int8_t NeoPixelThermo_NeoPixelStateChart_rotate_speed_var;
uint8_t NeoPixelThermo_NeoPixelStateChart_breath_speed_var;
int16_t NeoPixelThermo_NeoPixelStateChart_ROTATE_angle_var;
uint8_t NeoPixelThermo_NeoPixelStateChart_ROTATE_maxangle_var;
uint8_t NeoPixelThermo_NeoPixelStateChart_BREATH_counter_var;
uint8_t NeoPixelThermo_NeoPixelStateChart_BREATH_maxcount_var;
uint8_t NeoPixelThermo_NeoPixelStateChart_PULSE_counter_var;
uint8_t NeoPixelThermo_NeoPixelStateChart_PULSE_maxcount_var;

};
// Declaration of prototypes outgoing messages:
void NeoPixelThermo_NeoPixelStateChart_OnEntry(int state, struct NeoPixelThermo_Instance *_instance);
void NeoPixelThermo_handle_clock_fps_clock(struct NeoPixelThermo_Instance *_instance);
void NeoPixelThermo_handle_ctrl_solid(struct NeoPixelThermo_Instance *_instance);
void NeoPixelThermo_handle_ctrl_off(struct NeoPixelThermo_Instance *_instance);
void NeoPixelThermo_handle_ctrl_setColor(struct NeoPixelThermo_Instance *_instance, uint8_t red, uint8_t green, uint8_t blue);
void NeoPixelThermo_handle_ctrl_pulse(struct NeoPixelThermo_Instance *_instance);
void NeoPixelThermo_handle_ctrl_rotate(struct NeoPixelThermo_Instance *_instance, int8_t speed);
void NeoPixelThermo_handle_ctrl_breath(struct NeoPixelThermo_Instance *_instance);
// Declaration of callbacks for incoming messages:

// Definition of the states:
#define NEOPIXELTHERMO_NEOPIXELSTATECHART_STATE 0
#define NEOPIXELTHERMO_NEOPIXELSTATECHART_OFF_STATE 1
#define NEOPIXELTHERMO_NEOPIXELSTATECHART_SOLID_STATE 2
#define NEOPIXELTHERMO_NEOPIXELSTATECHART_ROTATE_STATE 3
#define NEOPIXELTHERMO_NEOPIXELSTATECHART_BREATH_STATE 4
#define NEOPIXELTHERMO_NEOPIXELSTATECHART_PULSE_STATE 5



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

#define MAX_INSTANCES 3
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
 * Implementation for type : NeoPixelThermo
 *****************************************************************************/


// BEGIN: Code from the c_global annotation NeoPixelThermo

#include <Adafruit_NeoPixel.h>
Adafruit_NeoPixel strip;

#define BREATH_LEN 36
uint8_t breath[] = {0, 0, 0, 0, 0, 0, 1, 2, 3, 5, 8, 11, 14, 18, 23, 29, 36, 43, 52, 61, 72, 83, 96, 110, 124, 140, 155, 171, 186, 202, 216, 228, 238, 247, 252, 255};
//uint8_t breath[] = {0, 0, 0, 0, 5, 8, 11, 14, 18, 23, 29, 36, 43, 52, 61, 72, 83, 96, 110, 124, 140, 155, 171, 186, 202, 216, 228, 238, 247, 252, 255};

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

// END: Code from the c_global annotation NeoPixelThermo

// Declaration of prototypes:
//Prototypes: State Machine
void NeoPixelThermo_NeoPixelStateChart_OnExit(int state, struct NeoPixelThermo_Instance *_instance);
//Prototypes: Message Sending
//Prototypes: Function
void f_NeoPixelThermo_setPixelColor(struct NeoPixelThermo_Instance *_instance, uint8_t pixel, uint32_t color);
uint32_t f_NeoPixelThermo_getColor(struct NeoPixelThermo_Instance *_instance, uint8_t red, uint8_t green, uint8_t blue);
void f_NeoPixelThermo_updateNeopixels(struct NeoPixelThermo_Instance *_instance);
uint8_t f_NeoPixelThermo_breath_brightness(struct NeoPixelThermo_Instance *_instance, uint8_t time, uint8_t max);
uint8_t f_NeoPixelThermo_rotate_brightness(struct NeoPixelThermo_Instance *_instance, uint8_t angle, uint8_t max);
uint8_t f_NeoPixelThermo_pulse_brightness(struct NeoPixelThermo_Instance *_instance, uint8_t time);
void f_NeoPixelThermo_initializeNeopixels(struct NeoPixelThermo_Instance *_instance);
// Declaration of functions:
// Definition of function setPixelColor
void f_NeoPixelThermo_setPixelColor(struct NeoPixelThermo_Instance *_instance, uint8_t pixel, uint32_t color) {
strip.setPixelColor(pixel, color);
}
// Definition of function getColor
uint32_t f_NeoPixelThermo_getColor(struct NeoPixelThermo_Instance *_instance, uint8_t red, uint8_t green, uint8_t blue) {
return strip.Color(red, green, blue);
}
// Definition of function updateNeopixels
void f_NeoPixelThermo_updateNeopixels(struct NeoPixelThermo_Instance *_instance) {
strip.show();
}
// Definition of function breath_brightness
uint8_t f_NeoPixelThermo_breath_brightness(struct NeoPixelThermo_Instance *_instance, uint8_t time, uint8_t max) {
if(time > max / 2) {
return f_NeoPixelThermo_breath_brightness(_instance, max - time, max);

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
uint8_t f_NeoPixelThermo_rotate_brightness(struct NeoPixelThermo_Instance *_instance, uint8_t angle, uint8_t max) {
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
uint8_t f_NeoPixelThermo_pulse_brightness(struct NeoPixelThermo_Instance *_instance, uint8_t time) {
if(time < PULSE_LEN) {
return pulse[time];

} else {
return pulse[0];

}
}
// Definition of function initializeNeopixels
void f_NeoPixelThermo_initializeNeopixels(struct NeoPixelThermo_Instance *_instance) {
strip = Adafruit_NeoPixel(_instance->NeoPixelThermo_neopixel_count_var + 4, _instance->NeoPixelThermo_neopixel_pin_var, NEO_GRBW + NEO_KHZ800);
		 strip.begin();
		 strip.setBrightness(255);
		 strip.show();
;uint32_t color = f_NeoPixelThermo_getColor(_instance, 0, 50, 255);
f_NeoPixelThermo_setPixelColor(_instance, _instance->NeoPixelThermo_neopixel_count_var, color);
f_NeoPixelThermo_updateNeopixels(_instance);
}

// Sessions functionss:


// On Entry Actions:
void NeoPixelThermo_NeoPixelStateChart_OnEntry(int state, struct NeoPixelThermo_Instance *_instance) {
switch(state) {
case NEOPIXELTHERMO_NEOPIXELSTATECHART_STATE:{
_instance->NeoPixelThermo_NeoPixelStateChart_State = NEOPIXELTHERMO_NEOPIXELSTATECHART_PULSE_STATE;
f_NeoPixelThermo_initializeNeopixels(_instance);
NeoPixelThermo_NeoPixelStateChart_OnEntry(_instance->NeoPixelThermo_NeoPixelStateChart_State, _instance);
break;
}
case NEOPIXELTHERMO_NEOPIXELSTATECHART_OFF_STATE:{
;uint8_t i = 0;
;uint32_t color = f_NeoPixelThermo_getColor(_instance, 0, 0, 0);
while(i < _instance->NeoPixelThermo_neopixel_count_var + 1) {
f_NeoPixelThermo_setPixelColor(_instance, i, color);
i = i + 1;

}
f_NeoPixelThermo_updateNeopixels(_instance);
break;
}
case NEOPIXELTHERMO_NEOPIXELSTATECHART_SOLID_STATE:{
break;
}
case NEOPIXELTHERMO_NEOPIXELSTATECHART_ROTATE_STATE:{
break;
}
case NEOPIXELTHERMO_NEOPIXELSTATECHART_BREATH_STATE:{
break;
}
case NEOPIXELTHERMO_NEOPIXELSTATECHART_PULSE_STATE:{
;uint8_t i = _instance->NeoPixelThermo_neopixel_count_var;
;uint32_t color = f_NeoPixelThermo_getColor(_instance, _instance->NeoPixelThermo_NeoPixelStateChart_color_r_var, _instance->NeoPixelThermo_NeoPixelStateChart_color_g_var, _instance->NeoPixelThermo_NeoPixelStateChart_color_b_var);
while(i < _instance->NeoPixelThermo_neopixel_count_var + 4) {
f_NeoPixelThermo_setPixelColor(_instance, i, color);
i = i + 1;

}
f_NeoPixelThermo_updateNeopixels(_instance);
break;
}
default: break;
}
}

// On Exit Actions:
void NeoPixelThermo_NeoPixelStateChart_OnExit(int state, struct NeoPixelThermo_Instance *_instance) {
switch(state) {
case NEOPIXELTHERMO_NEOPIXELSTATECHART_STATE:{
NeoPixelThermo_NeoPixelStateChart_OnExit(_instance->NeoPixelThermo_NeoPixelStateChart_State, _instance);
break;}
case NEOPIXELTHERMO_NEOPIXELSTATECHART_OFF_STATE:{
break;}
case NEOPIXELTHERMO_NEOPIXELSTATECHART_SOLID_STATE:{
break;}
case NEOPIXELTHERMO_NEOPIXELSTATECHART_ROTATE_STATE:{
break;}
case NEOPIXELTHERMO_NEOPIXELSTATECHART_BREATH_STATE:{
break;}
case NEOPIXELTHERMO_NEOPIXELSTATECHART_PULSE_STATE:{
break;}
default: break;
}
}

// Event Handlers for incoming messages:
void NeoPixelThermo_handle_clock_fps_clock(struct NeoPixelThermo_Instance *_instance) {
if(!(_instance->active)) return;
//Region NeoPixelStateChart
uint8_t NeoPixelThermo_NeoPixelStateChart_State_event_consumed = 0;
if (_instance->NeoPixelThermo_NeoPixelStateChart_State == NEOPIXELTHERMO_NEOPIXELSTATECHART_SOLID_STATE) {
if (NeoPixelThermo_NeoPixelStateChart_State_event_consumed == 0 && 1) {
;uint8_t i = 0;
;uint32_t color = f_NeoPixelThermo_getColor(_instance, _instance->NeoPixelThermo_NeoPixelStateChart_color_r_var, _instance->NeoPixelThermo_NeoPixelStateChart_color_g_var, _instance->NeoPixelThermo_NeoPixelStateChart_color_b_var);
while(i < _instance->NeoPixelThermo_neopixel_count_var + 1) {
f_NeoPixelThermo_setPixelColor(_instance, i, color);
i = i + 1;

}
f_NeoPixelThermo_updateNeopixels(_instance);
NeoPixelThermo_NeoPixelStateChart_State_event_consumed = 1;
}
}
else if (_instance->NeoPixelThermo_NeoPixelStateChart_State == NEOPIXELTHERMO_NEOPIXELSTATECHART_ROTATE_STATE) {
if (NeoPixelThermo_NeoPixelStateChart_State_event_consumed == 0 && 1) {
;uint8_t i = 0;
while(i < _instance->NeoPixelThermo_neopixel_count_var) {
;uint16_t pangle = _instance->NeoPixelThermo_NeoPixelStateChart_ROTATE_angle_var + (i * _instance->NeoPixelThermo_NeoPixelStateChart_ROTATE_maxangle_var) / _instance->NeoPixelThermo_neopixel_count_var;
pangle = pangle % _instance->NeoPixelThermo_NeoPixelStateChart_ROTATE_maxangle_var;
;uint8_t bright = f_NeoPixelThermo_rotate_brightness(_instance, pangle, _instance->NeoPixelThermo_NeoPixelStateChart_ROTATE_maxangle_var);
;uint32_t color = f_NeoPixelThermo_getColor(_instance, (_instance->NeoPixelThermo_NeoPixelStateChart_color_r_var * bright) / 256, (_instance->NeoPixelThermo_NeoPixelStateChart_color_g_var * bright) / 256, (_instance->NeoPixelThermo_NeoPixelStateChart_color_b_var * bright) / 256);
f_NeoPixelThermo_setPixelColor(_instance, i, color);
i = i + 1;

}
f_NeoPixelThermo_updateNeopixels(_instance);
_instance->NeoPixelThermo_NeoPixelStateChart_ROTATE_angle_var = _instance->NeoPixelThermo_NeoPixelStateChart_ROTATE_angle_var + _instance->NeoPixelThermo_NeoPixelStateChart_rotate_speed_var;
if(_instance->NeoPixelThermo_NeoPixelStateChart_ROTATE_angle_var < 0) {
_instance->NeoPixelThermo_NeoPixelStateChart_ROTATE_angle_var = _instance->NeoPixelThermo_NeoPixelStateChart_ROTATE_maxangle_var + _instance->NeoPixelThermo_NeoPixelStateChart_ROTATE_angle_var;

}
if(_instance->NeoPixelThermo_NeoPixelStateChart_ROTATE_angle_var > _instance->NeoPixelThermo_NeoPixelStateChart_ROTATE_maxangle_var - 1) {
_instance->NeoPixelThermo_NeoPixelStateChart_ROTATE_angle_var = _instance->NeoPixelThermo_NeoPixelStateChart_ROTATE_angle_var - _instance->NeoPixelThermo_NeoPixelStateChart_ROTATE_maxangle_var;

}
NeoPixelThermo_NeoPixelStateChart_State_event_consumed = 1;
}
}
else if (_instance->NeoPixelThermo_NeoPixelStateChart_State == NEOPIXELTHERMO_NEOPIXELSTATECHART_BREATH_STATE) {
if (NeoPixelThermo_NeoPixelStateChart_State_event_consumed == 0 && 1) {
;uint8_t bright = f_NeoPixelThermo_breath_brightness(_instance, _instance->NeoPixelThermo_NeoPixelStateChart_BREATH_counter_var, _instance->NeoPixelThermo_NeoPixelStateChart_BREATH_maxcount_var);
;uint32_t color = f_NeoPixelThermo_getColor(_instance, (_instance->NeoPixelThermo_NeoPixelStateChart_color_r_var * bright) / 256, (_instance->NeoPixelThermo_NeoPixelStateChart_color_g_var * bright) / 256, (_instance->NeoPixelThermo_NeoPixelStateChart_color_b_var * bright) / 256);
;uint8_t i = _instance->NeoPixelThermo_neopixel_count_var;
while(i < _instance->NeoPixelThermo_neopixel_count_var + 1) {
f_NeoPixelThermo_setPixelColor(_instance, i, color);
i = i + 1;

}
f_NeoPixelThermo_updateNeopixels(_instance);
_instance->NeoPixelThermo_NeoPixelStateChart_BREATH_counter_var = _instance->NeoPixelThermo_NeoPixelStateChart_BREATH_counter_var + 1;
if(_instance->NeoPixelThermo_NeoPixelStateChart_BREATH_counter_var == _instance->NeoPixelThermo_NeoPixelStateChart_BREATH_maxcount_var) {
_instance->NeoPixelThermo_NeoPixelStateChart_BREATH_counter_var = 0;

}
NeoPixelThermo_NeoPixelStateChart_State_event_consumed = 1;
}
}
else if (_instance->NeoPixelThermo_NeoPixelStateChart_State == NEOPIXELTHERMO_NEOPIXELSTATECHART_PULSE_STATE) {
if (NeoPixelThermo_NeoPixelStateChart_State_event_consumed == 0 && 1) {
;uint8_t bright = f_NeoPixelThermo_pulse_brightness(_instance, _instance->NeoPixelThermo_NeoPixelStateChart_PULSE_counter_var);
;uint32_t color = f_NeoPixelThermo_getColor(_instance, (_instance->NeoPixelThermo_NeoPixelStateChart_color_r_var * bright) / 256, (_instance->NeoPixelThermo_NeoPixelStateChart_color_g_var * bright) / 256, (_instance->NeoPixelThermo_NeoPixelStateChart_color_b_var * bright) / 256);
;uint8_t i = 0;
while(i < _instance->NeoPixelThermo_neopixel_count_var) {
f_NeoPixelThermo_setPixelColor(_instance, i, color);
i = i + 1;

}
f_NeoPixelThermo_updateNeopixels(_instance);
_instance->NeoPixelThermo_NeoPixelStateChart_PULSE_counter_var = _instance->NeoPixelThermo_NeoPixelStateChart_PULSE_counter_var + 1;
if(_instance->NeoPixelThermo_NeoPixelStateChart_PULSE_counter_var == _instance->NeoPixelThermo_NeoPixelStateChart_PULSE_maxcount_var) {
_instance->NeoPixelThermo_NeoPixelStateChart_PULSE_counter_var = 0;

}
NeoPixelThermo_NeoPixelStateChart_State_event_consumed = 1;
}
}
//End Region NeoPixelStateChart
//End dsregion NeoPixelStateChart
//Session list: 
}
void NeoPixelThermo_handle_ctrl_solid(struct NeoPixelThermo_Instance *_instance) {
if(!(_instance->active)) return;
//Region NeoPixelStateChart
uint8_t NeoPixelThermo_NeoPixelStateChart_State_event_consumed = 0;
if (_instance->NeoPixelThermo_NeoPixelStateChart_State == NEOPIXELTHERMO_NEOPIXELSTATECHART_OFF_STATE) {
if (NeoPixelThermo_NeoPixelStateChart_State_event_consumed == 0 && 1) {
NeoPixelThermo_NeoPixelStateChart_OnExit(NEOPIXELTHERMO_NEOPIXELSTATECHART_OFF_STATE, _instance);
_instance->NeoPixelThermo_NeoPixelStateChart_State = NEOPIXELTHERMO_NEOPIXELSTATECHART_SOLID_STATE;
NeoPixelThermo_NeoPixelStateChart_OnEntry(NEOPIXELTHERMO_NEOPIXELSTATECHART_SOLID_STATE, _instance);
NeoPixelThermo_NeoPixelStateChart_State_event_consumed = 1;
}
}
//End Region NeoPixelStateChart
//End dsregion NeoPixelStateChart
//Session list: 
}
void NeoPixelThermo_handle_ctrl_off(struct NeoPixelThermo_Instance *_instance) {
if(!(_instance->active)) return;
//Region NeoPixelStateChart
uint8_t NeoPixelThermo_NeoPixelStateChart_State_event_consumed = 0;
if (_instance->NeoPixelThermo_NeoPixelStateChart_State == NEOPIXELTHERMO_NEOPIXELSTATECHART_SOLID_STATE) {
if (NeoPixelThermo_NeoPixelStateChart_State_event_consumed == 0 && 1) {
NeoPixelThermo_NeoPixelStateChart_OnExit(NEOPIXELTHERMO_NEOPIXELSTATECHART_SOLID_STATE, _instance);
_instance->NeoPixelThermo_NeoPixelStateChart_State = NEOPIXELTHERMO_NEOPIXELSTATECHART_OFF_STATE;
NeoPixelThermo_NeoPixelStateChart_OnEntry(NEOPIXELTHERMO_NEOPIXELSTATECHART_OFF_STATE, _instance);
NeoPixelThermo_NeoPixelStateChart_State_event_consumed = 1;
}
}
else if (_instance->NeoPixelThermo_NeoPixelStateChart_State == NEOPIXELTHERMO_NEOPIXELSTATECHART_ROTATE_STATE) {
if (NeoPixelThermo_NeoPixelStateChart_State_event_consumed == 0 && 1) {
NeoPixelThermo_NeoPixelStateChart_OnExit(NEOPIXELTHERMO_NEOPIXELSTATECHART_ROTATE_STATE, _instance);
_instance->NeoPixelThermo_NeoPixelStateChart_State = NEOPIXELTHERMO_NEOPIXELSTATECHART_OFF_STATE;
NeoPixelThermo_NeoPixelStateChart_OnEntry(NEOPIXELTHERMO_NEOPIXELSTATECHART_OFF_STATE, _instance);
NeoPixelThermo_NeoPixelStateChart_State_event_consumed = 1;
}
}
else if (_instance->NeoPixelThermo_NeoPixelStateChart_State == NEOPIXELTHERMO_NEOPIXELSTATECHART_BREATH_STATE) {
if (NeoPixelThermo_NeoPixelStateChart_State_event_consumed == 0 && 1) {
NeoPixelThermo_NeoPixelStateChart_OnExit(NEOPIXELTHERMO_NEOPIXELSTATECHART_BREATH_STATE, _instance);
_instance->NeoPixelThermo_NeoPixelStateChart_State = NEOPIXELTHERMO_NEOPIXELSTATECHART_OFF_STATE;
NeoPixelThermo_NeoPixelStateChart_OnEntry(NEOPIXELTHERMO_NEOPIXELSTATECHART_OFF_STATE, _instance);
NeoPixelThermo_NeoPixelStateChart_State_event_consumed = 1;
}
}
else if (_instance->NeoPixelThermo_NeoPixelStateChart_State == NEOPIXELTHERMO_NEOPIXELSTATECHART_PULSE_STATE) {
if (NeoPixelThermo_NeoPixelStateChart_State_event_consumed == 0 && 1) {
NeoPixelThermo_NeoPixelStateChart_OnExit(NEOPIXELTHERMO_NEOPIXELSTATECHART_PULSE_STATE, _instance);
_instance->NeoPixelThermo_NeoPixelStateChart_State = NEOPIXELTHERMO_NEOPIXELSTATECHART_OFF_STATE;
NeoPixelThermo_NeoPixelStateChart_OnEntry(NEOPIXELTHERMO_NEOPIXELSTATECHART_OFF_STATE, _instance);
NeoPixelThermo_NeoPixelStateChart_State_event_consumed = 1;
}
}
//End Region NeoPixelStateChart
//End dsregion NeoPixelStateChart
//Session list: 
}
void NeoPixelThermo_handle_ctrl_setColor(struct NeoPixelThermo_Instance *_instance, uint8_t red, uint8_t green, uint8_t blue) {
if(!(_instance->active)) return;
//Region NeoPixelStateChart
uint8_t NeoPixelThermo_NeoPixelStateChart_State_event_consumed = 0;
//End Region NeoPixelStateChart
//End dsregion NeoPixelStateChart
//Session list: 
if (1) {
_instance->NeoPixelThermo_NeoPixelStateChart_color_r_var = red;
_instance->NeoPixelThermo_NeoPixelStateChart_color_g_var = green;
_instance->NeoPixelThermo_NeoPixelStateChart_color_b_var = blue;
NeoPixelThermo_NeoPixelStateChart_State_event_consumed = 1;
}
}
void NeoPixelThermo_handle_ctrl_pulse(struct NeoPixelThermo_Instance *_instance) {
if(!(_instance->active)) return;
//Region NeoPixelStateChart
uint8_t NeoPixelThermo_NeoPixelStateChart_State_event_consumed = 0;
if (_instance->NeoPixelThermo_NeoPixelStateChart_State == NEOPIXELTHERMO_NEOPIXELSTATECHART_OFF_STATE) {
if (NeoPixelThermo_NeoPixelStateChart_State_event_consumed == 0 && 1) {
NeoPixelThermo_NeoPixelStateChart_OnExit(NEOPIXELTHERMO_NEOPIXELSTATECHART_OFF_STATE, _instance);
_instance->NeoPixelThermo_NeoPixelStateChart_State = NEOPIXELTHERMO_NEOPIXELSTATECHART_PULSE_STATE;
NeoPixelThermo_NeoPixelStateChart_OnEntry(NEOPIXELTHERMO_NEOPIXELSTATECHART_PULSE_STATE, _instance);
NeoPixelThermo_NeoPixelStateChart_State_event_consumed = 1;
}
}
//End Region NeoPixelStateChart
//End dsregion NeoPixelStateChart
//Session list: 
}
void NeoPixelThermo_handle_ctrl_rotate(struct NeoPixelThermo_Instance *_instance, int8_t speed) {
if(!(_instance->active)) return;
//Region NeoPixelStateChart
uint8_t NeoPixelThermo_NeoPixelStateChart_State_event_consumed = 0;
if (_instance->NeoPixelThermo_NeoPixelStateChart_State == NEOPIXELTHERMO_NEOPIXELSTATECHART_OFF_STATE) {
if (NeoPixelThermo_NeoPixelStateChart_State_event_consumed == 0 && 1) {
NeoPixelThermo_NeoPixelStateChart_OnExit(NEOPIXELTHERMO_NEOPIXELSTATECHART_OFF_STATE, _instance);
_instance->NeoPixelThermo_NeoPixelStateChart_State = NEOPIXELTHERMO_NEOPIXELSTATECHART_ROTATE_STATE;
_instance->NeoPixelThermo_NeoPixelStateChart_rotate_speed_var = speed;
NeoPixelThermo_NeoPixelStateChart_OnEntry(NEOPIXELTHERMO_NEOPIXELSTATECHART_ROTATE_STATE, _instance);
NeoPixelThermo_NeoPixelStateChart_State_event_consumed = 1;
}
}
//End Region NeoPixelStateChart
//End dsregion NeoPixelStateChart
//Session list: 
}
void NeoPixelThermo_handle_ctrl_breath(struct NeoPixelThermo_Instance *_instance) {
if(!(_instance->active)) return;
//Region NeoPixelStateChart
uint8_t NeoPixelThermo_NeoPixelStateChart_State_event_consumed = 0;
if (_instance->NeoPixelThermo_NeoPixelStateChart_State == NEOPIXELTHERMO_NEOPIXELSTATECHART_OFF_STATE) {
if (NeoPixelThermo_NeoPixelStateChart_State_event_consumed == 0 && 1) {
NeoPixelThermo_NeoPixelStateChart_OnExit(NEOPIXELTHERMO_NEOPIXELSTATECHART_OFF_STATE, _instance);
_instance->NeoPixelThermo_NeoPixelStateChart_State = NEOPIXELTHERMO_NEOPIXELSTATECHART_BREATH_STATE;
NeoPixelThermo_NeoPixelStateChart_OnEntry(NEOPIXELTHERMO_NEOPIXELSTATECHART_BREATH_STATE, _instance);
NeoPixelThermo_NeoPixelStateChart_State_event_consumed = 1;
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
if((timer2_interrupt_counter % 66) == 0) {
timer2_tic_flags |= 0b00000010;
}
if(timer2_interrupt_counter >= 66) {
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

void timer2_66ms_tic() {
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
timer2_66ms_tic();
timer2_tic_flags &= 0b11111101;
}

}
// Forwarding of messages timer2::ThermoSensor::clock::timer_start
void forward_timer2_ThermoSensor_send_clock_timer_start(struct ThermoSensor_Instance *_instance, uint8_t id, uint32_t time){
timer2_timer_start(id, time);}

// Forwarding of messages timer2::ThermoSensor::clock::timer_cancel
void forward_timer2_ThermoSensor_send_clock_timer_cancel(struct ThermoSensor_Instance *_instance, uint8_t id){
timer2_timer_cancel(id);}

// Forwarding of messages timer2::BLENotifierThermo::clock::timer_start
void forward_timer2_BLENotifierThermo_send_clock_timer_start(struct BLENotifierThermo_Instance *_instance, uint8_t id, uint32_t time){
timer2_timer_start(id, time);}

// Forwarding of messages timer2::BLENotifierThermo::clock::timer_cancel
void forward_timer2_BLENotifierThermo_send_clock_timer_cancel(struct BLENotifierThermo_Instance *_instance, uint8_t id){
timer2_timer_cancel(id);}




/*****************************************************************************
 * Definitions for configuration : TestNeoPixelsThermo
 *****************************************************************************/

//Declaration of instance variables
//Instance neo
// Variables for the properties of the instance
struct NeoPixelThermo_Instance neo_var;
// Variables for the sessions of the instance




//New dispatcher for messages
void dispatch_fps_clock(uint16_t sender) {
if (sender == null_instance.listener_id) {
NeoPixelThermo_handle_clock_fps_clock(&neo_var);

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
case 2:{
byte mbuf[4 - 2];
while (mbufi < (4 - 2)) mbuf[mbufi++] = fifo_dequeue();
uint8_t mbufi_fps_clock = 2;
dispatch_fps_clock((mbuf[0] << 8) + mbuf[1] /* instance port*/);
break;
}
}
return 1;
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

void initialize_configuration_TestNeoPixelsThermo() {
// Initialize connectors

// Init the ID, state variables and properties for external connector null

// Network Initialization

timer2_instance.listener_id = add_instance(&timer2_instance);

timer2_setup();

// End Network Initialization

// Init the ID, state variables and properties for instance neo
neo_var.active = true;
neo_var.id_ctrl = add_instance( (void*) &neo_var);
neo_var.id_clock = add_instance( (void*) &neo_var);
neo_var.NeoPixelThermo_NeoPixelStateChart_State = NEOPIXELTHERMO_NEOPIXELSTATECHART_PULSE_STATE;
neo_var.NeoPixelThermo_neopixel_pin_var = 7;
neo_var.NeoPixelThermo_neopixel_count_var = 3;
neo_var.NeoPixelThermo_NeoPixelStateChart_color_r_var = 100;
neo_var.NeoPixelThermo_NeoPixelStateChart_color_g_var = 10;
neo_var.NeoPixelThermo_NeoPixelStateChart_color_b_var = 0;
neo_var.NeoPixelThermo_NeoPixelStateChart_rotate_speed_var = 4;
neo_var.NeoPixelThermo_NeoPixelStateChart_breath_speed_var = 100;
neo_var.NeoPixelThermo_NeoPixelStateChart_ROTATE_angle_var = 0;
neo_var.NeoPixelThermo_NeoPixelStateChart_ROTATE_maxangle_var = 200;
neo_var.NeoPixelThermo_NeoPixelStateChart_BREATH_counter_var = 0;
neo_var.NeoPixelThermo_NeoPixelStateChart_BREATH_maxcount_var = 186;
neo_var.NeoPixelThermo_NeoPixelStateChart_PULSE_counter_var = 0;
neo_var.NeoPixelThermo_NeoPixelStateChart_PULSE_maxcount_var = 100;

NeoPixelThermo_NeoPixelStateChart_OnEntry(NEOPIXELTHERMO_NEOPIXELSTATECHART_STATE, &neo_var);
}




void setup() {
initialize_configuration_TestNeoPixelsThermo();

}

void loop() {

// Network Listener
timer2_read();
// End Network Listener


    processMessageQueue();
}
