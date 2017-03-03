/*****************************************************
 *      THIS IS A GENERATED FILE. DO NOT EDIT.
 *           Header for Thing BLENotifierImpl
 *  Generated from ThingML (http://www.thingml.org)
 *****************************************************/

#ifndef BLENotifierImpl_H_
#define BLENotifierImpl_H_

#ifdef __cplusplus
extern "C" {
#endif

#include "thingml_typedefs.h"
#include "runtime.h"

/*****************************************************************************
 * Headers for type : BLENotifierImpl
 *****************************************************************************/

#include "runtime.h"

// BEGIN: Code from the c_header annotation for type BTAddress
#include <bluetooth/bluetooth.h>
// END: Code from the c_header annotation for type BTAddress


// BEGIN: Code from the c_header annotation for type BLERandomPart
#ifndef BLE_RANDOM_PART_T_H
#define BLE_RANDOM_PART_T_H
typedef struct { uint8_t bytes[8]; } ble_random_part_t;
#endif
// END: Code from the c_header annotation for type BLERandomPart


// BEGIN: Code from the c_header annotation for type UUID
#ifndef BLE_UUID_T_H
#define BLE_UUID_T_H
typedef struct { uint8_t bytes[16]; } ble_uuid_t;
#endif
// END: Code from the c_header annotation for type UUID


// BEGIN: Code from the c_header annotation for type NotifierCommand
#ifndef NOTIFIER_CMD_T_H
#define NOTIFIER_CMD_T_H
typedef struct { uint8_t bytes[8]; } notifier_cmd_t;
#endif
// END: Code from the c_header annotation for type NotifierCommand


// BEGIN: Code from the c_header annotation for type BLERandomNumber
#ifndef BLE_RANDOM_NUMBER_T_H
#define BLE_RANDOM_NUMBER_T_H
typedef struct { uint8_t bytes[16]; } ble_random_number_t;
#endif
// END: Code from the c_header annotation for type BLERandomNumber


// BEGIN: Code from the c_header annotation for type GATTData
#ifndef BLE_GATT_DATA_T_H
#define BLE_GATT_DATA_T_H
typedef struct { uint8_t length; uint8_t bytes[23]; } ble_gatt_data_t;
#endif
// END: Code from the c_header annotation for type GATTData

// Definition of the sessions stuct:

// Definition of the instance stuct:
struct BLENotifierImpl_Instance {
bool active;
bool alive;
// Variables for the ID of the ports of the instance
uint16_t id_Notifications;
uint16_t id_Connecter;
uint16_t id_ATT;
struct instance_fifo fifo;

// Instances of different sessions

// Variables for the current instance state
int initState;
int BLENotifierImpl_States_State;
int BLENotifierImpl_States_Connected_State;
// Variables for the properties of the instance
uint16_t BLENotifierImpl_ConnectedHandle_var;
uint16_t BLENotifierImpl_WriteByteValueHandle_var;
uint16_t BLENotifierImpl_ReadByteValueHandle_var;
uint16_t BLENotifierImpl_ReadByteConfigurationHandle_var;
notifier_cmd_t BLENotifierImpl_RequestCommand_var;
notifier_cmd_t BLENotifierImpl_ReceivedCommand_var;
notifier_cmd_t BLENotifierImpl_ErrorCommand_var;
notifier_cmd_t BLENotifierImpl_StoredCommand_var;
notifier_cmd_t BLENotifierImpl_CommandToSend_var;
uint8_t BLENotifierImpl_BytesToSend_var;
uint8_t BLENotifierImpl_SendtBytes_var;

};
// Message enqueue
void enqueue_BLENotifierImpl_Notifications_NotifierConnect(struct BLENotifierImpl_Instance * inst, uint8_t AddressType, bdaddr_t Address);
void enqueue_BLENotifierImpl_Notifications_NotifierRequest(struct BLENotifierImpl_Instance * inst);
void enqueue_BLENotifierImpl_Notifications_NotifierError(struct BLENotifierImpl_Instance * inst);
void enqueue_BLENotifierImpl_Notifications_NotifierReceived(struct BLENotifierImpl_Instance * inst);
void enqueue_BLENotifierImpl_Notifications_NotifierStored(struct BLENotifierImpl_Instance * inst);
void enqueue_BLENotifierImpl_Connecter_Connected(struct BLENotifierImpl_Instance * inst, uint16_t Handle, uint8_t AddressType, bdaddr_t Address);
void enqueue_BLENotifierImpl_Connecter_Stopped(struct BLENotifierImpl_Instance * inst);
void enqueue_BLENotifierImpl_Connecter_Failure(struct BLENotifierImpl_Instance * inst);
void enqueue_BLENotifierImpl_ATT_ATTWriteResponse(struct BLENotifierImpl_Instance * inst, uint16_t ConnectionHandle);
void enqueue_BLENotifierImpl_ATT_ATTWriteError(struct BLENotifierImpl_Instance * inst, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error);
void enqueue_BLENotifierImpl_ATT_ATTHandleValueNotification(struct BLENotifierImpl_Instance * inst, uint16_t ConnectionHandle, uint16_t AttributeHandle, ble_gatt_data_t AttributeValue);

// Fork Sessions

// ProcessMessageQueue
int BLENotifierImpl_processMessageQueue(struct BLENotifierImpl_Instance * _instance);

// Run
void BLENotifierImpl_run(struct BLENotifierImpl_Instance * _instance);

// Declaration of callbacks for incoming messages:
void register_BLENotifierImpl_send_Notifications_NotifierReady_listener(void (*_listener)(struct BLENotifierImpl_Instance *));
void register_external_BLENotifierImpl_send_Notifications_NotifierReady_listener(void (*_listener)(struct BLENotifierImpl_Instance *));
void register_BLENotifierImpl_send_Notifications_NotifierFinished_listener(void (*_listener)(struct BLENotifierImpl_Instance *));
void register_external_BLENotifierImpl_send_Notifications_NotifierFinished_listener(void (*_listener)(struct BLENotifierImpl_Instance *));
void register_BLENotifierImpl_send_Connecter_Connect_listener(void (*_listener)(struct BLENotifierImpl_Instance *));
void register_external_BLENotifierImpl_send_Connecter_Connect_listener(void (*_listener)(struct BLENotifierImpl_Instance *));
void register_BLENotifierImpl_send_Connecter_ConnectTo_listener(void (*_listener)(struct BLENotifierImpl_Instance *, uint8_t, bdaddr_t, ble_random_number_t, uint16_t, ble_random_part_t));
void register_external_BLENotifierImpl_send_Connecter_ConnectTo_listener(void (*_listener)(struct BLENotifierImpl_Instance *, uint8_t, bdaddr_t, ble_random_number_t, uint16_t, ble_random_part_t));
void register_BLENotifierImpl_send_Connecter_ConnectToU_listener(void (*_listener)(struct BLENotifierImpl_Instance *, uint8_t, bdaddr_t));
void register_external_BLENotifierImpl_send_Connecter_ConnectToU_listener(void (*_listener)(struct BLENotifierImpl_Instance *, uint8_t, bdaddr_t));
void register_BLENotifierImpl_send_Connecter_Stop_listener(void (*_listener)(struct BLENotifierImpl_Instance *));
void register_external_BLENotifierImpl_send_Connecter_Stop_listener(void (*_listener)(struct BLENotifierImpl_Instance *));
void register_BLENotifierImpl_send_Connecter_Encrypt_listener(void (*_listener)(struct BLENotifierImpl_Instance *));
void register_external_BLENotifierImpl_send_Connecter_Encrypt_listener(void (*_listener)(struct BLENotifierImpl_Instance *));
void register_BLENotifierImpl_send_ATT_ATTFindInformationRequest_listener(void (*_listener)(struct BLENotifierImpl_Instance *, uint16_t, uint16_t, uint16_t));
void register_external_BLENotifierImpl_send_ATT_ATTFindInformationRequest_listener(void (*_listener)(struct BLENotifierImpl_Instance *, uint16_t, uint16_t, uint16_t));
void register_BLENotifierImpl_send_ATT_ATTFindInformationResponse_listener(void (*_listener)(struct BLENotifierImpl_Instance *, uint16_t, uint8_t, ble_gatt_data_t));
void register_external_BLENotifierImpl_send_ATT_ATTFindInformationResponse_listener(void (*_listener)(struct BLENotifierImpl_Instance *, uint16_t, uint8_t, ble_gatt_data_t));
void register_BLENotifierImpl_send_ATT_ATTFindInformationError_listener(void (*_listener)(struct BLENotifierImpl_Instance *, uint16_t, uint16_t, uint8_t));
void register_external_BLENotifierImpl_send_ATT_ATTFindInformationError_listener(void (*_listener)(struct BLENotifierImpl_Instance *, uint16_t, uint16_t, uint8_t));
void register_BLENotifierImpl_send_ATT_ATTReadByTypeRequest_listener(void (*_listener)(struct BLENotifierImpl_Instance *, uint16_t, uint16_t, uint16_t, ble_uuid_t));
void register_external_BLENotifierImpl_send_ATT_ATTReadByTypeRequest_listener(void (*_listener)(struct BLENotifierImpl_Instance *, uint16_t, uint16_t, uint16_t, ble_uuid_t));
void register_BLENotifierImpl_send_ATT_ATTReadByTypeResponse_listener(void (*_listener)(struct BLENotifierImpl_Instance *, uint16_t, uint8_t, ble_gatt_data_t));
void register_external_BLENotifierImpl_send_ATT_ATTReadByTypeResponse_listener(void (*_listener)(struct BLENotifierImpl_Instance *, uint16_t, uint8_t, ble_gatt_data_t));
void register_BLENotifierImpl_send_ATT_ATTReadByTypeError_listener(void (*_listener)(struct BLENotifierImpl_Instance *, uint16_t, uint16_t, uint8_t));
void register_external_BLENotifierImpl_send_ATT_ATTReadByTypeError_listener(void (*_listener)(struct BLENotifierImpl_Instance *, uint16_t, uint16_t, uint8_t));
void register_BLENotifierImpl_send_ATT_ATTReadRequest_listener(void (*_listener)(struct BLENotifierImpl_Instance *, uint16_t, uint16_t));
void register_external_BLENotifierImpl_send_ATT_ATTReadRequest_listener(void (*_listener)(struct BLENotifierImpl_Instance *, uint16_t, uint16_t));
void register_BLENotifierImpl_send_ATT_ATTReadResponse_listener(void (*_listener)(struct BLENotifierImpl_Instance *, uint16_t, ble_gatt_data_t));
void register_external_BLENotifierImpl_send_ATT_ATTReadResponse_listener(void (*_listener)(struct BLENotifierImpl_Instance *, uint16_t, ble_gatt_data_t));
void register_BLENotifierImpl_send_ATT_ATTReadError_listener(void (*_listener)(struct BLENotifierImpl_Instance *, uint16_t, uint16_t, uint8_t));
void register_external_BLENotifierImpl_send_ATT_ATTReadError_listener(void (*_listener)(struct BLENotifierImpl_Instance *, uint16_t, uint16_t, uint8_t));
void register_BLENotifierImpl_send_ATT_ATTReadByGroupTypeRequest_listener(void (*_listener)(struct BLENotifierImpl_Instance *, uint16_t, uint16_t, uint16_t, ble_uuid_t));
void register_external_BLENotifierImpl_send_ATT_ATTReadByGroupTypeRequest_listener(void (*_listener)(struct BLENotifierImpl_Instance *, uint16_t, uint16_t, uint16_t, ble_uuid_t));
void register_BLENotifierImpl_send_ATT_ATTReadByGroupTypeResponse_listener(void (*_listener)(struct BLENotifierImpl_Instance *, uint16_t, uint8_t, ble_gatt_data_t));
void register_external_BLENotifierImpl_send_ATT_ATTReadByGroupTypeResponse_listener(void (*_listener)(struct BLENotifierImpl_Instance *, uint16_t, uint8_t, ble_gatt_data_t));
void register_BLENotifierImpl_send_ATT_ATTReadByGroupTypeError_listener(void (*_listener)(struct BLENotifierImpl_Instance *, uint16_t, uint16_t, uint8_t));
void register_external_BLENotifierImpl_send_ATT_ATTReadByGroupTypeError_listener(void (*_listener)(struct BLENotifierImpl_Instance *, uint16_t, uint16_t, uint8_t));
void register_BLENotifierImpl_send_ATT_ATTWriteRequest_listener(void (*_listener)(struct BLENotifierImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t));
void register_external_BLENotifierImpl_send_ATT_ATTWriteRequest_listener(void (*_listener)(struct BLENotifierImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t));
void register_BLENotifierImpl_send_ATT_ATTWriteResponse_listener(void (*_listener)(struct BLENotifierImpl_Instance *, uint16_t));
void register_external_BLENotifierImpl_send_ATT_ATTWriteResponse_listener(void (*_listener)(struct BLENotifierImpl_Instance *, uint16_t));
void register_BLENotifierImpl_send_ATT_ATTWriteError_listener(void (*_listener)(struct BLENotifierImpl_Instance *, uint16_t, uint16_t, uint8_t));
void register_external_BLENotifierImpl_send_ATT_ATTWriteError_listener(void (*_listener)(struct BLENotifierImpl_Instance *, uint16_t, uint16_t, uint8_t));
void register_BLENotifierImpl_send_ATT_ATTWriteCommand_listener(void (*_listener)(struct BLENotifierImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t));
void register_external_BLENotifierImpl_send_ATT_ATTWriteCommand_listener(void (*_listener)(struct BLENotifierImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t));
void register_BLENotifierImpl_send_ATT_ATTHandleValueNotification_listener(void (*_listener)(struct BLENotifierImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t));
void register_external_BLENotifierImpl_send_ATT_ATTHandleValueNotification_listener(void (*_listener)(struct BLENotifierImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t));
void register_BLENotifierImpl_send_ATT_ATTHandleValueIndication_listener(void (*_listener)(struct BLENotifierImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t));
void register_external_BLENotifierImpl_send_ATT_ATTHandleValueIndication_listener(void (*_listener)(struct BLENotifierImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t));
void register_BLENotifierImpl_send_ATT_ATTHandleValueConfirmation_listener(void (*_listener)(struct BLENotifierImpl_Instance *, uint16_t));
void register_external_BLENotifierImpl_send_ATT_ATTHandleValueConfirmation_listener(void (*_listener)(struct BLENotifierImpl_Instance *, uint16_t));

// Definition of the states:
#define BLENOTIFIERIMPL_STATES_STATE 0
#define BLENOTIFIERIMPL_STATES_WAITING_STATE 1
#define BLENOTIFIERIMPL_STATES_CONNECTED_STATE 2
#define BLENOTIFIERIMPL_STATES_CONNECTED_STATE 3
#define BLENOTIFIERIMPL_STATES_CONNECTED_SETREADNOTIFICATIONS_STATE 4
#define BLENOTIFIERIMPL_STATES_CONNECTED_WAITFORCOMMAND_STATE 5
#define BLENOTIFIERIMPL_STATES_CONNECTED_SENDCOMMAND_STATE 6



#ifdef __cplusplus
}
#endif

#endif //BLENotifierImpl_H_
