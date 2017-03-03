/*****************************************************
 *      THIS IS A GENERATED FILE. DO NOT EDIT.
 *           Header for Thing ANDUA651BLEImpl
 *  Generated from ThingML (http://www.thingml.org)
 *****************************************************/

#ifndef ANDUA651BLEImpl_H_
#define ANDUA651BLEImpl_H_

#ifdef __cplusplus
extern "C" {
#endif

#include "thingml_typedefs.h"
#include "runtime.h"

/*****************************************************************************
 * Headers for type : ANDUA651BLEImpl
 *****************************************************************************/

#include "runtime.h"

// BEGIN: Code from the c_header annotation ANDUA651BLEImpl

  #include <time.h>
  #include <math.h>
  #include <bluetooth/bluetooth.h>

// END: Code from the c_header annotation ANDUA651BLEImpl


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


// BEGIN: Code from the c_header annotation for type GATTData
#ifndef BLE_GATT_DATA_T_H
#define BLE_GATT_DATA_T_H
typedef struct { uint8_t length; uint8_t bytes[23]; } ble_gatt_data_t;
#endif
// END: Code from the c_header annotation for type GATTData


// BEGIN: Code from the c_header annotation for type BLERandomNumber
#ifndef BLE_RANDOM_NUMBER_T_H
#define BLE_RANDOM_NUMBER_T_H
typedef struct { uint8_t bytes[16]; } ble_random_number_t;
#endif
// END: Code from the c_header annotation for type BLERandomNumber


// BEGIN: Code from the c_header annotation for type BTAddress
#include <bluetooth/bluetooth.h>
// END: Code from the c_header annotation for type BTAddress

// Definition of the sessions stuct:

// Definition of the instance stuct:
struct ANDUA651BLEImpl_Instance {
bool active;
bool alive;
// Variables for the ID of the ports of the instance
uint16_t id_ANDUA651BLE;
uint16_t id_Tellu;
uint16_t id_Scanner;
uint16_t id_Connecter;
uint16_t id_Notifications;
uint16_t id_ATT;
struct instance_fifo fifo;

// Instances of different sessions

// Variables for the current instance state
int initState;
int ANDUA651BLEImpl_States_State;
int ANDUA651BLEImpl_States_Notify_State;
// Variables for the properties of the instance
uint8_t ANDUA651BLEImpl_NotifierAddressType_var;
uint8_t ANDUA651BLEImpl_AddressType_var;
bdaddr_t ANDUA651BLEImpl_NotifierAddressBT_var;
bdaddr_t ANDUA651BLEImpl_AddressBT_var;
uint16_t ANDUA651BLEImpl_BloodPressureConfigurationHandle_var;
uint16_t ANDUA651BLEImpl_ConnectedHandle_var;
uint16_t ANDUA651BLEImpl_BatteryValueHandle_var;
uint8_t ANDUA651BLEImpl_GotMeasurement_var;
const char * ANDUA651BLEImpl_NotifierAddress_var;
uint8_t ANDUA651BLEImpl_GotRequest_var;
uint16_t ANDUA651BLEImpl_EncryptedDiversifier_var;
uint16_t ANDUA651BLEImpl_BloodPressureValueHandle_var;
const char * ANDUA651BLEImpl_Address_var;
uint8_t ANDUA651BLEImpl_DoSync_var;
ble_random_number_t ANDUA651BLEImpl_LongTermKey_var;
uint8_t ANDUA651BLEImpl_GotStored_var;
ble_random_part_t ANDUA651BLEImpl_RandomNumber_var;

};
// Message enqueue
void enqueue_ANDUA651BLEImpl_ANDUA651BLE_AllowedToConnect(struct ANDUA651BLEImpl_Instance * inst);
void enqueue_ANDUA651BLEImpl_Tellu_MqttRequestBloodPressureMeasurement(struct ANDUA651BLEImpl_Instance * inst);
void enqueue_ANDUA651BLEImpl_Tellu_MqttConfirmBloodPressureMeasurement(struct ANDUA651BLEImpl_Instance * inst);
void enqueue_ANDUA651BLEImpl_Scanner_ConnectableAdvertisement(struct ANDUA651BLEImpl_Instance * inst, uint8_t AddressType, bdaddr_t Address);
void enqueue_ANDUA651BLEImpl_Connecter_Connected(struct ANDUA651BLEImpl_Instance * inst, uint16_t Handle, uint8_t AddressType, bdaddr_t Address);
void enqueue_ANDUA651BLEImpl_Connecter_Stopped(struct ANDUA651BLEImpl_Instance * inst);
void enqueue_ANDUA651BLEImpl_Connecter_Failure(struct ANDUA651BLEImpl_Instance * inst);
void enqueue_ANDUA651BLEImpl_Connecter_Encrypted(struct ANDUA651BLEImpl_Instance * inst);
void enqueue_ANDUA651BLEImpl_Notifications_NotifierReady(struct ANDUA651BLEImpl_Instance * inst);
void enqueue_ANDUA651BLEImpl_Notifications_NotifierFinished(struct ANDUA651BLEImpl_Instance * inst);
void enqueue_ANDUA651BLEImpl_ATT_ATTReadResponse(struct ANDUA651BLEImpl_Instance * inst, uint16_t ConnectionHandle, ble_gatt_data_t AttributeValue);
void enqueue_ANDUA651BLEImpl_ATT_ATTReadError(struct ANDUA651BLEImpl_Instance * inst, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error);
void enqueue_ANDUA651BLEImpl_ATT_ATTWriteError(struct ANDUA651BLEImpl_Instance * inst, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error);
void enqueue_ANDUA651BLEImpl_ATT_ATTHandleValueIndication(struct ANDUA651BLEImpl_Instance * inst, uint16_t ConnectionHandle, uint16_t AttributeHandle, ble_gatt_data_t AttributeValue);

// Fork Sessions

// ProcessMessageQueue
int ANDUA651BLEImpl_processMessageQueue(struct ANDUA651BLEImpl_Instance * _instance);

// Run
void ANDUA651BLEImpl_run(struct ANDUA651BLEImpl_Instance * _instance);

// Declaration of callbacks for incoming messages:
void register_ANDUA651BLEImpl_send_ANDUA651BLE_WantsToConnect_listener(void (*_listener)(struct ANDUA651BLEImpl_Instance *));
void register_external_ANDUA651BLEImpl_send_ANDUA651BLE_WantsToConnect_listener(void (*_listener)(struct ANDUA651BLEImpl_Instance *));
void register_ANDUA651BLEImpl_send_ANDUA651BLE_FinishedConnection_listener(void (*_listener)(struct ANDUA651BLEImpl_Instance *));
void register_external_ANDUA651BLEImpl_send_ANDUA651BLE_FinishedConnection_listener(void (*_listener)(struct ANDUA651BLEImpl_Instance *));
void register_ANDUA651BLEImpl_send_Tellu_TelluCloudBloodPressure_listener(void (*_listener)(struct ANDUA651BLEImpl_Instance *, time_t, int16_t, int16_t, int16_t, int16_t));
void register_external_ANDUA651BLEImpl_send_Tellu_TelluCloudBloodPressure_listener(void (*_listener)(struct ANDUA651BLEImpl_Instance *, time_t, int16_t, int16_t, int16_t, int16_t));
void register_ANDUA651BLEImpl_send_Scanner_Start_listener(void (*_listener)(struct ANDUA651BLEImpl_Instance *));
void register_external_ANDUA651BLEImpl_send_Scanner_Start_listener(void (*_listener)(struct ANDUA651BLEImpl_Instance *));
void register_ANDUA651BLEImpl_send_Scanner_Stop_listener(void (*_listener)(struct ANDUA651BLEImpl_Instance *));
void register_external_ANDUA651BLEImpl_send_Scanner_Stop_listener(void (*_listener)(struct ANDUA651BLEImpl_Instance *));
void register_ANDUA651BLEImpl_send_Connecter_Connect_listener(void (*_listener)(struct ANDUA651BLEImpl_Instance *));
void register_external_ANDUA651BLEImpl_send_Connecter_Connect_listener(void (*_listener)(struct ANDUA651BLEImpl_Instance *));
void register_ANDUA651BLEImpl_send_Connecter_ConnectTo_listener(void (*_listener)(struct ANDUA651BLEImpl_Instance *, uint8_t, bdaddr_t, ble_random_number_t, uint16_t, ble_random_part_t));
void register_external_ANDUA651BLEImpl_send_Connecter_ConnectTo_listener(void (*_listener)(struct ANDUA651BLEImpl_Instance *, uint8_t, bdaddr_t, ble_random_number_t, uint16_t, ble_random_part_t));
void register_ANDUA651BLEImpl_send_Connecter_ConnectToU_listener(void (*_listener)(struct ANDUA651BLEImpl_Instance *, uint8_t, bdaddr_t));
void register_external_ANDUA651BLEImpl_send_Connecter_ConnectToU_listener(void (*_listener)(struct ANDUA651BLEImpl_Instance *, uint8_t, bdaddr_t));
void register_ANDUA651BLEImpl_send_Connecter_Stop_listener(void (*_listener)(struct ANDUA651BLEImpl_Instance *));
void register_external_ANDUA651BLEImpl_send_Connecter_Stop_listener(void (*_listener)(struct ANDUA651BLEImpl_Instance *));
void register_ANDUA651BLEImpl_send_Connecter_Encrypt_listener(void (*_listener)(struct ANDUA651BLEImpl_Instance *));
void register_external_ANDUA651BLEImpl_send_Connecter_Encrypt_listener(void (*_listener)(struct ANDUA651BLEImpl_Instance *));
void register_ANDUA651BLEImpl_send_Notifications_NotifierConnect_listener(void (*_listener)(struct ANDUA651BLEImpl_Instance *, uint8_t, bdaddr_t));
void register_external_ANDUA651BLEImpl_send_Notifications_NotifierConnect_listener(void (*_listener)(struct ANDUA651BLEImpl_Instance *, uint8_t, bdaddr_t));
void register_ANDUA651BLEImpl_send_Notifications_NotifierRequest_listener(void (*_listener)(struct ANDUA651BLEImpl_Instance *));
void register_external_ANDUA651BLEImpl_send_Notifications_NotifierRequest_listener(void (*_listener)(struct ANDUA651BLEImpl_Instance *));
void register_ANDUA651BLEImpl_send_Notifications_NotifierError_listener(void (*_listener)(struct ANDUA651BLEImpl_Instance *));
void register_external_ANDUA651BLEImpl_send_Notifications_NotifierError_listener(void (*_listener)(struct ANDUA651BLEImpl_Instance *));
void register_ANDUA651BLEImpl_send_Notifications_NotifierReceived_listener(void (*_listener)(struct ANDUA651BLEImpl_Instance *));
void register_external_ANDUA651BLEImpl_send_Notifications_NotifierReceived_listener(void (*_listener)(struct ANDUA651BLEImpl_Instance *));
void register_ANDUA651BLEImpl_send_Notifications_NotifierStored_listener(void (*_listener)(struct ANDUA651BLEImpl_Instance *));
void register_external_ANDUA651BLEImpl_send_Notifications_NotifierStored_listener(void (*_listener)(struct ANDUA651BLEImpl_Instance *));
void register_ANDUA651BLEImpl_send_ATT_ATTFindInformationRequest_listener(void (*_listener)(struct ANDUA651BLEImpl_Instance *, uint16_t, uint16_t, uint16_t));
void register_external_ANDUA651BLEImpl_send_ATT_ATTFindInformationRequest_listener(void (*_listener)(struct ANDUA651BLEImpl_Instance *, uint16_t, uint16_t, uint16_t));
void register_ANDUA651BLEImpl_send_ATT_ATTFindInformationResponse_listener(void (*_listener)(struct ANDUA651BLEImpl_Instance *, uint16_t, uint8_t, ble_gatt_data_t));
void register_external_ANDUA651BLEImpl_send_ATT_ATTFindInformationResponse_listener(void (*_listener)(struct ANDUA651BLEImpl_Instance *, uint16_t, uint8_t, ble_gatt_data_t));
void register_ANDUA651BLEImpl_send_ATT_ATTFindInformationError_listener(void (*_listener)(struct ANDUA651BLEImpl_Instance *, uint16_t, uint16_t, uint8_t));
void register_external_ANDUA651BLEImpl_send_ATT_ATTFindInformationError_listener(void (*_listener)(struct ANDUA651BLEImpl_Instance *, uint16_t, uint16_t, uint8_t));
void register_ANDUA651BLEImpl_send_ATT_ATTReadByTypeRequest_listener(void (*_listener)(struct ANDUA651BLEImpl_Instance *, uint16_t, uint16_t, uint16_t, ble_uuid_t));
void register_external_ANDUA651BLEImpl_send_ATT_ATTReadByTypeRequest_listener(void (*_listener)(struct ANDUA651BLEImpl_Instance *, uint16_t, uint16_t, uint16_t, ble_uuid_t));
void register_ANDUA651BLEImpl_send_ATT_ATTReadByTypeResponse_listener(void (*_listener)(struct ANDUA651BLEImpl_Instance *, uint16_t, uint8_t, ble_gatt_data_t));
void register_external_ANDUA651BLEImpl_send_ATT_ATTReadByTypeResponse_listener(void (*_listener)(struct ANDUA651BLEImpl_Instance *, uint16_t, uint8_t, ble_gatt_data_t));
void register_ANDUA651BLEImpl_send_ATT_ATTReadByTypeError_listener(void (*_listener)(struct ANDUA651BLEImpl_Instance *, uint16_t, uint16_t, uint8_t));
void register_external_ANDUA651BLEImpl_send_ATT_ATTReadByTypeError_listener(void (*_listener)(struct ANDUA651BLEImpl_Instance *, uint16_t, uint16_t, uint8_t));
void register_ANDUA651BLEImpl_send_ATT_ATTReadRequest_listener(void (*_listener)(struct ANDUA651BLEImpl_Instance *, uint16_t, uint16_t));
void register_external_ANDUA651BLEImpl_send_ATT_ATTReadRequest_listener(void (*_listener)(struct ANDUA651BLEImpl_Instance *, uint16_t, uint16_t));
void register_ANDUA651BLEImpl_send_ATT_ATTReadResponse_listener(void (*_listener)(struct ANDUA651BLEImpl_Instance *, uint16_t, ble_gatt_data_t));
void register_external_ANDUA651BLEImpl_send_ATT_ATTReadResponse_listener(void (*_listener)(struct ANDUA651BLEImpl_Instance *, uint16_t, ble_gatt_data_t));
void register_ANDUA651BLEImpl_send_ATT_ATTReadError_listener(void (*_listener)(struct ANDUA651BLEImpl_Instance *, uint16_t, uint16_t, uint8_t));
void register_external_ANDUA651BLEImpl_send_ATT_ATTReadError_listener(void (*_listener)(struct ANDUA651BLEImpl_Instance *, uint16_t, uint16_t, uint8_t));
void register_ANDUA651BLEImpl_send_ATT_ATTReadByGroupTypeRequest_listener(void (*_listener)(struct ANDUA651BLEImpl_Instance *, uint16_t, uint16_t, uint16_t, ble_uuid_t));
void register_external_ANDUA651BLEImpl_send_ATT_ATTReadByGroupTypeRequest_listener(void (*_listener)(struct ANDUA651BLEImpl_Instance *, uint16_t, uint16_t, uint16_t, ble_uuid_t));
void register_ANDUA651BLEImpl_send_ATT_ATTReadByGroupTypeResponse_listener(void (*_listener)(struct ANDUA651BLEImpl_Instance *, uint16_t, uint8_t, ble_gatt_data_t));
void register_external_ANDUA651BLEImpl_send_ATT_ATTReadByGroupTypeResponse_listener(void (*_listener)(struct ANDUA651BLEImpl_Instance *, uint16_t, uint8_t, ble_gatt_data_t));
void register_ANDUA651BLEImpl_send_ATT_ATTReadByGroupTypeError_listener(void (*_listener)(struct ANDUA651BLEImpl_Instance *, uint16_t, uint16_t, uint8_t));
void register_external_ANDUA651BLEImpl_send_ATT_ATTReadByGroupTypeError_listener(void (*_listener)(struct ANDUA651BLEImpl_Instance *, uint16_t, uint16_t, uint8_t));
void register_ANDUA651BLEImpl_send_ATT_ATTWriteRequest_listener(void (*_listener)(struct ANDUA651BLEImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t));
void register_external_ANDUA651BLEImpl_send_ATT_ATTWriteRequest_listener(void (*_listener)(struct ANDUA651BLEImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t));
void register_ANDUA651BLEImpl_send_ATT_ATTWriteResponse_listener(void (*_listener)(struct ANDUA651BLEImpl_Instance *, uint16_t));
void register_external_ANDUA651BLEImpl_send_ATT_ATTWriteResponse_listener(void (*_listener)(struct ANDUA651BLEImpl_Instance *, uint16_t));
void register_ANDUA651BLEImpl_send_ATT_ATTWriteError_listener(void (*_listener)(struct ANDUA651BLEImpl_Instance *, uint16_t, uint16_t, uint8_t));
void register_external_ANDUA651BLEImpl_send_ATT_ATTWriteError_listener(void (*_listener)(struct ANDUA651BLEImpl_Instance *, uint16_t, uint16_t, uint8_t));
void register_ANDUA651BLEImpl_send_ATT_ATTWriteCommand_listener(void (*_listener)(struct ANDUA651BLEImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t));
void register_external_ANDUA651BLEImpl_send_ATT_ATTWriteCommand_listener(void (*_listener)(struct ANDUA651BLEImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t));
void register_ANDUA651BLEImpl_send_ATT_ATTHandleValueNotification_listener(void (*_listener)(struct ANDUA651BLEImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t));
void register_external_ANDUA651BLEImpl_send_ATT_ATTHandleValueNotification_listener(void (*_listener)(struct ANDUA651BLEImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t));
void register_ANDUA651BLEImpl_send_ATT_ATTHandleValueIndication_listener(void (*_listener)(struct ANDUA651BLEImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t));
void register_external_ANDUA651BLEImpl_send_ATT_ATTHandleValueIndication_listener(void (*_listener)(struct ANDUA651BLEImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t));
void register_ANDUA651BLEImpl_send_ATT_ATTHandleValueConfirmation_listener(void (*_listener)(struct ANDUA651BLEImpl_Instance *, uint16_t));
void register_external_ANDUA651BLEImpl_send_ATT_ATTHandleValueConfirmation_listener(void (*_listener)(struct ANDUA651BLEImpl_Instance *, uint16_t));

// Definition of the states:
#define ANDUA651BLEIMPL_STATES_STATE 0
#define ANDUA651BLEIMPL_STATES_STANDBY_STATE 1
#define ANDUA651BLEIMPL_STATES_CONNECTING_STATE 2
#define ANDUA651BLEIMPL_STATES_SYNC_STATE 3
#define ANDUA651BLEIMPL_STATES_NOTIFY_STATE 4
#define ANDUA651BLEIMPL_STATES_NOTIFY_STATE 5
#define ANDUA651BLEIMPL_STATES_NOTIFY_WAIT_STATE 6
#define ANDUA651BLEIMPL_STATES_NOTIFY_CONNECTINGNOTIFIER_STATE 7
#define ANDUA651BLEIMPL_STATES_NOTIFY_CONNECTEDNOTIFIER_STATE 8



#ifdef __cplusplus
}
#endif

#endif //ANDUA651BLEImpl_H_
