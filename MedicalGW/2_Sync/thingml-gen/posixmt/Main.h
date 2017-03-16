/*****************************************************
 *      THIS IS A GENERATED FILE. DO NOT EDIT.
 *           Header for Thing Main
 *  Generated from ThingML (http://www.thingml.org)
 *****************************************************/

#ifndef Main_H_
#define Main_H_

#ifdef __cplusplus
extern "C" {
#endif

#include "thingml_typedefs.h"
#include "runtime.h"

/*****************************************************************************
 * Headers for type : Main
 *****************************************************************************/

#include "runtime.h"

// BEGIN: Code from the c_header annotation Main
#include <time.h>
// END: Code from the c_header annotation Main


// BEGIN: Code from the c_header annotation for type BTAddress
#include <bluetooth/bluetooth.h>
// END: Code from the c_header annotation for type BTAddress

// Definition of the sessions stuct:

// Definition of the instance stuct:
struct Main_Instance {
bool active;
bool alive;
// Variables for the ID of the ports of the instance
uint16_t id_Signals;
uint16_t id_Initialiser;
uint16_t id_Scanner;
uint16_t id_ANDUC352BLE;
uint16_t id_ANDUA651BLE;
struct instance_fifo fifo;

// Instances of different sessions

// Variables for the current instance state
int initState;
int Main_States_State;
int Main_States_Standby_State;
// Variables for the properties of the instance
uint8_t Main_States_Standby_WantsToConnect_var;
uint8_t Main_States_Standby_ConnectedTo_var;

};
// Message enqueue
void enqueue_Main_Signals_Interrupt(struct Main_Instance * inst);
void enqueue_Main_Initialiser_Stopped(struct Main_Instance * inst);
void enqueue_Main_Initialiser_Failure(struct Main_Instance * inst);
void enqueue_Main_Initialiser_DeviceInitialised(struct Main_Instance * inst, bdaddr_t Address);
void enqueue_Main_Scanner_Stopped(struct Main_Instance * inst);
void enqueue_Main_Scanner_Failure(struct Main_Instance * inst);
void enqueue_Main_ANDUC352BLE_WantsToConnect(struct Main_Instance * inst);
void enqueue_Main_ANDUC352BLE_FinishedConnection(struct Main_Instance * inst);
void enqueue_Main_ANDUA651BLE_WantsToConnect(struct Main_Instance * inst);
void enqueue_Main_ANDUA651BLE_FinishedConnection(struct Main_Instance * inst);

// Fork Sessions

// ProcessMessageQueue
int Main_processMessageQueue(struct Main_Instance * _instance);

// Run
void Main_run(struct Main_Instance * _instance);

// Declaration of callbacks for incoming messages:
void register_Main_send_Signals_Quit_listener(void (*_listener)(struct Main_Instance *, int16_t));
void register_external_Main_send_Signals_Quit_listener(void (*_listener)(struct Main_Instance *, int16_t));
void register_Main_send_Initialiser_Start_listener(void (*_listener)(struct Main_Instance *));
void register_external_Main_send_Initialiser_Start_listener(void (*_listener)(struct Main_Instance *));
void register_Main_send_Initialiser_Stop_listener(void (*_listener)(struct Main_Instance *));
void register_external_Main_send_Initialiser_Stop_listener(void (*_listener)(struct Main_Instance *));
void register_Main_send_Scanner_Start_listener(void (*_listener)(struct Main_Instance *));
void register_external_Main_send_Scanner_Start_listener(void (*_listener)(struct Main_Instance *));
void register_Main_send_Scanner_Stop_listener(void (*_listener)(struct Main_Instance *));
void register_external_Main_send_Scanner_Stop_listener(void (*_listener)(struct Main_Instance *));
void register_Main_send_ANDUC352BLE_AllowedToConnect_listener(void (*_listener)(struct Main_Instance *));
void register_external_Main_send_ANDUC352BLE_AllowedToConnect_listener(void (*_listener)(struct Main_Instance *));
void register_Main_send_ANDUA651BLE_AllowedToConnect_listener(void (*_listener)(struct Main_Instance *));
void register_external_Main_send_ANDUA651BLE_AllowedToConnect_listener(void (*_listener)(struct Main_Instance *));

// Definition of the states:
#define MAIN_STATES_STATE 0
#define MAIN_STATES_INITIALISE_STATE 1
#define MAIN_STATES_DEINITIALISE_STATE 2
#define MAIN_STATES_FAILED_STATE 3
#define MAIN_STATES_QUIT_STATE 4
#define MAIN_STATES_STANDBY_STATE 5
#define MAIN_STATES_STANDBY_SCAN_STATE 6
#define MAIN_STATES_STANDBY_SYNC_STATE 7



#ifdef __cplusplus
}
#endif

#endif //Main_H_
