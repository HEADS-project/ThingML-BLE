/*****************************************************
 *      THIS IS A GENERATED FILE. DO NOT EDIT.
 *      Implementation for Application AND_UC352BLE_SYNC
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
#include "Main.h"
#include "BLEInitialiserImpl.h"
#include "ExitHandler.h"
#include "BLEWeightscaleImpl.h"
#include "HCISocketProxyImpl.h"
#include "BLEConnecterImpl.h"
#include "BLENotifierImpl.h"

#include "MQTT1.h"


  /*
  ble_random_number_t peer_ltk = { 0x4D, 0xED, 0x37, 0xB5, 0x6C, 0x94, 0x4D, 0xEE, 0xD7, 0x35, 0x5A, 0xDC, 0x52, 0x3A, 0x82, 0xFC, };
  uint16_t peer_ediv = 0x9B20;
  ble_random_part_t peer_random = { 0xDE, 0x29, 0x2A, 0x99, 0x19, 0xDE, 0x56, 0xCA, };
  */
  /*
  ble_random_number_t peer_ltk = { 0xCE, 0xED, 0xBC, 0x56, 0x27, 0x71, 0xBA, 0x5B, 0x77, 0xB1, 0x7B, 0xA7, 0x8B, 0xE2, 0x28, 0x66, };
  uint16_t peer_ediv = 0x7A5E;
  ble_random_part_t peer_random = { 0x6B, 0x61, 0x4E, 0xEE, 0x54, 0x36, 0x91, 0x3F, };
  */  
  ble_random_number_t peer_ltk = { 0xEB, 0x62, 0x86, 0x0E, 0x18, 0x20, 0x25, 0x8A, 0xCA, 0x18, 0x9C, 0xD5, 0x6D, 0x69, 0xAE, 0x6E, };
  uint16_t peer_ediv = 0x627E;
  ble_random_part_t peer_random = { 0xDE, 0x2B, 0x79, 0x5A, 0x5B, 0x21, 0x51, 0x3A, };
  
  notifier_cmd_t request_cmd  = { 2, '!', 'R' };
  notifier_cmd_t received_cmd = { 2, '!', 'G' };
  notifier_cmd_t error_cmd    = { 2, '!', 'E' };
  notifier_cmd_t stored_cmd   = { 2, '!', 'S' };




/*****************************************************************************
 * Definitions for configuration : AND_UC352BLE_SYNC
 *****************************************************************************/

//Declaration of instance variables
//Instance handler
// Variables for the properties of the instance
struct ExitHandler_Instance handler_var;
// Variables for fifo of the instance
byte handler_fifo_array[65535];
//Instance connecterweightscale
// Variables for the properties of the instance
struct BLEConnecterImpl_Instance connecterweightscale_var;
// Variables for fifo of the instance
byte connecterweightscale_fifo_array[65535];
//Instance initialiser
// Variables for the properties of the instance
struct BLEInitialiserImpl_Instance initialiser_var;
// Variables for fifo of the instance
byte initialiser_fifo_array[65535];
//Instance main
// Variables for the properties of the instance
struct Main_Instance main_var;
// Variables for fifo of the instance
byte main_fifo_array[65535];
//Instance notifier
// Variables for the properties of the instance
struct BLENotifierImpl_Instance notifier_var;
// Variables for fifo of the instance
byte notifier_fifo_array[65535];
//Instance hci
// Variables for the properties of the instance
struct HCISocketProxyImpl_Instance hci_var;
// Variables for fifo of the instance
byte hci_fifo_array[65535];
//Instance weightscale
// Variables for the properties of the instance
struct BLEWeightscaleImpl_Instance weightscale_var;
// Variables for fifo of the instance
byte weightscale_fifo_array[65535];
//Instance connecternotifier
// Variables for the properties of the instance
struct BLEConnecterImpl_Instance connecternotifier_var;
// Variables for fifo of the instance
byte connecternotifier_fifo_array[65535];

//Instance MQTT1 for network plugin PosixMQTTPlugin
struct MQTT1_Instance MQTT1_instance;

void externalMessageEnqueue(uint8_t * msg, uint8_t msgSize, uint16_t listener_id) {
if ((msgSize >= 2) && (msg != NULL)) {
uint8_t msgSizeOK = 0;
switch(msg[0] * 256 + msg[1]) {
case 68:
if(msgSize == 2) {
dispatch_MqttRequestWeightScaleMeasurement(listener_id
);
}
break;
case 69:
if(msgSize == 2) {
dispatch_MqttConfirmWeightScaleMeasurement(listener_id
);
}
break;
}
}
}


//Dispatcher for messages
void dispatch_StoredBloodPressureMeasurement(uint16_t sender) {
if (sender == main_var.id_Notifications) {
enqueue_BLENotifierImpl_Notifications_StoredBloodPressureMeasurement(&notifier_var);

}

}


//Dispatcher for messages
void dispatch_SetLEAdvertisingDataCompleted(uint16_t sender, uint8_t NumberAllowedCommandPackets, uint8_t Status) {
if (sender == hci_var.id_Events) {

}

}


//Dispatcher for messages
void dispatch_ATTHandleValueConfirmation(uint16_t sender, uint16_t ConnectionHandle) {
if (sender == notifier_var.id_ATT) {
enqueue_HCISocketProxyImpl_ATT_ATTHandleValueConfirmation(&hci_var, ConnectionHandle);

}
if (sender == weightscale_var.id_ATT) {
enqueue_HCISocketProxyImpl_ATT_ATTHandleValueConfirmation(&hci_var, ConnectionHandle);

}
if (sender == hci_var.id_ATT) {

}

}


//Dispatcher for messages
void dispatch_SetLocalNameCompleted(uint16_t sender, uint8_t NumberAllowedCommandPackets, uint8_t Status) {
if (sender == hci_var.id_Events) {

}

}


//Dispatcher for messages
void dispatch_SetEventMaskAll(uint16_t sender) {
if (sender == connecterweightscale_var.id_HCICommands) {
enqueue_HCISocketProxyImpl_Commands_SetEventMaskAll(&hci_var);

}
if (sender == connecternotifier_var.id_HCICommands) {
enqueue_HCISocketProxyImpl_Commands_SetEventMaskAll(&hci_var);

}
if (sender == initialiser_var.id_HCICommands) {
enqueue_HCISocketProxyImpl_Commands_SetEventMaskAll(&hci_var);

}

}


//Dispatcher for messages
void dispatch_ReadyForNotificationCommand(uint16_t sender) {
if (sender == notifier_var.id_Notifications) {
enqueue_Main_Notifications_ReadyForNotificationCommand(&main_var);

}

}


//Dispatcher for messages
void dispatch_Encrypt(uint16_t sender) {
if (sender == notifier_var.id_Connecter) {
enqueue_BLEConnecterImpl_Connecter_Encrypt(&connecternotifier_var);

}
if (sender == main_var.id_NotifierDevice) {
enqueue_BLEConnecterImpl_Connecter_Encrypt(&connecternotifier_var);

}
if (sender == main_var.id_WeightScaleDevice) {
enqueue_BLEConnecterImpl_Connecter_Encrypt(&connecterweightscale_var);

}
if (sender == weightscale_var.id_Connecter) {
enqueue_BLEConnecterImpl_Connecter_Encrypt(&connecterweightscale_var);

}

}


//Dispatcher for messages
void dispatch_Stop(uint16_t sender) {
if (sender == main_var.id_Initialiser) {
enqueue_BLEInitialiserImpl_Initialiser_Stop(&initialiser_var);

}
if (sender == weightscale_var.id_Connecter) {
enqueue_BLEConnecterImpl_Connecter_Stop(&connecterweightscale_var);

}
if (sender == notifier_var.id_Connecter) {
enqueue_BLEConnecterImpl_Connecter_Stop(&connecternotifier_var);

}
if (sender == main_var.id_WeightScaleDevice) {
enqueue_BLEConnecterImpl_Connecter_Stop(&connecterweightscale_var);

}
if (sender == main_var.id_NotifierDevice) {
enqueue_BLEConnecterImpl_Connecter_Stop(&connecternotifier_var);

}

}


//Dispatcher for messages
void dispatch_DisconnectionCompleted(uint16_t sender, uint8_t Status, uint16_t ConnectionHandle, uint8_t Reason) {
if (sender == hci_var.id_Events) {
enqueue_BLEConnecterImpl_HCIEvents_DisconnectionCompleted(&connecternotifier_var, Status, ConnectionHandle, Reason);
enqueue_BLEConnecterImpl_HCIEvents_DisconnectionCompleted(&connecterweightscale_var, Status, ConnectionHandle, Reason);

}

}


//Dispatcher for messages
void dispatch_LEAdvertisementReport(uint16_t sender, uint8_t Type, uint8_t AddressType, bdaddr_t Address, uint8_t Length, ble_adv_data_t Data) {
if (sender == hci_var.id_Events) {

}

}


//Dispatcher for messages
void dispatch_LECreateConnectionCancelCompleted(uint16_t sender, uint8_t NumberAllowedCommandPackets, uint8_t Status) {
if (sender == hci_var.id_Events) {
enqueue_BLEConnecterImpl_HCIEvents_LECreateConnectionCancelCompleted(&connecternotifier_var, NumberAllowedCommandPackets, Status);
enqueue_BLEConnecterImpl_HCIEvents_LECreateConnectionCancelCompleted(&connecterweightscale_var, NumberAllowedCommandPackets, Status);

}

}


//Dispatcher for messages
void dispatch_Close(uint16_t sender) {
if (sender == connecternotifier_var.id_Socket) {
enqueue_HCISocketProxyImpl_Socket_Close(&hci_var);

}
if (sender == initialiser_var.id_Socket) {
enqueue_HCISocketProxyImpl_Socket_Close(&hci_var);

}
if (sender == connecterweightscale_var.id_Socket) {
enqueue_HCISocketProxyImpl_Socket_Close(&hci_var);

}

}


//Dispatcher for messages
void dispatch_SetLEScanResponseData(uint16_t sender, uint8_t Length, ble_adv_data_t Data) {
if (sender == connecternotifier_var.id_HCICommands) {
enqueue_HCISocketProxyImpl_Commands_SetLEScanResponseData(&hci_var, Length, Data);

}
if (sender == connecterweightscale_var.id_HCICommands) {
enqueue_HCISocketProxyImpl_Commands_SetLEScanResponseData(&hci_var, Length, Data);

}
if (sender == initialiser_var.id_HCICommands) {
enqueue_HCISocketProxyImpl_Commands_SetLEScanResponseData(&hci_var, Length, Data);

}

}


//Dispatcher for messages
void dispatch_SetLEScanEnable(uint16_t sender, uint8_t Enable, uint8_t FilterDuplicates) {
if (sender == initialiser_var.id_HCICommands) {
enqueue_HCISocketProxyImpl_Commands_SetLEScanEnable(&hci_var, Enable, FilterDuplicates);

}
if (sender == connecternotifier_var.id_HCICommands) {
enqueue_HCISocketProxyImpl_Commands_SetLEScanEnable(&hci_var, Enable, FilterDuplicates);

}
if (sender == connecterweightscale_var.id_HCICommands) {
enqueue_HCISocketProxyImpl_Commands_SetLEScanEnable(&hci_var, Enable, FilterDuplicates);

}

}


//Dispatcher for messages
void dispatch_ATTHandleValueNotification(uint16_t sender, uint16_t ConnectionHandle, uint16_t AttributeHandle, ble_gatt_data_t AttributeValue) {
if (sender == notifier_var.id_ATT) {
enqueue_HCISocketProxyImpl_ATT_ATTHandleValueNotification(&hci_var, ConnectionHandle, AttributeHandle, AttributeValue);

}
if (sender == hci_var.id_ATT) {
enqueue_BLENotifierImpl_ATT_ATTHandleValueNotification(&notifier_var, ConnectionHandle, AttributeHandle, AttributeValue);

}
if (sender == weightscale_var.id_ATT) {
enqueue_HCISocketProxyImpl_ATT_ATTHandleValueNotification(&hci_var, ConnectionHandle, AttributeHandle, AttributeValue);

}

}


//Dispatcher for messages
void dispatch_Start(uint16_t sender) {
if (sender == main_var.id_Initialiser) {
enqueue_BLEInitialiserImpl_Initialiser_Start(&initialiser_var);

}

}


//Dispatcher for messages
void dispatch_ATTReadError(uint16_t sender, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error) {
if (sender == hci_var.id_ATT) {
enqueue_BLEWeightscaleImpl_ATT_ATTReadError(&weightscale_var, ConnectionHandle, AttributeHandle, Error);

}
if (sender == notifier_var.id_ATT) {
enqueue_HCISocketProxyImpl_ATT_ATTReadError(&hci_var, ConnectionHandle, AttributeHandle, Error);

}
if (sender == weightscale_var.id_ATT) {
enqueue_HCISocketProxyImpl_ATT_ATTReadError(&hci_var, ConnectionHandle, AttributeHandle, Error);

}

}


//Dispatcher for messages
void dispatch_DisconnectStatus(uint16_t sender, uint8_t NumberAllowedCommandPackets, uint8_t Status) {
if (sender == hci_var.id_Events) {
enqueue_BLEConnecterImpl_HCIEvents_DisconnectStatus(&connecternotifier_var, NumberAllowedCommandPackets, Status);
enqueue_BLEConnecterImpl_HCIEvents_DisconnectStatus(&connecterweightscale_var, NumberAllowedCommandPackets, Status);

}

}


//Dispatcher for messages
void dispatch_ATTFindInformationRequest(uint16_t sender, uint16_t ConnectionHandle, uint16_t StartingHandle, uint16_t EndingHandle) {
if (sender == weightscale_var.id_ATT) {
enqueue_HCISocketProxyImpl_ATT_ATTFindInformationRequest(&hci_var, ConnectionHandle, StartingHandle, EndingHandle);

}
if (sender == notifier_var.id_ATT) {
enqueue_HCISocketProxyImpl_ATT_ATTFindInformationRequest(&hci_var, ConnectionHandle, StartingHandle, EndingHandle);

}
if (sender == hci_var.id_ATT) {

}

}


//Dispatcher for messages
void dispatch_ATTWriteResponse(uint16_t sender, uint16_t ConnectionHandle) {
if (sender == notifier_var.id_ATT) {
enqueue_HCISocketProxyImpl_ATT_ATTWriteResponse(&hci_var, ConnectionHandle);

}
if (sender == hci_var.id_ATT) {
enqueue_BLENotifierImpl_ATT_ATTWriteResponse(&notifier_var, ConnectionHandle);
enqueue_BLEWeightscaleImpl_ATT_ATTWriteResponse(&weightscale_var, ConnectionHandle);

}
if (sender == weightscale_var.id_ATT) {
enqueue_HCISocketProxyImpl_ATT_ATTWriteResponse(&hci_var, ConnectionHandle);

}

}


//Dispatcher for messages
void dispatch_LECreateConnectionCancel(uint16_t sender) {
if (sender == connecterweightscale_var.id_HCICommands) {
enqueue_HCISocketProxyImpl_Commands_LECreateConnectionCancel(&hci_var);

}
if (sender == initialiser_var.id_HCICommands) {
enqueue_HCISocketProxyImpl_Commands_LECreateConnectionCancel(&hci_var);

}
if (sender == connecternotifier_var.id_HCICommands) {
enqueue_HCISocketProxyImpl_Commands_LECreateConnectionCancel(&hci_var);

}

}


//Dispatcher for messages
void dispatch_LEStartEncryption(uint16_t sender, uint16_t ConnectionHandle, ble_random_part_t Random, uint16_t EDIV, ble_random_number_t LTK) {
if (sender == connecternotifier_var.id_HCICommands) {
enqueue_HCISocketProxyImpl_Commands_LEStartEncryption(&hci_var, ConnectionHandle, Random, EDIV, LTK);

}
if (sender == initialiser_var.id_HCICommands) {
enqueue_HCISocketProxyImpl_Commands_LEStartEncryption(&hci_var, ConnectionHandle, Random, EDIV, LTK);

}
if (sender == connecterweightscale_var.id_HCICommands) {
enqueue_HCISocketProxyImpl_Commands_LEStartEncryption(&hci_var, ConnectionHandle, Random, EDIV, LTK);

}

}


//Dispatcher for messages
void dispatch_ATTFindInformationError(uint16_t sender, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error) {
if (sender == weightscale_var.id_ATT) {
enqueue_HCISocketProxyImpl_ATT_ATTFindInformationError(&hci_var, ConnectionHandle, AttributeHandle, Error);

}
if (sender == notifier_var.id_ATT) {
enqueue_HCISocketProxyImpl_ATT_ATTFindInformationError(&hci_var, ConnectionHandle, AttributeHandle, Error);

}
if (sender == hci_var.id_ATT) {

}

}


//Dispatcher for messages
void dispatch_ResetCompleted(uint16_t sender, uint8_t NumberAllowedCommandPackets, uint8_t Status) {
if (sender == hci_var.id_Events) {
enqueue_BLEInitialiserImpl_HCIEvents_ResetCompleted(&initialiser_var, NumberAllowedCommandPackets, Status);

}

}


//Dispatcher for messages
void dispatch_LEEncryptCompleted(uint16_t sender, uint8_t NumberAllowedCommandPackets, uint8_t Status, ble_random_number_t Encrypted) {
if (sender == hci_var.id_Events) {

}

}


//Dispatcher for messages
void dispatch_ATTReadByTypeRequest(uint16_t sender, uint16_t ConnectionHandle, uint16_t StartingHandle, uint16_t EndingHandle, ble_uuid_t AttributeType) {
if (sender == hci_var.id_ATT) {

}
if (sender == notifier_var.id_ATT) {
enqueue_HCISocketProxyImpl_ATT_ATTReadByTypeRequest(&hci_var, ConnectionHandle, StartingHandle, EndingHandle, AttributeType);

}
if (sender == weightscale_var.id_ATT) {
enqueue_HCISocketProxyImpl_ATT_ATTReadByTypeRequest(&hci_var, ConnectionHandle, StartingHandle, EndingHandle, AttributeType);

}

}


//Dispatcher for messages
void dispatch_SetLEAdvertisementParameters(uint16_t sender, uint16_t MinInterval, uint16_t MaxInterval, uint8_t Type, uint8_t OwnAddressType, uint8_t PeerAddressType, bdaddr_t PeerAddress, uint8_t Channel, uint8_t FilterPolicy) {
if (sender == connecternotifier_var.id_HCICommands) {
enqueue_HCISocketProxyImpl_Commands_SetLEAdvertisementParameters(&hci_var, MinInterval, MaxInterval, Type, OwnAddressType, PeerAddressType, PeerAddress, Channel, FilterPolicy);

}
if (sender == connecterweightscale_var.id_HCICommands) {
enqueue_HCISocketProxyImpl_Commands_SetLEAdvertisementParameters(&hci_var, MinInterval, MaxInterval, Type, OwnAddressType, PeerAddressType, PeerAddress, Channel, FilterPolicy);

}
if (sender == initialiser_var.id_HCICommands) {
enqueue_HCISocketProxyImpl_Commands_SetLEAdvertisementParameters(&hci_var, MinInterval, MaxInterval, Type, OwnAddressType, PeerAddressType, PeerAddress, Channel, FilterPolicy);

}

}


//Dispatcher for messages
void dispatch_SetLEScanResponseDataCompleted(uint16_t sender, uint8_t NumberAllowedCommandPackets, uint8_t Status) {
if (sender == hci_var.id_Events) {

}

}


//Dispatcher for messages
void dispatch_ATTReadByGroupTypeResponse(uint16_t sender, uint16_t ConnectionHandle, uint8_t Length, ble_gatt_data_t AttributeDataList) {
if (sender == notifier_var.id_ATT) {
enqueue_HCISocketProxyImpl_ATT_ATTReadByGroupTypeResponse(&hci_var, ConnectionHandle, Length, AttributeDataList);

}
if (sender == hci_var.id_ATT) {

}
if (sender == weightscale_var.id_ATT) {
enqueue_HCISocketProxyImpl_ATT_ATTReadByGroupTypeResponse(&hci_var, ConnectionHandle, Length, AttributeDataList);

}

}


//Dispatcher for messages
void dispatch_ATTWriteRequest(uint16_t sender, uint16_t ConnectionHandle, uint16_t AttributeHandle, ble_gatt_data_t AttributeValue) {
if (sender == weightscale_var.id_ATT) {
enqueue_HCISocketProxyImpl_ATT_ATTWriteRequest(&hci_var, ConnectionHandle, AttributeHandle, AttributeValue);

}
if (sender == hci_var.id_ATT) {

}
if (sender == notifier_var.id_ATT) {
enqueue_HCISocketProxyImpl_ATT_ATTWriteRequest(&hci_var, ConnectionHandle, AttributeHandle, AttributeValue);

}

}


//Dispatcher for messages
void dispatch_ATTWriteError(uint16_t sender, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error) {
if (sender == notifier_var.id_ATT) {
enqueue_HCISocketProxyImpl_ATT_ATTWriteError(&hci_var, ConnectionHandle, AttributeHandle, Error);

}
if (sender == hci_var.id_ATT) {
enqueue_BLENotifierImpl_ATT_ATTWriteError(&notifier_var, ConnectionHandle, AttributeHandle, Error);
enqueue_BLEWeightscaleImpl_ATT_ATTWriteError(&weightscale_var, ConnectionHandle, AttributeHandle, Error);

}
if (sender == weightscale_var.id_ATT) {
enqueue_HCISocketProxyImpl_ATT_ATTWriteError(&hci_var, ConnectionHandle, AttributeHandle, Error);

}

}


//Dispatcher for messages
void dispatch_Stopped(uint16_t sender) {
if (sender == connecternotifier_var.id_Connecter) {
enqueue_Main_NotifierDevice_Stopped(&main_var);
enqueue_BLENotifierImpl_Connecter_Stopped(&notifier_var);

}
if (sender == connecterweightscale_var.id_Connecter) {
enqueue_Main_WeightScaleDevice_Stopped(&main_var);
enqueue_BLEWeightscaleImpl_Connecter_Stopped(&weightscale_var);

}
if (sender == initialiser_var.id_Initialiser) {
enqueue_Main_Initialiser_Stopped(&main_var);

}

}


//Dispatcher for messages
void dispatch_BadBloodPressureMeasurement(uint16_t sender) {
if (sender == main_var.id_Notifications) {
enqueue_BLENotifierImpl_Notifications_BadBloodPressureMeasurement(&notifier_var);

}

}


//Dispatcher for messages
void dispatch_ATTFindInformationResponse(uint16_t sender, uint16_t ConnectionHandle, uint8_t Format, ble_gatt_data_t InformationData) {
if (sender == notifier_var.id_ATT) {
enqueue_HCISocketProxyImpl_ATT_ATTFindInformationResponse(&hci_var, ConnectionHandle, Format, InformationData);

}
if (sender == hci_var.id_ATT) {

}
if (sender == weightscale_var.id_ATT) {
enqueue_HCISocketProxyImpl_ATT_ATTFindInformationResponse(&hci_var, ConnectionHandle, Format, InformationData);

}

}


//Dispatcher for messages
void dispatch_SetLEScanParametersCompleted(uint16_t sender, uint8_t NumberAllowedCommandPackets, uint8_t Status) {
if (sender == hci_var.id_Events) {

}

}


//Dispatcher for messages
void dispatch_LERandCompleted(uint16_t sender, uint8_t NumberAllowedCommandPackets, uint8_t Status, ble_random_part_t Random) {
if (sender == hci_var.id_Events) {

}

}


//Dispatcher for messages
void dispatch_LEConnectionComplete(uint16_t sender, uint8_t Status, uint16_t ConnectionHandle, uint8_t Role, uint8_t PeerAddressType, bdaddr_t PeerAddress, uint16_t ConnInterval, uint16_t ConnLatency, uint16_t SupervisionTimeout, uint8_t MasterClockAccuracy) {
if (sender == hci_var.id_Events) {
enqueue_BLEConnecterImpl_HCIEvents_LEConnectionComplete(&connecternotifier_var, Status, ConnectionHandle, Role, PeerAddressType, PeerAddress, ConnInterval, ConnLatency, SupervisionTimeout, MasterClockAccuracy);
enqueue_BLEConnecterImpl_HCIEvents_LEConnectionComplete(&connecterweightscale_var, Status, ConnectionHandle, Role, PeerAddressType, PeerAddress, ConnInterval, ConnLatency, SupervisionTimeout, MasterClockAccuracy);

}

}


//Dispatcher for messages
void dispatch_SetLocalName(uint16_t sender, change_local_name_cp Name) {
if (sender == connecterweightscale_var.id_HCICommands) {

}
if (sender == initialiser_var.id_HCICommands) {

}
if (sender == connecternotifier_var.id_HCICommands) {

}

}


//Dispatcher for messages
void dispatch_ATTReadByTypeResponse(uint16_t sender, uint16_t ConnectionHandle, uint8_t Length, ble_gatt_data_t AttributeDataList) {
if (sender == hci_var.id_ATT) {

}
if (sender == notifier_var.id_ATT) {
enqueue_HCISocketProxyImpl_ATT_ATTReadByTypeResponse(&hci_var, ConnectionHandle, Length, AttributeDataList);

}
if (sender == weightscale_var.id_ATT) {
enqueue_HCISocketProxyImpl_ATT_ATTReadByTypeResponse(&hci_var, ConnectionHandle, Length, AttributeDataList);

}

}


//Dispatcher for messages
void dispatch_BatteryPercentage(uint16_t sender, uint8_t Percent) {
if (sender == weightscale_var.id_Weightscale) {

}

}


//Dispatcher for messages
void dispatch_SetLEEventMaskCompleted(uint16_t sender, uint8_t NumberAllowedCommandPackets, uint8_t Status) {
if (sender == hci_var.id_Events) {
enqueue_BLEInitialiserImpl_HCIEvents_SetLEEventMaskCompleted(&initialiser_var, NumberAllowedCommandPackets, Status);

}

}


//Dispatcher for messages
void dispatch_SetLEEventMask(uint16_t sender, set_event_mask_cp Mask) {
if (sender == connecterweightscale_var.id_HCICommands) {
enqueue_HCISocketProxyImpl_Commands_SetLEEventMask(&hci_var, Mask);

}
if (sender == initialiser_var.id_HCICommands) {
enqueue_HCISocketProxyImpl_Commands_SetLEEventMask(&hci_var, Mask);

}
if (sender == connecternotifier_var.id_HCICommands) {
enqueue_HCISocketProxyImpl_Commands_SetLEEventMask(&hci_var, Mask);

}

}


//Dispatcher for messages
void dispatch_ATTReadByGroupTypeRequest(uint16_t sender, uint16_t ConnectionHandle, uint16_t StartingHandle, uint16_t EndingHandle, ble_uuid_t AttributeGroupType) {
if (sender == hci_var.id_ATT) {

}
if (sender == notifier_var.id_ATT) {
enqueue_HCISocketProxyImpl_ATT_ATTReadByGroupTypeRequest(&hci_var, ConnectionHandle, StartingHandle, EndingHandle, AttributeGroupType);

}
if (sender == weightscale_var.id_ATT) {
enqueue_HCISocketProxyImpl_ATT_ATTReadByGroupTypeRequest(&hci_var, ConnectionHandle, StartingHandle, EndingHandle, AttributeGroupType);

}

}


//Dispatcher for messages
void dispatch_Quit(uint16_t sender, int16_t code) {
if (sender == main_var.id_Signals) {
enqueue_ExitHandler_Signals_Quit(&handler_var, code);

}

}


//Dispatcher for messages
void dispatch_SetLEEventMaskAll(uint16_t sender) {
if (sender == connecternotifier_var.id_HCICommands) {
enqueue_HCISocketProxyImpl_Commands_SetLEEventMaskAll(&hci_var);

}
if (sender == connecterweightscale_var.id_HCICommands) {
enqueue_HCISocketProxyImpl_Commands_SetLEEventMaskAll(&hci_var);

}
if (sender == initialiser_var.id_HCICommands) {
enqueue_HCISocketProxyImpl_Commands_SetLEEventMaskAll(&hci_var);

}

}


//Dispatcher for messages
void dispatch_LEEnhancedConnectionComplete(uint16_t sender, uint8_t Status, uint16_t ConnectionHandle, uint8_t Role, uint8_t PeerAddressType, bdaddr_t PeerAddress, bdaddr_t LocalResolvablePrivateAddress, bdaddr_t PeerResolvablePrivateAddress, uint16_t ConnInterval, uint16_t ConnLatency, uint16_t SupervisionTimeout, uint8_t MasterClockAccuracy) {
if (sender == hci_var.id_Events) {
enqueue_BLEConnecterImpl_HCIEvents_LEEnhancedConnectionComplete(&connecterweightscale_var, Status, ConnectionHandle, Role, PeerAddressType, PeerAddress, LocalResolvablePrivateAddress, PeerResolvablePrivateAddress, ConnInterval, ConnLatency, SupervisionTimeout, MasterClockAccuracy);
enqueue_BLEConnecterImpl_HCIEvents_LEEnhancedConnectionComplete(&connecternotifier_var, Status, ConnectionHandle, Role, PeerAddressType, PeerAddress, LocalResolvablePrivateAddress, PeerResolvablePrivateAddress, ConnInterval, ConnLatency, SupervisionTimeout, MasterClockAccuracy);

}

}


//Dispatcher for messages
void dispatch_SetEventMask(uint16_t sender, set_event_mask_cp Mask) {
if (sender == connecternotifier_var.id_HCICommands) {
enqueue_HCISocketProxyImpl_Commands_SetEventMask(&hci_var, Mask);

}
if (sender == connecterweightscale_var.id_HCICommands) {
enqueue_HCISocketProxyImpl_Commands_SetEventMask(&hci_var, Mask);

}
if (sender == initialiser_var.id_HCICommands) {
enqueue_HCISocketProxyImpl_Commands_SetEventMask(&hci_var, Mask);

}

}


//Dispatcher for messages
void dispatch_Reset(uint16_t sender) {
if (sender == connecternotifier_var.id_HCICommands) {
enqueue_HCISocketProxyImpl_Commands_Reset(&hci_var);

}
if (sender == connecterweightscale_var.id_HCICommands) {
enqueue_HCISocketProxyImpl_Commands_Reset(&hci_var);

}
if (sender == initialiser_var.id_HCICommands) {
enqueue_HCISocketProxyImpl_Commands_Reset(&hci_var);

}

}


//Dispatcher for messages
void dispatch_LEStartEncryptionStatus(uint16_t sender, uint8_t NumberAllowedCommandPackets, uint8_t Status) {
if (sender == hci_var.id_Events) {
enqueue_BLEConnecterImpl_HCIEvents_LEStartEncryptionStatus(&connecterweightscale_var, NumberAllowedCommandPackets, Status);
enqueue_BLEConnecterImpl_HCIEvents_LEStartEncryptionStatus(&connecternotifier_var, NumberAllowedCommandPackets, Status);

}

}


//Dispatcher for messages
void dispatch_ATTReadByTypeError(uint16_t sender, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error) {
if (sender == notifier_var.id_ATT) {
enqueue_HCISocketProxyImpl_ATT_ATTReadByTypeError(&hci_var, ConnectionHandle, AttributeHandle, Error);

}
if (sender == hci_var.id_ATT) {

}
if (sender == weightscale_var.id_ATT) {
enqueue_HCISocketProxyImpl_ATT_ATTReadByTypeError(&hci_var, ConnectionHandle, AttributeHandle, Error);

}

}


//Dispatcher for messages
void dispatch_ATTReadResponse(uint16_t sender, uint16_t ConnectionHandle, ble_gatt_data_t AttributeValue) {
if (sender == weightscale_var.id_ATT) {
enqueue_HCISocketProxyImpl_ATT_ATTReadResponse(&hci_var, ConnectionHandle, AttributeValue);

}
if (sender == hci_var.id_ATT) {
enqueue_BLEWeightscaleImpl_ATT_ATTReadResponse(&weightscale_var, ConnectionHandle, AttributeValue);

}
if (sender == notifier_var.id_ATT) {
enqueue_HCISocketProxyImpl_ATT_ATTReadResponse(&hci_var, ConnectionHandle, AttributeValue);

}

}


//Dispatcher for messages
void dispatch_Encrypted(uint16_t sender) {
if (sender == connecternotifier_var.id_Connecter) {

}
if (sender == connecterweightscale_var.id_Connecter) {
enqueue_Main_WeightScaleDevice_Encrypted(&main_var);
enqueue_BLEWeightscaleImpl_Connecter_Encrypted(&weightscale_var);

}

}


//Dispatcher for messages
void dispatch_ATTReadRequest(uint16_t sender, uint16_t ConnectionHandle, uint16_t AttributeHandle) {
if (sender == weightscale_var.id_ATT) {
enqueue_HCISocketProxyImpl_ATT_ATTReadRequest(&hci_var, ConnectionHandle, AttributeHandle);

}
if (sender == notifier_var.id_ATT) {
enqueue_HCISocketProxyImpl_ATT_ATTReadRequest(&hci_var, ConnectionHandle, AttributeHandle);

}
if (sender == hci_var.id_ATT) {

}

}


//Dispatcher for messages
void dispatch_SetLEScanEnableCompleted(uint16_t sender, uint8_t NumberAllowedCommandPackets, uint8_t Status) {
if (sender == hci_var.id_Events) {

}

}


//Dispatcher for messages
void dispatch_ATTHandleValueIndication(uint16_t sender, uint16_t ConnectionHandle, uint16_t AttributeHandle, ble_gatt_data_t AttributeValue) {
if (sender == weightscale_var.id_ATT) {
enqueue_HCISocketProxyImpl_ATT_ATTHandleValueIndication(&hci_var, ConnectionHandle, AttributeHandle, AttributeValue);

}
if (sender == hci_var.id_ATT) {
enqueue_BLEWeightscaleImpl_ATT_ATTHandleValueIndication(&weightscale_var, ConnectionHandle, AttributeHandle, AttributeValue);

}
if (sender == notifier_var.id_ATT) {
enqueue_HCISocketProxyImpl_ATT_ATTHandleValueIndication(&hci_var, ConnectionHandle, AttributeHandle, AttributeValue);

}

}


//Dispatcher for messages
void dispatch_Disconnect(uint16_t sender, uint16_t ConnectionHandle, uint8_t Reason) {
if (sender == initialiser_var.id_HCICommands) {
enqueue_HCISocketProxyImpl_Commands_Disconnect(&hci_var, ConnectionHandle, Reason);

}
if (sender == connecterweightscale_var.id_HCICommands) {
enqueue_HCISocketProxyImpl_Commands_Disconnect(&hci_var, ConnectionHandle, Reason);

}
if (sender == connecternotifier_var.id_HCICommands) {
enqueue_HCISocketProxyImpl_Commands_Disconnect(&hci_var, ConnectionHandle, Reason);

}

}


//Dispatcher for messages
void dispatch_SetLEAdvertiseEnableCompleted(uint16_t sender, uint8_t NumberAllowedCommandPackets, uint8_t Status) {
if (sender == hci_var.id_Events) {

}

}


//Dispatcher for messages
void dispatch_LEEncrypt(uint16_t sender, ble_random_number_t Key, ble_random_number_t Plaintext) {
if (sender == initialiser_var.id_HCICommands) {
enqueue_HCISocketProxyImpl_Commands_LEEncrypt(&hci_var, Key, Plaintext);

}
if (sender == connecternotifier_var.id_HCICommands) {
enqueue_HCISocketProxyImpl_Commands_LEEncrypt(&hci_var, Key, Plaintext);

}
if (sender == connecterweightscale_var.id_HCICommands) {
enqueue_HCISocketProxyImpl_Commands_LEEncrypt(&hci_var, Key, Plaintext);

}

}


//Dispatcher for messages
void dispatch_Closed(uint16_t sender) {
if (sender == hci_var.id_Socket) {
enqueue_BLEInitialiserImpl_Socket_Closed(&initialiser_var);

}

}


//Dispatcher for messages
void dispatch_DeviceInitialised(uint16_t sender, bdaddr_t Address) {
if (sender == initialiser_var.id_Initialiser) {
enqueue_Main_Initialiser_DeviceInitialised(&main_var, Address);

}

}


//Dispatcher for messages
void dispatch_MqttConfirmWeightScaleMeasurement(uint16_t sender) {
if (sender == MQTT1_instance.listener_id) {
enqueue_Main_WeightScaleCloud_MqttConfirmWeightScaleMeasurement(&main_var);

}

}


//Dispatcher for messages
void dispatch_Connect(uint16_t sender) {
if (sender == weightscale_var.id_Connecter) {
enqueue_BLEConnecterImpl_Connecter_Connect(&connecterweightscale_var);

}
if (sender == main_var.id_WeightScaleDevice) {
enqueue_BLEConnecterImpl_Connecter_Connect(&connecterweightscale_var);

}
if (sender == main_var.id_NotifierDevice) {
enqueue_BLEConnecterImpl_Connecter_Connect(&connecternotifier_var);

}
if (sender == notifier_var.id_Connecter) {
enqueue_BLEConnecterImpl_Connecter_Connect(&connecternotifier_var);

}

}


//Dispatcher for messages
void dispatch_SetLEAdvertisementParametersCompleted(uint16_t sender, uint8_t NumberAllowedCommandPackets, uint8_t Status) {
if (sender == hci_var.id_Events) {

}

}


//Dispatcher for messages
void dispatch_Interrupt(uint16_t sender) {
if (sender == handler_var.id_Signals) {
enqueue_Main_Signals_Interrupt(&main_var);

}

}


//Dispatcher for messages
void dispatch_LERand(uint16_t sender) {
if (sender == connecterweightscale_var.id_HCICommands) {
enqueue_HCISocketProxyImpl_Commands_LERand(&hci_var);

}
if (sender == initialiser_var.id_HCICommands) {
enqueue_HCISocketProxyImpl_Commands_LERand(&hci_var);

}
if (sender == connecternotifier_var.id_HCICommands) {
enqueue_HCISocketProxyImpl_Commands_LERand(&hci_var);

}

}


//Dispatcher for messages
void dispatch_SetLEAdvertiseEnable(uint16_t sender, uint8_t Enable) {
if (sender == connecterweightscale_var.id_HCICommands) {
enqueue_HCISocketProxyImpl_Commands_SetLEAdvertiseEnable(&hci_var, Enable);

}
if (sender == initialiser_var.id_HCICommands) {
enqueue_HCISocketProxyImpl_Commands_SetLEAdvertiseEnable(&hci_var, Enable);

}
if (sender == connecternotifier_var.id_HCICommands) {
enqueue_HCISocketProxyImpl_Commands_SetLEAdvertiseEnable(&hci_var, Enable);

}

}


//Dispatcher for messages
void dispatch_EncryptionChanged(uint16_t sender, uint8_t Status, uint16_t ConnectionHandle, uint8_t Enabled) {
if (sender == hci_var.id_Events) {
enqueue_BLEConnecterImpl_HCIEvents_EncryptionChanged(&connecterweightscale_var, Status, ConnectionHandle, Enabled);
enqueue_BLEConnecterImpl_HCIEvents_EncryptionChanged(&connecternotifier_var, Status, ConnectionHandle, Enabled);

}

}


//Dispatcher for messages
void dispatch_WeightscaleMeasurement(uint16_t sender, uint16_t Weight, uint8_t UnitImperial, uint16_t Year, uint8_t Month, uint8_t Day, uint8_t Hour, uint8_t Minute, uint8_t Second) {
if (sender == weightscale_var.id_Weightscale) {
enqueue_Main_Weightscale_WeightscaleMeasurement(&main_var, Weight, UnitImperial, Year, Month, Day, Hour, Minute, Second);

}

}


//Dispatcher for messages
void dispatch_LECreateConnection(uint16_t sender, uint16_t Interval, uint16_t Window, uint8_t FilterPolicy, uint8_t PeerAddressType, bdaddr_t PeerAddress, uint8_t OwnAddressType, uint16_t ConnIntervalMin, uint16_t ConnIntervalMax, uint16_t ConnLatency, uint16_t SupervisionTimeout, uint16_t CELengthMin, uint16_t CELengthMax) {
if (sender == initialiser_var.id_HCICommands) {
enqueue_HCISocketProxyImpl_Commands_LECreateConnection(&hci_var, Interval, Window, FilterPolicy, PeerAddressType, PeerAddress, OwnAddressType, ConnIntervalMin, ConnIntervalMax, ConnLatency, SupervisionTimeout, CELengthMin, CELengthMax);

}
if (sender == connecternotifier_var.id_HCICommands) {
enqueue_HCISocketProxyImpl_Commands_LECreateConnection(&hci_var, Interval, Window, FilterPolicy, PeerAddressType, PeerAddress, OwnAddressType, ConnIntervalMin, ConnIntervalMax, ConnLatency, SupervisionTimeout, CELengthMin, CELengthMax);

}
if (sender == connecterweightscale_var.id_HCICommands) {
enqueue_HCISocketProxyImpl_Commands_LECreateConnection(&hci_var, Interval, Window, FilterPolicy, PeerAddressType, PeerAddress, OwnAddressType, ConnIntervalMin, ConnIntervalMax, ConnLatency, SupervisionTimeout, CELengthMin, CELengthMax);

}

}


//Dispatcher for messages
void dispatch_ATTReadByGroupTypeError(uint16_t sender, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error) {
if (sender == weightscale_var.id_ATT) {
enqueue_HCISocketProxyImpl_ATT_ATTReadByGroupTypeError(&hci_var, ConnectionHandle, AttributeHandle, Error);

}
if (sender == hci_var.id_ATT) {

}
if (sender == notifier_var.id_ATT) {
enqueue_HCISocketProxyImpl_ATT_ATTReadByGroupTypeError(&hci_var, ConnectionHandle, AttributeHandle, Error);

}

}


//Dispatcher for messages
void dispatch_Connected(uint16_t sender, uint16_t Handle, uint8_t AddressType, bdaddr_t Address) {
if (sender == connecterweightscale_var.id_Connecter) {
enqueue_BLEWeightscaleImpl_Connecter_Connected(&weightscale_var, Handle, AddressType, Address);

}
if (sender == connecternotifier_var.id_Connecter) {
enqueue_BLENotifierImpl_Connecter_Connected(&notifier_var, Handle, AddressType, Address);

}

}


//Dispatcher for messages
void dispatch_ATTWriteCommand(uint16_t sender, uint16_t ConnectionHandle, uint16_t AttributeHandle, ble_gatt_data_t AttributeValue) {
if (sender == weightscale_var.id_ATT) {
enqueue_HCISocketProxyImpl_ATT_ATTWriteCommand(&hci_var, ConnectionHandle, AttributeHandle, AttributeValue);

}
if (sender == notifier_var.id_ATT) {
enqueue_HCISocketProxyImpl_ATT_ATTWriteCommand(&hci_var, ConnectionHandle, AttributeHandle, AttributeValue);

}
if (sender == hci_var.id_ATT) {

}

}


//Dispatcher for messages
void dispatch_LECreateConnectionStatus(uint16_t sender, uint8_t NumberAllowedCommandPackets, uint8_t Status) {
if (sender == hci_var.id_Events) {
enqueue_BLEConnecterImpl_HCIEvents_LECreateConnectionStatus(&connecterweightscale_var, NumberAllowedCommandPackets, Status);
enqueue_BLEConnecterImpl_HCIEvents_LECreateConnectionStatus(&connecternotifier_var, NumberAllowedCommandPackets, Status);

}

}


//Dispatcher for messages
void dispatch_SetEventMaskCompleted(uint16_t sender, uint8_t NumberAllowedCommandPackets, uint8_t Status) {
if (sender == hci_var.id_Events) {
enqueue_BLEInitialiserImpl_HCIEvents_SetEventMaskCompleted(&initialiser_var, NumberAllowedCommandPackets, Status);

}

}


//Dispatcher for messages
void dispatch_Open(uint16_t sender) {
if (sender == initialiser_var.id_Socket) {
enqueue_HCISocketProxyImpl_Socket_Open(&hci_var);

}
if (sender == connecterweightscale_var.id_Socket) {
enqueue_HCISocketProxyImpl_Socket_Open(&hci_var);

}
if (sender == connecternotifier_var.id_Socket) {
enqueue_HCISocketProxyImpl_Socket_Open(&hci_var);

}

}


//Dispatcher for messages
void dispatch_Started(uint16_t sender) {
if (sender == initialiser_var.id_Initialiser) {

}

}


//Dispatcher for messages
void dispatch_MqttRequestWeightScaleMeasurement(uint16_t sender) {
if (sender == MQTT1_instance.listener_id) {
enqueue_Main_WeightScaleCloud_MqttRequestWeightScaleMeasurement(&main_var);

}

}


//Dispatcher for messages
void dispatch_Opened(uint16_t sender, bdaddr_t Address) {
if (sender == hci_var.id_Socket) {
enqueue_BLEInitialiserImpl_Socket_Opened(&initialiser_var, Address);

}

}


//Dispatcher for messages
void dispatch_SetLEScanParameters(uint16_t sender, uint8_t Type, uint16_t Interval, uint16_t Window, uint8_t OwnAddressType, uint8_t FilterPolicy) {
if (sender == initialiser_var.id_HCICommands) {
enqueue_HCISocketProxyImpl_Commands_SetLEScanParameters(&hci_var, Type, Interval, Window, OwnAddressType, FilterPolicy);

}
if (sender == connecternotifier_var.id_HCICommands) {
enqueue_HCISocketProxyImpl_Commands_SetLEScanParameters(&hci_var, Type, Interval, Window, OwnAddressType, FilterPolicy);

}
if (sender == connecterweightscale_var.id_HCICommands) {
enqueue_HCISocketProxyImpl_Commands_SetLEScanParameters(&hci_var, Type, Interval, Window, OwnAddressType, FilterPolicy);

}

}


//Dispatcher for messages
void dispatch_ReceivedBloodPressureMeasurement(uint16_t sender) {
if (sender == main_var.id_Notifications) {
enqueue_BLENotifierImpl_Notifications_ReceivedBloodPressureMeasurement(&notifier_var);

}

}


//Dispatcher for messages
void dispatch_SetLEAdvertisingData(uint16_t sender, uint8_t Length, ble_adv_data_t Data) {
if (sender == connecternotifier_var.id_HCICommands) {
enqueue_HCISocketProxyImpl_Commands_SetLEAdvertisingData(&hci_var, Length, Data);

}
if (sender == connecterweightscale_var.id_HCICommands) {
enqueue_HCISocketProxyImpl_Commands_SetLEAdvertisingData(&hci_var, Length, Data);

}
if (sender == initialiser_var.id_HCICommands) {
enqueue_HCISocketProxyImpl_Commands_SetLEAdvertisingData(&hci_var, Length, Data);

}

}


//Dispatcher for messages
void dispatch_Failure(uint16_t sender) {
if (sender == initialiser_var.id_Initialiser) {
enqueue_Main_Initialiser_Failure(&main_var);

}
if (sender == connecterweightscale_var.id_Connecter) {
enqueue_Main_WeightScaleDevice_Failure(&main_var);
enqueue_BLEWeightscaleImpl_Connecter_Failure(&weightscale_var);

}
if (sender == connecternotifier_var.id_Connecter) {
enqueue_BLENotifierImpl_Connecter_Failure(&notifier_var);
enqueue_Main_NotifierDevice_Failure(&main_var);

}

}


//Dispatcher for messages
void dispatch_RequestBloodPressureMeasurement(uint16_t sender) {
if (sender == main_var.id_Notifications) {
enqueue_BLENotifierImpl_Notifications_RequestBloodPressureMeasurement(&notifier_var);

}

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
void BLEConnecterImpl_send_Connecter_Encrypted_sender(struct BLEConnecterImpl_Instance *_instance) {
dispatch_Encrypted(_instance->id_Connecter);
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
void BLENotifierImpl_send_Notifications_ReadyForNotificationCommand_sender(struct BLENotifierImpl_Instance *_instance) {
dispatch_ReadyForNotificationCommand(_instance->id_Notifications);
}
void BLENotifierImpl_send_Connecter_Connect_sender(struct BLENotifierImpl_Instance *_instance) {
dispatch_Connect(_instance->id_Connecter);
}
void BLENotifierImpl_send_Connecter_Stop_sender(struct BLENotifierImpl_Instance *_instance) {
dispatch_Stop(_instance->id_Connecter);
}
void BLENotifierImpl_send_Connecter_Encrypt_sender(struct BLENotifierImpl_Instance *_instance) {
dispatch_Encrypt(_instance->id_Connecter);
}
void BLENotifierImpl_send_ATT_ATTFindInformationRequest_sender(struct BLENotifierImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t StartingHandle, uint16_t EndingHandle) {
dispatch_ATTFindInformationRequest(_instance->id_ATT, ConnectionHandle, StartingHandle, EndingHandle);
}
void BLENotifierImpl_send_ATT_ATTFindInformationResponse_sender(struct BLENotifierImpl_Instance *_instance, uint16_t ConnectionHandle, uint8_t Format, ble_gatt_data_t InformationData) {
dispatch_ATTFindInformationResponse(_instance->id_ATT, ConnectionHandle, Format, InformationData);
}
void BLENotifierImpl_send_ATT_ATTFindInformationError_sender(struct BLENotifierImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error) {
dispatch_ATTFindInformationError(_instance->id_ATT, ConnectionHandle, AttributeHandle, Error);
}
void BLENotifierImpl_send_ATT_ATTReadByTypeRequest_sender(struct BLENotifierImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t StartingHandle, uint16_t EndingHandle, ble_uuid_t AttributeType) {
dispatch_ATTReadByTypeRequest(_instance->id_ATT, ConnectionHandle, StartingHandle, EndingHandle, AttributeType);
}
void BLENotifierImpl_send_ATT_ATTReadByTypeResponse_sender(struct BLENotifierImpl_Instance *_instance, uint16_t ConnectionHandle, uint8_t Length, ble_gatt_data_t AttributeDataList) {
dispatch_ATTReadByTypeResponse(_instance->id_ATT, ConnectionHandle, Length, AttributeDataList);
}
void BLENotifierImpl_send_ATT_ATTReadByTypeError_sender(struct BLENotifierImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error) {
dispatch_ATTReadByTypeError(_instance->id_ATT, ConnectionHandle, AttributeHandle, Error);
}
void BLENotifierImpl_send_ATT_ATTReadRequest_sender(struct BLENotifierImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle) {
dispatch_ATTReadRequest(_instance->id_ATT, ConnectionHandle, AttributeHandle);
}
void BLENotifierImpl_send_ATT_ATTReadResponse_sender(struct BLENotifierImpl_Instance *_instance, uint16_t ConnectionHandle, ble_gatt_data_t AttributeValue) {
dispatch_ATTReadResponse(_instance->id_ATT, ConnectionHandle, AttributeValue);
}
void BLENotifierImpl_send_ATT_ATTReadError_sender(struct BLENotifierImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error) {
dispatch_ATTReadError(_instance->id_ATT, ConnectionHandle, AttributeHandle, Error);
}
void BLENotifierImpl_send_ATT_ATTReadByGroupTypeRequest_sender(struct BLENotifierImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t StartingHandle, uint16_t EndingHandle, ble_uuid_t AttributeGroupType) {
dispatch_ATTReadByGroupTypeRequest(_instance->id_ATT, ConnectionHandle, StartingHandle, EndingHandle, AttributeGroupType);
}
void BLENotifierImpl_send_ATT_ATTReadByGroupTypeResponse_sender(struct BLENotifierImpl_Instance *_instance, uint16_t ConnectionHandle, uint8_t Length, ble_gatt_data_t AttributeDataList) {
dispatch_ATTReadByGroupTypeResponse(_instance->id_ATT, ConnectionHandle, Length, AttributeDataList);
}
void BLENotifierImpl_send_ATT_ATTReadByGroupTypeError_sender(struct BLENotifierImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error) {
dispatch_ATTReadByGroupTypeError(_instance->id_ATT, ConnectionHandle, AttributeHandle, Error);
}
void BLENotifierImpl_send_ATT_ATTWriteRequest_sender(struct BLENotifierImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, ble_gatt_data_t AttributeValue) {
dispatch_ATTWriteRequest(_instance->id_ATT, ConnectionHandle, AttributeHandle, AttributeValue);
}
void BLENotifierImpl_send_ATT_ATTWriteResponse_sender(struct BLENotifierImpl_Instance *_instance, uint16_t ConnectionHandle) {
dispatch_ATTWriteResponse(_instance->id_ATT, ConnectionHandle);
}
void BLENotifierImpl_send_ATT_ATTWriteError_sender(struct BLENotifierImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error) {
dispatch_ATTWriteError(_instance->id_ATT, ConnectionHandle, AttributeHandle, Error);
}
void BLENotifierImpl_send_ATT_ATTWriteCommand_sender(struct BLENotifierImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, ble_gatt_data_t AttributeValue) {
dispatch_ATTWriteCommand(_instance->id_ATT, ConnectionHandle, AttributeHandle, AttributeValue);
}
void BLENotifierImpl_send_ATT_ATTHandleValueNotification_sender(struct BLENotifierImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, ble_gatt_data_t AttributeValue) {
dispatch_ATTHandleValueNotification(_instance->id_ATT, ConnectionHandle, AttributeHandle, AttributeValue);
}
void BLENotifierImpl_send_ATT_ATTHandleValueIndication_sender(struct BLENotifierImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, ble_gatt_data_t AttributeValue) {
dispatch_ATTHandleValueIndication(_instance->id_ATT, ConnectionHandle, AttributeHandle, AttributeValue);
}
void BLENotifierImpl_send_ATT_ATTHandleValueConfirmation_sender(struct BLENotifierImpl_Instance *_instance, uint16_t ConnectionHandle) {
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
void ExitHandler_send_Signals_Interrupt_sender(struct ExitHandler_Instance *_instance) {
dispatch_Interrupt(_instance->id_Signals);
}
void BLEWeightscaleImpl_send_Weightscale_BatteryPercentage_sender(struct BLEWeightscaleImpl_Instance *_instance, uint8_t Percent) {
dispatch_BatteryPercentage(_instance->id_Weightscale, Percent);
}
void BLEWeightscaleImpl_send_Weightscale_WeightscaleMeasurement_sender(struct BLEWeightscaleImpl_Instance *_instance, uint16_t Weight, uint8_t UnitImperial, uint16_t Year, uint8_t Month, uint8_t Day, uint8_t Hour, uint8_t Minute, uint8_t Second) {
dispatch_WeightscaleMeasurement(_instance->id_Weightscale, Weight, UnitImperial, Year, Month, Day, Hour, Minute, Second);
}
void BLEWeightscaleImpl_send_Connecter_Connect_sender(struct BLEWeightscaleImpl_Instance *_instance) {
dispatch_Connect(_instance->id_Connecter);
}
void BLEWeightscaleImpl_send_Connecter_Stop_sender(struct BLEWeightscaleImpl_Instance *_instance) {
dispatch_Stop(_instance->id_Connecter);
}
void BLEWeightscaleImpl_send_Connecter_Encrypt_sender(struct BLEWeightscaleImpl_Instance *_instance) {
dispatch_Encrypt(_instance->id_Connecter);
}
void BLEWeightscaleImpl_send_ATT_ATTFindInformationRequest_sender(struct BLEWeightscaleImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t StartingHandle, uint16_t EndingHandle) {
dispatch_ATTFindInformationRequest(_instance->id_ATT, ConnectionHandle, StartingHandle, EndingHandle);
}
void BLEWeightscaleImpl_send_ATT_ATTFindInformationResponse_sender(struct BLEWeightscaleImpl_Instance *_instance, uint16_t ConnectionHandle, uint8_t Format, ble_gatt_data_t InformationData) {
dispatch_ATTFindInformationResponse(_instance->id_ATT, ConnectionHandle, Format, InformationData);
}
void BLEWeightscaleImpl_send_ATT_ATTFindInformationError_sender(struct BLEWeightscaleImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error) {
dispatch_ATTFindInformationError(_instance->id_ATT, ConnectionHandle, AttributeHandle, Error);
}
void BLEWeightscaleImpl_send_ATT_ATTReadByTypeRequest_sender(struct BLEWeightscaleImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t StartingHandle, uint16_t EndingHandle, ble_uuid_t AttributeType) {
dispatch_ATTReadByTypeRequest(_instance->id_ATT, ConnectionHandle, StartingHandle, EndingHandle, AttributeType);
}
void BLEWeightscaleImpl_send_ATT_ATTReadByTypeResponse_sender(struct BLEWeightscaleImpl_Instance *_instance, uint16_t ConnectionHandle, uint8_t Length, ble_gatt_data_t AttributeDataList) {
dispatch_ATTReadByTypeResponse(_instance->id_ATT, ConnectionHandle, Length, AttributeDataList);
}
void BLEWeightscaleImpl_send_ATT_ATTReadByTypeError_sender(struct BLEWeightscaleImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error) {
dispatch_ATTReadByTypeError(_instance->id_ATT, ConnectionHandle, AttributeHandle, Error);
}
void BLEWeightscaleImpl_send_ATT_ATTReadRequest_sender(struct BLEWeightscaleImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle) {
dispatch_ATTReadRequest(_instance->id_ATT, ConnectionHandle, AttributeHandle);
}
void BLEWeightscaleImpl_send_ATT_ATTReadResponse_sender(struct BLEWeightscaleImpl_Instance *_instance, uint16_t ConnectionHandle, ble_gatt_data_t AttributeValue) {
dispatch_ATTReadResponse(_instance->id_ATT, ConnectionHandle, AttributeValue);
}
void BLEWeightscaleImpl_send_ATT_ATTReadError_sender(struct BLEWeightscaleImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error) {
dispatch_ATTReadError(_instance->id_ATT, ConnectionHandle, AttributeHandle, Error);
}
void BLEWeightscaleImpl_send_ATT_ATTReadByGroupTypeRequest_sender(struct BLEWeightscaleImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t StartingHandle, uint16_t EndingHandle, ble_uuid_t AttributeGroupType) {
dispatch_ATTReadByGroupTypeRequest(_instance->id_ATT, ConnectionHandle, StartingHandle, EndingHandle, AttributeGroupType);
}
void BLEWeightscaleImpl_send_ATT_ATTReadByGroupTypeResponse_sender(struct BLEWeightscaleImpl_Instance *_instance, uint16_t ConnectionHandle, uint8_t Length, ble_gatt_data_t AttributeDataList) {
dispatch_ATTReadByGroupTypeResponse(_instance->id_ATT, ConnectionHandle, Length, AttributeDataList);
}
void BLEWeightscaleImpl_send_ATT_ATTReadByGroupTypeError_sender(struct BLEWeightscaleImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error) {
dispatch_ATTReadByGroupTypeError(_instance->id_ATT, ConnectionHandle, AttributeHandle, Error);
}
void BLEWeightscaleImpl_send_ATT_ATTWriteRequest_sender(struct BLEWeightscaleImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, ble_gatt_data_t AttributeValue) {
dispatch_ATTWriteRequest(_instance->id_ATT, ConnectionHandle, AttributeHandle, AttributeValue);
}
void BLEWeightscaleImpl_send_ATT_ATTWriteResponse_sender(struct BLEWeightscaleImpl_Instance *_instance, uint16_t ConnectionHandle) {
dispatch_ATTWriteResponse(_instance->id_ATT, ConnectionHandle);
}
void BLEWeightscaleImpl_send_ATT_ATTWriteError_sender(struct BLEWeightscaleImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error) {
dispatch_ATTWriteError(_instance->id_ATT, ConnectionHandle, AttributeHandle, Error);
}
void BLEWeightscaleImpl_send_ATT_ATTWriteCommand_sender(struct BLEWeightscaleImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, ble_gatt_data_t AttributeValue) {
dispatch_ATTWriteCommand(_instance->id_ATT, ConnectionHandle, AttributeHandle, AttributeValue);
}
void BLEWeightscaleImpl_send_ATT_ATTHandleValueNotification_sender(struct BLEWeightscaleImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, ble_gatt_data_t AttributeValue) {
dispatch_ATTHandleValueNotification(_instance->id_ATT, ConnectionHandle, AttributeHandle, AttributeValue);
}
void BLEWeightscaleImpl_send_ATT_ATTHandleValueIndication_sender(struct BLEWeightscaleImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, ble_gatt_data_t AttributeValue) {
dispatch_ATTHandleValueIndication(_instance->id_ATT, ConnectionHandle, AttributeHandle, AttributeValue);
}
void BLEWeightscaleImpl_send_ATT_ATTHandleValueConfirmation_sender(struct BLEWeightscaleImpl_Instance *_instance, uint16_t ConnectionHandle) {
dispatch_ATTHandleValueConfirmation(_instance->id_ATT, ConnectionHandle);
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
void Main_send_Signals_Quit_sender(struct Main_Instance *_instance, int16_t code) {
dispatch_Quit(_instance->id_Signals, code);
}
void Main_send_WeightScaleDevice_Connect_sender(struct Main_Instance *_instance) {
dispatch_Connect(_instance->id_WeightScaleDevice);
}
void Main_send_WeightScaleDevice_Stop_sender(struct Main_Instance *_instance) {
dispatch_Stop(_instance->id_WeightScaleDevice);
}
void Main_send_WeightScaleDevice_Encrypt_sender(struct Main_Instance *_instance) {
dispatch_Encrypt(_instance->id_WeightScaleDevice);
}
void Main_send_NotifierDevice_Connect_sender(struct Main_Instance *_instance) {
dispatch_Connect(_instance->id_NotifierDevice);
}
void Main_send_NotifierDevice_Stop_sender(struct Main_Instance *_instance) {
dispatch_Stop(_instance->id_NotifierDevice);
}
void Main_send_NotifierDevice_Encrypt_sender(struct Main_Instance *_instance) {
dispatch_Encrypt(_instance->id_NotifierDevice);
}
void Main_send_Initialiser_Start_sender(struct Main_Instance *_instance) {
dispatch_Start(_instance->id_Initialiser);
}
void Main_send_Initialiser_Stop_sender(struct Main_Instance *_instance) {
dispatch_Stop(_instance->id_Initialiser);
}
void Main_send_Notifications_RequestBloodPressureMeasurement_sender(struct Main_Instance *_instance) {
dispatch_RequestBloodPressureMeasurement(_instance->id_Notifications);
}
void Main_send_Notifications_ReceivedBloodPressureMeasurement_sender(struct Main_Instance *_instance) {
dispatch_ReceivedBloodPressureMeasurement(_instance->id_Notifications);
}
void Main_send_Notifications_BadBloodPressureMeasurement_sender(struct Main_Instance *_instance) {
dispatch_BadBloodPressureMeasurement(_instance->id_Notifications);
}
void Main_send_Notifications_StoredBloodPressureMeasurement_sender(struct Main_Instance *_instance) {
dispatch_StoredBloodPressureMeasurement(_instance->id_Notifications);
}

void forward_Main_send_WeightScaleCloud_TelluCloudWeightScale(struct Main_Instance *_instance, time_t observationTime, float mass){
if(_instance->id_WeightScaleCloud == main_var.id_WeightScaleCloud) {
forward_MQTT1_Main_send_WeightScaleCloud_TelluCloudWeightScale(_instance, observationTime, mass);
}
}

void initialize_configuration_AND_UC352BLE_SYNC() {
// Initialize connectors
register_BLEWeightscaleImpl_send_Weightscale_BatteryPercentage_listener(&BLEWeightscaleImpl_send_Weightscale_BatteryPercentage_sender);
register_BLEWeightscaleImpl_send_Weightscale_WeightscaleMeasurement_listener(&BLEWeightscaleImpl_send_Weightscale_WeightscaleMeasurement_sender);
register_BLEWeightscaleImpl_send_Connecter_Connect_listener(&BLEWeightscaleImpl_send_Connecter_Connect_sender);
register_BLEWeightscaleImpl_send_Connecter_Stop_listener(&BLEWeightscaleImpl_send_Connecter_Stop_sender);
register_BLEWeightscaleImpl_send_Connecter_Encrypt_listener(&BLEWeightscaleImpl_send_Connecter_Encrypt_sender);
register_BLEWeightscaleImpl_send_ATT_ATTFindInformationRequest_listener(&BLEWeightscaleImpl_send_ATT_ATTFindInformationRequest_sender);
register_BLEWeightscaleImpl_send_ATT_ATTFindInformationResponse_listener(&BLEWeightscaleImpl_send_ATT_ATTFindInformationResponse_sender);
register_BLEWeightscaleImpl_send_ATT_ATTFindInformationError_listener(&BLEWeightscaleImpl_send_ATT_ATTFindInformationError_sender);
register_BLEWeightscaleImpl_send_ATT_ATTReadByTypeRequest_listener(&BLEWeightscaleImpl_send_ATT_ATTReadByTypeRequest_sender);
register_BLEWeightscaleImpl_send_ATT_ATTReadByTypeResponse_listener(&BLEWeightscaleImpl_send_ATT_ATTReadByTypeResponse_sender);
register_BLEWeightscaleImpl_send_ATT_ATTReadByTypeError_listener(&BLEWeightscaleImpl_send_ATT_ATTReadByTypeError_sender);
register_BLEWeightscaleImpl_send_ATT_ATTReadRequest_listener(&BLEWeightscaleImpl_send_ATT_ATTReadRequest_sender);
register_BLEWeightscaleImpl_send_ATT_ATTReadResponse_listener(&BLEWeightscaleImpl_send_ATT_ATTReadResponse_sender);
register_BLEWeightscaleImpl_send_ATT_ATTReadError_listener(&BLEWeightscaleImpl_send_ATT_ATTReadError_sender);
register_BLEWeightscaleImpl_send_ATT_ATTReadByGroupTypeRequest_listener(&BLEWeightscaleImpl_send_ATT_ATTReadByGroupTypeRequest_sender);
register_BLEWeightscaleImpl_send_ATT_ATTReadByGroupTypeResponse_listener(&BLEWeightscaleImpl_send_ATT_ATTReadByGroupTypeResponse_sender);
register_BLEWeightscaleImpl_send_ATT_ATTReadByGroupTypeError_listener(&BLEWeightscaleImpl_send_ATT_ATTReadByGroupTypeError_sender);
register_BLEWeightscaleImpl_send_ATT_ATTWriteRequest_listener(&BLEWeightscaleImpl_send_ATT_ATTWriteRequest_sender);
register_BLEWeightscaleImpl_send_ATT_ATTWriteResponse_listener(&BLEWeightscaleImpl_send_ATT_ATTWriteResponse_sender);
register_BLEWeightscaleImpl_send_ATT_ATTWriteError_listener(&BLEWeightscaleImpl_send_ATT_ATTWriteError_sender);
register_BLEWeightscaleImpl_send_ATT_ATTWriteCommand_listener(&BLEWeightscaleImpl_send_ATT_ATTWriteCommand_sender);
register_BLEWeightscaleImpl_send_ATT_ATTHandleValueNotification_listener(&BLEWeightscaleImpl_send_ATT_ATTHandleValueNotification_sender);
register_BLEWeightscaleImpl_send_ATT_ATTHandleValueIndication_listener(&BLEWeightscaleImpl_send_ATT_ATTHandleValueIndication_sender);
register_BLEWeightscaleImpl_send_ATT_ATTHandleValueConfirmation_listener(&BLEWeightscaleImpl_send_ATT_ATTHandleValueConfirmation_sender);
register_BLEConnecterImpl_send_Connecter_Connected_listener(&BLEConnecterImpl_send_Connecter_Connected_sender);
register_BLEConnecterImpl_send_Connecter_Stopped_listener(&BLEConnecterImpl_send_Connecter_Stopped_sender);
register_BLEConnecterImpl_send_Connecter_Failure_listener(&BLEConnecterImpl_send_Connecter_Failure_sender);
register_BLEConnecterImpl_send_Connecter_Encrypted_listener(&BLEConnecterImpl_send_Connecter_Encrypted_sender);
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
register_Main_send_Signals_Quit_listener(&Main_send_Signals_Quit_sender);
register_Main_send_WeightScaleDevice_Connect_listener(&Main_send_WeightScaleDevice_Connect_sender);
register_Main_send_WeightScaleDevice_Stop_listener(&Main_send_WeightScaleDevice_Stop_sender);
register_Main_send_WeightScaleDevice_Encrypt_listener(&Main_send_WeightScaleDevice_Encrypt_sender);
register_Main_send_NotifierDevice_Connect_listener(&Main_send_NotifierDevice_Connect_sender);
register_Main_send_NotifierDevice_Stop_listener(&Main_send_NotifierDevice_Stop_sender);
register_Main_send_NotifierDevice_Encrypt_listener(&Main_send_NotifierDevice_Encrypt_sender);
register_Main_send_Initialiser_Start_listener(&Main_send_Initialiser_Start_sender);
register_Main_send_Initialiser_Stop_listener(&Main_send_Initialiser_Stop_sender);
register_Main_send_Notifications_RequestBloodPressureMeasurement_listener(&Main_send_Notifications_RequestBloodPressureMeasurement_sender);
register_Main_send_Notifications_ReceivedBloodPressureMeasurement_listener(&Main_send_Notifications_ReceivedBloodPressureMeasurement_sender);
register_Main_send_Notifications_BadBloodPressureMeasurement_listener(&Main_send_Notifications_BadBloodPressureMeasurement_sender);
register_Main_send_Notifications_StoredBloodPressureMeasurement_listener(&Main_send_Notifications_StoredBloodPressureMeasurement_sender);
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
register_BLENotifierImpl_send_Notifications_ReadyForNotificationCommand_listener(&BLENotifierImpl_send_Notifications_ReadyForNotificationCommand_sender);
register_BLENotifierImpl_send_Connecter_Connect_listener(&BLENotifierImpl_send_Connecter_Connect_sender);
register_BLENotifierImpl_send_Connecter_Stop_listener(&BLENotifierImpl_send_Connecter_Stop_sender);
register_BLENotifierImpl_send_Connecter_Encrypt_listener(&BLENotifierImpl_send_Connecter_Encrypt_sender);
register_BLENotifierImpl_send_ATT_ATTFindInformationRequest_listener(&BLENotifierImpl_send_ATT_ATTFindInformationRequest_sender);
register_BLENotifierImpl_send_ATT_ATTFindInformationResponse_listener(&BLENotifierImpl_send_ATT_ATTFindInformationResponse_sender);
register_BLENotifierImpl_send_ATT_ATTFindInformationError_listener(&BLENotifierImpl_send_ATT_ATTFindInformationError_sender);
register_BLENotifierImpl_send_ATT_ATTReadByTypeRequest_listener(&BLENotifierImpl_send_ATT_ATTReadByTypeRequest_sender);
register_BLENotifierImpl_send_ATT_ATTReadByTypeResponse_listener(&BLENotifierImpl_send_ATT_ATTReadByTypeResponse_sender);
register_BLENotifierImpl_send_ATT_ATTReadByTypeError_listener(&BLENotifierImpl_send_ATT_ATTReadByTypeError_sender);
register_BLENotifierImpl_send_ATT_ATTReadRequest_listener(&BLENotifierImpl_send_ATT_ATTReadRequest_sender);
register_BLENotifierImpl_send_ATT_ATTReadResponse_listener(&BLENotifierImpl_send_ATT_ATTReadResponse_sender);
register_BLENotifierImpl_send_ATT_ATTReadError_listener(&BLENotifierImpl_send_ATT_ATTReadError_sender);
register_BLENotifierImpl_send_ATT_ATTReadByGroupTypeRequest_listener(&BLENotifierImpl_send_ATT_ATTReadByGroupTypeRequest_sender);
register_BLENotifierImpl_send_ATT_ATTReadByGroupTypeResponse_listener(&BLENotifierImpl_send_ATT_ATTReadByGroupTypeResponse_sender);
register_BLENotifierImpl_send_ATT_ATTReadByGroupTypeError_listener(&BLENotifierImpl_send_ATT_ATTReadByGroupTypeError_sender);
register_BLENotifierImpl_send_ATT_ATTWriteRequest_listener(&BLENotifierImpl_send_ATT_ATTWriteRequest_sender);
register_BLENotifierImpl_send_ATT_ATTWriteResponse_listener(&BLENotifierImpl_send_ATT_ATTWriteResponse_sender);
register_BLENotifierImpl_send_ATT_ATTWriteError_listener(&BLENotifierImpl_send_ATT_ATTWriteError_sender);
register_BLENotifierImpl_send_ATT_ATTWriteCommand_listener(&BLENotifierImpl_send_ATT_ATTWriteCommand_sender);
register_BLENotifierImpl_send_ATT_ATTHandleValueNotification_listener(&BLENotifierImpl_send_ATT_ATTHandleValueNotification_sender);
register_BLENotifierImpl_send_ATT_ATTHandleValueIndication_listener(&BLENotifierImpl_send_ATT_ATTHandleValueIndication_sender);
register_BLENotifierImpl_send_ATT_ATTHandleValueConfirmation_listener(&BLENotifierImpl_send_ATT_ATTHandleValueConfirmation_sender);
register_external_Main_send_WeightScaleCloud_TelluCloudWeightScale_listener(&forward_Main_send_WeightScaleCloud_TelluCloudWeightScale);

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
hci_var.HCISocketProxy_Device_var = "B8:27:EB:7E:4A:75";

// Init the ID, state variables and properties for instance connecterweightscale
connecterweightscale_var.id_Connecter = add_instance( (void*) &connecterweightscale_var);
connecterweightscale_var.id_Socket = add_instance( (void*) &connecterweightscale_var);
connecterweightscale_var.id_HCICommands = add_instance( (void*) &connecterweightscale_var);
connecterweightscale_var.id_HCIEvents = add_instance( (void*) &connecterweightscale_var);
connecterweightscale_var.id_SMP = add_instance( (void*) &connecterweightscale_var);
connecterweightscale_var.id_ATT = add_instance( (void*) &connecterweightscale_var);
connecterweightscale_var.BLEConnecterImpl_States_State = BLECONNECTERIMPL_STATES_NOTCONNECTED_STATE;
connecterweightscale_var.active = true;
connecterweightscale_var.alive = true;
connecterweightscale_var.BLEConnecterImpl_ConnectAddress_var = "5C:31:3E:5F:00:7A";
connecterweightscale_var.BLEConnecterImpl_ConnectAddressType_var = BLEADDRESSTYPE_PUBLIC;
connecterweightscale_var.BLEConnecterImpl_LongTermKey_var = peer_ltk;
connecterweightscale_var.BLEConnecterImpl_EncryptedDiversifier_var = peer_ediv;
connecterweightscale_var.BLEConnecterImpl_RandomNumber_var = peer_random;

// Init the ID, state variables and properties for instance weightscale
weightscale_var.id_Weightscale = add_instance( (void*) &weightscale_var);
weightscale_var.id_Connecter = add_instance( (void*) &weightscale_var);
weightscale_var.id_ATT = add_instance( (void*) &weightscale_var);
weightscale_var.BLEWeightscaleImpl_States_State = BLEWEIGHTSCALEIMPL_STATES_WAITING_STATE;
weightscale_var.active = true;
weightscale_var.alive = true;
weightscale_var.BLEWeightscaleImpl_BatteryValueHandle_var = 0x002B;
weightscale_var.BLEWeightscaleImpl_WeightScaleValueHandle_var = 0x0012;
weightscale_var.BLEWeightscaleImpl_WeightScaleConfigurationHandle_var = 0x0013;

// Init the ID, state variables and properties for instance connecternotifier
connecternotifier_var.id_Connecter = add_instance( (void*) &connecternotifier_var);
connecternotifier_var.id_Socket = add_instance( (void*) &connecternotifier_var);
connecternotifier_var.id_HCICommands = add_instance( (void*) &connecternotifier_var);
connecternotifier_var.id_HCIEvents = add_instance( (void*) &connecternotifier_var);
connecternotifier_var.id_SMP = add_instance( (void*) &connecternotifier_var);
connecternotifier_var.id_ATT = add_instance( (void*) &connecternotifier_var);
connecternotifier_var.BLEConnecterImpl_States_State = BLECONNECTERIMPL_STATES_NOTCONNECTED_STATE;
connecternotifier_var.active = true;
connecternotifier_var.alive = true;
connecternotifier_var.BLEConnecterImpl_ConnectAddress_var = "CC:AF:6D:65:64:4A";
connecternotifier_var.BLEConnecterImpl_ConnectAddressType_var = BLEADDRESSTYPE_RANDOM;

// Init the ID, state variables and properties for instance handler
handler_var.id_Signals = add_instance( (void*) &handler_var);
handler_var.ExitHandler_Handler_State = EXITHANDLER_HANDLER_WAITING_STATE;
handler_var.active = true;
handler_var.alive = true;

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

// Init the ID, state variables and properties for instance notifier
notifier_var.id_Notifications = add_instance( (void*) &notifier_var);
notifier_var.id_Connecter = add_instance( (void*) &notifier_var);
notifier_var.id_ATT = add_instance( (void*) &notifier_var);
notifier_var.BLENotifierImpl_States_State = BLENOTIFIERIMPL_STATES_WAITING_STATE;
notifier_var.BLENotifierImpl_States_Connected_State = BLENOTIFIERIMPL_STATES_CONNECTED_SETREADNOTIFICATIONS_STATE;
notifier_var.active = true;
notifier_var.alive = true;
notifier_var.BLENotifierImpl_WriteByteValueHandle_var = 0x0025;
notifier_var.BLENotifierImpl_ReadByteValueHandle_var = 0x0021;
notifier_var.BLENotifierImpl_ReadByteConfigurationHandle_var = 0x0023;
notifier_var.BLENotifierImpl_RequestCommand_var = request_cmd;
notifier_var.BLENotifierImpl_ReceivedCommand_var = received_cmd;
notifier_var.BLENotifierImpl_ErrorCommand_var = error_cmd;
notifier_var.BLENotifierImpl_StoredCommand_var = stored_cmd;

// Init the ID, state variables and properties for instance main
main_var.id_Signals = add_instance( (void*) &main_var);
main_var.id_WeightScaleDevice = add_instance( (void*) &main_var);
main_var.id_NotifierDevice = add_instance( (void*) &main_var);
main_var.id_WeightScaleCloud = add_instance( (void*) &main_var);
main_var.id_Initialiser = add_instance( (void*) &main_var);
main_var.id_Weightscale = add_instance( (void*) &main_var);
main_var.id_Notifications = add_instance( (void*) &main_var);
main_var.Main_States_State = MAIN_STATES_INITIALISE_STATE;
main_var.Main_States_Standby_State = MAIN_STATES_STANDBY_SYNCWEIGHTSCALE_STATE;
main_var.Main_States_Standby_SyncWeightScale_State = MAIN_STATES_STANDBY_SYNCWEIGHTSCALE_CONNECTWS_STATE;
main_var.Main_States_Standby_SendToNotifier_State = MAIN_STATES_STANDBY_SENDTONOTIFIER_CONNECTN_STATE;
main_var.active = true;
main_var.alive = true;
main_var.Main_SendToNotifier_var = 0x00;

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

  
  initialize_configuration_AND_UC352BLE_SYNC();

// Network Initialization
// Initialise MQTT1:
MQTT1_instance.listener_id = add_instance(&MQTT1_instance);
MQTT1_setup(&MQTT1_instance);
pthread_t thread_MQTT1;
pthread_create( &thread_MQTT1, NULL, MQTT1_start_receiver_thread, NULL);
// End Network Initialization

handler_var.fifo.fifo_size = 65535;
handler_var.fifo.fifo_head = 0;
handler_var.fifo.fifo_tail = 0;
handler_var.fifo.fifo = &handler_fifo_array;
init_runtime(&(handler_var.fifo));
pthread_t thread_handler;

weightscale_var.fifo.fifo_size = 65535;
weightscale_var.fifo.fifo_head = 0;
weightscale_var.fifo.fifo_tail = 0;
weightscale_var.fifo.fifo = &weightscale_fifo_array;
init_runtime(&(weightscale_var.fifo));
pthread_t thread_weightscale;

notifier_var.fifo.fifo_size = 65535;
notifier_var.fifo.fifo_head = 0;
notifier_var.fifo.fifo_tail = 0;
notifier_var.fifo.fifo = &notifier_fifo_array;
init_runtime(&(notifier_var.fifo));
pthread_t thread_notifier;

connecternotifier_var.fifo.fifo_size = 65535;
connecternotifier_var.fifo.fifo_head = 0;
connecternotifier_var.fifo.fifo_tail = 0;
connecternotifier_var.fifo.fifo = &connecternotifier_fifo_array;
init_runtime(&(connecternotifier_var.fifo));
pthread_t thread_connecternotifier;

connecterweightscale_var.fifo.fifo_size = 65535;
connecterweightscale_var.fifo.fifo_head = 0;
connecterweightscale_var.fifo.fifo_tail = 0;
connecterweightscale_var.fifo.fifo = &connecterweightscale_fifo_array;
init_runtime(&(connecterweightscale_var.fifo));
pthread_t thread_connecterweightscale;

main_var.fifo.fifo_size = 65535;
main_var.fifo.fifo_head = 0;
main_var.fifo.fifo_tail = 0;
main_var.fifo.fifo = &main_fifo_array;
init_runtime(&(main_var.fifo));
pthread_t thread_main;

initialiser_var.fifo.fifo_size = 65535;
initialiser_var.fifo.fifo_head = 0;
initialiser_var.fifo.fifo_tail = 0;
initialiser_var.fifo.fifo = &initialiser_fifo_array;
init_runtime(&(initialiser_var.fifo));
pthread_t thread_initialiser;

hci_var.fifo.fifo_size = 65535;
hci_var.fifo.fifo_head = 0;
hci_var.fifo.fifo_tail = 0;
hci_var.fifo.fifo = &hci_fifo_array;
init_runtime(&(hci_var.fifo));
pthread_t thread_hci;

hci_var.initState = -1;
HCISocketProxy_Socket_OnEntry(HCISOCKETPROXY_SOCKET_STATE, &hci_var);
pthread_create( &thread_hci, NULL, HCISocketProxyImpl_run, (void *) &hci_var);
connecterweightscale_var.initState = -1;
BLEConnecterImpl_States_OnEntry(BLECONNECTERIMPL_STATES_STATE, &connecterweightscale_var);
pthread_create( &thread_connecterweightscale, NULL, BLEConnecterImpl_run, (void *) &connecterweightscale_var);
connecternotifier_var.initState = -1;
BLEConnecterImpl_States_OnEntry(BLECONNECTERIMPL_STATES_STATE, &connecternotifier_var);
pthread_create( &thread_connecternotifier, NULL, BLEConnecterImpl_run, (void *) &connecternotifier_var);
notifier_var.initState = -1;
BLENotifierImpl_States_OnEntry(BLENOTIFIERIMPL_STATES_STATE, &notifier_var);
pthread_create( &thread_notifier, NULL, BLENotifierImpl_run, (void *) &notifier_var);
weightscale_var.initState = -1;
BLEWeightscaleImpl_States_OnEntry(BLEWEIGHTSCALEIMPL_STATES_STATE, &weightscale_var);
pthread_create( &thread_weightscale, NULL, BLEWeightscaleImpl_run, (void *) &weightscale_var);
handler_var.initState = -1;
ExitHandler_Handler_OnEntry(EXITHANDLER_HANDLER_STATE, &handler_var);
pthread_create( &thread_handler, NULL, ExitHandler_run, (void *) &handler_var);
initialiser_var.initState = -1;
BLEInitialiserImpl_States_OnEntry(BLEINITIALISERIMPL_STATES_STATE, &initialiser_var);
pthread_create( &thread_initialiser, NULL, BLEInitialiserImpl_run, (void *) &initialiser_var);
main_var.initState = -1;
Main_States_OnEntry(MAIN_STATES_STATE, &main_var);
pthread_create( &thread_main, NULL, Main_run, (void *) &main_var);

  pthread_join( thread_connecternotifier, NULL);
pthread_join( thread_weightscale, NULL);
pthread_join( thread_notifier, NULL);
pthread_join( thread_main, NULL);
pthread_join( thread_connecterweightscale, NULL);
pthread_join( thread_handler, NULL);
pthread_join( thread_initialiser, NULL);
pthread_join( thread_hci, NULL);

}