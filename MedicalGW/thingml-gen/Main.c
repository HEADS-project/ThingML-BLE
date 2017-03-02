/*****************************************************
 *      THIS IS A GENERATED FILE. DO NOT EDIT.
 *        Implementation for Thing Main
 *  Generated from ThingML (http://www.thingml.org)
 *****************************************************/

#include "Main.h"

/*****************************************************************************
 * Implementation for type : Main
 *****************************************************************************/

// Declaration of prototypes:
//Prototypes: State Machine
void Main_States_OnExit(int state, struct Main_Instance *_instance);
//Prototypes: Message Sending
void Main_send_Signals_Quit(struct Main_Instance *_instance, int16_t code);
void Main_send_Initialiser_Start(struct Main_Instance *_instance);
void Main_send_Initialiser_Stop(struct Main_Instance *_instance);
void Main_send_Scanner_Start(struct Main_Instance *_instance);
void Main_send_Scanner_Stop(struct Main_Instance *_instance);
void Main_send_ANDUC352BLE_AllowedToConnect(struct Main_Instance *_instance);
void Main_send_ANDUA651BLE_AllowedToConnect(struct Main_Instance *_instance);
//Prototypes: Function
// Declaration of functions:

// On Entry Actions:
void Main_States_OnEntry(int state, struct Main_Instance *_instance) {
switch(state) {
case MAIN_STATES_STATE:{
_instance->Main_States_State = MAIN_STATES_INITIALISE_STATE;
Main_States_OnEntry(_instance->Main_States_State, _instance);
break;
}
case MAIN_STATES_STANDBY_STATE:{
_instance->Main_States_Standby_State = MAIN_STATES_STANDBY_SCAN_STATE;
Main_States_OnEntry(_instance->Main_States_Standby_State, _instance);
break;
}
case MAIN_STATES_INITIALISE_STATE:{
Main_send_Initialiser_Start(_instance);
break;
}
case MAIN_STATES_DEINITIALISE_STATE:{
fprintf(stdout, "[INFO]: Stopping...\n");
Main_send_Scanner_Stop(_instance);
break;
}
case MAIN_STATES_FAILED_STATE:{
fprintf(stdout, "[ERROR]: Failed, quitting... !!!\n");
Main_send_Signals_Quit(_instance, 1);
break;
}
case MAIN_STATES_QUIT_STATE:{
fprintf(stdout, "[INFO]: Finished, quitting...\n");
Main_send_Signals_Quit(_instance, 0);
break;
}
case MAIN_STATES_STANDBY_SCAN_STATE:{
_instance->Main_States_Standby_WantsToConnect_var = DEVICE_NONE;
_instance->Main_States_Standby_ConnectedTo_var = DEVICE_NONE;
Main_send_Scanner_Start(_instance);
break;
}
case MAIN_STATES_STANDBY_SYNC_STATE:{
if(_instance->Main_States_Standby_WantsToConnect_var & DEVICE_ANDUC352BLE) {
_instance->Main_States_Standby_ConnectedTo_var = DEVICE_ANDUC352BLE;
_instance->Main_States_Standby_WantsToConnect_var &= ~DEVICE_ANDUC352BLE;
Main_send_ANDUC352BLE_AllowedToConnect(_instance);

} else {
if(_instance->Main_States_Standby_WantsToConnect_var & DEVICE_ANDUA651BLE) {
_instance->Main_States_Standby_ConnectedTo_var = DEVICE_ANDUA651BLE;
_instance->Main_States_Standby_WantsToConnect_var &= ~DEVICE_ANDUA651BLE;
Main_send_ANDUA651BLE_AllowedToConnect(_instance);

}

}
break;
}
default: break;
}
}

// On Exit Actions:
void Main_States_OnExit(int state, struct Main_Instance *_instance) {
switch(state) {
case MAIN_STATES_STATE:{
Main_States_OnExit(_instance->Main_States_State, _instance);
break;}
case MAIN_STATES_STANDBY_STATE:{
Main_States_OnExit(_instance->Main_States_Standby_State, _instance);
break;}
case MAIN_STATES_INITIALISE_STATE:{
break;}
case MAIN_STATES_DEINITIALISE_STATE:{
break;}
case MAIN_STATES_FAILED_STATE:{
break;}
case MAIN_STATES_QUIT_STATE:{
break;}
case MAIN_STATES_STANDBY_SCAN_STATE:{
break;}
case MAIN_STATES_STANDBY_SYNC_STATE:{
break;}
default: break;
}
}

// Event Handlers for incoming messages:
void Main_handle_ANDUA651BLE_WantsToConnect(struct Main_Instance *_instance) {
//Region States
uint8_t Main_States_State_event_consumed = 0;
if (_instance->Main_States_State == MAIN_STATES_STANDBY_STATE) {
//Region Standby
uint8_t Main_States_Standby_State_event_consumed = 0;
if (_instance->Main_States_Standby_State == MAIN_STATES_STANDBY_SCAN_STATE) {
if (Main_States_Standby_State_event_consumed == 0 && 1) {
_instance->Main_States_Standby_WantsToConnect_var |= DEVICE_ANDUA651BLE;
Main_send_Scanner_Stop(_instance);
Main_States_Standby_State_event_consumed = 1;
}
}
else if (_instance->Main_States_Standby_State == MAIN_STATES_STANDBY_SYNC_STATE) {
if (Main_States_Standby_State_event_consumed == 0 && (_instance->Main_States_Standby_ConnectedTo_var == DEVICE_ANDUA651BLE)) {
Main_send_ANDUA651BLE_AllowedToConnect(_instance);
Main_States_Standby_State_event_consumed = 1;
}
else if (Main_States_Standby_State_event_consumed == 0 && (_instance->Main_States_Standby_ConnectedTo_var != DEVICE_ANDUA651BLE)) {
_instance->Main_States_Standby_WantsToConnect_var |= DEVICE_ANDUA651BLE;
Main_States_Standby_State_event_consumed = 1;
}
}
//End Region Standby
//End dsregion Standby
}
//End Region States
//Region Standby
uint8_t Main_States_Standby_State_event_consumed = 0;
if (_instance->Main_States_Standby_State == MAIN_STATES_STANDBY_SCAN_STATE) {
if (Main_States_Standby_State_event_consumed == 0 && 1) {
_instance->Main_States_Standby_WantsToConnect_var |= DEVICE_ANDUA651BLE;
Main_send_Scanner_Stop(_instance);
Main_States_Standby_State_event_consumed = 1;
}
}
else if (_instance->Main_States_Standby_State == MAIN_STATES_STANDBY_SYNC_STATE) {
if (Main_States_Standby_State_event_consumed == 0 && (_instance->Main_States_Standby_ConnectedTo_var == DEVICE_ANDUA651BLE)) {
Main_send_ANDUA651BLE_AllowedToConnect(_instance);
Main_States_Standby_State_event_consumed = 1;
}
else if (Main_States_Standby_State_event_consumed == 0 && (_instance->Main_States_Standby_ConnectedTo_var != DEVICE_ANDUA651BLE)) {
_instance->Main_States_Standby_WantsToConnect_var |= DEVICE_ANDUA651BLE;
Main_States_Standby_State_event_consumed = 1;
}
}
//End Region Standby
//End dsregion States
//Session list: 
}
void Main_handle_ANDUA651BLE_FinishedConnection(struct Main_Instance *_instance) {
//Region States
uint8_t Main_States_State_event_consumed = 0;
if (_instance->Main_States_State == MAIN_STATES_STANDBY_STATE) {
//Region Standby
uint8_t Main_States_Standby_State_event_consumed = 0;
if (_instance->Main_States_Standby_State == MAIN_STATES_STANDBY_SYNC_STATE) {
if (Main_States_Standby_State_event_consumed == 0 && (_instance->Main_States_Standby_ConnectedTo_var == DEVICE_ANDUA651BLE && _instance->Main_States_Standby_WantsToConnect_var == DEVICE_NONE)) {
Main_States_OnExit(MAIN_STATES_STANDBY_SYNC_STATE, _instance);
_instance->Main_States_Standby_State = MAIN_STATES_STANDBY_SCAN_STATE;
Main_States_OnEntry(MAIN_STATES_STANDBY_SCAN_STATE, _instance);
Main_States_Standby_State_event_consumed = 1;
}
else if (Main_States_Standby_State_event_consumed == 0 && (_instance->Main_States_Standby_ConnectedTo_var == DEVICE_ANDUA651BLE && _instance->Main_States_Standby_WantsToConnect_var != DEVICE_NONE)) {
if(_instance->Main_States_Standby_WantsToConnect_var & DEVICE_ANDUC352BLE) {
_instance->Main_States_Standby_ConnectedTo_var = DEVICE_ANDUC352BLE;
_instance->Main_States_Standby_WantsToConnect_var &= ~DEVICE_ANDUC352BLE;
Main_send_ANDUC352BLE_AllowedToConnect(_instance);

} else {
if(_instance->Main_States_Standby_WantsToConnect_var & DEVICE_ANDUA651BLE) {
_instance->Main_States_Standby_ConnectedTo_var = DEVICE_ANDUA651BLE;
_instance->Main_States_Standby_WantsToConnect_var &= ~DEVICE_ANDUA651BLE;
Main_send_ANDUA651BLE_AllowedToConnect(_instance);

}

}
Main_States_Standby_State_event_consumed = 1;
}
}
//End Region Standby
//End dsregion Standby
}
//End Region States
//Region Standby
uint8_t Main_States_Standby_State_event_consumed = 0;
if (_instance->Main_States_Standby_State == MAIN_STATES_STANDBY_SYNC_STATE) {
if (Main_States_Standby_State_event_consumed == 0 && (_instance->Main_States_Standby_ConnectedTo_var == DEVICE_ANDUA651BLE && _instance->Main_States_Standby_WantsToConnect_var == DEVICE_NONE)) {
Main_States_OnExit(MAIN_STATES_STANDBY_SYNC_STATE, _instance);
_instance->Main_States_Standby_State = MAIN_STATES_STANDBY_SCAN_STATE;
Main_States_OnEntry(MAIN_STATES_STANDBY_SCAN_STATE, _instance);
Main_States_Standby_State_event_consumed = 1;
}
else if (Main_States_Standby_State_event_consumed == 0 && (_instance->Main_States_Standby_ConnectedTo_var == DEVICE_ANDUA651BLE && _instance->Main_States_Standby_WantsToConnect_var != DEVICE_NONE)) {
if(_instance->Main_States_Standby_WantsToConnect_var & DEVICE_ANDUC352BLE) {
_instance->Main_States_Standby_ConnectedTo_var = DEVICE_ANDUC352BLE;
_instance->Main_States_Standby_WantsToConnect_var &= ~DEVICE_ANDUC352BLE;
Main_send_ANDUC352BLE_AllowedToConnect(_instance);

} else {
if(_instance->Main_States_Standby_WantsToConnect_var & DEVICE_ANDUA651BLE) {
_instance->Main_States_Standby_ConnectedTo_var = DEVICE_ANDUA651BLE;
_instance->Main_States_Standby_WantsToConnect_var &= ~DEVICE_ANDUA651BLE;
Main_send_ANDUA651BLE_AllowedToConnect(_instance);

}

}
Main_States_Standby_State_event_consumed = 1;
}
}
//End Region Standby
//End dsregion States
//Session list: 
}
void Main_handle_Initialiser_Failure(struct Main_Instance *_instance) {
//Region States
uint8_t Main_States_State_event_consumed = 0;
if (_instance->Main_States_State == MAIN_STATES_INITIALISE_STATE) {
if (Main_States_State_event_consumed == 0 && 1) {
Main_States_OnExit(MAIN_STATES_INITIALISE_STATE, _instance);
_instance->Main_States_State = MAIN_STATES_FAILED_STATE;
Main_States_OnEntry(MAIN_STATES_FAILED_STATE, _instance);
Main_States_State_event_consumed = 1;
}
}
else if (_instance->Main_States_State == MAIN_STATES_STANDBY_STATE) {
//Region Standby
uint8_t Main_States_Standby_State_event_consumed = 0;
//End Region Standby
//End dsregion Standby
if (Main_States_State_event_consumed == 0 && 1) {
Main_States_OnExit(MAIN_STATES_STANDBY_STATE, _instance);
_instance->Main_States_State = MAIN_STATES_FAILED_STATE;
Main_States_OnEntry(MAIN_STATES_FAILED_STATE, _instance);
Main_States_State_event_consumed = 1;
}
}
else if (_instance->Main_States_State == MAIN_STATES_DEINITIALISE_STATE) {
if (Main_States_State_event_consumed == 0 && 1) {
Main_States_OnExit(MAIN_STATES_DEINITIALISE_STATE, _instance);
_instance->Main_States_State = MAIN_STATES_FAILED_STATE;
Main_States_OnEntry(MAIN_STATES_FAILED_STATE, _instance);
Main_States_State_event_consumed = 1;
}
}
//End Region States
//Region Standby
uint8_t Main_States_Standby_State_event_consumed = 0;
//End Region Standby
//End dsregion States
//Session list: 
}
void Main_handle_Initialiser_DeviceInitialised(struct Main_Instance *_instance, bdaddr_t Address) {
//Region States
uint8_t Main_States_State_event_consumed = 0;
if (_instance->Main_States_State == MAIN_STATES_INITIALISE_STATE) {
if (Main_States_State_event_consumed == 0 && 1) {
Main_States_OnExit(MAIN_STATES_INITIALISE_STATE, _instance);
_instance->Main_States_State = MAIN_STATES_STANDBY_STATE;
Main_States_OnEntry(MAIN_STATES_STANDBY_STATE, _instance);
Main_States_State_event_consumed = 1;
}
}
//End Region States
//Region Standby
uint8_t Main_States_Standby_State_event_consumed = 0;
//End Region Standby
//End dsregion States
//Session list: 
}
void Main_handle_Initialiser_Stopped(struct Main_Instance *_instance) {
//Region States
uint8_t Main_States_State_event_consumed = 0;
if (_instance->Main_States_State == MAIN_STATES_DEINITIALISE_STATE) {
if (Main_States_State_event_consumed == 0 && 1) {
Main_States_OnExit(MAIN_STATES_DEINITIALISE_STATE, _instance);
_instance->Main_States_State = MAIN_STATES_QUIT_STATE;
Main_States_OnEntry(MAIN_STATES_QUIT_STATE, _instance);
Main_States_State_event_consumed = 1;
}
}
//End Region States
//Region Standby
uint8_t Main_States_Standby_State_event_consumed = 0;
//End Region Standby
//End dsregion States
//Session list: 
}
void Main_handle_Scanner_Failure(struct Main_Instance *_instance) {
//Region States
uint8_t Main_States_State_event_consumed = 0;
if (_instance->Main_States_State == MAIN_STATES_STANDBY_STATE) {
//Region Standby
uint8_t Main_States_Standby_State_event_consumed = 0;
//End Region Standby
//End dsregion Standby
if (Main_States_State_event_consumed == 0 && 1) {
Main_States_OnExit(MAIN_STATES_STANDBY_STATE, _instance);
_instance->Main_States_State = MAIN_STATES_FAILED_STATE;
Main_States_OnEntry(MAIN_STATES_FAILED_STATE, _instance);
Main_States_State_event_consumed = 1;
}
}
else if (_instance->Main_States_State == MAIN_STATES_DEINITIALISE_STATE) {
if (Main_States_State_event_consumed == 0 && 1) {
Main_States_OnExit(MAIN_STATES_DEINITIALISE_STATE, _instance);
_instance->Main_States_State = MAIN_STATES_FAILED_STATE;
Main_States_OnEntry(MAIN_STATES_FAILED_STATE, _instance);
Main_States_State_event_consumed = 1;
}
}
//End Region States
//Region Standby
uint8_t Main_States_Standby_State_event_consumed = 0;
//End Region Standby
//End dsregion States
//Session list: 
}
void Main_handle_Scanner_Stopped(struct Main_Instance *_instance) {
//Region States
uint8_t Main_States_State_event_consumed = 0;
if (_instance->Main_States_State == MAIN_STATES_STANDBY_STATE) {
//Region Standby
uint8_t Main_States_Standby_State_event_consumed = 0;
if (_instance->Main_States_Standby_State == MAIN_STATES_STANDBY_SCAN_STATE) {
if (Main_States_Standby_State_event_consumed == 0 && 1) {
Main_States_OnExit(MAIN_STATES_STANDBY_SCAN_STATE, _instance);
_instance->Main_States_Standby_State = MAIN_STATES_STANDBY_SYNC_STATE;
Main_States_OnEntry(MAIN_STATES_STANDBY_SYNC_STATE, _instance);
Main_States_Standby_State_event_consumed = 1;
}
}
//End Region Standby
//End dsregion Standby
}
else if (_instance->Main_States_State == MAIN_STATES_DEINITIALISE_STATE) {
if (Main_States_State_event_consumed == 0 && 1) {
Main_send_Initialiser_Stop(_instance);
Main_States_State_event_consumed = 1;
}
}
//End Region States
//Region Standby
uint8_t Main_States_Standby_State_event_consumed = 0;
if (_instance->Main_States_Standby_State == MAIN_STATES_STANDBY_SCAN_STATE) {
if (Main_States_Standby_State_event_consumed == 0 && 1) {
Main_States_OnExit(MAIN_STATES_STANDBY_SCAN_STATE, _instance);
_instance->Main_States_Standby_State = MAIN_STATES_STANDBY_SYNC_STATE;
Main_States_OnEntry(MAIN_STATES_STANDBY_SYNC_STATE, _instance);
Main_States_Standby_State_event_consumed = 1;
}
}
//End Region Standby
//End dsregion States
//Session list: 
}
void Main_handle_ANDUC352BLE_WantsToConnect(struct Main_Instance *_instance) {
//Region States
uint8_t Main_States_State_event_consumed = 0;
if (_instance->Main_States_State == MAIN_STATES_STANDBY_STATE) {
//Region Standby
uint8_t Main_States_Standby_State_event_consumed = 0;
if (_instance->Main_States_Standby_State == MAIN_STATES_STANDBY_SCAN_STATE) {
if (Main_States_Standby_State_event_consumed == 0 && 1) {
_instance->Main_States_Standby_WantsToConnect_var |= DEVICE_ANDUC352BLE;
Main_send_Scanner_Stop(_instance);
Main_States_Standby_State_event_consumed = 1;
}
}
else if (_instance->Main_States_Standby_State == MAIN_STATES_STANDBY_SYNC_STATE) {
if (Main_States_Standby_State_event_consumed == 0 && (_instance->Main_States_Standby_ConnectedTo_var == DEVICE_ANDUC352BLE)) {
Main_send_ANDUC352BLE_AllowedToConnect(_instance);
Main_States_Standby_State_event_consumed = 1;
}
else if (Main_States_Standby_State_event_consumed == 0 && (_instance->Main_States_Standby_ConnectedTo_var != DEVICE_ANDUC352BLE)) {
_instance->Main_States_Standby_WantsToConnect_var |= DEVICE_ANDUC352BLE;
Main_States_Standby_State_event_consumed = 1;
}
}
//End Region Standby
//End dsregion Standby
}
//End Region States
//Region Standby
uint8_t Main_States_Standby_State_event_consumed = 0;
if (_instance->Main_States_Standby_State == MAIN_STATES_STANDBY_SCAN_STATE) {
if (Main_States_Standby_State_event_consumed == 0 && 1) {
_instance->Main_States_Standby_WantsToConnect_var |= DEVICE_ANDUC352BLE;
Main_send_Scanner_Stop(_instance);
Main_States_Standby_State_event_consumed = 1;
}
}
else if (_instance->Main_States_Standby_State == MAIN_STATES_STANDBY_SYNC_STATE) {
if (Main_States_Standby_State_event_consumed == 0 && (_instance->Main_States_Standby_ConnectedTo_var == DEVICE_ANDUC352BLE)) {
Main_send_ANDUC352BLE_AllowedToConnect(_instance);
Main_States_Standby_State_event_consumed = 1;
}
else if (Main_States_Standby_State_event_consumed == 0 && (_instance->Main_States_Standby_ConnectedTo_var != DEVICE_ANDUC352BLE)) {
_instance->Main_States_Standby_WantsToConnect_var |= DEVICE_ANDUC352BLE;
Main_States_Standby_State_event_consumed = 1;
}
}
//End Region Standby
//End dsregion States
//Session list: 
}
void Main_handle_ANDUC352BLE_FinishedConnection(struct Main_Instance *_instance) {
//Region States
uint8_t Main_States_State_event_consumed = 0;
if (_instance->Main_States_State == MAIN_STATES_STANDBY_STATE) {
//Region Standby
uint8_t Main_States_Standby_State_event_consumed = 0;
if (_instance->Main_States_Standby_State == MAIN_STATES_STANDBY_SYNC_STATE) {
if (Main_States_Standby_State_event_consumed == 0 && (_instance->Main_States_Standby_ConnectedTo_var == DEVICE_ANDUC352BLE && _instance->Main_States_Standby_WantsToConnect_var == DEVICE_NONE)) {
Main_States_OnExit(MAIN_STATES_STANDBY_SYNC_STATE, _instance);
_instance->Main_States_Standby_State = MAIN_STATES_STANDBY_SCAN_STATE;
Main_States_OnEntry(MAIN_STATES_STANDBY_SCAN_STATE, _instance);
Main_States_Standby_State_event_consumed = 1;
}
else if (Main_States_Standby_State_event_consumed == 0 && (_instance->Main_States_Standby_ConnectedTo_var == DEVICE_ANDUC352BLE && _instance->Main_States_Standby_WantsToConnect_var != DEVICE_NONE)) {
if(_instance->Main_States_Standby_WantsToConnect_var & DEVICE_ANDUC352BLE) {
_instance->Main_States_Standby_ConnectedTo_var = DEVICE_ANDUC352BLE;
_instance->Main_States_Standby_WantsToConnect_var &= ~DEVICE_ANDUC352BLE;
Main_send_ANDUC352BLE_AllowedToConnect(_instance);

} else {
if(_instance->Main_States_Standby_WantsToConnect_var & DEVICE_ANDUA651BLE) {
_instance->Main_States_Standby_ConnectedTo_var = DEVICE_ANDUA651BLE;
_instance->Main_States_Standby_WantsToConnect_var &= ~DEVICE_ANDUA651BLE;
Main_send_ANDUA651BLE_AllowedToConnect(_instance);

}

}
Main_States_Standby_State_event_consumed = 1;
}
}
//End Region Standby
//End dsregion Standby
}
//End Region States
//Region Standby
uint8_t Main_States_Standby_State_event_consumed = 0;
if (_instance->Main_States_Standby_State == MAIN_STATES_STANDBY_SYNC_STATE) {
if (Main_States_Standby_State_event_consumed == 0 && (_instance->Main_States_Standby_ConnectedTo_var == DEVICE_ANDUC352BLE && _instance->Main_States_Standby_WantsToConnect_var == DEVICE_NONE)) {
Main_States_OnExit(MAIN_STATES_STANDBY_SYNC_STATE, _instance);
_instance->Main_States_Standby_State = MAIN_STATES_STANDBY_SCAN_STATE;
Main_States_OnEntry(MAIN_STATES_STANDBY_SCAN_STATE, _instance);
Main_States_Standby_State_event_consumed = 1;
}
else if (Main_States_Standby_State_event_consumed == 0 && (_instance->Main_States_Standby_ConnectedTo_var == DEVICE_ANDUC352BLE && _instance->Main_States_Standby_WantsToConnect_var != DEVICE_NONE)) {
if(_instance->Main_States_Standby_WantsToConnect_var & DEVICE_ANDUC352BLE) {
_instance->Main_States_Standby_ConnectedTo_var = DEVICE_ANDUC352BLE;
_instance->Main_States_Standby_WantsToConnect_var &= ~DEVICE_ANDUC352BLE;
Main_send_ANDUC352BLE_AllowedToConnect(_instance);

} else {
if(_instance->Main_States_Standby_WantsToConnect_var & DEVICE_ANDUA651BLE) {
_instance->Main_States_Standby_ConnectedTo_var = DEVICE_ANDUA651BLE;
_instance->Main_States_Standby_WantsToConnect_var &= ~DEVICE_ANDUA651BLE;
Main_send_ANDUA651BLE_AllowedToConnect(_instance);

}

}
Main_States_Standby_State_event_consumed = 1;
}
}
//End Region Standby
//End dsregion States
//Session list: 
}
void Main_handle_Signals_Interrupt(struct Main_Instance *_instance) {
//Region States
uint8_t Main_States_State_event_consumed = 0;
if (_instance->Main_States_State == MAIN_STATES_INITIALISE_STATE) {
if (Main_States_State_event_consumed == 0 && 1) {
Main_States_OnExit(MAIN_STATES_INITIALISE_STATE, _instance);
_instance->Main_States_State = MAIN_STATES_QUIT_STATE;
Main_States_OnEntry(MAIN_STATES_QUIT_STATE, _instance);
Main_States_State_event_consumed = 1;
}
}
else if (_instance->Main_States_State == MAIN_STATES_STANDBY_STATE) {
//Region Standby
uint8_t Main_States_Standby_State_event_consumed = 0;
//End Region Standby
//End dsregion Standby
if (Main_States_State_event_consumed == 0 && 1) {
Main_States_OnExit(MAIN_STATES_STANDBY_STATE, _instance);
_instance->Main_States_State = MAIN_STATES_DEINITIALISE_STATE;
Main_States_OnEntry(MAIN_STATES_DEINITIALISE_STATE, _instance);
Main_States_State_event_consumed = 1;
}
}
else if (_instance->Main_States_State == MAIN_STATES_DEINITIALISE_STATE) {
if (Main_States_State_event_consumed == 0 && 1) {
Main_States_OnExit(MAIN_STATES_DEINITIALISE_STATE, _instance);
_instance->Main_States_State = MAIN_STATES_FAILED_STATE;
Main_States_OnEntry(MAIN_STATES_FAILED_STATE, _instance);
Main_States_State_event_consumed = 1;
}
}
//End Region States
//Region Standby
uint8_t Main_States_Standby_State_event_consumed = 0;
//End Region Standby
//End dsregion States
//Session list: 
}

// Observers for outgoing messages:
void (*external_Main_send_Signals_Quit_listener)(struct Main_Instance *, int16_t)= 0x0;
void (*Main_send_Signals_Quit_listener)(struct Main_Instance *, int16_t)= 0x0;
void register_external_Main_send_Signals_Quit_listener(void (*_listener)(struct Main_Instance *, int16_t)){
external_Main_send_Signals_Quit_listener = _listener;
}
void register_Main_send_Signals_Quit_listener(void (*_listener)(struct Main_Instance *, int16_t)){
Main_send_Signals_Quit_listener = _listener;
}
void Main_send_Signals_Quit(struct Main_Instance *_instance, int16_t code){
if (Main_send_Signals_Quit_listener != 0x0) Main_send_Signals_Quit_listener(_instance, code);
if (external_Main_send_Signals_Quit_listener != 0x0) external_Main_send_Signals_Quit_listener(_instance, code);
;
}
void (*external_Main_send_Initialiser_Start_listener)(struct Main_Instance *)= 0x0;
void (*Main_send_Initialiser_Start_listener)(struct Main_Instance *)= 0x0;
void register_external_Main_send_Initialiser_Start_listener(void (*_listener)(struct Main_Instance *)){
external_Main_send_Initialiser_Start_listener = _listener;
}
void register_Main_send_Initialiser_Start_listener(void (*_listener)(struct Main_Instance *)){
Main_send_Initialiser_Start_listener = _listener;
}
void Main_send_Initialiser_Start(struct Main_Instance *_instance){
if (Main_send_Initialiser_Start_listener != 0x0) Main_send_Initialiser_Start_listener(_instance);
if (external_Main_send_Initialiser_Start_listener != 0x0) external_Main_send_Initialiser_Start_listener(_instance);
;
}
void (*external_Main_send_Initialiser_Stop_listener)(struct Main_Instance *)= 0x0;
void (*Main_send_Initialiser_Stop_listener)(struct Main_Instance *)= 0x0;
void register_external_Main_send_Initialiser_Stop_listener(void (*_listener)(struct Main_Instance *)){
external_Main_send_Initialiser_Stop_listener = _listener;
}
void register_Main_send_Initialiser_Stop_listener(void (*_listener)(struct Main_Instance *)){
Main_send_Initialiser_Stop_listener = _listener;
}
void Main_send_Initialiser_Stop(struct Main_Instance *_instance){
if (Main_send_Initialiser_Stop_listener != 0x0) Main_send_Initialiser_Stop_listener(_instance);
if (external_Main_send_Initialiser_Stop_listener != 0x0) external_Main_send_Initialiser_Stop_listener(_instance);
;
}
void (*external_Main_send_Scanner_Start_listener)(struct Main_Instance *)= 0x0;
void (*Main_send_Scanner_Start_listener)(struct Main_Instance *)= 0x0;
void register_external_Main_send_Scanner_Start_listener(void (*_listener)(struct Main_Instance *)){
external_Main_send_Scanner_Start_listener = _listener;
}
void register_Main_send_Scanner_Start_listener(void (*_listener)(struct Main_Instance *)){
Main_send_Scanner_Start_listener = _listener;
}
void Main_send_Scanner_Start(struct Main_Instance *_instance){
if (Main_send_Scanner_Start_listener != 0x0) Main_send_Scanner_Start_listener(_instance);
if (external_Main_send_Scanner_Start_listener != 0x0) external_Main_send_Scanner_Start_listener(_instance);
;
}
void (*external_Main_send_Scanner_Stop_listener)(struct Main_Instance *)= 0x0;
void (*Main_send_Scanner_Stop_listener)(struct Main_Instance *)= 0x0;
void register_external_Main_send_Scanner_Stop_listener(void (*_listener)(struct Main_Instance *)){
external_Main_send_Scanner_Stop_listener = _listener;
}
void register_Main_send_Scanner_Stop_listener(void (*_listener)(struct Main_Instance *)){
Main_send_Scanner_Stop_listener = _listener;
}
void Main_send_Scanner_Stop(struct Main_Instance *_instance){
if (Main_send_Scanner_Stop_listener != 0x0) Main_send_Scanner_Stop_listener(_instance);
if (external_Main_send_Scanner_Stop_listener != 0x0) external_Main_send_Scanner_Stop_listener(_instance);
;
}
void (*external_Main_send_ANDUC352BLE_AllowedToConnect_listener)(struct Main_Instance *)= 0x0;
void (*Main_send_ANDUC352BLE_AllowedToConnect_listener)(struct Main_Instance *)= 0x0;
void register_external_Main_send_ANDUC352BLE_AllowedToConnect_listener(void (*_listener)(struct Main_Instance *)){
external_Main_send_ANDUC352BLE_AllowedToConnect_listener = _listener;
}
void register_Main_send_ANDUC352BLE_AllowedToConnect_listener(void (*_listener)(struct Main_Instance *)){
Main_send_ANDUC352BLE_AllowedToConnect_listener = _listener;
}
void Main_send_ANDUC352BLE_AllowedToConnect(struct Main_Instance *_instance){
if (Main_send_ANDUC352BLE_AllowedToConnect_listener != 0x0) Main_send_ANDUC352BLE_AllowedToConnect_listener(_instance);
if (external_Main_send_ANDUC352BLE_AllowedToConnect_listener != 0x0) external_Main_send_ANDUC352BLE_AllowedToConnect_listener(_instance);
;
}
void (*external_Main_send_ANDUA651BLE_AllowedToConnect_listener)(struct Main_Instance *)= 0x0;
void (*Main_send_ANDUA651BLE_AllowedToConnect_listener)(struct Main_Instance *)= 0x0;
void register_external_Main_send_ANDUA651BLE_AllowedToConnect_listener(void (*_listener)(struct Main_Instance *)){
external_Main_send_ANDUA651BLE_AllowedToConnect_listener = _listener;
}
void register_Main_send_ANDUA651BLE_AllowedToConnect_listener(void (*_listener)(struct Main_Instance *)){
Main_send_ANDUA651BLE_AllowedToConnect_listener = _listener;
}
void Main_send_ANDUA651BLE_AllowedToConnect(struct Main_Instance *_instance){
if (Main_send_ANDUA651BLE_AllowedToConnect_listener != 0x0) Main_send_ANDUA651BLE_AllowedToConnect_listener(_instance);
if (external_Main_send_ANDUA651BLE_AllowedToConnect_listener != 0x0) external_Main_send_ANDUA651BLE_AllowedToConnect_listener(_instance);
;
}


// Enqueue incoming messages:
// Message enqueue
void enqueue_Main_Signals_Interrupt(struct Main_Instance * inst) {
    fifo_lock(&(inst->fifo));
    if ( fifo_byte_available(&(inst->fifo)) > 4 ) {

        _fifo_enqueue(&(inst->fifo), (1 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 1 & 0xFF );

        // Reception Port
        _fifo_enqueue(&(inst->fifo), (0 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 0 & 0xFF );
    }
    fifo_unlock_and_notify(&(inst->fifo));
}
void enqueue_Main_Initialiser_Stopped(struct Main_Instance * inst) {
    fifo_lock(&(inst->fifo));
    if ( fifo_byte_available(&(inst->fifo)) > 4 ) {

        _fifo_enqueue(&(inst->fifo), (2 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 2 & 0xFF );

        // Reception Port
        _fifo_enqueue(&(inst->fifo), (1 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 1 & 0xFF );
    }
    fifo_unlock_and_notify(&(inst->fifo));
}
void enqueue_Main_Initialiser_Failure(struct Main_Instance * inst) {
    fifo_lock(&(inst->fifo));
    if ( fifo_byte_available(&(inst->fifo)) > 4 ) {

        _fifo_enqueue(&(inst->fifo), (3 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 3 & 0xFF );

        // Reception Port
        _fifo_enqueue(&(inst->fifo), (1 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 1 & 0xFF );
    }
    fifo_unlock_and_notify(&(inst->fifo));
}
void enqueue_Main_Initialiser_DeviceInitialised(struct Main_Instance * inst, bdaddr_t Address) {
    fifo_lock(&(inst->fifo));
    if ( fifo_byte_available(&(inst->fifo)) > 10 ) {

        _fifo_enqueue(&(inst->fifo), (4 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 4 & 0xFF );

        // Reception Port
        _fifo_enqueue(&(inst->fifo), (1 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 1 & 0xFF );

// parameter Address
union u_Address_t {
bdaddr_t p;
byte bytebuffer[6];
} u_Address;
u_Address.p = Address;
_fifo_enqueue(&(inst->fifo), u_Address.bytebuffer[5] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Address.bytebuffer[4] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Address.bytebuffer[3] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Address.bytebuffer[2] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Address.bytebuffer[1] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Address.bytebuffer[0] & 0xFF );
    }
    fifo_unlock_and_notify(&(inst->fifo));
}
void enqueue_Main_Scanner_Stopped(struct Main_Instance * inst) {
    fifo_lock(&(inst->fifo));
    if ( fifo_byte_available(&(inst->fifo)) > 4 ) {

        _fifo_enqueue(&(inst->fifo), (2 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 2 & 0xFF );

        // Reception Port
        _fifo_enqueue(&(inst->fifo), (2 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 2 & 0xFF );
    }
    fifo_unlock_and_notify(&(inst->fifo));
}
void enqueue_Main_Scanner_Failure(struct Main_Instance * inst) {
    fifo_lock(&(inst->fifo));
    if ( fifo_byte_available(&(inst->fifo)) > 4 ) {

        _fifo_enqueue(&(inst->fifo), (3 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 3 & 0xFF );

        // Reception Port
        _fifo_enqueue(&(inst->fifo), (2 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 2 & 0xFF );
    }
    fifo_unlock_and_notify(&(inst->fifo));
}
void enqueue_Main_ANDUC352BLE_WantsToConnect(struct Main_Instance * inst) {
    fifo_lock(&(inst->fifo));
    if ( fifo_byte_available(&(inst->fifo)) > 4 ) {

        _fifo_enqueue(&(inst->fifo), (5 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 5 & 0xFF );

        // Reception Port
        _fifo_enqueue(&(inst->fifo), (3 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 3 & 0xFF );
    }
    fifo_unlock_and_notify(&(inst->fifo));
}
void enqueue_Main_ANDUC352BLE_FinishedConnection(struct Main_Instance * inst) {
    fifo_lock(&(inst->fifo));
    if ( fifo_byte_available(&(inst->fifo)) > 4 ) {

        _fifo_enqueue(&(inst->fifo), (6 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 6 & 0xFF );

        // Reception Port
        _fifo_enqueue(&(inst->fifo), (3 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 3 & 0xFF );
    }
    fifo_unlock_and_notify(&(inst->fifo));
}
void enqueue_Main_ANDUA651BLE_WantsToConnect(struct Main_Instance * inst) {
    fifo_lock(&(inst->fifo));
    if ( fifo_byte_available(&(inst->fifo)) > 4 ) {

        _fifo_enqueue(&(inst->fifo), (5 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 5 & 0xFF );

        // Reception Port
        _fifo_enqueue(&(inst->fifo), (4 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 4 & 0xFF );
    }
    fifo_unlock_and_notify(&(inst->fifo));
}
void enqueue_Main_ANDUA651BLE_FinishedConnection(struct Main_Instance * inst) {
    fifo_lock(&(inst->fifo));
    if ( fifo_byte_available(&(inst->fifo)) > 4 ) {

        _fifo_enqueue(&(inst->fifo), (6 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 6 & 0xFF );

        // Reception Port
        _fifo_enqueue(&(inst->fifo), (4 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 4 & 0xFF );
    }
    fifo_unlock_and_notify(&(inst->fifo));
}

// Session functions:

// Message Process Queue:
int Main_processMessageQueue(struct Main_Instance * _instance) {
fifo_lock(&(_instance->fifo));
if (fifo_empty(&(_instance->fifo))) fifo_wait(&(_instance->fifo));
uint8_t mbufi = 0;

// Read the code of the next port/message in the queue
uint16_t code = fifo_dequeue(&(_instance->fifo)) << 8;

code += fifo_dequeue(&(_instance->fifo));

// Switch to call the appropriate handler
switch(code) {
case 1:{
byte mbuf[4 - 2];
while (mbufi < (4 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
uint8_t mbufi_Interrupt = 2;
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
case 0:{
Main_handle_Signals_Interrupt(_instance);
return 1;
break;
}
}
break;
}
case 7:{
byte mbuf[4 - 2];
while (mbufi < (4 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
uint8_t mbufi_Started = 2;
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
}
break;
}
case 2:{
byte mbuf[4 - 2];
while (mbufi < (4 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
uint8_t mbufi_Stopped = 2;
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
case 1:{
Main_handle_Initialiser_Stopped(_instance);
return 1;
break;
}
case 2:{
Main_handle_Scanner_Stopped(_instance);
return 1;
break;
}
}
break;
}
case 3:{
byte mbuf[4 - 2];
while (mbufi < (4 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
uint8_t mbufi_Failure = 2;
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
case 1:{
Main_handle_Initialiser_Failure(_instance);
return 1;
break;
}
case 2:{
Main_handle_Scanner_Failure(_instance);
return 1;
break;
}
}
break;
}
case 4:{
byte mbuf[10 - 2];
while (mbufi < (10 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
uint8_t mbufi_DeviceInitialised = 2;
union u_DeviceInitialised_Address_t {
bdaddr_t p;
byte bytebuffer[6];
} u_DeviceInitialised_Address;
u_DeviceInitialised_Address.bytebuffer[5] = mbuf[mbufi_DeviceInitialised + 0];
u_DeviceInitialised_Address.bytebuffer[4] = mbuf[mbufi_DeviceInitialised + 1];
u_DeviceInitialised_Address.bytebuffer[3] = mbuf[mbufi_DeviceInitialised + 2];
u_DeviceInitialised_Address.bytebuffer[2] = mbuf[mbufi_DeviceInitialised + 3];
u_DeviceInitialised_Address.bytebuffer[1] = mbuf[mbufi_DeviceInitialised + 4];
u_DeviceInitialised_Address.bytebuffer[0] = mbuf[mbufi_DeviceInitialised + 5];
mbufi_DeviceInitialised += 6;
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
case 1:{
Main_handle_Initialiser_DeviceInitialised(_instance,
 u_DeviceInitialised_Address.p /* Address */ );
return 1;
break;
}
}
break;
}
case 8:{
byte mbuf[11 - 2];
while (mbufi < (11 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
uint8_t mbufi_ConnectableAdvertisement = 2;
union u_ConnectableAdvertisement_AddressType_t {
uint8_t p;
byte bytebuffer[1];
} u_ConnectableAdvertisement_AddressType;
u_ConnectableAdvertisement_AddressType.bytebuffer[0] = mbuf[mbufi_ConnectableAdvertisement + 0];
mbufi_ConnectableAdvertisement += 1;
union u_ConnectableAdvertisement_Address_t {
bdaddr_t p;
byte bytebuffer[6];
} u_ConnectableAdvertisement_Address;
u_ConnectableAdvertisement_Address.bytebuffer[5] = mbuf[mbufi_ConnectableAdvertisement + 0];
u_ConnectableAdvertisement_Address.bytebuffer[4] = mbuf[mbufi_ConnectableAdvertisement + 1];
u_ConnectableAdvertisement_Address.bytebuffer[3] = mbuf[mbufi_ConnectableAdvertisement + 2];
u_ConnectableAdvertisement_Address.bytebuffer[2] = mbuf[mbufi_ConnectableAdvertisement + 3];
u_ConnectableAdvertisement_Address.bytebuffer[1] = mbuf[mbufi_ConnectableAdvertisement + 4];
u_ConnectableAdvertisement_Address.bytebuffer[0] = mbuf[mbufi_ConnectableAdvertisement + 5];
mbufi_ConnectableAdvertisement += 6;
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
}
break;
}
case 5:{
byte mbuf[4 - 2];
while (mbufi < (4 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
uint8_t mbufi_WantsToConnect = 2;
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
case 3:{
Main_handle_ANDUC352BLE_WantsToConnect(_instance);
return 1;
break;
}
case 4:{
Main_handle_ANDUA651BLE_WantsToConnect(_instance);
return 1;
break;
}
}
break;
}
case 6:{
byte mbuf[4 - 2];
while (mbufi < (4 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
uint8_t mbufi_FinishedConnection = 2;
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
case 3:{
Main_handle_ANDUC352BLE_FinishedConnection(_instance);
return 1;
break;
}
case 4:{
Main_handle_ANDUA651BLE_FinishedConnection(_instance);
return 1;
break;
}
}
break;
}
}
return 1;
}

// Thing main:
void Main_run(struct Main_Instance * _instance) {
if(_instance->initState != -1) {
Main_States_OnEntry(_instance->initState, _instance);
}
    while(1){
        Main_processMessageQueue(_instance);
    }
}


