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

/*****************************************************************************
 * Headers for type : ExitHandler
 *****************************************************************************/


// BEGIN: Code from the c_header annotation ExitHandler
#include <stdlib.h>
#include <signal.h>
// END: Code from the c_header annotation ExitHandler

// Definition of the instance struct:
struct ExitHandler_Instance {

// Instances of different sessions
bool active;
// Variables for the ID of the ports of the instance
uint16_t id_Signals;
// Variables for the current instance state
int ExitHandler_Handler_State;
// Variables for the properties of the instance

};
// Declaration of prototypes outgoing messages :
void ExitHandler_Handler_OnEntry(int state, struct ExitHandler_Instance *_instance);
void ExitHandler_handle_Signals_Quit(struct ExitHandler_Instance *_instance, int16_t code);
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
