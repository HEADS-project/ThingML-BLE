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


// BEGIN: Code from the c_header annotation for type HCIEventMask
#include <bluetooth/bluetooth.h>
#include <bluetooth/hci.h>
// END: Code from the c_header annotation for type HCIEventMask


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


// BEGIN: Code from the c_header annotation for type BTLocalName
#include <bluetooth/bluetooth.h>
#include <bluetooth/hci.h>
// END: Code from the c_header annotation for type BTLocalName


// BEGIN: Code from the c_header annotation for type UUID
#ifndef BLE_UUID_T_H
#define BLE_UUID_T_H
typedef struct { uint8_t bytes[16]; } ble_uuid_t;
#endif
// END: Code from the c_header annotation for type UUID


// BEGIN: Code from the c_header annotation for type BTAddress
#include <bluetooth/bluetooth.h>
// END: Code from the c_header annotation for type BTAddress


// BEGIN: Code from the c_header annotation for type SMPPublicKey
#ifndef SMP_PUBLIC_KEY_T_H
#define SMP_PUBLIC_KEY_T_H
typedef struct { uint8_t bytes[32]; } smp_public_key_t;
#endif
// END: Code from the c_header annotation for type SMPPublicKey


// BEGIN: Code from the c_header annotation for type GATTData
#ifndef BLE_GATT_DATA_T_H
#define BLE_GATT_DATA_T_H
typedef struct { uint8_t length; uint8_t bytes[23]; } ble_gatt_data_t;
#endif
// END: Code from the c_header annotation for type GATTData


// BEGIN: Code from the c_header annotation for type BLERandomPart
#ifndef BLE_RANDOM_PART_T_H
#define BLE_RANDOM_PART_T_H
typedef struct { uint8_t bytes[8]; } ble_random_part_t;
#endif
// END: Code from the c_header annotation for type BLERandomPart

// Definition of the sessions stuct:

// Definition of the instance stuct:
struct Main_Instance {
bool active;
bool alive;
// Variables for the ID of the ports of the instance
uint16_t id_Signals;
uint16_t id_Initialiser;
uint16_t id_Connecter;
uint16_t id_SMP;
uint16_t id_ATT;
uint16_t id_Encrypter;
uint16_t id_Socket;
uint16_t id_HCICommands;
uint16_t id_HCIEvents;
struct instance_fifo fifo;

// Instances of different sessions

// Variables for the current instance state
int initState;
int Main_States_State;
int Main_States_Pairing_State;
int Main_States_Pairing_Confirm_State;
int Main_States_Pairing_ExchangeKeys_State;
int Main_States_Pairing_ExchangeKeys_GenerateOwnKeys_State;
// Variables for the properties of the instance
uint8_t Main_Stopped_var;
bdaddr_t Main_PerhiperalAddress_var;
uint8_t Main_ConnectedAddressType_var;
bdaddr_t Main_ConnectedAddress_var;
uint16_t Main_ConnectedHandle_var;
uint8_t Main_DeviceAddressType_var;
bdaddr_t Main_DeviceAddress_var;
ble_random_number_t Main_Mrand_var;
ble_random_number_t Main_Srand_var;
ble_random_number_t Main_Mconfirm_var;
ble_random_number_t Main_Sconfirm_var;
ble_random_number_t Main_PeerLTK_var;
uint16_t Main_PeerEDIV_var;
ble_random_part_t Main_PeerRandom_var;
ble_random_number_t Main_PeerIRK_var;
uint8_t Main_PeerIdentityAddressType_var;
bdaddr_t Main_PeerIdentityAddress_var;
ble_random_number_t Main_OwnLTK_var;
uint16_t Main_OwnEDIV_var;
ble_random_part_t Main_OwnRandom_var;
ble_random_number_t Main_OwnIRK_var;
uint8_t Main_OwnIdentityAddressType_var;
bdaddr_t Main_OwnIdentityAddress_var;
uint8_t Main_HavePeerLTK_var;
uint8_t Main_HavePeerIdentification_var;
uint8_t Main_HavePeerIdentity_var;
uint8_t Main_HavePeerIdentityAddress_var;
uint8_t Main_HasPairedSuccessfully_var;

};
// Message enqueue
void enqueue_Main_Signals_Interrupt(struct Main_Instance * inst);
void enqueue_Main_Initialiser_Stopped(struct Main_Instance * inst);
void enqueue_Main_Initialiser_Failure(struct Main_Instance * inst);
void enqueue_Main_Initialiser_DeviceInitialised(struct Main_Instance * inst, bdaddr_t Address);
void enqueue_Main_Connecter_Connected(struct Main_Instance * inst, uint16_t Handle, uint8_t AddressType, bdaddr_t Address);
void enqueue_Main_Connecter_Stopped(struct Main_Instance * inst);
void enqueue_Main_Connecter_Failure(struct Main_Instance * inst);
void enqueue_Main_SMP_SMPPairingResponse(struct Main_Instance * inst, uint16_t Handle, uint8_t IOCapability, uint8_t OOBDataPresent, uint8_t Bonding, uint8_t MITM, uint8_t SecureConnection, uint8_t Keypress, uint8_t MaximumEncryptionKeySize, uint8_t InitiatorKeyDistribution, uint8_t ResponderKeyDistribution);
void enqueue_Main_SMP_SMPPairingConfirm(struct Main_Instance * inst, uint16_t Handle, ble_random_number_t ConfirmValue);
void enqueue_Main_SMP_SMPPairingRandom(struct Main_Instance * inst, uint16_t Handle, ble_random_number_t RandomValue);
void enqueue_Main_SMP_SMPPairingFailed(struct Main_Instance * inst, uint16_t Handle, uint8_t Reason);
void enqueue_Main_SMP_SMPEncryptionInformation(struct Main_Instance * inst, uint16_t Handle, ble_random_number_t LongTermKey);
void enqueue_Main_SMP_SMPMasterIdentification(struct Main_Instance * inst, uint16_t Handle, uint16_t EDIV, ble_random_part_t Rand);
void enqueue_Main_SMP_SMPIdentityInformation(struct Main_Instance * inst, uint16_t Handle, ble_random_number_t IdentityResolvingKey);
void enqueue_Main_SMP_SMPIdentityAddressInformation(struct Main_Instance * inst, uint16_t Handle, uint8_t AddressType, bdaddr_t Address);
void enqueue_Main_SMP_SMPSecurityRequest(struct Main_Instance * inst, uint16_t Handle, uint8_t Bonding, uint8_t MITM, uint8_t SecureConnection, uint8_t Keypress);
void enqueue_Main_ATT_ATTWriteResponse(struct Main_Instance * inst, uint16_t ConnectionHandle);
void enqueue_Main_ATT_ATTWriteError(struct Main_Instance * inst, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error);
void enqueue_Main_Encrypter_GenerateRandomNumberCompleted(struct Main_Instance * inst, ble_random_number_t Random);
void enqueue_Main_Encrypter_GenerateConfirmCompleted(struct Main_Instance * inst, ble_random_number_t Confirm);
void enqueue_Main_Encrypter_CheckConfirmCompleted(struct Main_Instance * inst, uint8_t Correct);
void enqueue_Main_Encrypter_GenerateSTKCompleted(struct Main_Instance * inst, ble_random_number_t STK);
void enqueue_Main_HCIEvents_SetLEScanParametersCompleted(struct Main_Instance * inst, uint8_t NumberAllowedCommandPackets, uint8_t Status);
void enqueue_Main_HCIEvents_SetLEScanEnableCompleted(struct Main_Instance * inst, uint8_t NumberAllowedCommandPackets, uint8_t Status);
void enqueue_Main_HCIEvents_LEAdvertisementReport(struct Main_Instance * inst, uint8_t Type, uint8_t AddressType, bdaddr_t Address, uint8_t Length, ble_adv_data_t Data);
void enqueue_Main_HCIEvents_EncryptionChanged(struct Main_Instance * inst, uint8_t Status, uint16_t ConnectionHandle, uint8_t Enabled);
void enqueue_Main_HCIEvents_LEStartEncryptionStatus(struct Main_Instance * inst, uint8_t NumberAllowedCommandPackets, uint8_t Status);

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
void register_Main_send_Connecter_Connect_listener(void (*_listener)(struct Main_Instance *));
void register_external_Main_send_Connecter_Connect_listener(void (*_listener)(struct Main_Instance *));
void register_Main_send_Connecter_ConnectTo_listener(void (*_listener)(struct Main_Instance *, uint8_t, bdaddr_t));
void register_external_Main_send_Connecter_ConnectTo_listener(void (*_listener)(struct Main_Instance *, uint8_t, bdaddr_t));
void register_Main_send_Connecter_Stop_listener(void (*_listener)(struct Main_Instance *));
void register_external_Main_send_Connecter_Stop_listener(void (*_listener)(struct Main_Instance *));
void register_Main_send_SMP_SMPPairingRequest_listener(void (*_listener)(struct Main_Instance *, uint16_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t));
void register_external_Main_send_SMP_SMPPairingRequest_listener(void (*_listener)(struct Main_Instance *, uint16_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t));
void register_Main_send_SMP_SMPPairingResponse_listener(void (*_listener)(struct Main_Instance *, uint16_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t));
void register_external_Main_send_SMP_SMPPairingResponse_listener(void (*_listener)(struct Main_Instance *, uint16_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t));
void register_Main_send_SMP_SMPPairingConfirm_listener(void (*_listener)(struct Main_Instance *, uint16_t, ble_random_number_t));
void register_external_Main_send_SMP_SMPPairingConfirm_listener(void (*_listener)(struct Main_Instance *, uint16_t, ble_random_number_t));
void register_Main_send_SMP_SMPPairingRandom_listener(void (*_listener)(struct Main_Instance *, uint16_t, ble_random_number_t));
void register_external_Main_send_SMP_SMPPairingRandom_listener(void (*_listener)(struct Main_Instance *, uint16_t, ble_random_number_t));
void register_Main_send_SMP_SMPPairingFailed_listener(void (*_listener)(struct Main_Instance *, uint16_t, uint8_t));
void register_external_Main_send_SMP_SMPPairingFailed_listener(void (*_listener)(struct Main_Instance *, uint16_t, uint8_t));
void register_Main_send_SMP_SMPPairingPublicKey_listener(void (*_listener)(struct Main_Instance *, uint16_t, smp_public_key_t, smp_public_key_t));
void register_external_Main_send_SMP_SMPPairingPublicKey_listener(void (*_listener)(struct Main_Instance *, uint16_t, smp_public_key_t, smp_public_key_t));
void register_Main_send_SMP_SMPPairingDHKeyCheck_listener(void (*_listener)(struct Main_Instance *, uint16_t, ble_random_number_t));
void register_external_Main_send_SMP_SMPPairingDHKeyCheck_listener(void (*_listener)(struct Main_Instance *, uint16_t, ble_random_number_t));
void register_Main_send_SMP_SMPKeypressNotification_listener(void (*_listener)(struct Main_Instance *, uint16_t, uint8_t));
void register_external_Main_send_SMP_SMPKeypressNotification_listener(void (*_listener)(struct Main_Instance *, uint16_t, uint8_t));
void register_Main_send_SMP_SMPEncryptionInformation_listener(void (*_listener)(struct Main_Instance *, uint16_t, ble_random_number_t));
void register_external_Main_send_SMP_SMPEncryptionInformation_listener(void (*_listener)(struct Main_Instance *, uint16_t, ble_random_number_t));
void register_Main_send_SMP_SMPMasterIdentification_listener(void (*_listener)(struct Main_Instance *, uint16_t, uint16_t, ble_random_part_t));
void register_external_Main_send_SMP_SMPMasterIdentification_listener(void (*_listener)(struct Main_Instance *, uint16_t, uint16_t, ble_random_part_t));
void register_Main_send_SMP_SMPIdentityInformation_listener(void (*_listener)(struct Main_Instance *, uint16_t, ble_random_number_t));
void register_external_Main_send_SMP_SMPIdentityInformation_listener(void (*_listener)(struct Main_Instance *, uint16_t, ble_random_number_t));
void register_Main_send_SMP_SMPIdentityAddressInformation_listener(void (*_listener)(struct Main_Instance *, uint16_t, uint8_t, bdaddr_t));
void register_external_Main_send_SMP_SMPIdentityAddressInformation_listener(void (*_listener)(struct Main_Instance *, uint16_t, uint8_t, bdaddr_t));
void register_Main_send_SMP_SMPSigningInformation_listener(void (*_listener)(struct Main_Instance *, uint16_t, ble_random_number_t));
void register_external_Main_send_SMP_SMPSigningInformation_listener(void (*_listener)(struct Main_Instance *, uint16_t, ble_random_number_t));
void register_Main_send_SMP_SMPSecurityRequest_listener(void (*_listener)(struct Main_Instance *, uint16_t, uint8_t, uint8_t, uint8_t, uint8_t));
void register_external_Main_send_SMP_SMPSecurityRequest_listener(void (*_listener)(struct Main_Instance *, uint16_t, uint8_t, uint8_t, uint8_t, uint8_t));
void register_Main_send_ATT_ATTFindInformationRequest_listener(void (*_listener)(struct Main_Instance *, uint16_t, uint16_t, uint16_t));
void register_external_Main_send_ATT_ATTFindInformationRequest_listener(void (*_listener)(struct Main_Instance *, uint16_t, uint16_t, uint16_t));
void register_Main_send_ATT_ATTFindInformationResponse_listener(void (*_listener)(struct Main_Instance *, uint16_t, uint8_t, ble_gatt_data_t));
void register_external_Main_send_ATT_ATTFindInformationResponse_listener(void (*_listener)(struct Main_Instance *, uint16_t, uint8_t, ble_gatt_data_t));
void register_Main_send_ATT_ATTFindInformationError_listener(void (*_listener)(struct Main_Instance *, uint16_t, uint16_t, uint8_t));
void register_external_Main_send_ATT_ATTFindInformationError_listener(void (*_listener)(struct Main_Instance *, uint16_t, uint16_t, uint8_t));
void register_Main_send_ATT_ATTReadByTypeRequest_listener(void (*_listener)(struct Main_Instance *, uint16_t, uint16_t, uint16_t, ble_uuid_t));
void register_external_Main_send_ATT_ATTReadByTypeRequest_listener(void (*_listener)(struct Main_Instance *, uint16_t, uint16_t, uint16_t, ble_uuid_t));
void register_Main_send_ATT_ATTReadByTypeResponse_listener(void (*_listener)(struct Main_Instance *, uint16_t, uint8_t, ble_gatt_data_t));
void register_external_Main_send_ATT_ATTReadByTypeResponse_listener(void (*_listener)(struct Main_Instance *, uint16_t, uint8_t, ble_gatt_data_t));
void register_Main_send_ATT_ATTReadByTypeError_listener(void (*_listener)(struct Main_Instance *, uint16_t, uint16_t, uint8_t));
void register_external_Main_send_ATT_ATTReadByTypeError_listener(void (*_listener)(struct Main_Instance *, uint16_t, uint16_t, uint8_t));
void register_Main_send_ATT_ATTReadRequest_listener(void (*_listener)(struct Main_Instance *, uint16_t, uint16_t));
void register_external_Main_send_ATT_ATTReadRequest_listener(void (*_listener)(struct Main_Instance *, uint16_t, uint16_t));
void register_Main_send_ATT_ATTReadResponse_listener(void (*_listener)(struct Main_Instance *, uint16_t, ble_gatt_data_t));
void register_external_Main_send_ATT_ATTReadResponse_listener(void (*_listener)(struct Main_Instance *, uint16_t, ble_gatt_data_t));
void register_Main_send_ATT_ATTReadError_listener(void (*_listener)(struct Main_Instance *, uint16_t, uint16_t, uint8_t));
void register_external_Main_send_ATT_ATTReadError_listener(void (*_listener)(struct Main_Instance *, uint16_t, uint16_t, uint8_t));
void register_Main_send_ATT_ATTReadByGroupTypeRequest_listener(void (*_listener)(struct Main_Instance *, uint16_t, uint16_t, uint16_t, ble_uuid_t));
void register_external_Main_send_ATT_ATTReadByGroupTypeRequest_listener(void (*_listener)(struct Main_Instance *, uint16_t, uint16_t, uint16_t, ble_uuid_t));
void register_Main_send_ATT_ATTReadByGroupTypeResponse_listener(void (*_listener)(struct Main_Instance *, uint16_t, uint8_t, ble_gatt_data_t));
void register_external_Main_send_ATT_ATTReadByGroupTypeResponse_listener(void (*_listener)(struct Main_Instance *, uint16_t, uint8_t, ble_gatt_data_t));
void register_Main_send_ATT_ATTReadByGroupTypeError_listener(void (*_listener)(struct Main_Instance *, uint16_t, uint16_t, uint8_t));
void register_external_Main_send_ATT_ATTReadByGroupTypeError_listener(void (*_listener)(struct Main_Instance *, uint16_t, uint16_t, uint8_t));
void register_Main_send_ATT_ATTWriteRequest_listener(void (*_listener)(struct Main_Instance *, uint16_t, uint16_t, ble_gatt_data_t));
void register_external_Main_send_ATT_ATTWriteRequest_listener(void (*_listener)(struct Main_Instance *, uint16_t, uint16_t, ble_gatt_data_t));
void register_Main_send_ATT_ATTWriteResponse_listener(void (*_listener)(struct Main_Instance *, uint16_t));
void register_external_Main_send_ATT_ATTWriteResponse_listener(void (*_listener)(struct Main_Instance *, uint16_t));
void register_Main_send_ATT_ATTWriteError_listener(void (*_listener)(struct Main_Instance *, uint16_t, uint16_t, uint8_t));
void register_external_Main_send_ATT_ATTWriteError_listener(void (*_listener)(struct Main_Instance *, uint16_t, uint16_t, uint8_t));
void register_Main_send_ATT_ATTWriteCommand_listener(void (*_listener)(struct Main_Instance *, uint16_t, uint16_t, ble_gatt_data_t));
void register_external_Main_send_ATT_ATTWriteCommand_listener(void (*_listener)(struct Main_Instance *, uint16_t, uint16_t, ble_gatt_data_t));
void register_Main_send_ATT_ATTHandleValueNotification_listener(void (*_listener)(struct Main_Instance *, uint16_t, uint16_t, ble_gatt_data_t));
void register_external_Main_send_ATT_ATTHandleValueNotification_listener(void (*_listener)(struct Main_Instance *, uint16_t, uint16_t, ble_gatt_data_t));
void register_Main_send_ATT_ATTHandleValueIndication_listener(void (*_listener)(struct Main_Instance *, uint16_t, uint16_t, ble_gatt_data_t));
void register_external_Main_send_ATT_ATTHandleValueIndication_listener(void (*_listener)(struct Main_Instance *, uint16_t, uint16_t, ble_gatt_data_t));
void register_Main_send_ATT_ATTHandleValueConfirmation_listener(void (*_listener)(struct Main_Instance *, uint16_t));
void register_external_Main_send_ATT_ATTHandleValueConfirmation_listener(void (*_listener)(struct Main_Instance *, uint16_t));
void register_Main_send_Encrypter_Start_listener(void (*_listener)(struct Main_Instance *));
void register_external_Main_send_Encrypter_Start_listener(void (*_listener)(struct Main_Instance *));
void register_Main_send_Encrypter_GenerateRandomNumber_listener(void (*_listener)(struct Main_Instance *));
void register_external_Main_send_Encrypter_GenerateRandomNumber_listener(void (*_listener)(struct Main_Instance *));
void register_Main_send_Encrypter_GenerateConfirm_listener(void (*_listener)(struct Main_Instance *, ble_random_number_t, uint8_t, bdaddr_t, uint8_t, bdaddr_t));
void register_external_Main_send_Encrypter_GenerateConfirm_listener(void (*_listener)(struct Main_Instance *, ble_random_number_t, uint8_t, bdaddr_t, uint8_t, bdaddr_t));
void register_Main_send_Encrypter_CheckConfirm_listener(void (*_listener)(struct Main_Instance *, ble_random_number_t, ble_random_number_t));
void register_external_Main_send_Encrypter_CheckConfirm_listener(void (*_listener)(struct Main_Instance *, ble_random_number_t, ble_random_number_t));
void register_Main_send_Encrypter_GenerateSTK_listener(void (*_listener)(struct Main_Instance *, ble_random_number_t, ble_random_number_t));
void register_external_Main_send_Encrypter_GenerateSTK_listener(void (*_listener)(struct Main_Instance *, ble_random_number_t, ble_random_number_t));
void register_Main_send_Socket_Open_listener(void (*_listener)(struct Main_Instance *));
void register_external_Main_send_Socket_Open_listener(void (*_listener)(struct Main_Instance *));
void register_Main_send_Socket_Close_listener(void (*_listener)(struct Main_Instance *));
void register_external_Main_send_Socket_Close_listener(void (*_listener)(struct Main_Instance *));
void register_Main_send_HCICommands_Reset_listener(void (*_listener)(struct Main_Instance *));
void register_external_Main_send_HCICommands_Reset_listener(void (*_listener)(struct Main_Instance *));
void register_Main_send_HCICommands_SetEventMask_listener(void (*_listener)(struct Main_Instance *, set_event_mask_cp));
void register_external_Main_send_HCICommands_SetEventMask_listener(void (*_listener)(struct Main_Instance *, set_event_mask_cp));
void register_Main_send_HCICommands_SetEventMaskAll_listener(void (*_listener)(struct Main_Instance *));
void register_external_Main_send_HCICommands_SetEventMaskAll_listener(void (*_listener)(struct Main_Instance *));
void register_Main_send_HCICommands_SetLocalName_listener(void (*_listener)(struct Main_Instance *, change_local_name_cp));
void register_external_Main_send_HCICommands_SetLocalName_listener(void (*_listener)(struct Main_Instance *, change_local_name_cp));
void register_Main_send_HCICommands_Disconnect_listener(void (*_listener)(struct Main_Instance *, uint16_t, uint8_t));
void register_external_Main_send_HCICommands_Disconnect_listener(void (*_listener)(struct Main_Instance *, uint16_t, uint8_t));
void register_Main_send_HCICommands_SetLEEventMask_listener(void (*_listener)(struct Main_Instance *, set_event_mask_cp));
void register_external_Main_send_HCICommands_SetLEEventMask_listener(void (*_listener)(struct Main_Instance *, set_event_mask_cp));
void register_Main_send_HCICommands_SetLEEventMaskAll_listener(void (*_listener)(struct Main_Instance *));
void register_external_Main_send_HCICommands_SetLEEventMaskAll_listener(void (*_listener)(struct Main_Instance *));
void register_Main_send_HCICommands_SetLEAdvertisementParameters_listener(void (*_listener)(struct Main_Instance *, uint16_t, uint16_t, uint8_t, uint8_t, uint8_t, bdaddr_t, uint8_t, uint8_t));
void register_external_Main_send_HCICommands_SetLEAdvertisementParameters_listener(void (*_listener)(struct Main_Instance *, uint16_t, uint16_t, uint8_t, uint8_t, uint8_t, bdaddr_t, uint8_t, uint8_t));
void register_Main_send_HCICommands_SetLEAdvertiseEnable_listener(void (*_listener)(struct Main_Instance *, uint8_t));
void register_external_Main_send_HCICommands_SetLEAdvertiseEnable_listener(void (*_listener)(struct Main_Instance *, uint8_t));
void register_Main_send_HCICommands_SetLEAdvertisingData_listener(void (*_listener)(struct Main_Instance *, uint8_t, ble_adv_data_t));
void register_external_Main_send_HCICommands_SetLEAdvertisingData_listener(void (*_listener)(struct Main_Instance *, uint8_t, ble_adv_data_t));
void register_Main_send_HCICommands_SetLEScanResponseData_listener(void (*_listener)(struct Main_Instance *, uint8_t, ble_adv_data_t));
void register_external_Main_send_HCICommands_SetLEScanResponseData_listener(void (*_listener)(struct Main_Instance *, uint8_t, ble_adv_data_t));
void register_Main_send_HCICommands_SetLEScanParameters_listener(void (*_listener)(struct Main_Instance *, uint8_t, uint16_t, uint16_t, uint8_t, uint8_t));
void register_external_Main_send_HCICommands_SetLEScanParameters_listener(void (*_listener)(struct Main_Instance *, uint8_t, uint16_t, uint16_t, uint8_t, uint8_t));
void register_Main_send_HCICommands_SetLEScanEnable_listener(void (*_listener)(struct Main_Instance *, uint8_t, uint8_t));
void register_external_Main_send_HCICommands_SetLEScanEnable_listener(void (*_listener)(struct Main_Instance *, uint8_t, uint8_t));
void register_Main_send_HCICommands_LECreateConnection_listener(void (*_listener)(struct Main_Instance *, uint16_t, uint16_t, uint8_t, uint8_t, bdaddr_t, uint8_t, uint16_t, uint16_t, uint16_t, uint16_t, uint16_t, uint16_t));
void register_external_Main_send_HCICommands_LECreateConnection_listener(void (*_listener)(struct Main_Instance *, uint16_t, uint16_t, uint8_t, uint8_t, bdaddr_t, uint8_t, uint16_t, uint16_t, uint16_t, uint16_t, uint16_t, uint16_t));
void register_Main_send_HCICommands_LECreateConnectionCancel_listener(void (*_listener)(struct Main_Instance *));
void register_external_Main_send_HCICommands_LECreateConnectionCancel_listener(void (*_listener)(struct Main_Instance *));
void register_Main_send_HCICommands_LERand_listener(void (*_listener)(struct Main_Instance *));
void register_external_Main_send_HCICommands_LERand_listener(void (*_listener)(struct Main_Instance *));
void register_Main_send_HCICommands_LEEncrypt_listener(void (*_listener)(struct Main_Instance *, ble_random_number_t, ble_random_number_t));
void register_external_Main_send_HCICommands_LEEncrypt_listener(void (*_listener)(struct Main_Instance *, ble_random_number_t, ble_random_number_t));
void register_Main_send_HCICommands_LEStartEncryption_listener(void (*_listener)(struct Main_Instance *, uint16_t, ble_random_part_t, uint16_t, ble_random_number_t));
void register_external_Main_send_HCICommands_LEStartEncryption_listener(void (*_listener)(struct Main_Instance *, uint16_t, ble_random_part_t, uint16_t, ble_random_number_t));

// Definition of the states:
#define MAIN_STATES_STATE 0
#define MAIN_STATES_INITIALISE_STATE 1
#define MAIN_STATES_SETSCANNINGPARAMETERS_STATE 2
#define MAIN_STATES_SCANNING_STATE 3
#define MAIN_STATES_CONNECT_STATE 4
#define MAIN_STATES_TIMESYNC_STATE 5
#define MAIN_STATES_UNINITIALISE_STATE 6
#define MAIN_STATES_FAILED_STATE 7
#define MAIN_STATES_QUIT_STATE 8
#define MAIN_STATES_PAIRING_STATE 9
#define MAIN_STATES_PAIRING_REQUEST_STATE 10
#define MAIN_STATES_PAIRING_ENCRYPT_STATE 11
#define MAIN_STATES_PAIRING_PAIRFAILED_STATE 12
#define MAIN_STATES_PAIRING_CONFIRM_STATE 13
#define MAIN_STATES_PAIRING_CONFIRM_SENDMCONFIRM_STATE 14
#define MAIN_STATES_PAIRING_CONFIRM_GETSCONFIRM_STATE 15
#define MAIN_STATES_PAIRING_CONFIRM_GETSRANDOM_STATE 16
#define MAIN_STATES_PAIRING_EXCHANGEKEYS_STATE 17
#define MAIN_STATES_PAIRING_EXCHANGEKEYS_WAITFORPEERKEYS_STATE 18
#define MAIN_STATES_PAIRING_EXCHANGEKEYS_GENERATEOWNKEYS_STATE 19
#define MAIN_STATES_PAIRING_EXCHANGEKEYS_GENERATEOWNKEYS_GENERATELTK_STATE 20
#define MAIN_STATES_PAIRING_EXCHANGEKEYS_GENERATEOWNKEYS_GENERATEEDIVRAND_STATE 21
#define MAIN_STATES_PAIRING_EXCHANGEKEYS_GENERATEOWNKEYS_GENERATEIRK_STATE 22
#define MAIN_STATES_PAIRING_EXCHANGEKEYS_GENERATEOWNKEYS_SENDALL_STATE 23



#ifdef __cplusplus
}
#endif

#endif //Main_H_
