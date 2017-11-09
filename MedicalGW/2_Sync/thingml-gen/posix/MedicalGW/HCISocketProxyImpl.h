/*****************************************************
 *      THIS IS A GENERATED FILE. DO NOT EDIT.
 *           Header for Thing HCISocketProxyImpl
 *  Generated from ThingML (http://www.thingml.org)
 *****************************************************/

#ifndef HCISocketProxyImpl_H_
#define HCISocketProxyImpl_H_

#ifdef __cplusplus
extern "C" {
#endif

#include "thingml_typedefs.h"

/*****************************************************************************
 * Headers for type : HCISocketProxyImpl
 *****************************************************************************/


// BEGIN: Code from the c_header annotation HCISocketProxyImpl
#include <errno.h>
#include <stdio.h>
#include <sys/ioctl.h>
#include <bluetooth/bluetooth.h>
#include <bluetooth/hci.h>
#include <bluetooth/hci_lib.h>
// END: Code from the c_header annotation HCISocketProxyImpl


// BEGIN: Code from the c_header annotation for type BLERandomPart
#ifndef BLE_RANDOM_PART_T_H
#define BLE_RANDOM_PART_T_H
typedef struct { uint8_t bytes[8]; } ble_random_part_t;
#endif
// END: Code from the c_header annotation for type BLERandomPart


// BEGIN: Code from the c_header annotation for type HCIEventMask
#include <bluetooth/bluetooth.h>
#include <bluetooth/hci.h>
// END: Code from the c_header annotation for type HCIEventMask


// BEGIN: Code from the c_header annotation for type BLEAdvertiseData
#ifndef BLE_ADV_DATA_T_H
#define BLE_ADV_DATA_T_H
typedef struct { uint8_t bytes[31]; } ble_adv_data_t;
#endif
// END: Code from the c_header annotation for type BLEAdvertiseData


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


// BEGIN: Code from the c_header annotation for type BTAddress
#include <bluetooth/bluetooth.h>
// END: Code from the c_header annotation for type BTAddress


// BEGIN: Code from the c_header annotation for type BTLocalName
#include <bluetooth/bluetooth.h>
#include <bluetooth/hci.h>
// END: Code from the c_header annotation for type BTLocalName


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
struct HCISocketProxyImpl_Instance {

// Instances of different sessions
bool active;
// Variables for the ID of the ports of the instance
uint16_t id_Socket;
uint16_t id_Commands;
uint16_t id_Events;
uint16_t id_SMP;
uint16_t id_ATT;
// Variables for the current instance state
int HCISocketProxy_Socket_State;
// Variables for the properties of the instance
int16_t HCISocketProxyImpl_DevHandle_var;
const char * HCISocketProxy_Device_var;

};
// Declaration of prototypes outgoing messages :
void HCISocketProxy_Socket_OnEntry(int state, struct HCISocketProxyImpl_Instance *_instance);
void HCISocketProxyImpl_handle_Socket_Open(struct HCISocketProxyImpl_Instance *_instance);
void HCISocketProxyImpl_handle_Socket_Close(struct HCISocketProxyImpl_Instance *_instance);
void HCISocketProxyImpl_handle_Commands_SetLEAdvertisementParameters(struct HCISocketProxyImpl_Instance *_instance, uint16_t MinInterval, uint16_t MaxInterval, uint8_t Type, uint8_t OwnAddressType, uint8_t PeerAddressType, bdaddr_t PeerAddress, uint8_t Channel, uint8_t FilterPolicy);
void HCISocketProxyImpl_handle_Commands_SetLEScanParameters(struct HCISocketProxyImpl_Instance *_instance, uint8_t Type, uint16_t Interval, uint16_t Window, uint8_t OwnAddressType, uint8_t FilterPolicy);
void HCISocketProxyImpl_handle_Commands_Disconnect(struct HCISocketProxyImpl_Instance *_instance, uint16_t ConnectionHandle, uint8_t Reason);
void HCISocketProxyImpl_handle_Commands_SetEventMaskAll(struct HCISocketProxyImpl_Instance *_instance);
void HCISocketProxyImpl_handle_Commands_SetLEAdvertiseEnable(struct HCISocketProxyImpl_Instance *_instance, uint8_t Enable);
void HCISocketProxyImpl_handle_Commands_LERand(struct HCISocketProxyImpl_Instance *_instance);
void HCISocketProxyImpl_handle_Commands_SetLEAdvertisingData(struct HCISocketProxyImpl_Instance *_instance, uint8_t Length, ble_adv_data_t Data);
void HCISocketProxyImpl_handle_Commands_SetLEEventMaskAll(struct HCISocketProxyImpl_Instance *_instance);
void HCISocketProxyImpl_handle_Commands_LECreateConnectionCancel(struct HCISocketProxyImpl_Instance *_instance);
void HCISocketProxyImpl_handle_Commands_LECreateConnection(struct HCISocketProxyImpl_Instance *_instance, uint16_t Interval, uint16_t Window, uint8_t FilterPolicy, uint8_t PeerAddressType, bdaddr_t PeerAddress, uint8_t OwnAddressType, uint16_t ConnIntervalMin, uint16_t ConnIntervalMax, uint16_t ConnLatency, uint16_t SupervisionTimeout, uint16_t CELengthMin, uint16_t CELengthMax);
void HCISocketProxyImpl_handle_Commands_LEEncrypt(struct HCISocketProxyImpl_Instance *_instance, ble_random_number_t Key, ble_random_number_t Plaintext);
void HCISocketProxyImpl_handle_Commands_SetEventMask(struct HCISocketProxyImpl_Instance *_instance, set_event_mask_cp Mask);
void HCISocketProxyImpl_handle_Commands_Reset(struct HCISocketProxyImpl_Instance *_instance);
void HCISocketProxyImpl_handle_Commands_LEStartEncryption(struct HCISocketProxyImpl_Instance *_instance, uint16_t ConnectionHandle, ble_random_part_t Random, uint16_t EDIV, ble_random_number_t LTK);
void HCISocketProxyImpl_handle_Commands_SetLEScanEnable(struct HCISocketProxyImpl_Instance *_instance, uint8_t Enable, uint8_t FilterDuplicates);
void HCISocketProxyImpl_handle_Commands_SetLEEventMask(struct HCISocketProxyImpl_Instance *_instance, set_event_mask_cp Mask);
void HCISocketProxyImpl_handle_Commands_SetLEScanResponseData(struct HCISocketProxyImpl_Instance *_instance, uint8_t Length, ble_adv_data_t Data);
void HCISocketProxyImpl_handle_ATT_ATTReadByTypeError(struct HCISocketProxyImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error);
void HCISocketProxyImpl_handle_ATT_ATTReadByGroupTypeError(struct HCISocketProxyImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error);
void HCISocketProxyImpl_handle_ATT_ATTWriteResponse(struct HCISocketProxyImpl_Instance *_instance, uint16_t ConnectionHandle);
void HCISocketProxyImpl_handle_ATT_ATTReadRequest(struct HCISocketProxyImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle);
void HCISocketProxyImpl_handle_ATT_ATTFindInformationError(struct HCISocketProxyImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error);
void HCISocketProxyImpl_handle_ATT_ATTReadByTypeRequest(struct HCISocketProxyImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t StartingHandle, uint16_t EndingHandle, ble_uuid_t AttributeType);
void HCISocketProxyImpl_handle_ATT_ATTHandleValueConfirmation(struct HCISocketProxyImpl_Instance *_instance, uint16_t ConnectionHandle);
void HCISocketProxyImpl_handle_ATT_ATTReadError(struct HCISocketProxyImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error);
void HCISocketProxyImpl_handle_ATT_ATTWriteRequest(struct HCISocketProxyImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, ble_gatt_data_t AttributeValue);
void HCISocketProxyImpl_handle_ATT_ATTWriteCommand(struct HCISocketProxyImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, ble_gatt_data_t AttributeValue);
void HCISocketProxyImpl_handle_ATT_ATTWriteError(struct HCISocketProxyImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error);
void HCISocketProxyImpl_handle_ATT_ATTHandleValueNotification(struct HCISocketProxyImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, ble_gatt_data_t AttributeValue);
void HCISocketProxyImpl_handle_ATT_ATTFindInformationResponse(struct HCISocketProxyImpl_Instance *_instance, uint16_t ConnectionHandle, uint8_t Format, ble_gatt_data_t InformationData);
void HCISocketProxyImpl_handle_ATT_ATTReadByGroupTypeResponse(struct HCISocketProxyImpl_Instance *_instance, uint16_t ConnectionHandle, uint8_t Length, ble_gatt_data_t AttributeDataList);
void HCISocketProxyImpl_handle_ATT_ATTReadByTypeResponse(struct HCISocketProxyImpl_Instance *_instance, uint16_t ConnectionHandle, uint8_t Length, ble_gatt_data_t AttributeDataList);
void HCISocketProxyImpl_handle_ATT_ATTFindInformationRequest(struct HCISocketProxyImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t StartingHandle, uint16_t EndingHandle);
void HCISocketProxyImpl_handle_ATT_ATTReadResponse(struct HCISocketProxyImpl_Instance *_instance, uint16_t ConnectionHandle, ble_gatt_data_t AttributeValue);
void HCISocketProxyImpl_handle_ATT_ATTReadByGroupTypeRequest(struct HCISocketProxyImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t StartingHandle, uint16_t EndingHandle, ble_uuid_t AttributeGroupType);
void HCISocketProxyImpl_handle_ATT_ATTHandleValueIndication(struct HCISocketProxyImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, ble_gatt_data_t AttributeValue);
void HCISocketProxyImpl_handle_SMP_SMPPairingRequest(struct HCISocketProxyImpl_Instance *_instance, uint16_t Handle, uint8_t IOCapability, uint8_t OOBDataPresent, uint8_t Bonding, uint8_t MITM, uint8_t SecureConnection, uint8_t Keypress, uint8_t MaximumEncryptionKeySize, uint8_t InitiatorKeyDistribution, uint8_t ResponderKeyDistribution);
void HCISocketProxyImpl_handle_SMP_SMPEncryptionInformation(struct HCISocketProxyImpl_Instance *_instance, uint16_t Handle, ble_random_number_t LongTermKey);
void HCISocketProxyImpl_handle_SMP_SMPPairingDHKeyCheck(struct HCISocketProxyImpl_Instance *_instance, uint16_t Handle, ble_random_number_t DHKeyCheck);
void HCISocketProxyImpl_handle_SMP_SMPPairingConfirm(struct HCISocketProxyImpl_Instance *_instance, uint16_t Handle, ble_random_number_t ConfirmValue);
void HCISocketProxyImpl_handle_SMP_SMPSecurityRequest(struct HCISocketProxyImpl_Instance *_instance, uint16_t Handle, uint8_t Bonding, uint8_t MITM, uint8_t SecureConnection, uint8_t Keypress);
void HCISocketProxyImpl_handle_SMP_SMPPairingFailed(struct HCISocketProxyImpl_Instance *_instance, uint16_t Handle, uint8_t Reason);
void HCISocketProxyImpl_handle_SMP_SMPPairingPublicKey(struct HCISocketProxyImpl_Instance *_instance, uint16_t Handle, smp_public_key_t KeyX, smp_public_key_t KeyY);
void HCISocketProxyImpl_handle_SMP_SMPIdentityAddressInformation(struct HCISocketProxyImpl_Instance *_instance, uint16_t Handle, uint8_t AddressType, bdaddr_t Address);
void HCISocketProxyImpl_handle_SMP_SMPPairingRandom(struct HCISocketProxyImpl_Instance *_instance, uint16_t Handle, ble_random_number_t RandomValue);
void HCISocketProxyImpl_handle_SMP_SMPMasterIdentification(struct HCISocketProxyImpl_Instance *_instance, uint16_t Handle, uint16_t EDIV, ble_random_part_t Rand);
void HCISocketProxyImpl_handle_SMP_SMPPairingResponse(struct HCISocketProxyImpl_Instance *_instance, uint16_t Handle, uint8_t IOCapability, uint8_t OOBDataPresent, uint8_t Bonding, uint8_t MITM, uint8_t SecureConnection, uint8_t Keypress, uint8_t MaximumEncryptionKeySize, uint8_t InitiatorKeyDistribution, uint8_t ResponderKeyDistribution);
void HCISocketProxyImpl_handle_SMP_SMPIdentityInformation(struct HCISocketProxyImpl_Instance *_instance, uint16_t Handle, ble_random_number_t IdentityResolvingKey);
void HCISocketProxyImpl_handle_SMP_SMPKeypressNotification(struct HCISocketProxyImpl_Instance *_instance, uint16_t Handle, uint8_t Type);
void HCISocketProxyImpl_handle_SMP_SMPSigningInformation(struct HCISocketProxyImpl_Instance *_instance, uint16_t Handle, ble_random_number_t SignatureKey);
// Declaration of callbacks for incoming messages:
void register_HCISocketProxyImpl_send_Socket_Opened_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, bdaddr_t));
void register_external_HCISocketProxyImpl_send_Socket_Opened_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, bdaddr_t));
void register_HCISocketProxyImpl_send_Socket_Closed_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *));
void register_external_HCISocketProxyImpl_send_Socket_Closed_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *));
void register_HCISocketProxyImpl_send_Events_ResetCompleted_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint8_t, uint8_t));
void register_external_HCISocketProxyImpl_send_Events_ResetCompleted_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint8_t, uint8_t));
void register_HCISocketProxyImpl_send_Events_SetEventMaskCompleted_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint8_t, uint8_t));
void register_external_HCISocketProxyImpl_send_Events_SetEventMaskCompleted_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint8_t, uint8_t));
void register_HCISocketProxyImpl_send_Events_SetLocalNameCompleted_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint8_t, uint8_t));
void register_external_HCISocketProxyImpl_send_Events_SetLocalNameCompleted_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint8_t, uint8_t));
void register_HCISocketProxyImpl_send_Events_DisconnectStatus_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint8_t, uint8_t));
void register_external_HCISocketProxyImpl_send_Events_DisconnectStatus_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint8_t, uint8_t));
void register_HCISocketProxyImpl_send_Events_DisconnectionCompleted_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint8_t, uint16_t, uint8_t));
void register_external_HCISocketProxyImpl_send_Events_DisconnectionCompleted_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint8_t, uint16_t, uint8_t));
void register_HCISocketProxyImpl_send_Events_SetLEEventMaskCompleted_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint8_t, uint8_t));
void register_external_HCISocketProxyImpl_send_Events_SetLEEventMaskCompleted_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint8_t, uint8_t));
void register_HCISocketProxyImpl_send_Events_SetLEAdvertisementParametersCompleted_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint8_t, uint8_t));
void register_external_HCISocketProxyImpl_send_Events_SetLEAdvertisementParametersCompleted_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint8_t, uint8_t));
void register_HCISocketProxyImpl_send_Events_SetLEAdvertiseEnableCompleted_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint8_t, uint8_t));
void register_external_HCISocketProxyImpl_send_Events_SetLEAdvertiseEnableCompleted_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint8_t, uint8_t));
void register_HCISocketProxyImpl_send_Events_SetLEAdvertisingDataCompleted_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint8_t, uint8_t));
void register_external_HCISocketProxyImpl_send_Events_SetLEAdvertisingDataCompleted_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint8_t, uint8_t));
void register_HCISocketProxyImpl_send_Events_SetLEScanResponseDataCompleted_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint8_t, uint8_t));
void register_external_HCISocketProxyImpl_send_Events_SetLEScanResponseDataCompleted_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint8_t, uint8_t));
void register_HCISocketProxyImpl_send_Events_SetLEScanParametersCompleted_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint8_t, uint8_t));
void register_external_HCISocketProxyImpl_send_Events_SetLEScanParametersCompleted_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint8_t, uint8_t));
void register_HCISocketProxyImpl_send_Events_SetLEScanEnableCompleted_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint8_t, uint8_t));
void register_external_HCISocketProxyImpl_send_Events_SetLEScanEnableCompleted_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint8_t, uint8_t));
void register_HCISocketProxyImpl_send_Events_LEAdvertisementReport_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint8_t, uint8_t, bdaddr_t, uint8_t, ble_adv_data_t));
void register_external_HCISocketProxyImpl_send_Events_LEAdvertisementReport_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint8_t, uint8_t, bdaddr_t, uint8_t, ble_adv_data_t));
void register_HCISocketProxyImpl_send_Events_LECreateConnectionStatus_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint8_t, uint8_t));
void register_external_HCISocketProxyImpl_send_Events_LECreateConnectionStatus_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint8_t, uint8_t));
void register_HCISocketProxyImpl_send_Events_LECreateConnectionCancelCompleted_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint8_t, uint8_t));
void register_external_HCISocketProxyImpl_send_Events_LECreateConnectionCancelCompleted_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint8_t, uint8_t));
void register_HCISocketProxyImpl_send_Events_LEConnectionComplete_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint8_t, uint16_t, uint8_t, uint8_t, bdaddr_t, uint16_t, uint16_t, uint16_t, uint8_t));
void register_external_HCISocketProxyImpl_send_Events_LEConnectionComplete_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint8_t, uint16_t, uint8_t, uint8_t, bdaddr_t, uint16_t, uint16_t, uint16_t, uint8_t));
void register_HCISocketProxyImpl_send_Events_LEEnhancedConnectionComplete_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint8_t, uint16_t, uint8_t, uint8_t, bdaddr_t, bdaddr_t, bdaddr_t, uint16_t, uint16_t, uint16_t, uint8_t));
void register_external_HCISocketProxyImpl_send_Events_LEEnhancedConnectionComplete_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint8_t, uint16_t, uint8_t, uint8_t, bdaddr_t, bdaddr_t, bdaddr_t, uint16_t, uint16_t, uint16_t, uint8_t));
void register_HCISocketProxyImpl_send_Events_LERandCompleted_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint8_t, uint8_t, ble_random_part_t));
void register_external_HCISocketProxyImpl_send_Events_LERandCompleted_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint8_t, uint8_t, ble_random_part_t));
void register_HCISocketProxyImpl_send_Events_LEEncryptCompleted_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint8_t, uint8_t, ble_random_number_t));
void register_external_HCISocketProxyImpl_send_Events_LEEncryptCompleted_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint8_t, uint8_t, ble_random_number_t));
void register_HCISocketProxyImpl_send_Events_EncryptionChanged_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint8_t, uint16_t, uint8_t));
void register_external_HCISocketProxyImpl_send_Events_EncryptionChanged_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint8_t, uint16_t, uint8_t));
void register_HCISocketProxyImpl_send_Events_LEStartEncryptionStatus_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint8_t, uint8_t));
void register_external_HCISocketProxyImpl_send_Events_LEStartEncryptionStatus_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint8_t, uint8_t));
void register_HCISocketProxyImpl_send_SMP_SMPPairingRequest_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint16_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t));
void register_external_HCISocketProxyImpl_send_SMP_SMPPairingRequest_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint16_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t));
void register_HCISocketProxyImpl_send_SMP_SMPPairingResponse_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint16_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t));
void register_external_HCISocketProxyImpl_send_SMP_SMPPairingResponse_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint16_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t));
void register_HCISocketProxyImpl_send_SMP_SMPPairingConfirm_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint16_t, ble_random_number_t));
void register_external_HCISocketProxyImpl_send_SMP_SMPPairingConfirm_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint16_t, ble_random_number_t));
void register_HCISocketProxyImpl_send_SMP_SMPPairingRandom_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint16_t, ble_random_number_t));
void register_external_HCISocketProxyImpl_send_SMP_SMPPairingRandom_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint16_t, ble_random_number_t));
void register_HCISocketProxyImpl_send_SMP_SMPPairingFailed_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint16_t, uint8_t));
void register_external_HCISocketProxyImpl_send_SMP_SMPPairingFailed_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint16_t, uint8_t));
void register_HCISocketProxyImpl_send_SMP_SMPPairingPublicKey_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint16_t, smp_public_key_t, smp_public_key_t));
void register_external_HCISocketProxyImpl_send_SMP_SMPPairingPublicKey_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint16_t, smp_public_key_t, smp_public_key_t));
void register_HCISocketProxyImpl_send_SMP_SMPPairingDHKeyCheck_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint16_t, ble_random_number_t));
void register_external_HCISocketProxyImpl_send_SMP_SMPPairingDHKeyCheck_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint16_t, ble_random_number_t));
void register_HCISocketProxyImpl_send_SMP_SMPKeypressNotification_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint16_t, uint8_t));
void register_external_HCISocketProxyImpl_send_SMP_SMPKeypressNotification_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint16_t, uint8_t));
void register_HCISocketProxyImpl_send_SMP_SMPEncryptionInformation_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint16_t, ble_random_number_t));
void register_external_HCISocketProxyImpl_send_SMP_SMPEncryptionInformation_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint16_t, ble_random_number_t));
void register_HCISocketProxyImpl_send_SMP_SMPMasterIdentification_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint16_t, uint16_t, ble_random_part_t));
void register_external_HCISocketProxyImpl_send_SMP_SMPMasterIdentification_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint16_t, uint16_t, ble_random_part_t));
void register_HCISocketProxyImpl_send_SMP_SMPIdentityInformation_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint16_t, ble_random_number_t));
void register_external_HCISocketProxyImpl_send_SMP_SMPIdentityInformation_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint16_t, ble_random_number_t));
void register_HCISocketProxyImpl_send_SMP_SMPIdentityAddressInformation_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint16_t, uint8_t, bdaddr_t));
void register_external_HCISocketProxyImpl_send_SMP_SMPIdentityAddressInformation_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint16_t, uint8_t, bdaddr_t));
void register_HCISocketProxyImpl_send_SMP_SMPSigningInformation_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint16_t, ble_random_number_t));
void register_external_HCISocketProxyImpl_send_SMP_SMPSigningInformation_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint16_t, ble_random_number_t));
void register_HCISocketProxyImpl_send_SMP_SMPSecurityRequest_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint16_t, uint8_t, uint8_t, uint8_t, uint8_t));
void register_external_HCISocketProxyImpl_send_SMP_SMPSecurityRequest_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint16_t, uint8_t, uint8_t, uint8_t, uint8_t));
void register_HCISocketProxyImpl_send_ATT_ATTFindInformationRequest_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint16_t, uint16_t, uint16_t));
void register_external_HCISocketProxyImpl_send_ATT_ATTFindInformationRequest_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint16_t, uint16_t, uint16_t));
void register_HCISocketProxyImpl_send_ATT_ATTFindInformationResponse_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint16_t, uint8_t, ble_gatt_data_t));
void register_external_HCISocketProxyImpl_send_ATT_ATTFindInformationResponse_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint16_t, uint8_t, ble_gatt_data_t));
void register_HCISocketProxyImpl_send_ATT_ATTFindInformationError_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint16_t, uint16_t, uint8_t));
void register_external_HCISocketProxyImpl_send_ATT_ATTFindInformationError_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint16_t, uint16_t, uint8_t));
void register_HCISocketProxyImpl_send_ATT_ATTReadByTypeRequest_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint16_t, uint16_t, uint16_t, ble_uuid_t));
void register_external_HCISocketProxyImpl_send_ATT_ATTReadByTypeRequest_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint16_t, uint16_t, uint16_t, ble_uuid_t));
void register_HCISocketProxyImpl_send_ATT_ATTReadByTypeResponse_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint16_t, uint8_t, ble_gatt_data_t));
void register_external_HCISocketProxyImpl_send_ATT_ATTReadByTypeResponse_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint16_t, uint8_t, ble_gatt_data_t));
void register_HCISocketProxyImpl_send_ATT_ATTReadByTypeError_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint16_t, uint16_t, uint8_t));
void register_external_HCISocketProxyImpl_send_ATT_ATTReadByTypeError_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint16_t, uint16_t, uint8_t));
void register_HCISocketProxyImpl_send_ATT_ATTReadRequest_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint16_t, uint16_t));
void register_external_HCISocketProxyImpl_send_ATT_ATTReadRequest_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint16_t, uint16_t));
void register_HCISocketProxyImpl_send_ATT_ATTReadResponse_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint16_t, ble_gatt_data_t));
void register_external_HCISocketProxyImpl_send_ATT_ATTReadResponse_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint16_t, ble_gatt_data_t));
void register_HCISocketProxyImpl_send_ATT_ATTReadError_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint16_t, uint16_t, uint8_t));
void register_external_HCISocketProxyImpl_send_ATT_ATTReadError_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint16_t, uint16_t, uint8_t));
void register_HCISocketProxyImpl_send_ATT_ATTReadByGroupTypeRequest_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint16_t, uint16_t, uint16_t, ble_uuid_t));
void register_external_HCISocketProxyImpl_send_ATT_ATTReadByGroupTypeRequest_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint16_t, uint16_t, uint16_t, ble_uuid_t));
void register_HCISocketProxyImpl_send_ATT_ATTReadByGroupTypeResponse_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint16_t, uint8_t, ble_gatt_data_t));
void register_external_HCISocketProxyImpl_send_ATT_ATTReadByGroupTypeResponse_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint16_t, uint8_t, ble_gatt_data_t));
void register_HCISocketProxyImpl_send_ATT_ATTReadByGroupTypeError_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint16_t, uint16_t, uint8_t));
void register_external_HCISocketProxyImpl_send_ATT_ATTReadByGroupTypeError_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint16_t, uint16_t, uint8_t));
void register_HCISocketProxyImpl_send_ATT_ATTWriteRequest_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t));
void register_external_HCISocketProxyImpl_send_ATT_ATTWriteRequest_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t));
void register_HCISocketProxyImpl_send_ATT_ATTWriteResponse_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint16_t));
void register_external_HCISocketProxyImpl_send_ATT_ATTWriteResponse_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint16_t));
void register_HCISocketProxyImpl_send_ATT_ATTWriteError_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint16_t, uint16_t, uint8_t));
void register_external_HCISocketProxyImpl_send_ATT_ATTWriteError_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint16_t, uint16_t, uint8_t));
void register_HCISocketProxyImpl_send_ATT_ATTWriteCommand_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t));
void register_external_HCISocketProxyImpl_send_ATT_ATTWriteCommand_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t));
void register_HCISocketProxyImpl_send_ATT_ATTHandleValueNotification_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t));
void register_external_HCISocketProxyImpl_send_ATT_ATTHandleValueNotification_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t));
void register_HCISocketProxyImpl_send_ATT_ATTHandleValueIndication_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t));
void register_external_HCISocketProxyImpl_send_ATT_ATTHandleValueIndication_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t));
void register_HCISocketProxyImpl_send_ATT_ATTHandleValueConfirmation_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint16_t));
void register_external_HCISocketProxyImpl_send_ATT_ATTHandleValueConfirmation_listener(void (*_listener)(struct HCISocketProxyImpl_Instance *, uint16_t));

// Definition of the states:
#define HCISOCKETPROXY_SOCKET_STATE 0
#define HCISOCKETPROXY_SOCKET_CLOSED_STATE 1
#define HCISOCKETPROXY_SOCKET_OPENING_STATE 2
#define HCISOCKETPROXY_SOCKET_OPEN_STATE 3



#ifdef __cplusplus
}
#endif

#endif //HCISocketProxyImpl_H_
