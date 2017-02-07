/*****************************************************
 *      THIS IS A GENERATED FILE. DO NOT EDIT.
 *      Implementation for Application BLE_PAIR
 *  Generated from ThingML (http://www.thingml.org)
 *****************************************************/

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <math.h>
#include <signal.h>
#include <pthread.h>
#include "thingml_typedefs.h"
#include "runtime.h"
#include "ExitHandler.h"
#include "Main.h"
#include "BLEInitialiserImpl.h"
#include "BLEEncryptionImpl.h"
#include "BLEConnecterImpl.h"
#include "HCISocketProxyImpl.h"





/*****************************************************************************
 * Definitions for configuration : BLE_PAIR
 *****************************************************************************/

//Declaration of instance variables
//Instance encrypter
// Variables for the properties of the instance
struct BLEEncryptionImpl_Instance encrypter_var;
// Variables for fifo of the instance
byte encrypter_fifo_array[65535];
//Instance hci
// Variables for the properties of the instance
struct HCISocketProxyImpl_Instance hci_var;
// Variables for fifo of the instance
byte hci_fifo_array[65535];
//Instance main
// Variables for the properties of the instance
struct Main_Instance main_var;
// Variables for fifo of the instance
byte main_fifo_array[65535];
//Instance initialiser
// Variables for the properties of the instance
struct BLEInitialiserImpl_Instance initialiser_var;
// Variables for fifo of the instance
byte initialiser_fifo_array[65535];
//Instance connecter
// Variables for the properties of the instance
struct BLEConnecterImpl_Instance connecter_var;
// Variables for fifo of the instance
byte connecter_fifo_array[65535];
//Instance handler
// Variables for the properties of the instance
struct ExitHandler_Instance handler_var;
// Variables for fifo of the instance
byte handler_fifo_array[65535];




//Dispatcher for messages
void dispatch_ATTHandleValueIndication(uint16_t sender, uint16_t ConnectionHandle, uint16_t AttributeHandle, ble_gatt_data_t AttributeValue) {
if (sender == hci_var.id_ATT) {

}
if (sender == main_var.id_ATT) {
enqueue_HCISocketProxyImpl_ATT_ATTHandleValueIndication(&hci_var, ConnectionHandle, AttributeHandle, AttributeValue);

}

}


//Dispatcher for messages
void dispatch_SetLEAdvertisingDataCompleted(uint16_t sender, uint8_t NumberAllowedCommandPackets, uint8_t Status) {
if (sender == hci_var.id_Events) {

}

}


//Dispatcher for messages
void dispatch_SetLEScanEnableCompleted(uint16_t sender, uint8_t NumberAllowedCommandPackets, uint8_t Status) {
if (sender == hci_var.id_Events) {
enqueue_Main_HCIEvents_SetLEScanEnableCompleted(&main_var, NumberAllowedCommandPackets, Status);

}

}


//Dispatcher for messages
void dispatch_ConnectTo(uint16_t sender, uint8_t AddressType, bdaddr_t Address) {
if (sender == main_var.id_Connecter) {
enqueue_BLEConnecterImpl_Connecter_ConnectTo(&connecter_var, AddressType, Address);

}

}


//Dispatcher for messages
void dispatch_SMPIdentityInformation(uint16_t sender, uint16_t Handle, ble_random_number_t IdentityResolvingKey) {
if (sender == main_var.id_SMP) {
enqueue_HCISocketProxyImpl_SMP_SMPIdentityInformation(&hci_var, Handle, IdentityResolvingKey);

}
if (sender == hci_var.id_SMP) {
enqueue_Main_SMP_SMPIdentityInformation(&main_var, Handle, IdentityResolvingKey);

}

}


//Dispatcher for messages
void dispatch_GenerateConfirm(uint16_t sender, ble_random_number_t Rand, uint8_t IAT, bdaddr_t IA, uint8_t RAT, bdaddr_t RA) {
if (sender == main_var.id_Encrypter) {
enqueue_BLEEncryptionImpl_Encrypter_GenerateConfirm(&encrypter_var, Rand, IAT, IA, RAT, RA);

}

}


//Dispatcher for messages
void dispatch_Interrupt(uint16_t sender) {
if (sender == handler_var.id_Signals) {
enqueue_Main_Signals_Interrupt(&main_var);

}

}


//Dispatcher for messages
void dispatch_SetLocalName(uint16_t sender, change_local_name_cp Name) {
if (sender == initialiser_var.id_HCICommands) {

}
if (sender == encrypter_var.id_HCICommands) {

}
if (sender == main_var.id_HCICommands) {

}
if (sender == connecter_var.id_HCICommands) {

}

}


//Dispatcher for messages
void dispatch_SetLEScanResponseData(uint16_t sender, uint8_t Length, ble_adv_data_t Data) {
if (sender == connecter_var.id_HCICommands) {
enqueue_HCISocketProxyImpl_Commands_SetLEScanResponseData(&hci_var, Length, Data);

}
if (sender == main_var.id_HCICommands) {
enqueue_HCISocketProxyImpl_Commands_SetLEScanResponseData(&hci_var, Length, Data);

}
if (sender == initialiser_var.id_HCICommands) {
enqueue_HCISocketProxyImpl_Commands_SetLEScanResponseData(&hci_var, Length, Data);

}
if (sender == encrypter_var.id_HCICommands) {
enqueue_HCISocketProxyImpl_Commands_SetLEScanResponseData(&hci_var, Length, Data);

}

}


//Dispatcher for messages
void dispatch_SetLEAdvertiseEnable(uint16_t sender, uint8_t Enable) {
if (sender == main_var.id_HCICommands) {
enqueue_HCISocketProxyImpl_Commands_SetLEAdvertiseEnable(&hci_var, Enable);

}
if (sender == encrypter_var.id_HCICommands) {
enqueue_HCISocketProxyImpl_Commands_SetLEAdvertiseEnable(&hci_var, Enable);

}
if (sender == connecter_var.id_HCICommands) {
enqueue_HCISocketProxyImpl_Commands_SetLEAdvertiseEnable(&hci_var, Enable);

}
if (sender == initialiser_var.id_HCICommands) {
enqueue_HCISocketProxyImpl_Commands_SetLEAdvertiseEnable(&hci_var, Enable);

}

}


//Dispatcher for messages
void dispatch_LEConnectionComplete(uint16_t sender, uint8_t Status, uint16_t ConnectionHandle, uint8_t Role, uint8_t PeerAddressType, bdaddr_t PeerAddress, uint16_t ConnInterval, uint16_t ConnLatency, uint16_t SupervisionTimeout, uint8_t MasterClockAccuracy) {
if (sender == hci_var.id_Events) {
enqueue_BLEConnecterImpl_HCIEvents_LEConnectionComplete(&connecter_var, Status, ConnectionHandle, Role, PeerAddressType, PeerAddress, ConnInterval, ConnLatency, SupervisionTimeout, MasterClockAccuracy);

}

}


//Dispatcher for messages
void dispatch_GenerateConfirmCompleted(uint16_t sender, ble_random_number_t Confirm) {
if (sender == encrypter_var.id_Encrypter) {
enqueue_Main_Encrypter_GenerateConfirmCompleted(&main_var, Confirm);

}

}


//Dispatcher for messages
void dispatch_Connect(uint16_t sender) {
if (sender == main_var.id_Connecter) {
enqueue_BLEConnecterImpl_Connecter_Connect(&connecter_var);

}

}


//Dispatcher for messages
void dispatch_CheckConfirm(uint16_t sender, ble_random_number_t Received, ble_random_number_t Calculated) {
if (sender == main_var.id_Encrypter) {
enqueue_BLEEncryptionImpl_Encrypter_CheckConfirm(&encrypter_var, Received, Calculated);

}

}


//Dispatcher for messages
void dispatch_Connected(uint16_t sender, uint16_t Handle, uint8_t AddressType, bdaddr_t Address) {
if (sender == connecter_var.id_Connecter) {
enqueue_Main_Connecter_Connected(&main_var, Handle, AddressType, Address);

}

}


//Dispatcher for messages
void dispatch_Started(uint16_t sender) {
if (sender == encrypter_var.id_Encrypter) {

}
if (sender == initialiser_var.id_Initialiser) {

}

}


//Dispatcher for messages
void dispatch_Open(uint16_t sender) {
if (sender == initialiser_var.id_Socket) {
enqueue_HCISocketProxyImpl_Socket_Open(&hci_var);

}
if (sender == connecter_var.id_Socket) {
enqueue_HCISocketProxyImpl_Socket_Open(&hci_var);

}
if (sender == main_var.id_Socket) {
enqueue_HCISocketProxyImpl_Socket_Open(&hci_var);

}
if (sender == encrypter_var.id_Socket) {
enqueue_HCISocketProxyImpl_Socket_Open(&hci_var);

}

}


//Dispatcher for messages
void dispatch_ATTReadError(uint16_t sender, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error) {
if (sender == main_var.id_ATT) {
enqueue_HCISocketProxyImpl_ATT_ATTReadError(&hci_var, ConnectionHandle, AttributeHandle, Error);

}
if (sender == hci_var.id_ATT) {

}

}


//Dispatcher for messages
void dispatch_LEAdvertisementReport(uint16_t sender, uint8_t Type, uint8_t AddressType, bdaddr_t Address, uint8_t Length, ble_adv_data_t Data) {
if (sender == hci_var.id_Events) {
enqueue_Main_HCIEvents_LEAdvertisementReport(&main_var, Type, AddressType, Address, Length, Data);

}

}


//Dispatcher for messages
void dispatch_LEEncryptCompleted(uint16_t sender, uint8_t NumberAllowedCommandPackets, uint8_t Status, ble_random_number_t Encrypted) {
if (sender == hci_var.id_Events) {
enqueue_BLEEncryptionImpl_HCIEvents_LEEncryptCompleted(&encrypter_var, NumberAllowedCommandPackets, Status, Encrypted);

}

}


//Dispatcher for messages
void dispatch_GenerateSTKCompleted(uint16_t sender, ble_random_number_t STK) {
if (sender == encrypter_var.id_Encrypter) {
enqueue_Main_Encrypter_GenerateSTKCompleted(&main_var, STK);

}

}


//Dispatcher for messages
void dispatch_SetLEAdvertiseEnableCompleted(uint16_t sender, uint8_t NumberAllowedCommandPackets, uint8_t Status) {
if (sender == hci_var.id_Events) {

}

}


//Dispatcher for messages
void dispatch_Failure(uint16_t sender) {
if (sender == connecter_var.id_Connecter) {
enqueue_Main_Connecter_Failure(&main_var);

}
if (sender == initialiser_var.id_Initialiser) {
enqueue_Main_Initialiser_Failure(&main_var);

}
if (sender == encrypter_var.id_Encrypter) {

}

}


//Dispatcher for messages
void dispatch_GenerateRandomNumber(uint16_t sender) {
if (sender == main_var.id_Encrypter) {
enqueue_BLEEncryptionImpl_Encrypter_GenerateRandomNumber(&encrypter_var);

}

}


//Dispatcher for messages
void dispatch_EncryptionChanged(uint16_t sender, uint8_t Status, uint16_t ConnectionHandle, uint8_t Enabled) {
if (sender == hci_var.id_Events) {
enqueue_Main_HCIEvents_EncryptionChanged(&main_var, Status, ConnectionHandle, Enabled);

}

}


//Dispatcher for messages
void dispatch_ATTWriteCommand(uint16_t sender, uint16_t ConnectionHandle, uint16_t AttributeHandle, ble_gatt_data_t AttributeValue) {
if (sender == main_var.id_ATT) {
enqueue_HCISocketProxyImpl_ATT_ATTWriteCommand(&hci_var, ConnectionHandle, AttributeHandle, AttributeValue);

}
if (sender == hci_var.id_ATT) {

}

}


//Dispatcher for messages
void dispatch_SMPPairingFailed(uint16_t sender, uint16_t Handle, uint8_t Reason) {
if (sender == main_var.id_SMP) {
enqueue_HCISocketProxyImpl_SMP_SMPPairingFailed(&hci_var, Handle, Reason);

}
if (sender == hci_var.id_SMP) {
enqueue_Main_SMP_SMPPairingFailed(&main_var, Handle, Reason);

}

}


//Dispatcher for messages
void dispatch_LECreateConnectionCancelCompleted(uint16_t sender, uint8_t NumberAllowedCommandPackets, uint8_t Status) {
if (sender == hci_var.id_Events) {
enqueue_BLEConnecterImpl_HCIEvents_LECreateConnectionCancelCompleted(&connecter_var, NumberAllowedCommandPackets, Status);

}

}


//Dispatcher for messages
void dispatch_ATTReadRequest(uint16_t sender, uint16_t ConnectionHandle, uint16_t AttributeHandle) {
if (sender == main_var.id_ATT) {
enqueue_HCISocketProxyImpl_ATT_ATTReadRequest(&hci_var, ConnectionHandle, AttributeHandle);

}
if (sender == hci_var.id_ATT) {

}

}


//Dispatcher for messages
void dispatch_DeviceInitialised(uint16_t sender, bdaddr_t Address) {
if (sender == initialiser_var.id_Initialiser) {
enqueue_Main_Initialiser_DeviceInitialised(&main_var, Address);

}

}


//Dispatcher for messages
void dispatch_Start(uint16_t sender) {
if (sender == main_var.id_Encrypter) {
enqueue_BLEEncryptionImpl_Encrypter_Start(&encrypter_var);

}
if (sender == main_var.id_Initialiser) {
enqueue_BLEInitialiserImpl_Initialiser_Start(&initialiser_var);

}

}


//Dispatcher for messages
void dispatch_LECreateConnectionCancel(uint16_t sender) {
if (sender == encrypter_var.id_HCICommands) {
enqueue_HCISocketProxyImpl_Commands_LECreateConnectionCancel(&hci_var);

}
if (sender == main_var.id_HCICommands) {
enqueue_HCISocketProxyImpl_Commands_LECreateConnectionCancel(&hci_var);

}
if (sender == connecter_var.id_HCICommands) {
enqueue_HCISocketProxyImpl_Commands_LECreateConnectionCancel(&hci_var);

}
if (sender == initialiser_var.id_HCICommands) {
enqueue_HCISocketProxyImpl_Commands_LECreateConnectionCancel(&hci_var);

}

}


//Dispatcher for messages
void dispatch_LERandCompleted(uint16_t sender, uint8_t NumberAllowedCommandPackets, uint8_t Status, ble_random_part_t Random) {
if (sender == hci_var.id_Events) {
enqueue_BLEEncryptionImpl_HCIEvents_LERandCompleted(&encrypter_var, NumberAllowedCommandPackets, Status, Random);

}

}


//Dispatcher for messages
void dispatch_ATTWriteResponse(uint16_t sender, uint16_t ConnectionHandle) {
if (sender == hci_var.id_ATT) {
enqueue_Main_ATT_ATTWriteResponse(&main_var, ConnectionHandle);

}
if (sender == main_var.id_ATT) {
enqueue_HCISocketProxyImpl_ATT_ATTWriteResponse(&hci_var, ConnectionHandle);

}

}


//Dispatcher for messages
void dispatch_CheckConfirmCompleted(uint16_t sender, uint8_t Correct) {
if (sender == encrypter_var.id_Encrypter) {
enqueue_Main_Encrypter_CheckConfirmCompleted(&main_var, Correct);

}

}


//Dispatcher for messages
void dispatch_SetLEScanResponseDataCompleted(uint16_t sender, uint8_t NumberAllowedCommandPackets, uint8_t Status) {
if (sender == hci_var.id_Events) {

}

}


//Dispatcher for messages
void dispatch_SMPPairingPublicKey(uint16_t sender, uint16_t Handle, smp_public_key_t KeyX, smp_public_key_t KeyY) {
if (sender == main_var.id_SMP) {
enqueue_HCISocketProxyImpl_SMP_SMPPairingPublicKey(&hci_var, Handle, KeyX, KeyY);

}
if (sender == hci_var.id_SMP) {

}

}


//Dispatcher for messages
void dispatch_LECreateConnection(uint16_t sender, uint16_t Interval, uint16_t Window, uint8_t FilterPolicy, uint8_t PeerAddressType, bdaddr_t PeerAddress, uint8_t OwnAddressType, uint16_t ConnIntervalMin, uint16_t ConnIntervalMax, uint16_t ConnLatency, uint16_t SupervisionTimeout, uint16_t CELengthMin, uint16_t CELengthMax) {
if (sender == connecter_var.id_HCICommands) {
enqueue_HCISocketProxyImpl_Commands_LECreateConnection(&hci_var, Interval, Window, FilterPolicy, PeerAddressType, PeerAddress, OwnAddressType, ConnIntervalMin, ConnIntervalMax, ConnLatency, SupervisionTimeout, CELengthMin, CELengthMax);

}
if (sender == encrypter_var.id_HCICommands) {
enqueue_HCISocketProxyImpl_Commands_LECreateConnection(&hci_var, Interval, Window, FilterPolicy, PeerAddressType, PeerAddress, OwnAddressType, ConnIntervalMin, ConnIntervalMax, ConnLatency, SupervisionTimeout, CELengthMin, CELengthMax);

}
if (sender == initialiser_var.id_HCICommands) {
enqueue_HCISocketProxyImpl_Commands_LECreateConnection(&hci_var, Interval, Window, FilterPolicy, PeerAddressType, PeerAddress, OwnAddressType, ConnIntervalMin, ConnIntervalMax, ConnLatency, SupervisionTimeout, CELengthMin, CELengthMax);

}
if (sender == main_var.id_HCICommands) {
enqueue_HCISocketProxyImpl_Commands_LECreateConnection(&hci_var, Interval, Window, FilterPolicy, PeerAddressType, PeerAddress, OwnAddressType, ConnIntervalMin, ConnIntervalMax, ConnLatency, SupervisionTimeout, CELengthMin, CELengthMax);

}

}


//Dispatcher for messages
void dispatch_SetLEScanParameters(uint16_t sender, uint8_t Type, uint16_t Interval, uint16_t Window, uint8_t OwnAddressType, uint8_t FilterPolicy) {
if (sender == connecter_var.id_HCICommands) {
enqueue_HCISocketProxyImpl_Commands_SetLEScanParameters(&hci_var, Type, Interval, Window, OwnAddressType, FilterPolicy);

}
if (sender == encrypter_var.id_HCICommands) {
enqueue_HCISocketProxyImpl_Commands_SetLEScanParameters(&hci_var, Type, Interval, Window, OwnAddressType, FilterPolicy);

}
if (sender == main_var.id_HCICommands) {
enqueue_HCISocketProxyImpl_Commands_SetLEScanParameters(&hci_var, Type, Interval, Window, OwnAddressType, FilterPolicy);

}
if (sender == initialiser_var.id_HCICommands) {
enqueue_HCISocketProxyImpl_Commands_SetLEScanParameters(&hci_var, Type, Interval, Window, OwnAddressType, FilterPolicy);

}

}


//Dispatcher for messages
void dispatch_LEStartEncryptionStatus(uint16_t sender, uint8_t NumberAllowedCommandPackets, uint8_t Status) {
if (sender == hci_var.id_Events) {
enqueue_Main_HCIEvents_LEStartEncryptionStatus(&main_var, NumberAllowedCommandPackets, Status);

}

}


//Dispatcher for messages
void dispatch_SMPSecurityRequest(uint16_t sender, uint16_t Handle, uint8_t Bonding, uint8_t MITM, uint8_t SecureConnection, uint8_t Keypress) {
if (sender == hci_var.id_SMP) {
enqueue_Main_SMP_SMPSecurityRequest(&main_var, Handle, Bonding, MITM, SecureConnection, Keypress);

}
if (sender == main_var.id_SMP) {
enqueue_HCISocketProxyImpl_SMP_SMPSecurityRequest(&hci_var, Handle, Bonding, MITM, SecureConnection, Keypress);

}

}


//Dispatcher for messages
void dispatch_ATTReadByTypeError(uint16_t sender, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error) {
if (sender == hci_var.id_ATT) {

}
if (sender == main_var.id_ATT) {
enqueue_HCISocketProxyImpl_ATT_ATTReadByTypeError(&hci_var, ConnectionHandle, AttributeHandle, Error);

}

}


//Dispatcher for messages
void dispatch_LEStartEncryption(uint16_t sender, uint16_t ConnectionHandle, ble_random_part_t Random, uint16_t EDIV, ble_random_number_t LTK) {
if (sender == encrypter_var.id_HCICommands) {
enqueue_HCISocketProxyImpl_Commands_LEStartEncryption(&hci_var, ConnectionHandle, Random, EDIV, LTK);

}
if (sender == initialiser_var.id_HCICommands) {
enqueue_HCISocketProxyImpl_Commands_LEStartEncryption(&hci_var, ConnectionHandle, Random, EDIV, LTK);

}
if (sender == connecter_var.id_HCICommands) {
enqueue_HCISocketProxyImpl_Commands_LEStartEncryption(&hci_var, ConnectionHandle, Random, EDIV, LTK);

}
if (sender == main_var.id_HCICommands) {
enqueue_HCISocketProxyImpl_Commands_LEStartEncryption(&hci_var, ConnectionHandle, Random, EDIV, LTK);

}

}


//Dispatcher for messages
void dispatch_ATTHandleValueNotification(uint16_t sender, uint16_t ConnectionHandle, uint16_t AttributeHandle, ble_gatt_data_t AttributeValue) {
if (sender == main_var.id_ATT) {
enqueue_HCISocketProxyImpl_ATT_ATTHandleValueNotification(&hci_var, ConnectionHandle, AttributeHandle, AttributeValue);

}
if (sender == hci_var.id_ATT) {

}

}


//Dispatcher for messages
void dispatch_ATTFindInformationError(uint16_t sender, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error) {
if (sender == hci_var.id_ATT) {

}
if (sender == main_var.id_ATT) {
enqueue_HCISocketProxyImpl_ATT_ATTFindInformationError(&hci_var, ConnectionHandle, AttributeHandle, Error);

}

}


//Dispatcher for messages
void dispatch_ATTWriteError(uint16_t sender, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error) {
if (sender == hci_var.id_ATT) {
enqueue_Main_ATT_ATTWriteError(&main_var, ConnectionHandle, AttributeHandle, Error);

}
if (sender == main_var.id_ATT) {
enqueue_HCISocketProxyImpl_ATT_ATTWriteError(&hci_var, ConnectionHandle, AttributeHandle, Error);

}

}


//Dispatcher for messages
void dispatch_ResetCompleted(uint16_t sender, uint8_t NumberAllowedCommandPackets, uint8_t Status) {
if (sender == hci_var.id_Events) {
enqueue_BLEInitialiserImpl_HCIEvents_ResetCompleted(&initialiser_var, NumberAllowedCommandPackets, Status);

}

}


//Dispatcher for messages
void dispatch_SMPSigningInformation(uint16_t sender, uint16_t Handle, ble_random_number_t SignatureKey) {
if (sender == main_var.id_SMP) {
enqueue_HCISocketProxyImpl_SMP_SMPSigningInformation(&hci_var, Handle, SignatureKey);

}
if (sender == hci_var.id_SMP) {

}

}


//Dispatcher for messages
void dispatch_ATTHandleValueConfirmation(uint16_t sender, uint16_t ConnectionHandle) {
if (sender == main_var.id_ATT) {
enqueue_HCISocketProxyImpl_ATT_ATTHandleValueConfirmation(&hci_var, ConnectionHandle);

}
if (sender == hci_var.id_ATT) {

}

}


//Dispatcher for messages
void dispatch_Opened(uint16_t sender, bdaddr_t Address) {
if (sender == hci_var.id_Socket) {
enqueue_BLEEncryptionImpl_Socket_Opened(&encrypter_var, Address);
enqueue_BLEInitialiserImpl_Socket_Opened(&initialiser_var, Address);

}

}


//Dispatcher for messages
void dispatch_SMPPairingResponse(uint16_t sender, uint16_t Handle, uint8_t IOCapability, uint8_t OOBDataPresent, uint8_t Bonding, uint8_t MITM, uint8_t SecureConnection, uint8_t Keypress, uint8_t MaximumEncryptionKeySize, uint8_t InitiatorKeyDistribution, uint8_t ResponderKeyDistribution) {
if (sender == main_var.id_SMP) {
enqueue_HCISocketProxyImpl_SMP_SMPPairingResponse(&hci_var, Handle, IOCapability, OOBDataPresent, Bonding, MITM, SecureConnection, Keypress, MaximumEncryptionKeySize, InitiatorKeyDistribution, ResponderKeyDistribution);

}
if (sender == hci_var.id_SMP) {
enqueue_Main_SMP_SMPPairingResponse(&main_var, Handle, IOCapability, OOBDataPresent, Bonding, MITM, SecureConnection, Keypress, MaximumEncryptionKeySize, InitiatorKeyDistribution, ResponderKeyDistribution);

}

}


//Dispatcher for messages
void dispatch_SetLEEventMask(uint16_t sender, set_event_mask_cp Mask) {
if (sender == encrypter_var.id_HCICommands) {
enqueue_HCISocketProxyImpl_Commands_SetLEEventMask(&hci_var, Mask);

}
if (sender == main_var.id_HCICommands) {
enqueue_HCISocketProxyImpl_Commands_SetLEEventMask(&hci_var, Mask);

}
if (sender == connecter_var.id_HCICommands) {
enqueue_HCISocketProxyImpl_Commands_SetLEEventMask(&hci_var, Mask);

}
if (sender == initialiser_var.id_HCICommands) {
enqueue_HCISocketProxyImpl_Commands_SetLEEventMask(&hci_var, Mask);

}

}


//Dispatcher for messages
void dispatch_SetLEScanParametersCompleted(uint16_t sender, uint8_t NumberAllowedCommandPackets, uint8_t Status) {
if (sender == hci_var.id_Events) {
enqueue_Main_HCIEvents_SetLEScanParametersCompleted(&main_var, NumberAllowedCommandPackets, Status);

}

}


//Dispatcher for messages
void dispatch_SetLocalNameCompleted(uint16_t sender, uint8_t NumberAllowedCommandPackets, uint8_t Status) {
if (sender == hci_var.id_Events) {

}

}


//Dispatcher for messages
void dispatch_GenerateSTK(uint16_t sender, ble_random_number_t Srand, ble_random_number_t Mrand) {
if (sender == main_var.id_Encrypter) {
enqueue_BLEEncryptionImpl_Encrypter_GenerateSTK(&encrypter_var, Srand, Mrand);

}

}


//Dispatcher for messages
void dispatch_SMPIdentityAddressInformation(uint16_t sender, uint16_t Handle, uint8_t AddressType, bdaddr_t Address) {
if (sender == hci_var.id_SMP) {
enqueue_Main_SMP_SMPIdentityAddressInformation(&main_var, Handle, AddressType, Address);

}
if (sender == main_var.id_SMP) {
enqueue_HCISocketProxyImpl_SMP_SMPIdentityAddressInformation(&hci_var, Handle, AddressType, Address);

}

}


//Dispatcher for messages
void dispatch_ATTReadByGroupTypeRequest(uint16_t sender, uint16_t ConnectionHandle, uint16_t StartingHandle, uint16_t EndingHandle, ble_uuid_t AttributeGroupType) {
if (sender == main_var.id_ATT) {
enqueue_HCISocketProxyImpl_ATT_ATTReadByGroupTypeRequest(&hci_var, ConnectionHandle, StartingHandle, EndingHandle, AttributeGroupType);

}
if (sender == hci_var.id_ATT) {

}

}


//Dispatcher for messages
void dispatch_DisconnectionCompleted(uint16_t sender, uint8_t Status, uint16_t ConnectionHandle, uint8_t Reason) {
if (sender == hci_var.id_Events) {
enqueue_BLEConnecterImpl_HCIEvents_DisconnectionCompleted(&connecter_var, Status, ConnectionHandle, Reason);

}

}


//Dispatcher for messages
void dispatch_LEEnhancedConnectionComplete(uint16_t sender, uint8_t Status, uint16_t ConnectionHandle, uint8_t Role, uint8_t PeerAddressType, bdaddr_t PeerAddress, bdaddr_t LocalResolvablePrivateAddress, bdaddr_t PeerResolvablePrivateAddress, uint16_t ConnInterval, uint16_t ConnLatency, uint16_t SupervisionTimeout, uint8_t MasterClockAccuracy) {
if (sender == hci_var.id_Events) {
enqueue_BLEConnecterImpl_HCIEvents_LEEnhancedConnectionComplete(&connecter_var, Status, ConnectionHandle, Role, PeerAddressType, PeerAddress, LocalResolvablePrivateAddress, PeerResolvablePrivateAddress, ConnInterval, ConnLatency, SupervisionTimeout, MasterClockAccuracy);

}

}


//Dispatcher for messages
void dispatch_Close(uint16_t sender) {
if (sender == connecter_var.id_Socket) {
enqueue_HCISocketProxyImpl_Socket_Close(&hci_var);

}
if (sender == initialiser_var.id_Socket) {
enqueue_HCISocketProxyImpl_Socket_Close(&hci_var);

}
if (sender == main_var.id_Socket) {
enqueue_HCISocketProxyImpl_Socket_Close(&hci_var);

}
if (sender == encrypter_var.id_Socket) {
enqueue_HCISocketProxyImpl_Socket_Close(&hci_var);

}

}


//Dispatcher for messages
void dispatch_Disconnect(uint16_t sender, uint16_t ConnectionHandle, uint8_t Reason) {
if (sender == connecter_var.id_HCICommands) {
enqueue_HCISocketProxyImpl_Commands_Disconnect(&hci_var, ConnectionHandle, Reason);

}
if (sender == initialiser_var.id_HCICommands) {
enqueue_HCISocketProxyImpl_Commands_Disconnect(&hci_var, ConnectionHandle, Reason);

}
if (sender == encrypter_var.id_HCICommands) {
enqueue_HCISocketProxyImpl_Commands_Disconnect(&hci_var, ConnectionHandle, Reason);

}
if (sender == main_var.id_HCICommands) {
enqueue_HCISocketProxyImpl_Commands_Disconnect(&hci_var, ConnectionHandle, Reason);

}

}


//Dispatcher for messages
void dispatch_SMPPairingRequest(uint16_t sender, uint16_t Handle, uint8_t IOCapability, uint8_t OOBDataPresent, uint8_t Bonding, uint8_t MITM, uint8_t SecureConnection, uint8_t Keypress, uint8_t MaximumEncryptionKeySize, uint8_t InitiatorKeyDistribution, uint8_t ResponderKeyDistribution) {
if (sender == hci_var.id_SMP) {

}
if (sender == main_var.id_SMP) {
enqueue_HCISocketProxyImpl_SMP_SMPPairingRequest(&hci_var, Handle, IOCapability, OOBDataPresent, Bonding, MITM, SecureConnection, Keypress, MaximumEncryptionKeySize, InitiatorKeyDistribution, ResponderKeyDistribution);

}

}


//Dispatcher for messages
void dispatch_ATTFindInformationRequest(uint16_t sender, uint16_t ConnectionHandle, uint16_t StartingHandle, uint16_t EndingHandle) {
if (sender == hci_var.id_ATT) {

}
if (sender == main_var.id_ATT) {
enqueue_HCISocketProxyImpl_ATT_ATTFindInformationRequest(&hci_var, ConnectionHandle, StartingHandle, EndingHandle);

}

}


//Dispatcher for messages
void dispatch_SMPKeypressNotification(uint16_t sender, uint16_t Handle, uint8_t Type) {
if (sender == main_var.id_SMP) {
enqueue_HCISocketProxyImpl_SMP_SMPKeypressNotification(&hci_var, Handle, Type);

}
if (sender == hci_var.id_SMP) {

}

}


//Dispatcher for messages
void dispatch_Closed(uint16_t sender) {
if (sender == hci_var.id_Socket) {
enqueue_BLEEncryptionImpl_Socket_Closed(&encrypter_var);
enqueue_BLEConnecterImpl_Socket_Closed(&connecter_var);
enqueue_BLEInitialiserImpl_Socket_Closed(&initialiser_var);

}

}


//Dispatcher for messages
void dispatch_SetLEEventMaskCompleted(uint16_t sender, uint8_t NumberAllowedCommandPackets, uint8_t Status) {
if (sender == hci_var.id_Events) {
enqueue_BLEInitialiserImpl_HCIEvents_SetLEEventMaskCompleted(&initialiser_var, NumberAllowedCommandPackets, Status);

}

}


//Dispatcher for messages
void dispatch_SetLEAdvertisementParametersCompleted(uint16_t sender, uint8_t NumberAllowedCommandPackets, uint8_t Status) {
if (sender == hci_var.id_Events) {

}

}


//Dispatcher for messages
void dispatch_Reset(uint16_t sender) {
if (sender == encrypter_var.id_HCICommands) {
enqueue_HCISocketProxyImpl_Commands_Reset(&hci_var);

}
if (sender == initialiser_var.id_HCICommands) {
enqueue_HCISocketProxyImpl_Commands_Reset(&hci_var);

}
if (sender == connecter_var.id_HCICommands) {
enqueue_HCISocketProxyImpl_Commands_Reset(&hci_var);

}
if (sender == main_var.id_HCICommands) {
enqueue_HCISocketProxyImpl_Commands_Reset(&hci_var);

}

}


//Dispatcher for messages
void dispatch_ATTReadByTypeRequest(uint16_t sender, uint16_t ConnectionHandle, uint16_t StartingHandle, uint16_t EndingHandle, ble_uuid_t AttributeType) {
if (sender == hci_var.id_ATT) {

}
if (sender == main_var.id_ATT) {
enqueue_HCISocketProxyImpl_ATT_ATTReadByTypeRequest(&hci_var, ConnectionHandle, StartingHandle, EndingHandle, AttributeType);

}

}


//Dispatcher for messages
void dispatch_SMPEncryptionInformation(uint16_t sender, uint16_t Handle, ble_random_number_t LongTermKey) {
if (sender == hci_var.id_SMP) {
enqueue_Main_SMP_SMPEncryptionInformation(&main_var, Handle, LongTermKey);

}
if (sender == main_var.id_SMP) {
enqueue_HCISocketProxyImpl_SMP_SMPEncryptionInformation(&hci_var, Handle, LongTermKey);

}

}


//Dispatcher for messages
void dispatch_SMPPairingConfirm(uint16_t sender, uint16_t Handle, ble_random_number_t ConfirmValue) {
if (sender == main_var.id_SMP) {
enqueue_HCISocketProxyImpl_SMP_SMPPairingConfirm(&hci_var, Handle, ConfirmValue);

}
if (sender == hci_var.id_SMP) {
enqueue_Main_SMP_SMPPairingConfirm(&main_var, Handle, ConfirmValue);

}

}


//Dispatcher for messages
void dispatch_ATTReadResponse(uint16_t sender, uint16_t ConnectionHandle, ble_gatt_data_t AttributeValue) {
if (sender == hci_var.id_ATT) {

}
if (sender == main_var.id_ATT) {
enqueue_HCISocketProxyImpl_ATT_ATTReadResponse(&hci_var, ConnectionHandle, AttributeValue);

}

}


//Dispatcher for messages
void dispatch_ATTWriteRequest(uint16_t sender, uint16_t ConnectionHandle, uint16_t AttributeHandle, ble_gatt_data_t AttributeValue) {
if (sender == hci_var.id_ATT) {

}
if (sender == main_var.id_ATT) {
enqueue_HCISocketProxyImpl_ATT_ATTWriteRequest(&hci_var, ConnectionHandle, AttributeHandle, AttributeValue);

}

}


//Dispatcher for messages
void dispatch_DisconnectStatus(uint16_t sender, uint8_t NumberAllowedCommandPackets, uint8_t Status) {
if (sender == hci_var.id_Events) {
enqueue_BLEConnecterImpl_HCIEvents_DisconnectStatus(&connecter_var, NumberAllowedCommandPackets, Status);

}

}


//Dispatcher for messages
void dispatch_SetEventMask(uint16_t sender, set_event_mask_cp Mask) {
if (sender == initialiser_var.id_HCICommands) {
enqueue_HCISocketProxyImpl_Commands_SetEventMask(&hci_var, Mask);

}
if (sender == main_var.id_HCICommands) {
enqueue_HCISocketProxyImpl_Commands_SetEventMask(&hci_var, Mask);

}
if (sender == encrypter_var.id_HCICommands) {
enqueue_HCISocketProxyImpl_Commands_SetEventMask(&hci_var, Mask);

}
if (sender == connecter_var.id_HCICommands) {
enqueue_HCISocketProxyImpl_Commands_SetEventMask(&hci_var, Mask);

}

}


//Dispatcher for messages
void dispatch_Stop(uint16_t sender) {
if (sender == main_var.id_Initialiser) {
enqueue_BLEInitialiserImpl_Initialiser_Stop(&initialiser_var);

}
if (sender == main_var.id_Connecter) {
enqueue_BLEConnecterImpl_Connecter_Stop(&connecter_var);

}

}


//Dispatcher for messages
void dispatch_SetLEAdvertisementParameters(uint16_t sender, uint16_t MinInterval, uint16_t MaxInterval, uint8_t Type, uint8_t OwnAddressType, uint8_t PeerAddressType, bdaddr_t PeerAddress, uint8_t Channel, uint8_t FilterPolicy) {
if (sender == encrypter_var.id_HCICommands) {
enqueue_HCISocketProxyImpl_Commands_SetLEAdvertisementParameters(&hci_var, MinInterval, MaxInterval, Type, OwnAddressType, PeerAddressType, PeerAddress, Channel, FilterPolicy);

}
if (sender == initialiser_var.id_HCICommands) {
enqueue_HCISocketProxyImpl_Commands_SetLEAdvertisementParameters(&hci_var, MinInterval, MaxInterval, Type, OwnAddressType, PeerAddressType, PeerAddress, Channel, FilterPolicy);

}
if (sender == connecter_var.id_HCICommands) {
enqueue_HCISocketProxyImpl_Commands_SetLEAdvertisementParameters(&hci_var, MinInterval, MaxInterval, Type, OwnAddressType, PeerAddressType, PeerAddress, Channel, FilterPolicy);

}
if (sender == main_var.id_HCICommands) {
enqueue_HCISocketProxyImpl_Commands_SetLEAdvertisementParameters(&hci_var, MinInterval, MaxInterval, Type, OwnAddressType, PeerAddressType, PeerAddress, Channel, FilterPolicy);

}

}


//Dispatcher for messages
void dispatch_LECreateConnectionStatus(uint16_t sender, uint8_t NumberAllowedCommandPackets, uint8_t Status) {
if (sender == hci_var.id_Events) {
enqueue_BLEConnecterImpl_HCIEvents_LECreateConnectionStatus(&connecter_var, NumberAllowedCommandPackets, Status);

}

}


//Dispatcher for messages
void dispatch_Stopped(uint16_t sender) {
if (sender == initialiser_var.id_Initialiser) {
enqueue_Main_Initialiser_Stopped(&main_var);

}
if (sender == connecter_var.id_Connecter) {
enqueue_Main_Connecter_Stopped(&main_var);

}

}


//Dispatcher for messages
void dispatch_SMPPairingDHKeyCheck(uint16_t sender, uint16_t Handle, ble_random_number_t DHKeyCheck) {
if (sender == hci_var.id_SMP) {

}
if (sender == main_var.id_SMP) {
enqueue_HCISocketProxyImpl_SMP_SMPPairingDHKeyCheck(&hci_var, Handle, DHKeyCheck);

}

}


//Dispatcher for messages
void dispatch_ATTReadByGroupTypeError(uint16_t sender, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error) {
if (sender == hci_var.id_ATT) {

}
if (sender == main_var.id_ATT) {
enqueue_HCISocketProxyImpl_ATT_ATTReadByGroupTypeError(&hci_var, ConnectionHandle, AttributeHandle, Error);

}

}


//Dispatcher for messages
void dispatch_SetLEScanEnable(uint16_t sender, uint8_t Enable, uint8_t FilterDuplicates) {
if (sender == connecter_var.id_HCICommands) {
enqueue_HCISocketProxyImpl_Commands_SetLEScanEnable(&hci_var, Enable, FilterDuplicates);

}
if (sender == main_var.id_HCICommands) {
enqueue_HCISocketProxyImpl_Commands_SetLEScanEnable(&hci_var, Enable, FilterDuplicates);

}
if (sender == initialiser_var.id_HCICommands) {
enqueue_HCISocketProxyImpl_Commands_SetLEScanEnable(&hci_var, Enable, FilterDuplicates);

}
if (sender == encrypter_var.id_HCICommands) {
enqueue_HCISocketProxyImpl_Commands_SetLEScanEnable(&hci_var, Enable, FilterDuplicates);

}

}


//Dispatcher for messages
void dispatch_SetLEEventMaskAll(uint16_t sender) {
if (sender == encrypter_var.id_HCICommands) {
enqueue_HCISocketProxyImpl_Commands_SetLEEventMaskAll(&hci_var);

}
if (sender == main_var.id_HCICommands) {
enqueue_HCISocketProxyImpl_Commands_SetLEEventMaskAll(&hci_var);

}
if (sender == initialiser_var.id_HCICommands) {
enqueue_HCISocketProxyImpl_Commands_SetLEEventMaskAll(&hci_var);

}
if (sender == connecter_var.id_HCICommands) {
enqueue_HCISocketProxyImpl_Commands_SetLEEventMaskAll(&hci_var);

}

}


//Dispatcher for messages
void dispatch_LEEncrypt(uint16_t sender, ble_random_number_t Key, ble_random_number_t Plaintext) {
if (sender == encrypter_var.id_HCICommands) {
enqueue_HCISocketProxyImpl_Commands_LEEncrypt(&hci_var, Key, Plaintext);

}
if (sender == main_var.id_HCICommands) {
enqueue_HCISocketProxyImpl_Commands_LEEncrypt(&hci_var, Key, Plaintext);

}
if (sender == connecter_var.id_HCICommands) {
enqueue_HCISocketProxyImpl_Commands_LEEncrypt(&hci_var, Key, Plaintext);

}
if (sender == initialiser_var.id_HCICommands) {
enqueue_HCISocketProxyImpl_Commands_LEEncrypt(&hci_var, Key, Plaintext);

}

}


//Dispatcher for messages
void dispatch_SMPPairingRandom(uint16_t sender, uint16_t Handle, ble_random_number_t RandomValue) {
if (sender == hci_var.id_SMP) {
enqueue_Main_SMP_SMPPairingRandom(&main_var, Handle, RandomValue);

}
if (sender == main_var.id_SMP) {
enqueue_HCISocketProxyImpl_SMP_SMPPairingRandom(&hci_var, Handle, RandomValue);

}

}


//Dispatcher for messages
void dispatch_SMPMasterIdentification(uint16_t sender, uint16_t Handle, uint16_t EDIV, ble_random_part_t Rand) {
if (sender == main_var.id_SMP) {
enqueue_HCISocketProxyImpl_SMP_SMPMasterIdentification(&hci_var, Handle, EDIV, Rand);

}
if (sender == hci_var.id_SMP) {
enqueue_Main_SMP_SMPMasterIdentification(&main_var, Handle, EDIV, Rand);

}

}


//Dispatcher for messages
void dispatch_ATTReadByGroupTypeResponse(uint16_t sender, uint16_t ConnectionHandle, uint8_t Length, ble_gatt_data_t AttributeDataList) {
if (sender == hci_var.id_ATT) {

}
if (sender == main_var.id_ATT) {
enqueue_HCISocketProxyImpl_ATT_ATTReadByGroupTypeResponse(&hci_var, ConnectionHandle, Length, AttributeDataList);

}

}


//Dispatcher for messages
void dispatch_SetEventMaskAll(uint16_t sender) {
if (sender == encrypter_var.id_HCICommands) {
enqueue_HCISocketProxyImpl_Commands_SetEventMaskAll(&hci_var);

}
if (sender == connecter_var.id_HCICommands) {
enqueue_HCISocketProxyImpl_Commands_SetEventMaskAll(&hci_var);

}
if (sender == main_var.id_HCICommands) {
enqueue_HCISocketProxyImpl_Commands_SetEventMaskAll(&hci_var);

}
if (sender == initialiser_var.id_HCICommands) {
enqueue_HCISocketProxyImpl_Commands_SetEventMaskAll(&hci_var);

}

}


//Dispatcher for messages
void dispatch_LERand(uint16_t sender) {
if (sender == main_var.id_HCICommands) {
enqueue_HCISocketProxyImpl_Commands_LERand(&hci_var);

}
if (sender == initialiser_var.id_HCICommands) {
enqueue_HCISocketProxyImpl_Commands_LERand(&hci_var);

}
if (sender == connecter_var.id_HCICommands) {
enqueue_HCISocketProxyImpl_Commands_LERand(&hci_var);

}
if (sender == encrypter_var.id_HCICommands) {
enqueue_HCISocketProxyImpl_Commands_LERand(&hci_var);

}

}


//Dispatcher for messages
void dispatch_Quit(uint16_t sender, int16_t code) {
if (sender == main_var.id_Signals) {
enqueue_ExitHandler_Signals_Quit(&handler_var, code);

}

}


//Dispatcher for messages
void dispatch_SetLEAdvertisingData(uint16_t sender, uint8_t Length, ble_adv_data_t Data) {
if (sender == connecter_var.id_HCICommands) {
enqueue_HCISocketProxyImpl_Commands_SetLEAdvertisingData(&hci_var, Length, Data);

}
if (sender == initialiser_var.id_HCICommands) {
enqueue_HCISocketProxyImpl_Commands_SetLEAdvertisingData(&hci_var, Length, Data);

}
if (sender == main_var.id_HCICommands) {
enqueue_HCISocketProxyImpl_Commands_SetLEAdvertisingData(&hci_var, Length, Data);

}
if (sender == encrypter_var.id_HCICommands) {
enqueue_HCISocketProxyImpl_Commands_SetLEAdvertisingData(&hci_var, Length, Data);

}

}


//Dispatcher for messages
void dispatch_SetEventMaskCompleted(uint16_t sender, uint8_t NumberAllowedCommandPackets, uint8_t Status) {
if (sender == hci_var.id_Events) {
enqueue_BLEInitialiserImpl_HCIEvents_SetEventMaskCompleted(&initialiser_var, NumberAllowedCommandPackets, Status);

}

}


//Dispatcher for messages
void dispatch_ATTReadByTypeResponse(uint16_t sender, uint16_t ConnectionHandle, uint8_t Length, ble_gatt_data_t AttributeDataList) {
if (sender == hci_var.id_ATT) {

}
if (sender == main_var.id_ATT) {
enqueue_HCISocketProxyImpl_ATT_ATTReadByTypeResponse(&hci_var, ConnectionHandle, Length, AttributeDataList);

}

}


//Dispatcher for messages
void dispatch_GenerateRandomNumberCompleted(uint16_t sender, ble_random_number_t Random) {
if (sender == encrypter_var.id_Encrypter) {
enqueue_Main_Encrypter_GenerateRandomNumberCompleted(&main_var, Random);

}

}


//Dispatcher for messages
void dispatch_ATTFindInformationResponse(uint16_t sender, uint16_t ConnectionHandle, uint8_t Format, ble_gatt_data_t InformationData) {
if (sender == main_var.id_ATT) {
enqueue_HCISocketProxyImpl_ATT_ATTFindInformationResponse(&hci_var, ConnectionHandle, Format, InformationData);

}
if (sender == hci_var.id_ATT) {

}

}


void ExitHandler_send_Signals_Interrupt_sender(struct ExitHandler_Instance *_instance) {
dispatch_Interrupt(_instance->id_Signals);
}
void BLEInitialiserImpl_send_Initialiser_Started_sender(struct BLEInitialiserImpl_Instance *_instance) {
dispatch_Started(_instance->id_Initialiser);
}
void BLEInitialiserImpl_send_Initialiser_Stopped_sender(struct BLEInitialiserImpl_Instance *_instance) {
dispatch_Stopped(_instance->id_Initialiser);
}
void BLEInitialiserImpl_send_Initialiser_Failure_sender(struct BLEInitialiserImpl_Instance *_instance) {
dispatch_Failure(_instance->id_Initialiser);
}
void BLEInitialiserImpl_send_Initialiser_DeviceInitialised_sender(struct BLEInitialiserImpl_Instance *_instance, bdaddr_t Address) {
dispatch_DeviceInitialised(_instance->id_Initialiser, Address);
}
void BLEInitialiserImpl_send_Socket_Open_sender(struct BLEInitialiserImpl_Instance *_instance) {
dispatch_Open(_instance->id_Socket);
}
void BLEInitialiserImpl_send_Socket_Close_sender(struct BLEInitialiserImpl_Instance *_instance) {
dispatch_Close(_instance->id_Socket);
}
void BLEInitialiserImpl_send_HCICommands_Reset_sender(struct BLEInitialiserImpl_Instance *_instance) {
dispatch_Reset(_instance->id_HCICommands);
}
void BLEInitialiserImpl_send_HCICommands_SetEventMask_sender(struct BLEInitialiserImpl_Instance *_instance, set_event_mask_cp Mask) {
dispatch_SetEventMask(_instance->id_HCICommands, Mask);
}
void BLEInitialiserImpl_send_HCICommands_SetEventMaskAll_sender(struct BLEInitialiserImpl_Instance *_instance) {
dispatch_SetEventMaskAll(_instance->id_HCICommands);
}
void BLEInitialiserImpl_send_HCICommands_SetLocalName_sender(struct BLEInitialiserImpl_Instance *_instance, change_local_name_cp Name) {
dispatch_SetLocalName(_instance->id_HCICommands, Name);
}
void BLEInitialiserImpl_send_HCICommands_Disconnect_sender(struct BLEInitialiserImpl_Instance *_instance, uint16_t ConnectionHandle, uint8_t Reason) {
dispatch_Disconnect(_instance->id_HCICommands, ConnectionHandle, Reason);
}
void BLEInitialiserImpl_send_HCICommands_SetLEEventMask_sender(struct BLEInitialiserImpl_Instance *_instance, set_event_mask_cp Mask) {
dispatch_SetLEEventMask(_instance->id_HCICommands, Mask);
}
void BLEInitialiserImpl_send_HCICommands_SetLEEventMaskAll_sender(struct BLEInitialiserImpl_Instance *_instance) {
dispatch_SetLEEventMaskAll(_instance->id_HCICommands);
}
void BLEInitialiserImpl_send_HCICommands_SetLEAdvertisementParameters_sender(struct BLEInitialiserImpl_Instance *_instance, uint16_t MinInterval, uint16_t MaxInterval, uint8_t Type, uint8_t OwnAddressType, uint8_t PeerAddressType, bdaddr_t PeerAddress, uint8_t Channel, uint8_t FilterPolicy) {
dispatch_SetLEAdvertisementParameters(_instance->id_HCICommands, MinInterval, MaxInterval, Type, OwnAddressType, PeerAddressType, PeerAddress, Channel, FilterPolicy);
}
void BLEInitialiserImpl_send_HCICommands_SetLEAdvertiseEnable_sender(struct BLEInitialiserImpl_Instance *_instance, uint8_t Enable) {
dispatch_SetLEAdvertiseEnable(_instance->id_HCICommands, Enable);
}
void BLEInitialiserImpl_send_HCICommands_SetLEAdvertisingData_sender(struct BLEInitialiserImpl_Instance *_instance, uint8_t Length, ble_adv_data_t Data) {
dispatch_SetLEAdvertisingData(_instance->id_HCICommands, Length, Data);
}
void BLEInitialiserImpl_send_HCICommands_SetLEScanResponseData_sender(struct BLEInitialiserImpl_Instance *_instance, uint8_t Length, ble_adv_data_t Data) {
dispatch_SetLEScanResponseData(_instance->id_HCICommands, Length, Data);
}
void BLEInitialiserImpl_send_HCICommands_SetLEScanParameters_sender(struct BLEInitialiserImpl_Instance *_instance, uint8_t Type, uint16_t Interval, uint16_t Window, uint8_t OwnAddressType, uint8_t FilterPolicy) {
dispatch_SetLEScanParameters(_instance->id_HCICommands, Type, Interval, Window, OwnAddressType, FilterPolicy);
}
void BLEInitialiserImpl_send_HCICommands_SetLEScanEnable_sender(struct BLEInitialiserImpl_Instance *_instance, uint8_t Enable, uint8_t FilterDuplicates) {
dispatch_SetLEScanEnable(_instance->id_HCICommands, Enable, FilterDuplicates);
}
void BLEInitialiserImpl_send_HCICommands_LECreateConnection_sender(struct BLEInitialiserImpl_Instance *_instance, uint16_t Interval, uint16_t Window, uint8_t FilterPolicy, uint8_t PeerAddressType, bdaddr_t PeerAddress, uint8_t OwnAddressType, uint16_t ConnIntervalMin, uint16_t ConnIntervalMax, uint16_t ConnLatency, uint16_t SupervisionTimeout, uint16_t CELengthMin, uint16_t CELengthMax) {
dispatch_LECreateConnection(_instance->id_HCICommands, Interval, Window, FilterPolicy, PeerAddressType, PeerAddress, OwnAddressType, ConnIntervalMin, ConnIntervalMax, ConnLatency, SupervisionTimeout, CELengthMin, CELengthMax);
}
void BLEInitialiserImpl_send_HCICommands_LECreateConnectionCancel_sender(struct BLEInitialiserImpl_Instance *_instance) {
dispatch_LECreateConnectionCancel(_instance->id_HCICommands);
}
void BLEInitialiserImpl_send_HCICommands_LERand_sender(struct BLEInitialiserImpl_Instance *_instance) {
dispatch_LERand(_instance->id_HCICommands);
}
void BLEInitialiserImpl_send_HCICommands_LEEncrypt_sender(struct BLEInitialiserImpl_Instance *_instance, ble_random_number_t Key, ble_random_number_t Plaintext) {
dispatch_LEEncrypt(_instance->id_HCICommands, Key, Plaintext);
}
void BLEInitialiserImpl_send_HCICommands_LEStartEncryption_sender(struct BLEInitialiserImpl_Instance *_instance, uint16_t ConnectionHandle, ble_random_part_t Random, uint16_t EDIV, ble_random_number_t LTK) {
dispatch_LEStartEncryption(_instance->id_HCICommands, ConnectionHandle, Random, EDIV, LTK);
}
void BLEInitialiserImpl_send_SMP_SMPPairingRequest_sender(struct BLEInitialiserImpl_Instance *_instance, uint16_t Handle, uint8_t IOCapability, uint8_t OOBDataPresent, uint8_t Bonding, uint8_t MITM, uint8_t SecureConnection, uint8_t Keypress, uint8_t MaximumEncryptionKeySize, uint8_t InitiatorKeyDistribution, uint8_t ResponderKeyDistribution) {
dispatch_SMPPairingRequest(_instance->id_SMP, Handle, IOCapability, OOBDataPresent, Bonding, MITM, SecureConnection, Keypress, MaximumEncryptionKeySize, InitiatorKeyDistribution, ResponderKeyDistribution);
}
void BLEInitialiserImpl_send_SMP_SMPPairingResponse_sender(struct BLEInitialiserImpl_Instance *_instance, uint16_t Handle, uint8_t IOCapability, uint8_t OOBDataPresent, uint8_t Bonding, uint8_t MITM, uint8_t SecureConnection, uint8_t Keypress, uint8_t MaximumEncryptionKeySize, uint8_t InitiatorKeyDistribution, uint8_t ResponderKeyDistribution) {
dispatch_SMPPairingResponse(_instance->id_SMP, Handle, IOCapability, OOBDataPresent, Bonding, MITM, SecureConnection, Keypress, MaximumEncryptionKeySize, InitiatorKeyDistribution, ResponderKeyDistribution);
}
void BLEInitialiserImpl_send_SMP_SMPPairingConfirm_sender(struct BLEInitialiserImpl_Instance *_instance, uint16_t Handle, ble_random_number_t ConfirmValue) {
dispatch_SMPPairingConfirm(_instance->id_SMP, Handle, ConfirmValue);
}
void BLEInitialiserImpl_send_SMP_SMPPairingRandom_sender(struct BLEInitialiserImpl_Instance *_instance, uint16_t Handle, ble_random_number_t RandomValue) {
dispatch_SMPPairingRandom(_instance->id_SMP, Handle, RandomValue);
}
void BLEInitialiserImpl_send_SMP_SMPPairingFailed_sender(struct BLEInitialiserImpl_Instance *_instance, uint16_t Handle, uint8_t Reason) {
dispatch_SMPPairingFailed(_instance->id_SMP, Handle, Reason);
}
void BLEInitialiserImpl_send_SMP_SMPPairingPublicKey_sender(struct BLEInitialiserImpl_Instance *_instance, uint16_t Handle, smp_public_key_t KeyX, smp_public_key_t KeyY) {
dispatch_SMPPairingPublicKey(_instance->id_SMP, Handle, KeyX, KeyY);
}
void BLEInitialiserImpl_send_SMP_SMPPairingDHKeyCheck_sender(struct BLEInitialiserImpl_Instance *_instance, uint16_t Handle, ble_random_number_t DHKeyCheck) {
dispatch_SMPPairingDHKeyCheck(_instance->id_SMP, Handle, DHKeyCheck);
}
void BLEInitialiserImpl_send_SMP_SMPKeypressNotification_sender(struct BLEInitialiserImpl_Instance *_instance, uint16_t Handle, uint8_t Type) {
dispatch_SMPKeypressNotification(_instance->id_SMP, Handle, Type);
}
void BLEInitialiserImpl_send_SMP_SMPEncryptionInformation_sender(struct BLEInitialiserImpl_Instance *_instance, uint16_t Handle, ble_random_number_t LongTermKey) {
dispatch_SMPEncryptionInformation(_instance->id_SMP, Handle, LongTermKey);
}
void BLEInitialiserImpl_send_SMP_SMPMasterIdentification_sender(struct BLEInitialiserImpl_Instance *_instance, uint16_t Handle, uint16_t EDIV, ble_random_part_t Rand) {
dispatch_SMPMasterIdentification(_instance->id_SMP, Handle, EDIV, Rand);
}
void BLEInitialiserImpl_send_SMP_SMPIdentityInformation_sender(struct BLEInitialiserImpl_Instance *_instance, uint16_t Handle, ble_random_number_t IdentityResolvingKey) {
dispatch_SMPIdentityInformation(_instance->id_SMP, Handle, IdentityResolvingKey);
}
void BLEInitialiserImpl_send_SMP_SMPIdentityAddressInformation_sender(struct BLEInitialiserImpl_Instance *_instance, uint16_t Handle, uint8_t AddressType, bdaddr_t Address) {
dispatch_SMPIdentityAddressInformation(_instance->id_SMP, Handle, AddressType, Address);
}
void BLEInitialiserImpl_send_SMP_SMPSigningInformation_sender(struct BLEInitialiserImpl_Instance *_instance, uint16_t Handle, ble_random_number_t SignatureKey) {
dispatch_SMPSigningInformation(_instance->id_SMP, Handle, SignatureKey);
}
void BLEInitialiserImpl_send_SMP_SMPSecurityRequest_sender(struct BLEInitialiserImpl_Instance *_instance, uint16_t Handle, uint8_t Bonding, uint8_t MITM, uint8_t SecureConnection, uint8_t Keypress) {
dispatch_SMPSecurityRequest(_instance->id_SMP, Handle, Bonding, MITM, SecureConnection, Keypress);
}
void BLEInitialiserImpl_send_ATT_ATTFindInformationRequest_sender(struct BLEInitialiserImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t StartingHandle, uint16_t EndingHandle) {
dispatch_ATTFindInformationRequest(_instance->id_ATT, ConnectionHandle, StartingHandle, EndingHandle);
}
void BLEInitialiserImpl_send_ATT_ATTFindInformationResponse_sender(struct BLEInitialiserImpl_Instance *_instance, uint16_t ConnectionHandle, uint8_t Format, ble_gatt_data_t InformationData) {
dispatch_ATTFindInformationResponse(_instance->id_ATT, ConnectionHandle, Format, InformationData);
}
void BLEInitialiserImpl_send_ATT_ATTFindInformationError_sender(struct BLEInitialiserImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error) {
dispatch_ATTFindInformationError(_instance->id_ATT, ConnectionHandle, AttributeHandle, Error);
}
void BLEInitialiserImpl_send_ATT_ATTReadByTypeRequest_sender(struct BLEInitialiserImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t StartingHandle, uint16_t EndingHandle, ble_uuid_t AttributeType) {
dispatch_ATTReadByTypeRequest(_instance->id_ATT, ConnectionHandle, StartingHandle, EndingHandle, AttributeType);
}
void BLEInitialiserImpl_send_ATT_ATTReadByTypeResponse_sender(struct BLEInitialiserImpl_Instance *_instance, uint16_t ConnectionHandle, uint8_t Length, ble_gatt_data_t AttributeDataList) {
dispatch_ATTReadByTypeResponse(_instance->id_ATT, ConnectionHandle, Length, AttributeDataList);
}
void BLEInitialiserImpl_send_ATT_ATTReadByTypeError_sender(struct BLEInitialiserImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error) {
dispatch_ATTReadByTypeError(_instance->id_ATT, ConnectionHandle, AttributeHandle, Error);
}
void BLEInitialiserImpl_send_ATT_ATTReadRequest_sender(struct BLEInitialiserImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle) {
dispatch_ATTReadRequest(_instance->id_ATT, ConnectionHandle, AttributeHandle);
}
void BLEInitialiserImpl_send_ATT_ATTReadResponse_sender(struct BLEInitialiserImpl_Instance *_instance, uint16_t ConnectionHandle, ble_gatt_data_t AttributeValue) {
dispatch_ATTReadResponse(_instance->id_ATT, ConnectionHandle, AttributeValue);
}
void BLEInitialiserImpl_send_ATT_ATTReadError_sender(struct BLEInitialiserImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error) {
dispatch_ATTReadError(_instance->id_ATT, ConnectionHandle, AttributeHandle, Error);
}
void BLEInitialiserImpl_send_ATT_ATTReadByGroupTypeRequest_sender(struct BLEInitialiserImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t StartingHandle, uint16_t EndingHandle, ble_uuid_t AttributeGroupType) {
dispatch_ATTReadByGroupTypeRequest(_instance->id_ATT, ConnectionHandle, StartingHandle, EndingHandle, AttributeGroupType);
}
void BLEInitialiserImpl_send_ATT_ATTReadByGroupTypeResponse_sender(struct BLEInitialiserImpl_Instance *_instance, uint16_t ConnectionHandle, uint8_t Length, ble_gatt_data_t AttributeDataList) {
dispatch_ATTReadByGroupTypeResponse(_instance->id_ATT, ConnectionHandle, Length, AttributeDataList);
}
void BLEInitialiserImpl_send_ATT_ATTReadByGroupTypeError_sender(struct BLEInitialiserImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error) {
dispatch_ATTReadByGroupTypeError(_instance->id_ATT, ConnectionHandle, AttributeHandle, Error);
}
void BLEInitialiserImpl_send_ATT_ATTWriteRequest_sender(struct BLEInitialiserImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, ble_gatt_data_t AttributeValue) {
dispatch_ATTWriteRequest(_instance->id_ATT, ConnectionHandle, AttributeHandle, AttributeValue);
}
void BLEInitialiserImpl_send_ATT_ATTWriteResponse_sender(struct BLEInitialiserImpl_Instance *_instance, uint16_t ConnectionHandle) {
dispatch_ATTWriteResponse(_instance->id_ATT, ConnectionHandle);
}
void BLEInitialiserImpl_send_ATT_ATTWriteError_sender(struct BLEInitialiserImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error) {
dispatch_ATTWriteError(_instance->id_ATT, ConnectionHandle, AttributeHandle, Error);
}
void BLEInitialiserImpl_send_ATT_ATTWriteCommand_sender(struct BLEInitialiserImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, ble_gatt_data_t AttributeValue) {
dispatch_ATTWriteCommand(_instance->id_ATT, ConnectionHandle, AttributeHandle, AttributeValue);
}
void BLEInitialiserImpl_send_ATT_ATTHandleValueNotification_sender(struct BLEInitialiserImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, ble_gatt_data_t AttributeValue) {
dispatch_ATTHandleValueNotification(_instance->id_ATT, ConnectionHandle, AttributeHandle, AttributeValue);
}
void BLEInitialiserImpl_send_ATT_ATTHandleValueIndication_sender(struct BLEInitialiserImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, ble_gatt_data_t AttributeValue) {
dispatch_ATTHandleValueIndication(_instance->id_ATT, ConnectionHandle, AttributeHandle, AttributeValue);
}
void BLEInitialiserImpl_send_ATT_ATTHandleValueConfirmation_sender(struct BLEInitialiserImpl_Instance *_instance, uint16_t ConnectionHandle) {
dispatch_ATTHandleValueConfirmation(_instance->id_ATT, ConnectionHandle);
}
void HCISocketProxyImpl_send_Socket_Opened_sender(struct HCISocketProxyImpl_Instance *_instance, bdaddr_t Address) {
dispatch_Opened(_instance->id_Socket, Address);
}
void HCISocketProxyImpl_send_Socket_Closed_sender(struct HCISocketProxyImpl_Instance *_instance) {
dispatch_Closed(_instance->id_Socket);
}
void HCISocketProxyImpl_send_Events_ResetCompleted_sender(struct HCISocketProxyImpl_Instance *_instance, uint8_t NumberAllowedCommandPackets, uint8_t Status) {
dispatch_ResetCompleted(_instance->id_Events, NumberAllowedCommandPackets, Status);
}
void HCISocketProxyImpl_send_Events_SetEventMaskCompleted_sender(struct HCISocketProxyImpl_Instance *_instance, uint8_t NumberAllowedCommandPackets, uint8_t Status) {
dispatch_SetEventMaskCompleted(_instance->id_Events, NumberAllowedCommandPackets, Status);
}
void HCISocketProxyImpl_send_Events_SetLocalNameCompleted_sender(struct HCISocketProxyImpl_Instance *_instance, uint8_t NumberAllowedCommandPackets, uint8_t Status) {
dispatch_SetLocalNameCompleted(_instance->id_Events, NumberAllowedCommandPackets, Status);
}
void HCISocketProxyImpl_send_Events_DisconnectStatus_sender(struct HCISocketProxyImpl_Instance *_instance, uint8_t NumberAllowedCommandPackets, uint8_t Status) {
dispatch_DisconnectStatus(_instance->id_Events, NumberAllowedCommandPackets, Status);
}
void HCISocketProxyImpl_send_Events_DisconnectionCompleted_sender(struct HCISocketProxyImpl_Instance *_instance, uint8_t Status, uint16_t ConnectionHandle, uint8_t Reason) {
dispatch_DisconnectionCompleted(_instance->id_Events, Status, ConnectionHandle, Reason);
}
void HCISocketProxyImpl_send_Events_SetLEEventMaskCompleted_sender(struct HCISocketProxyImpl_Instance *_instance, uint8_t NumberAllowedCommandPackets, uint8_t Status) {
dispatch_SetLEEventMaskCompleted(_instance->id_Events, NumberAllowedCommandPackets, Status);
}
void HCISocketProxyImpl_send_Events_SetLEAdvertisementParametersCompleted_sender(struct HCISocketProxyImpl_Instance *_instance, uint8_t NumberAllowedCommandPackets, uint8_t Status) {
dispatch_SetLEAdvertisementParametersCompleted(_instance->id_Events, NumberAllowedCommandPackets, Status);
}
void HCISocketProxyImpl_send_Events_SetLEAdvertiseEnableCompleted_sender(struct HCISocketProxyImpl_Instance *_instance, uint8_t NumberAllowedCommandPackets, uint8_t Status) {
dispatch_SetLEAdvertiseEnableCompleted(_instance->id_Events, NumberAllowedCommandPackets, Status);
}
void HCISocketProxyImpl_send_Events_SetLEAdvertisingDataCompleted_sender(struct HCISocketProxyImpl_Instance *_instance, uint8_t NumberAllowedCommandPackets, uint8_t Status) {
dispatch_SetLEAdvertisingDataCompleted(_instance->id_Events, NumberAllowedCommandPackets, Status);
}
void HCISocketProxyImpl_send_Events_SetLEScanResponseDataCompleted_sender(struct HCISocketProxyImpl_Instance *_instance, uint8_t NumberAllowedCommandPackets, uint8_t Status) {
dispatch_SetLEScanResponseDataCompleted(_instance->id_Events, NumberAllowedCommandPackets, Status);
}
void HCISocketProxyImpl_send_Events_SetLEScanParametersCompleted_sender(struct HCISocketProxyImpl_Instance *_instance, uint8_t NumberAllowedCommandPackets, uint8_t Status) {
dispatch_SetLEScanParametersCompleted(_instance->id_Events, NumberAllowedCommandPackets, Status);
}
void HCISocketProxyImpl_send_Events_SetLEScanEnableCompleted_sender(struct HCISocketProxyImpl_Instance *_instance, uint8_t NumberAllowedCommandPackets, uint8_t Status) {
dispatch_SetLEScanEnableCompleted(_instance->id_Events, NumberAllowedCommandPackets, Status);
}
void HCISocketProxyImpl_send_Events_LEAdvertisementReport_sender(struct HCISocketProxyImpl_Instance *_instance, uint8_t Type, uint8_t AddressType, bdaddr_t Address, uint8_t Length, ble_adv_data_t Data) {
dispatch_LEAdvertisementReport(_instance->id_Events, Type, AddressType, Address, Length, Data);
}
void HCISocketProxyImpl_send_Events_LECreateConnectionStatus_sender(struct HCISocketProxyImpl_Instance *_instance, uint8_t NumberAllowedCommandPackets, uint8_t Status) {
dispatch_LECreateConnectionStatus(_instance->id_Events, NumberAllowedCommandPackets, Status);
}
void HCISocketProxyImpl_send_Events_LECreateConnectionCancelCompleted_sender(struct HCISocketProxyImpl_Instance *_instance, uint8_t NumberAllowedCommandPackets, uint8_t Status) {
dispatch_LECreateConnectionCancelCompleted(_instance->id_Events, NumberAllowedCommandPackets, Status);
}
void HCISocketProxyImpl_send_Events_LEConnectionComplete_sender(struct HCISocketProxyImpl_Instance *_instance, uint8_t Status, uint16_t ConnectionHandle, uint8_t Role, uint8_t PeerAddressType, bdaddr_t PeerAddress, uint16_t ConnInterval, uint16_t ConnLatency, uint16_t SupervisionTimeout, uint8_t MasterClockAccuracy) {
dispatch_LEConnectionComplete(_instance->id_Events, Status, ConnectionHandle, Role, PeerAddressType, PeerAddress, ConnInterval, ConnLatency, SupervisionTimeout, MasterClockAccuracy);
}
void HCISocketProxyImpl_send_Events_LEEnhancedConnectionComplete_sender(struct HCISocketProxyImpl_Instance *_instance, uint8_t Status, uint16_t ConnectionHandle, uint8_t Role, uint8_t PeerAddressType, bdaddr_t PeerAddress, bdaddr_t LocalResolvablePrivateAddress, bdaddr_t PeerResolvablePrivateAddress, uint16_t ConnInterval, uint16_t ConnLatency, uint16_t SupervisionTimeout, uint8_t MasterClockAccuracy) {
dispatch_LEEnhancedConnectionComplete(_instance->id_Events, Status, ConnectionHandle, Role, PeerAddressType, PeerAddress, LocalResolvablePrivateAddress, PeerResolvablePrivateAddress, ConnInterval, ConnLatency, SupervisionTimeout, MasterClockAccuracy);
}
void HCISocketProxyImpl_send_Events_LERandCompleted_sender(struct HCISocketProxyImpl_Instance *_instance, uint8_t NumberAllowedCommandPackets, uint8_t Status, ble_random_part_t Random) {
dispatch_LERandCompleted(_instance->id_Events, NumberAllowedCommandPackets, Status, Random);
}
void HCISocketProxyImpl_send_Events_LEEncryptCompleted_sender(struct HCISocketProxyImpl_Instance *_instance, uint8_t NumberAllowedCommandPackets, uint8_t Status, ble_random_number_t Encrypted) {
dispatch_LEEncryptCompleted(_instance->id_Events, NumberAllowedCommandPackets, Status, Encrypted);
}
void HCISocketProxyImpl_send_Events_EncryptionChanged_sender(struct HCISocketProxyImpl_Instance *_instance, uint8_t Status, uint16_t ConnectionHandle, uint8_t Enabled) {
dispatch_EncryptionChanged(_instance->id_Events, Status, ConnectionHandle, Enabled);
}
void HCISocketProxyImpl_send_Events_LEStartEncryptionStatus_sender(struct HCISocketProxyImpl_Instance *_instance, uint8_t NumberAllowedCommandPackets, uint8_t Status) {
dispatch_LEStartEncryptionStatus(_instance->id_Events, NumberAllowedCommandPackets, Status);
}
void HCISocketProxyImpl_send_SMP_SMPPairingRequest_sender(struct HCISocketProxyImpl_Instance *_instance, uint16_t Handle, uint8_t IOCapability, uint8_t OOBDataPresent, uint8_t Bonding, uint8_t MITM, uint8_t SecureConnection, uint8_t Keypress, uint8_t MaximumEncryptionKeySize, uint8_t InitiatorKeyDistribution, uint8_t ResponderKeyDistribution) {
dispatch_SMPPairingRequest(_instance->id_SMP, Handle, IOCapability, OOBDataPresent, Bonding, MITM, SecureConnection, Keypress, MaximumEncryptionKeySize, InitiatorKeyDistribution, ResponderKeyDistribution);
}
void HCISocketProxyImpl_send_SMP_SMPPairingResponse_sender(struct HCISocketProxyImpl_Instance *_instance, uint16_t Handle, uint8_t IOCapability, uint8_t OOBDataPresent, uint8_t Bonding, uint8_t MITM, uint8_t SecureConnection, uint8_t Keypress, uint8_t MaximumEncryptionKeySize, uint8_t InitiatorKeyDistribution, uint8_t ResponderKeyDistribution) {
dispatch_SMPPairingResponse(_instance->id_SMP, Handle, IOCapability, OOBDataPresent, Bonding, MITM, SecureConnection, Keypress, MaximumEncryptionKeySize, InitiatorKeyDistribution, ResponderKeyDistribution);
}
void HCISocketProxyImpl_send_SMP_SMPPairingConfirm_sender(struct HCISocketProxyImpl_Instance *_instance, uint16_t Handle, ble_random_number_t ConfirmValue) {
dispatch_SMPPairingConfirm(_instance->id_SMP, Handle, ConfirmValue);
}
void HCISocketProxyImpl_send_SMP_SMPPairingRandom_sender(struct HCISocketProxyImpl_Instance *_instance, uint16_t Handle, ble_random_number_t RandomValue) {
dispatch_SMPPairingRandom(_instance->id_SMP, Handle, RandomValue);
}
void HCISocketProxyImpl_send_SMP_SMPPairingFailed_sender(struct HCISocketProxyImpl_Instance *_instance, uint16_t Handle, uint8_t Reason) {
dispatch_SMPPairingFailed(_instance->id_SMP, Handle, Reason);
}
void HCISocketProxyImpl_send_SMP_SMPPairingPublicKey_sender(struct HCISocketProxyImpl_Instance *_instance, uint16_t Handle, smp_public_key_t KeyX, smp_public_key_t KeyY) {
dispatch_SMPPairingPublicKey(_instance->id_SMP, Handle, KeyX, KeyY);
}
void HCISocketProxyImpl_send_SMP_SMPPairingDHKeyCheck_sender(struct HCISocketProxyImpl_Instance *_instance, uint16_t Handle, ble_random_number_t DHKeyCheck) {
dispatch_SMPPairingDHKeyCheck(_instance->id_SMP, Handle, DHKeyCheck);
}
void HCISocketProxyImpl_send_SMP_SMPKeypressNotification_sender(struct HCISocketProxyImpl_Instance *_instance, uint16_t Handle, uint8_t Type) {
dispatch_SMPKeypressNotification(_instance->id_SMP, Handle, Type);
}
void HCISocketProxyImpl_send_SMP_SMPEncryptionInformation_sender(struct HCISocketProxyImpl_Instance *_instance, uint16_t Handle, ble_random_number_t LongTermKey) {
dispatch_SMPEncryptionInformation(_instance->id_SMP, Handle, LongTermKey);
}
void HCISocketProxyImpl_send_SMP_SMPMasterIdentification_sender(struct HCISocketProxyImpl_Instance *_instance, uint16_t Handle, uint16_t EDIV, ble_random_part_t Rand) {
dispatch_SMPMasterIdentification(_instance->id_SMP, Handle, EDIV, Rand);
}
void HCISocketProxyImpl_send_SMP_SMPIdentityInformation_sender(struct HCISocketProxyImpl_Instance *_instance, uint16_t Handle, ble_random_number_t IdentityResolvingKey) {
dispatch_SMPIdentityInformation(_instance->id_SMP, Handle, IdentityResolvingKey);
}
void HCISocketProxyImpl_send_SMP_SMPIdentityAddressInformation_sender(struct HCISocketProxyImpl_Instance *_instance, uint16_t Handle, uint8_t AddressType, bdaddr_t Address) {
dispatch_SMPIdentityAddressInformation(_instance->id_SMP, Handle, AddressType, Address);
}
void HCISocketProxyImpl_send_SMP_SMPSigningInformation_sender(struct HCISocketProxyImpl_Instance *_instance, uint16_t Handle, ble_random_number_t SignatureKey) {
dispatch_SMPSigningInformation(_instance->id_SMP, Handle, SignatureKey);
}
void HCISocketProxyImpl_send_SMP_SMPSecurityRequest_sender(struct HCISocketProxyImpl_Instance *_instance, uint16_t Handle, uint8_t Bonding, uint8_t MITM, uint8_t SecureConnection, uint8_t Keypress) {
dispatch_SMPSecurityRequest(_instance->id_SMP, Handle, Bonding, MITM, SecureConnection, Keypress);
}
void HCISocketProxyImpl_send_ATT_ATTFindInformationRequest_sender(struct HCISocketProxyImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t StartingHandle, uint16_t EndingHandle) {
dispatch_ATTFindInformationRequest(_instance->id_ATT, ConnectionHandle, StartingHandle, EndingHandle);
}
void HCISocketProxyImpl_send_ATT_ATTFindInformationResponse_sender(struct HCISocketProxyImpl_Instance *_instance, uint16_t ConnectionHandle, uint8_t Format, ble_gatt_data_t InformationData) {
dispatch_ATTFindInformationResponse(_instance->id_ATT, ConnectionHandle, Format, InformationData);
}
void HCISocketProxyImpl_send_ATT_ATTFindInformationError_sender(struct HCISocketProxyImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error) {
dispatch_ATTFindInformationError(_instance->id_ATT, ConnectionHandle, AttributeHandle, Error);
}
void HCISocketProxyImpl_send_ATT_ATTReadByTypeRequest_sender(struct HCISocketProxyImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t StartingHandle, uint16_t EndingHandle, ble_uuid_t AttributeType) {
dispatch_ATTReadByTypeRequest(_instance->id_ATT, ConnectionHandle, StartingHandle, EndingHandle, AttributeType);
}
void HCISocketProxyImpl_send_ATT_ATTReadByTypeResponse_sender(struct HCISocketProxyImpl_Instance *_instance, uint16_t ConnectionHandle, uint8_t Length, ble_gatt_data_t AttributeDataList) {
dispatch_ATTReadByTypeResponse(_instance->id_ATT, ConnectionHandle, Length, AttributeDataList);
}
void HCISocketProxyImpl_send_ATT_ATTReadByTypeError_sender(struct HCISocketProxyImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error) {
dispatch_ATTReadByTypeError(_instance->id_ATT, ConnectionHandle, AttributeHandle, Error);
}
void HCISocketProxyImpl_send_ATT_ATTReadRequest_sender(struct HCISocketProxyImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle) {
dispatch_ATTReadRequest(_instance->id_ATT, ConnectionHandle, AttributeHandle);
}
void HCISocketProxyImpl_send_ATT_ATTReadResponse_sender(struct HCISocketProxyImpl_Instance *_instance, uint16_t ConnectionHandle, ble_gatt_data_t AttributeValue) {
dispatch_ATTReadResponse(_instance->id_ATT, ConnectionHandle, AttributeValue);
}
void HCISocketProxyImpl_send_ATT_ATTReadError_sender(struct HCISocketProxyImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error) {
dispatch_ATTReadError(_instance->id_ATT, ConnectionHandle, AttributeHandle, Error);
}
void HCISocketProxyImpl_send_ATT_ATTReadByGroupTypeRequest_sender(struct HCISocketProxyImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t StartingHandle, uint16_t EndingHandle, ble_uuid_t AttributeGroupType) {
dispatch_ATTReadByGroupTypeRequest(_instance->id_ATT, ConnectionHandle, StartingHandle, EndingHandle, AttributeGroupType);
}
void HCISocketProxyImpl_send_ATT_ATTReadByGroupTypeResponse_sender(struct HCISocketProxyImpl_Instance *_instance, uint16_t ConnectionHandle, uint8_t Length, ble_gatt_data_t AttributeDataList) {
dispatch_ATTReadByGroupTypeResponse(_instance->id_ATT, ConnectionHandle, Length, AttributeDataList);
}
void HCISocketProxyImpl_send_ATT_ATTReadByGroupTypeError_sender(struct HCISocketProxyImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error) {
dispatch_ATTReadByGroupTypeError(_instance->id_ATT, ConnectionHandle, AttributeHandle, Error);
}
void HCISocketProxyImpl_send_ATT_ATTWriteRequest_sender(struct HCISocketProxyImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, ble_gatt_data_t AttributeValue) {
dispatch_ATTWriteRequest(_instance->id_ATT, ConnectionHandle, AttributeHandle, AttributeValue);
}
void HCISocketProxyImpl_send_ATT_ATTWriteResponse_sender(struct HCISocketProxyImpl_Instance *_instance, uint16_t ConnectionHandle) {
dispatch_ATTWriteResponse(_instance->id_ATT, ConnectionHandle);
}
void HCISocketProxyImpl_send_ATT_ATTWriteError_sender(struct HCISocketProxyImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error) {
dispatch_ATTWriteError(_instance->id_ATT, ConnectionHandle, AttributeHandle, Error);
}
void HCISocketProxyImpl_send_ATT_ATTWriteCommand_sender(struct HCISocketProxyImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, ble_gatt_data_t AttributeValue) {
dispatch_ATTWriteCommand(_instance->id_ATT, ConnectionHandle, AttributeHandle, AttributeValue);
}
void HCISocketProxyImpl_send_ATT_ATTHandleValueNotification_sender(struct HCISocketProxyImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, ble_gatt_data_t AttributeValue) {
dispatch_ATTHandleValueNotification(_instance->id_ATT, ConnectionHandle, AttributeHandle, AttributeValue);
}
void HCISocketProxyImpl_send_ATT_ATTHandleValueIndication_sender(struct HCISocketProxyImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, ble_gatt_data_t AttributeValue) {
dispatch_ATTHandleValueIndication(_instance->id_ATT, ConnectionHandle, AttributeHandle, AttributeValue);
}
void HCISocketProxyImpl_send_ATT_ATTHandleValueConfirmation_sender(struct HCISocketProxyImpl_Instance *_instance, uint16_t ConnectionHandle) {
dispatch_ATTHandleValueConfirmation(_instance->id_ATT, ConnectionHandle);
}
void BLEConnecterImpl_send_Connecter_Connected_sender(struct BLEConnecterImpl_Instance *_instance, uint16_t Handle, uint8_t AddressType, bdaddr_t Address) {
dispatch_Connected(_instance->id_Connecter, Handle, AddressType, Address);
}
void BLEConnecterImpl_send_Connecter_Stopped_sender(struct BLEConnecterImpl_Instance *_instance) {
dispatch_Stopped(_instance->id_Connecter);
}
void BLEConnecterImpl_send_Connecter_Failure_sender(struct BLEConnecterImpl_Instance *_instance) {
dispatch_Failure(_instance->id_Connecter);
}
void BLEConnecterImpl_send_Socket_Open_sender(struct BLEConnecterImpl_Instance *_instance) {
dispatch_Open(_instance->id_Socket);
}
void BLEConnecterImpl_send_Socket_Close_sender(struct BLEConnecterImpl_Instance *_instance) {
dispatch_Close(_instance->id_Socket);
}
void BLEConnecterImpl_send_HCICommands_Reset_sender(struct BLEConnecterImpl_Instance *_instance) {
dispatch_Reset(_instance->id_HCICommands);
}
void BLEConnecterImpl_send_HCICommands_SetEventMask_sender(struct BLEConnecterImpl_Instance *_instance, set_event_mask_cp Mask) {
dispatch_SetEventMask(_instance->id_HCICommands, Mask);
}
void BLEConnecterImpl_send_HCICommands_SetEventMaskAll_sender(struct BLEConnecterImpl_Instance *_instance) {
dispatch_SetEventMaskAll(_instance->id_HCICommands);
}
void BLEConnecterImpl_send_HCICommands_SetLocalName_sender(struct BLEConnecterImpl_Instance *_instance, change_local_name_cp Name) {
dispatch_SetLocalName(_instance->id_HCICommands, Name);
}
void BLEConnecterImpl_send_HCICommands_Disconnect_sender(struct BLEConnecterImpl_Instance *_instance, uint16_t ConnectionHandle, uint8_t Reason) {
dispatch_Disconnect(_instance->id_HCICommands, ConnectionHandle, Reason);
}
void BLEConnecterImpl_send_HCICommands_SetLEEventMask_sender(struct BLEConnecterImpl_Instance *_instance, set_event_mask_cp Mask) {
dispatch_SetLEEventMask(_instance->id_HCICommands, Mask);
}
void BLEConnecterImpl_send_HCICommands_SetLEEventMaskAll_sender(struct BLEConnecterImpl_Instance *_instance) {
dispatch_SetLEEventMaskAll(_instance->id_HCICommands);
}
void BLEConnecterImpl_send_HCICommands_SetLEAdvertisementParameters_sender(struct BLEConnecterImpl_Instance *_instance, uint16_t MinInterval, uint16_t MaxInterval, uint8_t Type, uint8_t OwnAddressType, uint8_t PeerAddressType, bdaddr_t PeerAddress, uint8_t Channel, uint8_t FilterPolicy) {
dispatch_SetLEAdvertisementParameters(_instance->id_HCICommands, MinInterval, MaxInterval, Type, OwnAddressType, PeerAddressType, PeerAddress, Channel, FilterPolicy);
}
void BLEConnecterImpl_send_HCICommands_SetLEAdvertiseEnable_sender(struct BLEConnecterImpl_Instance *_instance, uint8_t Enable) {
dispatch_SetLEAdvertiseEnable(_instance->id_HCICommands, Enable);
}
void BLEConnecterImpl_send_HCICommands_SetLEAdvertisingData_sender(struct BLEConnecterImpl_Instance *_instance, uint8_t Length, ble_adv_data_t Data) {
dispatch_SetLEAdvertisingData(_instance->id_HCICommands, Length, Data);
}
void BLEConnecterImpl_send_HCICommands_SetLEScanResponseData_sender(struct BLEConnecterImpl_Instance *_instance, uint8_t Length, ble_adv_data_t Data) {
dispatch_SetLEScanResponseData(_instance->id_HCICommands, Length, Data);
}
void BLEConnecterImpl_send_HCICommands_SetLEScanParameters_sender(struct BLEConnecterImpl_Instance *_instance, uint8_t Type, uint16_t Interval, uint16_t Window, uint8_t OwnAddressType, uint8_t FilterPolicy) {
dispatch_SetLEScanParameters(_instance->id_HCICommands, Type, Interval, Window, OwnAddressType, FilterPolicy);
}
void BLEConnecterImpl_send_HCICommands_SetLEScanEnable_sender(struct BLEConnecterImpl_Instance *_instance, uint8_t Enable, uint8_t FilterDuplicates) {
dispatch_SetLEScanEnable(_instance->id_HCICommands, Enable, FilterDuplicates);
}
void BLEConnecterImpl_send_HCICommands_LECreateConnection_sender(struct BLEConnecterImpl_Instance *_instance, uint16_t Interval, uint16_t Window, uint8_t FilterPolicy, uint8_t PeerAddressType, bdaddr_t PeerAddress, uint8_t OwnAddressType, uint16_t ConnIntervalMin, uint16_t ConnIntervalMax, uint16_t ConnLatency, uint16_t SupervisionTimeout, uint16_t CELengthMin, uint16_t CELengthMax) {
dispatch_LECreateConnection(_instance->id_HCICommands, Interval, Window, FilterPolicy, PeerAddressType, PeerAddress, OwnAddressType, ConnIntervalMin, ConnIntervalMax, ConnLatency, SupervisionTimeout, CELengthMin, CELengthMax);
}
void BLEConnecterImpl_send_HCICommands_LECreateConnectionCancel_sender(struct BLEConnecterImpl_Instance *_instance) {
dispatch_LECreateConnectionCancel(_instance->id_HCICommands);
}
void BLEConnecterImpl_send_HCICommands_LERand_sender(struct BLEConnecterImpl_Instance *_instance) {
dispatch_LERand(_instance->id_HCICommands);
}
void BLEConnecterImpl_send_HCICommands_LEEncrypt_sender(struct BLEConnecterImpl_Instance *_instance, ble_random_number_t Key, ble_random_number_t Plaintext) {
dispatch_LEEncrypt(_instance->id_HCICommands, Key, Plaintext);
}
void BLEConnecterImpl_send_HCICommands_LEStartEncryption_sender(struct BLEConnecterImpl_Instance *_instance, uint16_t ConnectionHandle, ble_random_part_t Random, uint16_t EDIV, ble_random_number_t LTK) {
dispatch_LEStartEncryption(_instance->id_HCICommands, ConnectionHandle, Random, EDIV, LTK);
}
void BLEConnecterImpl_send_SMP_SMPPairingRequest_sender(struct BLEConnecterImpl_Instance *_instance, uint16_t Handle, uint8_t IOCapability, uint8_t OOBDataPresent, uint8_t Bonding, uint8_t MITM, uint8_t SecureConnection, uint8_t Keypress, uint8_t MaximumEncryptionKeySize, uint8_t InitiatorKeyDistribution, uint8_t ResponderKeyDistribution) {
dispatch_SMPPairingRequest(_instance->id_SMP, Handle, IOCapability, OOBDataPresent, Bonding, MITM, SecureConnection, Keypress, MaximumEncryptionKeySize, InitiatorKeyDistribution, ResponderKeyDistribution);
}
void BLEConnecterImpl_send_SMP_SMPPairingResponse_sender(struct BLEConnecterImpl_Instance *_instance, uint16_t Handle, uint8_t IOCapability, uint8_t OOBDataPresent, uint8_t Bonding, uint8_t MITM, uint8_t SecureConnection, uint8_t Keypress, uint8_t MaximumEncryptionKeySize, uint8_t InitiatorKeyDistribution, uint8_t ResponderKeyDistribution) {
dispatch_SMPPairingResponse(_instance->id_SMP, Handle, IOCapability, OOBDataPresent, Bonding, MITM, SecureConnection, Keypress, MaximumEncryptionKeySize, InitiatorKeyDistribution, ResponderKeyDistribution);
}
void BLEConnecterImpl_send_SMP_SMPPairingConfirm_sender(struct BLEConnecterImpl_Instance *_instance, uint16_t Handle, ble_random_number_t ConfirmValue) {
dispatch_SMPPairingConfirm(_instance->id_SMP, Handle, ConfirmValue);
}
void BLEConnecterImpl_send_SMP_SMPPairingRandom_sender(struct BLEConnecterImpl_Instance *_instance, uint16_t Handle, ble_random_number_t RandomValue) {
dispatch_SMPPairingRandom(_instance->id_SMP, Handle, RandomValue);
}
void BLEConnecterImpl_send_SMP_SMPPairingFailed_sender(struct BLEConnecterImpl_Instance *_instance, uint16_t Handle, uint8_t Reason) {
dispatch_SMPPairingFailed(_instance->id_SMP, Handle, Reason);
}
void BLEConnecterImpl_send_SMP_SMPPairingPublicKey_sender(struct BLEConnecterImpl_Instance *_instance, uint16_t Handle, smp_public_key_t KeyX, smp_public_key_t KeyY) {
dispatch_SMPPairingPublicKey(_instance->id_SMP, Handle, KeyX, KeyY);
}
void BLEConnecterImpl_send_SMP_SMPPairingDHKeyCheck_sender(struct BLEConnecterImpl_Instance *_instance, uint16_t Handle, ble_random_number_t DHKeyCheck) {
dispatch_SMPPairingDHKeyCheck(_instance->id_SMP, Handle, DHKeyCheck);
}
void BLEConnecterImpl_send_SMP_SMPKeypressNotification_sender(struct BLEConnecterImpl_Instance *_instance, uint16_t Handle, uint8_t Type) {
dispatch_SMPKeypressNotification(_instance->id_SMP, Handle, Type);
}
void BLEConnecterImpl_send_SMP_SMPEncryptionInformation_sender(struct BLEConnecterImpl_Instance *_instance, uint16_t Handle, ble_random_number_t LongTermKey) {
dispatch_SMPEncryptionInformation(_instance->id_SMP, Handle, LongTermKey);
}
void BLEConnecterImpl_send_SMP_SMPMasterIdentification_sender(struct BLEConnecterImpl_Instance *_instance, uint16_t Handle, uint16_t EDIV, ble_random_part_t Rand) {
dispatch_SMPMasterIdentification(_instance->id_SMP, Handle, EDIV, Rand);
}
void BLEConnecterImpl_send_SMP_SMPIdentityInformation_sender(struct BLEConnecterImpl_Instance *_instance, uint16_t Handle, ble_random_number_t IdentityResolvingKey) {
dispatch_SMPIdentityInformation(_instance->id_SMP, Handle, IdentityResolvingKey);
}
void BLEConnecterImpl_send_SMP_SMPIdentityAddressInformation_sender(struct BLEConnecterImpl_Instance *_instance, uint16_t Handle, uint8_t AddressType, bdaddr_t Address) {
dispatch_SMPIdentityAddressInformation(_instance->id_SMP, Handle, AddressType, Address);
}
void BLEConnecterImpl_send_SMP_SMPSigningInformation_sender(struct BLEConnecterImpl_Instance *_instance, uint16_t Handle, ble_random_number_t SignatureKey) {
dispatch_SMPSigningInformation(_instance->id_SMP, Handle, SignatureKey);
}
void BLEConnecterImpl_send_SMP_SMPSecurityRequest_sender(struct BLEConnecterImpl_Instance *_instance, uint16_t Handle, uint8_t Bonding, uint8_t MITM, uint8_t SecureConnection, uint8_t Keypress) {
dispatch_SMPSecurityRequest(_instance->id_SMP, Handle, Bonding, MITM, SecureConnection, Keypress);
}
void BLEConnecterImpl_send_ATT_ATTFindInformationRequest_sender(struct BLEConnecterImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t StartingHandle, uint16_t EndingHandle) {
dispatch_ATTFindInformationRequest(_instance->id_ATT, ConnectionHandle, StartingHandle, EndingHandle);
}
void BLEConnecterImpl_send_ATT_ATTFindInformationResponse_sender(struct BLEConnecterImpl_Instance *_instance, uint16_t ConnectionHandle, uint8_t Format, ble_gatt_data_t InformationData) {
dispatch_ATTFindInformationResponse(_instance->id_ATT, ConnectionHandle, Format, InformationData);
}
void BLEConnecterImpl_send_ATT_ATTFindInformationError_sender(struct BLEConnecterImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error) {
dispatch_ATTFindInformationError(_instance->id_ATT, ConnectionHandle, AttributeHandle, Error);
}
void BLEConnecterImpl_send_ATT_ATTReadByTypeRequest_sender(struct BLEConnecterImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t StartingHandle, uint16_t EndingHandle, ble_uuid_t AttributeType) {
dispatch_ATTReadByTypeRequest(_instance->id_ATT, ConnectionHandle, StartingHandle, EndingHandle, AttributeType);
}
void BLEConnecterImpl_send_ATT_ATTReadByTypeResponse_sender(struct BLEConnecterImpl_Instance *_instance, uint16_t ConnectionHandle, uint8_t Length, ble_gatt_data_t AttributeDataList) {
dispatch_ATTReadByTypeResponse(_instance->id_ATT, ConnectionHandle, Length, AttributeDataList);
}
void BLEConnecterImpl_send_ATT_ATTReadByTypeError_sender(struct BLEConnecterImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error) {
dispatch_ATTReadByTypeError(_instance->id_ATT, ConnectionHandle, AttributeHandle, Error);
}
void BLEConnecterImpl_send_ATT_ATTReadRequest_sender(struct BLEConnecterImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle) {
dispatch_ATTReadRequest(_instance->id_ATT, ConnectionHandle, AttributeHandle);
}
void BLEConnecterImpl_send_ATT_ATTReadResponse_sender(struct BLEConnecterImpl_Instance *_instance, uint16_t ConnectionHandle, ble_gatt_data_t AttributeValue) {
dispatch_ATTReadResponse(_instance->id_ATT, ConnectionHandle, AttributeValue);
}
void BLEConnecterImpl_send_ATT_ATTReadError_sender(struct BLEConnecterImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error) {
dispatch_ATTReadError(_instance->id_ATT, ConnectionHandle, AttributeHandle, Error);
}
void BLEConnecterImpl_send_ATT_ATTReadByGroupTypeRequest_sender(struct BLEConnecterImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t StartingHandle, uint16_t EndingHandle, ble_uuid_t AttributeGroupType) {
dispatch_ATTReadByGroupTypeRequest(_instance->id_ATT, ConnectionHandle, StartingHandle, EndingHandle, AttributeGroupType);
}
void BLEConnecterImpl_send_ATT_ATTReadByGroupTypeResponse_sender(struct BLEConnecterImpl_Instance *_instance, uint16_t ConnectionHandle, uint8_t Length, ble_gatt_data_t AttributeDataList) {
dispatch_ATTReadByGroupTypeResponse(_instance->id_ATT, ConnectionHandle, Length, AttributeDataList);
}
void BLEConnecterImpl_send_ATT_ATTReadByGroupTypeError_sender(struct BLEConnecterImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error) {
dispatch_ATTReadByGroupTypeError(_instance->id_ATT, ConnectionHandle, AttributeHandle, Error);
}
void BLEConnecterImpl_send_ATT_ATTWriteRequest_sender(struct BLEConnecterImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, ble_gatt_data_t AttributeValue) {
dispatch_ATTWriteRequest(_instance->id_ATT, ConnectionHandle, AttributeHandle, AttributeValue);
}
void BLEConnecterImpl_send_ATT_ATTWriteResponse_sender(struct BLEConnecterImpl_Instance *_instance, uint16_t ConnectionHandle) {
dispatch_ATTWriteResponse(_instance->id_ATT, ConnectionHandle);
}
void BLEConnecterImpl_send_ATT_ATTWriteError_sender(struct BLEConnecterImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error) {
dispatch_ATTWriteError(_instance->id_ATT, ConnectionHandle, AttributeHandle, Error);
}
void BLEConnecterImpl_send_ATT_ATTWriteCommand_sender(struct BLEConnecterImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, ble_gatt_data_t AttributeValue) {
dispatch_ATTWriteCommand(_instance->id_ATT, ConnectionHandle, AttributeHandle, AttributeValue);
}
void BLEConnecterImpl_send_ATT_ATTHandleValueNotification_sender(struct BLEConnecterImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, ble_gatt_data_t AttributeValue) {
dispatch_ATTHandleValueNotification(_instance->id_ATT, ConnectionHandle, AttributeHandle, AttributeValue);
}
void BLEConnecterImpl_send_ATT_ATTHandleValueIndication_sender(struct BLEConnecterImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, ble_gatt_data_t AttributeValue) {
dispatch_ATTHandleValueIndication(_instance->id_ATT, ConnectionHandle, AttributeHandle, AttributeValue);
}
void BLEConnecterImpl_send_ATT_ATTHandleValueConfirmation_sender(struct BLEConnecterImpl_Instance *_instance, uint16_t ConnectionHandle) {
dispatch_ATTHandleValueConfirmation(_instance->id_ATT, ConnectionHandle);
}
void BLEEncryptionImpl_send_Encrypter_Started_sender(struct BLEEncryptionImpl_Instance *_instance) {
dispatch_Started(_instance->id_Encrypter);
}
void BLEEncryptionImpl_send_Encrypter_Failure_sender(struct BLEEncryptionImpl_Instance *_instance) {
dispatch_Failure(_instance->id_Encrypter);
}
void BLEEncryptionImpl_send_Encrypter_GenerateRandomNumberCompleted_sender(struct BLEEncryptionImpl_Instance *_instance, ble_random_number_t Random) {
dispatch_GenerateRandomNumberCompleted(_instance->id_Encrypter, Random);
}
void BLEEncryptionImpl_send_Encrypter_GenerateConfirmCompleted_sender(struct BLEEncryptionImpl_Instance *_instance, ble_random_number_t Confirm) {
dispatch_GenerateConfirmCompleted(_instance->id_Encrypter, Confirm);
}
void BLEEncryptionImpl_send_Encrypter_CheckConfirmCompleted_sender(struct BLEEncryptionImpl_Instance *_instance, uint8_t Correct) {
dispatch_CheckConfirmCompleted(_instance->id_Encrypter, Correct);
}
void BLEEncryptionImpl_send_Encrypter_GenerateSTKCompleted_sender(struct BLEEncryptionImpl_Instance *_instance, ble_random_number_t STK) {
dispatch_GenerateSTKCompleted(_instance->id_Encrypter, STK);
}
void BLEEncryptionImpl_send_Socket_Open_sender(struct BLEEncryptionImpl_Instance *_instance) {
dispatch_Open(_instance->id_Socket);
}
void BLEEncryptionImpl_send_Socket_Close_sender(struct BLEEncryptionImpl_Instance *_instance) {
dispatch_Close(_instance->id_Socket);
}
void BLEEncryptionImpl_send_HCICommands_Reset_sender(struct BLEEncryptionImpl_Instance *_instance) {
dispatch_Reset(_instance->id_HCICommands);
}
void BLEEncryptionImpl_send_HCICommands_SetEventMask_sender(struct BLEEncryptionImpl_Instance *_instance, set_event_mask_cp Mask) {
dispatch_SetEventMask(_instance->id_HCICommands, Mask);
}
void BLEEncryptionImpl_send_HCICommands_SetEventMaskAll_sender(struct BLEEncryptionImpl_Instance *_instance) {
dispatch_SetEventMaskAll(_instance->id_HCICommands);
}
void BLEEncryptionImpl_send_HCICommands_SetLocalName_sender(struct BLEEncryptionImpl_Instance *_instance, change_local_name_cp Name) {
dispatch_SetLocalName(_instance->id_HCICommands, Name);
}
void BLEEncryptionImpl_send_HCICommands_Disconnect_sender(struct BLEEncryptionImpl_Instance *_instance, uint16_t ConnectionHandle, uint8_t Reason) {
dispatch_Disconnect(_instance->id_HCICommands, ConnectionHandle, Reason);
}
void BLEEncryptionImpl_send_HCICommands_SetLEEventMask_sender(struct BLEEncryptionImpl_Instance *_instance, set_event_mask_cp Mask) {
dispatch_SetLEEventMask(_instance->id_HCICommands, Mask);
}
void BLEEncryptionImpl_send_HCICommands_SetLEEventMaskAll_sender(struct BLEEncryptionImpl_Instance *_instance) {
dispatch_SetLEEventMaskAll(_instance->id_HCICommands);
}
void BLEEncryptionImpl_send_HCICommands_SetLEAdvertisementParameters_sender(struct BLEEncryptionImpl_Instance *_instance, uint16_t MinInterval, uint16_t MaxInterval, uint8_t Type, uint8_t OwnAddressType, uint8_t PeerAddressType, bdaddr_t PeerAddress, uint8_t Channel, uint8_t FilterPolicy) {
dispatch_SetLEAdvertisementParameters(_instance->id_HCICommands, MinInterval, MaxInterval, Type, OwnAddressType, PeerAddressType, PeerAddress, Channel, FilterPolicy);
}
void BLEEncryptionImpl_send_HCICommands_SetLEAdvertiseEnable_sender(struct BLEEncryptionImpl_Instance *_instance, uint8_t Enable) {
dispatch_SetLEAdvertiseEnable(_instance->id_HCICommands, Enable);
}
void BLEEncryptionImpl_send_HCICommands_SetLEAdvertisingData_sender(struct BLEEncryptionImpl_Instance *_instance, uint8_t Length, ble_adv_data_t Data) {
dispatch_SetLEAdvertisingData(_instance->id_HCICommands, Length, Data);
}
void BLEEncryptionImpl_send_HCICommands_SetLEScanResponseData_sender(struct BLEEncryptionImpl_Instance *_instance, uint8_t Length, ble_adv_data_t Data) {
dispatch_SetLEScanResponseData(_instance->id_HCICommands, Length, Data);
}
void BLEEncryptionImpl_send_HCICommands_SetLEScanParameters_sender(struct BLEEncryptionImpl_Instance *_instance, uint8_t Type, uint16_t Interval, uint16_t Window, uint8_t OwnAddressType, uint8_t FilterPolicy) {
dispatch_SetLEScanParameters(_instance->id_HCICommands, Type, Interval, Window, OwnAddressType, FilterPolicy);
}
void BLEEncryptionImpl_send_HCICommands_SetLEScanEnable_sender(struct BLEEncryptionImpl_Instance *_instance, uint8_t Enable, uint8_t FilterDuplicates) {
dispatch_SetLEScanEnable(_instance->id_HCICommands, Enable, FilterDuplicates);
}
void BLEEncryptionImpl_send_HCICommands_LECreateConnection_sender(struct BLEEncryptionImpl_Instance *_instance, uint16_t Interval, uint16_t Window, uint8_t FilterPolicy, uint8_t PeerAddressType, bdaddr_t PeerAddress, uint8_t OwnAddressType, uint16_t ConnIntervalMin, uint16_t ConnIntervalMax, uint16_t ConnLatency, uint16_t SupervisionTimeout, uint16_t CELengthMin, uint16_t CELengthMax) {
dispatch_LECreateConnection(_instance->id_HCICommands, Interval, Window, FilterPolicy, PeerAddressType, PeerAddress, OwnAddressType, ConnIntervalMin, ConnIntervalMax, ConnLatency, SupervisionTimeout, CELengthMin, CELengthMax);
}
void BLEEncryptionImpl_send_HCICommands_LECreateConnectionCancel_sender(struct BLEEncryptionImpl_Instance *_instance) {
dispatch_LECreateConnectionCancel(_instance->id_HCICommands);
}
void BLEEncryptionImpl_send_HCICommands_LERand_sender(struct BLEEncryptionImpl_Instance *_instance) {
dispatch_LERand(_instance->id_HCICommands);
}
void BLEEncryptionImpl_send_HCICommands_LEEncrypt_sender(struct BLEEncryptionImpl_Instance *_instance, ble_random_number_t Key, ble_random_number_t Plaintext) {
dispatch_LEEncrypt(_instance->id_HCICommands, Key, Plaintext);
}
void BLEEncryptionImpl_send_HCICommands_LEStartEncryption_sender(struct BLEEncryptionImpl_Instance *_instance, uint16_t ConnectionHandle, ble_random_part_t Random, uint16_t EDIV, ble_random_number_t LTK) {
dispatch_LEStartEncryption(_instance->id_HCICommands, ConnectionHandle, Random, EDIV, LTK);
}
void BLEEncryptionImpl_send_SMP_SMPPairingRequest_sender(struct BLEEncryptionImpl_Instance *_instance, uint16_t Handle, uint8_t IOCapability, uint8_t OOBDataPresent, uint8_t Bonding, uint8_t MITM, uint8_t SecureConnection, uint8_t Keypress, uint8_t MaximumEncryptionKeySize, uint8_t InitiatorKeyDistribution, uint8_t ResponderKeyDistribution) {
dispatch_SMPPairingRequest(_instance->id_SMP, Handle, IOCapability, OOBDataPresent, Bonding, MITM, SecureConnection, Keypress, MaximumEncryptionKeySize, InitiatorKeyDistribution, ResponderKeyDistribution);
}
void BLEEncryptionImpl_send_SMP_SMPPairingResponse_sender(struct BLEEncryptionImpl_Instance *_instance, uint16_t Handle, uint8_t IOCapability, uint8_t OOBDataPresent, uint8_t Bonding, uint8_t MITM, uint8_t SecureConnection, uint8_t Keypress, uint8_t MaximumEncryptionKeySize, uint8_t InitiatorKeyDistribution, uint8_t ResponderKeyDistribution) {
dispatch_SMPPairingResponse(_instance->id_SMP, Handle, IOCapability, OOBDataPresent, Bonding, MITM, SecureConnection, Keypress, MaximumEncryptionKeySize, InitiatorKeyDistribution, ResponderKeyDistribution);
}
void BLEEncryptionImpl_send_SMP_SMPPairingConfirm_sender(struct BLEEncryptionImpl_Instance *_instance, uint16_t Handle, ble_random_number_t ConfirmValue) {
dispatch_SMPPairingConfirm(_instance->id_SMP, Handle, ConfirmValue);
}
void BLEEncryptionImpl_send_SMP_SMPPairingRandom_sender(struct BLEEncryptionImpl_Instance *_instance, uint16_t Handle, ble_random_number_t RandomValue) {
dispatch_SMPPairingRandom(_instance->id_SMP, Handle, RandomValue);
}
void BLEEncryptionImpl_send_SMP_SMPPairingFailed_sender(struct BLEEncryptionImpl_Instance *_instance, uint16_t Handle, uint8_t Reason) {
dispatch_SMPPairingFailed(_instance->id_SMP, Handle, Reason);
}
void BLEEncryptionImpl_send_SMP_SMPPairingPublicKey_sender(struct BLEEncryptionImpl_Instance *_instance, uint16_t Handle, smp_public_key_t KeyX, smp_public_key_t KeyY) {
dispatch_SMPPairingPublicKey(_instance->id_SMP, Handle, KeyX, KeyY);
}
void BLEEncryptionImpl_send_SMP_SMPPairingDHKeyCheck_sender(struct BLEEncryptionImpl_Instance *_instance, uint16_t Handle, ble_random_number_t DHKeyCheck) {
dispatch_SMPPairingDHKeyCheck(_instance->id_SMP, Handle, DHKeyCheck);
}
void BLEEncryptionImpl_send_SMP_SMPKeypressNotification_sender(struct BLEEncryptionImpl_Instance *_instance, uint16_t Handle, uint8_t Type) {
dispatch_SMPKeypressNotification(_instance->id_SMP, Handle, Type);
}
void BLEEncryptionImpl_send_SMP_SMPEncryptionInformation_sender(struct BLEEncryptionImpl_Instance *_instance, uint16_t Handle, ble_random_number_t LongTermKey) {
dispatch_SMPEncryptionInformation(_instance->id_SMP, Handle, LongTermKey);
}
void BLEEncryptionImpl_send_SMP_SMPMasterIdentification_sender(struct BLEEncryptionImpl_Instance *_instance, uint16_t Handle, uint16_t EDIV, ble_random_part_t Rand) {
dispatch_SMPMasterIdentification(_instance->id_SMP, Handle, EDIV, Rand);
}
void BLEEncryptionImpl_send_SMP_SMPIdentityInformation_sender(struct BLEEncryptionImpl_Instance *_instance, uint16_t Handle, ble_random_number_t IdentityResolvingKey) {
dispatch_SMPIdentityInformation(_instance->id_SMP, Handle, IdentityResolvingKey);
}
void BLEEncryptionImpl_send_SMP_SMPIdentityAddressInformation_sender(struct BLEEncryptionImpl_Instance *_instance, uint16_t Handle, uint8_t AddressType, bdaddr_t Address) {
dispatch_SMPIdentityAddressInformation(_instance->id_SMP, Handle, AddressType, Address);
}
void BLEEncryptionImpl_send_SMP_SMPSigningInformation_sender(struct BLEEncryptionImpl_Instance *_instance, uint16_t Handle, ble_random_number_t SignatureKey) {
dispatch_SMPSigningInformation(_instance->id_SMP, Handle, SignatureKey);
}
void BLEEncryptionImpl_send_SMP_SMPSecurityRequest_sender(struct BLEEncryptionImpl_Instance *_instance, uint16_t Handle, uint8_t Bonding, uint8_t MITM, uint8_t SecureConnection, uint8_t Keypress) {
dispatch_SMPSecurityRequest(_instance->id_SMP, Handle, Bonding, MITM, SecureConnection, Keypress);
}
void BLEEncryptionImpl_send_ATT_ATTFindInformationRequest_sender(struct BLEEncryptionImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t StartingHandle, uint16_t EndingHandle) {
dispatch_ATTFindInformationRequest(_instance->id_ATT, ConnectionHandle, StartingHandle, EndingHandle);
}
void BLEEncryptionImpl_send_ATT_ATTFindInformationResponse_sender(struct BLEEncryptionImpl_Instance *_instance, uint16_t ConnectionHandle, uint8_t Format, ble_gatt_data_t InformationData) {
dispatch_ATTFindInformationResponse(_instance->id_ATT, ConnectionHandle, Format, InformationData);
}
void BLEEncryptionImpl_send_ATT_ATTFindInformationError_sender(struct BLEEncryptionImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error) {
dispatch_ATTFindInformationError(_instance->id_ATT, ConnectionHandle, AttributeHandle, Error);
}
void BLEEncryptionImpl_send_ATT_ATTReadByTypeRequest_sender(struct BLEEncryptionImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t StartingHandle, uint16_t EndingHandle, ble_uuid_t AttributeType) {
dispatch_ATTReadByTypeRequest(_instance->id_ATT, ConnectionHandle, StartingHandle, EndingHandle, AttributeType);
}
void BLEEncryptionImpl_send_ATT_ATTReadByTypeResponse_sender(struct BLEEncryptionImpl_Instance *_instance, uint16_t ConnectionHandle, uint8_t Length, ble_gatt_data_t AttributeDataList) {
dispatch_ATTReadByTypeResponse(_instance->id_ATT, ConnectionHandle, Length, AttributeDataList);
}
void BLEEncryptionImpl_send_ATT_ATTReadByTypeError_sender(struct BLEEncryptionImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error) {
dispatch_ATTReadByTypeError(_instance->id_ATT, ConnectionHandle, AttributeHandle, Error);
}
void BLEEncryptionImpl_send_ATT_ATTReadRequest_sender(struct BLEEncryptionImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle) {
dispatch_ATTReadRequest(_instance->id_ATT, ConnectionHandle, AttributeHandle);
}
void BLEEncryptionImpl_send_ATT_ATTReadResponse_sender(struct BLEEncryptionImpl_Instance *_instance, uint16_t ConnectionHandle, ble_gatt_data_t AttributeValue) {
dispatch_ATTReadResponse(_instance->id_ATT, ConnectionHandle, AttributeValue);
}
void BLEEncryptionImpl_send_ATT_ATTReadError_sender(struct BLEEncryptionImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error) {
dispatch_ATTReadError(_instance->id_ATT, ConnectionHandle, AttributeHandle, Error);
}
void BLEEncryptionImpl_send_ATT_ATTReadByGroupTypeRequest_sender(struct BLEEncryptionImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t StartingHandle, uint16_t EndingHandle, ble_uuid_t AttributeGroupType) {
dispatch_ATTReadByGroupTypeRequest(_instance->id_ATT, ConnectionHandle, StartingHandle, EndingHandle, AttributeGroupType);
}
void BLEEncryptionImpl_send_ATT_ATTReadByGroupTypeResponse_sender(struct BLEEncryptionImpl_Instance *_instance, uint16_t ConnectionHandle, uint8_t Length, ble_gatt_data_t AttributeDataList) {
dispatch_ATTReadByGroupTypeResponse(_instance->id_ATT, ConnectionHandle, Length, AttributeDataList);
}
void BLEEncryptionImpl_send_ATT_ATTReadByGroupTypeError_sender(struct BLEEncryptionImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error) {
dispatch_ATTReadByGroupTypeError(_instance->id_ATT, ConnectionHandle, AttributeHandle, Error);
}
void BLEEncryptionImpl_send_ATT_ATTWriteRequest_sender(struct BLEEncryptionImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, ble_gatt_data_t AttributeValue) {
dispatch_ATTWriteRequest(_instance->id_ATT, ConnectionHandle, AttributeHandle, AttributeValue);
}
void BLEEncryptionImpl_send_ATT_ATTWriteResponse_sender(struct BLEEncryptionImpl_Instance *_instance, uint16_t ConnectionHandle) {
dispatch_ATTWriteResponse(_instance->id_ATT, ConnectionHandle);
}
void BLEEncryptionImpl_send_ATT_ATTWriteError_sender(struct BLEEncryptionImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error) {
dispatch_ATTWriteError(_instance->id_ATT, ConnectionHandle, AttributeHandle, Error);
}
void BLEEncryptionImpl_send_ATT_ATTWriteCommand_sender(struct BLEEncryptionImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, ble_gatt_data_t AttributeValue) {
dispatch_ATTWriteCommand(_instance->id_ATT, ConnectionHandle, AttributeHandle, AttributeValue);
}
void BLEEncryptionImpl_send_ATT_ATTHandleValueNotification_sender(struct BLEEncryptionImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, ble_gatt_data_t AttributeValue) {
dispatch_ATTHandleValueNotification(_instance->id_ATT, ConnectionHandle, AttributeHandle, AttributeValue);
}
void BLEEncryptionImpl_send_ATT_ATTHandleValueIndication_sender(struct BLEEncryptionImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, ble_gatt_data_t AttributeValue) {
dispatch_ATTHandleValueIndication(_instance->id_ATT, ConnectionHandle, AttributeHandle, AttributeValue);
}
void BLEEncryptionImpl_send_ATT_ATTHandleValueConfirmation_sender(struct BLEEncryptionImpl_Instance *_instance, uint16_t ConnectionHandle) {
dispatch_ATTHandleValueConfirmation(_instance->id_ATT, ConnectionHandle);
}
void Main_send_Signals_Quit_sender(struct Main_Instance *_instance, int16_t code) {
dispatch_Quit(_instance->id_Signals, code);
}
void Main_send_Initialiser_Start_sender(struct Main_Instance *_instance) {
dispatch_Start(_instance->id_Initialiser);
}
void Main_send_Initialiser_Stop_sender(struct Main_Instance *_instance) {
dispatch_Stop(_instance->id_Initialiser);
}
void Main_send_Connecter_Connect_sender(struct Main_Instance *_instance) {
dispatch_Connect(_instance->id_Connecter);
}
void Main_send_Connecter_ConnectTo_sender(struct Main_Instance *_instance, uint8_t AddressType, bdaddr_t Address) {
dispatch_ConnectTo(_instance->id_Connecter, AddressType, Address);
}
void Main_send_Connecter_Stop_sender(struct Main_Instance *_instance) {
dispatch_Stop(_instance->id_Connecter);
}
void Main_send_SMP_SMPPairingRequest_sender(struct Main_Instance *_instance, uint16_t Handle, uint8_t IOCapability, uint8_t OOBDataPresent, uint8_t Bonding, uint8_t MITM, uint8_t SecureConnection, uint8_t Keypress, uint8_t MaximumEncryptionKeySize, uint8_t InitiatorKeyDistribution, uint8_t ResponderKeyDistribution) {
dispatch_SMPPairingRequest(_instance->id_SMP, Handle, IOCapability, OOBDataPresent, Bonding, MITM, SecureConnection, Keypress, MaximumEncryptionKeySize, InitiatorKeyDistribution, ResponderKeyDistribution);
}
void Main_send_SMP_SMPPairingResponse_sender(struct Main_Instance *_instance, uint16_t Handle, uint8_t IOCapability, uint8_t OOBDataPresent, uint8_t Bonding, uint8_t MITM, uint8_t SecureConnection, uint8_t Keypress, uint8_t MaximumEncryptionKeySize, uint8_t InitiatorKeyDistribution, uint8_t ResponderKeyDistribution) {
dispatch_SMPPairingResponse(_instance->id_SMP, Handle, IOCapability, OOBDataPresent, Bonding, MITM, SecureConnection, Keypress, MaximumEncryptionKeySize, InitiatorKeyDistribution, ResponderKeyDistribution);
}
void Main_send_SMP_SMPPairingConfirm_sender(struct Main_Instance *_instance, uint16_t Handle, ble_random_number_t ConfirmValue) {
dispatch_SMPPairingConfirm(_instance->id_SMP, Handle, ConfirmValue);
}
void Main_send_SMP_SMPPairingRandom_sender(struct Main_Instance *_instance, uint16_t Handle, ble_random_number_t RandomValue) {
dispatch_SMPPairingRandom(_instance->id_SMP, Handle, RandomValue);
}
void Main_send_SMP_SMPPairingFailed_sender(struct Main_Instance *_instance, uint16_t Handle, uint8_t Reason) {
dispatch_SMPPairingFailed(_instance->id_SMP, Handle, Reason);
}
void Main_send_SMP_SMPPairingPublicKey_sender(struct Main_Instance *_instance, uint16_t Handle, smp_public_key_t KeyX, smp_public_key_t KeyY) {
dispatch_SMPPairingPublicKey(_instance->id_SMP, Handle, KeyX, KeyY);
}
void Main_send_SMP_SMPPairingDHKeyCheck_sender(struct Main_Instance *_instance, uint16_t Handle, ble_random_number_t DHKeyCheck) {
dispatch_SMPPairingDHKeyCheck(_instance->id_SMP, Handle, DHKeyCheck);
}
void Main_send_SMP_SMPKeypressNotification_sender(struct Main_Instance *_instance, uint16_t Handle, uint8_t Type) {
dispatch_SMPKeypressNotification(_instance->id_SMP, Handle, Type);
}
void Main_send_SMP_SMPEncryptionInformation_sender(struct Main_Instance *_instance, uint16_t Handle, ble_random_number_t LongTermKey) {
dispatch_SMPEncryptionInformation(_instance->id_SMP, Handle, LongTermKey);
}
void Main_send_SMP_SMPMasterIdentification_sender(struct Main_Instance *_instance, uint16_t Handle, uint16_t EDIV, ble_random_part_t Rand) {
dispatch_SMPMasterIdentification(_instance->id_SMP, Handle, EDIV, Rand);
}
void Main_send_SMP_SMPIdentityInformation_sender(struct Main_Instance *_instance, uint16_t Handle, ble_random_number_t IdentityResolvingKey) {
dispatch_SMPIdentityInformation(_instance->id_SMP, Handle, IdentityResolvingKey);
}
void Main_send_SMP_SMPIdentityAddressInformation_sender(struct Main_Instance *_instance, uint16_t Handle, uint8_t AddressType, bdaddr_t Address) {
dispatch_SMPIdentityAddressInformation(_instance->id_SMP, Handle, AddressType, Address);
}
void Main_send_SMP_SMPSigningInformation_sender(struct Main_Instance *_instance, uint16_t Handle, ble_random_number_t SignatureKey) {
dispatch_SMPSigningInformation(_instance->id_SMP, Handle, SignatureKey);
}
void Main_send_SMP_SMPSecurityRequest_sender(struct Main_Instance *_instance, uint16_t Handle, uint8_t Bonding, uint8_t MITM, uint8_t SecureConnection, uint8_t Keypress) {
dispatch_SMPSecurityRequest(_instance->id_SMP, Handle, Bonding, MITM, SecureConnection, Keypress);
}
void Main_send_ATT_ATTFindInformationRequest_sender(struct Main_Instance *_instance, uint16_t ConnectionHandle, uint16_t StartingHandle, uint16_t EndingHandle) {
dispatch_ATTFindInformationRequest(_instance->id_ATT, ConnectionHandle, StartingHandle, EndingHandle);
}
void Main_send_ATT_ATTFindInformationResponse_sender(struct Main_Instance *_instance, uint16_t ConnectionHandle, uint8_t Format, ble_gatt_data_t InformationData) {
dispatch_ATTFindInformationResponse(_instance->id_ATT, ConnectionHandle, Format, InformationData);
}
void Main_send_ATT_ATTFindInformationError_sender(struct Main_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error) {
dispatch_ATTFindInformationError(_instance->id_ATT, ConnectionHandle, AttributeHandle, Error);
}
void Main_send_ATT_ATTReadByTypeRequest_sender(struct Main_Instance *_instance, uint16_t ConnectionHandle, uint16_t StartingHandle, uint16_t EndingHandle, ble_uuid_t AttributeType) {
dispatch_ATTReadByTypeRequest(_instance->id_ATT, ConnectionHandle, StartingHandle, EndingHandle, AttributeType);
}
void Main_send_ATT_ATTReadByTypeResponse_sender(struct Main_Instance *_instance, uint16_t ConnectionHandle, uint8_t Length, ble_gatt_data_t AttributeDataList) {
dispatch_ATTReadByTypeResponse(_instance->id_ATT, ConnectionHandle, Length, AttributeDataList);
}
void Main_send_ATT_ATTReadByTypeError_sender(struct Main_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error) {
dispatch_ATTReadByTypeError(_instance->id_ATT, ConnectionHandle, AttributeHandle, Error);
}
void Main_send_ATT_ATTReadRequest_sender(struct Main_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle) {
dispatch_ATTReadRequest(_instance->id_ATT, ConnectionHandle, AttributeHandle);
}
void Main_send_ATT_ATTReadResponse_sender(struct Main_Instance *_instance, uint16_t ConnectionHandle, ble_gatt_data_t AttributeValue) {
dispatch_ATTReadResponse(_instance->id_ATT, ConnectionHandle, AttributeValue);
}
void Main_send_ATT_ATTReadError_sender(struct Main_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error) {
dispatch_ATTReadError(_instance->id_ATT, ConnectionHandle, AttributeHandle, Error);
}
void Main_send_ATT_ATTReadByGroupTypeRequest_sender(struct Main_Instance *_instance, uint16_t ConnectionHandle, uint16_t StartingHandle, uint16_t EndingHandle, ble_uuid_t AttributeGroupType) {
dispatch_ATTReadByGroupTypeRequest(_instance->id_ATT, ConnectionHandle, StartingHandle, EndingHandle, AttributeGroupType);
}
void Main_send_ATT_ATTReadByGroupTypeResponse_sender(struct Main_Instance *_instance, uint16_t ConnectionHandle, uint8_t Length, ble_gatt_data_t AttributeDataList) {
dispatch_ATTReadByGroupTypeResponse(_instance->id_ATT, ConnectionHandle, Length, AttributeDataList);
}
void Main_send_ATT_ATTReadByGroupTypeError_sender(struct Main_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error) {
dispatch_ATTReadByGroupTypeError(_instance->id_ATT, ConnectionHandle, AttributeHandle, Error);
}
void Main_send_ATT_ATTWriteRequest_sender(struct Main_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, ble_gatt_data_t AttributeValue) {
dispatch_ATTWriteRequest(_instance->id_ATT, ConnectionHandle, AttributeHandle, AttributeValue);
}
void Main_send_ATT_ATTWriteResponse_sender(struct Main_Instance *_instance, uint16_t ConnectionHandle) {
dispatch_ATTWriteResponse(_instance->id_ATT, ConnectionHandle);
}
void Main_send_ATT_ATTWriteError_sender(struct Main_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error) {
dispatch_ATTWriteError(_instance->id_ATT, ConnectionHandle, AttributeHandle, Error);
}
void Main_send_ATT_ATTWriteCommand_sender(struct Main_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, ble_gatt_data_t AttributeValue) {
dispatch_ATTWriteCommand(_instance->id_ATT, ConnectionHandle, AttributeHandle, AttributeValue);
}
void Main_send_ATT_ATTHandleValueNotification_sender(struct Main_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, ble_gatt_data_t AttributeValue) {
dispatch_ATTHandleValueNotification(_instance->id_ATT, ConnectionHandle, AttributeHandle, AttributeValue);
}
void Main_send_ATT_ATTHandleValueIndication_sender(struct Main_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, ble_gatt_data_t AttributeValue) {
dispatch_ATTHandleValueIndication(_instance->id_ATT, ConnectionHandle, AttributeHandle, AttributeValue);
}
void Main_send_ATT_ATTHandleValueConfirmation_sender(struct Main_Instance *_instance, uint16_t ConnectionHandle) {
dispatch_ATTHandleValueConfirmation(_instance->id_ATT, ConnectionHandle);
}
void Main_send_Encrypter_Start_sender(struct Main_Instance *_instance) {
dispatch_Start(_instance->id_Encrypter);
}
void Main_send_Encrypter_GenerateRandomNumber_sender(struct Main_Instance *_instance) {
dispatch_GenerateRandomNumber(_instance->id_Encrypter);
}
void Main_send_Encrypter_GenerateConfirm_sender(struct Main_Instance *_instance, ble_random_number_t Rand, uint8_t IAT, bdaddr_t IA, uint8_t RAT, bdaddr_t RA) {
dispatch_GenerateConfirm(_instance->id_Encrypter, Rand, IAT, IA, RAT, RA);
}
void Main_send_Encrypter_CheckConfirm_sender(struct Main_Instance *_instance, ble_random_number_t Received, ble_random_number_t Calculated) {
dispatch_CheckConfirm(_instance->id_Encrypter, Received, Calculated);
}
void Main_send_Encrypter_GenerateSTK_sender(struct Main_Instance *_instance, ble_random_number_t Srand, ble_random_number_t Mrand) {
dispatch_GenerateSTK(_instance->id_Encrypter, Srand, Mrand);
}
void Main_send_Socket_Open_sender(struct Main_Instance *_instance) {
dispatch_Open(_instance->id_Socket);
}
void Main_send_Socket_Close_sender(struct Main_Instance *_instance) {
dispatch_Close(_instance->id_Socket);
}
void Main_send_HCICommands_Reset_sender(struct Main_Instance *_instance) {
dispatch_Reset(_instance->id_HCICommands);
}
void Main_send_HCICommands_SetEventMask_sender(struct Main_Instance *_instance, set_event_mask_cp Mask) {
dispatch_SetEventMask(_instance->id_HCICommands, Mask);
}
void Main_send_HCICommands_SetEventMaskAll_sender(struct Main_Instance *_instance) {
dispatch_SetEventMaskAll(_instance->id_HCICommands);
}
void Main_send_HCICommands_SetLocalName_sender(struct Main_Instance *_instance, change_local_name_cp Name) {
dispatch_SetLocalName(_instance->id_HCICommands, Name);
}
void Main_send_HCICommands_Disconnect_sender(struct Main_Instance *_instance, uint16_t ConnectionHandle, uint8_t Reason) {
dispatch_Disconnect(_instance->id_HCICommands, ConnectionHandle, Reason);
}
void Main_send_HCICommands_SetLEEventMask_sender(struct Main_Instance *_instance, set_event_mask_cp Mask) {
dispatch_SetLEEventMask(_instance->id_HCICommands, Mask);
}
void Main_send_HCICommands_SetLEEventMaskAll_sender(struct Main_Instance *_instance) {
dispatch_SetLEEventMaskAll(_instance->id_HCICommands);
}
void Main_send_HCICommands_SetLEAdvertisementParameters_sender(struct Main_Instance *_instance, uint16_t MinInterval, uint16_t MaxInterval, uint8_t Type, uint8_t OwnAddressType, uint8_t PeerAddressType, bdaddr_t PeerAddress, uint8_t Channel, uint8_t FilterPolicy) {
dispatch_SetLEAdvertisementParameters(_instance->id_HCICommands, MinInterval, MaxInterval, Type, OwnAddressType, PeerAddressType, PeerAddress, Channel, FilterPolicy);
}
void Main_send_HCICommands_SetLEAdvertiseEnable_sender(struct Main_Instance *_instance, uint8_t Enable) {
dispatch_SetLEAdvertiseEnable(_instance->id_HCICommands, Enable);
}
void Main_send_HCICommands_SetLEAdvertisingData_sender(struct Main_Instance *_instance, uint8_t Length, ble_adv_data_t Data) {
dispatch_SetLEAdvertisingData(_instance->id_HCICommands, Length, Data);
}
void Main_send_HCICommands_SetLEScanResponseData_sender(struct Main_Instance *_instance, uint8_t Length, ble_adv_data_t Data) {
dispatch_SetLEScanResponseData(_instance->id_HCICommands, Length, Data);
}
void Main_send_HCICommands_SetLEScanParameters_sender(struct Main_Instance *_instance, uint8_t Type, uint16_t Interval, uint16_t Window, uint8_t OwnAddressType, uint8_t FilterPolicy) {
dispatch_SetLEScanParameters(_instance->id_HCICommands, Type, Interval, Window, OwnAddressType, FilterPolicy);
}
void Main_send_HCICommands_SetLEScanEnable_sender(struct Main_Instance *_instance, uint8_t Enable, uint8_t FilterDuplicates) {
dispatch_SetLEScanEnable(_instance->id_HCICommands, Enable, FilterDuplicates);
}
void Main_send_HCICommands_LECreateConnection_sender(struct Main_Instance *_instance, uint16_t Interval, uint16_t Window, uint8_t FilterPolicy, uint8_t PeerAddressType, bdaddr_t PeerAddress, uint8_t OwnAddressType, uint16_t ConnIntervalMin, uint16_t ConnIntervalMax, uint16_t ConnLatency, uint16_t SupervisionTimeout, uint16_t CELengthMin, uint16_t CELengthMax) {
dispatch_LECreateConnection(_instance->id_HCICommands, Interval, Window, FilterPolicy, PeerAddressType, PeerAddress, OwnAddressType, ConnIntervalMin, ConnIntervalMax, ConnLatency, SupervisionTimeout, CELengthMin, CELengthMax);
}
void Main_send_HCICommands_LECreateConnectionCancel_sender(struct Main_Instance *_instance) {
dispatch_LECreateConnectionCancel(_instance->id_HCICommands);
}
void Main_send_HCICommands_LERand_sender(struct Main_Instance *_instance) {
dispatch_LERand(_instance->id_HCICommands);
}
void Main_send_HCICommands_LEEncrypt_sender(struct Main_Instance *_instance, ble_random_number_t Key, ble_random_number_t Plaintext) {
dispatch_LEEncrypt(_instance->id_HCICommands, Key, Plaintext);
}
void Main_send_HCICommands_LEStartEncryption_sender(struct Main_Instance *_instance, uint16_t ConnectionHandle, ble_random_part_t Random, uint16_t EDIV, ble_random_number_t LTK) {
dispatch_LEStartEncryption(_instance->id_HCICommands, ConnectionHandle, Random, EDIV, LTK);
}


void initialize_configuration_BLE_PAIR() {
// Initialize connectors
register_BLEEncryptionImpl_send_Encrypter_Started_listener(&BLEEncryptionImpl_send_Encrypter_Started_sender);
register_BLEEncryptionImpl_send_Encrypter_Failure_listener(&BLEEncryptionImpl_send_Encrypter_Failure_sender);
register_BLEEncryptionImpl_send_Encrypter_GenerateRandomNumberCompleted_listener(&BLEEncryptionImpl_send_Encrypter_GenerateRandomNumberCompleted_sender);
register_BLEEncryptionImpl_send_Encrypter_GenerateConfirmCompleted_listener(&BLEEncryptionImpl_send_Encrypter_GenerateConfirmCompleted_sender);
register_BLEEncryptionImpl_send_Encrypter_CheckConfirmCompleted_listener(&BLEEncryptionImpl_send_Encrypter_CheckConfirmCompleted_sender);
register_BLEEncryptionImpl_send_Encrypter_GenerateSTKCompleted_listener(&BLEEncryptionImpl_send_Encrypter_GenerateSTKCompleted_sender);
register_BLEEncryptionImpl_send_Socket_Open_listener(&BLEEncryptionImpl_send_Socket_Open_sender);
register_BLEEncryptionImpl_send_Socket_Close_listener(&BLEEncryptionImpl_send_Socket_Close_sender);
register_BLEEncryptionImpl_send_HCICommands_Reset_listener(&BLEEncryptionImpl_send_HCICommands_Reset_sender);
register_BLEEncryptionImpl_send_HCICommands_SetEventMask_listener(&BLEEncryptionImpl_send_HCICommands_SetEventMask_sender);
register_BLEEncryptionImpl_send_HCICommands_SetEventMaskAll_listener(&BLEEncryptionImpl_send_HCICommands_SetEventMaskAll_sender);
register_BLEEncryptionImpl_send_HCICommands_SetLocalName_listener(&BLEEncryptionImpl_send_HCICommands_SetLocalName_sender);
register_BLEEncryptionImpl_send_HCICommands_Disconnect_listener(&BLEEncryptionImpl_send_HCICommands_Disconnect_sender);
register_BLEEncryptionImpl_send_HCICommands_SetLEEventMask_listener(&BLEEncryptionImpl_send_HCICommands_SetLEEventMask_sender);
register_BLEEncryptionImpl_send_HCICommands_SetLEEventMaskAll_listener(&BLEEncryptionImpl_send_HCICommands_SetLEEventMaskAll_sender);
register_BLEEncryptionImpl_send_HCICommands_SetLEAdvertisementParameters_listener(&BLEEncryptionImpl_send_HCICommands_SetLEAdvertisementParameters_sender);
register_BLEEncryptionImpl_send_HCICommands_SetLEAdvertiseEnable_listener(&BLEEncryptionImpl_send_HCICommands_SetLEAdvertiseEnable_sender);
register_BLEEncryptionImpl_send_HCICommands_SetLEAdvertisingData_listener(&BLEEncryptionImpl_send_HCICommands_SetLEAdvertisingData_sender);
register_BLEEncryptionImpl_send_HCICommands_SetLEScanResponseData_listener(&BLEEncryptionImpl_send_HCICommands_SetLEScanResponseData_sender);
register_BLEEncryptionImpl_send_HCICommands_SetLEScanParameters_listener(&BLEEncryptionImpl_send_HCICommands_SetLEScanParameters_sender);
register_BLEEncryptionImpl_send_HCICommands_SetLEScanEnable_listener(&BLEEncryptionImpl_send_HCICommands_SetLEScanEnable_sender);
register_BLEEncryptionImpl_send_HCICommands_LECreateConnection_listener(&BLEEncryptionImpl_send_HCICommands_LECreateConnection_sender);
register_BLEEncryptionImpl_send_HCICommands_LECreateConnectionCancel_listener(&BLEEncryptionImpl_send_HCICommands_LECreateConnectionCancel_sender);
register_BLEEncryptionImpl_send_HCICommands_LERand_listener(&BLEEncryptionImpl_send_HCICommands_LERand_sender);
register_BLEEncryptionImpl_send_HCICommands_LEEncrypt_listener(&BLEEncryptionImpl_send_HCICommands_LEEncrypt_sender);
register_BLEEncryptionImpl_send_HCICommands_LEStartEncryption_listener(&BLEEncryptionImpl_send_HCICommands_LEStartEncryption_sender);
register_BLEEncryptionImpl_send_SMP_SMPPairingRequest_listener(&BLEEncryptionImpl_send_SMP_SMPPairingRequest_sender);
register_BLEEncryptionImpl_send_SMP_SMPPairingResponse_listener(&BLEEncryptionImpl_send_SMP_SMPPairingResponse_sender);
register_BLEEncryptionImpl_send_SMP_SMPPairingConfirm_listener(&BLEEncryptionImpl_send_SMP_SMPPairingConfirm_sender);
register_BLEEncryptionImpl_send_SMP_SMPPairingRandom_listener(&BLEEncryptionImpl_send_SMP_SMPPairingRandom_sender);
register_BLEEncryptionImpl_send_SMP_SMPPairingFailed_listener(&BLEEncryptionImpl_send_SMP_SMPPairingFailed_sender);
register_BLEEncryptionImpl_send_SMP_SMPPairingPublicKey_listener(&BLEEncryptionImpl_send_SMP_SMPPairingPublicKey_sender);
register_BLEEncryptionImpl_send_SMP_SMPPairingDHKeyCheck_listener(&BLEEncryptionImpl_send_SMP_SMPPairingDHKeyCheck_sender);
register_BLEEncryptionImpl_send_SMP_SMPKeypressNotification_listener(&BLEEncryptionImpl_send_SMP_SMPKeypressNotification_sender);
register_BLEEncryptionImpl_send_SMP_SMPEncryptionInformation_listener(&BLEEncryptionImpl_send_SMP_SMPEncryptionInformation_sender);
register_BLEEncryptionImpl_send_SMP_SMPMasterIdentification_listener(&BLEEncryptionImpl_send_SMP_SMPMasterIdentification_sender);
register_BLEEncryptionImpl_send_SMP_SMPIdentityInformation_listener(&BLEEncryptionImpl_send_SMP_SMPIdentityInformation_sender);
register_BLEEncryptionImpl_send_SMP_SMPIdentityAddressInformation_listener(&BLEEncryptionImpl_send_SMP_SMPIdentityAddressInformation_sender);
register_BLEEncryptionImpl_send_SMP_SMPSigningInformation_listener(&BLEEncryptionImpl_send_SMP_SMPSigningInformation_sender);
register_BLEEncryptionImpl_send_SMP_SMPSecurityRequest_listener(&BLEEncryptionImpl_send_SMP_SMPSecurityRequest_sender);
register_BLEEncryptionImpl_send_ATT_ATTFindInformationRequest_listener(&BLEEncryptionImpl_send_ATT_ATTFindInformationRequest_sender);
register_BLEEncryptionImpl_send_ATT_ATTFindInformationResponse_listener(&BLEEncryptionImpl_send_ATT_ATTFindInformationResponse_sender);
register_BLEEncryptionImpl_send_ATT_ATTFindInformationError_listener(&BLEEncryptionImpl_send_ATT_ATTFindInformationError_sender);
register_BLEEncryptionImpl_send_ATT_ATTReadByTypeRequest_listener(&BLEEncryptionImpl_send_ATT_ATTReadByTypeRequest_sender);
register_BLEEncryptionImpl_send_ATT_ATTReadByTypeResponse_listener(&BLEEncryptionImpl_send_ATT_ATTReadByTypeResponse_sender);
register_BLEEncryptionImpl_send_ATT_ATTReadByTypeError_listener(&BLEEncryptionImpl_send_ATT_ATTReadByTypeError_sender);
register_BLEEncryptionImpl_send_ATT_ATTReadRequest_listener(&BLEEncryptionImpl_send_ATT_ATTReadRequest_sender);
register_BLEEncryptionImpl_send_ATT_ATTReadResponse_listener(&BLEEncryptionImpl_send_ATT_ATTReadResponse_sender);
register_BLEEncryptionImpl_send_ATT_ATTReadError_listener(&BLEEncryptionImpl_send_ATT_ATTReadError_sender);
register_BLEEncryptionImpl_send_ATT_ATTReadByGroupTypeRequest_listener(&BLEEncryptionImpl_send_ATT_ATTReadByGroupTypeRequest_sender);
register_BLEEncryptionImpl_send_ATT_ATTReadByGroupTypeResponse_listener(&BLEEncryptionImpl_send_ATT_ATTReadByGroupTypeResponse_sender);
register_BLEEncryptionImpl_send_ATT_ATTReadByGroupTypeError_listener(&BLEEncryptionImpl_send_ATT_ATTReadByGroupTypeError_sender);
register_BLEEncryptionImpl_send_ATT_ATTWriteRequest_listener(&BLEEncryptionImpl_send_ATT_ATTWriteRequest_sender);
register_BLEEncryptionImpl_send_ATT_ATTWriteResponse_listener(&BLEEncryptionImpl_send_ATT_ATTWriteResponse_sender);
register_BLEEncryptionImpl_send_ATT_ATTWriteError_listener(&BLEEncryptionImpl_send_ATT_ATTWriteError_sender);
register_BLEEncryptionImpl_send_ATT_ATTWriteCommand_listener(&BLEEncryptionImpl_send_ATT_ATTWriteCommand_sender);
register_BLEEncryptionImpl_send_ATT_ATTHandleValueNotification_listener(&BLEEncryptionImpl_send_ATT_ATTHandleValueNotification_sender);
register_BLEEncryptionImpl_send_ATT_ATTHandleValueIndication_listener(&BLEEncryptionImpl_send_ATT_ATTHandleValueIndication_sender);
register_BLEEncryptionImpl_send_ATT_ATTHandleValueConfirmation_listener(&BLEEncryptionImpl_send_ATT_ATTHandleValueConfirmation_sender);
register_Main_send_Signals_Quit_listener(&Main_send_Signals_Quit_sender);
register_Main_send_Initialiser_Start_listener(&Main_send_Initialiser_Start_sender);
register_Main_send_Initialiser_Stop_listener(&Main_send_Initialiser_Stop_sender);
register_Main_send_Connecter_Connect_listener(&Main_send_Connecter_Connect_sender);
register_Main_send_Connecter_ConnectTo_listener(&Main_send_Connecter_ConnectTo_sender);
register_Main_send_Connecter_Stop_listener(&Main_send_Connecter_Stop_sender);
register_Main_send_SMP_SMPPairingRequest_listener(&Main_send_SMP_SMPPairingRequest_sender);
register_Main_send_SMP_SMPPairingResponse_listener(&Main_send_SMP_SMPPairingResponse_sender);
register_Main_send_SMP_SMPPairingConfirm_listener(&Main_send_SMP_SMPPairingConfirm_sender);
register_Main_send_SMP_SMPPairingRandom_listener(&Main_send_SMP_SMPPairingRandom_sender);
register_Main_send_SMP_SMPPairingFailed_listener(&Main_send_SMP_SMPPairingFailed_sender);
register_Main_send_SMP_SMPPairingPublicKey_listener(&Main_send_SMP_SMPPairingPublicKey_sender);
register_Main_send_SMP_SMPPairingDHKeyCheck_listener(&Main_send_SMP_SMPPairingDHKeyCheck_sender);
register_Main_send_SMP_SMPKeypressNotification_listener(&Main_send_SMP_SMPKeypressNotification_sender);
register_Main_send_SMP_SMPEncryptionInformation_listener(&Main_send_SMP_SMPEncryptionInformation_sender);
register_Main_send_SMP_SMPMasterIdentification_listener(&Main_send_SMP_SMPMasterIdentification_sender);
register_Main_send_SMP_SMPIdentityInformation_listener(&Main_send_SMP_SMPIdentityInformation_sender);
register_Main_send_SMP_SMPIdentityAddressInformation_listener(&Main_send_SMP_SMPIdentityAddressInformation_sender);
register_Main_send_SMP_SMPSigningInformation_listener(&Main_send_SMP_SMPSigningInformation_sender);
register_Main_send_SMP_SMPSecurityRequest_listener(&Main_send_SMP_SMPSecurityRequest_sender);
register_Main_send_ATT_ATTFindInformationRequest_listener(&Main_send_ATT_ATTFindInformationRequest_sender);
register_Main_send_ATT_ATTFindInformationResponse_listener(&Main_send_ATT_ATTFindInformationResponse_sender);
register_Main_send_ATT_ATTFindInformationError_listener(&Main_send_ATT_ATTFindInformationError_sender);
register_Main_send_ATT_ATTReadByTypeRequest_listener(&Main_send_ATT_ATTReadByTypeRequest_sender);
register_Main_send_ATT_ATTReadByTypeResponse_listener(&Main_send_ATT_ATTReadByTypeResponse_sender);
register_Main_send_ATT_ATTReadByTypeError_listener(&Main_send_ATT_ATTReadByTypeError_sender);
register_Main_send_ATT_ATTReadRequest_listener(&Main_send_ATT_ATTReadRequest_sender);
register_Main_send_ATT_ATTReadResponse_listener(&Main_send_ATT_ATTReadResponse_sender);
register_Main_send_ATT_ATTReadError_listener(&Main_send_ATT_ATTReadError_sender);
register_Main_send_ATT_ATTReadByGroupTypeRequest_listener(&Main_send_ATT_ATTReadByGroupTypeRequest_sender);
register_Main_send_ATT_ATTReadByGroupTypeResponse_listener(&Main_send_ATT_ATTReadByGroupTypeResponse_sender);
register_Main_send_ATT_ATTReadByGroupTypeError_listener(&Main_send_ATT_ATTReadByGroupTypeError_sender);
register_Main_send_ATT_ATTWriteRequest_listener(&Main_send_ATT_ATTWriteRequest_sender);
register_Main_send_ATT_ATTWriteResponse_listener(&Main_send_ATT_ATTWriteResponse_sender);
register_Main_send_ATT_ATTWriteError_listener(&Main_send_ATT_ATTWriteError_sender);
register_Main_send_ATT_ATTWriteCommand_listener(&Main_send_ATT_ATTWriteCommand_sender);
register_Main_send_ATT_ATTHandleValueNotification_listener(&Main_send_ATT_ATTHandleValueNotification_sender);
register_Main_send_ATT_ATTHandleValueIndication_listener(&Main_send_ATT_ATTHandleValueIndication_sender);
register_Main_send_ATT_ATTHandleValueConfirmation_listener(&Main_send_ATT_ATTHandleValueConfirmation_sender);
register_Main_send_Encrypter_Start_listener(&Main_send_Encrypter_Start_sender);
register_Main_send_Encrypter_GenerateRandomNumber_listener(&Main_send_Encrypter_GenerateRandomNumber_sender);
register_Main_send_Encrypter_GenerateConfirm_listener(&Main_send_Encrypter_GenerateConfirm_sender);
register_Main_send_Encrypter_CheckConfirm_listener(&Main_send_Encrypter_CheckConfirm_sender);
register_Main_send_Encrypter_GenerateSTK_listener(&Main_send_Encrypter_GenerateSTK_sender);
register_Main_send_Socket_Open_listener(&Main_send_Socket_Open_sender);
register_Main_send_Socket_Close_listener(&Main_send_Socket_Close_sender);
register_Main_send_HCICommands_Reset_listener(&Main_send_HCICommands_Reset_sender);
register_Main_send_HCICommands_SetEventMask_listener(&Main_send_HCICommands_SetEventMask_sender);
register_Main_send_HCICommands_SetEventMaskAll_listener(&Main_send_HCICommands_SetEventMaskAll_sender);
register_Main_send_HCICommands_SetLocalName_listener(&Main_send_HCICommands_SetLocalName_sender);
register_Main_send_HCICommands_Disconnect_listener(&Main_send_HCICommands_Disconnect_sender);
register_Main_send_HCICommands_SetLEEventMask_listener(&Main_send_HCICommands_SetLEEventMask_sender);
register_Main_send_HCICommands_SetLEEventMaskAll_listener(&Main_send_HCICommands_SetLEEventMaskAll_sender);
register_Main_send_HCICommands_SetLEAdvertisementParameters_listener(&Main_send_HCICommands_SetLEAdvertisementParameters_sender);
register_Main_send_HCICommands_SetLEAdvertiseEnable_listener(&Main_send_HCICommands_SetLEAdvertiseEnable_sender);
register_Main_send_HCICommands_SetLEAdvertisingData_listener(&Main_send_HCICommands_SetLEAdvertisingData_sender);
register_Main_send_HCICommands_SetLEScanResponseData_listener(&Main_send_HCICommands_SetLEScanResponseData_sender);
register_Main_send_HCICommands_SetLEScanParameters_listener(&Main_send_HCICommands_SetLEScanParameters_sender);
register_Main_send_HCICommands_SetLEScanEnable_listener(&Main_send_HCICommands_SetLEScanEnable_sender);
register_Main_send_HCICommands_LECreateConnection_listener(&Main_send_HCICommands_LECreateConnection_sender);
register_Main_send_HCICommands_LECreateConnectionCancel_listener(&Main_send_HCICommands_LECreateConnectionCancel_sender);
register_Main_send_HCICommands_LERand_listener(&Main_send_HCICommands_LERand_sender);
register_Main_send_HCICommands_LEEncrypt_listener(&Main_send_HCICommands_LEEncrypt_sender);
register_Main_send_HCICommands_LEStartEncryption_listener(&Main_send_HCICommands_LEStartEncryption_sender);
register_BLEInitialiserImpl_send_Initialiser_Started_listener(&BLEInitialiserImpl_send_Initialiser_Started_sender);
register_BLEInitialiserImpl_send_Initialiser_Stopped_listener(&BLEInitialiserImpl_send_Initialiser_Stopped_sender);
register_BLEInitialiserImpl_send_Initialiser_Failure_listener(&BLEInitialiserImpl_send_Initialiser_Failure_sender);
register_BLEInitialiserImpl_send_Initialiser_DeviceInitialised_listener(&BLEInitialiserImpl_send_Initialiser_DeviceInitialised_sender);
register_BLEInitialiserImpl_send_Socket_Open_listener(&BLEInitialiserImpl_send_Socket_Open_sender);
register_BLEInitialiserImpl_send_Socket_Close_listener(&BLEInitialiserImpl_send_Socket_Close_sender);
register_BLEInitialiserImpl_send_HCICommands_Reset_listener(&BLEInitialiserImpl_send_HCICommands_Reset_sender);
register_BLEInitialiserImpl_send_HCICommands_SetEventMask_listener(&BLEInitialiserImpl_send_HCICommands_SetEventMask_sender);
register_BLEInitialiserImpl_send_HCICommands_SetEventMaskAll_listener(&BLEInitialiserImpl_send_HCICommands_SetEventMaskAll_sender);
register_BLEInitialiserImpl_send_HCICommands_SetLocalName_listener(&BLEInitialiserImpl_send_HCICommands_SetLocalName_sender);
register_BLEInitialiserImpl_send_HCICommands_Disconnect_listener(&BLEInitialiserImpl_send_HCICommands_Disconnect_sender);
register_BLEInitialiserImpl_send_HCICommands_SetLEEventMask_listener(&BLEInitialiserImpl_send_HCICommands_SetLEEventMask_sender);
register_BLEInitialiserImpl_send_HCICommands_SetLEEventMaskAll_listener(&BLEInitialiserImpl_send_HCICommands_SetLEEventMaskAll_sender);
register_BLEInitialiserImpl_send_HCICommands_SetLEAdvertisementParameters_listener(&BLEInitialiserImpl_send_HCICommands_SetLEAdvertisementParameters_sender);
register_BLEInitialiserImpl_send_HCICommands_SetLEAdvertiseEnable_listener(&BLEInitialiserImpl_send_HCICommands_SetLEAdvertiseEnable_sender);
register_BLEInitialiserImpl_send_HCICommands_SetLEAdvertisingData_listener(&BLEInitialiserImpl_send_HCICommands_SetLEAdvertisingData_sender);
register_BLEInitialiserImpl_send_HCICommands_SetLEScanResponseData_listener(&BLEInitialiserImpl_send_HCICommands_SetLEScanResponseData_sender);
register_BLEInitialiserImpl_send_HCICommands_SetLEScanParameters_listener(&BLEInitialiserImpl_send_HCICommands_SetLEScanParameters_sender);
register_BLEInitialiserImpl_send_HCICommands_SetLEScanEnable_listener(&BLEInitialiserImpl_send_HCICommands_SetLEScanEnable_sender);
register_BLEInitialiserImpl_send_HCICommands_LECreateConnection_listener(&BLEInitialiserImpl_send_HCICommands_LECreateConnection_sender);
register_BLEInitialiserImpl_send_HCICommands_LECreateConnectionCancel_listener(&BLEInitialiserImpl_send_HCICommands_LECreateConnectionCancel_sender);
register_BLEInitialiserImpl_send_HCICommands_LERand_listener(&BLEInitialiserImpl_send_HCICommands_LERand_sender);
register_BLEInitialiserImpl_send_HCICommands_LEEncrypt_listener(&BLEInitialiserImpl_send_HCICommands_LEEncrypt_sender);
register_BLEInitialiserImpl_send_HCICommands_LEStartEncryption_listener(&BLEInitialiserImpl_send_HCICommands_LEStartEncryption_sender);
register_BLEInitialiserImpl_send_SMP_SMPPairingRequest_listener(&BLEInitialiserImpl_send_SMP_SMPPairingRequest_sender);
register_BLEInitialiserImpl_send_SMP_SMPPairingResponse_listener(&BLEInitialiserImpl_send_SMP_SMPPairingResponse_sender);
register_BLEInitialiserImpl_send_SMP_SMPPairingConfirm_listener(&BLEInitialiserImpl_send_SMP_SMPPairingConfirm_sender);
register_BLEInitialiserImpl_send_SMP_SMPPairingRandom_listener(&BLEInitialiserImpl_send_SMP_SMPPairingRandom_sender);
register_BLEInitialiserImpl_send_SMP_SMPPairingFailed_listener(&BLEInitialiserImpl_send_SMP_SMPPairingFailed_sender);
register_BLEInitialiserImpl_send_SMP_SMPPairingPublicKey_listener(&BLEInitialiserImpl_send_SMP_SMPPairingPublicKey_sender);
register_BLEInitialiserImpl_send_SMP_SMPPairingDHKeyCheck_listener(&BLEInitialiserImpl_send_SMP_SMPPairingDHKeyCheck_sender);
register_BLEInitialiserImpl_send_SMP_SMPKeypressNotification_listener(&BLEInitialiserImpl_send_SMP_SMPKeypressNotification_sender);
register_BLEInitialiserImpl_send_SMP_SMPEncryptionInformation_listener(&BLEInitialiserImpl_send_SMP_SMPEncryptionInformation_sender);
register_BLEInitialiserImpl_send_SMP_SMPMasterIdentification_listener(&BLEInitialiserImpl_send_SMP_SMPMasterIdentification_sender);
register_BLEInitialiserImpl_send_SMP_SMPIdentityInformation_listener(&BLEInitialiserImpl_send_SMP_SMPIdentityInformation_sender);
register_BLEInitialiserImpl_send_SMP_SMPIdentityAddressInformation_listener(&BLEInitialiserImpl_send_SMP_SMPIdentityAddressInformation_sender);
register_BLEInitialiserImpl_send_SMP_SMPSigningInformation_listener(&BLEInitialiserImpl_send_SMP_SMPSigningInformation_sender);
register_BLEInitialiserImpl_send_SMP_SMPSecurityRequest_listener(&BLEInitialiserImpl_send_SMP_SMPSecurityRequest_sender);
register_BLEInitialiserImpl_send_ATT_ATTFindInformationRequest_listener(&BLEInitialiserImpl_send_ATT_ATTFindInformationRequest_sender);
register_BLEInitialiserImpl_send_ATT_ATTFindInformationResponse_listener(&BLEInitialiserImpl_send_ATT_ATTFindInformationResponse_sender);
register_BLEInitialiserImpl_send_ATT_ATTFindInformationError_listener(&BLEInitialiserImpl_send_ATT_ATTFindInformationError_sender);
register_BLEInitialiserImpl_send_ATT_ATTReadByTypeRequest_listener(&BLEInitialiserImpl_send_ATT_ATTReadByTypeRequest_sender);
register_BLEInitialiserImpl_send_ATT_ATTReadByTypeResponse_listener(&BLEInitialiserImpl_send_ATT_ATTReadByTypeResponse_sender);
register_BLEInitialiserImpl_send_ATT_ATTReadByTypeError_listener(&BLEInitialiserImpl_send_ATT_ATTReadByTypeError_sender);
register_BLEInitialiserImpl_send_ATT_ATTReadRequest_listener(&BLEInitialiserImpl_send_ATT_ATTReadRequest_sender);
register_BLEInitialiserImpl_send_ATT_ATTReadResponse_listener(&BLEInitialiserImpl_send_ATT_ATTReadResponse_sender);
register_BLEInitialiserImpl_send_ATT_ATTReadError_listener(&BLEInitialiserImpl_send_ATT_ATTReadError_sender);
register_BLEInitialiserImpl_send_ATT_ATTReadByGroupTypeRequest_listener(&BLEInitialiserImpl_send_ATT_ATTReadByGroupTypeRequest_sender);
register_BLEInitialiserImpl_send_ATT_ATTReadByGroupTypeResponse_listener(&BLEInitialiserImpl_send_ATT_ATTReadByGroupTypeResponse_sender);
register_BLEInitialiserImpl_send_ATT_ATTReadByGroupTypeError_listener(&BLEInitialiserImpl_send_ATT_ATTReadByGroupTypeError_sender);
register_BLEInitialiserImpl_send_ATT_ATTWriteRequest_listener(&BLEInitialiserImpl_send_ATT_ATTWriteRequest_sender);
register_BLEInitialiserImpl_send_ATT_ATTWriteResponse_listener(&BLEInitialiserImpl_send_ATT_ATTWriteResponse_sender);
register_BLEInitialiserImpl_send_ATT_ATTWriteError_listener(&BLEInitialiserImpl_send_ATT_ATTWriteError_sender);
register_BLEInitialiserImpl_send_ATT_ATTWriteCommand_listener(&BLEInitialiserImpl_send_ATT_ATTWriteCommand_sender);
register_BLEInitialiserImpl_send_ATT_ATTHandleValueNotification_listener(&BLEInitialiserImpl_send_ATT_ATTHandleValueNotification_sender);
register_BLEInitialiserImpl_send_ATT_ATTHandleValueIndication_listener(&BLEInitialiserImpl_send_ATT_ATTHandleValueIndication_sender);
register_BLEInitialiserImpl_send_ATT_ATTHandleValueConfirmation_listener(&BLEInitialiserImpl_send_ATT_ATTHandleValueConfirmation_sender);
register_ExitHandler_send_Signals_Interrupt_listener(&ExitHandler_send_Signals_Interrupt_sender);
register_BLEConnecterImpl_send_Connecter_Connected_listener(&BLEConnecterImpl_send_Connecter_Connected_sender);
register_BLEConnecterImpl_send_Connecter_Stopped_listener(&BLEConnecterImpl_send_Connecter_Stopped_sender);
register_BLEConnecterImpl_send_Connecter_Failure_listener(&BLEConnecterImpl_send_Connecter_Failure_sender);
register_BLEConnecterImpl_send_Socket_Open_listener(&BLEConnecterImpl_send_Socket_Open_sender);
register_BLEConnecterImpl_send_Socket_Close_listener(&BLEConnecterImpl_send_Socket_Close_sender);
register_BLEConnecterImpl_send_HCICommands_Reset_listener(&BLEConnecterImpl_send_HCICommands_Reset_sender);
register_BLEConnecterImpl_send_HCICommands_SetEventMask_listener(&BLEConnecterImpl_send_HCICommands_SetEventMask_sender);
register_BLEConnecterImpl_send_HCICommands_SetEventMaskAll_listener(&BLEConnecterImpl_send_HCICommands_SetEventMaskAll_sender);
register_BLEConnecterImpl_send_HCICommands_SetLocalName_listener(&BLEConnecterImpl_send_HCICommands_SetLocalName_sender);
register_BLEConnecterImpl_send_HCICommands_Disconnect_listener(&BLEConnecterImpl_send_HCICommands_Disconnect_sender);
register_BLEConnecterImpl_send_HCICommands_SetLEEventMask_listener(&BLEConnecterImpl_send_HCICommands_SetLEEventMask_sender);
register_BLEConnecterImpl_send_HCICommands_SetLEEventMaskAll_listener(&BLEConnecterImpl_send_HCICommands_SetLEEventMaskAll_sender);
register_BLEConnecterImpl_send_HCICommands_SetLEAdvertisementParameters_listener(&BLEConnecterImpl_send_HCICommands_SetLEAdvertisementParameters_sender);
register_BLEConnecterImpl_send_HCICommands_SetLEAdvertiseEnable_listener(&BLEConnecterImpl_send_HCICommands_SetLEAdvertiseEnable_sender);
register_BLEConnecterImpl_send_HCICommands_SetLEAdvertisingData_listener(&BLEConnecterImpl_send_HCICommands_SetLEAdvertisingData_sender);
register_BLEConnecterImpl_send_HCICommands_SetLEScanResponseData_listener(&BLEConnecterImpl_send_HCICommands_SetLEScanResponseData_sender);
register_BLEConnecterImpl_send_HCICommands_SetLEScanParameters_listener(&BLEConnecterImpl_send_HCICommands_SetLEScanParameters_sender);
register_BLEConnecterImpl_send_HCICommands_SetLEScanEnable_listener(&BLEConnecterImpl_send_HCICommands_SetLEScanEnable_sender);
register_BLEConnecterImpl_send_HCICommands_LECreateConnection_listener(&BLEConnecterImpl_send_HCICommands_LECreateConnection_sender);
register_BLEConnecterImpl_send_HCICommands_LECreateConnectionCancel_listener(&BLEConnecterImpl_send_HCICommands_LECreateConnectionCancel_sender);
register_BLEConnecterImpl_send_HCICommands_LERand_listener(&BLEConnecterImpl_send_HCICommands_LERand_sender);
register_BLEConnecterImpl_send_HCICommands_LEEncrypt_listener(&BLEConnecterImpl_send_HCICommands_LEEncrypt_sender);
register_BLEConnecterImpl_send_HCICommands_LEStartEncryption_listener(&BLEConnecterImpl_send_HCICommands_LEStartEncryption_sender);
register_BLEConnecterImpl_send_SMP_SMPPairingRequest_listener(&BLEConnecterImpl_send_SMP_SMPPairingRequest_sender);
register_BLEConnecterImpl_send_SMP_SMPPairingResponse_listener(&BLEConnecterImpl_send_SMP_SMPPairingResponse_sender);
register_BLEConnecterImpl_send_SMP_SMPPairingConfirm_listener(&BLEConnecterImpl_send_SMP_SMPPairingConfirm_sender);
register_BLEConnecterImpl_send_SMP_SMPPairingRandom_listener(&BLEConnecterImpl_send_SMP_SMPPairingRandom_sender);
register_BLEConnecterImpl_send_SMP_SMPPairingFailed_listener(&BLEConnecterImpl_send_SMP_SMPPairingFailed_sender);
register_BLEConnecterImpl_send_SMP_SMPPairingPublicKey_listener(&BLEConnecterImpl_send_SMP_SMPPairingPublicKey_sender);
register_BLEConnecterImpl_send_SMP_SMPPairingDHKeyCheck_listener(&BLEConnecterImpl_send_SMP_SMPPairingDHKeyCheck_sender);
register_BLEConnecterImpl_send_SMP_SMPKeypressNotification_listener(&BLEConnecterImpl_send_SMP_SMPKeypressNotification_sender);
register_BLEConnecterImpl_send_SMP_SMPEncryptionInformation_listener(&BLEConnecterImpl_send_SMP_SMPEncryptionInformation_sender);
register_BLEConnecterImpl_send_SMP_SMPMasterIdentification_listener(&BLEConnecterImpl_send_SMP_SMPMasterIdentification_sender);
register_BLEConnecterImpl_send_SMP_SMPIdentityInformation_listener(&BLEConnecterImpl_send_SMP_SMPIdentityInformation_sender);
register_BLEConnecterImpl_send_SMP_SMPIdentityAddressInformation_listener(&BLEConnecterImpl_send_SMP_SMPIdentityAddressInformation_sender);
register_BLEConnecterImpl_send_SMP_SMPSigningInformation_listener(&BLEConnecterImpl_send_SMP_SMPSigningInformation_sender);
register_BLEConnecterImpl_send_SMP_SMPSecurityRequest_listener(&BLEConnecterImpl_send_SMP_SMPSecurityRequest_sender);
register_BLEConnecterImpl_send_ATT_ATTFindInformationRequest_listener(&BLEConnecterImpl_send_ATT_ATTFindInformationRequest_sender);
register_BLEConnecterImpl_send_ATT_ATTFindInformationResponse_listener(&BLEConnecterImpl_send_ATT_ATTFindInformationResponse_sender);
register_BLEConnecterImpl_send_ATT_ATTFindInformationError_listener(&BLEConnecterImpl_send_ATT_ATTFindInformationError_sender);
register_BLEConnecterImpl_send_ATT_ATTReadByTypeRequest_listener(&BLEConnecterImpl_send_ATT_ATTReadByTypeRequest_sender);
register_BLEConnecterImpl_send_ATT_ATTReadByTypeResponse_listener(&BLEConnecterImpl_send_ATT_ATTReadByTypeResponse_sender);
register_BLEConnecterImpl_send_ATT_ATTReadByTypeError_listener(&BLEConnecterImpl_send_ATT_ATTReadByTypeError_sender);
register_BLEConnecterImpl_send_ATT_ATTReadRequest_listener(&BLEConnecterImpl_send_ATT_ATTReadRequest_sender);
register_BLEConnecterImpl_send_ATT_ATTReadResponse_listener(&BLEConnecterImpl_send_ATT_ATTReadResponse_sender);
register_BLEConnecterImpl_send_ATT_ATTReadError_listener(&BLEConnecterImpl_send_ATT_ATTReadError_sender);
register_BLEConnecterImpl_send_ATT_ATTReadByGroupTypeRequest_listener(&BLEConnecterImpl_send_ATT_ATTReadByGroupTypeRequest_sender);
register_BLEConnecterImpl_send_ATT_ATTReadByGroupTypeResponse_listener(&BLEConnecterImpl_send_ATT_ATTReadByGroupTypeResponse_sender);
register_BLEConnecterImpl_send_ATT_ATTReadByGroupTypeError_listener(&BLEConnecterImpl_send_ATT_ATTReadByGroupTypeError_sender);
register_BLEConnecterImpl_send_ATT_ATTWriteRequest_listener(&BLEConnecterImpl_send_ATT_ATTWriteRequest_sender);
register_BLEConnecterImpl_send_ATT_ATTWriteResponse_listener(&BLEConnecterImpl_send_ATT_ATTWriteResponse_sender);
register_BLEConnecterImpl_send_ATT_ATTWriteError_listener(&BLEConnecterImpl_send_ATT_ATTWriteError_sender);
register_BLEConnecterImpl_send_ATT_ATTWriteCommand_listener(&BLEConnecterImpl_send_ATT_ATTWriteCommand_sender);
register_BLEConnecterImpl_send_ATT_ATTHandleValueNotification_listener(&BLEConnecterImpl_send_ATT_ATTHandleValueNotification_sender);
register_BLEConnecterImpl_send_ATT_ATTHandleValueIndication_listener(&BLEConnecterImpl_send_ATT_ATTHandleValueIndication_sender);
register_BLEConnecterImpl_send_ATT_ATTHandleValueConfirmation_listener(&BLEConnecterImpl_send_ATT_ATTHandleValueConfirmation_sender);
register_HCISocketProxyImpl_send_Socket_Opened_listener(&HCISocketProxyImpl_send_Socket_Opened_sender);
register_HCISocketProxyImpl_send_Socket_Closed_listener(&HCISocketProxyImpl_send_Socket_Closed_sender);
register_HCISocketProxyImpl_send_Events_ResetCompleted_listener(&HCISocketProxyImpl_send_Events_ResetCompleted_sender);
register_HCISocketProxyImpl_send_Events_SetEventMaskCompleted_listener(&HCISocketProxyImpl_send_Events_SetEventMaskCompleted_sender);
register_HCISocketProxyImpl_send_Events_SetLocalNameCompleted_listener(&HCISocketProxyImpl_send_Events_SetLocalNameCompleted_sender);
register_HCISocketProxyImpl_send_Events_DisconnectStatus_listener(&HCISocketProxyImpl_send_Events_DisconnectStatus_sender);
register_HCISocketProxyImpl_send_Events_DisconnectionCompleted_listener(&HCISocketProxyImpl_send_Events_DisconnectionCompleted_sender);
register_HCISocketProxyImpl_send_Events_SetLEEventMaskCompleted_listener(&HCISocketProxyImpl_send_Events_SetLEEventMaskCompleted_sender);
register_HCISocketProxyImpl_send_Events_SetLEAdvertisementParametersCompleted_listener(&HCISocketProxyImpl_send_Events_SetLEAdvertisementParametersCompleted_sender);
register_HCISocketProxyImpl_send_Events_SetLEAdvertiseEnableCompleted_listener(&HCISocketProxyImpl_send_Events_SetLEAdvertiseEnableCompleted_sender);
register_HCISocketProxyImpl_send_Events_SetLEAdvertisingDataCompleted_listener(&HCISocketProxyImpl_send_Events_SetLEAdvertisingDataCompleted_sender);
register_HCISocketProxyImpl_send_Events_SetLEScanResponseDataCompleted_listener(&HCISocketProxyImpl_send_Events_SetLEScanResponseDataCompleted_sender);
register_HCISocketProxyImpl_send_Events_SetLEScanParametersCompleted_listener(&HCISocketProxyImpl_send_Events_SetLEScanParametersCompleted_sender);
register_HCISocketProxyImpl_send_Events_SetLEScanEnableCompleted_listener(&HCISocketProxyImpl_send_Events_SetLEScanEnableCompleted_sender);
register_HCISocketProxyImpl_send_Events_LEAdvertisementReport_listener(&HCISocketProxyImpl_send_Events_LEAdvertisementReport_sender);
register_HCISocketProxyImpl_send_Events_LECreateConnectionStatus_listener(&HCISocketProxyImpl_send_Events_LECreateConnectionStatus_sender);
register_HCISocketProxyImpl_send_Events_LECreateConnectionCancelCompleted_listener(&HCISocketProxyImpl_send_Events_LECreateConnectionCancelCompleted_sender);
register_HCISocketProxyImpl_send_Events_LEConnectionComplete_listener(&HCISocketProxyImpl_send_Events_LEConnectionComplete_sender);
register_HCISocketProxyImpl_send_Events_LEEnhancedConnectionComplete_listener(&HCISocketProxyImpl_send_Events_LEEnhancedConnectionComplete_sender);
register_HCISocketProxyImpl_send_Events_LERandCompleted_listener(&HCISocketProxyImpl_send_Events_LERandCompleted_sender);
register_HCISocketProxyImpl_send_Events_LEEncryptCompleted_listener(&HCISocketProxyImpl_send_Events_LEEncryptCompleted_sender);
register_HCISocketProxyImpl_send_Events_EncryptionChanged_listener(&HCISocketProxyImpl_send_Events_EncryptionChanged_sender);
register_HCISocketProxyImpl_send_Events_LEStartEncryptionStatus_listener(&HCISocketProxyImpl_send_Events_LEStartEncryptionStatus_sender);
register_HCISocketProxyImpl_send_SMP_SMPPairingRequest_listener(&HCISocketProxyImpl_send_SMP_SMPPairingRequest_sender);
register_HCISocketProxyImpl_send_SMP_SMPPairingResponse_listener(&HCISocketProxyImpl_send_SMP_SMPPairingResponse_sender);
register_HCISocketProxyImpl_send_SMP_SMPPairingConfirm_listener(&HCISocketProxyImpl_send_SMP_SMPPairingConfirm_sender);
register_HCISocketProxyImpl_send_SMP_SMPPairingRandom_listener(&HCISocketProxyImpl_send_SMP_SMPPairingRandom_sender);
register_HCISocketProxyImpl_send_SMP_SMPPairingFailed_listener(&HCISocketProxyImpl_send_SMP_SMPPairingFailed_sender);
register_HCISocketProxyImpl_send_SMP_SMPPairingPublicKey_listener(&HCISocketProxyImpl_send_SMP_SMPPairingPublicKey_sender);
register_HCISocketProxyImpl_send_SMP_SMPPairingDHKeyCheck_listener(&HCISocketProxyImpl_send_SMP_SMPPairingDHKeyCheck_sender);
register_HCISocketProxyImpl_send_SMP_SMPKeypressNotification_listener(&HCISocketProxyImpl_send_SMP_SMPKeypressNotification_sender);
register_HCISocketProxyImpl_send_SMP_SMPEncryptionInformation_listener(&HCISocketProxyImpl_send_SMP_SMPEncryptionInformation_sender);
register_HCISocketProxyImpl_send_SMP_SMPMasterIdentification_listener(&HCISocketProxyImpl_send_SMP_SMPMasterIdentification_sender);
register_HCISocketProxyImpl_send_SMP_SMPIdentityInformation_listener(&HCISocketProxyImpl_send_SMP_SMPIdentityInformation_sender);
register_HCISocketProxyImpl_send_SMP_SMPIdentityAddressInformation_listener(&HCISocketProxyImpl_send_SMP_SMPIdentityAddressInformation_sender);
register_HCISocketProxyImpl_send_SMP_SMPSigningInformation_listener(&HCISocketProxyImpl_send_SMP_SMPSigningInformation_sender);
register_HCISocketProxyImpl_send_SMP_SMPSecurityRequest_listener(&HCISocketProxyImpl_send_SMP_SMPSecurityRequest_sender);
register_HCISocketProxyImpl_send_ATT_ATTFindInformationRequest_listener(&HCISocketProxyImpl_send_ATT_ATTFindInformationRequest_sender);
register_HCISocketProxyImpl_send_ATT_ATTFindInformationResponse_listener(&HCISocketProxyImpl_send_ATT_ATTFindInformationResponse_sender);
register_HCISocketProxyImpl_send_ATT_ATTFindInformationError_listener(&HCISocketProxyImpl_send_ATT_ATTFindInformationError_sender);
register_HCISocketProxyImpl_send_ATT_ATTReadByTypeRequest_listener(&HCISocketProxyImpl_send_ATT_ATTReadByTypeRequest_sender);
register_HCISocketProxyImpl_send_ATT_ATTReadByTypeResponse_listener(&HCISocketProxyImpl_send_ATT_ATTReadByTypeResponse_sender);
register_HCISocketProxyImpl_send_ATT_ATTReadByTypeError_listener(&HCISocketProxyImpl_send_ATT_ATTReadByTypeError_sender);
register_HCISocketProxyImpl_send_ATT_ATTReadRequest_listener(&HCISocketProxyImpl_send_ATT_ATTReadRequest_sender);
register_HCISocketProxyImpl_send_ATT_ATTReadResponse_listener(&HCISocketProxyImpl_send_ATT_ATTReadResponse_sender);
register_HCISocketProxyImpl_send_ATT_ATTReadError_listener(&HCISocketProxyImpl_send_ATT_ATTReadError_sender);
register_HCISocketProxyImpl_send_ATT_ATTReadByGroupTypeRequest_listener(&HCISocketProxyImpl_send_ATT_ATTReadByGroupTypeRequest_sender);
register_HCISocketProxyImpl_send_ATT_ATTReadByGroupTypeResponse_listener(&HCISocketProxyImpl_send_ATT_ATTReadByGroupTypeResponse_sender);
register_HCISocketProxyImpl_send_ATT_ATTReadByGroupTypeError_listener(&HCISocketProxyImpl_send_ATT_ATTReadByGroupTypeError_sender);
register_HCISocketProxyImpl_send_ATT_ATTWriteRequest_listener(&HCISocketProxyImpl_send_ATT_ATTWriteRequest_sender);
register_HCISocketProxyImpl_send_ATT_ATTWriteResponse_listener(&HCISocketProxyImpl_send_ATT_ATTWriteResponse_sender);
register_HCISocketProxyImpl_send_ATT_ATTWriteError_listener(&HCISocketProxyImpl_send_ATT_ATTWriteError_sender);
register_HCISocketProxyImpl_send_ATT_ATTWriteCommand_listener(&HCISocketProxyImpl_send_ATT_ATTWriteCommand_sender);
register_HCISocketProxyImpl_send_ATT_ATTHandleValueNotification_listener(&HCISocketProxyImpl_send_ATT_ATTHandleValueNotification_sender);
register_HCISocketProxyImpl_send_ATT_ATTHandleValueIndication_listener(&HCISocketProxyImpl_send_ATT_ATTHandleValueIndication_sender);
register_HCISocketProxyImpl_send_ATT_ATTHandleValueConfirmation_listener(&HCISocketProxyImpl_send_ATT_ATTHandleValueConfirmation_sender);

// Init the ID, state variables and properties for instance hci
hci_var.id_Socket = add_instance( (void*) &hci_var);
hci_var.id_Commands = add_instance( (void*) &hci_var);
hci_var.id_Events = add_instance( (void*) &hci_var);
hci_var.id_SMP = add_instance( (void*) &hci_var);
hci_var.id_ATT = add_instance( (void*) &hci_var);
hci_var.HCISocketProxy_Socket_State = HCISOCKETPROXY_SOCKET_CLOSED_STATE;
hci_var.active = true;
hci_var.alive = true;
hci_var.HCISocketProxyImpl_DevHandle_var =  -1;
hci_var.HCISocketProxy_Device_var = "B8:27:EB:03:FA:CD";

// Init the ID, state variables and properties for instance encrypter
encrypter_var.id_Encrypter = add_instance( (void*) &encrypter_var);
encrypter_var.id_Socket = add_instance( (void*) &encrypter_var);
encrypter_var.id_HCICommands = add_instance( (void*) &encrypter_var);
encrypter_var.id_HCIEvents = add_instance( (void*) &encrypter_var);
encrypter_var.id_SMP = add_instance( (void*) &encrypter_var);
encrypter_var.id_ATT = add_instance( (void*) &encrypter_var);
encrypter_var.BLEEncryptionImpl_States_State = BLEENCRYPTIONIMPL_STATES_WAITFORSOCKET_STATE;
encrypter_var.BLEEncryptionImpl_States_Ready_State = BLEENCRYPTIONIMPL_STATES_READY_WAITING_STATE;
encrypter_var.active = true;
encrypter_var.alive = true;

// Init the ID, state variables and properties for instance initialiser
initialiser_var.id_Initialiser = add_instance( (void*) &initialiser_var);
initialiser_var.id_Socket = add_instance( (void*) &initialiser_var);
initialiser_var.id_HCICommands = add_instance( (void*) &initialiser_var);
initialiser_var.id_HCIEvents = add_instance( (void*) &initialiser_var);
initialiser_var.id_SMP = add_instance( (void*) &initialiser_var);
initialiser_var.id_ATT = add_instance( (void*) &initialiser_var);
initialiser_var.BLEInitialiserImpl_States_State = BLEINITIALISERIMPL_STATES_CLOSED_STATE;
initialiser_var.active = true;
initialiser_var.alive = true;

// Init the ID, state variables and properties for instance handler
handler_var.id_Signals = add_instance( (void*) &handler_var);
handler_var.ExitHandler_Handler_State = EXITHANDLER_HANDLER_WAITING_STATE;
handler_var.active = true;
handler_var.alive = true;

// Init the ID, state variables and properties for instance connecter
connecter_var.id_Connecter = add_instance( (void*) &connecter_var);
connecter_var.id_Socket = add_instance( (void*) &connecter_var);
connecter_var.id_HCICommands = add_instance( (void*) &connecter_var);
connecter_var.id_HCIEvents = add_instance( (void*) &connecter_var);
connecter_var.id_SMP = add_instance( (void*) &connecter_var);
connecter_var.id_ATT = add_instance( (void*) &connecter_var);
connecter_var.BLEConnecterImpl_States_State = BLECONNECTERIMPL_STATES_NOTCONNECTED_STATE;
connecter_var.active = true;
connecter_var.alive = true;
connecter_var.BLEConnecterImpl_ConnectAddressType_var = BLEADDRESSTYPE_PUBLIC;
connecter_var.BLEConnecterImpl_ConnectAddress_var = "5C:31:3E:03:54:2F";

// Init the ID, state variables and properties for instance main
main_var.id_Signals = add_instance( (void*) &main_var);
main_var.id_Initialiser = add_instance( (void*) &main_var);
main_var.id_Connecter = add_instance( (void*) &main_var);
main_var.id_SMP = add_instance( (void*) &main_var);
main_var.id_ATT = add_instance( (void*) &main_var);
main_var.id_Encrypter = add_instance( (void*) &main_var);
main_var.id_Socket = add_instance( (void*) &main_var);
main_var.id_HCICommands = add_instance( (void*) &main_var);
main_var.id_HCIEvents = add_instance( (void*) &main_var);
main_var.Main_States_State = MAIN_STATES_INITIALISE_STATE;
main_var.Main_States_Pairing_State = MAIN_STATES_PAIRING_REQUEST_STATE;
main_var.Main_States_Pairing_Confirm_State = MAIN_STATES_PAIRING_CONFIRM_SENDMCONFIRM_STATE;
main_var.Main_States_Pairing_ExchangeKeys_State = MAIN_STATES_PAIRING_EXCHANGEKEYS_WAITFORPEERKEYS_STATE;
main_var.Main_States_Pairing_ExchangeKeys_GenerateOwnKeys_State = MAIN_STATES_PAIRING_EXCHANGEKEYS_GENERATEOWNKEYS_GENERATELTK_STATE;
main_var.active = true;
main_var.alive = true;
main_var.Main_Stopped_var = 0;
main_var.Main_DeviceAddressType_var = BLEADDRESSTYPE_PUBLIC;
main_var.Main_HavePeerLTK_var = 0;
main_var.Main_HavePeerIdentification_var = 0;
main_var.Main_HavePeerIdentity_var = 0;
main_var.Main_HavePeerIdentityAddress_var = 0;
main_var.Main_HasPairedSuccessfully_var = 0;

}





void term(int signum)
{
    fflush(stdout);
    fflush(stderr);
    exit(signum);
}


int main(int argc, char *argv[]) {
    struct sigaction action;
    memset(&action, 0, sizeof(struct sigaction));
    action.sa_handler = term;
    sigaction(SIGINT, &action, NULL);
    sigaction(SIGTERM, &action, NULL);

  
  initialize_configuration_BLE_PAIR();

// Network Initialization// End Network Initialization

encrypter_var.fifo.fifo_size = 65535;
encrypter_var.fifo.fifo_head = 0;
encrypter_var.fifo.fifo_tail = 0;
encrypter_var.fifo.fifo = &encrypter_fifo_array;
init_runtime(&(encrypter_var.fifo));
pthread_t thread_encrypter;

main_var.fifo.fifo_size = 65535;
main_var.fifo.fifo_head = 0;
main_var.fifo.fifo_tail = 0;
main_var.fifo.fifo = &main_fifo_array;
init_runtime(&(main_var.fifo));
pthread_t thread_main;

hci_var.fifo.fifo_size = 65535;
hci_var.fifo.fifo_head = 0;
hci_var.fifo.fifo_tail = 0;
hci_var.fifo.fifo = &hci_fifo_array;
init_runtime(&(hci_var.fifo));
pthread_t thread_hci;

handler_var.fifo.fifo_size = 65535;
handler_var.fifo.fifo_head = 0;
handler_var.fifo.fifo_tail = 0;
handler_var.fifo.fifo = &handler_fifo_array;
init_runtime(&(handler_var.fifo));
pthread_t thread_handler;

initialiser_var.fifo.fifo_size = 65535;
initialiser_var.fifo.fifo_head = 0;
initialiser_var.fifo.fifo_tail = 0;
initialiser_var.fifo.fifo = &initialiser_fifo_array;
init_runtime(&(initialiser_var.fifo));
pthread_t thread_initialiser;

connecter_var.fifo.fifo_size = 65535;
connecter_var.fifo.fifo_head = 0;
connecter_var.fifo.fifo_tail = 0;
connecter_var.fifo.fifo = &connecter_fifo_array;
init_runtime(&(connecter_var.fifo));
pthread_t thread_connecter;

hci_var.initState = -1;
HCISocketProxy_Socket_OnEntry(HCISOCKETPROXY_SOCKET_STATE, &hci_var);
pthread_create( &thread_hci, NULL, HCISocketProxyImpl_run, (void *) &hci_var);
encrypter_var.initState = -1;
BLEEncryptionImpl_States_OnEntry(BLEENCRYPTIONIMPL_STATES_STATE, &encrypter_var);
pthread_create( &thread_encrypter, NULL, BLEEncryptionImpl_run, (void *) &encrypter_var);
initialiser_var.initState = -1;
BLEInitialiserImpl_States_OnEntry(BLEINITIALISERIMPL_STATES_STATE, &initialiser_var);
pthread_create( &thread_initialiser, NULL, BLEInitialiserImpl_run, (void *) &initialiser_var);
handler_var.initState = -1;
ExitHandler_Handler_OnEntry(EXITHANDLER_HANDLER_STATE, &handler_var);
pthread_create( &thread_handler, NULL, ExitHandler_run, (void *) &handler_var);
connecter_var.initState = -1;
BLEConnecterImpl_States_OnEntry(BLECONNECTERIMPL_STATES_STATE, &connecter_var);
pthread_create( &thread_connecter, NULL, BLEConnecterImpl_run, (void *) &connecter_var);
main_var.initState = -1;
Main_States_OnEntry(MAIN_STATES_STATE, &main_var);
pthread_create( &thread_main, NULL, Main_run, (void *) &main_var);

  pthread_join( thread_encrypter, NULL);
pthread_join( thread_handler, NULL);
pthread_join( thread_main, NULL);
pthread_join( thread_hci, NULL);
pthread_join( thread_connecter, NULL);
pthread_join( thread_initialiser, NULL);

}