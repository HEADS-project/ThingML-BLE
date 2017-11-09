/*****************************************************
 *      THIS IS A GENERATED FILE. DO NOT EDIT.
 *        Implementation for Thing ExitHandler
 *  Generated from ThingML (http://www.thingml.org)
 *****************************************************/

#include "ExitHandler.h"

/*****************************************************************************
 * Implementation for type : ExitHandler
 *****************************************************************************/


// BEGIN: Code from the c_global annotation ExitHandler
struct ExitHandler_Instance *_handler_instance;
// END: Code from the c_global annotation ExitHandler

// Declaration of prototypes:
//Prototypes: State Machine
void ExitHandler_Handler_OnExit(int state, struct ExitHandler_Instance *_instance);
//Prototypes: Message Sending
void ExitHandler_send_Signals_Interrupt(struct ExitHandler_Instance *_instance);
//Prototypes: Function
void catch_sigint(int sig);
// Declaration of functions:
// Definition of function catch_sigint
void catch_sigint(int sig) {
fprintf(stdout, " Caught SIGINT\n");
ExitHandler_send_Signals_Interrupt(_handler_instance);
}

// Sessions functionss:


// On Entry Actions:
void ExitHandler_Handler_OnEntry(int state, struct ExitHandler_Instance *_instance) {
switch(state) {
case EXITHANDLER_HANDLER_STATE:{
_instance->ExitHandler_Handler_State = EXITHANDLER_HANDLER_WAITING_STATE;
ExitHandler_Handler_OnEntry(_instance->ExitHandler_Handler_State, _instance);
break;
}
case EXITHANDLER_HANDLER_WAITING_STATE:{
_handler_instance = _instance;
signal(SIGINT, catch_sigint);
break;
}
default: break;
}
}

// On Exit Actions:
void ExitHandler_Handler_OnExit(int state, struct ExitHandler_Instance *_instance) {
switch(state) {
case EXITHANDLER_HANDLER_STATE:{
ExitHandler_Handler_OnExit(_instance->ExitHandler_Handler_State, _instance);
break;}
case EXITHANDLER_HANDLER_WAITING_STATE:{
break;}
default: break;
}
}

// Event Handlers for incoming messages:
void ExitHandler_handle_Signals_Quit(struct ExitHandler_Instance *_instance, int16_t code) {
if(!(_instance->active)) return;
//Region Handler
uint8_t ExitHandler_Handler_State_event_consumed = 0;
if (_instance->ExitHandler_Handler_State == EXITHANDLER_HANDLER_WAITING_STATE) {
if (ExitHandler_Handler_State_event_consumed == 0 && 1) {
fprintf(stdout, "Exiting!\n");
exit(code);
ExitHandler_Handler_State_event_consumed = 1;
}
}
//End Region Handler
//End dsregion Handler
//Session list: 
}

// Observers for outgoing messages:
void (*external_ExitHandler_send_Signals_Interrupt_listener)(struct ExitHandler_Instance *)= 0x0;
void (*ExitHandler_send_Signals_Interrupt_listener)(struct ExitHandler_Instance *)= 0x0;
void register_external_ExitHandler_send_Signals_Interrupt_listener(void (*_listener)(struct ExitHandler_Instance *)){
external_ExitHandler_send_Signals_Interrupt_listener = _listener;
}
void register_ExitHandler_send_Signals_Interrupt_listener(void (*_listener)(struct ExitHandler_Instance *)){
ExitHandler_send_Signals_Interrupt_listener = _listener;
}
void ExitHandler_send_Signals_Interrupt(struct ExitHandler_Instance *_instance){
if (ExitHandler_send_Signals_Interrupt_listener != 0x0) ExitHandler_send_Signals_Interrupt_listener(_instance);
if (external_ExitHandler_send_Signals_Interrupt_listener != 0x0) external_ExitHandler_send_Signals_Interrupt_listener(_instance);
;
}



