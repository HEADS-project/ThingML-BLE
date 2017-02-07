/*****************************************************
 *      THIS IS A GENERATED FILE. DO NOT EDIT.
 *           Header for Thing BLEBloodpressureImpl
 *  Generated from ThingML (http://www.thingml.org)
 *****************************************************/

#ifndef BLEBloodpressureImpl_H_
#define BLEBloodpressureImpl_H_

#ifdef __cplusplus
extern "C" {
#endif

#include "thingml_typedefs.h"
#include "runtime.h"

/*****************************************************************************
 * Headers for type : BLEBloodpressureImpl
 *****************************************************************************/

#include "runtime.h"

// BEGIN: Code from the c_header annotation BLEBloodpressureImpl
#include <math.h>
// END: Code from the c_header annotation BLEBloodpressureImpl


// BEGIN: Code from the c_header annotation for type BTAddress
#include <bluetooth/bluetooth.h>
// END: Code from the c_header annotation for type BTAddress


// BEGIN: Code from the c_header annotation for type GATTData
#ifndef BLE_GATT_DATA_T_H
#define BLE_GATT_DATA_T_H
typedef struct { uint8_t length; uint8_t bytes[23]; } ble_gatt_data_t;
#endif
// END: Code from the c_header annotation for type GATTData


// BEGIN: Code from the c_header annotation for type UUID
#ifndef BLE_UUID_T_H
#define BLE_UUID_T_H
typedef struct { uint8_t bytes[16]; } ble_uuid_t;
#endif
// END: Code from the c_header annotation for type UUID

// Definition of the sessions stuct:

// Definition of the instance stuct:
struct BLEBloodpressureImpl_Instance {
bool active;
bool alive;
// Variables for the ID of the ports of the instance
uint16_t id_Bloodpressure;
uint16_t id_Connecter;
uint16_t id_ATT;
struct instance_fifo fifo;

// Instances of different sessions

// Variables for the current instance state
int initState;
int BLEBloodpressureImpl_States_State;
// Variables for the properties of the instance
uint16_t BLEBloodpressureImpl_ConnectedHandle_var;
uint16_t BLEBloodpressureImpl_BatteryValueHandle_var;
uint16_t BLEBloodpressureImpl_BloodPressureValueHandle_var;
uint16_t BLEBloodpressureImpl_BloodPressureConfigurationHandle_var;

};
// Message enqueue
void enqueue_BLEBloodpressureImpl_Connecter_Connected(struct BLEBloodpressureImpl_Instance * inst, uint16_t Handle, uint8_t AddressType, bdaddr_t Address);
void enqueue_BLEBloodpressureImpl_Connecter_Stopped(struct BLEBloodpressureImpl_Instance * inst);
void enqueue_BLEBloodpressureImpl_Connecter_Failure(struct BLEBloodpressureImpl_Instance * inst);
void enqueue_BLEBloodpressureImpl_Connecter_Encrypted(struct BLEBloodpressureImpl_Instance * inst);
void enqueue_BLEBloodpressureImpl_ATT_ATTReadResponse(struct BLEBloodpressureImpl_Instance * inst, uint16_t ConnectionHandle, ble_gatt_data_t AttributeValue);
void enqueue_BLEBloodpressureImpl_ATT_ATTReadError(struct BLEBloodpressureImpl_Instance * inst, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error);
void enqueue_BLEBloodpressureImpl_ATT_ATTWriteError(struct BLEBloodpressureImpl_Instance * inst, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error);
void enqueue_BLEBloodpressureImpl_ATT_ATTHandleValueIndication(struct BLEBloodpressureImpl_Instance * inst, uint16_t ConnectionHandle, uint16_t AttributeHandle, ble_gatt_data_t AttributeValue);

// Fork Sessions

// ProcessMessageQueue
int BLEBloodpressureImpl_processMessageQueue(struct BLEBloodpressureImpl_Instance * _instance);

// Run
void BLEBloodpressureImpl_run(struct BLEBloodpressureImpl_Instance * _instance);

// Declaration of callbacks for incoming messages:
void register_BLEBloodpressureImpl_send_Bloodpressure_BatteryPercentage_listener(void (*_listener)(struct BLEBloodpressureImpl_Instance *, uint8_t));
void register_external_BLEBloodpressureImpl_send_Bloodpressure_BatteryPercentage_listener(void (*_listener)(struct BLEBloodpressureImpl_Instance *, uint8_t));
void register_BLEBloodpressureImpl_send_Bloodpressure_BloodPressureMeasurement_listener(void (*_listener)(struct BLEBloodpressureImpl_Instance *, float, float, float, uint8_t, uint16_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, float, uint8_t));
void register_external_BLEBloodpressureImpl_send_Bloodpressure_BloodPressureMeasurement_listener(void (*_listener)(struct BLEBloodpressureImpl_Instance *, float, float, float, uint8_t, uint16_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, float, uint8_t));
void register_BLEBloodpressureImpl_send_Connecter_Connect_listener(void (*_listener)(struct BLEBloodpressureImpl_Instance *));
void register_external_BLEBloodpressureImpl_send_Connecter_Connect_listener(void (*_listener)(struct BLEBloodpressureImpl_Instance *));
void register_BLEBloodpressureImpl_send_Connecter_Stop_listener(void (*_listener)(struct BLEBloodpressureImpl_Instance *));
void register_external_BLEBloodpressureImpl_send_Connecter_Stop_listener(void (*_listener)(struct BLEBloodpressureImpl_Instance *));
void register_BLEBloodpressureImpl_send_Connecter_Encrypt_listener(void (*_listener)(struct BLEBloodpressureImpl_Instance *));
void register_external_BLEBloodpressureImpl_send_Connecter_Encrypt_listener(void (*_listener)(struct BLEBloodpressureImpl_Instance *));
void register_BLEBloodpressureImpl_send_ATT_ATTFindInformationRequest_listener(void (*_listener)(struct BLEBloodpressureImpl_Instance *, uint16_t, uint16_t, uint16_t));
void register_external_BLEBloodpressureImpl_send_ATT_ATTFindInformationRequest_listener(void (*_listener)(struct BLEBloodpressureImpl_Instance *, uint16_t, uint16_t, uint16_t));
void register_BLEBloodpressureImpl_send_ATT_ATTFindInformationResponse_listener(void (*_listener)(struct BLEBloodpressureImpl_Instance *, uint16_t, uint8_t, ble_gatt_data_t));
void register_external_BLEBloodpressureImpl_send_ATT_ATTFindInformationResponse_listener(void (*_listener)(struct BLEBloodpressureImpl_Instance *, uint16_t, uint8_t, ble_gatt_data_t));
void register_BLEBloodpressureImpl_send_ATT_ATTFindInformationError_listener(void (*_listener)(struct BLEBloodpressureImpl_Instance *, uint16_t, uint16_t, uint8_t));
void register_external_BLEBloodpressureImpl_send_ATT_ATTFindInformationError_listener(void (*_listener)(struct BLEBloodpressureImpl_Instance *, uint16_t, uint16_t, uint8_t));
void register_BLEBloodpressureImpl_send_ATT_ATTReadByTypeRequest_listener(void (*_listener)(struct BLEBloodpressureImpl_Instance *, uint16_t, uint16_t, uint16_t, ble_uuid_t));
void register_external_BLEBloodpressureImpl_send_ATT_ATTReadByTypeRequest_listener(void (*_listener)(struct BLEBloodpressureImpl_Instance *, uint16_t, uint16_t, uint16_t, ble_uuid_t));
void register_BLEBloodpressureImpl_send_ATT_ATTReadByTypeResponse_listener(void (*_listener)(struct BLEBloodpressureImpl_Instance *, uint16_t, uint8_t, ble_gatt_data_t));
void register_external_BLEBloodpressureImpl_send_ATT_ATTReadByTypeResponse_listener(void (*_listener)(struct BLEBloodpressureImpl_Instance *, uint16_t, uint8_t, ble_gatt_data_t));
void register_BLEBloodpressureImpl_send_ATT_ATTReadByTypeError_listener(void (*_listener)(struct BLEBloodpressureImpl_Instance *, uint16_t, uint16_t, uint8_t));
void register_external_BLEBloodpressureImpl_send_ATT_ATTReadByTypeError_listener(void (*_listener)(struct BLEBloodpressureImpl_Instance *, uint16_t, uint16_t, uint8_t));
void register_BLEBloodpressureImpl_send_ATT_ATTReadRequest_listener(void (*_listener)(struct BLEBloodpressureImpl_Instance *, uint16_t, uint16_t));
void register_external_BLEBloodpressureImpl_send_ATT_ATTReadRequest_listener(void (*_listener)(struct BLEBloodpressureImpl_Instance *, uint16_t, uint16_t));
void register_BLEBloodpressureImpl_send_ATT_ATTReadResponse_listener(void (*_listener)(struct BLEBloodpressureImpl_Instance *, uint16_t, ble_gatt_data_t));
void register_external_BLEBloodpressureImpl_send_ATT_ATTReadResponse_listener(void (*_listener)(struct BLEBloodpressureImpl_Instance *, uint16_t, ble_gatt_data_t));
void register_BLEBloodpressureImpl_send_ATT_ATTReadError_listener(void (*_listener)(struct BLEBloodpressureImpl_Instance *, uint16_t, uint16_t, uint8_t));
void register_external_BLEBloodpressureImpl_send_ATT_ATTReadError_listener(void (*_listener)(struct BLEBloodpressureImpl_Instance *, uint16_t, uint16_t, uint8_t));
void register_BLEBloodpressureImpl_send_ATT_ATTReadByGroupTypeRequest_listener(void (*_listener)(struct BLEBloodpressureImpl_Instance *, uint16_t, uint16_t, uint16_t, ble_uuid_t));
void register_external_BLEBloodpressureImpl_send_ATT_ATTReadByGroupTypeRequest_listener(void (*_listener)(struct BLEBloodpressureImpl_Instance *, uint16_t, uint16_t, uint16_t, ble_uuid_t));
void register_BLEBloodpressureImpl_send_ATT_ATTReadByGroupTypeResponse_listener(void (*_listener)(struct BLEBloodpressureImpl_Instance *, uint16_t, uint8_t, ble_gatt_data_t));
void register_external_BLEBloodpressureImpl_send_ATT_ATTReadByGroupTypeResponse_listener(void (*_listener)(struct BLEBloodpressureImpl_Instance *, uint16_t, uint8_t, ble_gatt_data_t));
void register_BLEBloodpressureImpl_send_ATT_ATTReadByGroupTypeError_listener(void (*_listener)(struct BLEBloodpressureImpl_Instance *, uint16_t, uint16_t, uint8_t));
void register_external_BLEBloodpressureImpl_send_ATT_ATTReadByGroupTypeError_listener(void (*_listener)(struct BLEBloodpressureImpl_Instance *, uint16_t, uint16_t, uint8_t));
void register_BLEBloodpressureImpl_send_ATT_ATTWriteRequest_listener(void (*_listener)(struct BLEBloodpressureImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t));
void register_external_BLEBloodpressureImpl_send_ATT_ATTWriteRequest_listener(void (*_listener)(struct BLEBloodpressureImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t));
void register_BLEBloodpressureImpl_send_ATT_ATTWriteResponse_listener(void (*_listener)(struct BLEBloodpressureImpl_Instance *, uint16_t));
void register_external_BLEBloodpressureImpl_send_ATT_ATTWriteResponse_listener(void (*_listener)(struct BLEBloodpressureImpl_Instance *, uint16_t));
void register_BLEBloodpressureImpl_send_ATT_ATTWriteError_listener(void (*_listener)(struct BLEBloodpressureImpl_Instance *, uint16_t, uint16_t, uint8_t));
void register_external_BLEBloodpressureImpl_send_ATT_ATTWriteError_listener(void (*_listener)(struct BLEBloodpressureImpl_Instance *, uint16_t, uint16_t, uint8_t));
void register_BLEBloodpressureImpl_send_ATT_ATTWriteCommand_listener(void (*_listener)(struct BLEBloodpressureImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t));
void register_external_BLEBloodpressureImpl_send_ATT_ATTWriteCommand_listener(void (*_listener)(struct BLEBloodpressureImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t));
void register_BLEBloodpressureImpl_send_ATT_ATTHandleValueNotification_listener(void (*_listener)(struct BLEBloodpressureImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t));
void register_external_BLEBloodpressureImpl_send_ATT_ATTHandleValueNotification_listener(void (*_listener)(struct BLEBloodpressureImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t));
void register_BLEBloodpressureImpl_send_ATT_ATTHandleValueIndication_listener(void (*_listener)(struct BLEBloodpressureImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t));
void register_external_BLEBloodpressureImpl_send_ATT_ATTHandleValueIndication_listener(void (*_listener)(struct BLEBloodpressureImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t));
void register_BLEBloodpressureImpl_send_ATT_ATTHandleValueConfirmation_listener(void (*_listener)(struct BLEBloodpressureImpl_Instance *, uint16_t));
void register_external_BLEBloodpressureImpl_send_ATT_ATTHandleValueConfirmation_listener(void (*_listener)(struct BLEBloodpressureImpl_Instance *, uint16_t));

// Definition of the states:
#define BLEBLOODPRESSUREIMPL_STATES_STATE 0
#define BLEBLOODPRESSUREIMPL_STATES_WAITING_STATE 1
#define BLEBLOODPRESSUREIMPL_STATES_CONNECTED_STATE 2



#ifdef __cplusplus
}
#endif

#endif //BLEBloodpressureImpl_H_
