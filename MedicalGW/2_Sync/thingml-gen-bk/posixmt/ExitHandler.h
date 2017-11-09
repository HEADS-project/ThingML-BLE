/*****************************************************
 *      THIS IS A GENERATED FILE. DO NOT EDIT.
 *           Header for Thing ExitHandler
 *  Generated from ThingML (http://www.thingml.org)
 *****************************************************/

#ifndef ExitHandler_H_
#define ExitHandler_H_

#ifdef __cplusplus
extern "C" {
#endif

#include "thingml_typedefs.h"
#include "runtime.h"

/*****************************************************************************
 * Headers for type : ExitHandler
 *****************************************************************************/

#include "runtime.h"

// BEGIN: Code from the c_header annotation ExitHandler
#include <stdlib.h>
#include <signal.h>
// END: Code from the c_header annotation ExitHandler

// Definition of the sessions stuct:

// Definition of the instance stuct:
struct ExitHandler_Instance {
bool active;
bool alive;
// Variables for the ID of the ports of the instance
uint16_t id_Signals;
struct instance_fifo fifo;

// Instances of different sessions

// Variables for the current instance state
int initState;
int ExitHandler_Handler_State;
// Variables for the properties of the instance

};
// Message enqueue
void enqueue_ExitHandler_Signals_Quit(struct ExitHandler_Instance * inst, int16_t code);

// Fork Sessions

// ProcessMessageQueue
int ExitHandler_processMessageQueue(struct ExitHandler_Instance * _instance);

// Run
void ExitHandler_run(struct ExitHandler_Instance * _instance);

// Declaration of callbacks for incoming messages:
void register_ExitHandler_send_Signals_Interrupt_listener(void (*_listener)(struct ExitHandler_Instance *));
void register_external_ExitHandler_send_Signals_Interrupt_listener(void (*_listener)(struct ExitHandler_Instance *));

// Definition of the states:
#define EXITHANDLER_HANDLER_STATE 0
#define EXITHANDLER_HANDLER_WAITING_STATE 1



#ifdef __cplusplus
}
#endif

#endif //ExitHandler_H_
