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

// Sessions functionss:


// On Entry Actions:
void Main_States_OnEntry(int state, struct Main_Instance *_instance) {
switch(state) {
case MAIN_STATES_STANDBY_STATE:{
_instance->Main_States_Standby_State = MAIN_STATES_STANDBY_SCAN_STATE;
Main_States_OnEntry(_instance->Main_States_Standby_State, _instance);
break;
}
case MAIN_STATES_STATE:{
_instance->Main_States_State = MAIN_STATES_INITIALISE_STATE;
Main_States_OnEntry(_instance->Main_States_State, _instance);
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
case MAIN_STATES_STANDBY_STATE:{
Main_States_OnExit(_instance->Main_States_Standby_State, _instance);
break;}
case MAIN_STATES_STATE:{
Main_States_OnExit(_instance->Main_States_State, _instance);
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
void Main_handle_Scanner_Stopped(struct Main_Instance *_instance) {
if(!(_instance->active)) return;
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
void Main_handle_Scanner_Failure(struct Main_Instance *_instance) {
if(!(_instance->active)) return;
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
void Main_handle_Signals_Interrupt(struct Main_Instance *_instance) {
if(!(_instance->active)) return;
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
void Main_handle_ANDUA651BLE_WantsToConnect(struct Main_Instance *_instance) {
if(!(_instance->active)) return;
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
if(!(_instance->active)) return;
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
void Main_handle_Initialiser_Stopped(struct Main_Instance *_instance) {
if(!(_instance->active)) return;
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
void Main_handle_Initialiser_DeviceInitialised(struct Main_Instance *_instance, bdaddr_t Address) {
if(!(_instance->active)) return;
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
void Main_handle_Initialiser_Failure(struct Main_Instance *_instance) {
if(!(_instance->active)) return;
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
void Main_handle_ANDUC352BLE_WantsToConnect(struct Main_Instance *_instance) {
if(!(_instance->active)) return;
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
if(!(_instance->active)) return;
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



