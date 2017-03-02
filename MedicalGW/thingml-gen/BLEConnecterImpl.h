/*****************************************************
 *      THIS IS A GENERATED FILE. DO NOT EDIT.
 *           Header for Thing BLEConnecterImpl
 *  Generated from ThingML (http://www.thingml.org)
 *****************************************************/

#ifndef BLEConnecterImpl_H_
#define BLEConnecterImpl_H_

#ifdef __cplusplus
extern "C" {
#endif

#include "thingml_typedefs.h"
#include "runtime.h"

/*****************************************************************************
 * Headers for type : BLEConnecterImpl
 *****************************************************************************/

#include "runtime.h"

// BEGIN: Code from the c_header annotation for type UUID
#ifndef BLE_UUID_T_H
#define BLE_UUID_T_H
typedef struct { uint8_t bytes[16]; } ble_uuid_t;
#endif
// END: Code from the c_header annotation for type UUID


// BEGIN: Code from the c_header annotation for type SMPPublicKey
#ifndef SMP_PUBLIC_KEY_T_H
#define SMP_PUBLIC_KEY_T_H
typedef struct { uint8_t bytes[32]; } smp_public_key_t;
#endif
// END: Code from the c_header annotation for type SMPPublicKey


// BEGIN: Code from the c_header annotation for type BLERandomPart
#ifndef BLE_RANDOM_PART_T_H
#define BLE_RANDOM_PART_T_H
typedef struct { uint8_t bytes[8]; } ble_random_part_t;
#endif
// END: Code from the c_header annotation for type BLERandomPart


// BEGIN: Code from the c_header annotation for type BLERandomNumber
#ifndef BLE_RANDOM_NUMBER_T_H
#define BLE_RANDOM_NUMBER_T_H
typedef struct { uint8_t bytes[16]; } ble_random_number_t;
#endif
// END: Code from the c_header annotation for type BLERandomNumber


// BEGIN: Code from the c_header annotation for type BLEAdvertiseData
#ifndef BLE_ADV_DATA_T_H
#define BLE_ADV_DATA_T_H
typedef struct { uint8_t bytes[31]; } ble_adv_data_t;
#endif
// END: Code from the c_header annotation for type BLEAdvertiseData


// BEGIN: Code from the c_header annotation for type HCIEventMask
#include <bluetooth/bluetooth.h>
#include <bluetooth/hci.h>
// END: Code from the c_header annotation for type HCIEventMask


// BEGIN: Code from the c_header annotation for type GATTData
#ifndef BLE_GATT_DATA_T_H
#define BLE_GATT_DATA_T_H
typedef struct { uint8_t length; uint8_t bytes[23]; } ble_gatt_data_t;
#endif
// END: Code from the c_header annotation for type GATTData


// BEGIN: Code from the c_header annotation for type BTAddress
#include <bluetooth/bluetooth.h>
// END: Code from the c_header annotation for type BTAddress


// BEGIN: Code from the c_header annotation for type BTLocalName
#include <bluetooth/bluetooth.h>
#include <bluetooth/hci.h>
// END: Code from the c_header annotation for type BTLocalName

// Definition of the sessions stuct:

// Definition of the instance stuct:
struct BLEConnecterImpl_Instance {
bool active;
bool alive;
// Variables for the ID of the ports of the instance
uint16_t id_Connecter;
uint16_t id_Socket;
uint16_t id_HCICommands;
uint16_t id_HCIEvents;
uint16_t id_SMP;
uint16_t id_ATT;
struct instance_fifo fifo;

// Instances of different sessions

// Variables for the current instance state
int initState;
int BLEConnecterImpl_States_State;
// Variables for the properties of the instance
uint8_t BLEConnecterImpl_ConnectAddressType_var;
ble_random_number_t BLEConnecterImpl_LongTermKey_var;
uint8_t BLEConnecterImpl_ConnectedAddressType_var;
uint16_t BLEConnecterImpl_EncryptedDiversifier_var;
bdaddr_t BLEConnecterImpl_ConnectedAddress_var;
ble_random_part_t BLEConnecterImpl_RandomNumber_var;
int16_t BLEConnecterImpl_ConnectedHandle_var;
const char * BLEConnecterImpl_ConnectAddress_var;
bdaddr_t BLEConnecterImpl_ConnectAddressBT_var;

};
// Message enqueue
void enqueue_BLEConnecterImpl_Connecter_Connect(struct BLEConnecterImpl_Instance * inst);
void enqueue_BLEConnecterImpl_Connecter_ConnectTo(struct BLEConnecterImpl_Instance * inst, uint8_t AddressType, bdaddr_t Address, ble_random_number_t LongTermKey, uint16_t EncryptedDiversifier, ble_random_part_t RandomNumber);
void enqueue_BLEConnecterImpl_Connecter_ConnectToU(struct BLEConnecterImpl_Instance * inst, uint8_t AddressType, bdaddr_t Address);
void enqueue_BLEConnecterImpl_Connecter_Stop(struct BLEConnecterImpl_Instance * inst);
void enqueue_BLEConnecterImpl_Connecter_Encrypt(struct BLEConnecterImpl_Instance * inst);
void enqueue_BLEConnecterImpl_HCIEvents_DisconnectStatus(struct BLEConnecterImpl_Instance * inst, uint8_t NumberAllowedCommandPackets, uint8_t Status);
void enqueue_BLEConnecterImpl_HCIEvents_DisconnectionCompleted(struct BLEConnecterImpl_Instance * inst, uint8_t Status, uint16_t ConnectionHandle, uint8_t Reason);
void enqueue_BLEConnecterImpl_HCIEvents_LECreateConnectionStatus(struct BLEConnecterImpl_Instance * inst, uint8_t NumberAllowedCommandPackets, uint8_t Status);
void enqueue_BLEConnecterImpl_HCIEvents_LECreateConnectionCancelCompleted(struct BLEConnecterImpl_Instance * inst, uint8_t NumberAllowedCommandPackets, uint8_t Status);
void enqueue_BLEConnecterImpl_HCIEvents_LEConnectionComplete(struct BLEConnecterImpl_Instance * inst, uint8_t Status, uint16_t ConnectionHandle, uint8_t Role, uint8_t PeerAddressType, bdaddr_t PeerAddress, uint16_t ConnInterval, uint16_t ConnLatency, uint16_t SupervisionTimeout, uint8_t MasterClockAccuracy);
void enqueue_BLEConnecterImpl_HCIEvents_LEEnhancedConnectionComplete(struct BLEConnecterImpl_Instance * inst, uint8_t Status, uint16_t ConnectionHandle, uint8_t Role, uint8_t PeerAddressType, bdaddr_t PeerAddress, bdaddr_t LocalResolvablePrivateAddress, bdaddr_t PeerResolvablePrivateAddress, uint16_t ConnInterval, uint16_t ConnLatency, uint16_t SupervisionTimeout, uint8_t MasterClockAccuracy);
void enqueue_BLEConnecterImpl_HCIEvents_EncryptionChanged(struct BLEConnecterImpl_Instance * inst, uint8_t Status, uint16_t ConnectionHandle, uint8_t Enabled);
void enqueue_BLEConnecterImpl_HCIEvents_LEStartEncryptionStatus(struct BLEConnecterImpl_Instance * inst, uint8_t NumberAllowedCommandPackets, uint8_t Status);

// Fork Sessions

// ProcessMessageQueue
int BLEConnecterImpl_processMessageQueue(struct BLEConnecterImpl_Instance * _instance);

// Run
void BLEConnecterImpl_run(struct BLEConnecterImpl_Instance * _instance);

// Declaration of callbacks for incoming messages:
void register_BLEConnecterImpl_send_Connecter_Connected_listener(void (*_listener)(struct BLEConnecterImpl_Instance *, uint16_t, uint8_t, bdaddr_t));
void register_external_BLEConnecterImpl_send_Connecter_Connected_listener(void (*_listener)(struct BLEConnecterImpl_Instance *, uint16_t, uint8_t, bdaddr_t));
void register_BLEConnecterImpl_send_Connecter_Stopped_listener(void (*_listener)(struct BLEConnecterImpl_Instance *));
void register_external_BLEConnecterImpl_send_Connecter_Stopped_listener(void (*_listener)(struct BLEConnecterImpl_Instance *));
void register_BLEConnecterImpl_send_Connecter_Failure_listener(void (*_listener)(struct BLEConnecterImpl_Instance *));
void register_external_BLEConnecterImpl_send_Connecter_Failure_listener(void (*_listener)(struct BLEConnecterImpl_Instance *));
void register_BLEConnecterImpl_send_Connecter_Encrypted_listener(void (*_listener)(struct BLEConnecterImpl_Instance *));
void register_external_BLEConnecterImpl_send_Connecter_Encrypted_listener(void (*_listener)(struct BLEConnecterImpl_Instance *));
void register_BLEConnecterImpl_send_Socket_Open_listener(void (*_listener)(struct BLEConnecterImpl_Instance *));
void register_external_BLEConnecterImpl_send_Socket_Open_listener(void (*_listener)(struct BLEConnecterImpl_Instance *));
void register_BLEConnecterImpl_send_Socket_Close_listener(void (*_listener)(struct BLEConnecterImpl_Instance *));
void register_external_BLEConnecterImpl_send_Socket_Close_listener(void (*_listener)(struct BLEConnecterImpl_Instance *));
void register_BLEConnecterImpl_send_HCICommands_Reset_listener(void (*_listener)(struct BLEConnecterImpl_Instance *));
void register_external_BLEConnecterImpl_send_HCICommands_Reset_listener(void (*_listener)(struct BLEConnecterImpl_Instance *));
void register_BLEConnecterImpl_send_HCICommands_SetEventMask_listener(void (*_listener)(struct BLEConnecterImpl_Instance *, set_event_mask_cp));
void register_external_BLEConnecterImpl_send_HCICommands_SetEventMask_listener(void (*_listener)(struct BLEConnecterImpl_Instance *, set_event_mask_cp));
void register_BLEConnecterImpl_send_HCICommands_SetEventMaskAll_listener(void (*_listener)(struct BLEConnecterImpl_Instance *));
void register_external_BLEConnecterImpl_send_HCICommands_SetEventMaskAll_listener(void (*_listener)(struct BLEConnecterImpl_Instance *));
void register_BLEConnecterImpl_send_HCICommands_SetLocalName_listener(void (*_listener)(struct BLEConnecterImpl_Instance *, change_local_name_cp));
void register_external_BLEConnecterImpl_send_HCICommands_SetLocalName_listener(void (*_listener)(struct BLEConnecterImpl_Instance *, change_local_name_cp));
void register_BLEConnecterImpl_send_HCICommands_Disconnect_listener(void (*_listener)(struct BLEConnecterImpl_Instance *, uint16_t, uint8_t));
void register_external_BLEConnecterImpl_send_HCICommands_Disconnect_listener(void (*_listener)(struct BLEConnecterImpl_Instance *, uint16_t, uint8_t));
void register_BLEConnecterImpl_send_HCICommands_SetLEEventMask_listener(void (*_listener)(struct BLEConnecterImpl_Instance *, set_event_mask_cp));
void register_external_BLEConnecterImpl_send_HCICommands_SetLEEventMask_listener(void (*_listener)(struct BLEConnecterImpl_Instance *, set_event_mask_cp));
void register_BLEConnecterImpl_send_HCICommands_SetLEEventMaskAll_listener(void (*_listener)(struct BLEConnecterImpl_Instance *));
void register_external_BLEConnecterImpl_send_HCICommands_SetLEEventMaskAll_listener(void (*_listener)(struct BLEConnecterImpl_Instance *));
void register_BLEConnecterImpl_send_HCICommands_SetLEAdvertisementParameters_listener(void (*_listener)(struct BLEConnecterImpl_Instance *, uint16_t, uint16_t, uint8_t, uint8_t, uint8_t, bdaddr_t, uint8_t, uint8_t));
void register_external_BLEConnecterImpl_send_HCICommands_SetLEAdvertisementParameters_listener(void (*_listener)(struct BLEConnecterImpl_Instance *, uint16_t, uint16_t, uint8_t, uint8_t, uint8_t, bdaddr_t, uint8_t, uint8_t));
void register_BLEConnecterImpl_send_HCICommands_SetLEAdvertiseEnable_listener(void (*_listener)(struct BLEConnecterImpl_Instance *, uint8_t));
void register_external_BLEConnecterImpl_send_HCICommands_SetLEAdvertiseEnable_listener(void (*_listener)(struct BLEConnecterImpl_Instance *, uint8_t));
void register_BLEConnecterImpl_send_HCICommands_SetLEAdvertisingData_listener(void (*_listener)(struct BLEConnecterImpl_Instance *, uint8_t, ble_adv_data_t));
void register_external_BLEConnecterImpl_send_HCICommands_SetLEAdvertisingData_listener(void (*_listener)(struct BLEConnecterImpl_Instance *, uint8_t, ble_adv_data_t));
void register_BLEConnecterImpl_send_HCICommands_SetLEScanResponseData_listener(void (*_listener)(struct BLEConnecterImpl_Instance *, uint8_t, ble_adv_data_t));
void register_external_BLEConnecterImpl_send_HCICommands_SetLEScanResponseData_listener(void (*_listener)(struct BLEConnecterImpl_Instance *, uint8_t, ble_adv_data_t));
void register_BLEConnecterImpl_send_HCICommands_SetLEScanParameters_listener(void (*_listener)(struct BLEConnecterImpl_Instance *, uint8_t, uint16_t, uint16_t, uint8_t, uint8_t));
void register_external_BLEConnecterImpl_send_HCICommands_SetLEScanParameters_listener(void (*_listener)(struct BLEConnecterImpl_Instance *, uint8_t, uint16_t, uint16_t, uint8_t, uint8_t));
void register_BLEConnecterImpl_send_HCICommands_SetLEScanEnable_listener(void (*_listener)(struct BLEConnecterImpl_Instance *, uint8_t, uint8_t));
void register_external_BLEConnecterImpl_send_HCICommands_SetLEScanEnable_listener(void (*_listener)(struct BLEConnecterImpl_Instance *, uint8_t, uint8_t));
void register_BLEConnecterImpl_send_HCICommands_LECreateConnection_listener(void (*_listener)(struct BLEConnecterImpl_Instance *, uint16_t, uint16_t, uint8_t, uint8_t, bdaddr_t, uint8_t, uint16_t, uint16_t, uint16_t, uint16_t, uint16_t, uint16_t));
void register_external_BLEConnecterImpl_send_HCICommands_LECreateConnection_listener(void (*_listener)(struct BLEConnecterImpl_Instance *, uint16_t, uint16_t, uint8_t, uint8_t, bdaddr_t, uint8_t, uint16_t, uint16_t, uint16_t, uint16_t, uint16_t, uint16_t));
void register_BLEConnecterImpl_send_HCICommands_LECreateConnectionCancel_listener(void (*_listener)(struct BLEConnecterImpl_Instance *));
void register_external_BLEConnecterImpl_send_HCICommands_LECreateConnectionCancel_listener(void (*_listener)(struct BLEConnecterImpl_Instance *));
void register_BLEConnecterImpl_send_HCICommands_LERand_listener(void (*_listener)(struct BLEConnecterImpl_Instance *));
void register_external_BLEConnecterImpl_send_HCICommands_LERand_listener(void (*_listener)(struct BLEConnecterImpl_Instance *));
void register_BLEConnecterImpl_send_HCICommands_LEEncrypt_listener(void (*_listener)(struct BLEConnecterImpl_Instance *, ble_random_number_t, ble_random_number_t));
void register_external_BLEConnecterImpl_send_HCICommands_LEEncrypt_listener(void (*_listener)(struct BLEConnecterImpl_Instance *, ble_random_number_t, ble_random_number_t));
void register_BLEConnecterImpl_send_HCICommands_LEStartEncryption_listener(void (*_listener)(struct BLEConnecterImpl_Instance *, uint16_t, ble_random_part_t, uint16_t, ble_random_number_t));
void register_external_BLEConnecterImpl_send_HCICommands_LEStartEncryption_listener(void (*_listener)(struct BLEConnecterImpl_Instance *, uint16_t, ble_random_part_t, uint16_t, ble_random_number_t));
void register_BLEConnecterImpl_send_SMP_SMPPairingRequest_listener(void (*_listener)(struct BLEConnecterImpl_Instance *, uint16_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t));
void register_external_BLEConnecterImpl_send_SMP_SMPPairingRequest_listener(void (*_listener)(struct BLEConnecterImpl_Instance *, uint16_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t));
void register_BLEConnecterImpl_send_SMP_SMPPairingResponse_listener(void (*_listener)(struct BLEConnecterImpl_Instance *, uint16_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t));
void register_external_BLEConnecterImpl_send_SMP_SMPPairingResponse_listener(void (*_listener)(struct BLEConnecterImpl_Instance *, uint16_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t));
void register_BLEConnecterImpl_send_SMP_SMPPairingConfirm_listener(void (*_listener)(struct BLEConnecterImpl_Instance *, uint16_t, ble_random_number_t));
void register_external_BLEConnecterImpl_send_SMP_SMPPairingConfirm_listener(void (*_listener)(struct BLEConnecterImpl_Instance *, uint16_t, ble_random_number_t));
void register_BLEConnecterImpl_send_SMP_SMPPairingRandom_listener(void (*_listener)(struct BLEConnecterImpl_Instance *, uint16_t, ble_random_number_t));
void register_external_BLEConnecterImpl_send_SMP_SMPPairingRandom_listener(void (*_listener)(struct BLEConnecterImpl_Instance *, uint16_t, ble_random_number_t));
void register_BLEConnecterImpl_send_SMP_SMPPairingFailed_listener(void (*_listener)(struct BLEConnecterImpl_Instance *, uint16_t, uint8_t));
void register_external_BLEConnecterImpl_send_SMP_SMPPairingFailed_listener(void (*_listener)(struct BLEConnecterImpl_Instance *, uint16_t, uint8_t));
void register_BLEConnecterImpl_send_SMP_SMPPairingPublicKey_listener(void (*_listener)(struct BLEConnecterImpl_Instance *, uint16_t, smp_public_key_t, smp_public_key_t));
void register_external_BLEConnecterImpl_send_SMP_SMPPairingPublicKey_listener(void (*_listener)(struct BLEConnecterImpl_Instance *, uint16_t, smp_public_key_t, smp_public_key_t));
void register_BLEConnecterImpl_send_SMP_SMPPairingDHKeyCheck_listener(void (*_listener)(struct BLEConnecterImpl_Instance *, uint16_t, ble_random_number_t));
void register_external_BLEConnecterImpl_send_SMP_SMPPairingDHKeyCheck_listener(void (*_listener)(struct BLEConnecterImpl_Instance *, uint16_t, ble_random_number_t));
void register_BLEConnecterImpl_send_SMP_SMPKeypressNotification_listener(void (*_listener)(struct BLEConnecterImpl_Instance *, uint16_t, uint8_t));
void register_external_BLEConnecterImpl_send_SMP_SMPKeypressNotification_listener(void (*_listener)(struct BLEConnecterImpl_Instance *, uint16_t, uint8_t));
void register_BLEConnecterImpl_send_SMP_SMPEncryptionInformation_listener(void (*_listener)(struct BLEConnecterImpl_Instance *, uint16_t, ble_random_number_t));
void register_external_BLEConnecterImpl_send_SMP_SMPEncryptionInformation_listener(void (*_listener)(struct BLEConnecterImpl_Instance *, uint16_t, ble_random_number_t));
void register_BLEConnecterImpl_send_SMP_SMPMasterIdentification_listener(void (*_listener)(struct BLEConnecterImpl_Instance *, uint16_t, uint16_t, ble_random_part_t));
void register_external_BLEConnecterImpl_send_SMP_SMPMasterIdentification_listener(void (*_listener)(struct BLEConnecterImpl_Instance *, uint16_t, uint16_t, ble_random_part_t));
void register_BLEConnecterImpl_send_SMP_SMPIdentityInformation_listener(void (*_listener)(struct BLEConnecterImpl_Instance *, uint16_t, ble_random_number_t));
void register_external_BLEConnecterImpl_send_SMP_SMPIdentityInformation_listener(void (*_listener)(struct BLEConnecterImpl_Instance *, uint16_t, ble_random_number_t));
void register_BLEConnecterImpl_send_SMP_SMPIdentityAddressInformation_listener(void (*_listener)(struct BLEConnecterImpl_Instance *, uint16_t, uint8_t, bdaddr_t));
void register_external_BLEConnecterImpl_send_SMP_SMPIdentityAddressInformation_listener(void (*_listener)(struct BLEConnecterImpl_Instance *, uint16_t, uint8_t, bdaddr_t));
void register_BLEConnecterImpl_send_SMP_SMPSigningInformation_listener(void (*_listener)(struct BLEConnecterImpl_Instance *, uint16_t, ble_random_number_t));
void register_external_BLEConnecterImpl_send_SMP_SMPSigningInformation_listener(void (*_listener)(struct BLEConnecterImpl_Instance *, uint16_t, ble_random_number_t));
void register_BLEConnecterImpl_send_SMP_SMPSecurityRequest_listener(void (*_listener)(struct BLEConnecterImpl_Instance *, uint16_t, uint8_t, uint8_t, uint8_t, uint8_t));
void register_external_BLEConnecterImpl_send_SMP_SMPSecurityRequest_listener(void (*_listener)(struct BLEConnecterImpl_Instance *, uint16_t, uint8_t, uint8_t, uint8_t, uint8_t));
void register_BLEConnecterImpl_send_ATT_ATTFindInformationRequest_listener(void (*_listener)(struct BLEConnecterImpl_Instance *, uint16_t, uint16_t, uint16_t));
void register_external_BLEConnecterImpl_send_ATT_ATTFindInformationRequest_listener(void (*_listener)(struct BLEConnecterImpl_Instance *, uint16_t, uint16_t, uint16_t));
void register_BLEConnecterImpl_send_ATT_ATTFindInformationResponse_listener(void (*_listener)(struct BLEConnecterImpl_Instance *, uint16_t, uint8_t, ble_gatt_data_t));
void register_external_BLEConnecterImpl_send_ATT_ATTFindInformationResponse_listener(void (*_listener)(struct BLEConnecterImpl_Instance *, uint16_t, uint8_t, ble_gatt_data_t));
void register_BLEConnecterImpl_send_ATT_ATTFindInformationError_listener(void (*_listener)(struct BLEConnecterImpl_Instance *, uint16_t, uint16_t, uint8_t));
void register_external_BLEConnecterImpl_send_ATT_ATTFindInformationError_listener(void (*_listener)(struct BLEConnecterImpl_Instance *, uint16_t, uint16_t, uint8_t));
void register_BLEConnecterImpl_send_ATT_ATTReadByTypeRequest_listener(void (*_listener)(struct BLEConnecterImpl_Instance *, uint16_t, uint16_t, uint16_t, ble_uuid_t));
void register_external_BLEConnecterImpl_send_ATT_ATTReadByTypeRequest_listener(void (*_listener)(struct BLEConnecterImpl_Instance *, uint16_t, uint16_t, uint16_t, ble_uuid_t));
void register_BLEConnecterImpl_send_ATT_ATTReadByTypeResponse_listener(void (*_listener)(struct BLEConnecterImpl_Instance *, uint16_t, uint8_t, ble_gatt_data_t));
void register_external_BLEConnecterImpl_send_ATT_ATTReadByTypeResponse_listener(void (*_listener)(struct BLEConnecterImpl_Instance *, uint16_t, uint8_t, ble_gatt_data_t));
void register_BLEConnecterImpl_send_ATT_ATTReadByTypeError_listener(void (*_listener)(struct BLEConnecterImpl_Instance *, uint16_t, uint16_t, uint8_t));
void register_external_BLEConnecterImpl_send_ATT_ATTReadByTypeError_listener(void (*_listener)(struct BLEConnecterImpl_Instance *, uint16_t, uint16_t, uint8_t));
void register_BLEConnecterImpl_send_ATT_ATTReadRequest_listener(void (*_listener)(struct BLEConnecterImpl_Instance *, uint16_t, uint16_t));
void register_external_BLEConnecterImpl_send_ATT_ATTReadRequest_listener(void (*_listener)(struct BLEConnecterImpl_Instance *, uint16_t, uint16_t));
void register_BLEConnecterImpl_send_ATT_ATTReadResponse_listener(void (*_listener)(struct BLEConnecterImpl_Instance *, uint16_t, ble_gatt_data_t));
void register_external_BLEConnecterImpl_send_ATT_ATTReadResponse_listener(void (*_listener)(struct BLEConnecterImpl_Instance *, uint16_t, ble_gatt_data_t));
void register_BLEConnecterImpl_send_ATT_ATTReadError_listener(void (*_listener)(struct BLEConnecterImpl_Instance *, uint16_t, uint16_t, uint8_t));
void register_external_BLEConnecterImpl_send_ATT_ATTReadError_listener(void (*_listener)(struct BLEConnecterImpl_Instance *, uint16_t, uint16_t, uint8_t));
void register_BLEConnecterImpl_send_ATT_ATTReadByGroupTypeRequest_listener(void (*_listener)(struct BLEConnecterImpl_Instance *, uint16_t, uint16_t, uint16_t, ble_uuid_t));
void register_external_BLEConnecterImpl_send_ATT_ATTReadByGroupTypeRequest_listener(void (*_listener)(struct BLEConnecterImpl_Instance *, uint16_t, uint16_t, uint16_t, ble_uuid_t));
void register_BLEConnecterImpl_send_ATT_ATTReadByGroupTypeResponse_listener(void (*_listener)(struct BLEConnecterImpl_Instance *, uint16_t, uint8_t, ble_gatt_data_t));
void register_external_BLEConnecterImpl_send_ATT_ATTReadByGroupTypeResponse_listener(void (*_listener)(struct BLEConnecterImpl_Instance *, uint16_t, uint8_t, ble_gatt_data_t));
void register_BLEConnecterImpl_send_ATT_ATTReadByGroupTypeError_listener(void (*_listener)(struct BLEConnecterImpl_Instance *, uint16_t, uint16_t, uint8_t));
void register_external_BLEConnecterImpl_send_ATT_ATTReadByGroupTypeError_listener(void (*_listener)(struct BLEConnecterImpl_Instance *, uint16_t, uint16_t, uint8_t));
void register_BLEConnecterImpl_send_ATT_ATTWriteRequest_listener(void (*_listener)(struct BLEConnecterImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t));
void register_external_BLEConnecterImpl_send_ATT_ATTWriteRequest_listener(void (*_listener)(struct BLEConnecterImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t));
void register_BLEConnecterImpl_send_ATT_ATTWriteResponse_listener(void (*_listener)(struct BLEConnecterImpl_Instance *, uint16_t));
void register_external_BLEConnecterImpl_send_ATT_ATTWriteResponse_listener(void (*_listener)(struct BLEConnecterImpl_Instance *, uint16_t));
void register_BLEConnecterImpl_send_ATT_ATTWriteError_listener(void (*_listener)(struct BLEConnecterImpl_Instance *, uint16_t, uint16_t, uint8_t));
void register_external_BLEConnecterImpl_send_ATT_ATTWriteError_listener(void (*_listener)(struct BLEConnecterImpl_Instance *, uint16_t, uint16_t, uint8_t));
void register_BLEConnecterImpl_send_ATT_ATTWriteCommand_listener(void (*_listener)(struct BLEConnecterImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t));
void register_external_BLEConnecterImpl_send_ATT_ATTWriteCommand_listener(void (*_listener)(struct BLEConnecterImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t));
void register_BLEConnecterImpl_send_ATT_ATTHandleValueNotification_listener(void (*_listener)(struct BLEConnecterImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t));
void register_external_BLEConnecterImpl_send_ATT_ATTHandleValueNotification_listener(void (*_listener)(struct BLEConnecterImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t));
void register_BLEConnecterImpl_send_ATT_ATTHandleValueIndication_listener(void (*_listener)(struct BLEConnecterImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t));
void register_external_BLEConnecterImpl_send_ATT_ATTHandleValueIndication_listener(void (*_listener)(struct BLEConnecterImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t));
void register_BLEConnecterImpl_send_ATT_ATTHandleValueConfirmation_listener(void (*_listener)(struct BLEConnecterImpl_Instance *, uint16_t));
void register_external_BLEConnecterImpl_send_ATT_ATTHandleValueConfirmation_listener(void (*_listener)(struct BLEConnecterImpl_Instance *, uint16_t));

// Definition of the states:
#define BLECONNECTERIMPL_STATES_STATE 0
#define BLECONNECTERIMPL_STATES_NOTCONNECTED_STATE 1
#define BLECONNECTERIMPL_STATES_CONNECTING_STATE 2
#define BLECONNECTERIMPL_STATES_CANCELCONNECTION_STATE 3
#define BLECONNECTERIMPL_STATES_CONNECTED_STATE 4
#define BLECONNECTERIMPL_STATES_ENCRYPTED_STATE 5
#define BLECONNECTERIMPL_STATES_DISCONNECTING_STATE 6
#define BLECONNECTERIMPL_STATES_FAILURE_STATE 7



#ifdef __cplusplus
}
#endif

#endif //BLEConnecterImpl_H_
