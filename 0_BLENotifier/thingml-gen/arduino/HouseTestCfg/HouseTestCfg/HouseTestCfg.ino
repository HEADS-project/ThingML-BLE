/*****************************************************************************
 * Headers for type : Door
 *****************************************************************************/


// BEGIN: Code from the c_header annotation Door
#include <Servo.h>
// END: Code from the c_header annotation Door

// Definition of the instance struct:
struct Door_Instance {

// Instances of different sessions
bool active;
// Variables for the ID of the ports of the instance
uint16_t id_cmds;
uint16_t id_clock;
// Variables for the current instance state
int Door_DoorSC_State;
// Variables for the properties of the instance
uint8_t Door_servo_pin_var;
Servo Door_servo_var;
uint8_t Door_vOPEN_var;
uint8_t Door_ID_var;
uint8_t Door_vCLOSE_var;
uint8_t Door_DoorSC_servo_value_var;

};
// Declaration of prototypes outgoing messages:
void Door_DoorSC_OnEntry(int state, struct Door_Instance *_instance);
void Door_handle_clock_clock_25ms(struct Door_Instance *_instance);
void Door_handle_cmds_openDoor(struct Door_Instance *_instance, uint8_t id);
void Door_handle_cmds_closeDoor(struct Door_Instance *_instance, uint8_t id);
// Declaration of callbacks for incoming messages:

// Definition of the states:
#define DOOR_DOORSC_STATE 0
#define DOOR_DOORSC_CLOSING_STATE 1
#define DOOR_DOORSC_CLOSED_STATE 2
#define DOOR_DOORSC_OPENING_STATE 3
#define DOOR_DOORSC_OPENED_STATE 4


/*****************************************************************************
 * Headers for type : Light
 *****************************************************************************/

// Definition of the instance struct:
struct Light_Instance {

// Instances of different sessions
bool active;
// Variables for the ID of the ports of the instance
uint16_t id_cmds;
// Variables for the current instance state
int Light_LightSC_State;
// Variables for the properties of the instance
uint8_t Light_ID_var;
uint8_t Light_digital_pin_var;

};
// Declaration of prototypes outgoing messages:
void Light_LightSC_OnEntry(int state, struct Light_Instance *_instance);
void Light_handle_cmds_setLight(struct Light_Instance *_instance, uint8_t id, uint8_t v);
// Declaration of callbacks for incoming messages:

// Definition of the states:
#define LIGHT_LIGHTSC_STATE 0
#define LIGHT_LIGHTSC_OFF_STATE 1
#define LIGHT_LIGHTSC_ON_STATE 2


/*****************************************************************************
 * Headers for type : HouseTest
 *****************************************************************************/

// Definition of the instance struct:
struct HouseTest_Instance {

// Instances of different sessions
bool active;
// Variables for the ID of the ports of the instance
uint16_t id_timer;
uint16_t id_house;
// Variables for the current instance state
int HouseTest_HouseTest_State;
// Variables for the properties of the instance
uint8_t HouseTest_HouseTest_OpenDoors_door_var;
uint8_t HouseTest_NB_LIGHTS_var;
uint8_t HouseTest_NB_DOORS_var;
uint8_t HouseTest_HouseTest_LightsOn_light_var;

};
// Declaration of prototypes outgoing messages:
void HouseTest_HouseTest_OnEntry(int state, struct HouseTest_Instance *_instance);
void HouseTest_handle_timer_timer_timeout(struct HouseTest_Instance *_instance, uint8_t id);
// Declaration of callbacks for incoming messages:
void register_HouseTest_send_timer_timer_start_listener(void (*_listener)(struct HouseTest_Instance *, uint8_t, uint32_t));
void register_external_HouseTest_send_timer_timer_start_listener(void (*_listener)(struct HouseTest_Instance *, uint8_t, uint32_t));
void register_HouseTest_send_house_setLight_listener(void (*_listener)(struct HouseTest_Instance *, uint8_t, uint8_t));
void register_external_HouseTest_send_house_setLight_listener(void (*_listener)(struct HouseTest_Instance *, uint8_t, uint8_t));
void register_HouseTest_send_house_openDoor_listener(void (*_listener)(struct HouseTest_Instance *, uint8_t));
void register_external_HouseTest_send_house_openDoor_listener(void (*_listener)(struct HouseTest_Instance *, uint8_t));
void register_HouseTest_send_house_closeDoor_listener(void (*_listener)(struct HouseTest_Instance *, uint8_t));
void register_external_HouseTest_send_house_closeDoor_listener(void (*_listener)(struct HouseTest_Instance *, uint8_t));

// Definition of the states:
#define HOUSETEST_HOUSETEST_STATE 0
#define HOUSETEST_HOUSETEST_INIT_STATE 1
#define HOUSETEST_HOUSETEST_LIGHTSON_STATE 2
#define HOUSETEST_HOUSETEST_OPENDOORS_STATE 3
#define HOUSETEST_HOUSETEST_WAIT_STATE 4


/*****************************************************************************
 * Headers for type : House
 *****************************************************************************/

// Definition of the instance struct:
struct House_Instance {

// Instances of different sessions
bool active;
// Variables for the ID of the ports of the instance
uint16_t id_housecontrol;
uint16_t id_housebus;
// Variables for the current instance state
int House_House_State;
// Variables for the properties of the instance

};
// Declaration of prototypes outgoing messages:
void House_House_OnEntry(int state, struct House_Instance *_instance);
void House_handle_housecontrol_openDoor(struct House_Instance *_instance, uint8_t id);
void House_handle_housecontrol_setLight(struct House_Instance *_instance, uint8_t id, uint8_t v);
void House_handle_housecontrol_closeDoor(struct House_Instance *_instance, uint8_t id);
// Declaration of callbacks for incoming messages:
void register_House_send_housebus_setLight_listener(void (*_listener)(struct House_Instance *, uint8_t, uint8_t));
void register_external_House_send_housebus_setLight_listener(void (*_listener)(struct House_Instance *, uint8_t, uint8_t));
void register_House_send_housebus_openDoor_listener(void (*_listener)(struct House_Instance *, uint8_t));
void register_external_House_send_housebus_openDoor_listener(void (*_listener)(struct House_Instance *, uint8_t));
void register_House_send_housebus_closeDoor_listener(void (*_listener)(struct House_Instance *, uint8_t));
void register_external_House_send_housebus_closeDoor_listener(void (*_listener)(struct House_Instance *, uint8_t));

// Definition of the states:
#define HOUSE_HOUSE_STATE 0
#define HOUSE_HOUSE_READY_STATE 1



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

/*****************************************************************************
 * Implementation for type : House
 *****************************************************************************/

// Declaration of prototypes:
//Prototypes: State Machine
void House_House_OnExit(int state, struct House_Instance *_instance);
//Prototypes: Message Sending
void House_send_housebus_setLight(struct House_Instance *_instance, uint8_t id, uint8_t v);
void House_send_housebus_openDoor(struct House_Instance *_instance, uint8_t id);
void House_send_housebus_closeDoor(struct House_Instance *_instance, uint8_t id);
//Prototypes: Function
// Declaration of functions:

// Sessions functionss:


// On Entry Actions:
void House_House_OnEntry(int state, struct House_Instance *_instance) {
switch(state) {
case HOUSE_HOUSE_STATE:{
_instance->House_House_State = HOUSE_HOUSE_READY_STATE;
House_House_OnEntry(_instance->House_House_State, _instance);
break;
}
case HOUSE_HOUSE_READY_STATE:{
break;
}
default: break;
}
}

// On Exit Actions:
void House_House_OnExit(int state, struct House_Instance *_instance) {
switch(state) {
case HOUSE_HOUSE_STATE:{
House_House_OnExit(_instance->House_House_State, _instance);
break;}
case HOUSE_HOUSE_READY_STATE:{
break;}
default: break;
}
}

// Event Handlers for incoming messages:
void House_handle_housecontrol_openDoor(struct House_Instance *_instance, uint8_t id) {
if(!(_instance->active)) return;
//Region House
uint8_t House_House_State_event_consumed = 0;
if (_instance->House_House_State == HOUSE_HOUSE_READY_STATE) {
if (House_House_State_event_consumed == 0 && 1) {
House_send_housebus_openDoor(_instance, id);
House_House_State_event_consumed = 1;
}
}
//End Region House
//End dsregion House
//Session list: 
}
void House_handle_housecontrol_setLight(struct House_Instance *_instance, uint8_t id, uint8_t v) {
if(!(_instance->active)) return;
//Region House
uint8_t House_House_State_event_consumed = 0;
if (_instance->House_House_State == HOUSE_HOUSE_READY_STATE) {
if (House_House_State_event_consumed == 0 && 1) {
House_send_housebus_setLight(_instance, id, v);
House_House_State_event_consumed = 1;
}
}
//End Region House
//End dsregion House
//Session list: 
}
void House_handle_housecontrol_closeDoor(struct House_Instance *_instance, uint8_t id) {
if(!(_instance->active)) return;
//Region House
uint8_t House_House_State_event_consumed = 0;
if (_instance->House_House_State == HOUSE_HOUSE_READY_STATE) {
if (House_House_State_event_consumed == 0 && 1) {
House_send_housebus_closeDoor(_instance, id);
House_House_State_event_consumed = 1;
}
}
//End Region House
//End dsregion House
//Session list: 
}

// Observers for outgoing messages:
void (*external_House_send_housebus_setLight_listener)(struct House_Instance *, uint8_t, uint8_t)= 0x0;
void (*House_send_housebus_setLight_listener)(struct House_Instance *, uint8_t, uint8_t)= 0x0;
void register_external_House_send_housebus_setLight_listener(void (*_listener)(struct House_Instance *, uint8_t, uint8_t)){
external_House_send_housebus_setLight_listener = _listener;
}
void register_House_send_housebus_setLight_listener(void (*_listener)(struct House_Instance *, uint8_t, uint8_t)){
House_send_housebus_setLight_listener = _listener;
}
void House_send_housebus_setLight(struct House_Instance *_instance, uint8_t id, uint8_t v){
if (House_send_housebus_setLight_listener != 0x0) House_send_housebus_setLight_listener(_instance, id, v);
if (external_House_send_housebus_setLight_listener != 0x0) external_House_send_housebus_setLight_listener(_instance, id, v);
;
}
void (*external_House_send_housebus_openDoor_listener)(struct House_Instance *, uint8_t)= 0x0;
void (*House_send_housebus_openDoor_listener)(struct House_Instance *, uint8_t)= 0x0;
void register_external_House_send_housebus_openDoor_listener(void (*_listener)(struct House_Instance *, uint8_t)){
external_House_send_housebus_openDoor_listener = _listener;
}
void register_House_send_housebus_openDoor_listener(void (*_listener)(struct House_Instance *, uint8_t)){
House_send_housebus_openDoor_listener = _listener;
}
void House_send_housebus_openDoor(struct House_Instance *_instance, uint8_t id){
if (House_send_housebus_openDoor_listener != 0x0) House_send_housebus_openDoor_listener(_instance, id);
if (external_House_send_housebus_openDoor_listener != 0x0) external_House_send_housebus_openDoor_listener(_instance, id);
;
}
void (*external_House_send_housebus_closeDoor_listener)(struct House_Instance *, uint8_t)= 0x0;
void (*House_send_housebus_closeDoor_listener)(struct House_Instance *, uint8_t)= 0x0;
void register_external_House_send_housebus_closeDoor_listener(void (*_listener)(struct House_Instance *, uint8_t)){
external_House_send_housebus_closeDoor_listener = _listener;
}
void register_House_send_housebus_closeDoor_listener(void (*_listener)(struct House_Instance *, uint8_t)){
House_send_housebus_closeDoor_listener = _listener;
}
void House_send_housebus_closeDoor(struct House_Instance *_instance, uint8_t id){
if (House_send_housebus_closeDoor_listener != 0x0) House_send_housebus_closeDoor_listener(_instance, id);
if (external_House_send_housebus_closeDoor_listener != 0x0) external_House_send_housebus_closeDoor_listener(_instance, id);
;
}



/*****************************************************************************
 * Implementation for type : Light
 *****************************************************************************/

// Declaration of prototypes:
//Prototypes: State Machine
void Light_LightSC_OnExit(int state, struct Light_Instance *_instance);
//Prototypes: Message Sending
//Prototypes: Function
// Declaration of functions:

// Sessions functionss:


// On Entry Actions:
void Light_LightSC_OnEntry(int state, struct Light_Instance *_instance) {
switch(state) {
case LIGHT_LIGHTSC_STATE:{
_instance->Light_LightSC_State = LIGHT_LIGHTSC_OFF_STATE;
pinMode(_instance->Light_digital_pin_var, OUTPUT);
Light_LightSC_OnEntry(_instance->Light_LightSC_State, _instance);
break;
}
case LIGHT_LIGHTSC_OFF_STATE:{
digitalWrite(_instance->Light_digital_pin_var, LOW);
break;
}
case LIGHT_LIGHTSC_ON_STATE:{
digitalWrite(_instance->Light_digital_pin_var, HIGH);
break;
}
default: break;
}
}

// On Exit Actions:
void Light_LightSC_OnExit(int state, struct Light_Instance *_instance) {
switch(state) {
case LIGHT_LIGHTSC_STATE:{
Light_LightSC_OnExit(_instance->Light_LightSC_State, _instance);
break;}
case LIGHT_LIGHTSC_OFF_STATE:{
break;}
case LIGHT_LIGHTSC_ON_STATE:{
break;}
default: break;
}
}

// Event Handlers for incoming messages:
void Light_handle_cmds_setLight(struct Light_Instance *_instance, uint8_t id, uint8_t v) {
if(!(_instance->active)) return;
//Region LightSC
uint8_t Light_LightSC_State_event_consumed = 0;
if (_instance->Light_LightSC_State == LIGHT_LIGHTSC_OFF_STATE) {
if (Light_LightSC_State_event_consumed == 0 && (id == _instance->Light_ID_var || id == 0) && v > 0) {
Light_LightSC_OnExit(LIGHT_LIGHTSC_OFF_STATE, _instance);
_instance->Light_LightSC_State = LIGHT_LIGHTSC_ON_STATE;
Light_LightSC_OnEntry(LIGHT_LIGHTSC_ON_STATE, _instance);
Light_LightSC_State_event_consumed = 1;
}
}
else if (_instance->Light_LightSC_State == LIGHT_LIGHTSC_ON_STATE) {
if (Light_LightSC_State_event_consumed == 0 && (id == _instance->Light_ID_var || id == 0) && v == 0) {
Light_LightSC_OnExit(LIGHT_LIGHTSC_ON_STATE, _instance);
_instance->Light_LightSC_State = LIGHT_LIGHTSC_OFF_STATE;
Light_LightSC_OnEntry(LIGHT_LIGHTSC_OFF_STATE, _instance);
Light_LightSC_State_event_consumed = 1;
}
}
//End Region LightSC
//End dsregion LightSC
//Session list: 
}

// Observers for outgoing messages:



/*****************************************************************************
 * Implementation for type : Door
 *****************************************************************************/

// Declaration of prototypes:
//Prototypes: State Machine
void Door_DoorSC_OnExit(int state, struct Door_Instance *_instance);
//Prototypes: Message Sending
//Prototypes: Function
// Declaration of functions:

// Sessions functionss:


// On Entry Actions:
void Door_DoorSC_OnEntry(int state, struct Door_Instance *_instance) {
switch(state) {
case DOOR_DOORSC_STATE:{
_instance->Door_DoorSC_State = DOOR_DOORSC_CLOSING_STATE;
Door_DoorSC_OnEntry(_instance->Door_DoorSC_State, _instance);
break;
}
case DOOR_DOORSC_CLOSING_STATE:{
_instance->Door_servo_var.attach(_instance->Door_servo_pin_var);
break;
}
case DOOR_DOORSC_CLOSED_STATE:{
break;
}
case DOOR_DOORSC_OPENING_STATE:{
_instance->Door_servo_var.attach(_instance->Door_servo_pin_var);
break;
}
case DOOR_DOORSC_OPENED_STATE:{
break;
}
default: break;
}
}

// On Exit Actions:
void Door_DoorSC_OnExit(int state, struct Door_Instance *_instance) {
switch(state) {
case DOOR_DOORSC_STATE:{
Door_DoorSC_OnExit(_instance->Door_DoorSC_State, _instance);
break;}
case DOOR_DOORSC_CLOSING_STATE:{
_instance->Door_servo_var.detach();
break;}
case DOOR_DOORSC_CLOSED_STATE:{
break;}
case DOOR_DOORSC_OPENING_STATE:{
_instance->Door_servo_var.detach();
break;}
case DOOR_DOORSC_OPENED_STATE:{
break;}
default: break;
}
}

// Event Handlers for incoming messages:
void Door_handle_clock_clock_25ms(struct Door_Instance *_instance) {
if(!(_instance->active)) return;
//Region DoorSC
uint8_t Door_DoorSC_State_event_consumed = 0;
if (_instance->Door_DoorSC_State == DOOR_DOORSC_CLOSING_STATE) {
if (Door_DoorSC_State_event_consumed == 0 && _instance->Door_DoorSC_servo_value_var < _instance->Door_vCLOSE_var) {
_instance->Door_DoorSC_servo_value_var = _instance->Door_DoorSC_servo_value_var + 1;
_instance->Door_servo_var.write(_instance->Door_DoorSC_servo_value_var);
Door_DoorSC_State_event_consumed = 1;
}
}
else if (_instance->Door_DoorSC_State == DOOR_DOORSC_OPENING_STATE) {
if (Door_DoorSC_State_event_consumed == 0 && _instance->Door_DoorSC_servo_value_var > _instance->Door_vOPEN_var) {
_instance->Door_DoorSC_servo_value_var = _instance->Door_DoorSC_servo_value_var - 1;
_instance->Door_servo_var.write(_instance->Door_DoorSC_servo_value_var);
Door_DoorSC_State_event_consumed = 1;
}
}
//End Region DoorSC
//End dsregion DoorSC
//Session list: 
}
void Door_handle_cmds_openDoor(struct Door_Instance *_instance, uint8_t id) {
if(!(_instance->active)) return;
//Region DoorSC
uint8_t Door_DoorSC_State_event_consumed = 0;
if (_instance->Door_DoorSC_State == DOOR_DOORSC_CLOSING_STATE) {
if (Door_DoorSC_State_event_consumed == 0 && (id == _instance->Door_ID_var || id == 0)) {
Door_DoorSC_OnExit(DOOR_DOORSC_CLOSING_STATE, _instance);
_instance->Door_DoorSC_State = DOOR_DOORSC_OPENING_STATE;
Door_DoorSC_OnEntry(DOOR_DOORSC_OPENING_STATE, _instance);
Door_DoorSC_State_event_consumed = 1;
}
}
else if (_instance->Door_DoorSC_State == DOOR_DOORSC_CLOSED_STATE) {
if (Door_DoorSC_State_event_consumed == 0 && (id == _instance->Door_ID_var || id == 0)) {
Door_DoorSC_OnExit(DOOR_DOORSC_CLOSED_STATE, _instance);
_instance->Door_DoorSC_State = DOOR_DOORSC_OPENING_STATE;
Door_DoorSC_OnEntry(DOOR_DOORSC_OPENING_STATE, _instance);
Door_DoorSC_State_event_consumed = 1;
}
}
//End Region DoorSC
//End dsregion DoorSC
//Session list: 
}
void Door_handle_cmds_closeDoor(struct Door_Instance *_instance, uint8_t id) {
if(!(_instance->active)) return;
//Region DoorSC
uint8_t Door_DoorSC_State_event_consumed = 0;
if (_instance->Door_DoorSC_State == DOOR_DOORSC_OPENING_STATE) {
if (Door_DoorSC_State_event_consumed == 0 && (id == _instance->Door_ID_var || id == 0)) {
Door_DoorSC_OnExit(DOOR_DOORSC_OPENING_STATE, _instance);
_instance->Door_DoorSC_State = DOOR_DOORSC_CLOSING_STATE;
Door_DoorSC_OnEntry(DOOR_DOORSC_CLOSING_STATE, _instance);
Door_DoorSC_State_event_consumed = 1;
}
}
else if (_instance->Door_DoorSC_State == DOOR_DOORSC_OPENED_STATE) {
if (Door_DoorSC_State_event_consumed == 0 && (id == _instance->Door_ID_var || id == 0)) {
Door_DoorSC_OnExit(DOOR_DOORSC_OPENED_STATE, _instance);
_instance->Door_DoorSC_State = DOOR_DOORSC_CLOSING_STATE;
Door_DoorSC_OnEntry(DOOR_DOORSC_CLOSING_STATE, _instance);
Door_DoorSC_State_event_consumed = 1;
}
}
//End Region DoorSC
//End dsregion DoorSC
//Session list: 
}
int Door_handle_empty_event(struct Door_Instance *_instance) {
 uint8_t empty_event_consumed = 0;
if(!(_instance->active)) return 0;
//Region DoorSC
if (_instance->Door_DoorSC_State == DOOR_DOORSC_CLOSING_STATE) {
if (_instance->Door_DoorSC_servo_value_var >= _instance->Door_vCLOSE_var) {
Door_DoorSC_OnExit(DOOR_DOORSC_CLOSING_STATE, _instance);
_instance->Door_DoorSC_State = DOOR_DOORSC_CLOSED_STATE;
Door_DoorSC_OnEntry(DOOR_DOORSC_CLOSED_STATE, _instance);
return 1;
}
}
else if (_instance->Door_DoorSC_State == DOOR_DOORSC_OPENING_STATE) {
if (_instance->Door_DoorSC_servo_value_var <= _instance->Door_vOPEN_var) {
Door_DoorSC_OnExit(DOOR_DOORSC_OPENING_STATE, _instance);
_instance->Door_DoorSC_State = DOOR_DOORSC_OPENED_STATE;
Door_DoorSC_OnEntry(DOOR_DOORSC_OPENED_STATE, _instance);
return 1;
}
}
//begin dispatchEmptyToSession
//end dispatchEmptyToSession
return empty_event_consumed;
}

// Observers for outgoing messages:



/*****************************************************************************
 * Implementation for type : HouseTest
 *****************************************************************************/

// Declaration of prototypes:
//Prototypes: State Machine
void HouseTest_HouseTest_OnExit(int state, struct HouseTest_Instance *_instance);
//Prototypes: Message Sending
void HouseTest_send_timer_timer_start(struct HouseTest_Instance *_instance, uint8_t id, uint32_t time);
void HouseTest_send_house_setLight(struct HouseTest_Instance *_instance, uint8_t id, uint8_t v);
void HouseTest_send_house_openDoor(struct HouseTest_Instance *_instance, uint8_t id);
void HouseTest_send_house_closeDoor(struct HouseTest_Instance *_instance, uint8_t id);
//Prototypes: Function
// Declaration of functions:

// Sessions functionss:


// On Entry Actions:
void HouseTest_HouseTest_OnEntry(int state, struct HouseTest_Instance *_instance) {
switch(state) {
case HOUSETEST_HOUSETEST_STATE:{
_instance->HouseTest_HouseTest_State = HOUSETEST_HOUSETEST_INIT_STATE;
HouseTest_HouseTest_OnEntry(_instance->HouseTest_HouseTest_State, _instance);
break;
}
case HOUSETEST_HOUSETEST_INIT_STATE:{
HouseTest_send_timer_timer_start(_instance, 0, 2000);
HouseTest_send_house_closeDoor(_instance, 0);
HouseTest_send_house_setLight(_instance, 0, 0);
break;
}
case HOUSETEST_HOUSETEST_LIGHTSON_STATE:{
_instance->HouseTest_HouseTest_LightsOn_light_var = 1;
HouseTest_send_timer_timer_start(_instance, 0, 500);
break;
}
case HOUSETEST_HOUSETEST_OPENDOORS_STATE:{
_instance->HouseTest_HouseTest_OpenDoors_door_var = 1;
HouseTest_send_timer_timer_start(_instance, 0, 500);
break;
}
case HOUSETEST_HOUSETEST_WAIT_STATE:{
HouseTest_send_timer_timer_start(_instance, 0, 2000);
break;
}
default: break;
}
}

// On Exit Actions:
void HouseTest_HouseTest_OnExit(int state, struct HouseTest_Instance *_instance) {
switch(state) {
case HOUSETEST_HOUSETEST_STATE:{
HouseTest_HouseTest_OnExit(_instance->HouseTest_HouseTest_State, _instance);
break;}
case HOUSETEST_HOUSETEST_INIT_STATE:{
break;}
case HOUSETEST_HOUSETEST_LIGHTSON_STATE:{
break;}
case HOUSETEST_HOUSETEST_OPENDOORS_STATE:{
break;}
case HOUSETEST_HOUSETEST_WAIT_STATE:{
break;}
default: break;
}
}

// Event Handlers for incoming messages:
void HouseTest_handle_timer_timer_timeout(struct HouseTest_Instance *_instance, uint8_t id) {
if(!(_instance->active)) return;
//Region HouseTest
uint8_t HouseTest_HouseTest_State_event_consumed = 0;
if (_instance->HouseTest_HouseTest_State == HOUSETEST_HOUSETEST_INIT_STATE) {
if (HouseTest_HouseTest_State_event_consumed == 0 && 1) {
HouseTest_HouseTest_OnExit(HOUSETEST_HOUSETEST_INIT_STATE, _instance);
_instance->HouseTest_HouseTest_State = HOUSETEST_HOUSETEST_LIGHTSON_STATE;
HouseTest_HouseTest_OnEntry(HOUSETEST_HOUSETEST_LIGHTSON_STATE, _instance);
HouseTest_HouseTest_State_event_consumed = 1;
}
}
else if (_instance->HouseTest_HouseTest_State == HOUSETEST_HOUSETEST_LIGHTSON_STATE) {
if (HouseTest_HouseTest_State_event_consumed == 0 && _instance->HouseTest_HouseTest_LightsOn_light_var > _instance->HouseTest_NB_LIGHTS_var) {
HouseTest_HouseTest_OnExit(HOUSETEST_HOUSETEST_LIGHTSON_STATE, _instance);
_instance->HouseTest_HouseTest_State = HOUSETEST_HOUSETEST_OPENDOORS_STATE;
HouseTest_HouseTest_OnEntry(HOUSETEST_HOUSETEST_OPENDOORS_STATE, _instance);
HouseTest_HouseTest_State_event_consumed = 1;
}
else if (HouseTest_HouseTest_State_event_consumed == 0 && _instance->HouseTest_HouseTest_LightsOn_light_var <= _instance->HouseTest_NB_LIGHTS_var) {
HouseTest_send_house_setLight(_instance, _instance->HouseTest_HouseTest_LightsOn_light_var, 1);
_instance->HouseTest_HouseTest_LightsOn_light_var = _instance->HouseTest_HouseTest_LightsOn_light_var + 1;
HouseTest_send_timer_timer_start(_instance, 0, 500);
HouseTest_HouseTest_State_event_consumed = 1;
}
}
else if (_instance->HouseTest_HouseTest_State == HOUSETEST_HOUSETEST_OPENDOORS_STATE) {
if (HouseTest_HouseTest_State_event_consumed == 0 && _instance->HouseTest_HouseTest_OpenDoors_door_var > _instance->HouseTest_NB_DOORS_var) {
HouseTest_HouseTest_OnExit(HOUSETEST_HOUSETEST_OPENDOORS_STATE, _instance);
_instance->HouseTest_HouseTest_State = HOUSETEST_HOUSETEST_WAIT_STATE;
HouseTest_HouseTest_OnEntry(HOUSETEST_HOUSETEST_WAIT_STATE, _instance);
HouseTest_HouseTest_State_event_consumed = 1;
}
else if (HouseTest_HouseTest_State_event_consumed == 0 && _instance->HouseTest_HouseTest_OpenDoors_door_var <= _instance->HouseTest_NB_DOORS_var) {
HouseTest_send_house_openDoor(_instance, _instance->HouseTest_HouseTest_OpenDoors_door_var);
_instance->HouseTest_HouseTest_OpenDoors_door_var = _instance->HouseTest_HouseTest_OpenDoors_door_var + 1;
HouseTest_send_timer_timer_start(_instance, 0, 2000);
HouseTest_HouseTest_State_event_consumed = 1;
}
}
else if (_instance->HouseTest_HouseTest_State == HOUSETEST_HOUSETEST_WAIT_STATE) {
if (HouseTest_HouseTest_State_event_consumed == 0 && 1) {
HouseTest_HouseTest_OnExit(HOUSETEST_HOUSETEST_WAIT_STATE, _instance);
_instance->HouseTest_HouseTest_State = HOUSETEST_HOUSETEST_INIT_STATE;
HouseTest_HouseTest_OnEntry(HOUSETEST_HOUSETEST_INIT_STATE, _instance);
HouseTest_HouseTest_State_event_consumed = 1;
}
}
//End Region HouseTest
//End dsregion HouseTest
//Session list: 
}

// Observers for outgoing messages:
void (*external_HouseTest_send_timer_timer_start_listener)(struct HouseTest_Instance *, uint8_t, uint32_t)= 0x0;
void (*HouseTest_send_timer_timer_start_listener)(struct HouseTest_Instance *, uint8_t, uint32_t)= 0x0;
void register_external_HouseTest_send_timer_timer_start_listener(void (*_listener)(struct HouseTest_Instance *, uint8_t, uint32_t)){
external_HouseTest_send_timer_timer_start_listener = _listener;
}
void register_HouseTest_send_timer_timer_start_listener(void (*_listener)(struct HouseTest_Instance *, uint8_t, uint32_t)){
HouseTest_send_timer_timer_start_listener = _listener;
}
void HouseTest_send_timer_timer_start(struct HouseTest_Instance *_instance, uint8_t id, uint32_t time){
if (HouseTest_send_timer_timer_start_listener != 0x0) HouseTest_send_timer_timer_start_listener(_instance, id, time);
if (external_HouseTest_send_timer_timer_start_listener != 0x0) external_HouseTest_send_timer_timer_start_listener(_instance, id, time);
;
}
void (*external_HouseTest_send_house_setLight_listener)(struct HouseTest_Instance *, uint8_t, uint8_t)= 0x0;
void (*HouseTest_send_house_setLight_listener)(struct HouseTest_Instance *, uint8_t, uint8_t)= 0x0;
void register_external_HouseTest_send_house_setLight_listener(void (*_listener)(struct HouseTest_Instance *, uint8_t, uint8_t)){
external_HouseTest_send_house_setLight_listener = _listener;
}
void register_HouseTest_send_house_setLight_listener(void (*_listener)(struct HouseTest_Instance *, uint8_t, uint8_t)){
HouseTest_send_house_setLight_listener = _listener;
}
void HouseTest_send_house_setLight(struct HouseTest_Instance *_instance, uint8_t id, uint8_t v){
if (HouseTest_send_house_setLight_listener != 0x0) HouseTest_send_house_setLight_listener(_instance, id, v);
if (external_HouseTest_send_house_setLight_listener != 0x0) external_HouseTest_send_house_setLight_listener(_instance, id, v);
;
}
void (*external_HouseTest_send_house_openDoor_listener)(struct HouseTest_Instance *, uint8_t)= 0x0;
void (*HouseTest_send_house_openDoor_listener)(struct HouseTest_Instance *, uint8_t)= 0x0;
void register_external_HouseTest_send_house_openDoor_listener(void (*_listener)(struct HouseTest_Instance *, uint8_t)){
external_HouseTest_send_house_openDoor_listener = _listener;
}
void register_HouseTest_send_house_openDoor_listener(void (*_listener)(struct HouseTest_Instance *, uint8_t)){
HouseTest_send_house_openDoor_listener = _listener;
}
void HouseTest_send_house_openDoor(struct HouseTest_Instance *_instance, uint8_t id){
if (HouseTest_send_house_openDoor_listener != 0x0) HouseTest_send_house_openDoor_listener(_instance, id);
if (external_HouseTest_send_house_openDoor_listener != 0x0) external_HouseTest_send_house_openDoor_listener(_instance, id);
;
}
void (*external_HouseTest_send_house_closeDoor_listener)(struct HouseTest_Instance *, uint8_t)= 0x0;
void (*HouseTest_send_house_closeDoor_listener)(struct HouseTest_Instance *, uint8_t)= 0x0;
void register_external_HouseTest_send_house_closeDoor_listener(void (*_listener)(struct HouseTest_Instance *, uint8_t)){
external_HouseTest_send_house_closeDoor_listener = _listener;
}
void register_HouseTest_send_house_closeDoor_listener(void (*_listener)(struct HouseTest_Instance *, uint8_t)){
HouseTest_send_house_closeDoor_listener = _listener;
}
void HouseTest_send_house_closeDoor(struct HouseTest_Instance *_instance, uint8_t id){
if (HouseTest_send_house_closeDoor_listener != 0x0) HouseTest_send_house_closeDoor_listener(_instance, id);
if (external_HouseTest_send_house_closeDoor_listener != 0x0) external_HouseTest_send_house_closeDoor_listener(_instance, id);
;
}






/*****************************************************************************
 * Definitions for configuration : HouseTestCfg
 *****************************************************************************/

//Declaration of instance variables
//Instance test
// Variables for the properties of the instance
struct HouseTest_Instance test_var;
// Variables for the sessions of the instance
//Instance bathroomLight
// Variables for the properties of the instance
struct Light_Instance bathroomLight_var;
// Variables for the sessions of the instance
//Instance house
// Variables for the properties of the instance
struct House_Instance house_var;
// Variables for the sessions of the instance
//Instance bedroomDoor
// Variables for the properties of the instance
struct Door_Instance bedroomDoor_var;
// Variables for the sessions of the instance
//Instance upstairsLight
// Variables for the properties of the instance
struct Light_Instance upstairsLight_var;
// Variables for the sessions of the instance
//Instance bedroomLight
// Variables for the properties of the instance
struct Light_Instance bedroomLight_var;
// Variables for the sessions of the instance
//Instance bathroomDoor
// Variables for the properties of the instance
struct Door_Instance bathroomDoor_var;
// Variables for the sessions of the instance
//Instance downstairsLight
// Variables for the properties of the instance
struct Light_Instance downstairsLight_var;
// Variables for the sessions of the instance


// Enqueue of messages HouseTest::house::openDoor
void enqueue_HouseTest_send_house_openDoor(struct HouseTest_Instance *_instance, uint8_t id){
if ( fifo_byte_available() > 5 ) {

_fifo_enqueue( (1 >> 8) & 0xFF );
_fifo_enqueue( 1 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_house >> 8) & 0xFF );
_fifo_enqueue( _instance->id_house & 0xFF );

// parameter id
union u_id_t {
uint8_t p;
byte bytebuffer[1];
} u_id;
u_id.p = id;
_fifo_enqueue(u_id.bytebuffer[0] & 0xFF );
}
}
// Enqueue of messages HouseTest::house::setLight
void enqueue_HouseTest_send_house_setLight(struct HouseTest_Instance *_instance, uint8_t id, uint8_t v){
if ( fifo_byte_available() > 6 ) {

_fifo_enqueue( (2 >> 8) & 0xFF );
_fifo_enqueue( 2 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_house >> 8) & 0xFF );
_fifo_enqueue( _instance->id_house & 0xFF );

// parameter id
union u_id_t {
uint8_t p;
byte bytebuffer[1];
} u_id;
u_id.p = id;
_fifo_enqueue(u_id.bytebuffer[0] & 0xFF );

// parameter v
union u_v_t {
uint8_t p;
byte bytebuffer[1];
} u_v;
u_v.p = v;
_fifo_enqueue(u_v.bytebuffer[0] & 0xFF );
}
}
// Enqueue of messages HouseTest::house::closeDoor
void enqueue_HouseTest_send_house_closeDoor(struct HouseTest_Instance *_instance, uint8_t id){
if ( fifo_byte_available() > 5 ) {

_fifo_enqueue( (3 >> 8) & 0xFF );
_fifo_enqueue( 3 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_house >> 8) & 0xFF );
_fifo_enqueue( _instance->id_house & 0xFF );

// parameter id
union u_id_t {
uint8_t p;
byte bytebuffer[1];
} u_id;
u_id.p = id;
_fifo_enqueue(u_id.bytebuffer[0] & 0xFF );
}
}
// Enqueue of messages House::housebus::openDoor
void enqueue_House_send_housebus_openDoor(struct House_Instance *_instance, uint8_t id){
if ( fifo_byte_available() > 5 ) {

_fifo_enqueue( (1 >> 8) & 0xFF );
_fifo_enqueue( 1 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_housebus >> 8) & 0xFF );
_fifo_enqueue( _instance->id_housebus & 0xFF );

// parameter id
union u_id_t {
uint8_t p;
byte bytebuffer[1];
} u_id;
u_id.p = id;
_fifo_enqueue(u_id.bytebuffer[0] & 0xFF );
}
}
// Enqueue of messages House::housebus::setLight
void enqueue_House_send_housebus_setLight(struct House_Instance *_instance, uint8_t id, uint8_t v){
if ( fifo_byte_available() > 6 ) {

_fifo_enqueue( (2 >> 8) & 0xFF );
_fifo_enqueue( 2 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_housebus >> 8) & 0xFF );
_fifo_enqueue( _instance->id_housebus & 0xFF );

// parameter id
union u_id_t {
uint8_t p;
byte bytebuffer[1];
} u_id;
u_id.p = id;
_fifo_enqueue(u_id.bytebuffer[0] & 0xFF );

// parameter v
union u_v_t {
uint8_t p;
byte bytebuffer[1];
} u_v;
u_v.p = v;
_fifo_enqueue(u_v.bytebuffer[0] & 0xFF );
}
}
// Enqueue of messages House::housebus::closeDoor
void enqueue_House_send_housebus_closeDoor(struct House_Instance *_instance, uint8_t id){
if ( fifo_byte_available() > 5 ) {

_fifo_enqueue( (3 >> 8) & 0xFF );
_fifo_enqueue( 3 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_housebus >> 8) & 0xFF );
_fifo_enqueue( _instance->id_housebus & 0xFF );

// parameter id
union u_id_t {
uint8_t p;
byte bytebuffer[1];
} u_id;
u_id.p = id;
_fifo_enqueue(u_id.bytebuffer[0] & 0xFF );
}
}


//New dispatcher for messages
void dispatch_openDoor(uint16_t sender, uint8_t param_id) {
if (sender == test_var.id_house) {
House_handle_housecontrol_openDoor(&house_var, param_id);

}
if (sender == house_var.id_housebus) {
Door_handle_cmds_openDoor(&bedroomDoor_var, param_id);
Door_handle_cmds_openDoor(&bathroomDoor_var, param_id);

}

}


//New dispatcher for messages
void dispatch_setLight(uint16_t sender, uint8_t param_id, uint8_t param_v) {
if (sender == test_var.id_house) {
House_handle_housecontrol_setLight(&house_var, param_id, param_v);

}
if (sender == house_var.id_housebus) {
Light_handle_cmds_setLight(&bathroomLight_var, param_id, param_v);
Light_handle_cmds_setLight(&upstairsLight_var, param_id, param_v);
Light_handle_cmds_setLight(&bedroomLight_var, param_id, param_v);
Light_handle_cmds_setLight(&downstairsLight_var, param_id, param_v);

}

}


//New dispatcher for messages
void dispatch_closeDoor(uint16_t sender, uint8_t param_id) {
if (sender == test_var.id_house) {
House_handle_housecontrol_closeDoor(&house_var, param_id);

}
if (sender == house_var.id_housebus) {
Door_handle_cmds_closeDoor(&bedroomDoor_var, param_id);
Door_handle_cmds_closeDoor(&bathroomDoor_var, param_id);

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
uint8_t mbufi_openDoor = 2;
union u_openDoor_id_t {
uint8_t p;
byte bytebuffer[1];
} u_openDoor_id;
u_openDoor_id.bytebuffer[0] = mbuf[mbufi_openDoor + 0];
mbufi_openDoor += 1;
dispatch_openDoor((mbuf[0] << 8) + mbuf[1] /* instance port*/,
 u_openDoor_id.p /* id */ );
break;
}
case 2:{
byte mbuf[6 - 2];
while (mbufi < (6 - 2)) mbuf[mbufi++] = fifo_dequeue();
uint8_t mbufi_setLight = 2;
union u_setLight_id_t {
uint8_t p;
byte bytebuffer[1];
} u_setLight_id;
u_setLight_id.bytebuffer[0] = mbuf[mbufi_setLight + 0];
mbufi_setLight += 1;
union u_setLight_v_t {
uint8_t p;
byte bytebuffer[1];
} u_setLight_v;
u_setLight_v.bytebuffer[0] = mbuf[mbufi_setLight + 0];
mbufi_setLight += 1;
dispatch_setLight((mbuf[0] << 8) + mbuf[1] /* instance port*/,
 u_setLight_id.p /* id */ ,
 u_setLight_v.p /* v */ );
break;
}
case 3:{
byte mbuf[5 - 2];
while (mbufi < (5 - 2)) mbuf[mbufi++] = fifo_dequeue();
uint8_t mbufi_closeDoor = 2;
union u_closeDoor_id_t {
uint8_t p;
byte bytebuffer[1];
} u_closeDoor_id;
u_closeDoor_id.bytebuffer[0] = mbuf[mbufi_closeDoor + 0];
mbufi_closeDoor += 1;
dispatch_closeDoor((mbuf[0] << 8) + mbuf[1] /* instance port*/,
 u_closeDoor_id.p /* id */ );
break;
}
}
return 1;
}


//external Message enqueue

void initialize_configuration_HouseTestCfg() {
// Initialize connectors
register_HouseTest_send_house_setLight_listener(&enqueue_HouseTest_send_house_setLight);
register_HouseTest_send_house_openDoor_listener(&enqueue_HouseTest_send_house_openDoor);
register_HouseTest_send_house_closeDoor_listener(&enqueue_HouseTest_send_house_closeDoor);
register_House_send_housebus_setLight_listener(&enqueue_House_send_housebus_setLight);
register_House_send_housebus_openDoor_listener(&enqueue_House_send_housebus_openDoor);
register_House_send_housebus_closeDoor_listener(&enqueue_House_send_housebus_closeDoor);


// Network Initialization
// End Network Initialization

// Init the ID, state variables and properties for instance bedroomLight
bedroomLight_var.active = true;
bedroomLight_var.id_cmds = add_instance( (void*) &bedroomLight_var);
bedroomLight_var.Light_LightSC_State = LIGHT_LIGHTSC_OFF_STATE;
bedroomLight_var.Light_ID_var = 1;
bedroomLight_var.Light_digital_pin_var = 2;

Light_LightSC_OnEntry(LIGHT_LIGHTSC_STATE, &bedroomLight_var);
// Init the ID, state variables and properties for instance bathroomDoor
bathroomDoor_var.active = true;
bathroomDoor_var.id_cmds = add_instance( (void*) &bathroomDoor_var);
bathroomDoor_var.id_clock = add_instance( (void*) &bathroomDoor_var);
bathroomDoor_var.Door_DoorSC_State = DOOR_DOORSC_CLOSING_STATE;
bathroomDoor_var.Door_servo_pin_var = 9;
bathroomDoor_var.Door_vOPEN_var = 40;
bathroomDoor_var.Door_ID_var = 1;
bathroomDoor_var.Door_vCLOSE_var = 130;
bathroomDoor_var.Door_DoorSC_servo_value_var = 40;

Door_DoorSC_OnEntry(DOOR_DOORSC_STATE, &bathroomDoor_var);
// Init the ID, state variables and properties for instance bedroomDoor
bedroomDoor_var.active = true;
bedroomDoor_var.id_cmds = add_instance( (void*) &bedroomDoor_var);
bedroomDoor_var.id_clock = add_instance( (void*) &bedroomDoor_var);
bedroomDoor_var.Door_DoorSC_State = DOOR_DOORSC_CLOSING_STATE;
bedroomDoor_var.Door_servo_pin_var = 10;
bedroomDoor_var.Door_vOPEN_var = 130;
bedroomDoor_var.Door_ID_var = 2;
bedroomDoor_var.Door_vCLOSE_var = 35;
bedroomDoor_var.Door_DoorSC_servo_value_var = 130;

Door_DoorSC_OnEntry(DOOR_DOORSC_STATE, &bedroomDoor_var);
// Init the ID, state variables and properties for instance downstairsLight
downstairsLight_var.active = true;
downstairsLight_var.id_cmds = add_instance( (void*) &downstairsLight_var);
downstairsLight_var.Light_LightSC_State = LIGHT_LIGHTSC_OFF_STATE;
downstairsLight_var.Light_ID_var = 3;
downstairsLight_var.Light_digital_pin_var = 4;

Light_LightSC_OnEntry(LIGHT_LIGHTSC_STATE, &downstairsLight_var);
// Init the ID, state variables and properties for instance bathroomLight
bathroomLight_var.active = true;
bathroomLight_var.id_cmds = add_instance( (void*) &bathroomLight_var);
bathroomLight_var.Light_LightSC_State = LIGHT_LIGHTSC_OFF_STATE;
bathroomLight_var.Light_ID_var = 4;
bathroomLight_var.Light_digital_pin_var = 5;

Light_LightSC_OnEntry(LIGHT_LIGHTSC_STATE, &bathroomLight_var);
// Init the ID, state variables and properties for instance upstairsLight
upstairsLight_var.active = true;
upstairsLight_var.id_cmds = add_instance( (void*) &upstairsLight_var);
upstairsLight_var.Light_LightSC_State = LIGHT_LIGHTSC_OFF_STATE;
upstairsLight_var.Light_ID_var = 2;
upstairsLight_var.Light_digital_pin_var = 3;

Light_LightSC_OnEntry(LIGHT_LIGHTSC_STATE, &upstairsLight_var);
// Init the ID, state variables and properties for instance house
house_var.active = true;
house_var.id_housecontrol = add_instance( (void*) &house_var);
house_var.id_housebus = add_instance( (void*) &house_var);
house_var.House_House_State = HOUSE_HOUSE_READY_STATE;

House_House_OnEntry(HOUSE_HOUSE_STATE, &house_var);
// Init the ID, state variables and properties for instance test
test_var.active = true;
test_var.id_timer = add_instance( (void*) &test_var);
test_var.id_house = add_instance( (void*) &test_var);
test_var.HouseTest_HouseTest_State = HOUSETEST_HOUSETEST_INIT_STATE;
test_var.HouseTest_NB_LIGHTS_var = 4;
test_var.HouseTest_NB_DOORS_var = 2;

HouseTest_HouseTest_OnEntry(HOUSETEST_HOUSETEST_STATE, &test_var);
}




void setup() {
initialize_configuration_HouseTestCfg();

}

void loop() {

// Network Listener// End Network Listener

Door_handle_empty_event(&bedroomDoor_var);
Door_handle_empty_event(&bathroomDoor_var);

    processMessageQueue();
}
