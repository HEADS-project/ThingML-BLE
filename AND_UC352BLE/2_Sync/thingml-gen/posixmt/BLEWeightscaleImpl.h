/*****************************************************
 *      THIS IS A GENERATED FILE. DO NOT EDIT.
 *           Header for Thing BLEWeightscaleImpl
 *  Generated from ThingML (http://www.thingml.org)
 *****************************************************/

#ifndef BLEWeightscaleImpl_H_
#define BLEWeightscaleImpl_H_

#ifdef __cplusplus
extern "C" {
#endif

#include "thingml_typedefs.h"
#include "runtime.h"

/*****************************************************************************
 * Headers for type : BLEWeightscaleImpl
 *****************************************************************************/

#include "runtime.h"

// BEGIN: Code from the c_header annotation BLEWeightscaleImpl
#include <time.h>
// END: Code from the c_header annotation BLEWeightscaleImpl


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


// BEGIN: Code from the c_header annotation for type BTAddress
#include <bluetooth/bluetooth.h>
// END: Code from the c_header annotation for type BTAddress

// Definition of the sessions stuct:

// Definition of the instance stuct:
struct BLEWeightscaleImpl_Instance {
bool active;
bool alive;
// Variables for the ID of the ports of the instance
uint16_t id_Weightscale;
uint16_t id_Connecter;
uint16_t id_ATT;
struct instance_fifo fifo;

// Instances of different sessions

// Variables for the current instance state
int initState;
int BLEWeightscaleImpl_States_State;
// Variables for the properties of the instance
uint16_t BLEWeightscaleImpl_ConnectedHandle_var;
uint16_t BLEWeightscaleImpl_BatteryValueHandle_var;
uint16_t BLEWeightscaleImpl_WeightScaleValueHandle_var;
uint16_t BLEWeightscaleImpl_WeightScaleConfigurationHandle_var;

};
// Message enqueue
void enqueue_BLEWeightscaleImpl_Connecter_Connected(struct BLEWeightscaleImpl_Instance * inst, uint16_t Handle, uint8_t AddressType, bdaddr_t Address);
void enqueue_BLEWeightscaleImpl_Connecter_Stopped(struct BLEWeightscaleImpl_Instance * inst);
void enqueue_BLEWeightscaleImpl_Connecter_Failure(struct BLEWeightscaleImpl_Instance * inst);
void enqueue_BLEWeightscaleImpl_Connecter_Encrypted(struct BLEWeightscaleImpl_Instance * inst);
void enqueue_BLEWeightscaleImpl_ATT_ATTReadResponse(struct BLEWeightscaleImpl_Instance * inst, uint16_t ConnectionHandle, ble_gatt_data_t AttributeValue);
void enqueue_BLEWeightscaleImpl_ATT_ATTReadError(struct BLEWeightscaleImpl_Instance * inst, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error);
void enqueue_BLEWeightscaleImpl_ATT_ATTWriteResponse(struct BLEWeightscaleImpl_Instance * inst, uint16_t ConnectionHandle);
void enqueue_BLEWeightscaleImpl_ATT_ATTWriteError(struct BLEWeightscaleImpl_Instance * inst, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error);
void enqueue_BLEWeightscaleImpl_ATT_ATTHandleValueIndication(struct BLEWeightscaleImpl_Instance * inst, uint16_t ConnectionHandle, uint16_t AttributeHandle, ble_gatt_data_t AttributeValue);

// Fork Sessions

// ProcessMessageQueue
int BLEWeightscaleImpl_processMessageQueue(struct BLEWeightscaleImpl_Instance * _instance);

// Run
void BLEWeightscaleImpl_run(struct BLEWeightscaleImpl_Instance * _instance);

// Declaration of callbacks for incoming messages:
void register_BLEWeightscaleImpl_send_Weightscale_BatteryPercentage_listener(void (*_listener)(struct BLEWeightscaleImpl_Instance *, uint8_t));
void register_external_BLEWeightscaleImpl_send_Weightscale_BatteryPercentage_listener(void (*_listener)(struct BLEWeightscaleImpl_Instance *, uint8_t));
void register_BLEWeightscaleImpl_send_Weightscale_WeightscaleMeasurement_listener(void (*_listener)(struct BLEWeightscaleImpl_Instance *, uint16_t, uint8_t, uint16_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t));
void register_external_BLEWeightscaleImpl_send_Weightscale_WeightscaleMeasurement_listener(void (*_listener)(struct BLEWeightscaleImpl_Instance *, uint16_t, uint8_t, uint16_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t));
void register_BLEWeightscaleImpl_send_Connecter_Connect_listener(void (*_listener)(struct BLEWeightscaleImpl_Instance *));
void register_external_BLEWeightscaleImpl_send_Connecter_Connect_listener(void (*_listener)(struct BLEWeightscaleImpl_Instance *));
void register_BLEWeightscaleImpl_send_Connecter_Stop_listener(void (*_listener)(struct BLEWeightscaleImpl_Instance *));
void register_external_BLEWeightscaleImpl_send_Connecter_Stop_listener(void (*_listener)(struct BLEWeightscaleImpl_Instance *));
void register_BLEWeightscaleImpl_send_Connecter_Encrypt_listener(void (*_listener)(struct BLEWeightscaleImpl_Instance *));
void register_external_BLEWeightscaleImpl_send_Connecter_Encrypt_listener(void (*_listener)(struct BLEWeightscaleImpl_Instance *));
void register_BLEWeightscaleImpl_send_ATT_ATTFindInformationRequest_listener(void (*_listener)(struct BLEWeightscaleImpl_Instance *, uint16_t, uint16_t, uint16_t));
void register_external_BLEWeightscaleImpl_send_ATT_ATTFindInformationRequest_listener(void (*_listener)(struct BLEWeightscaleImpl_Instance *, uint16_t, uint16_t, uint16_t));
void register_BLEWeightscaleImpl_send_ATT_ATTFindInformationResponse_listener(void (*_listener)(struct BLEWeightscaleImpl_Instance *, uint16_t, uint8_t, ble_gatt_data_t));
void register_external_BLEWeightscaleImpl_send_ATT_ATTFindInformationResponse_listener(void (*_listener)(struct BLEWeightscaleImpl_Instance *, uint16_t, uint8_t, ble_gatt_data_t));
void register_BLEWeightscaleImpl_send_ATT_ATTFindInformationError_listener(void (*_listener)(struct BLEWeightscaleImpl_Instance *, uint16_t, uint16_t, uint8_t));
void register_external_BLEWeightscaleImpl_send_ATT_ATTFindInformationError_listener(void (*_listener)(struct BLEWeightscaleImpl_Instance *, uint16_t, uint16_t, uint8_t));
void register_BLEWeightscaleImpl_send_ATT_ATTReadByTypeRequest_listener(void (*_listener)(struct BLEWeightscaleImpl_Instance *, uint16_t, uint16_t, uint16_t, ble_uuid_t));
void register_external_BLEWeightscaleImpl_send_ATT_ATTReadByTypeRequest_listener(void (*_listener)(struct BLEWeightscaleImpl_Instance *, uint16_t, uint16_t, uint16_t, ble_uuid_t));
void register_BLEWeightscaleImpl_send_ATT_ATTReadByTypeResponse_listener(void (*_listener)(struct BLEWeightscaleImpl_Instance *, uint16_t, uint8_t, ble_gatt_data_t));
void register_external_BLEWeightscaleImpl_send_ATT_ATTReadByTypeResponse_listener(void (*_listener)(struct BLEWeightscaleImpl_Instance *, uint16_t, uint8_t, ble_gatt_data_t));
void register_BLEWeightscaleImpl_send_ATT_ATTReadByTypeError_listener(void (*_listener)(struct BLEWeightscaleImpl_Instance *, uint16_t, uint16_t, uint8_t));
void register_external_BLEWeightscaleImpl_send_ATT_ATTReadByTypeError_listener(void (*_listener)(struct BLEWeightscaleImpl_Instance *, uint16_t, uint16_t, uint8_t));
void register_BLEWeightscaleImpl_send_ATT_ATTReadRequest_listener(void (*_listener)(struct BLEWeightscaleImpl_Instance *, uint16_t, uint16_t));
void register_external_BLEWeightscaleImpl_send_ATT_ATTReadRequest_listener(void (*_listener)(struct BLEWeightscaleImpl_Instance *, uint16_t, uint16_t));
void register_BLEWeightscaleImpl_send_ATT_ATTReadResponse_listener(void (*_listener)(struct BLEWeightscaleImpl_Instance *, uint16_t, ble_gatt_data_t));
void register_external_BLEWeightscaleImpl_send_ATT_ATTReadResponse_listener(void (*_listener)(struct BLEWeightscaleImpl_Instance *, uint16_t, ble_gatt_data_t));
void register_BLEWeightscaleImpl_send_ATT_ATTReadError_listener(void (*_listener)(struct BLEWeightscaleImpl_Instance *, uint16_t, uint16_t, uint8_t));
void register_external_BLEWeightscaleImpl_send_ATT_ATTReadError_listener(void (*_listener)(struct BLEWeightscaleImpl_Instance *, uint16_t, uint16_t, uint8_t));
void register_BLEWeightscaleImpl_send_ATT_ATTReadByGroupTypeRequest_listener(void (*_listener)(struct BLEWeightscaleImpl_Instance *, uint16_t, uint16_t, uint16_t, ble_uuid_t));
void register_external_BLEWeightscaleImpl_send_ATT_ATTReadByGroupTypeRequest_listener(void (*_listener)(struct BLEWeightscaleImpl_Instance *, uint16_t, uint16_t, uint16_t, ble_uuid_t));
void register_BLEWeightscaleImpl_send_ATT_ATTReadByGroupTypeResponse_listener(void (*_listener)(struct BLEWeightscaleImpl_Instance *, uint16_t, uint8_t, ble_gatt_data_t));
void register_external_BLEWeightscaleImpl_send_ATT_ATTReadByGroupTypeResponse_listener(void (*_listener)(struct BLEWeightscaleImpl_Instance *, uint16_t, uint8_t, ble_gatt_data_t));
void register_BLEWeightscaleImpl_send_ATT_ATTReadByGroupTypeError_listener(void (*_listener)(struct BLEWeightscaleImpl_Instance *, uint16_t, uint16_t, uint8_t));
void register_external_BLEWeightscaleImpl_send_ATT_ATTReadByGroupTypeError_listener(void (*_listener)(struct BLEWeightscaleImpl_Instance *, uint16_t, uint16_t, uint8_t));
void register_BLEWeightscaleImpl_send_ATT_ATTWriteRequest_listener(void (*_listener)(struct BLEWeightscaleImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t));
void register_external_BLEWeightscaleImpl_send_ATT_ATTWriteRequest_listener(void (*_listener)(struct BLEWeightscaleImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t));
void register_BLEWeightscaleImpl_send_ATT_ATTWriteResponse_listener(void (*_listener)(struct BLEWeightscaleImpl_Instance *, uint16_t));
void register_external_BLEWeightscaleImpl_send_ATT_ATTWriteResponse_listener(void (*_listener)(struct BLEWeightscaleImpl_Instance *, uint16_t));
void register_BLEWeightscaleImpl_send_ATT_ATTWriteError_listener(void (*_listener)(struct BLEWeightscaleImpl_Instance *, uint16_t, uint16_t, uint8_t));
void register_external_BLEWeightscaleImpl_send_ATT_ATTWriteError_listener(void (*_listener)(struct BLEWeightscaleImpl_Instance *, uint16_t, uint16_t, uint8_t));
void register_BLEWeightscaleImpl_send_ATT_ATTWriteCommand_listener(void (*_listener)(struct BLEWeightscaleImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t));
void register_external_BLEWeightscaleImpl_send_ATT_ATTWriteCommand_listener(void (*_listener)(struct BLEWeightscaleImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t));
void register_BLEWeightscaleImpl_send_ATT_ATTHandleValueNotification_listener(void (*_listener)(struct BLEWeightscaleImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t));
void register_external_BLEWeightscaleImpl_send_ATT_ATTHandleValueNotification_listener(void (*_listener)(struct BLEWeightscaleImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t));
void register_BLEWeightscaleImpl_send_ATT_ATTHandleValueIndication_listener(void (*_listener)(struct BLEWeightscaleImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t));
void register_external_BLEWeightscaleImpl_send_ATT_ATTHandleValueIndication_listener(void (*_listener)(struct BLEWeightscaleImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t));
void register_BLEWeightscaleImpl_send_ATT_ATTHandleValueConfirmation_listener(void (*_listener)(struct BLEWeightscaleImpl_Instance *, uint16_t));
void register_external_BLEWeightscaleImpl_send_ATT_ATTHandleValueConfirmation_listener(void (*_listener)(struct BLEWeightscaleImpl_Instance *, uint16_t));

// Definition of the states:
#define BLEWEIGHTSCALEIMPL_STATES_STATE 0
#define BLEWEIGHTSCALEIMPL_STATES_WAITING_STATE 1
#define BLEWEIGHTSCALEIMPL_STATES_READBATTERY_STATE 2
#define BLEWEIGHTSCALEIMPL_STATES_TIMESYNC_STATE 3
#define BLEWEIGHTSCALEIMPL_STATES_GETVALUES_STATE 4



#ifdef __cplusplus
}
#endif

#endif //BLEWeightscaleImpl_H_
