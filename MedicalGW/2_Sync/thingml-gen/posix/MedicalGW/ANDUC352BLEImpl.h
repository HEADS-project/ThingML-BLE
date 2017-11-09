/*****************************************************
 *      THIS IS A GENERATED FILE. DO NOT EDIT.
 *           Header for Thing ANDUC352BLEImpl
 *  Generated from ThingML (http://www.thingml.org)
 *****************************************************/

#ifndef ANDUC352BLEImpl_H_
#define ANDUC352BLEImpl_H_

#ifdef __cplusplus
extern "C" {
#endif

#include "thingml_typedefs.h"

/*****************************************************************************
 * Headers for type : ANDUC352BLEImpl
 *****************************************************************************/


// BEGIN: Code from the c_header annotation ANDUC352BLEImpl

  #include <time.h>
  #include <bluetooth/bluetooth.h>

// END: Code from the c_header annotation ANDUC352BLEImpl


// BEGIN: Code from the c_header annotation for type UUID
#ifndef BLE_UUID_T_H
#define BLE_UUID_T_H
typedef struct { uint8_t bytes[16]; } ble_uuid_t;
#endif
// END: Code from the c_header annotation for type UUID


// BEGIN: Code from the c_header annotation for type BLERandomPart
#ifndef BLE_RANDOM_PART_T_H
#define BLE_RANDOM_PART_T_H
typedef struct { uint8_t bytes[8]; } ble_random_part_t;
#endif
// END: Code from the c_header annotation for type BLERandomPart


// BEGIN: Code from the c_header annotation for type BTAddress
#include <bluetooth/bluetooth.h>
// END: Code from the c_header annotation for type BTAddress


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

// Definition of the instance struct:
struct ANDUC352BLEImpl_Instance {

// Instances of different sessions
bool active;
// Variables for the ID of the ports of the instance
uint16_t id_ANDUC352BLE;
uint16_t id_Tellu;
uint16_t id_Scanner;
uint16_t id_Connecter;
uint16_t id_Notifications;
uint16_t id_ATT;
// Variables for the current instance state
int ANDUC352BLEImpl_States_State;
int ANDUC352BLEImpl_States_Sync_State;
int ANDUC352BLEImpl_States_Notify_State;
// Variables for the properties of the instance
bdaddr_t ANDUC352BLEImpl_NotifierAddressBT_var;
bdaddr_t ANDUC352BLEImpl_AddressBT_var;
ble_random_number_t ANDUC352BLEImpl_LongTermKey_var;
uint16_t ANDUC352BLEImpl_BatteryValueHandle_var;
uint16_t ANDUC352BLEImpl_WeightScaleConfigurationHandle_var;
uint8_t ANDUC352BLEImpl_DoSync_var;
uint16_t ANDUC352BLEImpl_EncryptedDiversifier_var;
uint16_t ANDUC352BLEImpl_ConnectedHandle_var;
uint8_t ANDUC352BLEImpl_AddressType_var;
uint8_t ANDUC352BLEImpl_NotifierAddressType_var;
uint8_t ANDUC352BLEImpl_GotMeasurement_var;
const char * ANDUC352BLEImpl_NotifierAddress_var;
uint8_t ANDUC352BLEImpl_GotRequest_var;
const char * ANDUC352BLEImpl_Address_var;
uint16_t ANDUC352BLEImpl_WeightScaleValueHandle_var;
ble_random_part_t ANDUC352BLEImpl_RandomNumber_var;
uint8_t ANDUC352BLEImpl_GotStored_var;

};
// Declaration of prototypes outgoing messages :
void ANDUC352BLEImpl_States_OnEntry(int state, struct ANDUC352BLEImpl_Instance *_instance);
void ANDUC352BLEImpl_handle_ANDUC352BLE_AllowedToConnect(struct ANDUC352BLEImpl_Instance *_instance);
void ANDUC352BLEImpl_handle_Scanner_ConnectableAdvertisement(struct ANDUC352BLEImpl_Instance *_instance, uint8_t AddressType, bdaddr_t Address);
void ANDUC352BLEImpl_handle_Connecter_Stopped(struct ANDUC352BLEImpl_Instance *_instance);
void ANDUC352BLEImpl_handle_Connecter_Connected(struct ANDUC352BLEImpl_Instance *_instance, uint16_t Handle, uint8_t AddressType, bdaddr_t Address);
void ANDUC352BLEImpl_handle_Connecter_Failure(struct ANDUC352BLEImpl_Instance *_instance);
void ANDUC352BLEImpl_handle_Connecter_Encrypted(struct ANDUC352BLEImpl_Instance *_instance);
void ANDUC352BLEImpl_handle_Notifications_NotifierReady(struct ANDUC352BLEImpl_Instance *_instance);
void ANDUC352BLEImpl_handle_Notifications_NotifierFinished(struct ANDUC352BLEImpl_Instance *_instance);
void ANDUC352BLEImpl_handle_Tellu_MqttRequestWeightMeasurement(struct ANDUC352BLEImpl_Instance *_instance);
void ANDUC352BLEImpl_handle_Tellu_MqttConfirmWeightMeasurement(struct ANDUC352BLEImpl_Instance *_instance);
void ANDUC352BLEImpl_handle_ATT_ATTWriteError(struct ANDUC352BLEImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error);
void ANDUC352BLEImpl_handle_ATT_ATTWriteResponse(struct ANDUC352BLEImpl_Instance *_instance, uint16_t ConnectionHandle);
void ANDUC352BLEImpl_handle_ATT_ATTReadResponse(struct ANDUC352BLEImpl_Instance *_instance, uint16_t ConnectionHandle, ble_gatt_data_t AttributeValue);
void ANDUC352BLEImpl_handle_ATT_ATTHandleValueIndication(struct ANDUC352BLEImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, ble_gatt_data_t AttributeValue);
void ANDUC352BLEImpl_handle_ATT_ATTReadError(struct ANDUC352BLEImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error);
// Declaration of callbacks for incoming messages:
void register_ANDUC352BLEImpl_send_ANDUC352BLE_WantsToConnect_listener(void (*_listener)(struct ANDUC352BLEImpl_Instance *));
void register_external_ANDUC352BLEImpl_send_ANDUC352BLE_WantsToConnect_listener(void (*_listener)(struct ANDUC352BLEImpl_Instance *));
void register_ANDUC352BLEImpl_send_ANDUC352BLE_FinishedConnection_listener(void (*_listener)(struct ANDUC352BLEImpl_Instance *));
void register_external_ANDUC352BLEImpl_send_ANDUC352BLE_FinishedConnection_listener(void (*_listener)(struct ANDUC352BLEImpl_Instance *));
void register_ANDUC352BLEImpl_send_Tellu_TelluCloudWeightScale_listener(void (*_listener)(struct ANDUC352BLEImpl_Instance *, time_t, float));
void register_external_ANDUC352BLEImpl_send_Tellu_TelluCloudWeightScale_listener(void (*_listener)(struct ANDUC352BLEImpl_Instance *, time_t, float));
void register_ANDUC352BLEImpl_send_Scanner_Start_listener(void (*_listener)(struct ANDUC352BLEImpl_Instance *));
void register_external_ANDUC352BLEImpl_send_Scanner_Start_listener(void (*_listener)(struct ANDUC352BLEImpl_Instance *));
void register_ANDUC352BLEImpl_send_Scanner_Stop_listener(void (*_listener)(struct ANDUC352BLEImpl_Instance *));
void register_external_ANDUC352BLEImpl_send_Scanner_Stop_listener(void (*_listener)(struct ANDUC352BLEImpl_Instance *));
void register_ANDUC352BLEImpl_send_Connecter_Connect_listener(void (*_listener)(struct ANDUC352BLEImpl_Instance *));
void register_external_ANDUC352BLEImpl_send_Connecter_Connect_listener(void (*_listener)(struct ANDUC352BLEImpl_Instance *));
void register_ANDUC352BLEImpl_send_Connecter_ConnectTo_listener(void (*_listener)(struct ANDUC352BLEImpl_Instance *, uint8_t, bdaddr_t, ble_random_number_t, uint16_t, ble_random_part_t));
void register_external_ANDUC352BLEImpl_send_Connecter_ConnectTo_listener(void (*_listener)(struct ANDUC352BLEImpl_Instance *, uint8_t, bdaddr_t, ble_random_number_t, uint16_t, ble_random_part_t));
void register_ANDUC352BLEImpl_send_Connecter_ConnectToU_listener(void (*_listener)(struct ANDUC352BLEImpl_Instance *, uint8_t, bdaddr_t));
void register_external_ANDUC352BLEImpl_send_Connecter_ConnectToU_listener(void (*_listener)(struct ANDUC352BLEImpl_Instance *, uint8_t, bdaddr_t));
void register_ANDUC352BLEImpl_send_Connecter_Stop_listener(void (*_listener)(struct ANDUC352BLEImpl_Instance *));
void register_external_ANDUC352BLEImpl_send_Connecter_Stop_listener(void (*_listener)(struct ANDUC352BLEImpl_Instance *));
void register_ANDUC352BLEImpl_send_Connecter_Encrypt_listener(void (*_listener)(struct ANDUC352BLEImpl_Instance *));
void register_external_ANDUC352BLEImpl_send_Connecter_Encrypt_listener(void (*_listener)(struct ANDUC352BLEImpl_Instance *));
void register_ANDUC352BLEImpl_send_Notifications_NotifierConnect_listener(void (*_listener)(struct ANDUC352BLEImpl_Instance *, uint8_t, bdaddr_t));
void register_external_ANDUC352BLEImpl_send_Notifications_NotifierConnect_listener(void (*_listener)(struct ANDUC352BLEImpl_Instance *, uint8_t, bdaddr_t));
void register_ANDUC352BLEImpl_send_Notifications_NotifierRequest_listener(void (*_listener)(struct ANDUC352BLEImpl_Instance *));
void register_external_ANDUC352BLEImpl_send_Notifications_NotifierRequest_listener(void (*_listener)(struct ANDUC352BLEImpl_Instance *));
void register_ANDUC352BLEImpl_send_Notifications_NotifierError_listener(void (*_listener)(struct ANDUC352BLEImpl_Instance *));
void register_external_ANDUC352BLEImpl_send_Notifications_NotifierError_listener(void (*_listener)(struct ANDUC352BLEImpl_Instance *));
void register_ANDUC352BLEImpl_send_Notifications_NotifierReceived_listener(void (*_listener)(struct ANDUC352BLEImpl_Instance *));
void register_external_ANDUC352BLEImpl_send_Notifications_NotifierReceived_listener(void (*_listener)(struct ANDUC352BLEImpl_Instance *));
void register_ANDUC352BLEImpl_send_Notifications_NotifierStored_listener(void (*_listener)(struct ANDUC352BLEImpl_Instance *));
void register_external_ANDUC352BLEImpl_send_Notifications_NotifierStored_listener(void (*_listener)(struct ANDUC352BLEImpl_Instance *));
void register_ANDUC352BLEImpl_send_ATT_ATTFindInformationRequest_listener(void (*_listener)(struct ANDUC352BLEImpl_Instance *, uint16_t, uint16_t, uint16_t));
void register_external_ANDUC352BLEImpl_send_ATT_ATTFindInformationRequest_listener(void (*_listener)(struct ANDUC352BLEImpl_Instance *, uint16_t, uint16_t, uint16_t));
void register_ANDUC352BLEImpl_send_ATT_ATTFindInformationResponse_listener(void (*_listener)(struct ANDUC352BLEImpl_Instance *, uint16_t, uint8_t, ble_gatt_data_t));
void register_external_ANDUC352BLEImpl_send_ATT_ATTFindInformationResponse_listener(void (*_listener)(struct ANDUC352BLEImpl_Instance *, uint16_t, uint8_t, ble_gatt_data_t));
void register_ANDUC352BLEImpl_send_ATT_ATTFindInformationError_listener(void (*_listener)(struct ANDUC352BLEImpl_Instance *, uint16_t, uint16_t, uint8_t));
void register_external_ANDUC352BLEImpl_send_ATT_ATTFindInformationError_listener(void (*_listener)(struct ANDUC352BLEImpl_Instance *, uint16_t, uint16_t, uint8_t));
void register_ANDUC352BLEImpl_send_ATT_ATTReadByTypeRequest_listener(void (*_listener)(struct ANDUC352BLEImpl_Instance *, uint16_t, uint16_t, uint16_t, ble_uuid_t));
void register_external_ANDUC352BLEImpl_send_ATT_ATTReadByTypeRequest_listener(void (*_listener)(struct ANDUC352BLEImpl_Instance *, uint16_t, uint16_t, uint16_t, ble_uuid_t));
void register_ANDUC352BLEImpl_send_ATT_ATTReadByTypeResponse_listener(void (*_listener)(struct ANDUC352BLEImpl_Instance *, uint16_t, uint8_t, ble_gatt_data_t));
void register_external_ANDUC352BLEImpl_send_ATT_ATTReadByTypeResponse_listener(void (*_listener)(struct ANDUC352BLEImpl_Instance *, uint16_t, uint8_t, ble_gatt_data_t));
void register_ANDUC352BLEImpl_send_ATT_ATTReadByTypeError_listener(void (*_listener)(struct ANDUC352BLEImpl_Instance *, uint16_t, uint16_t, uint8_t));
void register_external_ANDUC352BLEImpl_send_ATT_ATTReadByTypeError_listener(void (*_listener)(struct ANDUC352BLEImpl_Instance *, uint16_t, uint16_t, uint8_t));
void register_ANDUC352BLEImpl_send_ATT_ATTReadRequest_listener(void (*_listener)(struct ANDUC352BLEImpl_Instance *, uint16_t, uint16_t));
void register_external_ANDUC352BLEImpl_send_ATT_ATTReadRequest_listener(void (*_listener)(struct ANDUC352BLEImpl_Instance *, uint16_t, uint16_t));
void register_ANDUC352BLEImpl_send_ATT_ATTReadResponse_listener(void (*_listener)(struct ANDUC352BLEImpl_Instance *, uint16_t, ble_gatt_data_t));
void register_external_ANDUC352BLEImpl_send_ATT_ATTReadResponse_listener(void (*_listener)(struct ANDUC352BLEImpl_Instance *, uint16_t, ble_gatt_data_t));
void register_ANDUC352BLEImpl_send_ATT_ATTReadError_listener(void (*_listener)(struct ANDUC352BLEImpl_Instance *, uint16_t, uint16_t, uint8_t));
void register_external_ANDUC352BLEImpl_send_ATT_ATTReadError_listener(void (*_listener)(struct ANDUC352BLEImpl_Instance *, uint16_t, uint16_t, uint8_t));
void register_ANDUC352BLEImpl_send_ATT_ATTReadByGroupTypeRequest_listener(void (*_listener)(struct ANDUC352BLEImpl_Instance *, uint16_t, uint16_t, uint16_t, ble_uuid_t));
void register_external_ANDUC352BLEImpl_send_ATT_ATTReadByGroupTypeRequest_listener(void (*_listener)(struct ANDUC352BLEImpl_Instance *, uint16_t, uint16_t, uint16_t, ble_uuid_t));
void register_ANDUC352BLEImpl_send_ATT_ATTReadByGroupTypeResponse_listener(void (*_listener)(struct ANDUC352BLEImpl_Instance *, uint16_t, uint8_t, ble_gatt_data_t));
void register_external_ANDUC352BLEImpl_send_ATT_ATTReadByGroupTypeResponse_listener(void (*_listener)(struct ANDUC352BLEImpl_Instance *, uint16_t, uint8_t, ble_gatt_data_t));
void register_ANDUC352BLEImpl_send_ATT_ATTReadByGroupTypeError_listener(void (*_listener)(struct ANDUC352BLEImpl_Instance *, uint16_t, uint16_t, uint8_t));
void register_external_ANDUC352BLEImpl_send_ATT_ATTReadByGroupTypeError_listener(void (*_listener)(struct ANDUC352BLEImpl_Instance *, uint16_t, uint16_t, uint8_t));
void register_ANDUC352BLEImpl_send_ATT_ATTWriteRequest_listener(void (*_listener)(struct ANDUC352BLEImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t));
void register_external_ANDUC352BLEImpl_send_ATT_ATTWriteRequest_listener(void (*_listener)(struct ANDUC352BLEImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t));
void register_ANDUC352BLEImpl_send_ATT_ATTWriteResponse_listener(void (*_listener)(struct ANDUC352BLEImpl_Instance *, uint16_t));
void register_external_ANDUC352BLEImpl_send_ATT_ATTWriteResponse_listener(void (*_listener)(struct ANDUC352BLEImpl_Instance *, uint16_t));
void register_ANDUC352BLEImpl_send_ATT_ATTWriteError_listener(void (*_listener)(struct ANDUC352BLEImpl_Instance *, uint16_t, uint16_t, uint8_t));
void register_external_ANDUC352BLEImpl_send_ATT_ATTWriteError_listener(void (*_listener)(struct ANDUC352BLEImpl_Instance *, uint16_t, uint16_t, uint8_t));
void register_ANDUC352BLEImpl_send_ATT_ATTWriteCommand_listener(void (*_listener)(struct ANDUC352BLEImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t));
void register_external_ANDUC352BLEImpl_send_ATT_ATTWriteCommand_listener(void (*_listener)(struct ANDUC352BLEImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t));
void register_ANDUC352BLEImpl_send_ATT_ATTHandleValueNotification_listener(void (*_listener)(struct ANDUC352BLEImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t));
void register_external_ANDUC352BLEImpl_send_ATT_ATTHandleValueNotification_listener(void (*_listener)(struct ANDUC352BLEImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t));
void register_ANDUC352BLEImpl_send_ATT_ATTHandleValueIndication_listener(void (*_listener)(struct ANDUC352BLEImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t));
void register_external_ANDUC352BLEImpl_send_ATT_ATTHandleValueIndication_listener(void (*_listener)(struct ANDUC352BLEImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t));
void register_ANDUC352BLEImpl_send_ATT_ATTHandleValueConfirmation_listener(void (*_listener)(struct ANDUC352BLEImpl_Instance *, uint16_t));
void register_external_ANDUC352BLEImpl_send_ATT_ATTHandleValueConfirmation_listener(void (*_listener)(struct ANDUC352BLEImpl_Instance *, uint16_t));

// Definition of the states:
#define ANDUC352BLEIMPL_STATES_STATE 0
#define ANDUC352BLEIMPL_STATES_STANDBY_STATE 1
#define ANDUC352BLEIMPL_STATES_CONNECTING_STATE 2
#define ANDUC352BLEIMPL_STATES_SYNC_STATE 3
#define ANDUC352BLEIMPL_STATES_NOTIFY_STATE 4
#define ANDUC352BLEIMPL_STATES_SYNC_STATE 5
#define ANDUC352BLEIMPL_STATES_SYNC_READBATTERY_STATE 6
#define ANDUC352BLEIMPL_STATES_SYNC_TIMESYNC_STATE 7
#define ANDUC352BLEIMPL_STATES_SYNC_GETVALUES_STATE 8
#define ANDUC352BLEIMPL_STATES_NOTIFY_STATE 9
#define ANDUC352BLEIMPL_STATES_NOTIFY_WAIT_STATE 10
#define ANDUC352BLEIMPL_STATES_NOTIFY_CONNECTINGNOTIFIER_STATE 11
#define ANDUC352BLEIMPL_STATES_NOTIFY_CONNECTEDNOTIFIER_STATE 12



#ifdef __cplusplus
}
#endif

#endif //ANDUC352BLEImpl_H_
