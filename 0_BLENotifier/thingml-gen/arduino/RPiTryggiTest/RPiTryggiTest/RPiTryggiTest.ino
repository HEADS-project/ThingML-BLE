#include <stdint.h>
#include <Arduino.h>
/*****************************************************/
//                    Serial
/*****************************************************/

struct Serial_instance_type {
    uint16_t listener_id;
    /*INSTANCE_INFORMATION*/
};

extern struct Serial_instance_type Serial_instance;

void Serial_setup();

void Serial_set_listener_id(uint16_t id);

void Serial_forwardMessage(byte * msg, uint8_t size);

void Serial_read();

/********************* FORWARDERS *********************/

/*FORWARDERS*/// Forwarding of messages Serial::TryggiTest::tryggi::clear_status
void forward_Serial_TryggiTest_send_tryggi_clear_status(struct TryggiTest_Instance *_instance);
// Forwarding of messages Serial::TryggiTest::tryggi::show_error
void forward_Serial_TryggiTest_send_tryggi_show_error(struct TryggiTest_Instance *_instance);
// Forwarding of messages Serial::TryggiTest::tryggi::show_success
void forward_Serial_TryggiTest_send_tryggi_show_success(struct TryggiTest_Instance *_instance);
// Forwarding of messages Serial::TryggiTest::tryggi::ping_tryggy
void forward_Serial_TryggiTest_send_tryggi_ping_tryggy(struct TryggiTest_Instance *_instance);
// Forwarding of messages Serial::TryggiTest::tryggi::bluetooth_act
void forward_Serial_TryggiTest_send_tryggi_bluetooth_act(struct TryggiTest_Instance *_instance);
// Forwarding of messages Serial::TryggiTest::tryggi::tellucloud_act
void forward_Serial_TryggiTest_send_tryggi_tellucloud_act(struct TryggiTest_Instance *_instance);

struct timer2_instance_type {
    uint16_t listener_id;
    /*INSTANCE_INFORMATION*/
};
extern struct timer2_instance_type timer2_instance;

void timer2_setup();
void timer2_read();

//void forward_timer2_SoftButton_send_Timer_timer_start(struct SoftButton_Instance *_instance, uint8_t id, uint32_t time);
//void forward_timer2_SoftButton_send_Timer_timer_cancel(struct SoftButton_Instance *_instance, uint8_t id);
void forward_timer2_TryggiTest_send_clock_timer_start(struct TryggiTest_Instance *_instance, uint8_t id, uint32_t time);
/*****************************************************************************
 * Headers for type : TryggiTest
 *****************************************************************************/

// Definition of the instance struct:
struct TryggiTest_Instance {

// Instances of different sessions
bool active;
// Variables for the ID of the ports of the instance
uint16_t id_clock;
uint16_t id_tryggi;
// Variables for the current instance state
int TryggiTest_TryggiTestSC_State;
// Variables for the properties of the instance

};
// Declaration of prototypes outgoing messages :
void TryggiTest_TryggiTestSC_OnEntry(int state, struct TryggiTest_Instance *_instance);
void TryggiTest_handle_clock_timer_timeout(struct TryggiTest_Instance *_instance, uint8_t id);
// Declaration of callbacks for incoming messages:
void register_TryggiTest_send_clock_timer_start_listener(void (*_listener)(struct TryggiTest_Instance *, uint8_t, uint32_t));
void register_external_TryggiTest_send_clock_timer_start_listener(void (*_listener)(struct TryggiTest_Instance *, uint8_t, uint32_t));
void register_TryggiTest_send_tryggi_ping_tryggy_listener(void (*_listener)(struct TryggiTest_Instance *));
void register_external_TryggiTest_send_tryggi_ping_tryggy_listener(void (*_listener)(struct TryggiTest_Instance *));
void register_TryggiTest_send_tryggi_bluetooth_act_listener(void (*_listener)(struct TryggiTest_Instance *));
void register_external_TryggiTest_send_tryggi_bluetooth_act_listener(void (*_listener)(struct TryggiTest_Instance *));
void register_TryggiTest_send_tryggi_tellucloud_act_listener(void (*_listener)(struct TryggiTest_Instance *));
void register_external_TryggiTest_send_tryggi_tellucloud_act_listener(void (*_listener)(struct TryggiTest_Instance *));
void register_TryggiTest_send_tryggi_show_success_listener(void (*_listener)(struct TryggiTest_Instance *));
void register_external_TryggiTest_send_tryggi_show_success_listener(void (*_listener)(struct TryggiTest_Instance *));
void register_TryggiTest_send_tryggi_show_error_listener(void (*_listener)(struct TryggiTest_Instance *));
void register_external_TryggiTest_send_tryggi_show_error_listener(void (*_listener)(struct TryggiTest_Instance *));
void register_TryggiTest_send_tryggi_clear_status_listener(void (*_listener)(struct TryggiTest_Instance *));
void register_external_TryggiTest_send_tryggi_clear_status_listener(void (*_listener)(struct TryggiTest_Instance *));

// Definition of the states:
#define TRYGGITEST_TRYGGITESTSC_STATE 0
#define TRYGGITEST_TRYGGITESTSC_SUCCESS_STATE 1
#define TRYGGITEST_TRYGGITESTSC_DISCONNECTED_STATE 2
#define TRYGGITEST_TRYGGITESTSC_ERROR_STATE 3
#define TRYGGITEST_TRYGGITESTSC_CONNECTED_STATE 4
#define TRYGGITEST_TRYGGITESTSC_STDBY_STATE 5
#define TRYGGITEST_TRYGGITESTSC_BLUETOOTH_STATE 6
#define TRYGGITEST_TRYGGITESTSC_TELLU_STATE 7



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

#define MAX_INSTANCES 4
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
 * Implementation for type : TryggiTest
 *****************************************************************************/

// Declaration of prototypes:
//Prototypes: State Machine
void TryggiTest_TryggiTestSC_OnExit(int state, struct TryggiTest_Instance *_instance);
//Prototypes: Message Sending
void TryggiTest_send_clock_timer_start(struct TryggiTest_Instance *_instance, uint8_t id, uint32_t time);
void TryggiTest_send_tryggi_ping_tryggy(struct TryggiTest_Instance *_instance);
void TryggiTest_send_tryggi_bluetooth_act(struct TryggiTest_Instance *_instance);
void TryggiTest_send_tryggi_tellucloud_act(struct TryggiTest_Instance *_instance);
void TryggiTest_send_tryggi_show_success(struct TryggiTest_Instance *_instance);
void TryggiTest_send_tryggi_show_error(struct TryggiTest_Instance *_instance);
void TryggiTest_send_tryggi_clear_status(struct TryggiTest_Instance *_instance);
//Prototypes: Function
// Declaration of functions:

// Sessions functionss:


// On Entry Actions:
void TryggiTest_TryggiTestSC_OnEntry(int state, struct TryggiTest_Instance *_instance) {
switch(state) {
case TRYGGITEST_TRYGGITESTSC_STATE:{
_instance->TryggiTest_TryggiTestSC_State = TRYGGITEST_TRYGGITESTSC_DISCONNECTED_STATE;
TryggiTest_TryggiTestSC_OnEntry(_instance->TryggiTest_TryggiTestSC_State, _instance);
break;
}
case TRYGGITEST_TRYGGITESTSC_SUCCESS_STATE:{
// PRINT: "Success\n"
TryggiTest_send_clock_timer_start(_instance, 0, 1500);
TryggiTest_send_tryggi_ping_tryggy(_instance);
TryggiTest_send_tryggi_show_success(_instance);
break;
}
case TRYGGITEST_TRYGGITESTSC_DISCONNECTED_STATE:{
TryggiTest_send_clock_timer_start(_instance, 0, 3000);
break;
}
case TRYGGITEST_TRYGGITESTSC_ERROR_STATE:{
// PRINT: "Error\n"
TryggiTest_send_clock_timer_start(_instance, 0, 1500);
TryggiTest_send_tryggi_show_error(_instance);
break;
}
case TRYGGITEST_TRYGGITESTSC_CONNECTED_STATE:{
// PRINT: "Connected\n"
TryggiTest_send_clock_timer_start(_instance, 0, 4000);
TryggiTest_send_tryggi_ping_tryggy(_instance);
break;
}
case TRYGGITEST_TRYGGITESTSC_STDBY_STATE:{
// PRINT: "Standby\n"
TryggiTest_send_clock_timer_start(_instance, 0, 5000);
TryggiTest_send_tryggi_clear_status(_instance);
break;
}
case TRYGGITEST_TRYGGITESTSC_BLUETOOTH_STATE:{
// PRINT: "Bluetooth\n"
TryggiTest_send_clock_timer_start(_instance, 0, 2500);
TryggiTest_send_tryggi_ping_tryggy(_instance);
TryggiTest_send_tryggi_bluetooth_act(_instance);
break;
}
case TRYGGITEST_TRYGGITESTSC_TELLU_STATE:{
// PRINT: "Tellu\n"
TryggiTest_send_clock_timer_start(_instance, 0, 2500);
TryggiTest_send_tryggi_ping_tryggy(_instance);
TryggiTest_send_tryggi_tellucloud_act(_instance);
break;
}
default: break;
}
}

// On Exit Actions:
void TryggiTest_TryggiTestSC_OnExit(int state, struct TryggiTest_Instance *_instance) {
switch(state) {
case TRYGGITEST_TRYGGITESTSC_STATE:{
TryggiTest_TryggiTestSC_OnExit(_instance->TryggiTest_TryggiTestSC_State, _instance);
break;}
case TRYGGITEST_TRYGGITESTSC_SUCCESS_STATE:{
break;}
case TRYGGITEST_TRYGGITESTSC_DISCONNECTED_STATE:{
break;}
case TRYGGITEST_TRYGGITESTSC_ERROR_STATE:{
break;}
case TRYGGITEST_TRYGGITESTSC_CONNECTED_STATE:{
break;}
case TRYGGITEST_TRYGGITESTSC_STDBY_STATE:{
break;}
case TRYGGITEST_TRYGGITESTSC_BLUETOOTH_STATE:{
break;}
case TRYGGITEST_TRYGGITESTSC_TELLU_STATE:{
break;}
default: break;
}
}

// Event Handlers for incoming messages:
void TryggiTest_handle_clock_timer_timeout(struct TryggiTest_Instance *_instance, uint8_t id) {
if(!(_instance->active)) return;
//Region TryggiTestSC
uint8_t TryggiTest_TryggiTestSC_State_event_consumed = 0;
if (_instance->TryggiTest_TryggiTestSC_State == TRYGGITEST_TRYGGITESTSC_DISCONNECTED_STATE) {
if (TryggiTest_TryggiTestSC_State_event_consumed == 0 && 1) {
TryggiTest_TryggiTestSC_OnExit(TRYGGITEST_TRYGGITESTSC_DISCONNECTED_STATE, _instance);
_instance->TryggiTest_TryggiTestSC_State = TRYGGITEST_TRYGGITESTSC_CONNECTED_STATE;
TryggiTest_TryggiTestSC_OnEntry(TRYGGITEST_TRYGGITESTSC_CONNECTED_STATE, _instance);
TryggiTest_TryggiTestSC_State_event_consumed = 1;
}
}
else if (_instance->TryggiTest_TryggiTestSC_State == TRYGGITEST_TRYGGITESTSC_CONNECTED_STATE) {
if (TryggiTest_TryggiTestSC_State_event_consumed == 0 && 1) {
TryggiTest_TryggiTestSC_OnExit(TRYGGITEST_TRYGGITESTSC_CONNECTED_STATE, _instance);
_instance->TryggiTest_TryggiTestSC_State = TRYGGITEST_TRYGGITESTSC_BLUETOOTH_STATE;
TryggiTest_TryggiTestSC_OnEntry(TRYGGITEST_TRYGGITESTSC_BLUETOOTH_STATE, _instance);
TryggiTest_TryggiTestSC_State_event_consumed = 1;
}
}
else if (_instance->TryggiTest_TryggiTestSC_State == TRYGGITEST_TRYGGITESTSC_BLUETOOTH_STATE) {
if (TryggiTest_TryggiTestSC_State_event_consumed == 0 && 1) {
TryggiTest_TryggiTestSC_OnExit(TRYGGITEST_TRYGGITESTSC_BLUETOOTH_STATE, _instance);
_instance->TryggiTest_TryggiTestSC_State = TRYGGITEST_TRYGGITESTSC_SUCCESS_STATE;
TryggiTest_TryggiTestSC_OnEntry(TRYGGITEST_TRYGGITESTSC_SUCCESS_STATE, _instance);
TryggiTest_TryggiTestSC_State_event_consumed = 1;
}
}
else if (_instance->TryggiTest_TryggiTestSC_State == TRYGGITEST_TRYGGITESTSC_SUCCESS_STATE) {
if (TryggiTest_TryggiTestSC_State_event_consumed == 0 && 1) {
TryggiTest_TryggiTestSC_OnExit(TRYGGITEST_TRYGGITESTSC_SUCCESS_STATE, _instance);
_instance->TryggiTest_TryggiTestSC_State = TRYGGITEST_TRYGGITESTSC_TELLU_STATE;
TryggiTest_TryggiTestSC_OnEntry(TRYGGITEST_TRYGGITESTSC_TELLU_STATE, _instance);
TryggiTest_TryggiTestSC_State_event_consumed = 1;
}
}
else if (_instance->TryggiTest_TryggiTestSC_State == TRYGGITEST_TRYGGITESTSC_TELLU_STATE) {
if (TryggiTest_TryggiTestSC_State_event_consumed == 0 && 1) {
TryggiTest_TryggiTestSC_OnExit(TRYGGITEST_TRYGGITESTSC_TELLU_STATE, _instance);
_instance->TryggiTest_TryggiTestSC_State = TRYGGITEST_TRYGGITESTSC_ERROR_STATE;
TryggiTest_TryggiTestSC_OnEntry(TRYGGITEST_TRYGGITESTSC_ERROR_STATE, _instance);
TryggiTest_TryggiTestSC_State_event_consumed = 1;
}
}
else if (_instance->TryggiTest_TryggiTestSC_State == TRYGGITEST_TRYGGITESTSC_ERROR_STATE) {
if (TryggiTest_TryggiTestSC_State_event_consumed == 0 && 1) {
TryggiTest_TryggiTestSC_OnExit(TRYGGITEST_TRYGGITESTSC_ERROR_STATE, _instance);
_instance->TryggiTest_TryggiTestSC_State = TRYGGITEST_TRYGGITESTSC_STDBY_STATE;
TryggiTest_TryggiTestSC_OnEntry(TRYGGITEST_TRYGGITESTSC_STDBY_STATE, _instance);
TryggiTest_TryggiTestSC_State_event_consumed = 1;
}
}
else if (_instance->TryggiTest_TryggiTestSC_State == TRYGGITEST_TRYGGITESTSC_STDBY_STATE) {
if (TryggiTest_TryggiTestSC_State_event_consumed == 0 && 1) {
TryggiTest_TryggiTestSC_OnExit(TRYGGITEST_TRYGGITESTSC_STDBY_STATE, _instance);
_instance->TryggiTest_TryggiTestSC_State = TRYGGITEST_TRYGGITESTSC_DISCONNECTED_STATE;
TryggiTest_TryggiTestSC_OnEntry(TRYGGITEST_TRYGGITESTSC_DISCONNECTED_STATE, _instance);
TryggiTest_TryggiTestSC_State_event_consumed = 1;
}
}
//End Region TryggiTestSC
//End dsregion TryggiTestSC
//Session list: 
}

// Observers for outgoing messages:
void (*external_TryggiTest_send_clock_timer_start_listener)(struct TryggiTest_Instance *, uint8_t, uint32_t)= 0x0;
void (*TryggiTest_send_clock_timer_start_listener)(struct TryggiTest_Instance *, uint8_t, uint32_t)= 0x0;
void register_external_TryggiTest_send_clock_timer_start_listener(void (*_listener)(struct TryggiTest_Instance *, uint8_t, uint32_t)){
external_TryggiTest_send_clock_timer_start_listener = _listener;
}
void register_TryggiTest_send_clock_timer_start_listener(void (*_listener)(struct TryggiTest_Instance *, uint8_t, uint32_t)){
TryggiTest_send_clock_timer_start_listener = _listener;
}
void TryggiTest_send_clock_timer_start(struct TryggiTest_Instance *_instance, uint8_t id, uint32_t time){
if (TryggiTest_send_clock_timer_start_listener != 0x0) TryggiTest_send_clock_timer_start_listener(_instance, id, time);
if (external_TryggiTest_send_clock_timer_start_listener != 0x0) external_TryggiTest_send_clock_timer_start_listener(_instance, id, time);
;
}
void (*external_TryggiTest_send_tryggi_ping_tryggy_listener)(struct TryggiTest_Instance *)= 0x0;
void (*TryggiTest_send_tryggi_ping_tryggy_listener)(struct TryggiTest_Instance *)= 0x0;
void register_external_TryggiTest_send_tryggi_ping_tryggy_listener(void (*_listener)(struct TryggiTest_Instance *)){
external_TryggiTest_send_tryggi_ping_tryggy_listener = _listener;
}
void register_TryggiTest_send_tryggi_ping_tryggy_listener(void (*_listener)(struct TryggiTest_Instance *)){
TryggiTest_send_tryggi_ping_tryggy_listener = _listener;
}
void TryggiTest_send_tryggi_ping_tryggy(struct TryggiTest_Instance *_instance){
if (TryggiTest_send_tryggi_ping_tryggy_listener != 0x0) TryggiTest_send_tryggi_ping_tryggy_listener(_instance);
if (external_TryggiTest_send_tryggi_ping_tryggy_listener != 0x0) external_TryggiTest_send_tryggi_ping_tryggy_listener(_instance);
;
}
void (*external_TryggiTest_send_tryggi_bluetooth_act_listener)(struct TryggiTest_Instance *)= 0x0;
void (*TryggiTest_send_tryggi_bluetooth_act_listener)(struct TryggiTest_Instance *)= 0x0;
void register_external_TryggiTest_send_tryggi_bluetooth_act_listener(void (*_listener)(struct TryggiTest_Instance *)){
external_TryggiTest_send_tryggi_bluetooth_act_listener = _listener;
}
void register_TryggiTest_send_tryggi_bluetooth_act_listener(void (*_listener)(struct TryggiTest_Instance *)){
TryggiTest_send_tryggi_bluetooth_act_listener = _listener;
}
void TryggiTest_send_tryggi_bluetooth_act(struct TryggiTest_Instance *_instance){
if (TryggiTest_send_tryggi_bluetooth_act_listener != 0x0) TryggiTest_send_tryggi_bluetooth_act_listener(_instance);
if (external_TryggiTest_send_tryggi_bluetooth_act_listener != 0x0) external_TryggiTest_send_tryggi_bluetooth_act_listener(_instance);
;
}
void (*external_TryggiTest_send_tryggi_tellucloud_act_listener)(struct TryggiTest_Instance *)= 0x0;
void (*TryggiTest_send_tryggi_tellucloud_act_listener)(struct TryggiTest_Instance *)= 0x0;
void register_external_TryggiTest_send_tryggi_tellucloud_act_listener(void (*_listener)(struct TryggiTest_Instance *)){
external_TryggiTest_send_tryggi_tellucloud_act_listener = _listener;
}
void register_TryggiTest_send_tryggi_tellucloud_act_listener(void (*_listener)(struct TryggiTest_Instance *)){
TryggiTest_send_tryggi_tellucloud_act_listener = _listener;
}
void TryggiTest_send_tryggi_tellucloud_act(struct TryggiTest_Instance *_instance){
if (TryggiTest_send_tryggi_tellucloud_act_listener != 0x0) TryggiTest_send_tryggi_tellucloud_act_listener(_instance);
if (external_TryggiTest_send_tryggi_tellucloud_act_listener != 0x0) external_TryggiTest_send_tryggi_tellucloud_act_listener(_instance);
;
}
void (*external_TryggiTest_send_tryggi_show_success_listener)(struct TryggiTest_Instance *)= 0x0;
void (*TryggiTest_send_tryggi_show_success_listener)(struct TryggiTest_Instance *)= 0x0;
void register_external_TryggiTest_send_tryggi_show_success_listener(void (*_listener)(struct TryggiTest_Instance *)){
external_TryggiTest_send_tryggi_show_success_listener = _listener;
}
void register_TryggiTest_send_tryggi_show_success_listener(void (*_listener)(struct TryggiTest_Instance *)){
TryggiTest_send_tryggi_show_success_listener = _listener;
}
void TryggiTest_send_tryggi_show_success(struct TryggiTest_Instance *_instance){
if (TryggiTest_send_tryggi_show_success_listener != 0x0) TryggiTest_send_tryggi_show_success_listener(_instance);
if (external_TryggiTest_send_tryggi_show_success_listener != 0x0) external_TryggiTest_send_tryggi_show_success_listener(_instance);
;
}
void (*external_TryggiTest_send_tryggi_show_error_listener)(struct TryggiTest_Instance *)= 0x0;
void (*TryggiTest_send_tryggi_show_error_listener)(struct TryggiTest_Instance *)= 0x0;
void register_external_TryggiTest_send_tryggi_show_error_listener(void (*_listener)(struct TryggiTest_Instance *)){
external_TryggiTest_send_tryggi_show_error_listener = _listener;
}
void register_TryggiTest_send_tryggi_show_error_listener(void (*_listener)(struct TryggiTest_Instance *)){
TryggiTest_send_tryggi_show_error_listener = _listener;
}
void TryggiTest_send_tryggi_show_error(struct TryggiTest_Instance *_instance){
if (TryggiTest_send_tryggi_show_error_listener != 0x0) TryggiTest_send_tryggi_show_error_listener(_instance);
if (external_TryggiTest_send_tryggi_show_error_listener != 0x0) external_TryggiTest_send_tryggi_show_error_listener(_instance);
;
}
void (*external_TryggiTest_send_tryggi_clear_status_listener)(struct TryggiTest_Instance *)= 0x0;
void (*TryggiTest_send_tryggi_clear_status_listener)(struct TryggiTest_Instance *)= 0x0;
void register_external_TryggiTest_send_tryggi_clear_status_listener(void (*_listener)(struct TryggiTest_Instance *)){
external_TryggiTest_send_tryggi_clear_status_listener = _listener;
}
void register_TryggiTest_send_tryggi_clear_status_listener(void (*_listener)(struct TryggiTest_Instance *)){
TryggiTest_send_tryggi_clear_status_listener = _listener;
}
void TryggiTest_send_tryggi_clear_status(struct TryggiTest_Instance *_instance){
if (TryggiTest_send_tryggi_clear_status_listener != 0x0) TryggiTest_send_tryggi_clear_status_listener(_instance);
if (external_TryggiTest_send_tryggi_clear_status_listener != 0x0) external_TryggiTest_send_tryggi_clear_status_listener(_instance);
;
}



#define timer2_NB_SOFT_TIMER 4
uint32_t timer2_timer[timer2_NB_SOFT_TIMER];
uint32_t  timer2_prev_1sec = 0;



void externalMessageEnqueue(uint8_t * msg, uint8_t msgSize, uint16_t listener_id);

uint8_t timer2_interrupt_counter = 0;
SIGNAL(TIMER2_OVF_vect) {
TCNT2 = 5;
timer2_interrupt_counter++;
if(timer2_interrupt_counter >= 0) {
timer2_interrupt_counter = 0;
}
}



//struct timer2_instance_type {
//    uint16_t listener_id;
//    /*INSTANCE_INFORMATION*/
//} timer2_instance;

struct timer2_instance_type timer2_instance;


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

void timer2_timeout(uint8_t id) {
uint8_t enqueue_buf[3];
enqueue_buf[0] = (1 >> 8) & 0xFF;
enqueue_buf[1] = 1 & 0xFF;
enqueue_buf[2] = id;
externalMessageEnqueue(enqueue_buf, 3, timer2_instance.listener_id);
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
    
}
// Forwarding of messages timer2::TryggiTest::clock::timer_start
void forward_timer2_TryggiTest_send_clock_timer_start(struct TryggiTest_Instance *_instance, uint8_t id, uint32_t time){
timer2_timer_start(id, time);}

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

struct Serial_instance_type Serial_instance;

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

/*FORWARDERS*/// Forwarding of messages Serial::TryggiTest::tryggi::clear_status
void forward_Serial_TryggiTest_send_tryggi_clear_status(struct TryggiTest_Instance *_instance){
byte forward_buf[2];
forward_buf[0] = (206 >> 8) & 0xFF;
forward_buf[1] =  206 & 0xFF;


//Forwarding with specified function 
Serial_forwardMessage(forward_buf, 2);
}

// Forwarding of messages Serial::TryggiTest::tryggi::show_error
void forward_Serial_TryggiTest_send_tryggi_show_error(struct TryggiTest_Instance *_instance){
byte forward_buf[2];
forward_buf[0] = (205 >> 8) & 0xFF;
forward_buf[1] =  205 & 0xFF;


//Forwarding with specified function 
Serial_forwardMessage(forward_buf, 2);
}

// Forwarding of messages Serial::TryggiTest::tryggi::show_success
void forward_Serial_TryggiTest_send_tryggi_show_success(struct TryggiTest_Instance *_instance){
byte forward_buf[2];
forward_buf[0] = (204 >> 8) & 0xFF;
forward_buf[1] =  204 & 0xFF;


//Forwarding with specified function 
Serial_forwardMessage(forward_buf, 2);
}

// Forwarding of messages Serial::TryggiTest::tryggi::ping_tryggy
void forward_Serial_TryggiTest_send_tryggi_ping_tryggy(struct TryggiTest_Instance *_instance){
byte forward_buf[2];
forward_buf[0] = (200 >> 8) & 0xFF;
forward_buf[1] =  200 & 0xFF;


//Forwarding with specified function 
Serial_forwardMessage(forward_buf, 2);
}

// Forwarding of messages Serial::TryggiTest::tryggi::bluetooth_act
void forward_Serial_TryggiTest_send_tryggi_bluetooth_act(struct TryggiTest_Instance *_instance){
byte forward_buf[2];
forward_buf[0] = (202 >> 8) & 0xFF;
forward_buf[1] =  202 & 0xFF;


//Forwarding with specified function 
Serial_forwardMessage(forward_buf, 2);
}

// Forwarding of messages Serial::TryggiTest::tryggi::tellucloud_act
void forward_Serial_TryggiTest_send_tryggi_tellucloud_act(struct TryggiTest_Instance *_instance){
byte forward_buf[2];
forward_buf[0] = (203 >> 8) & 0xFF;
forward_buf[1] =  203 & 0xFF;


//Forwarding with specified function 
Serial_forwardMessage(forward_buf, 2);
}




/*****************************************************************************
 * Definitions for configuration : RPiTryggiTest
 *****************************************************************************/

//Declaration of instance variables
//Instance test
// Variables for the properties of the instance
struct TryggiTest_Instance test_var;
// Variables for the sessions of the instance




//New dispatcher for messages
void dispatch_timer_timeout(uint16_t sender, uint8_t param_id) {
if (sender == timer2_instance.listener_id) {
TryggiTest_handle_clock_timer_timeout(&test_var, param_id);

}

}


//New dispatcher for messages
void dispatch_pong_tryggy(uint16_t sender) {
if (sender == Serial_instance.listener_id) {

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
case 201:{
byte mbuf[4 - 2];
while (mbufi < (4 - 2)) mbuf[mbufi++] = fifo_dequeue();
uint8_t mbufi_pong_tryggy = 2;
dispatch_pong_tryggy((mbuf[0] << 8) + mbuf[1] /* instance port*/);
break;
}
}
return 1;
}

void forward_TryggiTest_send_tryggi_tellucloud_act(struct TryggiTest_Instance *_instance){
if(_instance->id_tryggi == test_var.id_tryggi) {
forward_Serial_TryggiTest_send_tryggi_tellucloud_act(_instance);
}
}
void forward_TryggiTest_send_tryggi_show_success(struct TryggiTest_Instance *_instance){
if(_instance->id_tryggi == test_var.id_tryggi) {
forward_Serial_TryggiTest_send_tryggi_show_success(_instance);
}
}
void forward_TryggiTest_send_clock_timer_start(struct TryggiTest_Instance *_instance, uint8_t id, uint32_t time){
if(_instance->id_clock == test_var.id_clock) {
forward_timer2_TryggiTest_send_clock_timer_start(_instance, id, time);
}
}
void forward_TryggiTest_send_tryggi_show_error(struct TryggiTest_Instance *_instance){
if(_instance->id_tryggi == test_var.id_tryggi) {
forward_Serial_TryggiTest_send_tryggi_show_error(_instance);
}
}
void forward_TryggiTest_send_tryggi_bluetooth_act(struct TryggiTest_Instance *_instance){
if(_instance->id_tryggi == test_var.id_tryggi) {
forward_Serial_TryggiTest_send_tryggi_bluetooth_act(_instance);
}
}
void forward_TryggiTest_send_tryggi_clear_status(struct TryggiTest_Instance *_instance){
if(_instance->id_tryggi == test_var.id_tryggi) {
forward_Serial_TryggiTest_send_tryggi_clear_status(_instance);
}
}
void forward_TryggiTest_send_tryggi_ping_tryggy(struct TryggiTest_Instance *_instance){
if(_instance->id_tryggi == test_var.id_tryggi) {
forward_Serial_TryggiTest_send_tryggi_ping_tryggy(_instance);
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
case 201:
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

void initialize_configuration_RPiTryggiTest() {
// Initialize connectors
register_external_TryggiTest_send_clock_timer_start_listener(&forward_TryggiTest_send_clock_timer_start);
register_external_TryggiTest_send_tryggi_ping_tryggy_listener(&forward_TryggiTest_send_tryggi_ping_tryggy);
register_external_TryggiTest_send_tryggi_bluetooth_act_listener(&forward_TryggiTest_send_tryggi_bluetooth_act);
register_external_TryggiTest_send_tryggi_tellucloud_act_listener(&forward_TryggiTest_send_tryggi_tellucloud_act);
register_external_TryggiTest_send_tryggi_show_success_listener(&forward_TryggiTest_send_tryggi_show_success);
register_external_TryggiTest_send_tryggi_show_error_listener(&forward_TryggiTest_send_tryggi_show_error);
register_external_TryggiTest_send_tryggi_clear_status_listener(&forward_TryggiTest_send_tryggi_clear_status);

// Init the ID, state variables and properties for external connector timer2
// Init the ID, state variables and properties for external connector Serial

// Network Initialization

Serial_instance.listener_id = add_instance(&Serial_instance);

Serial_setup();


timer2_instance.listener_id = add_instance(&timer2_instance);

timer2_setup();

// End Network Initialization

// Init the ID, state variables and properties for instance test
test_var.active = true;
test_var.id_clock = add_instance( (void*) &test_var);
test_var.id_tryggi = add_instance( (void*) &test_var);
test_var.TryggiTest_TryggiTestSC_State = TRYGGITEST_TRYGGITESTSC_DISCONNECTED_STATE;

TryggiTest_TryggiTestSC_OnEntry(TRYGGITEST_TRYGGITESTSC_STATE, &test_var);
}




void setup() {
initialize_configuration_RPiTryggiTest();

}

void loop() {

// Network Listener
Serial_read();

timer2_read();
// End Network Listener

int emptyEventConsumed = 1;
while (emptyEventConsumed != 0) {
emptyEventConsumed = 0;
}

    processMessageQueue();
}
