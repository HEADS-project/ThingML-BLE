/*****************************************************************************
 * Headers for type : NeoPixelGroup
 *****************************************************************************/

// Definition of the instance struct:
struct NeoPixelGroup_Instance {

// Instances of different sessions
bool active;
// Variables for the ID of the ports of the instance
uint16_t id_ctrl;
uint16_t id_clock;
// Variables for the current instance state
int NeoPixelGroup_NeoPixelStateChart_State;
// Variables for the properties of the instance
uint8_t NeoPixelGroup_NeoPixelStateChart_BLINKALL_maxcount_var;
uint8_t NeoPixelGroup_neopixel_total_count_var;
int8_t NeoPixelGroup_NeoPixelStateChart_rotate_speed_var;
uint8_t NeoPixelGroup_NeoPixelStateChart_breath_speed_var;
uint8_t NeoPixelGroup_NeoPixelStateChart_BLINKALL_counter_var;
uint8_t NeoPixelGroup_NeoPixelStateChart_PULSE_maxcount_var;
uint8_t NeoPixelGroup_NeoPixelStateChart_BREATH_counter_var;
uint8_t NeoPixelGroup_neopixel_last_var;
uint8_t NeoPixelGroup_NeoPixelStateChart_color_g_var;
uint8_t NeoPixelGroup_NeoPixelStateChart_PULSE_counter_var;
uint8_t NeoPixelGroup_NeoPixelStateChart_color_r_var;
uint8_t NeoPixelGroup_neopixel_pin_var;
uint8_t NeoPixelGroup_neopixel_first_var;
uint8_t NeoPixelGroup_NeoPixelStateChart_BREATH_maxcount_var;
uint8_t NeoPixelGroup_NeoPixelStateChart_color_b_var;
int16_t NeoPixelGroup_NeoPixelStateChart_ROTATE_angle_var;
uint8_t NeoPixelGroup_NeoPixelStateChart_ROTATE_maxangle_var;

};
// Declaration of prototypes outgoing messages:
void NeoPixelGroup_NeoPixelStateChart_OnEntry(int state, struct NeoPixelGroup_Instance *_instance);
void NeoPixelGroup_handle_ctrl_pulse(struct NeoPixelGroup_Instance *_instance);
void NeoPixelGroup_handle_ctrl_setColor(struct NeoPixelGroup_Instance *_instance, uint8_t red, uint8_t green, uint8_t blue);
void NeoPixelGroup_handle_ctrl_breath(struct NeoPixelGroup_Instance *_instance);
void NeoPixelGroup_handle_ctrl_rotate(struct NeoPixelGroup_Instance *_instance, int8_t speed);
void NeoPixelGroup_handle_ctrl_solid(struct NeoPixelGroup_Instance *_instance);
void NeoPixelGroup_handle_ctrl_blink(struct NeoPixelGroup_Instance *_instance);
void NeoPixelGroup_handle_ctrl_off(struct NeoPixelGroup_Instance *_instance);
void NeoPixelGroup_handle_clock_fps_clock(struct NeoPixelGroup_Instance *_instance);
// Declaration of callbacks for incoming messages:

// Definition of the states:
#define NEOPIXELGROUP_NEOPIXELSTATECHART_STATE 0
#define NEOPIXELGROUP_NEOPIXELSTATECHART_OFF_STATE 1
#define NEOPIXELGROUP_NEOPIXELSTATECHART_SOLID_STATE 2
#define NEOPIXELGROUP_NEOPIXELSTATECHART_ROTATE_STATE 3
#define NEOPIXELGROUP_NEOPIXELSTATECHART_BREATH_STATE 4
#define NEOPIXELGROUP_NEOPIXELSTATECHART_PULSE_STATE 5
#define NEOPIXELGROUP_NEOPIXELSTATECHART_BLINKALL_STATE 6


/*****************************************************************************
 * Headers for type : Tryggi
 *****************************************************************************/

// Definition of the instance struct:
struct Tryggi_Instance {

// Instances of different sessions
bool active;
// Variables for the ID of the ports of the instance
uint16_t id_ctrl;
uint16_t id_timer;
uint16_t id_head;
uint16_t id_heart;
// Variables for the current instance state
int Tryggi_TryggiSC_State;
// Variables for the properties of the instance
uint8_t Tryggi_TIMERID_var;

};
// Declaration of prototypes outgoing messages:
void Tryggi_TryggiSC_OnEntry(int state, struct Tryggi_Instance *_instance);
void Tryggi_handle_timer_timer_timeout(struct Tryggi_Instance *_instance, uint8_t id);
void Tryggi_handle_ctrl_ping_tryggy(struct Tryggi_Instance *_instance);
void Tryggi_handle_ctrl_clear_status(struct Tryggi_Instance *_instance);
void Tryggi_handle_ctrl_bluetooth_act(struct Tryggi_Instance *_instance);
void Tryggi_handle_ctrl_tellucloud_act(struct Tryggi_Instance *_instance);
void Tryggi_handle_ctrl_show_success(struct Tryggi_Instance *_instance);
void Tryggi_handle_ctrl_show_error(struct Tryggi_Instance *_instance);
// Declaration of callbacks for incoming messages:
void register_Tryggi_send_ctrl_pong_tryggy_listener(void (*_listener)(struct Tryggi_Instance *));
void register_external_Tryggi_send_ctrl_pong_tryggy_listener(void (*_listener)(struct Tryggi_Instance *));
void register_Tryggi_send_timer_timer_start_listener(void (*_listener)(struct Tryggi_Instance *, uint8_t, uint32_t));
void register_external_Tryggi_send_timer_timer_start_listener(void (*_listener)(struct Tryggi_Instance *, uint8_t, uint32_t));
void register_Tryggi_send_timer_timer_cancel_listener(void (*_listener)(struct Tryggi_Instance *, uint8_t));
void register_external_Tryggi_send_timer_timer_cancel_listener(void (*_listener)(struct Tryggi_Instance *, uint8_t));
void register_Tryggi_send_head_setColor_listener(void (*_listener)(struct Tryggi_Instance *, uint8_t, uint8_t, uint8_t));
void register_external_Tryggi_send_head_setColor_listener(void (*_listener)(struct Tryggi_Instance *, uint8_t, uint8_t, uint8_t));
void register_Tryggi_send_head_off_listener(void (*_listener)(struct Tryggi_Instance *));
void register_external_Tryggi_send_head_off_listener(void (*_listener)(struct Tryggi_Instance *));
void register_Tryggi_send_head_pulse_listener(void (*_listener)(struct Tryggi_Instance *));
void register_external_Tryggi_send_head_pulse_listener(void (*_listener)(struct Tryggi_Instance *));
void register_Tryggi_send_head_rotate_listener(void (*_listener)(struct Tryggi_Instance *, int8_t));
void register_external_Tryggi_send_head_rotate_listener(void (*_listener)(struct Tryggi_Instance *, int8_t));
void register_Tryggi_send_head_breath_listener(void (*_listener)(struct Tryggi_Instance *));
void register_external_Tryggi_send_head_breath_listener(void (*_listener)(struct Tryggi_Instance *));
void register_Tryggi_send_head_solid_listener(void (*_listener)(struct Tryggi_Instance *));
void register_external_Tryggi_send_head_solid_listener(void (*_listener)(struct Tryggi_Instance *));
void register_Tryggi_send_head_blink_listener(void (*_listener)(struct Tryggi_Instance *));
void register_external_Tryggi_send_head_blink_listener(void (*_listener)(struct Tryggi_Instance *));
void register_Tryggi_send_heart_setColor_listener(void (*_listener)(struct Tryggi_Instance *, uint8_t, uint8_t, uint8_t));
void register_external_Tryggi_send_heart_setColor_listener(void (*_listener)(struct Tryggi_Instance *, uint8_t, uint8_t, uint8_t));
void register_Tryggi_send_heart_off_listener(void (*_listener)(struct Tryggi_Instance *));
void register_external_Tryggi_send_heart_off_listener(void (*_listener)(struct Tryggi_Instance *));
void register_Tryggi_send_heart_pulse_listener(void (*_listener)(struct Tryggi_Instance *));
void register_external_Tryggi_send_heart_pulse_listener(void (*_listener)(struct Tryggi_Instance *));
void register_Tryggi_send_heart_rotate_listener(void (*_listener)(struct Tryggi_Instance *, int8_t));
void register_external_Tryggi_send_heart_rotate_listener(void (*_listener)(struct Tryggi_Instance *, int8_t));
void register_Tryggi_send_heart_breath_listener(void (*_listener)(struct Tryggi_Instance *));
void register_external_Tryggi_send_heart_breath_listener(void (*_listener)(struct Tryggi_Instance *));
void register_Tryggi_send_heart_solid_listener(void (*_listener)(struct Tryggi_Instance *));
void register_external_Tryggi_send_heart_solid_listener(void (*_listener)(struct Tryggi_Instance *));
void register_Tryggi_send_heart_blink_listener(void (*_listener)(struct Tryggi_Instance *));
void register_external_Tryggi_send_heart_blink_listener(void (*_listener)(struct Tryggi_Instance *));

// Definition of the states:
#define TRYGGI_TRYGGISC_STATE 0
#define TRYGGI_TRYGGISC_WAITINGFORPING_STATE 1
#define TRYGGI_TRYGGISC_CONNECTED_STATE 2


/*****************************************************/
//                    Serial
/*****************************************************/

void Serial_setup();

void Serial_set_listener_id(uint16_t id);

void Serial_forwardMessage(byte * msg, uint8_t size);

void Serial_read();

/********************* FORWARDERS *********************/

/*FORWARDERS*/// Forwarding of messages Serial::Tryggi::ctrl::pong_tryggy
void forward_Serial_Tryggi_send_ctrl_pong_tryggy(struct Tryggi_Instance *_instance);
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

#define MAX_INSTANCES 12
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
// Forwarding of messages timer2::Tryggi::timer::timer_start
void forward_timer2_Tryggi_send_timer_timer_start(struct Tryggi_Instance *_instance, uint8_t id, uint32_t time){
timer2_timer_start(id, time);}

// Forwarding of messages timer2::Tryggi::timer::timer_cancel
void forward_timer2_Tryggi_send_timer_timer_cancel(struct Tryggi_Instance *_instance, uint8_t id){
timer2_timer_cancel(id);}

/*****************************************************************************
 * Implementation for type : NeoPixelGroup
 *****************************************************************************/


// BEGIN: Code from the c_global annotation NeoPixelGroup

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

// END: Code from the c_global annotation NeoPixelGroup

// Declaration of prototypes:
//Prototypes: State Machine
void NeoPixelGroup_NeoPixelStateChart_OnExit(int state, struct NeoPixelGroup_Instance *_instance);
//Prototypes: Message Sending
//Prototypes: Function
void f_NeoPixelGroup_setPixelColor(struct NeoPixelGroup_Instance *_instance, uint8_t pixel, uint32_t color);
uint32_t f_NeoPixelGroup_getColor(struct NeoPixelGroup_Instance *_instance, uint8_t red, uint8_t green, uint8_t blue);
void f_NeoPixelGroup_updateNeopixels(struct NeoPixelGroup_Instance *_instance);
uint8_t f_NeoPixelGroup_breath_brightness(struct NeoPixelGroup_Instance *_instance, uint8_t time, uint8_t max);
uint8_t f_NeoPixelGroup_rotate_brightness(struct NeoPixelGroup_Instance *_instance, uint8_t angle, uint8_t max);
uint8_t f_NeoPixelGroup_pulse_brightness(struct NeoPixelGroup_Instance *_instance, uint8_t time);
uint8_t f_NeoPixelGroup_blink_brightness(struct NeoPixelGroup_Instance *_instance, uint8_t time);
void f_NeoPixelGroup_initializeNeopixels(struct NeoPixelGroup_Instance *_instance);
// Declaration of functions:
// Definition of function setPixelColor
void f_NeoPixelGroup_setPixelColor(struct NeoPixelGroup_Instance *_instance, uint8_t pixel, uint32_t color) {
strip.setPixelColor(pixel, color);
}
// Definition of function getColor
uint32_t f_NeoPixelGroup_getColor(struct NeoPixelGroup_Instance *_instance, uint8_t red, uint8_t green, uint8_t blue) {
return strip.Color(red, green, blue);
}
// Definition of function updateNeopixels
void f_NeoPixelGroup_updateNeopixels(struct NeoPixelGroup_Instance *_instance) {
strip.show();
}
// Definition of function breath_brightness
uint8_t f_NeoPixelGroup_breath_brightness(struct NeoPixelGroup_Instance *_instance, uint8_t time, uint8_t max) {
if(time > max / 2) {
return f_NeoPixelGroup_breath_brightness(_instance, max - time, max);

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
uint8_t f_NeoPixelGroup_rotate_brightness(struct NeoPixelGroup_Instance *_instance, uint8_t angle, uint8_t max) {
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
uint8_t f_NeoPixelGroup_pulse_brightness(struct NeoPixelGroup_Instance *_instance, uint8_t time) {
if(time < PULSE_LEN) {
return pulse[time];

} else {
return pulse[0];

}
}
// Definition of function blink_brightness
uint8_t f_NeoPixelGroup_blink_brightness(struct NeoPixelGroup_Instance *_instance, uint8_t time) {
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
void f_NeoPixelGroup_initializeNeopixels(struct NeoPixelGroup_Instance *_instance) {
strip = Adafruit_NeoPixel(_instance->NeoPixelGroup_neopixel_total_count_var, _instance->NeoPixelGroup_neopixel_pin_var, NEO_GRBW + NEO_KHZ800);
		 strip.begin();
		 strip.setBrightness(255);
		 strip.show();
;uint32_t color = f_NeoPixelGroup_getColor(_instance, 0, 50, 255);
f_NeoPixelGroup_setPixelColor(_instance, _instance->NeoPixelGroup_neopixel_total_count_var, color);
f_NeoPixelGroup_updateNeopixels(_instance);
}

// Sessions functionss:


// On Entry Actions:
void NeoPixelGroup_NeoPixelStateChart_OnEntry(int state, struct NeoPixelGroup_Instance *_instance) {
switch(state) {
case NEOPIXELGROUP_NEOPIXELSTATECHART_STATE:{
_instance->NeoPixelGroup_NeoPixelStateChart_State = NEOPIXELGROUP_NEOPIXELSTATECHART_PULSE_STATE;
f_NeoPixelGroup_initializeNeopixels(_instance);
NeoPixelGroup_NeoPixelStateChart_OnEntry(_instance->NeoPixelGroup_NeoPixelStateChart_State, _instance);
break;
}
case NEOPIXELGROUP_NEOPIXELSTATECHART_OFF_STATE:{
;uint8_t i = _instance->NeoPixelGroup_neopixel_first_var;
;uint32_t color = f_NeoPixelGroup_getColor(_instance, 0, 0, 0);
while(i <= _instance->NeoPixelGroup_neopixel_last_var) {
f_NeoPixelGroup_setPixelColor(_instance, i, color);
i = i + 1;

}
f_NeoPixelGroup_updateNeopixels(_instance);
break;
}
case NEOPIXELGROUP_NEOPIXELSTATECHART_SOLID_STATE:{
break;
}
case NEOPIXELGROUP_NEOPIXELSTATECHART_ROTATE_STATE:{
;uint8_t i = _instance->NeoPixelGroup_neopixel_first_var;
;uint32_t color = f_NeoPixelGroup_getColor(_instance, _instance->NeoPixelGroup_NeoPixelStateChart_color_r_var, _instance->NeoPixelGroup_NeoPixelStateChart_color_g_var, _instance->NeoPixelGroup_NeoPixelStateChart_color_b_var);
while(i <= _instance->NeoPixelGroup_neopixel_last_var) {
f_NeoPixelGroup_setPixelColor(_instance, i, color);
i = i + 1;

}
f_NeoPixelGroup_updateNeopixels(_instance);
break;
}
case NEOPIXELGROUP_NEOPIXELSTATECHART_BREATH_STATE:{
break;
}
case NEOPIXELGROUP_NEOPIXELSTATECHART_PULSE_STATE:{
break;
}
case NEOPIXELGROUP_NEOPIXELSTATECHART_BLINKALL_STATE:{
break;
}
default: break;
}
}

// On Exit Actions:
void NeoPixelGroup_NeoPixelStateChart_OnExit(int state, struct NeoPixelGroup_Instance *_instance) {
switch(state) {
case NEOPIXELGROUP_NEOPIXELSTATECHART_STATE:{
NeoPixelGroup_NeoPixelStateChart_OnExit(_instance->NeoPixelGroup_NeoPixelStateChart_State, _instance);
break;}
case NEOPIXELGROUP_NEOPIXELSTATECHART_OFF_STATE:{
break;}
case NEOPIXELGROUP_NEOPIXELSTATECHART_SOLID_STATE:{
break;}
case NEOPIXELGROUP_NEOPIXELSTATECHART_ROTATE_STATE:{
break;}
case NEOPIXELGROUP_NEOPIXELSTATECHART_BREATH_STATE:{
break;}
case NEOPIXELGROUP_NEOPIXELSTATECHART_PULSE_STATE:{
break;}
case NEOPIXELGROUP_NEOPIXELSTATECHART_BLINKALL_STATE:{
break;}
default: break;
}
}

// Event Handlers for incoming messages:
void NeoPixelGroup_handle_ctrl_pulse(struct NeoPixelGroup_Instance *_instance) {
if(!(_instance->active)) return;
//Region NeoPixelStateChart
uint8_t NeoPixelGroup_NeoPixelStateChart_State_event_consumed = 0;
if (_instance->NeoPixelGroup_NeoPixelStateChart_State == NEOPIXELGROUP_NEOPIXELSTATECHART_OFF_STATE) {
if (NeoPixelGroup_NeoPixelStateChart_State_event_consumed == 0 && 1) {
NeoPixelGroup_NeoPixelStateChart_OnExit(NEOPIXELGROUP_NEOPIXELSTATECHART_OFF_STATE, _instance);
_instance->NeoPixelGroup_NeoPixelStateChart_State = NEOPIXELGROUP_NEOPIXELSTATECHART_PULSE_STATE;
NeoPixelGroup_NeoPixelStateChart_OnEntry(NEOPIXELGROUP_NEOPIXELSTATECHART_PULSE_STATE, _instance);
NeoPixelGroup_NeoPixelStateChart_State_event_consumed = 1;
}
}
//End Region NeoPixelStateChart
//End dsregion NeoPixelStateChart
//Session list: 
}
void NeoPixelGroup_handle_ctrl_setColor(struct NeoPixelGroup_Instance *_instance, uint8_t red, uint8_t green, uint8_t blue) {
if(!(_instance->active)) return;
//Region NeoPixelStateChart
uint8_t NeoPixelGroup_NeoPixelStateChart_State_event_consumed = 0;
//End Region NeoPixelStateChart
//End dsregion NeoPixelStateChart
//Session list: 
if (1) {
_instance->NeoPixelGroup_NeoPixelStateChart_color_r_var = red;
_instance->NeoPixelGroup_NeoPixelStateChart_color_g_var = green;
_instance->NeoPixelGroup_NeoPixelStateChart_color_b_var = blue;
NeoPixelGroup_NeoPixelStateChart_State_event_consumed = 1;
}
}
void NeoPixelGroup_handle_ctrl_breath(struct NeoPixelGroup_Instance *_instance) {
if(!(_instance->active)) return;
//Region NeoPixelStateChart
uint8_t NeoPixelGroup_NeoPixelStateChart_State_event_consumed = 0;
if (_instance->NeoPixelGroup_NeoPixelStateChart_State == NEOPIXELGROUP_NEOPIXELSTATECHART_OFF_STATE) {
if (NeoPixelGroup_NeoPixelStateChart_State_event_consumed == 0 && 1) {
NeoPixelGroup_NeoPixelStateChart_OnExit(NEOPIXELGROUP_NEOPIXELSTATECHART_OFF_STATE, _instance);
_instance->NeoPixelGroup_NeoPixelStateChart_State = NEOPIXELGROUP_NEOPIXELSTATECHART_BREATH_STATE;
NeoPixelGroup_NeoPixelStateChart_OnEntry(NEOPIXELGROUP_NEOPIXELSTATECHART_BREATH_STATE, _instance);
NeoPixelGroup_NeoPixelStateChart_State_event_consumed = 1;
}
}
//End Region NeoPixelStateChart
//End dsregion NeoPixelStateChart
//Session list: 
}
void NeoPixelGroup_handle_ctrl_rotate(struct NeoPixelGroup_Instance *_instance, int8_t speed) {
if(!(_instance->active)) return;
//Region NeoPixelStateChart
uint8_t NeoPixelGroup_NeoPixelStateChart_State_event_consumed = 0;
if (_instance->NeoPixelGroup_NeoPixelStateChart_State == NEOPIXELGROUP_NEOPIXELSTATECHART_OFF_STATE) {
if (NeoPixelGroup_NeoPixelStateChart_State_event_consumed == 0 && 1) {
NeoPixelGroup_NeoPixelStateChart_OnExit(NEOPIXELGROUP_NEOPIXELSTATECHART_OFF_STATE, _instance);
_instance->NeoPixelGroup_NeoPixelStateChart_State = NEOPIXELGROUP_NEOPIXELSTATECHART_ROTATE_STATE;
_instance->NeoPixelGroup_NeoPixelStateChart_rotate_speed_var = speed;
NeoPixelGroup_NeoPixelStateChart_OnEntry(NEOPIXELGROUP_NEOPIXELSTATECHART_ROTATE_STATE, _instance);
NeoPixelGroup_NeoPixelStateChart_State_event_consumed = 1;
}
}
//End Region NeoPixelStateChart
//End dsregion NeoPixelStateChart
//Session list: 
}
void NeoPixelGroup_handle_ctrl_solid(struct NeoPixelGroup_Instance *_instance) {
if(!(_instance->active)) return;
//Region NeoPixelStateChart
uint8_t NeoPixelGroup_NeoPixelStateChart_State_event_consumed = 0;
if (_instance->NeoPixelGroup_NeoPixelStateChart_State == NEOPIXELGROUP_NEOPIXELSTATECHART_OFF_STATE) {
if (NeoPixelGroup_NeoPixelStateChart_State_event_consumed == 0 && 1) {
NeoPixelGroup_NeoPixelStateChart_OnExit(NEOPIXELGROUP_NEOPIXELSTATECHART_OFF_STATE, _instance);
_instance->NeoPixelGroup_NeoPixelStateChart_State = NEOPIXELGROUP_NEOPIXELSTATECHART_SOLID_STATE;
NeoPixelGroup_NeoPixelStateChart_OnEntry(NEOPIXELGROUP_NEOPIXELSTATECHART_SOLID_STATE, _instance);
NeoPixelGroup_NeoPixelStateChart_State_event_consumed = 1;
}
}
//End Region NeoPixelStateChart
//End dsregion NeoPixelStateChart
//Session list: 
}
void NeoPixelGroup_handle_ctrl_blink(struct NeoPixelGroup_Instance *_instance) {
if(!(_instance->active)) return;
//Region NeoPixelStateChart
uint8_t NeoPixelGroup_NeoPixelStateChart_State_event_consumed = 0;
if (_instance->NeoPixelGroup_NeoPixelStateChart_State == NEOPIXELGROUP_NEOPIXELSTATECHART_OFF_STATE) {
if (NeoPixelGroup_NeoPixelStateChart_State_event_consumed == 0 && 1) {
NeoPixelGroup_NeoPixelStateChart_OnExit(NEOPIXELGROUP_NEOPIXELSTATECHART_OFF_STATE, _instance);
_instance->NeoPixelGroup_NeoPixelStateChart_State = NEOPIXELGROUP_NEOPIXELSTATECHART_BLINKALL_STATE;
NeoPixelGroup_NeoPixelStateChart_OnEntry(NEOPIXELGROUP_NEOPIXELSTATECHART_BLINKALL_STATE, _instance);
NeoPixelGroup_NeoPixelStateChart_State_event_consumed = 1;
}
}
//End Region NeoPixelStateChart
//End dsregion NeoPixelStateChart
//Session list: 
}
void NeoPixelGroup_handle_ctrl_off(struct NeoPixelGroup_Instance *_instance) {
if(!(_instance->active)) return;
//Region NeoPixelStateChart
uint8_t NeoPixelGroup_NeoPixelStateChart_State_event_consumed = 0;
if (_instance->NeoPixelGroup_NeoPixelStateChart_State == NEOPIXELGROUP_NEOPIXELSTATECHART_SOLID_STATE) {
if (NeoPixelGroup_NeoPixelStateChart_State_event_consumed == 0 && 1) {
NeoPixelGroup_NeoPixelStateChart_OnExit(NEOPIXELGROUP_NEOPIXELSTATECHART_SOLID_STATE, _instance);
_instance->NeoPixelGroup_NeoPixelStateChart_State = NEOPIXELGROUP_NEOPIXELSTATECHART_OFF_STATE;
NeoPixelGroup_NeoPixelStateChart_OnEntry(NEOPIXELGROUP_NEOPIXELSTATECHART_OFF_STATE, _instance);
NeoPixelGroup_NeoPixelStateChart_State_event_consumed = 1;
}
}
else if (_instance->NeoPixelGroup_NeoPixelStateChart_State == NEOPIXELGROUP_NEOPIXELSTATECHART_ROTATE_STATE) {
if (NeoPixelGroup_NeoPixelStateChart_State_event_consumed == 0 && 1) {
NeoPixelGroup_NeoPixelStateChart_OnExit(NEOPIXELGROUP_NEOPIXELSTATECHART_ROTATE_STATE, _instance);
_instance->NeoPixelGroup_NeoPixelStateChart_State = NEOPIXELGROUP_NEOPIXELSTATECHART_OFF_STATE;
NeoPixelGroup_NeoPixelStateChart_OnEntry(NEOPIXELGROUP_NEOPIXELSTATECHART_OFF_STATE, _instance);
NeoPixelGroup_NeoPixelStateChart_State_event_consumed = 1;
}
}
else if (_instance->NeoPixelGroup_NeoPixelStateChart_State == NEOPIXELGROUP_NEOPIXELSTATECHART_BREATH_STATE) {
if (NeoPixelGroup_NeoPixelStateChart_State_event_consumed == 0 && 1) {
NeoPixelGroup_NeoPixelStateChart_OnExit(NEOPIXELGROUP_NEOPIXELSTATECHART_BREATH_STATE, _instance);
_instance->NeoPixelGroup_NeoPixelStateChart_State = NEOPIXELGROUP_NEOPIXELSTATECHART_OFF_STATE;
NeoPixelGroup_NeoPixelStateChart_OnEntry(NEOPIXELGROUP_NEOPIXELSTATECHART_OFF_STATE, _instance);
NeoPixelGroup_NeoPixelStateChart_State_event_consumed = 1;
}
}
else if (_instance->NeoPixelGroup_NeoPixelStateChart_State == NEOPIXELGROUP_NEOPIXELSTATECHART_PULSE_STATE) {
if (NeoPixelGroup_NeoPixelStateChart_State_event_consumed == 0 && 1) {
NeoPixelGroup_NeoPixelStateChart_OnExit(NEOPIXELGROUP_NEOPIXELSTATECHART_PULSE_STATE, _instance);
_instance->NeoPixelGroup_NeoPixelStateChart_State = NEOPIXELGROUP_NEOPIXELSTATECHART_OFF_STATE;
NeoPixelGroup_NeoPixelStateChart_OnEntry(NEOPIXELGROUP_NEOPIXELSTATECHART_OFF_STATE, _instance);
NeoPixelGroup_NeoPixelStateChart_State_event_consumed = 1;
}
}
else if (_instance->NeoPixelGroup_NeoPixelStateChart_State == NEOPIXELGROUP_NEOPIXELSTATECHART_BLINKALL_STATE) {
if (NeoPixelGroup_NeoPixelStateChart_State_event_consumed == 0 && 1) {
NeoPixelGroup_NeoPixelStateChart_OnExit(NEOPIXELGROUP_NEOPIXELSTATECHART_BLINKALL_STATE, _instance);
_instance->NeoPixelGroup_NeoPixelStateChart_State = NEOPIXELGROUP_NEOPIXELSTATECHART_OFF_STATE;
NeoPixelGroup_NeoPixelStateChart_OnEntry(NEOPIXELGROUP_NEOPIXELSTATECHART_OFF_STATE, _instance);
NeoPixelGroup_NeoPixelStateChart_State_event_consumed = 1;
}
}
//End Region NeoPixelStateChart
//End dsregion NeoPixelStateChart
//Session list: 
}
void NeoPixelGroup_handle_clock_fps_clock(struct NeoPixelGroup_Instance *_instance) {
if(!(_instance->active)) return;
//Region NeoPixelStateChart
uint8_t NeoPixelGroup_NeoPixelStateChart_State_event_consumed = 0;
if (_instance->NeoPixelGroup_NeoPixelStateChart_State == NEOPIXELGROUP_NEOPIXELSTATECHART_SOLID_STATE) {
if (NeoPixelGroup_NeoPixelStateChart_State_event_consumed == 0 && 1) {
;uint32_t rcolor = f_NeoPixelGroup_getColor(_instance, _instance->NeoPixelGroup_NeoPixelStateChart_color_r_var, _instance->NeoPixelGroup_NeoPixelStateChart_color_g_var, _instance->NeoPixelGroup_NeoPixelStateChart_color_b_var);
;uint8_t i = _instance->NeoPixelGroup_neopixel_first_var;
while(i <= _instance->NeoPixelGroup_neopixel_last_var) {
f_NeoPixelGroup_setPixelColor(_instance, i, rcolor);
i = i + 1;

}
f_NeoPixelGroup_updateNeopixels(_instance);
NeoPixelGroup_NeoPixelStateChart_State_event_consumed = 1;
}
}
else if (_instance->NeoPixelGroup_NeoPixelStateChart_State == NEOPIXELGROUP_NEOPIXELSTATECHART_ROTATE_STATE) {
if (NeoPixelGroup_NeoPixelStateChart_State_event_consumed == 0 && 1) {
;uint8_t i = _instance->NeoPixelGroup_neopixel_first_var;
while(i <= _instance->NeoPixelGroup_neopixel_last_var) {
;uint16_t pangle = _instance->NeoPixelGroup_NeoPixelStateChart_ROTATE_angle_var + (i * _instance->NeoPixelGroup_NeoPixelStateChart_ROTATE_maxangle_var) / (_instance->NeoPixelGroup_neopixel_last_var - _instance->NeoPixelGroup_neopixel_first_var + 1);
pangle = pangle % _instance->NeoPixelGroup_NeoPixelStateChart_ROTATE_maxangle_var;
;uint8_t bright = f_NeoPixelGroup_rotate_brightness(_instance, pangle, _instance->NeoPixelGroup_NeoPixelStateChart_ROTATE_maxangle_var);
;uint32_t color = f_NeoPixelGroup_getColor(_instance, (_instance->NeoPixelGroup_NeoPixelStateChart_color_r_var * bright) / 256, (_instance->NeoPixelGroup_NeoPixelStateChart_color_g_var * bright) / 256, (_instance->NeoPixelGroup_NeoPixelStateChart_color_b_var * bright) / 256);
f_NeoPixelGroup_setPixelColor(_instance, i, color);
i = i + 1;

}
f_NeoPixelGroup_updateNeopixels(_instance);
_instance->NeoPixelGroup_NeoPixelStateChart_ROTATE_angle_var = _instance->NeoPixelGroup_NeoPixelStateChart_ROTATE_angle_var + _instance->NeoPixelGroup_NeoPixelStateChart_rotate_speed_var;
if(_instance->NeoPixelGroup_NeoPixelStateChart_ROTATE_angle_var < 0) {
_instance->NeoPixelGroup_NeoPixelStateChart_ROTATE_angle_var = _instance->NeoPixelGroup_NeoPixelStateChart_ROTATE_maxangle_var + _instance->NeoPixelGroup_NeoPixelStateChart_ROTATE_angle_var;

}
if(_instance->NeoPixelGroup_NeoPixelStateChart_ROTATE_angle_var > _instance->NeoPixelGroup_NeoPixelStateChart_ROTATE_maxangle_var - 1) {
_instance->NeoPixelGroup_NeoPixelStateChart_ROTATE_angle_var = _instance->NeoPixelGroup_NeoPixelStateChart_ROTATE_angle_var - _instance->NeoPixelGroup_NeoPixelStateChart_ROTATE_maxangle_var;

}
NeoPixelGroup_NeoPixelStateChart_State_event_consumed = 1;
}
}
else if (_instance->NeoPixelGroup_NeoPixelStateChart_State == NEOPIXELGROUP_NEOPIXELSTATECHART_BREATH_STATE) {
if (NeoPixelGroup_NeoPixelStateChart_State_event_consumed == 0 && 1) {
;uint8_t bright = f_NeoPixelGroup_breath_brightness(_instance, _instance->NeoPixelGroup_NeoPixelStateChart_BREATH_counter_var, _instance->NeoPixelGroup_NeoPixelStateChart_BREATH_maxcount_var);
;uint32_t color = f_NeoPixelGroup_getColor(_instance, (_instance->NeoPixelGroup_NeoPixelStateChart_color_r_var * bright) / 256, (_instance->NeoPixelGroup_NeoPixelStateChart_color_g_var * bright) / 256, (_instance->NeoPixelGroup_NeoPixelStateChart_color_b_var * bright) / 256);
;uint8_t i = _instance->NeoPixelGroup_neopixel_first_var;
while(i <= _instance->NeoPixelGroup_neopixel_last_var) {
f_NeoPixelGroup_setPixelColor(_instance, i, color);
i = i + 1;

}
f_NeoPixelGroup_updateNeopixels(_instance);
_instance->NeoPixelGroup_NeoPixelStateChart_BREATH_counter_var = _instance->NeoPixelGroup_NeoPixelStateChart_BREATH_counter_var + 1;
if(_instance->NeoPixelGroup_NeoPixelStateChart_BREATH_counter_var == _instance->NeoPixelGroup_NeoPixelStateChart_BREATH_maxcount_var) {
_instance->NeoPixelGroup_NeoPixelStateChart_BREATH_counter_var = 0;

}
NeoPixelGroup_NeoPixelStateChart_State_event_consumed = 1;
}
}
else if (_instance->NeoPixelGroup_NeoPixelStateChart_State == NEOPIXELGROUP_NEOPIXELSTATECHART_PULSE_STATE) {
if (NeoPixelGroup_NeoPixelStateChart_State_event_consumed == 0 && 1) {
;uint8_t bright = f_NeoPixelGroup_pulse_brightness(_instance, _instance->NeoPixelGroup_NeoPixelStateChart_PULSE_counter_var);
;uint32_t color = f_NeoPixelGroup_getColor(_instance, (_instance->NeoPixelGroup_NeoPixelStateChart_color_r_var * bright) / 256, (_instance->NeoPixelGroup_NeoPixelStateChart_color_g_var * bright) / 256, (_instance->NeoPixelGroup_NeoPixelStateChart_color_b_var * bright) / 256);
;uint8_t i = _instance->NeoPixelGroup_neopixel_first_var;
while(i <= _instance->NeoPixelGroup_neopixel_last_var) {
f_NeoPixelGroup_setPixelColor(_instance, i, color);
i = i + 1;

}
f_NeoPixelGroup_updateNeopixels(_instance);
_instance->NeoPixelGroup_NeoPixelStateChart_PULSE_counter_var = _instance->NeoPixelGroup_NeoPixelStateChart_PULSE_counter_var + 1;
if(_instance->NeoPixelGroup_NeoPixelStateChart_PULSE_counter_var == _instance->NeoPixelGroup_NeoPixelStateChart_PULSE_maxcount_var) {
_instance->NeoPixelGroup_NeoPixelStateChart_PULSE_counter_var = 0;

}
NeoPixelGroup_NeoPixelStateChart_State_event_consumed = 1;
}
}
else if (_instance->NeoPixelGroup_NeoPixelStateChart_State == NEOPIXELGROUP_NEOPIXELSTATECHART_BLINKALL_STATE) {
if (NeoPixelGroup_NeoPixelStateChart_State_event_consumed == 0 && 1) {
;uint8_t bright = f_NeoPixelGroup_blink_brightness(_instance, _instance->NeoPixelGroup_NeoPixelStateChart_BLINKALL_counter_var);
;uint32_t rcolor = f_NeoPixelGroup_getColor(_instance, (_instance->NeoPixelGroup_NeoPixelStateChart_color_r_var * bright) / 256, (_instance->NeoPixelGroup_NeoPixelStateChart_color_g_var * bright) / 256, (_instance->NeoPixelGroup_NeoPixelStateChart_color_b_var * bright) / 256);
;uint8_t i = _instance->NeoPixelGroup_neopixel_first_var;
while(i <= _instance->NeoPixelGroup_neopixel_last_var) {
f_NeoPixelGroup_setPixelColor(_instance, i, rcolor);
i = i + 1;

}
f_NeoPixelGroup_updateNeopixels(_instance);
_instance->NeoPixelGroup_NeoPixelStateChart_BLINKALL_counter_var = _instance->NeoPixelGroup_NeoPixelStateChart_BLINKALL_counter_var + 1;
if(_instance->NeoPixelGroup_NeoPixelStateChart_BLINKALL_counter_var == _instance->NeoPixelGroup_NeoPixelStateChart_BLINKALL_maxcount_var) {
_instance->NeoPixelGroup_NeoPixelStateChart_BLINKALL_counter_var = 0;

}
NeoPixelGroup_NeoPixelStateChart_State_event_consumed = 1;
}
}
//End Region NeoPixelStateChart
//End dsregion NeoPixelStateChart
//Session list: 
}

// Observers for outgoing messages:



/*****************************************************************************
 * Implementation for type : Tryggi
 *****************************************************************************/

// Declaration of prototypes:
//Prototypes: State Machine
void Tryggi_TryggiSC_OnExit(int state, struct Tryggi_Instance *_instance);
//Prototypes: Message Sending
void Tryggi_send_ctrl_pong_tryggy(struct Tryggi_Instance *_instance);
void Tryggi_send_timer_timer_start(struct Tryggi_Instance *_instance, uint8_t id, uint32_t time);
void Tryggi_send_timer_timer_cancel(struct Tryggi_Instance *_instance, uint8_t id);
void Tryggi_send_head_setColor(struct Tryggi_Instance *_instance, uint8_t red, uint8_t green, uint8_t blue);
void Tryggi_send_head_off(struct Tryggi_Instance *_instance);
void Tryggi_send_head_pulse(struct Tryggi_Instance *_instance);
void Tryggi_send_head_rotate(struct Tryggi_Instance *_instance, int8_t speed);
void Tryggi_send_head_breath(struct Tryggi_Instance *_instance);
void Tryggi_send_head_solid(struct Tryggi_Instance *_instance);
void Tryggi_send_head_blink(struct Tryggi_Instance *_instance);
void Tryggi_send_heart_setColor(struct Tryggi_Instance *_instance, uint8_t red, uint8_t green, uint8_t blue);
void Tryggi_send_heart_off(struct Tryggi_Instance *_instance);
void Tryggi_send_heart_pulse(struct Tryggi_Instance *_instance);
void Tryggi_send_heart_rotate(struct Tryggi_Instance *_instance, int8_t speed);
void Tryggi_send_heart_breath(struct Tryggi_Instance *_instance);
void Tryggi_send_heart_solid(struct Tryggi_Instance *_instance);
void Tryggi_send_heart_blink(struct Tryggi_Instance *_instance);
//Prototypes: Function
void f_Tryggi_neo_standby(struct Tryggi_Instance *_instance);
void f_Tryggi_neo_clear_status(struct Tryggi_Instance *_instance);
void f_Tryggi_neo_ping_lost(struct Tryggi_Instance *_instance);
void f_Tryggi_neo_success(struct Tryggi_Instance *_instance);
void f_Tryggi_neo_error(struct Tryggi_Instance *_instance);
void f_Tryggi_neo_bluetooth_act(struct Tryggi_Instance *_instance);
void f_Tryggi_neo_tellucloud_act(struct Tryggi_Instance *_instance);
void f_Tryggi_got_ping(struct Tryggi_Instance *_instance);
// Declaration of functions:
// Definition of function neo_standby
void f_Tryggi_neo_standby(struct Tryggi_Instance *_instance) {
Tryggi_send_head_off(_instance);
Tryggi_send_heart_off(_instance);
Tryggi_send_heart_setColor(_instance, 0, 40, 255);
Tryggi_send_heart_pulse(_instance);
}
// Definition of function neo_clear_status
void f_Tryggi_neo_clear_status(struct Tryggi_Instance *_instance) {
Tryggi_send_head_off(_instance);
}
// Definition of function neo_ping_lost
void f_Tryggi_neo_ping_lost(struct Tryggi_Instance *_instance) {
Tryggi_send_head_off(_instance);
Tryggi_send_heart_off(_instance);
Tryggi_send_heart_setColor(_instance, 255, 32, 0);
Tryggi_send_heart_blink(_instance);
}
// Definition of function neo_success
void f_Tryggi_neo_success(struct Tryggi_Instance *_instance) {
Tryggi_send_head_off(_instance);
Tryggi_send_head_setColor(_instance, 0, 255, 40);
Tryggi_send_head_solid(_instance);
}
// Definition of function neo_error
void f_Tryggi_neo_error(struct Tryggi_Instance *_instance) {
Tryggi_send_head_off(_instance);
Tryggi_send_head_setColor(_instance, 255, 40, 0);
Tryggi_send_head_blink(_instance);
}
// Definition of function neo_bluetooth_act
void f_Tryggi_neo_bluetooth_act(struct Tryggi_Instance *_instance) {
Tryggi_send_head_off(_instance);
Tryggi_send_head_setColor(_instance, 0, 50, 255);
Tryggi_send_head_blink(_instance);
}
// Definition of function neo_tellucloud_act
void f_Tryggi_neo_tellucloud_act(struct Tryggi_Instance *_instance) {
Tryggi_send_head_off(_instance);
Tryggi_send_head_setColor(_instance, 160, 140, 0);
Tryggi_send_head_blink(_instance);
}
// Definition of function got_ping
void f_Tryggi_got_ping(struct Tryggi_Instance *_instance) {
Tryggi_send_timer_timer_cancel(_instance, _instance->Tryggi_TIMERID_var);
Tryggi_send_ctrl_pong_tryggy(_instance);
Tryggi_send_timer_timer_start(_instance, _instance->Tryggi_TIMERID_var, 5000);
}

// Sessions functionss:


// On Entry Actions:
void Tryggi_TryggiSC_OnEntry(int state, struct Tryggi_Instance *_instance) {
switch(state) {
case TRYGGI_TRYGGISC_STATE:{
_instance->Tryggi_TryggiSC_State = TRYGGI_TRYGGISC_WAITINGFORPING_STATE;
Tryggi_TryggiSC_OnEntry(_instance->Tryggi_TryggiSC_State, _instance);
break;
}
case TRYGGI_TRYGGISC_WAITINGFORPING_STATE:{
f_Tryggi_neo_ping_lost(_instance);
break;
}
case TRYGGI_TRYGGISC_CONNECTED_STATE:{
f_Tryggi_neo_standby(_instance);
break;
}
default: break;
}
}

// On Exit Actions:
void Tryggi_TryggiSC_OnExit(int state, struct Tryggi_Instance *_instance) {
switch(state) {
case TRYGGI_TRYGGISC_STATE:{
Tryggi_TryggiSC_OnExit(_instance->Tryggi_TryggiSC_State, _instance);
break;}
case TRYGGI_TRYGGISC_WAITINGFORPING_STATE:{
break;}
case TRYGGI_TRYGGISC_CONNECTED_STATE:{
break;}
default: break;
}
}

// Event Handlers for incoming messages:
void Tryggi_handle_timer_timer_timeout(struct Tryggi_Instance *_instance, uint8_t id) {
if(!(_instance->active)) return;
//Region TryggiSC
uint8_t Tryggi_TryggiSC_State_event_consumed = 0;
if (_instance->Tryggi_TryggiSC_State == TRYGGI_TRYGGISC_CONNECTED_STATE) {
if (Tryggi_TryggiSC_State_event_consumed == 0 && id == _instance->Tryggi_TIMERID_var) {
Tryggi_TryggiSC_OnExit(TRYGGI_TRYGGISC_CONNECTED_STATE, _instance);
_instance->Tryggi_TryggiSC_State = TRYGGI_TRYGGISC_WAITINGFORPING_STATE;
Tryggi_TryggiSC_OnEntry(TRYGGI_TRYGGISC_WAITINGFORPING_STATE, _instance);
Tryggi_TryggiSC_State_event_consumed = 1;
}
}
//End Region TryggiSC
//End dsregion TryggiSC
//Session list: 
}
void Tryggi_handle_ctrl_ping_tryggy(struct Tryggi_Instance *_instance) {
if(!(_instance->active)) return;
//Region TryggiSC
uint8_t Tryggi_TryggiSC_State_event_consumed = 0;
if (_instance->Tryggi_TryggiSC_State == TRYGGI_TRYGGISC_WAITINGFORPING_STATE) {
if (Tryggi_TryggiSC_State_event_consumed == 0 && 1) {
Tryggi_TryggiSC_OnExit(TRYGGI_TRYGGISC_WAITINGFORPING_STATE, _instance);
_instance->Tryggi_TryggiSC_State = TRYGGI_TRYGGISC_CONNECTED_STATE;
f_Tryggi_got_ping(_instance);
Tryggi_TryggiSC_OnEntry(TRYGGI_TRYGGISC_CONNECTED_STATE, _instance);
Tryggi_TryggiSC_State_event_consumed = 1;
}
}
else if (_instance->Tryggi_TryggiSC_State == TRYGGI_TRYGGISC_CONNECTED_STATE) {
if (Tryggi_TryggiSC_State_event_consumed == 0 && 1) {
f_Tryggi_got_ping(_instance);
Tryggi_TryggiSC_State_event_consumed = 1;
}
}
//End Region TryggiSC
//End dsregion TryggiSC
//Session list: 
}
void Tryggi_handle_ctrl_clear_status(struct Tryggi_Instance *_instance) {
if(!(_instance->active)) return;
//Region TryggiSC
uint8_t Tryggi_TryggiSC_State_event_consumed = 0;
if (_instance->Tryggi_TryggiSC_State == TRYGGI_TRYGGISC_CONNECTED_STATE) {
if (Tryggi_TryggiSC_State_event_consumed == 0 && 1) {
f_Tryggi_neo_clear_status(_instance);
Tryggi_TryggiSC_State_event_consumed = 1;
}
}
//End Region TryggiSC
//End dsregion TryggiSC
//Session list: 
}
void Tryggi_handle_ctrl_bluetooth_act(struct Tryggi_Instance *_instance) {
if(!(_instance->active)) return;
//Region TryggiSC
uint8_t Tryggi_TryggiSC_State_event_consumed = 0;
if (_instance->Tryggi_TryggiSC_State == TRYGGI_TRYGGISC_CONNECTED_STATE) {
if (Tryggi_TryggiSC_State_event_consumed == 0 && 1) {
f_Tryggi_neo_bluetooth_act(_instance);
Tryggi_TryggiSC_State_event_consumed = 1;
}
}
//End Region TryggiSC
//End dsregion TryggiSC
//Session list: 
}
void Tryggi_handle_ctrl_tellucloud_act(struct Tryggi_Instance *_instance) {
if(!(_instance->active)) return;
//Region TryggiSC
uint8_t Tryggi_TryggiSC_State_event_consumed = 0;
if (_instance->Tryggi_TryggiSC_State == TRYGGI_TRYGGISC_CONNECTED_STATE) {
if (Tryggi_TryggiSC_State_event_consumed == 0 && 1) {
f_Tryggi_neo_tellucloud_act(_instance);
Tryggi_TryggiSC_State_event_consumed = 1;
}
}
//End Region TryggiSC
//End dsregion TryggiSC
//Session list: 
}
void Tryggi_handle_ctrl_show_success(struct Tryggi_Instance *_instance) {
if(!(_instance->active)) return;
//Region TryggiSC
uint8_t Tryggi_TryggiSC_State_event_consumed = 0;
if (_instance->Tryggi_TryggiSC_State == TRYGGI_TRYGGISC_CONNECTED_STATE) {
if (Tryggi_TryggiSC_State_event_consumed == 0 && 1) {
f_Tryggi_neo_success(_instance);
Tryggi_TryggiSC_State_event_consumed = 1;
}
}
//End Region TryggiSC
//End dsregion TryggiSC
//Session list: 
}
void Tryggi_handle_ctrl_show_error(struct Tryggi_Instance *_instance) {
if(!(_instance->active)) return;
//Region TryggiSC
uint8_t Tryggi_TryggiSC_State_event_consumed = 0;
if (_instance->Tryggi_TryggiSC_State == TRYGGI_TRYGGISC_CONNECTED_STATE) {
if (Tryggi_TryggiSC_State_event_consumed == 0 && 1) {
f_Tryggi_neo_error(_instance);
Tryggi_TryggiSC_State_event_consumed = 1;
}
}
//End Region TryggiSC
//End dsregion TryggiSC
//Session list: 
}

// Observers for outgoing messages:
void (*external_Tryggi_send_ctrl_pong_tryggy_listener)(struct Tryggi_Instance *)= 0x0;
void (*Tryggi_send_ctrl_pong_tryggy_listener)(struct Tryggi_Instance *)= 0x0;
void register_external_Tryggi_send_ctrl_pong_tryggy_listener(void (*_listener)(struct Tryggi_Instance *)){
external_Tryggi_send_ctrl_pong_tryggy_listener = _listener;
}
void register_Tryggi_send_ctrl_pong_tryggy_listener(void (*_listener)(struct Tryggi_Instance *)){
Tryggi_send_ctrl_pong_tryggy_listener = _listener;
}
void Tryggi_send_ctrl_pong_tryggy(struct Tryggi_Instance *_instance){
if (Tryggi_send_ctrl_pong_tryggy_listener != 0x0) Tryggi_send_ctrl_pong_tryggy_listener(_instance);
if (external_Tryggi_send_ctrl_pong_tryggy_listener != 0x0) external_Tryggi_send_ctrl_pong_tryggy_listener(_instance);
;
}
void (*external_Tryggi_send_timer_timer_start_listener)(struct Tryggi_Instance *, uint8_t, uint32_t)= 0x0;
void (*Tryggi_send_timer_timer_start_listener)(struct Tryggi_Instance *, uint8_t, uint32_t)= 0x0;
void register_external_Tryggi_send_timer_timer_start_listener(void (*_listener)(struct Tryggi_Instance *, uint8_t, uint32_t)){
external_Tryggi_send_timer_timer_start_listener = _listener;
}
void register_Tryggi_send_timer_timer_start_listener(void (*_listener)(struct Tryggi_Instance *, uint8_t, uint32_t)){
Tryggi_send_timer_timer_start_listener = _listener;
}
void Tryggi_send_timer_timer_start(struct Tryggi_Instance *_instance, uint8_t id, uint32_t time){
if (Tryggi_send_timer_timer_start_listener != 0x0) Tryggi_send_timer_timer_start_listener(_instance, id, time);
if (external_Tryggi_send_timer_timer_start_listener != 0x0) external_Tryggi_send_timer_timer_start_listener(_instance, id, time);
;
}
void (*external_Tryggi_send_timer_timer_cancel_listener)(struct Tryggi_Instance *, uint8_t)= 0x0;
void (*Tryggi_send_timer_timer_cancel_listener)(struct Tryggi_Instance *, uint8_t)= 0x0;
void register_external_Tryggi_send_timer_timer_cancel_listener(void (*_listener)(struct Tryggi_Instance *, uint8_t)){
external_Tryggi_send_timer_timer_cancel_listener = _listener;
}
void register_Tryggi_send_timer_timer_cancel_listener(void (*_listener)(struct Tryggi_Instance *, uint8_t)){
Tryggi_send_timer_timer_cancel_listener = _listener;
}
void Tryggi_send_timer_timer_cancel(struct Tryggi_Instance *_instance, uint8_t id){
if (Tryggi_send_timer_timer_cancel_listener != 0x0) Tryggi_send_timer_timer_cancel_listener(_instance, id);
if (external_Tryggi_send_timer_timer_cancel_listener != 0x0) external_Tryggi_send_timer_timer_cancel_listener(_instance, id);
;
}
void (*external_Tryggi_send_head_setColor_listener)(struct Tryggi_Instance *, uint8_t, uint8_t, uint8_t)= 0x0;
void (*Tryggi_send_head_setColor_listener)(struct Tryggi_Instance *, uint8_t, uint8_t, uint8_t)= 0x0;
void register_external_Tryggi_send_head_setColor_listener(void (*_listener)(struct Tryggi_Instance *, uint8_t, uint8_t, uint8_t)){
external_Tryggi_send_head_setColor_listener = _listener;
}
void register_Tryggi_send_head_setColor_listener(void (*_listener)(struct Tryggi_Instance *, uint8_t, uint8_t, uint8_t)){
Tryggi_send_head_setColor_listener = _listener;
}
void Tryggi_send_head_setColor(struct Tryggi_Instance *_instance, uint8_t red, uint8_t green, uint8_t blue){
if (Tryggi_send_head_setColor_listener != 0x0) Tryggi_send_head_setColor_listener(_instance, red, green, blue);
if (external_Tryggi_send_head_setColor_listener != 0x0) external_Tryggi_send_head_setColor_listener(_instance, red, green, blue);
;
}
void (*external_Tryggi_send_head_off_listener)(struct Tryggi_Instance *)= 0x0;
void (*Tryggi_send_head_off_listener)(struct Tryggi_Instance *)= 0x0;
void register_external_Tryggi_send_head_off_listener(void (*_listener)(struct Tryggi_Instance *)){
external_Tryggi_send_head_off_listener = _listener;
}
void register_Tryggi_send_head_off_listener(void (*_listener)(struct Tryggi_Instance *)){
Tryggi_send_head_off_listener = _listener;
}
void Tryggi_send_head_off(struct Tryggi_Instance *_instance){
if (Tryggi_send_head_off_listener != 0x0) Tryggi_send_head_off_listener(_instance);
if (external_Tryggi_send_head_off_listener != 0x0) external_Tryggi_send_head_off_listener(_instance);
;
}
void (*external_Tryggi_send_head_pulse_listener)(struct Tryggi_Instance *)= 0x0;
void (*Tryggi_send_head_pulse_listener)(struct Tryggi_Instance *)= 0x0;
void register_external_Tryggi_send_head_pulse_listener(void (*_listener)(struct Tryggi_Instance *)){
external_Tryggi_send_head_pulse_listener = _listener;
}
void register_Tryggi_send_head_pulse_listener(void (*_listener)(struct Tryggi_Instance *)){
Tryggi_send_head_pulse_listener = _listener;
}
void Tryggi_send_head_pulse(struct Tryggi_Instance *_instance){
if (Tryggi_send_head_pulse_listener != 0x0) Tryggi_send_head_pulse_listener(_instance);
if (external_Tryggi_send_head_pulse_listener != 0x0) external_Tryggi_send_head_pulse_listener(_instance);
;
}
void (*external_Tryggi_send_head_rotate_listener)(struct Tryggi_Instance *, int8_t)= 0x0;
void (*Tryggi_send_head_rotate_listener)(struct Tryggi_Instance *, int8_t)= 0x0;
void register_external_Tryggi_send_head_rotate_listener(void (*_listener)(struct Tryggi_Instance *, int8_t)){
external_Tryggi_send_head_rotate_listener = _listener;
}
void register_Tryggi_send_head_rotate_listener(void (*_listener)(struct Tryggi_Instance *, int8_t)){
Tryggi_send_head_rotate_listener = _listener;
}
void Tryggi_send_head_rotate(struct Tryggi_Instance *_instance, int8_t speed){
if (Tryggi_send_head_rotate_listener != 0x0) Tryggi_send_head_rotate_listener(_instance, speed);
if (external_Tryggi_send_head_rotate_listener != 0x0) external_Tryggi_send_head_rotate_listener(_instance, speed);
;
}
void (*external_Tryggi_send_head_breath_listener)(struct Tryggi_Instance *)= 0x0;
void (*Tryggi_send_head_breath_listener)(struct Tryggi_Instance *)= 0x0;
void register_external_Tryggi_send_head_breath_listener(void (*_listener)(struct Tryggi_Instance *)){
external_Tryggi_send_head_breath_listener = _listener;
}
void register_Tryggi_send_head_breath_listener(void (*_listener)(struct Tryggi_Instance *)){
Tryggi_send_head_breath_listener = _listener;
}
void Tryggi_send_head_breath(struct Tryggi_Instance *_instance){
if (Tryggi_send_head_breath_listener != 0x0) Tryggi_send_head_breath_listener(_instance);
if (external_Tryggi_send_head_breath_listener != 0x0) external_Tryggi_send_head_breath_listener(_instance);
;
}
void (*external_Tryggi_send_head_solid_listener)(struct Tryggi_Instance *)= 0x0;
void (*Tryggi_send_head_solid_listener)(struct Tryggi_Instance *)= 0x0;
void register_external_Tryggi_send_head_solid_listener(void (*_listener)(struct Tryggi_Instance *)){
external_Tryggi_send_head_solid_listener = _listener;
}
void register_Tryggi_send_head_solid_listener(void (*_listener)(struct Tryggi_Instance *)){
Tryggi_send_head_solid_listener = _listener;
}
void Tryggi_send_head_solid(struct Tryggi_Instance *_instance){
if (Tryggi_send_head_solid_listener != 0x0) Tryggi_send_head_solid_listener(_instance);
if (external_Tryggi_send_head_solid_listener != 0x0) external_Tryggi_send_head_solid_listener(_instance);
;
}
void (*external_Tryggi_send_head_blink_listener)(struct Tryggi_Instance *)= 0x0;
void (*Tryggi_send_head_blink_listener)(struct Tryggi_Instance *)= 0x0;
void register_external_Tryggi_send_head_blink_listener(void (*_listener)(struct Tryggi_Instance *)){
external_Tryggi_send_head_blink_listener = _listener;
}
void register_Tryggi_send_head_blink_listener(void (*_listener)(struct Tryggi_Instance *)){
Tryggi_send_head_blink_listener = _listener;
}
void Tryggi_send_head_blink(struct Tryggi_Instance *_instance){
if (Tryggi_send_head_blink_listener != 0x0) Tryggi_send_head_blink_listener(_instance);
if (external_Tryggi_send_head_blink_listener != 0x0) external_Tryggi_send_head_blink_listener(_instance);
;
}
void (*external_Tryggi_send_heart_setColor_listener)(struct Tryggi_Instance *, uint8_t, uint8_t, uint8_t)= 0x0;
void (*Tryggi_send_heart_setColor_listener)(struct Tryggi_Instance *, uint8_t, uint8_t, uint8_t)= 0x0;
void register_external_Tryggi_send_heart_setColor_listener(void (*_listener)(struct Tryggi_Instance *, uint8_t, uint8_t, uint8_t)){
external_Tryggi_send_heart_setColor_listener = _listener;
}
void register_Tryggi_send_heart_setColor_listener(void (*_listener)(struct Tryggi_Instance *, uint8_t, uint8_t, uint8_t)){
Tryggi_send_heart_setColor_listener = _listener;
}
void Tryggi_send_heart_setColor(struct Tryggi_Instance *_instance, uint8_t red, uint8_t green, uint8_t blue){
if (Tryggi_send_heart_setColor_listener != 0x0) Tryggi_send_heart_setColor_listener(_instance, red, green, blue);
if (external_Tryggi_send_heart_setColor_listener != 0x0) external_Tryggi_send_heart_setColor_listener(_instance, red, green, blue);
;
}
void (*external_Tryggi_send_heart_off_listener)(struct Tryggi_Instance *)= 0x0;
void (*Tryggi_send_heart_off_listener)(struct Tryggi_Instance *)= 0x0;
void register_external_Tryggi_send_heart_off_listener(void (*_listener)(struct Tryggi_Instance *)){
external_Tryggi_send_heart_off_listener = _listener;
}
void register_Tryggi_send_heart_off_listener(void (*_listener)(struct Tryggi_Instance *)){
Tryggi_send_heart_off_listener = _listener;
}
void Tryggi_send_heart_off(struct Tryggi_Instance *_instance){
if (Tryggi_send_heart_off_listener != 0x0) Tryggi_send_heart_off_listener(_instance);
if (external_Tryggi_send_heart_off_listener != 0x0) external_Tryggi_send_heart_off_listener(_instance);
;
}
void (*external_Tryggi_send_heart_pulse_listener)(struct Tryggi_Instance *)= 0x0;
void (*Tryggi_send_heart_pulse_listener)(struct Tryggi_Instance *)= 0x0;
void register_external_Tryggi_send_heart_pulse_listener(void (*_listener)(struct Tryggi_Instance *)){
external_Tryggi_send_heart_pulse_listener = _listener;
}
void register_Tryggi_send_heart_pulse_listener(void (*_listener)(struct Tryggi_Instance *)){
Tryggi_send_heart_pulse_listener = _listener;
}
void Tryggi_send_heart_pulse(struct Tryggi_Instance *_instance){
if (Tryggi_send_heart_pulse_listener != 0x0) Tryggi_send_heart_pulse_listener(_instance);
if (external_Tryggi_send_heart_pulse_listener != 0x0) external_Tryggi_send_heart_pulse_listener(_instance);
;
}
void (*external_Tryggi_send_heart_rotate_listener)(struct Tryggi_Instance *, int8_t)= 0x0;
void (*Tryggi_send_heart_rotate_listener)(struct Tryggi_Instance *, int8_t)= 0x0;
void register_external_Tryggi_send_heart_rotate_listener(void (*_listener)(struct Tryggi_Instance *, int8_t)){
external_Tryggi_send_heart_rotate_listener = _listener;
}
void register_Tryggi_send_heart_rotate_listener(void (*_listener)(struct Tryggi_Instance *, int8_t)){
Tryggi_send_heart_rotate_listener = _listener;
}
void Tryggi_send_heart_rotate(struct Tryggi_Instance *_instance, int8_t speed){
if (Tryggi_send_heart_rotate_listener != 0x0) Tryggi_send_heart_rotate_listener(_instance, speed);
if (external_Tryggi_send_heart_rotate_listener != 0x0) external_Tryggi_send_heart_rotate_listener(_instance, speed);
;
}
void (*external_Tryggi_send_heart_breath_listener)(struct Tryggi_Instance *)= 0x0;
void (*Tryggi_send_heart_breath_listener)(struct Tryggi_Instance *)= 0x0;
void register_external_Tryggi_send_heart_breath_listener(void (*_listener)(struct Tryggi_Instance *)){
external_Tryggi_send_heart_breath_listener = _listener;
}
void register_Tryggi_send_heart_breath_listener(void (*_listener)(struct Tryggi_Instance *)){
Tryggi_send_heart_breath_listener = _listener;
}
void Tryggi_send_heart_breath(struct Tryggi_Instance *_instance){
if (Tryggi_send_heart_breath_listener != 0x0) Tryggi_send_heart_breath_listener(_instance);
if (external_Tryggi_send_heart_breath_listener != 0x0) external_Tryggi_send_heart_breath_listener(_instance);
;
}
void (*external_Tryggi_send_heart_solid_listener)(struct Tryggi_Instance *)= 0x0;
void (*Tryggi_send_heart_solid_listener)(struct Tryggi_Instance *)= 0x0;
void register_external_Tryggi_send_heart_solid_listener(void (*_listener)(struct Tryggi_Instance *)){
external_Tryggi_send_heart_solid_listener = _listener;
}
void register_Tryggi_send_heart_solid_listener(void (*_listener)(struct Tryggi_Instance *)){
Tryggi_send_heart_solid_listener = _listener;
}
void Tryggi_send_heart_solid(struct Tryggi_Instance *_instance){
if (Tryggi_send_heart_solid_listener != 0x0) Tryggi_send_heart_solid_listener(_instance);
if (external_Tryggi_send_heart_solid_listener != 0x0) external_Tryggi_send_heart_solid_listener(_instance);
;
}
void (*external_Tryggi_send_heart_blink_listener)(struct Tryggi_Instance *)= 0x0;
void (*Tryggi_send_heart_blink_listener)(struct Tryggi_Instance *)= 0x0;
void register_external_Tryggi_send_heart_blink_listener(void (*_listener)(struct Tryggi_Instance *)){
external_Tryggi_send_heart_blink_listener = _listener;
}
void register_Tryggi_send_heart_blink_listener(void (*_listener)(struct Tryggi_Instance *)){
Tryggi_send_heart_blink_listener = _listener;
}
void Tryggi_send_heart_blink(struct Tryggi_Instance *_instance){
if (Tryggi_send_heart_blink_listener != 0x0) Tryggi_send_heart_blink_listener(_instance);
if (external_Tryggi_send_heart_blink_listener != 0x0) external_Tryggi_send_heart_blink_listener(_instance);
;
}



/*****************************************************/
//                    Serial
/*****************************************************/

#define Serial_BAUDRATE 9600
#define Serial_MAX_LOOP 4
#define Serial_MAX_MSG_SIZE 2
/*OTHER_VARS*/


#define Serial_LISTENER_STATE_IDLE 0
#define Serial_LISTENER_STATE_READING 1
#define Serial_LISTENER_STATE_ESCAPE 2
#define Serial_LISTENER_STATE_ERROR 3


#define Serial_START_BYTE 18
#define Serial_STOP_BYTE 19
#define Serial_ESCAPE_BYTE 125

struct Serial_instance_type {
    uint16_t listener_id;
    //Connector
} Serial_instance;

void externalMessageEnqueue(uint8_t * msg, uint8_t msgSize, uint16_t listener_id);

void Serial_setup() {
  Serial.begin(Serial_BAUDRATE);
}

void Serial_set_listener_id(uint16_t id) {
  Serial_instance.listener_id = id;
}

void Serial_forwardMessage(byte * msg, uint8_t size) {
  Serial.write(Serial_START_BYTE);
  for(uint8_t i = 0; i < size; i++) {
	if(msg[i] == Serial_ESCAPE_BYTE || msg[i] == Serial_START_BYTE || msg[i] == Serial_STOP_BYTE) {
    	Serial.write(Serial_ESCAPE_BYTE);
	}
    Serial.write(msg[i]);
  }
  Serial.write(Serial_STOP_BYTE);
}

void Serial_parser(byte * msg, uint16_t size) {
externalMessageEnqueue((uint8_t *) msg, size, Serial_instance.listener_id);
}


uint8_t Serial_serialListenerState = 0;
uint8_t Serial_msg_buf[Serial_MAX_MSG_SIZE];
uint16_t Serial_msg_index = 0;
uint8_t Serial_incoming = 0;

void Serial_read() {
  byte limit = 0;
  while ((Serial.available()) && (limit < Serial_MAX_LOOP)) {
   limit++;
    Serial_incoming = Serial.read();
    
    switch(Serial_serialListenerState) {
      case Serial_LISTENER_STATE_IDLE:
        if(Serial_incoming == Serial_START_BYTE) {
          Serial_serialListenerState = Serial_LISTENER_STATE_READING;
          Serial_msg_index = 0;
        }
      break;
      
      case Serial_LISTENER_STATE_READING:
        if (Serial_msg_index > Serial_MAX_MSG_SIZE) {
          Serial_serialListenerState = Serial_LISTENER_STATE_ERROR;
        } else {
          if(Serial_incoming == Serial_STOP_BYTE) {
            Serial_serialListenerState = Serial_LISTENER_STATE_IDLE;
            
            
            Serial_parser(Serial_msg_buf, Serial_msg_index);
            
          } else if (Serial_incoming == Serial_ESCAPE_BYTE) {
            Serial_serialListenerState = Serial_LISTENER_STATE_ESCAPE;
          } else {
            Serial_msg_buf[Serial_msg_index] = Serial_incoming;
            Serial_msg_index++;
          }
        }
      break;
      
      case Serial_LISTENER_STATE_ESCAPE:
        if (Serial_msg_index >= Serial_MAX_MSG_SIZE) {
          Serial_serialListenerState = Serial_LISTENER_STATE_ERROR;
        } else {
          Serial_msg_buf[Serial_msg_index] = Serial_incoming;
          Serial_msg_index++;
          Serial_serialListenerState = Serial_LISTENER_STATE_READING;
        }
      break;
      
      case Serial_LISTENER_STATE_ERROR:
        Serial_serialListenerState = Serial_LISTENER_STATE_IDLE;
        Serial_msg_index = 0;
      break;
    }
  }
  
}

/*FORWARDERS*/// Forwarding of messages Serial::Tryggi::ctrl::pong_tryggy
void forward_Serial_Tryggi_send_ctrl_pong_tryggy(struct Tryggi_Instance *_instance){
byte forward_buf[2];
forward_buf[0] = (201 >> 8) & 0xFF;
forward_buf[1] =  201 & 0xFF;


//Forwarding with specified function 
Serial_forwardMessage(forward_buf, 2);
}




/*****************************************************************************
 * Definitions for configuration : TryggiArduino
 *****************************************************************************/

//Declaration of instance variables
//Instance neo_head
// Variables for the properties of the instance
struct NeoPixelGroup_Instance neo_head_var;
// Variables for the sessions of the instance
//Instance neo_heart
// Variables for the properties of the instance
struct NeoPixelGroup_Instance neo_heart_var;
// Variables for the sessions of the instance
//Instance tryggi
// Variables for the properties of the instance
struct Tryggi_Instance tryggi_var;
// Variables for the sessions of the instance


// Enqueue of messages Tryggi::head::pulse
void enqueue_Tryggi_send_head_pulse(struct Tryggi_Instance *_instance){
if ( fifo_byte_available() > 4 ) {

_fifo_enqueue( (3 >> 8) & 0xFF );
_fifo_enqueue( 3 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_head >> 8) & 0xFF );
_fifo_enqueue( _instance->id_head & 0xFF );
}
}
// Enqueue of messages Tryggi::head::setColor
void enqueue_Tryggi_send_head_setColor(struct Tryggi_Instance *_instance, uint8_t red, uint8_t green, uint8_t blue){
if ( fifo_byte_available() > 7 ) {

_fifo_enqueue( (4 >> 8) & 0xFF );
_fifo_enqueue( 4 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_head >> 8) & 0xFF );
_fifo_enqueue( _instance->id_head & 0xFF );

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
// Enqueue of messages Tryggi::head::rotate
void enqueue_Tryggi_send_head_rotate(struct Tryggi_Instance *_instance, int8_t speed){
if ( fifo_byte_available() > 5 ) {

_fifo_enqueue( (5 >> 8) & 0xFF );
_fifo_enqueue( 5 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_head >> 8) & 0xFF );
_fifo_enqueue( _instance->id_head & 0xFF );

// parameter speed
union u_speed_t {
int8_t p;
byte bytebuffer[1];
} u_speed;
u_speed.p = speed;
_fifo_enqueue(u_speed.bytebuffer[0] & 0xFF );
}
}
// Enqueue of messages Tryggi::head::breath
void enqueue_Tryggi_send_head_breath(struct Tryggi_Instance *_instance){
if ( fifo_byte_available() > 4 ) {

_fifo_enqueue( (6 >> 8) & 0xFF );
_fifo_enqueue( 6 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_head >> 8) & 0xFF );
_fifo_enqueue( _instance->id_head & 0xFF );
}
}
// Enqueue of messages Tryggi::head::solid
void enqueue_Tryggi_send_head_solid(struct Tryggi_Instance *_instance){
if ( fifo_byte_available() > 4 ) {

_fifo_enqueue( (7 >> 8) & 0xFF );
_fifo_enqueue( 7 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_head >> 8) & 0xFF );
_fifo_enqueue( _instance->id_head & 0xFF );
}
}
// Enqueue of messages Tryggi::head::blink
void enqueue_Tryggi_send_head_blink(struct Tryggi_Instance *_instance){
if ( fifo_byte_available() > 4 ) {

_fifo_enqueue( (8 >> 8) & 0xFF );
_fifo_enqueue( 8 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_head >> 8) & 0xFF );
_fifo_enqueue( _instance->id_head & 0xFF );
}
}
// Enqueue of messages Tryggi::head::off
void enqueue_Tryggi_send_head_off(struct Tryggi_Instance *_instance){
if ( fifo_byte_available() > 4 ) {

_fifo_enqueue( (9 >> 8) & 0xFF );
_fifo_enqueue( 9 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_head >> 8) & 0xFF );
_fifo_enqueue( _instance->id_head & 0xFF );
}
}
// Enqueue of messages Tryggi::heart::pulse
void enqueue_Tryggi_send_heart_pulse(struct Tryggi_Instance *_instance){
if ( fifo_byte_available() > 4 ) {

_fifo_enqueue( (3 >> 8) & 0xFF );
_fifo_enqueue( 3 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_heart >> 8) & 0xFF );
_fifo_enqueue( _instance->id_heart & 0xFF );
}
}
// Enqueue of messages Tryggi::heart::setColor
void enqueue_Tryggi_send_heart_setColor(struct Tryggi_Instance *_instance, uint8_t red, uint8_t green, uint8_t blue){
if ( fifo_byte_available() > 7 ) {

_fifo_enqueue( (4 >> 8) & 0xFF );
_fifo_enqueue( 4 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_heart >> 8) & 0xFF );
_fifo_enqueue( _instance->id_heart & 0xFF );

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
// Enqueue of messages Tryggi::heart::rotate
void enqueue_Tryggi_send_heart_rotate(struct Tryggi_Instance *_instance, int8_t speed){
if ( fifo_byte_available() > 5 ) {

_fifo_enqueue( (5 >> 8) & 0xFF );
_fifo_enqueue( 5 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_heart >> 8) & 0xFF );
_fifo_enqueue( _instance->id_heart & 0xFF );

// parameter speed
union u_speed_t {
int8_t p;
byte bytebuffer[1];
} u_speed;
u_speed.p = speed;
_fifo_enqueue(u_speed.bytebuffer[0] & 0xFF );
}
}
// Enqueue of messages Tryggi::heart::breath
void enqueue_Tryggi_send_heart_breath(struct Tryggi_Instance *_instance){
if ( fifo_byte_available() > 4 ) {

_fifo_enqueue( (6 >> 8) & 0xFF );
_fifo_enqueue( 6 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_heart >> 8) & 0xFF );
_fifo_enqueue( _instance->id_heart & 0xFF );
}
}
// Enqueue of messages Tryggi::heart::solid
void enqueue_Tryggi_send_heart_solid(struct Tryggi_Instance *_instance){
if ( fifo_byte_available() > 4 ) {

_fifo_enqueue( (7 >> 8) & 0xFF );
_fifo_enqueue( 7 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_heart >> 8) & 0xFF );
_fifo_enqueue( _instance->id_heart & 0xFF );
}
}
// Enqueue of messages Tryggi::heart::blink
void enqueue_Tryggi_send_heart_blink(struct Tryggi_Instance *_instance){
if ( fifo_byte_available() > 4 ) {

_fifo_enqueue( (8 >> 8) & 0xFF );
_fifo_enqueue( 8 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_heart >> 8) & 0xFF );
_fifo_enqueue( _instance->id_heart & 0xFF );
}
}
// Enqueue of messages Tryggi::heart::off
void enqueue_Tryggi_send_heart_off(struct Tryggi_Instance *_instance){
if ( fifo_byte_available() > 4 ) {

_fifo_enqueue( (9 >> 8) & 0xFF );
_fifo_enqueue( 9 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_heart >> 8) & 0xFF );
_fifo_enqueue( _instance->id_heart & 0xFF );
}
}


//New dispatcher for messages
void dispatch_timer_timeout(uint16_t sender, uint8_t param_id) {
if (sender == timer2_instance.listener_id) {
Tryggi_handle_timer_timer_timeout(&tryggi_var, param_id);

}

}


//New dispatcher for messages
void dispatch_rotate(uint16_t sender, int8_t param_speed) {
if (sender == tryggi_var.id_heart) {
NeoPixelGroup_handle_ctrl_rotate(&neo_heart_var, param_speed);

}
if (sender == tryggi_var.id_head) {
NeoPixelGroup_handle_ctrl_rotate(&neo_head_var, param_speed);

}

}


//New dispatcher for messages
void dispatch_show_success(uint16_t sender) {
if (sender == Serial_instance.listener_id) {
Tryggi_handle_ctrl_show_success(&tryggi_var);

}

}


//New dispatcher for messages
void dispatch_solid(uint16_t sender) {
if (sender == tryggi_var.id_heart) {
NeoPixelGroup_handle_ctrl_solid(&neo_heart_var);

}
if (sender == tryggi_var.id_head) {
NeoPixelGroup_handle_ctrl_solid(&neo_head_var);

}

}


//New dispatcher for messages
void dispatch_off(uint16_t sender) {
if (sender == tryggi_var.id_heart) {
NeoPixelGroup_handle_ctrl_off(&neo_heart_var);

}
if (sender == tryggi_var.id_head) {
NeoPixelGroup_handle_ctrl_off(&neo_head_var);

}

}


//New dispatcher for messages
void dispatch_ping_tryggy(uint16_t sender) {
if (sender == Serial_instance.listener_id) {
Tryggi_handle_ctrl_ping_tryggy(&tryggi_var);

}

}


//New dispatcher for messages
void dispatch_clear_status(uint16_t sender) {
if (sender == Serial_instance.listener_id) {
Tryggi_handle_ctrl_clear_status(&tryggi_var);

}

}


//New dispatcher for messages
void dispatch_fps_clock(uint16_t sender) {
if (sender == timer2_instance.listener_id) {
NeoPixelGroup_handle_clock_fps_clock(&neo_head_var);

}
if (sender == timer2_instance.listener_id) {
NeoPixelGroup_handle_clock_fps_clock(&neo_heart_var);

}

}


//New dispatcher for messages
void dispatch_pulse(uint16_t sender) {
if (sender == tryggi_var.id_heart) {
NeoPixelGroup_handle_ctrl_pulse(&neo_heart_var);

}
if (sender == tryggi_var.id_head) {
NeoPixelGroup_handle_ctrl_pulse(&neo_head_var);

}

}


//New dispatcher for messages
void dispatch_bluetooth_act(uint16_t sender) {
if (sender == Serial_instance.listener_id) {
Tryggi_handle_ctrl_bluetooth_act(&tryggi_var);

}

}


//New dispatcher for messages
void dispatch_tellucloud_act(uint16_t sender) {
if (sender == Serial_instance.listener_id) {
Tryggi_handle_ctrl_tellucloud_act(&tryggi_var);

}

}


//New dispatcher for messages
void dispatch_setColor(uint16_t sender, uint8_t param_red, uint8_t param_green, uint8_t param_blue) {
if (sender == tryggi_var.id_heart) {
NeoPixelGroup_handle_ctrl_setColor(&neo_heart_var, param_red, param_green, param_blue);

}
if (sender == tryggi_var.id_head) {
NeoPixelGroup_handle_ctrl_setColor(&neo_head_var, param_red, param_green, param_blue);

}

}


//New dispatcher for messages
void dispatch_breath(uint16_t sender) {
if (sender == tryggi_var.id_heart) {
NeoPixelGroup_handle_ctrl_breath(&neo_heart_var);

}
if (sender == tryggi_var.id_head) {
NeoPixelGroup_handle_ctrl_breath(&neo_head_var);

}

}


//New dispatcher for messages
void dispatch_show_error(uint16_t sender) {
if (sender == Serial_instance.listener_id) {
Tryggi_handle_ctrl_show_error(&tryggi_var);

}

}


//New dispatcher for messages
void dispatch_blink(uint16_t sender) {
if (sender == tryggi_var.id_heart) {
NeoPixelGroup_handle_ctrl_blink(&neo_heart_var);

}
if (sender == tryggi_var.id_head) {
NeoPixelGroup_handle_ctrl_blink(&neo_head_var);

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
case 5:{
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
case 204:{
byte mbuf[4 - 2];
while (mbufi < (4 - 2)) mbuf[mbufi++] = fifo_dequeue();
uint8_t mbufi_show_success = 2;
dispatch_show_success((mbuf[0] << 8) + mbuf[1] /* instance port*/);
break;
}
case 7:{
byte mbuf[4 - 2];
while (mbufi < (4 - 2)) mbuf[mbufi++] = fifo_dequeue();
uint8_t mbufi_solid = 2;
dispatch_solid((mbuf[0] << 8) + mbuf[1] /* instance port*/);
break;
}
case 9:{
byte mbuf[4 - 2];
while (mbufi < (4 - 2)) mbuf[mbufi++] = fifo_dequeue();
uint8_t mbufi_off = 2;
dispatch_off((mbuf[0] << 8) + mbuf[1] /* instance port*/);
break;
}
case 200:{
byte mbuf[4 - 2];
while (mbufi < (4 - 2)) mbuf[mbufi++] = fifo_dequeue();
uint8_t mbufi_ping_tryggy = 2;
dispatch_ping_tryggy((mbuf[0] << 8) + mbuf[1] /* instance port*/);
break;
}
case 206:{
byte mbuf[4 - 2];
while (mbufi < (4 - 2)) mbuf[mbufi++] = fifo_dequeue();
uint8_t mbufi_clear_status = 2;
dispatch_clear_status((mbuf[0] << 8) + mbuf[1] /* instance port*/);
break;
}
case 2:{
byte mbuf[4 - 2];
while (mbufi < (4 - 2)) mbuf[mbufi++] = fifo_dequeue();
uint8_t mbufi_fps_clock = 2;
dispatch_fps_clock((mbuf[0] << 8) + mbuf[1] /* instance port*/);
break;
}
case 3:{
byte mbuf[4 - 2];
while (mbufi < (4 - 2)) mbuf[mbufi++] = fifo_dequeue();
uint8_t mbufi_pulse = 2;
dispatch_pulse((mbuf[0] << 8) + mbuf[1] /* instance port*/);
break;
}
case 202:{
byte mbuf[4 - 2];
while (mbufi < (4 - 2)) mbuf[mbufi++] = fifo_dequeue();
uint8_t mbufi_bluetooth_act = 2;
dispatch_bluetooth_act((mbuf[0] << 8) + mbuf[1] /* instance port*/);
break;
}
case 203:{
byte mbuf[4 - 2];
while (mbufi < (4 - 2)) mbuf[mbufi++] = fifo_dequeue();
uint8_t mbufi_tellucloud_act = 2;
dispatch_tellucloud_act((mbuf[0] << 8) + mbuf[1] /* instance port*/);
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
case 6:{
byte mbuf[4 - 2];
while (mbufi < (4 - 2)) mbuf[mbufi++] = fifo_dequeue();
uint8_t mbufi_breath = 2;
dispatch_breath((mbuf[0] << 8) + mbuf[1] /* instance port*/);
break;
}
case 205:{
byte mbuf[4 - 2];
while (mbufi < (4 - 2)) mbuf[mbufi++] = fifo_dequeue();
uint8_t mbufi_show_error = 2;
dispatch_show_error((mbuf[0] << 8) + mbuf[1] /* instance port*/);
break;
}
case 8:{
byte mbuf[4 - 2];
while (mbufi < (4 - 2)) mbuf[mbufi++] = fifo_dequeue();
uint8_t mbufi_blink = 2;
dispatch_blink((mbuf[0] << 8) + mbuf[1] /* instance port*/);
break;
}
}
return 1;
}

void forward_Tryggi_send_timer_timer_cancel(struct Tryggi_Instance *_instance, uint8_t id){
if(_instance->id_timer == tryggi_var.id_timer) {
forward_timer2_Tryggi_send_timer_timer_cancel(_instance, id);
}
}
void forward_Tryggi_send_ctrl_pong_tryggy(struct Tryggi_Instance *_instance){
if(_instance->id_ctrl == tryggi_var.id_ctrl) {
forward_Serial_Tryggi_send_ctrl_pong_tryggy(_instance);
}
}
void forward_Tryggi_send_timer_timer_start(struct Tryggi_Instance *_instance, uint8_t id, uint32_t time){
if(_instance->id_timer == tryggi_var.id_timer) {
forward_timer2_Tryggi_send_timer_timer_start(_instance, id, time);
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
case 200:
if(msgSize == 2) {
msgSizeOK = 1;}
break;
case 206:
if(msgSize == 2) {
msgSizeOK = 1;}
break;
case 2:
if(msgSize == 2) {
msgSizeOK = 1;}
break;
case 202:
if(msgSize == 2) {
msgSizeOK = 1;}
break;
case 203:
if(msgSize == 2) {
msgSizeOK = 1;}
break;
case 204:
if(msgSize == 2) {
msgSizeOK = 1;}
break;
case 205:
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

void initialize_configuration_TryggiArduino() {
// Initialize connectors
register_external_Tryggi_send_timer_timer_start_listener(&forward_Tryggi_send_timer_timer_start);
register_external_Tryggi_send_timer_timer_cancel_listener(&forward_Tryggi_send_timer_timer_cancel);
register_external_Tryggi_send_ctrl_pong_tryggy_listener(&forward_Tryggi_send_ctrl_pong_tryggy);
register_Tryggi_send_head_setColor_listener(&enqueue_Tryggi_send_head_setColor);
register_Tryggi_send_head_off_listener(&enqueue_Tryggi_send_head_off);
register_Tryggi_send_head_pulse_listener(&enqueue_Tryggi_send_head_pulse);
register_Tryggi_send_head_rotate_listener(&enqueue_Tryggi_send_head_rotate);
register_Tryggi_send_head_breath_listener(&enqueue_Tryggi_send_head_breath);
register_Tryggi_send_head_solid_listener(&enqueue_Tryggi_send_head_solid);
register_Tryggi_send_head_blink_listener(&enqueue_Tryggi_send_head_blink);
register_Tryggi_send_heart_setColor_listener(&enqueue_Tryggi_send_heart_setColor);
register_Tryggi_send_heart_off_listener(&enqueue_Tryggi_send_heart_off);
register_Tryggi_send_heart_pulse_listener(&enqueue_Tryggi_send_heart_pulse);
register_Tryggi_send_heart_rotate_listener(&enqueue_Tryggi_send_heart_rotate);
register_Tryggi_send_heart_breath_listener(&enqueue_Tryggi_send_heart_breath);
register_Tryggi_send_heart_solid_listener(&enqueue_Tryggi_send_heart_solid);
register_Tryggi_send_heart_blink_listener(&enqueue_Tryggi_send_heart_blink);

// Init the ID, state variables and properties for external connector timer2
// Init the ID, state variables and properties for external connector timer2
// Init the ID, state variables and properties for external connector timer2
// Init the ID, state variables and properties for external connector Serial

// Network Initialization

Serial_instance.listener_id = add_instance(&Serial_instance);

Serial_setup();


timer2_instance.listener_id = add_instance(&timer2_instance);

timer2_setup();

// End Network Initialization

// Init the ID, state variables and properties for instance neo_head
neo_head_var.active = true;
neo_head_var.id_ctrl = add_instance( (void*) &neo_head_var);
neo_head_var.id_clock = add_instance( (void*) &neo_head_var);
neo_head_var.NeoPixelGroup_NeoPixelStateChart_State = NEOPIXELGROUP_NEOPIXELSTATECHART_PULSE_STATE;
neo_head_var.NeoPixelGroup_NeoPixelStateChart_BLINKALL_maxcount_var = 22;
neo_head_var.NeoPixelGroup_neopixel_total_count_var = 4;
neo_head_var.NeoPixelGroup_NeoPixelStateChart_rotate_speed_var = 4;
neo_head_var.NeoPixelGroup_NeoPixelStateChart_breath_speed_var = 100;
neo_head_var.NeoPixelGroup_NeoPixelStateChart_BLINKALL_counter_var = 0;
neo_head_var.NeoPixelGroup_NeoPixelStateChart_PULSE_maxcount_var = 100;
neo_head_var.NeoPixelGroup_NeoPixelStateChart_BREATH_counter_var = 0;
neo_head_var.NeoPixelGroup_neopixel_last_var = 3;
neo_head_var.NeoPixelGroup_NeoPixelStateChart_color_g_var = 10;
neo_head_var.NeoPixelGroup_NeoPixelStateChart_PULSE_counter_var = 0;
neo_head_var.NeoPixelGroup_NeoPixelStateChart_color_r_var = 100;
neo_head_var.NeoPixelGroup_neopixel_pin_var = 7;
neo_head_var.NeoPixelGroup_neopixel_first_var = 1;
neo_head_var.NeoPixelGroup_NeoPixelStateChart_BREATH_maxcount_var = 186;
neo_head_var.NeoPixelGroup_NeoPixelStateChart_color_b_var = 0;
neo_head_var.NeoPixelGroup_NeoPixelStateChart_ROTATE_angle_var = 0;
neo_head_var.NeoPixelGroup_NeoPixelStateChart_ROTATE_maxangle_var = 200;

NeoPixelGroup_NeoPixelStateChart_OnEntry(NEOPIXELGROUP_NEOPIXELSTATECHART_STATE, &neo_head_var);
// Init the ID, state variables and properties for instance neo_heart
neo_heart_var.active = true;
neo_heart_var.id_ctrl = add_instance( (void*) &neo_heart_var);
neo_heart_var.id_clock = add_instance( (void*) &neo_heart_var);
neo_heart_var.NeoPixelGroup_NeoPixelStateChart_State = NEOPIXELGROUP_NEOPIXELSTATECHART_PULSE_STATE;
neo_heart_var.NeoPixelGroup_NeoPixelStateChart_BLINKALL_maxcount_var = 22;
neo_heart_var.NeoPixelGroup_neopixel_total_count_var = 4;
neo_heart_var.NeoPixelGroup_NeoPixelStateChart_rotate_speed_var = 4;
neo_heart_var.NeoPixelGroup_NeoPixelStateChart_breath_speed_var = 100;
neo_heart_var.NeoPixelGroup_NeoPixelStateChart_BLINKALL_counter_var = 0;
neo_heart_var.NeoPixelGroup_NeoPixelStateChart_PULSE_maxcount_var = 100;
neo_heart_var.NeoPixelGroup_NeoPixelStateChart_BREATH_counter_var = 0;
neo_heart_var.NeoPixelGroup_neopixel_last_var = 0;
neo_heart_var.NeoPixelGroup_NeoPixelStateChart_color_g_var = 10;
neo_heart_var.NeoPixelGroup_NeoPixelStateChart_PULSE_counter_var = 0;
neo_heart_var.NeoPixelGroup_NeoPixelStateChart_color_r_var = 100;
neo_heart_var.NeoPixelGroup_neopixel_pin_var = 7;
neo_heart_var.NeoPixelGroup_neopixel_first_var = 0;
neo_heart_var.NeoPixelGroup_NeoPixelStateChart_BREATH_maxcount_var = 186;
neo_heart_var.NeoPixelGroup_NeoPixelStateChart_color_b_var = 0;
neo_heart_var.NeoPixelGroup_NeoPixelStateChart_ROTATE_angle_var = 0;
neo_heart_var.NeoPixelGroup_NeoPixelStateChart_ROTATE_maxangle_var = 200;

NeoPixelGroup_NeoPixelStateChart_OnEntry(NEOPIXELGROUP_NEOPIXELSTATECHART_STATE, &neo_heart_var);
// Init the ID, state variables and properties for instance tryggi
tryggi_var.active = true;
tryggi_var.id_ctrl = add_instance( (void*) &tryggi_var);
tryggi_var.id_timer = add_instance( (void*) &tryggi_var);
tryggi_var.id_head = add_instance( (void*) &tryggi_var);
tryggi_var.id_heart = add_instance( (void*) &tryggi_var);
tryggi_var.Tryggi_TryggiSC_State = TRYGGI_TRYGGISC_WAITINGFORPING_STATE;
tryggi_var.Tryggi_TIMERID_var = 2;

Tryggi_TryggiSC_OnEntry(TRYGGI_TRYGGISC_STATE, &tryggi_var);
}




void setup() {
initialize_configuration_TryggiArduino();

}

void loop() {

// Network Listener
Serial_read();

timer2_read();
// End Network Listener


    processMessageQueue();
}
