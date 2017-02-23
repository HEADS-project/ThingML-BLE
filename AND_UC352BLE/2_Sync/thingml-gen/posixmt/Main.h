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
uint16_t id_WeightScaleDevice;
uint16_t id_NotifierDevice;
uint16_t id_WeightScaleCloud;
uint16_t id_Initialiser;
uint16_t id_Weightscale;
uint16_t id_Notifications;
struct instance_fifo fifo;

// Instances of different sessions

// Variables for the current instance state
int initState;
int Main_States_State;
int Main_States_Standby_State;
int Main_States_Standby_SyncWeightScale_State;
int Main_States_Standby_SendToNotifier_State;
// Variables for the properties of the instance
uint8_t Main_SendToNotifier_var;
uint8_t Main_States_Standby_SyncWeightScale_ConnectedWS_GotMeasurements_var;
uint8_t Main_States_Standby_SyncWeightScale_ConnectedWS_MeasurementOK_var;

};
// Message enqueue
void enqueue_Main_Signals_Interrupt(struct Main_Instance * inst);
void enqueue_Main_WeightScaleDevice_Stopped(struct Main_Instance * inst);
void enqueue_Main_WeightScaleDevice_Failure(struct Main_Instance * inst);
void enqueue_Main_WeightScaleDevice_Encrypted(struct Main_Instance * inst);
void enqueue_Main_NotifierDevice_Stopped(struct Main_Instance * inst);
void enqueue_Main_NotifierDevice_Failure(struct Main_Instance * inst);
void enqueue_Main_WeightScaleCloud_MqttRequestWeightScaleMeasurement(struct Main_Instance * inst);
void enqueue_Main_WeightScaleCloud_MqttConfirmWeightScaleMeasurement(struct Main_Instance * inst);
void enqueue_Main_Initialiser_Stopped(struct Main_Instance * inst);
void enqueue_Main_Initialiser_Failure(struct Main_Instance * inst);
void enqueue_Main_Initialiser_DeviceInitialised(struct Main_Instance * inst, bdaddr_t Address);
void enqueue_Main_Weightscale_WeightscaleMeasurement(struct Main_Instance * inst, uint16_t Weight, uint8_t UnitImperial, uint16_t Year, uint8_t Month, uint8_t Day, uint8_t Hour, uint8_t Minute, uint8_t Second);
void enqueue_Main_Notifications_ReadyForNotificationCommand(struct Main_Instance * inst);

// Fork Sessions

// ProcessMessageQueue
int Main_processMessageQueue(struct Main_Instance * _instance);

// Run
void Main_run(struct Main_Instance * _instance);

// Declaration of callbacks for incoming messages:
void register_Main_send_Signals_Quit_listener(void (*_listener)(struct Main_Instance *, int16_t));
void register_external_Main_send_Signals_Quit_listener(void (*_listener)(struct Main_Instance *, int16_t));
void register_Main_send_WeightScaleDevice_Connect_listener(void (*_listener)(struct Main_Instance *));
void register_external_Main_send_WeightScaleDevice_Connect_listener(void (*_listener)(struct Main_Instance *));
void register_Main_send_WeightScaleDevice_Stop_listener(void (*_listener)(struct Main_Instance *));
void register_external_Main_send_WeightScaleDevice_Stop_listener(void (*_listener)(struct Main_Instance *));
void register_Main_send_WeightScaleDevice_Encrypt_listener(void (*_listener)(struct Main_Instance *));
void register_external_Main_send_WeightScaleDevice_Encrypt_listener(void (*_listener)(struct Main_Instance *));
void register_Main_send_NotifierDevice_Connect_listener(void (*_listener)(struct Main_Instance *));
void register_external_Main_send_NotifierDevice_Connect_listener(void (*_listener)(struct Main_Instance *));
void register_Main_send_NotifierDevice_Stop_listener(void (*_listener)(struct Main_Instance *));
void register_external_Main_send_NotifierDevice_Stop_listener(void (*_listener)(struct Main_Instance *));
void register_Main_send_NotifierDevice_Encrypt_listener(void (*_listener)(struct Main_Instance *));
void register_external_Main_send_NotifierDevice_Encrypt_listener(void (*_listener)(struct Main_Instance *));
void register_Main_send_WeightScaleCloud_TelluCloudWeightScale_listener(void (*_listener)(struct Main_Instance *, time_t, float));
void register_external_Main_send_WeightScaleCloud_TelluCloudWeightScale_listener(void (*_listener)(struct Main_Instance *, time_t, float));
void register_Main_send_Initialiser_Start_listener(void (*_listener)(struct Main_Instance *));
void register_external_Main_send_Initialiser_Start_listener(void (*_listener)(struct Main_Instance *));
void register_Main_send_Initialiser_Stop_listener(void (*_listener)(struct Main_Instance *));
void register_external_Main_send_Initialiser_Stop_listener(void (*_listener)(struct Main_Instance *));
void register_Main_send_Notifications_RequestBloodPressureMeasurement_listener(void (*_listener)(struct Main_Instance *));
void register_external_Main_send_Notifications_RequestBloodPressureMeasurement_listener(void (*_listener)(struct Main_Instance *));
void register_Main_send_Notifications_ReceivedBloodPressureMeasurement_listener(void (*_listener)(struct Main_Instance *));
void register_external_Main_send_Notifications_ReceivedBloodPressureMeasurement_listener(void (*_listener)(struct Main_Instance *));
void register_Main_send_Notifications_BadBloodPressureMeasurement_listener(void (*_listener)(struct Main_Instance *));
void register_external_Main_send_Notifications_BadBloodPressureMeasurement_listener(void (*_listener)(struct Main_Instance *));
void register_Main_send_Notifications_StoredBloodPressureMeasurement_listener(void (*_listener)(struct Main_Instance *));
void register_external_Main_send_Notifications_StoredBloodPressureMeasurement_listener(void (*_listener)(struct Main_Instance *));

// Definition of the states:
#define MAIN_STATES_STATE 0
#define MAIN_STATES_INITIALISE_STATE 1
#define MAIN_STATES_DEINITIALISE_STATE 2
#define MAIN_STATES_FAILED_STATE 3
#define MAIN_STATES_QUIT_STATE 4
#define MAIN_STATES_STANDBY_STATE 5
#define MAIN_STATES_STANDBY_SYNCWEIGHTSCALE_STATE 6
#define MAIN_STATES_STANDBY_SYNCWEIGHTSCALE_CONNECTWS_STATE 7
#define MAIN_STATES_STANDBY_SYNCWEIGHTSCALE_CONNECTEDWS_STATE 8
#define MAIN_STATES_STANDBY_SENDTONOTIFIER_STATE 9
#define MAIN_STATES_STANDBY_SENDTONOTIFIER_CONNECTN_STATE 10
#define MAIN_STATES_STANDBY_SENDTONOTIFIER_CONNECTEDN_STATE 11



#ifdef __cplusplus
}
#endif

#endif //Main_H_
