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


// Enqueue incoming messages:
// Message enqueue
void enqueue_ExitHandler_Signals_Quit(struct ExitHandler_Instance * inst, int16_t code) {
    fifo_lock(&(inst->fifo));
    if ( fifo_byte_available(&(inst->fifo)) > 6 ) {

        _fifo_enqueue(&(inst->fifo), (67 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 67 & 0xFF );

        // Reception Port
        _fifo_enqueue(&(inst->fifo), (0 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 0 & 0xFF );

// parameter code
union u_code_t {
int16_t p;
byte bytebuffer[2];
} u_code;
u_code.p = code;
_fifo_enqueue(&(inst->fifo), u_code.bytebuffer[1] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_code.bytebuffer[0] & 0xFF );
    }
    fifo_unlock_and_notify(&(inst->fifo));
}

// Session functions:

// Message Process Queue:
int ExitHandler_processMessageQueue(struct ExitHandler_Instance * _instance) {
fifo_lock(&(_instance->fifo));
if (fifo_empty(&(_instance->fifo))) fifo_wait(&(_instance->fifo));
uint8_t mbufi = 0;

// Read the code of the next port/message in the queue
uint16_t code = fifo_dequeue(&(_instance->fifo)) << 8;

code += fifo_dequeue(&(_instance->fifo));

// Switch to call the appropriate handler
switch(code) {
case 67:{
byte mbuf[6 - 2];
while (mbufi < (6 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
uint8_t mbufi_Quit = 2;
union u_Quit_code_t {
int16_t p;
byte bytebuffer[2];
} u_Quit_code;
u_Quit_code.bytebuffer[1] = mbuf[mbufi_Quit + 0];
u_Quit_code.bytebuffer[0] = mbuf[mbufi_Quit + 1];
mbufi_Quit += 2;
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
case 0:{
ExitHandler_handle_Signals_Quit(_instance,
 u_Quit_code.p /* code */ );
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
void ExitHandler_run(struct ExitHandler_Instance * _instance) {
if(_instance->initState != -1) {
ExitHandler_Handler_OnEntry(_instance->initState, _instance);
}
    while(1){
        ExitHandler_processMessageQueue(_instance);
    }
}


