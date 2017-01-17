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
uint8_t NeoPixel_NeoPixelStateChart_counter_var;
uint8_t NeoPixel_NeoPixelStateChart_countup_var;
// CEP stream pointers

};
// Declaration of prototypes outgoing messages:
void NeoPixel_NeoPixelStateChart_OnEntry(int state, struct NeoPixel_Instance *_instance);
void NeoPixel_handle_ctrl_setColor(struct NeoPixel_Instance *_instance, uint8_t red, uint8_t green, uint8_t blue);
void NeoPixel_handle_clock_update(struct NeoPixel_Instance *_instance);
// Declaration of callbacks for incoming messages:

// Definition of the states:
#define NEOPIXEL_NEOPIXELSTATECHART_STATE 0
#define NEOPIXEL_NEOPIXELSTATECHART_RUN_STATE 1


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


/*****************************************************************************
 * Headers for type : BLENotifier
 *****************************************************************************/

// Definition of the instance struct:
struct BLENotifier_Instance {

// Instances of different sessions
bool active;
// Variables for the ID of the ports of the instance
uint16_t id_blerx;
uint16_t id_bletx;
uint16_t id_neopixels;
// Variables for the current instance state
int BLENotifier_BLENotifierSC_State;
// Variables for the properties of the instance
uint8_t * BLENotifier_BLENotifierSC_SetColor_buf_var;
uint16_t BLENotifier_BLENotifierSC_SetColor_buf_var_size;
uint8_t BLENotifier_BLENotifierSC_SetColor_idx_var;
// CEP stream pointers

};
// Declaration of prototypes outgoing messages:
void BLENotifier_BLENotifierSC_OnEntry(int state, struct BLENotifier_Instance *_instance);
void BLENotifier_handle_blerx_receive_byte(struct BLENotifier_Instance *_instance, uint8_t b);
// Declaration of callbacks for incoming messages:
void register_BLENotifier_send_bletx_write_byte_listener(void (*_listener)(struct BLENotifier_Instance *, uint8_t));
void register_external_BLENotifier_send_bletx_write_byte_listener(void (*_listener)(struct BLENotifier_Instance *, uint8_t));
void register_BLENotifier_send_bletx_print_message_listener(void (*_listener)(struct BLENotifier_Instance *, char *));
void register_external_BLENotifier_send_bletx_print_message_listener(void (*_listener)(struct BLENotifier_Instance *, char *));
void register_BLENotifier_send_neopixels_setColor_listener(void (*_listener)(struct BLENotifier_Instance *, uint8_t, uint8_t, uint8_t));
void register_external_BLENotifier_send_neopixels_setColor_listener(void (*_listener)(struct BLENotifier_Instance *, uint8_t, uint8_t, uint8_t));

// Definition of the states:
#define BLENOTIFIER_BLENOTIFIERSC_STATE 0
#define BLENOTIFIER_BLENOTIFIERSC_READY_STATE 1
#define BLENOTIFIER_BLENOTIFIERSC_PARSECOMMAND_STATE 2
#define BLENOTIFIER_BLENOTIFIERSC_SETCOLOR_STATE 3


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

#define MAX_INSTANCES 8
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
 * Implementation for type : BLENotifier
 *****************************************************************************/

// Declaration of prototypes:
//Prototypes: State Machine
void BLENotifier_BLENotifierSC_OnExit(int state, struct BLENotifier_Instance *_instance);
//Prototypes: Message Sending
void BLENotifier_send_bletx_write_byte(struct BLENotifier_Instance *_instance, uint8_t b);
void BLENotifier_send_bletx_print_message(struct BLENotifier_Instance *_instance, char * msg);
void BLENotifier_send_neopixels_setColor(struct BLENotifier_Instance *_instance, uint8_t red, uint8_t green, uint8_t blue);
//Prototypes: Function
// Declaration of functions:

// Sessions functionss:


// On Entry Actions:
void BLENotifier_BLENotifierSC_OnEntry(int state, struct BLENotifier_Instance *_instance) {
switch(state) {
case BLENOTIFIER_BLENOTIFIERSC_STATE:{
_instance->BLENotifier_BLENotifierSC_State = BLENOTIFIER_BLENOTIFIERSC_READY_STATE;
BLENotifier_BLENotifierSC_OnEntry(_instance->BLENotifier_BLENotifierSC_State, _instance);
break;
}
case BLENOTIFIER_BLENOTIFIERSC_READY_STATE:{
break;
}
case BLENOTIFIER_BLENOTIFIERSC_PARSECOMMAND_STATE:{
break;
}
case BLENOTIFIER_BLENOTIFIERSC_SETCOLOR_STATE:{
_instance->BLENotifier_BLENotifierSC_SetColor_idx_var = 0;
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
case BLENOTIFIER_BLENOTIFIERSC_READY_STATE:{
break;}
case BLENOTIFIER_BLENOTIFIERSC_PARSECOMMAND_STATE:{
break;}
case BLENOTIFIER_BLENOTIFIERSC_SETCOLOR_STATE:{
break;}
default: break;
}
}

// Event Handlers for incoming messages:
void BLENotifier_handle_blerx_receive_byte(struct BLENotifier_Instance *_instance, uint8_t b) {
if(!(_instance->active)) return;
//Region BLENotifierSC
uint8_t BLENotifier_BLENotifierSC_State_event_consumed = 0;
if (_instance->BLENotifier_BLENotifierSC_State == BLENOTIFIER_BLENOTIFIERSC_READY_STATE) {
if (BLENotifier_BLENotifierSC_State_event_consumed == 0 && b == '!') {
BLENotifier_BLENotifierSC_OnExit(BLENOTIFIER_BLENOTIFIERSC_READY_STATE, _instance);
_instance->BLENotifier_BLENotifierSC_State = BLENOTIFIER_BLENOTIFIERSC_PARSECOMMAND_STATE;
BLENotifier_BLENotifierSC_OnEntry(BLENOTIFIER_BLENOTIFIERSC_PARSECOMMAND_STATE, _instance);
BLENotifier_BLENotifierSC_State_event_consumed = 1;
}
}
else if (_instance->BLENotifier_BLENotifierSC_State == BLENOTIFIER_BLENOTIFIERSC_PARSECOMMAND_STATE) {
if (BLENotifier_BLENotifierSC_State_event_consumed == 0 && b == 'C') {
BLENotifier_BLENotifierSC_OnExit(BLENOTIFIER_BLENOTIFIERSC_PARSECOMMAND_STATE, _instance);
_instance->BLENotifier_BLENotifierSC_State = BLENOTIFIER_BLENOTIFIERSC_SETCOLOR_STATE;
BLENotifier_BLENotifierSC_OnEntry(BLENOTIFIER_BLENOTIFIERSC_SETCOLOR_STATE, _instance);
BLENotifier_BLENotifierSC_State_event_consumed = 1;
}
}
else if (_instance->BLENotifier_BLENotifierSC_State == BLENOTIFIER_BLENOTIFIERSC_SETCOLOR_STATE) {
if (BLENotifier_BLENotifierSC_State_event_consumed == 0 && _instance->BLENotifier_BLENotifierSC_SetColor_idx_var == 2) {
BLENotifier_BLENotifierSC_OnExit(BLENOTIFIER_BLENOTIFIERSC_SETCOLOR_STATE, _instance);
_instance->BLENotifier_BLENotifierSC_State = BLENOTIFIER_BLENOTIFIERSC_READY_STATE;
BLENotifier_send_neopixels_setColor(_instance, _instance->BLENotifier_BLENotifierSC_SetColor_buf_var[0]
, _instance->BLENotifier_BLENotifierSC_SetColor_buf_var[1]
, b);
BLENotifier_send_bletx_print_message(_instance, "OK\n");
BLENotifier_BLENotifierSC_OnEntry(BLENOTIFIER_BLENOTIFIERSC_READY_STATE, _instance);
BLENotifier_BLENotifierSC_State_event_consumed = 1;
}
else if (BLENotifier_BLENotifierSC_State_event_consumed == 0 && _instance->BLENotifier_BLENotifierSC_SetColor_idx_var < 2) {
_instance->BLENotifier_BLENotifierSC_SetColor_buf_var[_instance->BLENotifier_BLENotifierSC_SetColor_idx_var] = b;
_instance->BLENotifier_BLENotifierSC_SetColor_idx_var = _instance->BLENotifier_BLENotifierSC_SetColor_idx_var + 1;
BLENotifier_BLENotifierSC_State_event_consumed = 1;
}
}
//End Region BLENotifierSC
//End dsregion BLENotifierSC
//Session list: 
}

// Observers for outgoing messages:
void (*external_BLENotifier_send_bletx_write_byte_listener)(struct BLENotifier_Instance *, uint8_t)= 0x0;
void (*BLENotifier_send_bletx_write_byte_listener)(struct BLENotifier_Instance *, uint8_t)= 0x0;
void register_external_BLENotifier_send_bletx_write_byte_listener(void (*_listener)(struct BLENotifier_Instance *, uint8_t)){
external_BLENotifier_send_bletx_write_byte_listener = _listener;
}
void register_BLENotifier_send_bletx_write_byte_listener(void (*_listener)(struct BLENotifier_Instance *, uint8_t)){
BLENotifier_send_bletx_write_byte_listener = _listener;
}
void BLENotifier_send_bletx_write_byte(struct BLENotifier_Instance *_instance, uint8_t b){
if (BLENotifier_send_bletx_write_byte_listener != 0x0) BLENotifier_send_bletx_write_byte_listener(_instance, b);
if (external_BLENotifier_send_bletx_write_byte_listener != 0x0) external_BLENotifier_send_bletx_write_byte_listener(_instance, b);
;
}
void (*external_BLENotifier_send_bletx_print_message_listener)(struct BLENotifier_Instance *, char *)= 0x0;
void (*BLENotifier_send_bletx_print_message_listener)(struct BLENotifier_Instance *, char *)= 0x0;
void register_external_BLENotifier_send_bletx_print_message_listener(void (*_listener)(struct BLENotifier_Instance *, char *)){
external_BLENotifier_send_bletx_print_message_listener = _listener;
}
void register_BLENotifier_send_bletx_print_message_listener(void (*_listener)(struct BLENotifier_Instance *, char *)){
BLENotifier_send_bletx_print_message_listener = _listener;
}
void BLENotifier_send_bletx_print_message(struct BLENotifier_Instance *_instance, char * msg){
if (BLENotifier_send_bletx_print_message_listener != 0x0) BLENotifier_send_bletx_print_message_listener(_instance, msg);
if (external_BLENotifier_send_bletx_print_message_listener != 0x0) external_BLENotifier_send_bletx_print_message_listener(_instance, msg);
;
}
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

void timer2_33ms_tic() {
{
uint8_t enqueue_buf[2];
enqueue_buf[0] = (1 >> 8) & 0xFF;
enqueue_buf[1] = 1 & 0xFF;
externalMessageEnqueue(enqueue_buf, 2, timer2_instance.listener_id);
}
}





void timer2_read() {
    uint32_t tms = millis();
    
    if (timer2_prev_1sec < tms) {
        timer2_prev_1sec += 1000;
    }
    if((timer2_tic_flags & 0b00000001) >> 0) {
timer2_33ms_tic();
timer2_tic_flags &= 0b11111110;
}

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
 * Implementation for type : NeoPixel
 *****************************************************************************/


// BEGIN: Code from the c_global annotation NeoPixel

#include <Adafruit_NeoPixel.h>
Adafruit_NeoPixel strip;

#define BREATH_LEN 31
//uint8_t breath[] = {0, 1, 2, 3, 5, 8, 11, 14, 18, 23, 29, 36, 43, 52, 61, 72, 83, 96, 110, 124, 140, 155, 171, 186, 202, 216, 228, 238, 247, 252, 255};

uint8_t breath[] = {25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 29, 36, 43, 52, 61, 72, 83, 96, 110, 124, 140, 155, 171, 186, 202, 216, 228, 238, 247, 252, 255};

#define PULSE_LEN 40
uint8_t pulse[] =  {32, 32, 40, 50, 55, 50, 32, 32, 32, 20, 10, 20, 40, 80, 160, 230, 255, 230, 160, 80, 40, 20, 10, 5, 2, 0, 6, 16, 30, 32, 32, 40, 48, 55, 60, 50, 36, 32, 32, 32};


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
_instance->NeoPixel_NeoPixelStateChart_State = NEOPIXEL_NEOPIXELSTATECHART_RUN_STATE;
f_NeoPixel_initializeNeopixels(_instance);
NeoPixel_NeoPixelStateChart_OnEntry(_instance->NeoPixel_NeoPixelStateChart_State, _instance);
break;
}
case NEOPIXEL_NEOPIXELSTATECHART_RUN_STATE:{
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
case NEOPIXEL_NEOPIXELSTATECHART_RUN_STATE:{
break;}
default: break;
}
}

// Event Handlers for incoming messages:
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
void NeoPixel_handle_clock_update(struct NeoPixel_Instance *_instance) {
if(!(_instance->active)) return;
//Region NeoPixelStateChart
uint8_t NeoPixel_NeoPixelStateChart_State_event_consumed = 0;
if (_instance->NeoPixel_NeoPixelStateChart_State == NEOPIXEL_NEOPIXELSTATECHART_RUN_STATE) {
if (NeoPixel_NeoPixelStateChart_State_event_consumed == 0 && 1) {
NeoPixel_NeoPixelStateChart_OnExit(NEOPIXEL_NEOPIXELSTATECHART_RUN_STATE, _instance);
_instance->NeoPixel_NeoPixelStateChart_State = NEOPIXEL_NEOPIXELSTATECHART_RUN_STATE;
if(_instance->NeoPixel_NeoPixelStateChart_countup_var) {
;uint8_t bright = pulse[_instance->NeoPixel_NeoPixelStateChart_counter_var];
;uint32_t color = f_NeoPixel_getColor(_instance, (_instance->NeoPixel_NeoPixelStateChart_color_r_var * bright) / 256, (_instance->NeoPixel_NeoPixelStateChart_color_g_var * bright) / 256, (_instance->NeoPixel_NeoPixelStateChart_color_b_var * bright) / 256);
;uint8_t i = 0;
while(i < _instance->NeoPixel_neopixel_count_var) {
f_NeoPixel_setPixelColor(_instance, i, color);
i = i + 1;

}
f_NeoPixel_updateNeopixels(_instance);
if(_instance->NeoPixel_NeoPixelStateChart_counter_var < PULSE_LEN - 1) {
_instance->NeoPixel_NeoPixelStateChart_counter_var = _instance->NeoPixel_NeoPixelStateChart_counter_var + 1;

}
if(_instance->NeoPixel_NeoPixelStateChart_counter_var == PULSE_LEN - 1) {
_instance->NeoPixel_NeoPixelStateChart_countup_var = 0;

}

} else {
if(_instance->NeoPixel_NeoPixelStateChart_counter_var > 0) {
_instance->NeoPixel_NeoPixelStateChart_counter_var = _instance->NeoPixel_NeoPixelStateChart_counter_var - 1;

}
if(_instance->NeoPixel_NeoPixelStateChart_counter_var == 0) {
_instance->NeoPixel_NeoPixelStateChart_countup_var = 1;

}

}
NeoPixel_NeoPixelStateChart_OnEntry(NEOPIXEL_NEOPIXELSTATECHART_RUN_STATE, _instance);
NeoPixel_NeoPixelStateChart_State_event_consumed = 1;
}
}
//End Region NeoPixelStateChart
//End dsregion NeoPixelStateChart
//Session list: 
}

// Observers for outgoing messages:






/*****************************************************************************
 * Definitions for configuration : BLENotifier
 *****************************************************************************/

uint8_t array_notifier_BLENotifier_BLENotifierSC_SetColor_buf_var[2];
//Declaration of instance variables
//Instance neopixels
// Variables for the properties of the instance
struct NeoPixel_Instance neopixels_var;
// Variables for the sessions of the instance
//Instance notifier
// Variables for the properties of the instance
struct BLENotifier_Instance notifier_var;
// Variables for the sessions of the instance
//Instance uart
// Variables for the properties of the instance
struct Serial_Instance uart_var;
// Variables for the sessions of the instance

// Enqueue of messages Serial::rx::receive_byte
void enqueue_Serial_send_rx_receive_byte(struct Serial_Instance *_instance, uint8_t b){
if ( fifo_byte_available() > 5 ) {

_fifo_enqueue( (2 >> 8) & 0xFF );
_fifo_enqueue( 2 & 0xFF );

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
// Enqueue of messages BLENotifier::neopixels::setColor
void enqueue_BLENotifier_send_neopixels_setColor(struct BLENotifier_Instance *_instance, uint8_t red, uint8_t green, uint8_t blue){
if ( fifo_byte_available() > 7 ) {

_fifo_enqueue( (3 >> 8) & 0xFF );
_fifo_enqueue( 3 & 0xFF );

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


//New dispatcher for messages
void dispatch_receive_byte(uint16_t sender, uint8_t param_b) {
if (sender == uart_var.id_rx) {
BLENotifier_handle_blerx_receive_byte(&notifier_var, param_b);

}

}


//New dispatcher for messages
void dispatch_setColor(uint16_t sender, uint8_t param_red, uint8_t param_green, uint8_t param_blue) {
if (sender == notifier_var.id_neopixels) {
NeoPixel_handle_ctrl_setColor(&neopixels_var, param_red, param_green, param_blue);

}

}


//New dispatcher for messages
void dispatch_print_message(uint16_t sender, char * param_msg) {
if (sender == notifier_var.id_bletx) {

}

}

void sync_dispatch_BLENotifier_send_bletx_print_message(struct BLENotifier_Instance *_instance, char * msg){
dispatch_print_message(_instance->id_bletx, msg);
}

//New dispatcher for messages
void dispatch_write_byte(uint16_t sender, uint8_t param_b) {
if (sender == notifier_var.id_bletx) {

}

}

void sync_dispatch_BLENotifier_send_bletx_write_byte(struct BLENotifier_Instance *_instance, uint8_t b){
dispatch_write_byte(_instance->id_bletx, b);
}

//New dispatcher for messages
void dispatch_update(uint16_t sender) {
if (sender == timer2_instance.listener_id) {
NeoPixel_handle_clock_update(&neopixels_var);

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
case 1:{
byte mbuf[4 - 2];
while (mbufi < (4 - 2)) mbuf[mbufi++] = fifo_dequeue();
uint8_t mbufi_update = 2;
dispatch_update((mbuf[0] << 8) + mbuf[1] /* instance port*/);
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
case 1:
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
register_BLENotifier_send_bletx_write_byte_listener(&sync_dispatch_BLENotifier_send_bletx_write_byte);
register_BLENotifier_send_bletx_print_message_listener(&sync_dispatch_BLENotifier_send_bletx_print_message);
register_BLENotifier_send_neopixels_setColor_listener(&enqueue_BLENotifier_send_neopixels_setColor);
register_Serial_send_rx_receive_byte_listener(&enqueue_Serial_send_rx_receive_byte);

// Init the ID, state variables and properties for external connector timer2

// Network Initilization 


timer2_instance.listener_id = add_instance(&timer2_instance);

timer2_setup();


// End Network Initilization 

// Init the ID, state variables and properties for instance uart
uart_var.active = true;
uart_var.id_rx = add_instance( (void*) &uart_var);
uart_var.id_tx = add_instance( (void*) &uart_var);
uart_var.Serial_SerialImpl_State = SERIAL_SERIALIMPL_RECEIVING_STATE;

Serial_SerialImpl_OnEntry(SERIAL_SERIALIMPL_STATE, &uart_var);
// Init the ID, state variables and properties for instance neopixels
neopixels_var.active = true;
neopixels_var.id_ctrl = add_instance( (void*) &neopixels_var);
neopixels_var.id_clock = add_instance( (void*) &neopixels_var);
neopixels_var.NeoPixel_NeoPixelStateChart_State = NEOPIXEL_NEOPIXELSTATECHART_RUN_STATE;
neopixels_var.NeoPixel_neopixel_pin_var = 7;
neopixels_var.NeoPixel_neopixel_count_var = 10;
neopixels_var.NeoPixel_NeoPixelStateChart_color_r_var = 255;
neopixels_var.NeoPixel_NeoPixelStateChart_color_g_var = 75;
neopixels_var.NeoPixel_NeoPixelStateChart_color_b_var = 0;
neopixels_var.NeoPixel_NeoPixelStateChart_counter_var = 0;
neopixels_var.NeoPixel_NeoPixelStateChart_countup_var = 1;

NeoPixel_NeoPixelStateChart_OnEntry(NEOPIXEL_NEOPIXELSTATECHART_STATE, &neopixels_var);
// Init the ID, state variables and properties for instance notifier
notifier_var.active = true;
notifier_var.id_blerx = add_instance( (void*) &notifier_var);
notifier_var.id_bletx = add_instance( (void*) &notifier_var);
notifier_var.id_neopixels = add_instance( (void*) &notifier_var);
notifier_var.BLENotifier_BLENotifierSC_State = BLENOTIFIER_BLENOTIFIERSC_READY_STATE;
notifier_var.BLENotifier_BLENotifierSC_SetColor_buf_var = array_notifier_BLENotifier_BLENotifierSC_SetColor_buf_var;
notifier_var.BLENotifier_BLENotifierSC_SetColor_buf_var_size = 2;

BLENotifier_BLENotifierSC_OnEntry(BLENOTIFIER_BLENOTIFIERSC_STATE, &notifier_var);
}




void setup() {
initialize_configuration_BLENotifier();

}

void loop() {

// Network Listener

timer2_read();
Serial_handle_empty_event(&uart_var);

    processMessageQueue();
}