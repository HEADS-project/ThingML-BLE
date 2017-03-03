/*****************************************************
 *      THIS IS A GENERATED FILE. DO NOT EDIT.
 *      Implementation for Application MedicalGW
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
#include "BLEScannerImpl.h"
#include "BLEConnecterImpl.h"
#include "ANDUA651BLEImpl.h"
#include "ExitHandler.h"
#include "BLENotifierImpl.h"
#include "HCISocketProxyImpl.h"
#include "Main.h"
#include "BLEInitialiserImpl.h"
#include "ANDUC352BLEImpl.h"

#include "MQTT2.h"
#include "MQTT1.h"




/*****************************************************************************
 * Definitions for configuration : MedicalGW
 *****************************************************************************/

//Declaration of instance variables
//Instance scanner
// Variables for the properties of the instance
struct BLEScannerImpl_Instance scanner_var;
// Variables for fifo of the instance
byte scanner_fifo_array[65535];
//Instance notifierconnecter
// Variables for the properties of the instance
struct BLEConnecterImpl_Instance notifierconnecter_var;
// Variables for fifo of the instance
byte notifierconnecter_fifo_array[65535];
//Instance bloodpressure
// Variables for the properties of the instance
struct ANDUA651BLEImpl_Instance bloodpressure_var;
// Variables for fifo of the instance
byte bloodpressure_fifo_array[65535];
//Instance handler
// Variables for the properties of the instance
struct ExitHandler_Instance handler_var;
// Variables for fifo of the instance
byte handler_fifo_array[65535];
//Instance notifier
// Variables for the properties of the instance
struct BLENotifierImpl_Instance notifier_var;
// Variables for fifo of the instance
byte notifier_fifo_array[65535];
//Instance connecter
// Variables for the properties of the instance
struct BLEConnecterImpl_Instance connecter_var;
// Variables for fifo of the instance
byte connecter_fifo_array[65535];
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
//Instance weightscale
// Variables for the properties of the instance
struct ANDUC352BLEImpl_Instance weightscale_var;
// Variables for fifo of the instance
byte weightscale_fifo_array[65535];

//Instance MQTT2 for network plugin PosixMQTTPlugin
struct MQTT2_Instance MQTT2_instance;
//Instance MQTT1 for network plugin PosixMQTTPlugin
struct MQTT1_Instance MQTT1_instance;

void externalMessageEnqueue(uint8_t * msg, uint8_t msgSize, uint16_t listener_id) {
if ((msgSize >= 2) && (msg != NULL)) {
uint8_t msgSizeOK = 0;
switch(msg[0] * 256 + msg[1]) {
case 64:
if(msgSize == 2) {
dispatch_MqttRequestBloodPressureMeasurement(listener_id
);
}
break;
case 104:
if(msgSize == 2) {
dispatch_MqttRequestWeightScaleMeasurement(listener_id
);
}
break;
case 65:
if(msgSize == 2) {
dispatch_MqttConfirmBloodPressureMeasurement(listener_id
);
}
break;
case 105:
if(msgSize == 2) {
dispatch_MqttConfirmWeightScaleMeasurement(listener_id
);
}
break;
}
}
}


//Dispatcher for messages
void dispatch_LECreateConnection(uint16_t sender, uint16_t Interval, uint16_t Window, uint8_t FilterPolicy, uint8_t PeerAddressType, bdaddr_t PeerAddress, uint8_t OwnAddressType, uint16_t ConnIntervalMin, uint16_t ConnIntervalMax, uint16_t ConnLatency, uint16_t SupervisionTimeout, uint16_t CELengthMin, uint16_t CELengthMax) {
if (sender == scanner_var.id_HCICommands) {
enqueue_HCISocketProxyImpl_Commands_LECreateConnection(&hci_var, Interval, Window, FilterPolicy, PeerAddressType, PeerAddress, OwnAddressType, ConnIntervalMin, ConnIntervalMax, ConnLatency, SupervisionTimeout, CELengthMin, CELengthMax);

}
if (sender == notifierconnecter_var.id_HCICommands) {
enqueue_HCISocketProxyImpl_Commands_LECreateConnection(&hci_var, Interval, Window, FilterPolicy, PeerAddressType, PeerAddress, OwnAddressType, ConnIntervalMin, ConnIntervalMax, ConnLatency, SupervisionTimeout, CELengthMin, CELengthMax);

}
if (sender == connecter_var.id_HCICommands) {
enqueue_HCISocketProxyImpl_Commands_LECreateConnection(&hci_var, Interval, Window, FilterPolicy, PeerAddressType, PeerAddress, OwnAddressType, ConnIntervalMin, ConnIntervalMax, ConnLatency, SupervisionTimeout, CELengthMin, CELengthMax);

}
if (sender == initialiser_var.id_HCICommands) {
enqueue_HCISocketProxyImpl_Commands_LECreateConnection(&hci_var, Interval, Window, FilterPolicy, PeerAddressType, PeerAddress, OwnAddressType, ConnIntervalMin, ConnIntervalMax, ConnLatency, SupervisionTimeout, CELengthMin, CELengthMax);

}

}


//Dispatcher for messages
void dispatch_NotifierError(uint16_t sender) {
if (sender == bloodpressure_var.id_Notifications) {
enqueue_BLENotifierImpl_Notifications_NotifierError(&notifier_var);

}
if (sender == weightscale_var.id_Notifications) {
enqueue_BLENotifierImpl_Notifications_NotifierError(&notifier_var);

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
if (sender == bloodpressure_var.id_ATT) {
enqueue_HCISocketProxyImpl_ATT_ATTHandleValueNotification(&hci_var, ConnectionHandle, AttributeHandle, AttributeValue);

}

}


//Dispatcher for messages
void dispatch_NotifierFinished(uint16_t sender) {
if (sender == notifier_var.id_Notifications) {
enqueue_ANDUA651BLEImpl_Notifications_NotifierFinished(&bloodpressure_var);
enqueue_ANDUC352BLEImpl_Notifications_NotifierFinished(&weightscale_var);

}

}


//Dispatcher for messages
void dispatch_ConnectableAdvertisement(uint16_t sender, uint8_t AddressType, bdaddr_t Address) {
if (sender == scanner_var.id_Scanner) {
enqueue_ANDUC352BLEImpl_Scanner_ConnectableAdvertisement(&weightscale_var, AddressType, Address);
enqueue_ANDUA651BLEImpl_Scanner_ConnectableAdvertisement(&bloodpressure_var, AddressType, Address);

}

}


//Dispatcher for messages
void dispatch_ATTReadByTypeResponse(uint16_t sender, uint16_t ConnectionHandle, uint8_t Length, ble_gatt_data_t AttributeDataList) {
if (sender == notifier_var.id_ATT) {
enqueue_HCISocketProxyImpl_ATT_ATTReadByTypeResponse(&hci_var, ConnectionHandle, Length, AttributeDataList);

}
if (sender == hci_var.id_ATT) {

}
if (sender == weightscale_var.id_ATT) {
enqueue_HCISocketProxyImpl_ATT_ATTReadByTypeResponse(&hci_var, ConnectionHandle, Length, AttributeDataList);

}
if (sender == bloodpressure_var.id_ATT) {
enqueue_HCISocketProxyImpl_ATT_ATTReadByTypeResponse(&hci_var, ConnectionHandle, Length, AttributeDataList);

}

}


//Dispatcher for messages
void dispatch_NotifierStored(uint16_t sender) {
if (sender == bloodpressure_var.id_Notifications) {
enqueue_BLENotifierImpl_Notifications_NotifierStored(&notifier_var);

}
if (sender == weightscale_var.id_Notifications) {
enqueue_BLENotifierImpl_Notifications_NotifierStored(&notifier_var);

}

}


//Dispatcher for messages
void dispatch_FinishedConnection(uint16_t sender) {
if (sender == weightscale_var.id_ANDUC352BLE) {
enqueue_Main_ANDUC352BLE_FinishedConnection(&main_var);

}
if (sender == bloodpressure_var.id_ANDUA651BLE) {
enqueue_Main_ANDUA651BLE_FinishedConnection(&main_var);

}

}


//Dispatcher for messages
void dispatch_Started(uint16_t sender) {
if (sender == scanner_var.id_Scanner) {

}
if (sender == initialiser_var.id_Initialiser) {

}

}


//Dispatcher for messages
void dispatch_SetLEAdvertiseEnableCompleted(uint16_t sender, uint8_t NumberAllowedCommandPackets, uint8_t Status) {
if (sender == hci_var.id_Events) {

}

}


//Dispatcher for messages
void dispatch_SetEventMask(uint16_t sender, set_event_mask_cp Mask) {
if (sender == scanner_var.id_HCICommands) {
enqueue_HCISocketProxyImpl_Commands_SetEventMask(&hci_var, Mask);

}
if (sender == notifierconnecter_var.id_HCICommands) {
enqueue_HCISocketProxyImpl_Commands_SetEventMask(&hci_var, Mask);

}
if (sender == connecter_var.id_HCICommands) {
enqueue_HCISocketProxyImpl_Commands_SetEventMask(&hci_var, Mask);

}
if (sender == initialiser_var.id_HCICommands) {
enqueue_HCISocketProxyImpl_Commands_SetEventMask(&hci_var, Mask);

}

}


//Dispatcher for messages
void dispatch_SetLEAdvertisingData(uint16_t sender, uint8_t Length, ble_adv_data_t Data) {
if (sender == scanner_var.id_HCICommands) {
enqueue_HCISocketProxyImpl_Commands_SetLEAdvertisingData(&hci_var, Length, Data);

}
if (sender == notifierconnecter_var.id_HCICommands) {
enqueue_HCISocketProxyImpl_Commands_SetLEAdvertisingData(&hci_var, Length, Data);

}
if (sender == connecter_var.id_HCICommands) {
enqueue_HCISocketProxyImpl_Commands_SetLEAdvertisingData(&hci_var, Length, Data);

}
if (sender == initialiser_var.id_HCICommands) {
enqueue_HCISocketProxyImpl_Commands_SetLEAdvertisingData(&hci_var, Length, Data);

}

}


//Dispatcher for messages
void dispatch_MqttConfirmBloodPressureMeasurement(uint16_t sender) {
if (sender == MQTT1_instance.listener_id) {
enqueue_ANDUA651BLEImpl_Tellu_MqttConfirmBloodPressureMeasurement(&bloodpressure_var);

}

}


//Dispatcher for messages
void dispatch_Connect(uint16_t sender) {
if (sender == bloodpressure_var.id_Connecter) {
enqueue_BLEConnecterImpl_Connecter_Connect(&connecter_var);

}
if (sender == weightscale_var.id_Connecter) {
enqueue_BLEConnecterImpl_Connecter_Connect(&connecter_var);

}
if (sender == notifier_var.id_Connecter) {
enqueue_BLEConnecterImpl_Connecter_Connect(&notifierconnecter_var);

}

}


//Dispatcher for messages
void dispatch_LEEnhancedConnectionComplete(uint16_t sender, uint8_t Status, uint16_t ConnectionHandle, uint8_t Role, uint8_t PeerAddressType, bdaddr_t PeerAddress, bdaddr_t LocalResolvablePrivateAddress, bdaddr_t PeerResolvablePrivateAddress, uint16_t ConnInterval, uint16_t ConnLatency, uint16_t SupervisionTimeout, uint8_t MasterClockAccuracy) {
if (sender == hci_var.id_Events) {
enqueue_BLEConnecterImpl_HCIEvents_LEEnhancedConnectionComplete(&notifierconnecter_var, Status, ConnectionHandle, Role, PeerAddressType, PeerAddress, LocalResolvablePrivateAddress, PeerResolvablePrivateAddress, ConnInterval, ConnLatency, SupervisionTimeout, MasterClockAccuracy);
enqueue_BLEConnecterImpl_HCIEvents_LEEnhancedConnectionComplete(&connecter_var, Status, ConnectionHandle, Role, PeerAddressType, PeerAddress, LocalResolvablePrivateAddress, PeerResolvablePrivateAddress, ConnInterval, ConnLatency, SupervisionTimeout, MasterClockAccuracy);

}

}


//Dispatcher for messages
void dispatch_ATTWriteResponse(uint16_t sender, uint16_t ConnectionHandle) {
if (sender == notifier_var.id_ATT) {
enqueue_HCISocketProxyImpl_ATT_ATTWriteResponse(&hci_var, ConnectionHandle);

}
if (sender == hci_var.id_ATT) {
enqueue_BLENotifierImpl_ATT_ATTWriteResponse(&notifier_var, ConnectionHandle);
enqueue_ANDUC352BLEImpl_ATT_ATTWriteResponse(&weightscale_var, ConnectionHandle);

}
if (sender == weightscale_var.id_ATT) {
enqueue_HCISocketProxyImpl_ATT_ATTWriteResponse(&hci_var, ConnectionHandle);

}
if (sender == bloodpressure_var.id_ATT) {
enqueue_HCISocketProxyImpl_ATT_ATTWriteResponse(&hci_var, ConnectionHandle);

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
if (sender == bloodpressure_var.id_ATT) {
enqueue_HCISocketProxyImpl_ATT_ATTFindInformationResponse(&hci_var, ConnectionHandle, Format, InformationData);

}

}


//Dispatcher for messages
void dispatch_ATTFindInformationError(uint16_t sender, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error) {
if (sender == notifier_var.id_ATT) {
enqueue_HCISocketProxyImpl_ATT_ATTFindInformationError(&hci_var, ConnectionHandle, AttributeHandle, Error);

}
if (sender == hci_var.id_ATT) {

}
if (sender == weightscale_var.id_ATT) {
enqueue_HCISocketProxyImpl_ATT_ATTFindInformationError(&hci_var, ConnectionHandle, AttributeHandle, Error);

}
if (sender == bloodpressure_var.id_ATT) {
enqueue_HCISocketProxyImpl_ATT_ATTFindInformationError(&hci_var, ConnectionHandle, AttributeHandle, Error);

}

}


//Dispatcher for messages
void dispatch_MqttConfirmWeightScaleMeasurement(uint16_t sender) {
if (sender == MQTT2_instance.listener_id) {
enqueue_ANDUC352BLEImpl_Tellu_MqttConfirmWeightScaleMeasurement(&weightscale_var);

}

}


//Dispatcher for messages
void dispatch_Start(uint16_t sender) {
if (sender == weightscale_var.id_Scanner) {
enqueue_BLEScannerImpl_Scanner_Start(&scanner_var);

}
if (sender == main_var.id_Scanner) {
enqueue_BLEScannerImpl_Scanner_Start(&scanner_var);

}
if (sender == bloodpressure_var.id_Scanner) {
enqueue_BLEScannerImpl_Scanner_Start(&scanner_var);

}
if (sender == main_var.id_Initialiser) {
enqueue_BLEInitialiserImpl_Initialiser_Start(&initialiser_var);

}

}


//Dispatcher for messages
void dispatch_Stop(uint16_t sender) {
if (sender == bloodpressure_var.id_Connecter) {
enqueue_BLEConnecterImpl_Connecter_Stop(&connecter_var);

}
if (sender == weightscale_var.id_Scanner) {
enqueue_BLEScannerImpl_Scanner_Stop(&scanner_var);

}
if (sender == main_var.id_Scanner) {
enqueue_BLEScannerImpl_Scanner_Stop(&scanner_var);

}
if (sender == weightscale_var.id_Connecter) {
enqueue_BLEConnecterImpl_Connecter_Stop(&connecter_var);

}
if (sender == bloodpressure_var.id_Scanner) {
enqueue_BLEScannerImpl_Scanner_Stop(&scanner_var);

}
if (sender == main_var.id_Initialiser) {
enqueue_BLEInitialiserImpl_Initialiser_Stop(&initialiser_var);

}
if (sender == notifier_var.id_Connecter) {
enqueue_BLEConnecterImpl_Connecter_Stop(&notifierconnecter_var);

}

}


//Dispatcher for messages
void dispatch_Stopped(uint16_t sender) {
if (sender == scanner_var.id_Scanner) {
enqueue_Main_Scanner_Stopped(&main_var);

}
if (sender == initialiser_var.id_Initialiser) {
enqueue_Main_Initialiser_Stopped(&main_var);

}
if (sender == connecter_var.id_Connecter) {
enqueue_ANDUA651BLEImpl_Connecter_Stopped(&bloodpressure_var);
enqueue_ANDUC352BLEImpl_Connecter_Stopped(&weightscale_var);

}
if (sender == notifierconnecter_var.id_Connecter) {
enqueue_BLENotifierImpl_Connecter_Stopped(&notifier_var);

}

}


//Dispatcher for messages
void dispatch_SetLEScanParametersCompleted(uint16_t sender, uint8_t NumberAllowedCommandPackets, uint8_t Status) {
if (sender == hci_var.id_Events) {
enqueue_BLEScannerImpl_HCIEvents_SetLEScanParametersCompleted(&scanner_var, NumberAllowedCommandPackets, Status);

}

}


//Dispatcher for messages
void dispatch_SetLEAdvertisementParametersCompleted(uint16_t sender, uint8_t NumberAllowedCommandPackets, uint8_t Status) {
if (sender == hci_var.id_Events) {

}

}


//Dispatcher for messages
void dispatch_NotifierReady(uint16_t sender) {
if (sender == notifier_var.id_Notifications) {
enqueue_ANDUA651BLEImpl_Notifications_NotifierReady(&bloodpressure_var);
enqueue_ANDUC352BLEImpl_Notifications_NotifierReady(&weightscale_var);

}

}


//Dispatcher for messages
void dispatch_LECreateConnectionCancelCompleted(uint16_t sender, uint8_t NumberAllowedCommandPackets, uint8_t Status) {
if (sender == hci_var.id_Events) {
enqueue_BLEConnecterImpl_HCIEvents_LECreateConnectionCancelCompleted(&notifierconnecter_var, NumberAllowedCommandPackets, Status);
enqueue_BLEConnecterImpl_HCIEvents_LECreateConnectionCancelCompleted(&connecter_var, NumberAllowedCommandPackets, Status);

}

}


//Dispatcher for messages
void dispatch_Encrypt(uint16_t sender) {
if (sender == bloodpressure_var.id_Connecter) {
enqueue_BLEConnecterImpl_Connecter_Encrypt(&connecter_var);

}
if (sender == weightscale_var.id_Connecter) {
enqueue_BLEConnecterImpl_Connecter_Encrypt(&connecter_var);

}
if (sender == notifier_var.id_Connecter) {
enqueue_BLEConnecterImpl_Connecter_Encrypt(&notifierconnecter_var);

}

}


//Dispatcher for messages
void dispatch_SetEventMaskAll(uint16_t sender) {
if (sender == scanner_var.id_HCICommands) {
enqueue_HCISocketProxyImpl_Commands_SetEventMaskAll(&hci_var);

}
if (sender == notifierconnecter_var.id_HCICommands) {
enqueue_HCISocketProxyImpl_Commands_SetEventMaskAll(&hci_var);

}
if (sender == connecter_var.id_HCICommands) {
enqueue_HCISocketProxyImpl_Commands_SetEventMaskAll(&hci_var);

}
if (sender == initialiser_var.id_HCICommands) {
enqueue_HCISocketProxyImpl_Commands_SetEventMaskAll(&hci_var);

}

}


//Dispatcher for messages
void dispatch_LEEncrypt(uint16_t sender, ble_random_number_t Key, ble_random_number_t Plaintext) {
if (sender == scanner_var.id_HCICommands) {
enqueue_HCISocketProxyImpl_Commands_LEEncrypt(&hci_var, Key, Plaintext);

}
if (sender == notifierconnecter_var.id_HCICommands) {
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
void dispatch_Quit(uint16_t sender, int16_t code) {
if (sender == main_var.id_Signals) {
enqueue_ExitHandler_Signals_Quit(&handler_var, code);

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
if (sender == bloodpressure_var.id_ATT) {
enqueue_HCISocketProxyImpl_ATT_ATTReadByGroupTypeResponse(&hci_var, ConnectionHandle, Length, AttributeDataList);

}

}


//Dispatcher for messages
void dispatch_SetLEScanEnable(uint16_t sender, uint8_t Enable, uint8_t FilterDuplicates) {
if (sender == scanner_var.id_HCICommands) {
enqueue_HCISocketProxyImpl_Commands_SetLEScanEnable(&hci_var, Enable, FilterDuplicates);

}
if (sender == notifierconnecter_var.id_HCICommands) {
enqueue_HCISocketProxyImpl_Commands_SetLEScanEnable(&hci_var, Enable, FilterDuplicates);

}
if (sender == connecter_var.id_HCICommands) {
enqueue_HCISocketProxyImpl_Commands_SetLEScanEnable(&hci_var, Enable, FilterDuplicates);

}
if (sender == initialiser_var.id_HCICommands) {
enqueue_HCISocketProxyImpl_Commands_SetLEScanEnable(&hci_var, Enable, FilterDuplicates);

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
if (sender == bloodpressure_var.id_ATT) {
enqueue_HCISocketProxyImpl_ATT_ATTReadByTypeError(&hci_var, ConnectionHandle, AttributeHandle, Error);

}

}


//Dispatcher for messages
void dispatch_DeviceInitialised(uint16_t sender, bdaddr_t Address) {
if (sender == initialiser_var.id_Initialiser) {
enqueue_Main_Initialiser_DeviceInitialised(&main_var, Address);

}

}


//Dispatcher for messages
void dispatch_Close(uint16_t sender) {
if (sender == initialiser_var.id_Socket) {
enqueue_HCISocketProxyImpl_Socket_Close(&hci_var);

}
if (sender == connecter_var.id_Socket) {
enqueue_HCISocketProxyImpl_Socket_Close(&hci_var);

}
if (sender == notifierconnecter_var.id_Socket) {
enqueue_HCISocketProxyImpl_Socket_Close(&hci_var);

}
if (sender == scanner_var.id_Socket) {
enqueue_HCISocketProxyImpl_Socket_Close(&hci_var);

}

}


//Dispatcher for messages
void dispatch_ATTReadError(uint16_t sender, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error) {
if (sender == notifier_var.id_ATT) {
enqueue_HCISocketProxyImpl_ATT_ATTReadError(&hci_var, ConnectionHandle, AttributeHandle, Error);

}
if (sender == hci_var.id_ATT) {
enqueue_ANDUC352BLEImpl_ATT_ATTReadError(&weightscale_var, ConnectionHandle, AttributeHandle, Error);
enqueue_ANDUA651BLEImpl_ATT_ATTReadError(&bloodpressure_var, ConnectionHandle, AttributeHandle, Error);

}
if (sender == weightscale_var.id_ATT) {
enqueue_HCISocketProxyImpl_ATT_ATTReadError(&hci_var, ConnectionHandle, AttributeHandle, Error);

}
if (sender == bloodpressure_var.id_ATT) {
enqueue_HCISocketProxyImpl_ATT_ATTReadError(&hci_var, ConnectionHandle, AttributeHandle, Error);

}

}


//Dispatcher for messages
void dispatch_SetLEScanResponseDataCompleted(uint16_t sender, uint8_t NumberAllowedCommandPackets, uint8_t Status) {
if (sender == hci_var.id_Events) {

}

}


//Dispatcher for messages
void dispatch_LERand(uint16_t sender) {
if (sender == scanner_var.id_HCICommands) {
enqueue_HCISocketProxyImpl_Commands_LERand(&hci_var);

}
if (sender == notifierconnecter_var.id_HCICommands) {
enqueue_HCISocketProxyImpl_Commands_LERand(&hci_var);

}
if (sender == connecter_var.id_HCICommands) {
enqueue_HCISocketProxyImpl_Commands_LERand(&hci_var);

}
if (sender == initialiser_var.id_HCICommands) {
enqueue_HCISocketProxyImpl_Commands_LERand(&hci_var);

}

}


//Dispatcher for messages
void dispatch_WantsToConnect(uint16_t sender) {
if (sender == weightscale_var.id_ANDUC352BLE) {
enqueue_Main_ANDUC352BLE_WantsToConnect(&main_var);

}
if (sender == bloodpressure_var.id_ANDUA651BLE) {
enqueue_Main_ANDUA651BLE_WantsToConnect(&main_var);

}

}


//Dispatcher for messages
void dispatch_LEAdvertisementReport(uint16_t sender, uint8_t Type, uint8_t AddressType, bdaddr_t Address, uint8_t Length, ble_adv_data_t Data) {
if (sender == hci_var.id_Events) {
enqueue_BLEScannerImpl_HCIEvents_LEAdvertisementReport(&scanner_var, Type, AddressType, Address, Length, Data);

}

}


//Dispatcher for messages
void dispatch_EncryptionChanged(uint16_t sender, uint8_t Status, uint16_t ConnectionHandle, uint8_t Enabled) {
if (sender == hci_var.id_Events) {
enqueue_BLEConnecterImpl_HCIEvents_EncryptionChanged(&notifierconnecter_var, Status, ConnectionHandle, Enabled);
enqueue_BLEConnecterImpl_HCIEvents_EncryptionChanged(&connecter_var, Status, ConnectionHandle, Enabled);

}

}


//Dispatcher for messages
void dispatch_SetLEAdvertisementParameters(uint16_t sender, uint16_t MinInterval, uint16_t MaxInterval, uint8_t Type, uint8_t OwnAddressType, uint8_t PeerAddressType, bdaddr_t PeerAddress, uint8_t Channel, uint8_t FilterPolicy) {
if (sender == scanner_var.id_HCICommands) {
enqueue_HCISocketProxyImpl_Commands_SetLEAdvertisementParameters(&hci_var, MinInterval, MaxInterval, Type, OwnAddressType, PeerAddressType, PeerAddress, Channel, FilterPolicy);

}
if (sender == notifierconnecter_var.id_HCICommands) {
enqueue_HCISocketProxyImpl_Commands_SetLEAdvertisementParameters(&hci_var, MinInterval, MaxInterval, Type, OwnAddressType, PeerAddressType, PeerAddress, Channel, FilterPolicy);

}
if (sender == connecter_var.id_HCICommands) {
enqueue_HCISocketProxyImpl_Commands_SetLEAdvertisementParameters(&hci_var, MinInterval, MaxInterval, Type, OwnAddressType, PeerAddressType, PeerAddress, Channel, FilterPolicy);

}
if (sender == initialiser_var.id_HCICommands) {
enqueue_HCISocketProxyImpl_Commands_SetLEAdvertisementParameters(&hci_var, MinInterval, MaxInterval, Type, OwnAddressType, PeerAddressType, PeerAddress, Channel, FilterPolicy);

}

}


//Dispatcher for messages
void dispatch_Interrupt(uint16_t sender) {
if (sender == handler_var.id_Signals) {
enqueue_Main_Signals_Interrupt(&main_var);

}

}


//Dispatcher for messages
void dispatch_LEConnectionComplete(uint16_t sender, uint8_t Status, uint16_t ConnectionHandle, uint8_t Role, uint8_t PeerAddressType, bdaddr_t PeerAddress, uint16_t ConnInterval, uint16_t ConnLatency, uint16_t SupervisionTimeout, uint8_t MasterClockAccuracy) {
if (sender == hci_var.id_Events) {
enqueue_BLEConnecterImpl_HCIEvents_LEConnectionComplete(&notifierconnecter_var, Status, ConnectionHandle, Role, PeerAddressType, PeerAddress, ConnInterval, ConnLatency, SupervisionTimeout, MasterClockAccuracy);
enqueue_BLEConnecterImpl_HCIEvents_LEConnectionComplete(&connecter_var, Status, ConnectionHandle, Role, PeerAddressType, PeerAddress, ConnInterval, ConnLatency, SupervisionTimeout, MasterClockAccuracy);

}

}


//Dispatcher for messages
void dispatch_Failure(uint16_t sender) {
if (sender == scanner_var.id_Scanner) {
enqueue_Main_Scanner_Failure(&main_var);

}
if (sender == initialiser_var.id_Initialiser) {
enqueue_Main_Initialiser_Failure(&main_var);

}
if (sender == connecter_var.id_Connecter) {
enqueue_ANDUA651BLEImpl_Connecter_Failure(&bloodpressure_var);
enqueue_ANDUC352BLEImpl_Connecter_Failure(&weightscale_var);

}
if (sender == notifierconnecter_var.id_Connecter) {
enqueue_BLENotifierImpl_Connecter_Failure(&notifier_var);

}

}


//Dispatcher for messages
void dispatch_Reset(uint16_t sender) {
if (sender == scanner_var.id_HCICommands) {
enqueue_HCISocketProxyImpl_Commands_Reset(&hci_var);

}
if (sender == notifierconnecter_var.id_HCICommands) {
enqueue_HCISocketProxyImpl_Commands_Reset(&hci_var);

}
if (sender == connecter_var.id_HCICommands) {
enqueue_HCISocketProxyImpl_Commands_Reset(&hci_var);

}
if (sender == initialiser_var.id_HCICommands) {
enqueue_HCISocketProxyImpl_Commands_Reset(&hci_var);

}

}


//Dispatcher for messages
void dispatch_SetLocalNameCompleted(uint16_t sender, uint8_t NumberAllowedCommandPackets, uint8_t Status) {
if (sender == hci_var.id_Events) {

}

}


//Dispatcher for messages
void dispatch_NotifierRequest(uint16_t sender) {
if (sender == bloodpressure_var.id_Notifications) {
enqueue_BLENotifierImpl_Notifications_NotifierRequest(&notifier_var);

}
if (sender == weightscale_var.id_Notifications) {
enqueue_BLENotifierImpl_Notifications_NotifierRequest(&notifier_var);

}

}


//Dispatcher for messages
void dispatch_Closed(uint16_t sender) {
if (sender == hci_var.id_Socket) {
enqueue_BLEInitialiserImpl_Socket_Closed(&initialiser_var);

}

}


//Dispatcher for messages
void dispatch_ATTHandleValueIndication(uint16_t sender, uint16_t ConnectionHandle, uint16_t AttributeHandle, ble_gatt_data_t AttributeValue) {
if (sender == notifier_var.id_ATT) {
enqueue_HCISocketProxyImpl_ATT_ATTHandleValueIndication(&hci_var, ConnectionHandle, AttributeHandle, AttributeValue);

}
if (sender == hci_var.id_ATT) {
enqueue_ANDUC352BLEImpl_ATT_ATTHandleValueIndication(&weightscale_var, ConnectionHandle, AttributeHandle, AttributeValue);
enqueue_ANDUA651BLEImpl_ATT_ATTHandleValueIndication(&bloodpressure_var, ConnectionHandle, AttributeHandle, AttributeValue);

}
if (sender == weightscale_var.id_ATT) {
enqueue_HCISocketProxyImpl_ATT_ATTHandleValueIndication(&hci_var, ConnectionHandle, AttributeHandle, AttributeValue);

}
if (sender == bloodpressure_var.id_ATT) {
enqueue_HCISocketProxyImpl_ATT_ATTHandleValueIndication(&hci_var, ConnectionHandle, AttributeHandle, AttributeValue);

}

}


//Dispatcher for messages
void dispatch_MqttRequestBloodPressureMeasurement(uint16_t sender) {
if (sender == MQTT1_instance.listener_id) {
enqueue_ANDUA651BLEImpl_Tellu_MqttRequestBloodPressureMeasurement(&bloodpressure_var);

}

}


//Dispatcher for messages
void dispatch_SetLEEventMask(uint16_t sender, set_event_mask_cp Mask) {
if (sender == scanner_var.id_HCICommands) {
enqueue_HCISocketProxyImpl_Commands_SetLEEventMask(&hci_var, Mask);

}
if (sender == notifierconnecter_var.id_HCICommands) {
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
void dispatch_NotifierConnect(uint16_t sender, uint8_t AddressType, bdaddr_t Address) {
if (sender == bloodpressure_var.id_Notifications) {
enqueue_BLENotifierImpl_Notifications_NotifierConnect(&notifier_var, AddressType, Address);

}
if (sender == weightscale_var.id_Notifications) {
enqueue_BLENotifierImpl_Notifications_NotifierConnect(&notifier_var, AddressType, Address);

}

}


//Dispatcher for messages
void dispatch_SetLEAdvertiseEnable(uint16_t sender, uint8_t Enable) {
if (sender == scanner_var.id_HCICommands) {
enqueue_HCISocketProxyImpl_Commands_SetLEAdvertiseEnable(&hci_var, Enable);

}
if (sender == notifierconnecter_var.id_HCICommands) {
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
void dispatch_ATTReadResponse(uint16_t sender, uint16_t ConnectionHandle, ble_gatt_data_t AttributeValue) {
if (sender == notifier_var.id_ATT) {
enqueue_HCISocketProxyImpl_ATT_ATTReadResponse(&hci_var, ConnectionHandle, AttributeValue);

}
if (sender == hci_var.id_ATT) {
enqueue_ANDUC352BLEImpl_ATT_ATTReadResponse(&weightscale_var, ConnectionHandle, AttributeValue);
enqueue_ANDUA651BLEImpl_ATT_ATTReadResponse(&bloodpressure_var, ConnectionHandle, AttributeValue);

}
if (sender == weightscale_var.id_ATT) {
enqueue_HCISocketProxyImpl_ATT_ATTReadResponse(&hci_var, ConnectionHandle, AttributeValue);

}
if (sender == bloodpressure_var.id_ATT) {
enqueue_HCISocketProxyImpl_ATT_ATTReadResponse(&hci_var, ConnectionHandle, AttributeValue);

}

}


//Dispatcher for messages
void dispatch_LEStartEncryption(uint16_t sender, uint16_t ConnectionHandle, ble_random_part_t Random, uint16_t EDIV, ble_random_number_t LTK) {
if (sender == scanner_var.id_HCICommands) {
enqueue_HCISocketProxyImpl_Commands_LEStartEncryption(&hci_var, ConnectionHandle, Random, EDIV, LTK);

}
if (sender == notifierconnecter_var.id_HCICommands) {
enqueue_HCISocketProxyImpl_Commands_LEStartEncryption(&hci_var, ConnectionHandle, Random, EDIV, LTK);

}
if (sender == connecter_var.id_HCICommands) {
enqueue_HCISocketProxyImpl_Commands_LEStartEncryption(&hci_var, ConnectionHandle, Random, EDIV, LTK);

}
if (sender == initialiser_var.id_HCICommands) {
enqueue_HCISocketProxyImpl_Commands_LEStartEncryption(&hci_var, ConnectionHandle, Random, EDIV, LTK);

}

}


//Dispatcher for messages
void dispatch_ConnectToU(uint16_t sender, uint8_t AddressType, bdaddr_t Address) {
if (sender == bloodpressure_var.id_Connecter) {
enqueue_BLEConnecterImpl_Connecter_ConnectToU(&connecter_var, AddressType, Address);

}
if (sender == weightscale_var.id_Connecter) {
enqueue_BLEConnecterImpl_Connecter_ConnectToU(&connecter_var, AddressType, Address);

}
if (sender == notifier_var.id_Connecter) {
enqueue_BLEConnecterImpl_Connecter_ConnectToU(&notifierconnecter_var, AddressType, Address);

}

}


//Dispatcher for messages
void dispatch_ResetCompleted(uint16_t sender, uint8_t NumberAllowedCommandPackets, uint8_t Status) {
if (sender == hci_var.id_Events) {
enqueue_BLEInitialiserImpl_HCIEvents_ResetCompleted(&initialiser_var, NumberAllowedCommandPackets, Status);

}

}


//Dispatcher for messages
void dispatch_LECreateConnectionStatus(uint16_t sender, uint8_t NumberAllowedCommandPackets, uint8_t Status) {
if (sender == hci_var.id_Events) {
enqueue_BLEConnecterImpl_HCIEvents_LECreateConnectionStatus(&notifierconnecter_var, NumberAllowedCommandPackets, Status);
enqueue_BLEConnecterImpl_HCIEvents_LECreateConnectionStatus(&connecter_var, NumberAllowedCommandPackets, Status);

}

}


//Dispatcher for messages
void dispatch_Connected(uint16_t sender, uint16_t Handle, uint8_t AddressType, bdaddr_t Address) {
if (sender == connecter_var.id_Connecter) {
enqueue_ANDUA651BLEImpl_Connecter_Connected(&bloodpressure_var, Handle, AddressType, Address);
enqueue_ANDUC352BLEImpl_Connecter_Connected(&weightscale_var, Handle, AddressType, Address);

}
if (sender == notifierconnecter_var.id_Connecter) {
enqueue_BLENotifierImpl_Connecter_Connected(&notifier_var, Handle, AddressType, Address);

}

}


//Dispatcher for messages
void dispatch_ATTReadByGroupTypeRequest(uint16_t sender, uint16_t ConnectionHandle, uint16_t StartingHandle, uint16_t EndingHandle, ble_uuid_t AttributeGroupType) {
if (sender == notifier_var.id_ATT) {
enqueue_HCISocketProxyImpl_ATT_ATTReadByGroupTypeRequest(&hci_var, ConnectionHandle, StartingHandle, EndingHandle, AttributeGroupType);

}
if (sender == hci_var.id_ATT) {

}
if (sender == weightscale_var.id_ATT) {
enqueue_HCISocketProxyImpl_ATT_ATTReadByGroupTypeRequest(&hci_var, ConnectionHandle, StartingHandle, EndingHandle, AttributeGroupType);

}
if (sender == bloodpressure_var.id_ATT) {
enqueue_HCISocketProxyImpl_ATT_ATTReadByGroupTypeRequest(&hci_var, ConnectionHandle, StartingHandle, EndingHandle, AttributeGroupType);

}

}


//Dispatcher for messages
void dispatch_SetLEAdvertisingDataCompleted(uint16_t sender, uint8_t NumberAllowedCommandPackets, uint8_t Status) {
if (sender == hci_var.id_Events) {

}

}


//Dispatcher for messages
void dispatch_MqttRequestWeightScaleMeasurement(uint16_t sender) {
if (sender == MQTT2_instance.listener_id) {
enqueue_ANDUC352BLEImpl_Tellu_MqttRequestWeightScaleMeasurement(&weightscale_var);

}

}


//Dispatcher for messages
void dispatch_ATTFindInformationRequest(uint16_t sender, uint16_t ConnectionHandle, uint16_t StartingHandle, uint16_t EndingHandle) {
if (sender == notifier_var.id_ATT) {
enqueue_HCISocketProxyImpl_ATT_ATTFindInformationRequest(&hci_var, ConnectionHandle, StartingHandle, EndingHandle);

}
if (sender == hci_var.id_ATT) {

}
if (sender == weightscale_var.id_ATT) {
enqueue_HCISocketProxyImpl_ATT_ATTFindInformationRequest(&hci_var, ConnectionHandle, StartingHandle, EndingHandle);

}
if (sender == bloodpressure_var.id_ATT) {
enqueue_HCISocketProxyImpl_ATT_ATTFindInformationRequest(&hci_var, ConnectionHandle, StartingHandle, EndingHandle);

}

}


//Dispatcher for messages
void dispatch_DisconnectStatus(uint16_t sender, uint8_t NumberAllowedCommandPackets, uint8_t Status) {
if (sender == hci_var.id_Events) {
enqueue_BLEConnecterImpl_HCIEvents_DisconnectStatus(&notifierconnecter_var, NumberAllowedCommandPackets, Status);
enqueue_BLEConnecterImpl_HCIEvents_DisconnectStatus(&connecter_var, NumberAllowedCommandPackets, Status);

}

}


//Dispatcher for messages
void dispatch_ATTWriteRequest(uint16_t sender, uint16_t ConnectionHandle, uint16_t AttributeHandle, ble_gatt_data_t AttributeValue) {
if (sender == notifier_var.id_ATT) {
enqueue_HCISocketProxyImpl_ATT_ATTWriteRequest(&hci_var, ConnectionHandle, AttributeHandle, AttributeValue);

}
if (sender == hci_var.id_ATT) {

}
if (sender == weightscale_var.id_ATT) {
enqueue_HCISocketProxyImpl_ATT_ATTWriteRequest(&hci_var, ConnectionHandle, AttributeHandle, AttributeValue);

}
if (sender == bloodpressure_var.id_ATT) {
enqueue_HCISocketProxyImpl_ATT_ATTWriteRequest(&hci_var, ConnectionHandle, AttributeHandle, AttributeValue);

}

}


//Dispatcher for messages
void dispatch_ConnectTo(uint16_t sender, uint8_t AddressType, bdaddr_t Address, ble_random_number_t LongTermKey, uint16_t EncryptedDiversifier, ble_random_part_t RandomNumber) {
if (sender == bloodpressure_var.id_Connecter) {
enqueue_BLEConnecterImpl_Connecter_ConnectTo(&connecter_var, AddressType, Address, LongTermKey, EncryptedDiversifier, RandomNumber);

}
if (sender == weightscale_var.id_Connecter) {
enqueue_BLEConnecterImpl_Connecter_ConnectTo(&connecter_var, AddressType, Address, LongTermKey, EncryptedDiversifier, RandomNumber);

}
if (sender == notifier_var.id_Connecter) {
enqueue_BLEConnecterImpl_Connecter_ConnectTo(&notifierconnecter_var, AddressType, Address, LongTermKey, EncryptedDiversifier, RandomNumber);

}

}


//Dispatcher for messages
void dispatch_ATTReadByTypeRequest(uint16_t sender, uint16_t ConnectionHandle, uint16_t StartingHandle, uint16_t EndingHandle, ble_uuid_t AttributeType) {
if (sender == notifier_var.id_ATT) {
enqueue_HCISocketProxyImpl_ATT_ATTReadByTypeRequest(&hci_var, ConnectionHandle, StartingHandle, EndingHandle, AttributeType);

}
if (sender == hci_var.id_ATT) {

}
if (sender == weightscale_var.id_ATT) {
enqueue_HCISocketProxyImpl_ATT_ATTReadByTypeRequest(&hci_var, ConnectionHandle, StartingHandle, EndingHandle, AttributeType);

}
if (sender == bloodpressure_var.id_ATT) {
enqueue_HCISocketProxyImpl_ATT_ATTReadByTypeRequest(&hci_var, ConnectionHandle, StartingHandle, EndingHandle, AttributeType);

}

}


//Dispatcher for messages
void dispatch_ATTHandleValueConfirmation(uint16_t sender, uint16_t ConnectionHandle) {
if (sender == notifier_var.id_ATT) {
enqueue_HCISocketProxyImpl_ATT_ATTHandleValueConfirmation(&hci_var, ConnectionHandle);

}
if (sender == hci_var.id_ATT) {

}
if (sender == weightscale_var.id_ATT) {
enqueue_HCISocketProxyImpl_ATT_ATTHandleValueConfirmation(&hci_var, ConnectionHandle);

}
if (sender == bloodpressure_var.id_ATT) {
enqueue_HCISocketProxyImpl_ATT_ATTHandleValueConfirmation(&hci_var, ConnectionHandle);

}

}


//Dispatcher for messages
void dispatch_Encrypted(uint16_t sender) {
if (sender == connecter_var.id_Connecter) {
enqueue_ANDUA651BLEImpl_Connecter_Encrypted(&bloodpressure_var);
enqueue_ANDUC352BLEImpl_Connecter_Encrypted(&weightscale_var);

}
if (sender == notifierconnecter_var.id_Connecter) {

}

}


//Dispatcher for messages
void dispatch_AllowedToConnect(uint16_t sender) {
if (sender == main_var.id_ANDUA651BLE) {
enqueue_ANDUA651BLEImpl_ANDUA651BLE_AllowedToConnect(&bloodpressure_var);

}
if (sender == main_var.id_ANDUC352BLE) {
enqueue_ANDUC352BLEImpl_ANDUC352BLE_AllowedToConnect(&weightscale_var);

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
if (sender == notifierconnecter_var.id_Socket) {
enqueue_HCISocketProxyImpl_Socket_Open(&hci_var);

}
if (sender == scanner_var.id_Socket) {
enqueue_HCISocketProxyImpl_Socket_Open(&hci_var);

}

}


//Dispatcher for messages
void dispatch_SetLEEventMaskCompleted(uint16_t sender, uint8_t NumberAllowedCommandPackets, uint8_t Status) {
if (sender == hci_var.id_Events) {
enqueue_BLEInitialiserImpl_HCIEvents_SetLEEventMaskCompleted(&initialiser_var, NumberAllowedCommandPackets, Status);

}

}


//Dispatcher for messages
void dispatch_ATTWriteError(uint16_t sender, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error) {
if (sender == notifier_var.id_ATT) {
enqueue_HCISocketProxyImpl_ATT_ATTWriteError(&hci_var, ConnectionHandle, AttributeHandle, Error);

}
if (sender == hci_var.id_ATT) {
enqueue_BLENotifierImpl_ATT_ATTWriteError(&notifier_var, ConnectionHandle, AttributeHandle, Error);
enqueue_ANDUC352BLEImpl_ATT_ATTWriteError(&weightscale_var, ConnectionHandle, AttributeHandle, Error);
enqueue_ANDUA651BLEImpl_ATT_ATTWriteError(&bloodpressure_var, ConnectionHandle, AttributeHandle, Error);

}
if (sender == weightscale_var.id_ATT) {
enqueue_HCISocketProxyImpl_ATT_ATTWriteError(&hci_var, ConnectionHandle, AttributeHandle, Error);

}
if (sender == bloodpressure_var.id_ATT) {
enqueue_HCISocketProxyImpl_ATT_ATTWriteError(&hci_var, ConnectionHandle, AttributeHandle, Error);

}

}


//Dispatcher for messages
void dispatch_SetLEEventMaskAll(uint16_t sender) {
if (sender == scanner_var.id_HCICommands) {
enqueue_HCISocketProxyImpl_Commands_SetLEEventMaskAll(&hci_var);

}
if (sender == notifierconnecter_var.id_HCICommands) {
enqueue_HCISocketProxyImpl_Commands_SetLEEventMaskAll(&hci_var);

}
if (sender == connecter_var.id_HCICommands) {
enqueue_HCISocketProxyImpl_Commands_SetLEEventMaskAll(&hci_var);

}
if (sender == initialiser_var.id_HCICommands) {
enqueue_HCISocketProxyImpl_Commands_SetLEEventMaskAll(&hci_var);

}

}


//Dispatcher for messages
void dispatch_ATTReadRequest(uint16_t sender, uint16_t ConnectionHandle, uint16_t AttributeHandle) {
if (sender == notifier_var.id_ATT) {
enqueue_HCISocketProxyImpl_ATT_ATTReadRequest(&hci_var, ConnectionHandle, AttributeHandle);

}
if (sender == hci_var.id_ATT) {

}
if (sender == weightscale_var.id_ATT) {
enqueue_HCISocketProxyImpl_ATT_ATTReadRequest(&hci_var, ConnectionHandle, AttributeHandle);

}
if (sender == bloodpressure_var.id_ATT) {
enqueue_HCISocketProxyImpl_ATT_ATTReadRequest(&hci_var, ConnectionHandle, AttributeHandle);

}

}


//Dispatcher for messages
void dispatch_Disconnect(uint16_t sender, uint16_t ConnectionHandle, uint8_t Reason) {
if (sender == scanner_var.id_HCICommands) {
enqueue_HCISocketProxyImpl_Commands_Disconnect(&hci_var, ConnectionHandle, Reason);

}
if (sender == notifierconnecter_var.id_HCICommands) {
enqueue_HCISocketProxyImpl_Commands_Disconnect(&hci_var, ConnectionHandle, Reason);

}
if (sender == connecter_var.id_HCICommands) {
enqueue_HCISocketProxyImpl_Commands_Disconnect(&hci_var, ConnectionHandle, Reason);

}
if (sender == initialiser_var.id_HCICommands) {
enqueue_HCISocketProxyImpl_Commands_Disconnect(&hci_var, ConnectionHandle, Reason);

}

}


//Dispatcher for messages
void dispatch_ATTWriteCommand(uint16_t sender, uint16_t ConnectionHandle, uint16_t AttributeHandle, ble_gatt_data_t AttributeValue) {
if (sender == notifier_var.id_ATT) {
enqueue_HCISocketProxyImpl_ATT_ATTWriteCommand(&hci_var, ConnectionHandle, AttributeHandle, AttributeValue);

}
if (sender == hci_var.id_ATT) {

}
if (sender == weightscale_var.id_ATT) {
enqueue_HCISocketProxyImpl_ATT_ATTWriteCommand(&hci_var, ConnectionHandle, AttributeHandle, AttributeValue);

}
if (sender == bloodpressure_var.id_ATT) {
enqueue_HCISocketProxyImpl_ATT_ATTWriteCommand(&hci_var, ConnectionHandle, AttributeHandle, AttributeValue);

}

}


//Dispatcher for messages
void dispatch_SetLEScanResponseData(uint16_t sender, uint8_t Length, ble_adv_data_t Data) {
if (sender == scanner_var.id_HCICommands) {
enqueue_HCISocketProxyImpl_Commands_SetLEScanResponseData(&hci_var, Length, Data);

}
if (sender == notifierconnecter_var.id_HCICommands) {
enqueue_HCISocketProxyImpl_Commands_SetLEScanResponseData(&hci_var, Length, Data);

}
if (sender == connecter_var.id_HCICommands) {
enqueue_HCISocketProxyImpl_Commands_SetLEScanResponseData(&hci_var, Length, Data);

}
if (sender == initialiser_var.id_HCICommands) {
enqueue_HCISocketProxyImpl_Commands_SetLEScanResponseData(&hci_var, Length, Data);

}

}


//Dispatcher for messages
void dispatch_LERandCompleted(uint16_t sender, uint8_t NumberAllowedCommandPackets, uint8_t Status, ble_random_part_t Random) {
if (sender == hci_var.id_Events) {

}

}


//Dispatcher for messages
void dispatch_LECreateConnectionCancel(uint16_t sender) {
if (sender == scanner_var.id_HCICommands) {
enqueue_HCISocketProxyImpl_Commands_LECreateConnectionCancel(&hci_var);

}
if (sender == notifierconnecter_var.id_HCICommands) {
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
void dispatch_SetLocalName(uint16_t sender, change_local_name_cp Name) {
if (sender == scanner_var.id_HCICommands) {

}
if (sender == notifierconnecter_var.id_HCICommands) {

}
if (sender == connecter_var.id_HCICommands) {

}
if (sender == initialiser_var.id_HCICommands) {

}

}


//Dispatcher for messages
void dispatch_ATTReadByGroupTypeError(uint16_t sender, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error) {
if (sender == notifier_var.id_ATT) {
enqueue_HCISocketProxyImpl_ATT_ATTReadByGroupTypeError(&hci_var, ConnectionHandle, AttributeHandle, Error);

}
if (sender == hci_var.id_ATT) {

}
if (sender == weightscale_var.id_ATT) {
enqueue_HCISocketProxyImpl_ATT_ATTReadByGroupTypeError(&hci_var, ConnectionHandle, AttributeHandle, Error);

}
if (sender == bloodpressure_var.id_ATT) {
enqueue_HCISocketProxyImpl_ATT_ATTReadByGroupTypeError(&hci_var, ConnectionHandle, AttributeHandle, Error);

}

}


//Dispatcher for messages
void dispatch_Opened(uint16_t sender, bdaddr_t Address) {
if (sender == hci_var.id_Socket) {
enqueue_BLEInitialiserImpl_Socket_Opened(&initialiser_var, Address);

}

}


//Dispatcher for messages
void dispatch_SetEventMaskCompleted(uint16_t sender, uint8_t NumberAllowedCommandPackets, uint8_t Status) {
if (sender == hci_var.id_Events) {
enqueue_BLEInitialiserImpl_HCIEvents_SetEventMaskCompleted(&initialiser_var, NumberAllowedCommandPackets, Status);

}

}


//Dispatcher for messages
void dispatch_LEEncryptCompleted(uint16_t sender, uint8_t NumberAllowedCommandPackets, uint8_t Status, ble_random_number_t Encrypted) {
if (sender == hci_var.id_Events) {

}

}


//Dispatcher for messages
void dispatch_SetLEScanParameters(uint16_t sender, uint8_t Type, uint16_t Interval, uint16_t Window, uint8_t OwnAddressType, uint8_t FilterPolicy) {
if (sender == scanner_var.id_HCICommands) {
enqueue_HCISocketProxyImpl_Commands_SetLEScanParameters(&hci_var, Type, Interval, Window, OwnAddressType, FilterPolicy);

}
if (sender == notifierconnecter_var.id_HCICommands) {
enqueue_HCISocketProxyImpl_Commands_SetLEScanParameters(&hci_var, Type, Interval, Window, OwnAddressType, FilterPolicy);

}
if (sender == connecter_var.id_HCICommands) {
enqueue_HCISocketProxyImpl_Commands_SetLEScanParameters(&hci_var, Type, Interval, Window, OwnAddressType, FilterPolicy);

}
if (sender == initialiser_var.id_HCICommands) {
enqueue_HCISocketProxyImpl_Commands_SetLEScanParameters(&hci_var, Type, Interval, Window, OwnAddressType, FilterPolicy);

}

}


//Dispatcher for messages
void dispatch_SetLEScanEnableCompleted(uint16_t sender, uint8_t NumberAllowedCommandPackets, uint8_t Status) {
if (sender == hci_var.id_Events) {
enqueue_BLEScannerImpl_HCIEvents_SetLEScanEnableCompleted(&scanner_var, NumberAllowedCommandPackets, Status);

}

}


//Dispatcher for messages
void dispatch_NotifierReceived(uint16_t sender) {
if (sender == bloodpressure_var.id_Notifications) {
enqueue_BLENotifierImpl_Notifications_NotifierReceived(&notifier_var);

}
if (sender == weightscale_var.id_Notifications) {
enqueue_BLENotifierImpl_Notifications_NotifierReceived(&notifier_var);

}

}


//Dispatcher for messages
void dispatch_DisconnectionCompleted(uint16_t sender, uint8_t Status, uint16_t ConnectionHandle, uint8_t Reason) {
if (sender == hci_var.id_Events) {
enqueue_BLEConnecterImpl_HCIEvents_DisconnectionCompleted(&notifierconnecter_var, Status, ConnectionHandle, Reason);
enqueue_BLEConnecterImpl_HCIEvents_DisconnectionCompleted(&connecter_var, Status, ConnectionHandle, Reason);

}

}


//Dispatcher for messages
void dispatch_LEStartEncryptionStatus(uint16_t sender, uint8_t NumberAllowedCommandPackets, uint8_t Status) {
if (sender == hci_var.id_Events) {
enqueue_BLEConnecterImpl_HCIEvents_LEStartEncryptionStatus(&notifierconnecter_var, NumberAllowedCommandPackets, Status);
enqueue_BLEConnecterImpl_HCIEvents_LEStartEncryptionStatus(&connecter_var, NumberAllowedCommandPackets, Status);

}

}


void BLEScannerImpl_send_Scanner_Started_sender(struct BLEScannerImpl_Instance *_instance) {
dispatch_Started(_instance->id_Scanner);
}
void BLEScannerImpl_send_Scanner_Stopped_sender(struct BLEScannerImpl_Instance *_instance) {
dispatch_Stopped(_instance->id_Scanner);
}
void BLEScannerImpl_send_Scanner_Failure_sender(struct BLEScannerImpl_Instance *_instance) {
dispatch_Failure(_instance->id_Scanner);
}
void BLEScannerImpl_send_Scanner_ConnectableAdvertisement_sender(struct BLEScannerImpl_Instance *_instance, uint8_t AddressType, bdaddr_t Address) {
dispatch_ConnectableAdvertisement(_instance->id_Scanner, AddressType, Address);
}
void BLEScannerImpl_send_Socket_Open_sender(struct BLEScannerImpl_Instance *_instance) {
dispatch_Open(_instance->id_Socket);
}
void BLEScannerImpl_send_Socket_Close_sender(struct BLEScannerImpl_Instance *_instance) {
dispatch_Close(_instance->id_Socket);
}
void BLEScannerImpl_send_HCICommands_Reset_sender(struct BLEScannerImpl_Instance *_instance) {
dispatch_Reset(_instance->id_HCICommands);
}
void BLEScannerImpl_send_HCICommands_SetEventMask_sender(struct BLEScannerImpl_Instance *_instance, set_event_mask_cp Mask) {
dispatch_SetEventMask(_instance->id_HCICommands, Mask);
}
void BLEScannerImpl_send_HCICommands_SetEventMaskAll_sender(struct BLEScannerImpl_Instance *_instance) {
dispatch_SetEventMaskAll(_instance->id_HCICommands);
}
void BLEScannerImpl_send_HCICommands_SetLocalName_sender(struct BLEScannerImpl_Instance *_instance, change_local_name_cp Name) {
dispatch_SetLocalName(_instance->id_HCICommands, Name);
}
void BLEScannerImpl_send_HCICommands_Disconnect_sender(struct BLEScannerImpl_Instance *_instance, uint16_t ConnectionHandle, uint8_t Reason) {
dispatch_Disconnect(_instance->id_HCICommands, ConnectionHandle, Reason);
}
void BLEScannerImpl_send_HCICommands_SetLEEventMask_sender(struct BLEScannerImpl_Instance *_instance, set_event_mask_cp Mask) {
dispatch_SetLEEventMask(_instance->id_HCICommands, Mask);
}
void BLEScannerImpl_send_HCICommands_SetLEEventMaskAll_sender(struct BLEScannerImpl_Instance *_instance) {
dispatch_SetLEEventMaskAll(_instance->id_HCICommands);
}
void BLEScannerImpl_send_HCICommands_SetLEAdvertisementParameters_sender(struct BLEScannerImpl_Instance *_instance, uint16_t MinInterval, uint16_t MaxInterval, uint8_t Type, uint8_t OwnAddressType, uint8_t PeerAddressType, bdaddr_t PeerAddress, uint8_t Channel, uint8_t FilterPolicy) {
dispatch_SetLEAdvertisementParameters(_instance->id_HCICommands, MinInterval, MaxInterval, Type, OwnAddressType, PeerAddressType, PeerAddress, Channel, FilterPolicy);
}
void BLEScannerImpl_send_HCICommands_SetLEAdvertiseEnable_sender(struct BLEScannerImpl_Instance *_instance, uint8_t Enable) {
dispatch_SetLEAdvertiseEnable(_instance->id_HCICommands, Enable);
}
void BLEScannerImpl_send_HCICommands_SetLEAdvertisingData_sender(struct BLEScannerImpl_Instance *_instance, uint8_t Length, ble_adv_data_t Data) {
dispatch_SetLEAdvertisingData(_instance->id_HCICommands, Length, Data);
}
void BLEScannerImpl_send_HCICommands_SetLEScanResponseData_sender(struct BLEScannerImpl_Instance *_instance, uint8_t Length, ble_adv_data_t Data) {
dispatch_SetLEScanResponseData(_instance->id_HCICommands, Length, Data);
}
void BLEScannerImpl_send_HCICommands_SetLEScanParameters_sender(struct BLEScannerImpl_Instance *_instance, uint8_t Type, uint16_t Interval, uint16_t Window, uint8_t OwnAddressType, uint8_t FilterPolicy) {
dispatch_SetLEScanParameters(_instance->id_HCICommands, Type, Interval, Window, OwnAddressType, FilterPolicy);
}
void BLEScannerImpl_send_HCICommands_SetLEScanEnable_sender(struct BLEScannerImpl_Instance *_instance, uint8_t Enable, uint8_t FilterDuplicates) {
dispatch_SetLEScanEnable(_instance->id_HCICommands, Enable, FilterDuplicates);
}
void BLEScannerImpl_send_HCICommands_LECreateConnection_sender(struct BLEScannerImpl_Instance *_instance, uint16_t Interval, uint16_t Window, uint8_t FilterPolicy, uint8_t PeerAddressType, bdaddr_t PeerAddress, uint8_t OwnAddressType, uint16_t ConnIntervalMin, uint16_t ConnIntervalMax, uint16_t ConnLatency, uint16_t SupervisionTimeout, uint16_t CELengthMin, uint16_t CELengthMax) {
dispatch_LECreateConnection(_instance->id_HCICommands, Interval, Window, FilterPolicy, PeerAddressType, PeerAddress, OwnAddressType, ConnIntervalMin, ConnIntervalMax, ConnLatency, SupervisionTimeout, CELengthMin, CELengthMax);
}
void BLEScannerImpl_send_HCICommands_LECreateConnectionCancel_sender(struct BLEScannerImpl_Instance *_instance) {
dispatch_LECreateConnectionCancel(_instance->id_HCICommands);
}
void BLEScannerImpl_send_HCICommands_LERand_sender(struct BLEScannerImpl_Instance *_instance) {
dispatch_LERand(_instance->id_HCICommands);
}
void BLEScannerImpl_send_HCICommands_LEEncrypt_sender(struct BLEScannerImpl_Instance *_instance, ble_random_number_t Key, ble_random_number_t Plaintext) {
dispatch_LEEncrypt(_instance->id_HCICommands, Key, Plaintext);
}
void BLEScannerImpl_send_HCICommands_LEStartEncryption_sender(struct BLEScannerImpl_Instance *_instance, uint16_t ConnectionHandle, ble_random_part_t Random, uint16_t EDIV, ble_random_number_t LTK) {
dispatch_LEStartEncryption(_instance->id_HCICommands, ConnectionHandle, Random, EDIV, LTK);
}
void BLEScannerImpl_send_ATT_ATTFindInformationRequest_sender(struct BLEScannerImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t StartingHandle, uint16_t EndingHandle) {
dispatch_ATTFindInformationRequest(_instance->id_ATT, ConnectionHandle, StartingHandle, EndingHandle);
}
void BLEScannerImpl_send_ATT_ATTFindInformationResponse_sender(struct BLEScannerImpl_Instance *_instance, uint16_t ConnectionHandle, uint8_t Format, ble_gatt_data_t InformationData) {
dispatch_ATTFindInformationResponse(_instance->id_ATT, ConnectionHandle, Format, InformationData);
}
void BLEScannerImpl_send_ATT_ATTFindInformationError_sender(struct BLEScannerImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error) {
dispatch_ATTFindInformationError(_instance->id_ATT, ConnectionHandle, AttributeHandle, Error);
}
void BLEScannerImpl_send_ATT_ATTReadByTypeRequest_sender(struct BLEScannerImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t StartingHandle, uint16_t EndingHandle, ble_uuid_t AttributeType) {
dispatch_ATTReadByTypeRequest(_instance->id_ATT, ConnectionHandle, StartingHandle, EndingHandle, AttributeType);
}
void BLEScannerImpl_send_ATT_ATTReadByTypeResponse_sender(struct BLEScannerImpl_Instance *_instance, uint16_t ConnectionHandle, uint8_t Length, ble_gatt_data_t AttributeDataList) {
dispatch_ATTReadByTypeResponse(_instance->id_ATT, ConnectionHandle, Length, AttributeDataList);
}
void BLEScannerImpl_send_ATT_ATTReadByTypeError_sender(struct BLEScannerImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error) {
dispatch_ATTReadByTypeError(_instance->id_ATT, ConnectionHandle, AttributeHandle, Error);
}
void BLEScannerImpl_send_ATT_ATTReadRequest_sender(struct BLEScannerImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle) {
dispatch_ATTReadRequest(_instance->id_ATT, ConnectionHandle, AttributeHandle);
}
void BLEScannerImpl_send_ATT_ATTReadResponse_sender(struct BLEScannerImpl_Instance *_instance, uint16_t ConnectionHandle, ble_gatt_data_t AttributeValue) {
dispatch_ATTReadResponse(_instance->id_ATT, ConnectionHandle, AttributeValue);
}
void BLEScannerImpl_send_ATT_ATTReadError_sender(struct BLEScannerImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error) {
dispatch_ATTReadError(_instance->id_ATT, ConnectionHandle, AttributeHandle, Error);
}
void BLEScannerImpl_send_ATT_ATTReadByGroupTypeRequest_sender(struct BLEScannerImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t StartingHandle, uint16_t EndingHandle, ble_uuid_t AttributeGroupType) {
dispatch_ATTReadByGroupTypeRequest(_instance->id_ATT, ConnectionHandle, StartingHandle, EndingHandle, AttributeGroupType);
}
void BLEScannerImpl_send_ATT_ATTReadByGroupTypeResponse_sender(struct BLEScannerImpl_Instance *_instance, uint16_t ConnectionHandle, uint8_t Length, ble_gatt_data_t AttributeDataList) {
dispatch_ATTReadByGroupTypeResponse(_instance->id_ATT, ConnectionHandle, Length, AttributeDataList);
}
void BLEScannerImpl_send_ATT_ATTReadByGroupTypeError_sender(struct BLEScannerImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error) {
dispatch_ATTReadByGroupTypeError(_instance->id_ATT, ConnectionHandle, AttributeHandle, Error);
}
void BLEScannerImpl_send_ATT_ATTWriteRequest_sender(struct BLEScannerImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, ble_gatt_data_t AttributeValue) {
dispatch_ATTWriteRequest(_instance->id_ATT, ConnectionHandle, AttributeHandle, AttributeValue);
}
void BLEScannerImpl_send_ATT_ATTWriteResponse_sender(struct BLEScannerImpl_Instance *_instance, uint16_t ConnectionHandle) {
dispatch_ATTWriteResponse(_instance->id_ATT, ConnectionHandle);
}
void BLEScannerImpl_send_ATT_ATTWriteError_sender(struct BLEScannerImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error) {
dispatch_ATTWriteError(_instance->id_ATT, ConnectionHandle, AttributeHandle, Error);
}
void BLEScannerImpl_send_ATT_ATTWriteCommand_sender(struct BLEScannerImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, ble_gatt_data_t AttributeValue) {
dispatch_ATTWriteCommand(_instance->id_ATT, ConnectionHandle, AttributeHandle, AttributeValue);
}
void BLEScannerImpl_send_ATT_ATTHandleValueNotification_sender(struct BLEScannerImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, ble_gatt_data_t AttributeValue) {
dispatch_ATTHandleValueNotification(_instance->id_ATT, ConnectionHandle, AttributeHandle, AttributeValue);
}
void BLEScannerImpl_send_ATT_ATTHandleValueIndication_sender(struct BLEScannerImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, ble_gatt_data_t AttributeValue) {
dispatch_ATTHandleValueIndication(_instance->id_ATT, ConnectionHandle, AttributeHandle, AttributeValue);
}
void BLEScannerImpl_send_ATT_ATTHandleValueConfirmation_sender(struct BLEScannerImpl_Instance *_instance, uint16_t ConnectionHandle) {
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
void ANDUA651BLEImpl_send_ANDUA651BLE_WantsToConnect_sender(struct ANDUA651BLEImpl_Instance *_instance) {
dispatch_WantsToConnect(_instance->id_ANDUA651BLE);
}
void ANDUA651BLEImpl_send_ANDUA651BLE_FinishedConnection_sender(struct ANDUA651BLEImpl_Instance *_instance) {
dispatch_FinishedConnection(_instance->id_ANDUA651BLE);
}
void ANDUA651BLEImpl_send_Scanner_Start_sender(struct ANDUA651BLEImpl_Instance *_instance) {
dispatch_Start(_instance->id_Scanner);
}
void ANDUA651BLEImpl_send_Scanner_Stop_sender(struct ANDUA651BLEImpl_Instance *_instance) {
dispatch_Stop(_instance->id_Scanner);
}
void ANDUA651BLEImpl_send_Connecter_Connect_sender(struct ANDUA651BLEImpl_Instance *_instance) {
dispatch_Connect(_instance->id_Connecter);
}
void ANDUA651BLEImpl_send_Connecter_ConnectTo_sender(struct ANDUA651BLEImpl_Instance *_instance, uint8_t AddressType, bdaddr_t Address, ble_random_number_t LongTermKey, uint16_t EncryptedDiversifier, ble_random_part_t RandomNumber) {
dispatch_ConnectTo(_instance->id_Connecter, AddressType, Address, LongTermKey, EncryptedDiversifier, RandomNumber);
}
void ANDUA651BLEImpl_send_Connecter_ConnectToU_sender(struct ANDUA651BLEImpl_Instance *_instance, uint8_t AddressType, bdaddr_t Address) {
dispatch_ConnectToU(_instance->id_Connecter, AddressType, Address);
}
void ANDUA651BLEImpl_send_Connecter_Stop_sender(struct ANDUA651BLEImpl_Instance *_instance) {
dispatch_Stop(_instance->id_Connecter);
}
void ANDUA651BLEImpl_send_Connecter_Encrypt_sender(struct ANDUA651BLEImpl_Instance *_instance) {
dispatch_Encrypt(_instance->id_Connecter);
}
void ANDUA651BLEImpl_send_Notifications_NotifierConnect_sender(struct ANDUA651BLEImpl_Instance *_instance, uint8_t AddressType, bdaddr_t Address) {
dispatch_NotifierConnect(_instance->id_Notifications, AddressType, Address);
}
void ANDUA651BLEImpl_send_Notifications_NotifierRequest_sender(struct ANDUA651BLEImpl_Instance *_instance) {
dispatch_NotifierRequest(_instance->id_Notifications);
}
void ANDUA651BLEImpl_send_Notifications_NotifierError_sender(struct ANDUA651BLEImpl_Instance *_instance) {
dispatch_NotifierError(_instance->id_Notifications);
}
void ANDUA651BLEImpl_send_Notifications_NotifierReceived_sender(struct ANDUA651BLEImpl_Instance *_instance) {
dispatch_NotifierReceived(_instance->id_Notifications);
}
void ANDUA651BLEImpl_send_Notifications_NotifierStored_sender(struct ANDUA651BLEImpl_Instance *_instance) {
dispatch_NotifierStored(_instance->id_Notifications);
}
void ANDUA651BLEImpl_send_ATT_ATTFindInformationRequest_sender(struct ANDUA651BLEImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t StartingHandle, uint16_t EndingHandle) {
dispatch_ATTFindInformationRequest(_instance->id_ATT, ConnectionHandle, StartingHandle, EndingHandle);
}
void ANDUA651BLEImpl_send_ATT_ATTFindInformationResponse_sender(struct ANDUA651BLEImpl_Instance *_instance, uint16_t ConnectionHandle, uint8_t Format, ble_gatt_data_t InformationData) {
dispatch_ATTFindInformationResponse(_instance->id_ATT, ConnectionHandle, Format, InformationData);
}
void ANDUA651BLEImpl_send_ATT_ATTFindInformationError_sender(struct ANDUA651BLEImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error) {
dispatch_ATTFindInformationError(_instance->id_ATT, ConnectionHandle, AttributeHandle, Error);
}
void ANDUA651BLEImpl_send_ATT_ATTReadByTypeRequest_sender(struct ANDUA651BLEImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t StartingHandle, uint16_t EndingHandle, ble_uuid_t AttributeType) {
dispatch_ATTReadByTypeRequest(_instance->id_ATT, ConnectionHandle, StartingHandle, EndingHandle, AttributeType);
}
void ANDUA651BLEImpl_send_ATT_ATTReadByTypeResponse_sender(struct ANDUA651BLEImpl_Instance *_instance, uint16_t ConnectionHandle, uint8_t Length, ble_gatt_data_t AttributeDataList) {
dispatch_ATTReadByTypeResponse(_instance->id_ATT, ConnectionHandle, Length, AttributeDataList);
}
void ANDUA651BLEImpl_send_ATT_ATTReadByTypeError_sender(struct ANDUA651BLEImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error) {
dispatch_ATTReadByTypeError(_instance->id_ATT, ConnectionHandle, AttributeHandle, Error);
}
void ANDUA651BLEImpl_send_ATT_ATTReadRequest_sender(struct ANDUA651BLEImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle) {
dispatch_ATTReadRequest(_instance->id_ATT, ConnectionHandle, AttributeHandle);
}
void ANDUA651BLEImpl_send_ATT_ATTReadResponse_sender(struct ANDUA651BLEImpl_Instance *_instance, uint16_t ConnectionHandle, ble_gatt_data_t AttributeValue) {
dispatch_ATTReadResponse(_instance->id_ATT, ConnectionHandle, AttributeValue);
}
void ANDUA651BLEImpl_send_ATT_ATTReadError_sender(struct ANDUA651BLEImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error) {
dispatch_ATTReadError(_instance->id_ATT, ConnectionHandle, AttributeHandle, Error);
}
void ANDUA651BLEImpl_send_ATT_ATTReadByGroupTypeRequest_sender(struct ANDUA651BLEImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t StartingHandle, uint16_t EndingHandle, ble_uuid_t AttributeGroupType) {
dispatch_ATTReadByGroupTypeRequest(_instance->id_ATT, ConnectionHandle, StartingHandle, EndingHandle, AttributeGroupType);
}
void ANDUA651BLEImpl_send_ATT_ATTReadByGroupTypeResponse_sender(struct ANDUA651BLEImpl_Instance *_instance, uint16_t ConnectionHandle, uint8_t Length, ble_gatt_data_t AttributeDataList) {
dispatch_ATTReadByGroupTypeResponse(_instance->id_ATT, ConnectionHandle, Length, AttributeDataList);
}
void ANDUA651BLEImpl_send_ATT_ATTReadByGroupTypeError_sender(struct ANDUA651BLEImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error) {
dispatch_ATTReadByGroupTypeError(_instance->id_ATT, ConnectionHandle, AttributeHandle, Error);
}
void ANDUA651BLEImpl_send_ATT_ATTWriteRequest_sender(struct ANDUA651BLEImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, ble_gatt_data_t AttributeValue) {
dispatch_ATTWriteRequest(_instance->id_ATT, ConnectionHandle, AttributeHandle, AttributeValue);
}
void ANDUA651BLEImpl_send_ATT_ATTWriteResponse_sender(struct ANDUA651BLEImpl_Instance *_instance, uint16_t ConnectionHandle) {
dispatch_ATTWriteResponse(_instance->id_ATT, ConnectionHandle);
}
void ANDUA651BLEImpl_send_ATT_ATTWriteError_sender(struct ANDUA651BLEImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error) {
dispatch_ATTWriteError(_instance->id_ATT, ConnectionHandle, AttributeHandle, Error);
}
void ANDUA651BLEImpl_send_ATT_ATTWriteCommand_sender(struct ANDUA651BLEImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, ble_gatt_data_t AttributeValue) {
dispatch_ATTWriteCommand(_instance->id_ATT, ConnectionHandle, AttributeHandle, AttributeValue);
}
void ANDUA651BLEImpl_send_ATT_ATTHandleValueNotification_sender(struct ANDUA651BLEImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, ble_gatt_data_t AttributeValue) {
dispatch_ATTHandleValueNotification(_instance->id_ATT, ConnectionHandle, AttributeHandle, AttributeValue);
}
void ANDUA651BLEImpl_send_ATT_ATTHandleValueIndication_sender(struct ANDUA651BLEImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, ble_gatt_data_t AttributeValue) {
dispatch_ATTHandleValueIndication(_instance->id_ATT, ConnectionHandle, AttributeHandle, AttributeValue);
}
void ANDUA651BLEImpl_send_ATT_ATTHandleValueConfirmation_sender(struct ANDUA651BLEImpl_Instance *_instance, uint16_t ConnectionHandle) {
dispatch_ATTHandleValueConfirmation(_instance->id_ATT, ConnectionHandle);
}
void ExitHandler_send_Signals_Interrupt_sender(struct ExitHandler_Instance *_instance) {
dispatch_Interrupt(_instance->id_Signals);
}
void BLENotifierImpl_send_Notifications_NotifierReady_sender(struct BLENotifierImpl_Instance *_instance) {
dispatch_NotifierReady(_instance->id_Notifications);
}
void BLENotifierImpl_send_Notifications_NotifierFinished_sender(struct BLENotifierImpl_Instance *_instance) {
dispatch_NotifierFinished(_instance->id_Notifications);
}
void BLENotifierImpl_send_Connecter_Connect_sender(struct BLENotifierImpl_Instance *_instance) {
dispatch_Connect(_instance->id_Connecter);
}
void BLENotifierImpl_send_Connecter_ConnectTo_sender(struct BLENotifierImpl_Instance *_instance, uint8_t AddressType, bdaddr_t Address, ble_random_number_t LongTermKey, uint16_t EncryptedDiversifier, ble_random_part_t RandomNumber) {
dispatch_ConnectTo(_instance->id_Connecter, AddressType, Address, LongTermKey, EncryptedDiversifier, RandomNumber);
}
void BLENotifierImpl_send_Connecter_ConnectToU_sender(struct BLENotifierImpl_Instance *_instance, uint8_t AddressType, bdaddr_t Address) {
dispatch_ConnectToU(_instance->id_Connecter, AddressType, Address);
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
void Main_send_Signals_Quit_sender(struct Main_Instance *_instance, int16_t code) {
dispatch_Quit(_instance->id_Signals, code);
}
void Main_send_Initialiser_Start_sender(struct Main_Instance *_instance) {
dispatch_Start(_instance->id_Initialiser);
}
void Main_send_Initialiser_Stop_sender(struct Main_Instance *_instance) {
dispatch_Stop(_instance->id_Initialiser);
}
void Main_send_Scanner_Start_sender(struct Main_Instance *_instance) {
dispatch_Start(_instance->id_Scanner);
}
void Main_send_Scanner_Stop_sender(struct Main_Instance *_instance) {
dispatch_Stop(_instance->id_Scanner);
}
void Main_send_ANDUC352BLE_AllowedToConnect_sender(struct Main_Instance *_instance) {
dispatch_AllowedToConnect(_instance->id_ANDUC352BLE);
}
void Main_send_ANDUA651BLE_AllowedToConnect_sender(struct Main_Instance *_instance) {
dispatch_AllowedToConnect(_instance->id_ANDUA651BLE);
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
void ANDUC352BLEImpl_send_ANDUC352BLE_WantsToConnect_sender(struct ANDUC352BLEImpl_Instance *_instance) {
dispatch_WantsToConnect(_instance->id_ANDUC352BLE);
}
void ANDUC352BLEImpl_send_ANDUC352BLE_FinishedConnection_sender(struct ANDUC352BLEImpl_Instance *_instance) {
dispatch_FinishedConnection(_instance->id_ANDUC352BLE);
}
void ANDUC352BLEImpl_send_Scanner_Start_sender(struct ANDUC352BLEImpl_Instance *_instance) {
dispatch_Start(_instance->id_Scanner);
}
void ANDUC352BLEImpl_send_Scanner_Stop_sender(struct ANDUC352BLEImpl_Instance *_instance) {
dispatch_Stop(_instance->id_Scanner);
}
void ANDUC352BLEImpl_send_Connecter_Connect_sender(struct ANDUC352BLEImpl_Instance *_instance) {
dispatch_Connect(_instance->id_Connecter);
}
void ANDUC352BLEImpl_send_Connecter_ConnectTo_sender(struct ANDUC352BLEImpl_Instance *_instance, uint8_t AddressType, bdaddr_t Address, ble_random_number_t LongTermKey, uint16_t EncryptedDiversifier, ble_random_part_t RandomNumber) {
dispatch_ConnectTo(_instance->id_Connecter, AddressType, Address, LongTermKey, EncryptedDiversifier, RandomNumber);
}
void ANDUC352BLEImpl_send_Connecter_ConnectToU_sender(struct ANDUC352BLEImpl_Instance *_instance, uint8_t AddressType, bdaddr_t Address) {
dispatch_ConnectToU(_instance->id_Connecter, AddressType, Address);
}
void ANDUC352BLEImpl_send_Connecter_Stop_sender(struct ANDUC352BLEImpl_Instance *_instance) {
dispatch_Stop(_instance->id_Connecter);
}
void ANDUC352BLEImpl_send_Connecter_Encrypt_sender(struct ANDUC352BLEImpl_Instance *_instance) {
dispatch_Encrypt(_instance->id_Connecter);
}
void ANDUC352BLEImpl_send_Notifications_NotifierConnect_sender(struct ANDUC352BLEImpl_Instance *_instance, uint8_t AddressType, bdaddr_t Address) {
dispatch_NotifierConnect(_instance->id_Notifications, AddressType, Address);
}
void ANDUC352BLEImpl_send_Notifications_NotifierRequest_sender(struct ANDUC352BLEImpl_Instance *_instance) {
dispatch_NotifierRequest(_instance->id_Notifications);
}
void ANDUC352BLEImpl_send_Notifications_NotifierError_sender(struct ANDUC352BLEImpl_Instance *_instance) {
dispatch_NotifierError(_instance->id_Notifications);
}
void ANDUC352BLEImpl_send_Notifications_NotifierReceived_sender(struct ANDUC352BLEImpl_Instance *_instance) {
dispatch_NotifierReceived(_instance->id_Notifications);
}
void ANDUC352BLEImpl_send_Notifications_NotifierStored_sender(struct ANDUC352BLEImpl_Instance *_instance) {
dispatch_NotifierStored(_instance->id_Notifications);
}
void ANDUC352BLEImpl_send_ATT_ATTFindInformationRequest_sender(struct ANDUC352BLEImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t StartingHandle, uint16_t EndingHandle) {
dispatch_ATTFindInformationRequest(_instance->id_ATT, ConnectionHandle, StartingHandle, EndingHandle);
}
void ANDUC352BLEImpl_send_ATT_ATTFindInformationResponse_sender(struct ANDUC352BLEImpl_Instance *_instance, uint16_t ConnectionHandle, uint8_t Format, ble_gatt_data_t InformationData) {
dispatch_ATTFindInformationResponse(_instance->id_ATT, ConnectionHandle, Format, InformationData);
}
void ANDUC352BLEImpl_send_ATT_ATTFindInformationError_sender(struct ANDUC352BLEImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error) {
dispatch_ATTFindInformationError(_instance->id_ATT, ConnectionHandle, AttributeHandle, Error);
}
void ANDUC352BLEImpl_send_ATT_ATTReadByTypeRequest_sender(struct ANDUC352BLEImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t StartingHandle, uint16_t EndingHandle, ble_uuid_t AttributeType) {
dispatch_ATTReadByTypeRequest(_instance->id_ATT, ConnectionHandle, StartingHandle, EndingHandle, AttributeType);
}
void ANDUC352BLEImpl_send_ATT_ATTReadByTypeResponse_sender(struct ANDUC352BLEImpl_Instance *_instance, uint16_t ConnectionHandle, uint8_t Length, ble_gatt_data_t AttributeDataList) {
dispatch_ATTReadByTypeResponse(_instance->id_ATT, ConnectionHandle, Length, AttributeDataList);
}
void ANDUC352BLEImpl_send_ATT_ATTReadByTypeError_sender(struct ANDUC352BLEImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error) {
dispatch_ATTReadByTypeError(_instance->id_ATT, ConnectionHandle, AttributeHandle, Error);
}
void ANDUC352BLEImpl_send_ATT_ATTReadRequest_sender(struct ANDUC352BLEImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle) {
dispatch_ATTReadRequest(_instance->id_ATT, ConnectionHandle, AttributeHandle);
}
void ANDUC352BLEImpl_send_ATT_ATTReadResponse_sender(struct ANDUC352BLEImpl_Instance *_instance, uint16_t ConnectionHandle, ble_gatt_data_t AttributeValue) {
dispatch_ATTReadResponse(_instance->id_ATT, ConnectionHandle, AttributeValue);
}
void ANDUC352BLEImpl_send_ATT_ATTReadError_sender(struct ANDUC352BLEImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error) {
dispatch_ATTReadError(_instance->id_ATT, ConnectionHandle, AttributeHandle, Error);
}
void ANDUC352BLEImpl_send_ATT_ATTReadByGroupTypeRequest_sender(struct ANDUC352BLEImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t StartingHandle, uint16_t EndingHandle, ble_uuid_t AttributeGroupType) {
dispatch_ATTReadByGroupTypeRequest(_instance->id_ATT, ConnectionHandle, StartingHandle, EndingHandle, AttributeGroupType);
}
void ANDUC352BLEImpl_send_ATT_ATTReadByGroupTypeResponse_sender(struct ANDUC352BLEImpl_Instance *_instance, uint16_t ConnectionHandle, uint8_t Length, ble_gatt_data_t AttributeDataList) {
dispatch_ATTReadByGroupTypeResponse(_instance->id_ATT, ConnectionHandle, Length, AttributeDataList);
}
void ANDUC352BLEImpl_send_ATT_ATTReadByGroupTypeError_sender(struct ANDUC352BLEImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error) {
dispatch_ATTReadByGroupTypeError(_instance->id_ATT, ConnectionHandle, AttributeHandle, Error);
}
void ANDUC352BLEImpl_send_ATT_ATTWriteRequest_sender(struct ANDUC352BLEImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, ble_gatt_data_t AttributeValue) {
dispatch_ATTWriteRequest(_instance->id_ATT, ConnectionHandle, AttributeHandle, AttributeValue);
}
void ANDUC352BLEImpl_send_ATT_ATTWriteResponse_sender(struct ANDUC352BLEImpl_Instance *_instance, uint16_t ConnectionHandle) {
dispatch_ATTWriteResponse(_instance->id_ATT, ConnectionHandle);
}
void ANDUC352BLEImpl_send_ATT_ATTWriteError_sender(struct ANDUC352BLEImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error) {
dispatch_ATTWriteError(_instance->id_ATT, ConnectionHandle, AttributeHandle, Error);
}
void ANDUC352BLEImpl_send_ATT_ATTWriteCommand_sender(struct ANDUC352BLEImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, ble_gatt_data_t AttributeValue) {
dispatch_ATTWriteCommand(_instance->id_ATT, ConnectionHandle, AttributeHandle, AttributeValue);
}
void ANDUC352BLEImpl_send_ATT_ATTHandleValueNotification_sender(struct ANDUC352BLEImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, ble_gatt_data_t AttributeValue) {
dispatch_ATTHandleValueNotification(_instance->id_ATT, ConnectionHandle, AttributeHandle, AttributeValue);
}
void ANDUC352BLEImpl_send_ATT_ATTHandleValueIndication_sender(struct ANDUC352BLEImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, ble_gatt_data_t AttributeValue) {
dispatch_ATTHandleValueIndication(_instance->id_ATT, ConnectionHandle, AttributeHandle, AttributeValue);
}
void ANDUC352BLEImpl_send_ATT_ATTHandleValueConfirmation_sender(struct ANDUC352BLEImpl_Instance *_instance, uint16_t ConnectionHandle) {
dispatch_ATTHandleValueConfirmation(_instance->id_ATT, ConnectionHandle);
}

void forward_ANDUC352BLEImpl_send_Tellu_TelluCloudWeightScale(struct ANDUC352BLEImpl_Instance *_instance, time_t observationTime, float mass){
if(_instance->id_Tellu == weightscale_var.id_Tellu) {
forward_MQTT2_ANDUC352BLEImpl_send_Tellu_TelluCloudWeightScale(_instance, observationTime, mass);
}
}
void forward_ANDUA651BLEImpl_send_Tellu_TelluCloudBloodPressure(struct ANDUA651BLEImpl_Instance *_instance, time_t observationTime, int16_t health_pressure_diastolic, int16_t health_pressure_mean, int16_t health_pressure_systolic, int16_t health_pulseRate){
if(_instance->id_Tellu == bloodpressure_var.id_Tellu) {
forward_MQTT1_ANDUA651BLEImpl_send_Tellu_TelluCloudBloodPressure(_instance, observationTime, health_pressure_diastolic, health_pressure_mean, health_pressure_systolic, health_pulseRate);
}
}

void initialize_configuration_MedicalGW() {
// Initialize connectors
register_BLEScannerImpl_send_Scanner_Started_listener(&BLEScannerImpl_send_Scanner_Started_sender);
register_BLEScannerImpl_send_Scanner_Stopped_listener(&BLEScannerImpl_send_Scanner_Stopped_sender);
register_BLEScannerImpl_send_Scanner_Failure_listener(&BLEScannerImpl_send_Scanner_Failure_sender);
register_BLEScannerImpl_send_Scanner_ConnectableAdvertisement_listener(&BLEScannerImpl_send_Scanner_ConnectableAdvertisement_sender);
register_BLEScannerImpl_send_Socket_Open_listener(&BLEScannerImpl_send_Socket_Open_sender);
register_BLEScannerImpl_send_Socket_Close_listener(&BLEScannerImpl_send_Socket_Close_sender);
register_BLEScannerImpl_send_HCICommands_Reset_listener(&BLEScannerImpl_send_HCICommands_Reset_sender);
register_BLEScannerImpl_send_HCICommands_SetEventMask_listener(&BLEScannerImpl_send_HCICommands_SetEventMask_sender);
register_BLEScannerImpl_send_HCICommands_SetEventMaskAll_listener(&BLEScannerImpl_send_HCICommands_SetEventMaskAll_sender);
register_BLEScannerImpl_send_HCICommands_SetLocalName_listener(&BLEScannerImpl_send_HCICommands_SetLocalName_sender);
register_BLEScannerImpl_send_HCICommands_Disconnect_listener(&BLEScannerImpl_send_HCICommands_Disconnect_sender);
register_BLEScannerImpl_send_HCICommands_SetLEEventMask_listener(&BLEScannerImpl_send_HCICommands_SetLEEventMask_sender);
register_BLEScannerImpl_send_HCICommands_SetLEEventMaskAll_listener(&BLEScannerImpl_send_HCICommands_SetLEEventMaskAll_sender);
register_BLEScannerImpl_send_HCICommands_SetLEAdvertisementParameters_listener(&BLEScannerImpl_send_HCICommands_SetLEAdvertisementParameters_sender);
register_BLEScannerImpl_send_HCICommands_SetLEAdvertiseEnable_listener(&BLEScannerImpl_send_HCICommands_SetLEAdvertiseEnable_sender);
register_BLEScannerImpl_send_HCICommands_SetLEAdvertisingData_listener(&BLEScannerImpl_send_HCICommands_SetLEAdvertisingData_sender);
register_BLEScannerImpl_send_HCICommands_SetLEScanResponseData_listener(&BLEScannerImpl_send_HCICommands_SetLEScanResponseData_sender);
register_BLEScannerImpl_send_HCICommands_SetLEScanParameters_listener(&BLEScannerImpl_send_HCICommands_SetLEScanParameters_sender);
register_BLEScannerImpl_send_HCICommands_SetLEScanEnable_listener(&BLEScannerImpl_send_HCICommands_SetLEScanEnable_sender);
register_BLEScannerImpl_send_HCICommands_LECreateConnection_listener(&BLEScannerImpl_send_HCICommands_LECreateConnection_sender);
register_BLEScannerImpl_send_HCICommands_LECreateConnectionCancel_listener(&BLEScannerImpl_send_HCICommands_LECreateConnectionCancel_sender);
register_BLEScannerImpl_send_HCICommands_LERand_listener(&BLEScannerImpl_send_HCICommands_LERand_sender);
register_BLEScannerImpl_send_HCICommands_LEEncrypt_listener(&BLEScannerImpl_send_HCICommands_LEEncrypt_sender);
register_BLEScannerImpl_send_HCICommands_LEStartEncryption_listener(&BLEScannerImpl_send_HCICommands_LEStartEncryption_sender);
register_BLEScannerImpl_send_ATT_ATTFindInformationRequest_listener(&BLEScannerImpl_send_ATT_ATTFindInformationRequest_sender);
register_BLEScannerImpl_send_ATT_ATTFindInformationResponse_listener(&BLEScannerImpl_send_ATT_ATTFindInformationResponse_sender);
register_BLEScannerImpl_send_ATT_ATTFindInformationError_listener(&BLEScannerImpl_send_ATT_ATTFindInformationError_sender);
register_BLEScannerImpl_send_ATT_ATTReadByTypeRequest_listener(&BLEScannerImpl_send_ATT_ATTReadByTypeRequest_sender);
register_BLEScannerImpl_send_ATT_ATTReadByTypeResponse_listener(&BLEScannerImpl_send_ATT_ATTReadByTypeResponse_sender);
register_BLEScannerImpl_send_ATT_ATTReadByTypeError_listener(&BLEScannerImpl_send_ATT_ATTReadByTypeError_sender);
register_BLEScannerImpl_send_ATT_ATTReadRequest_listener(&BLEScannerImpl_send_ATT_ATTReadRequest_sender);
register_BLEScannerImpl_send_ATT_ATTReadResponse_listener(&BLEScannerImpl_send_ATT_ATTReadResponse_sender);
register_BLEScannerImpl_send_ATT_ATTReadError_listener(&BLEScannerImpl_send_ATT_ATTReadError_sender);
register_BLEScannerImpl_send_ATT_ATTReadByGroupTypeRequest_listener(&BLEScannerImpl_send_ATT_ATTReadByGroupTypeRequest_sender);
register_BLEScannerImpl_send_ATT_ATTReadByGroupTypeResponse_listener(&BLEScannerImpl_send_ATT_ATTReadByGroupTypeResponse_sender);
register_BLEScannerImpl_send_ATT_ATTReadByGroupTypeError_listener(&BLEScannerImpl_send_ATT_ATTReadByGroupTypeError_sender);
register_BLEScannerImpl_send_ATT_ATTWriteRequest_listener(&BLEScannerImpl_send_ATT_ATTWriteRequest_sender);
register_BLEScannerImpl_send_ATT_ATTWriteResponse_listener(&BLEScannerImpl_send_ATT_ATTWriteResponse_sender);
register_BLEScannerImpl_send_ATT_ATTWriteError_listener(&BLEScannerImpl_send_ATT_ATTWriteError_sender);
register_BLEScannerImpl_send_ATT_ATTWriteCommand_listener(&BLEScannerImpl_send_ATT_ATTWriteCommand_sender);
register_BLEScannerImpl_send_ATT_ATTHandleValueNotification_listener(&BLEScannerImpl_send_ATT_ATTHandleValueNotification_sender);
register_BLEScannerImpl_send_ATT_ATTHandleValueIndication_listener(&BLEScannerImpl_send_ATT_ATTHandleValueIndication_sender);
register_BLEScannerImpl_send_ATT_ATTHandleValueConfirmation_listener(&BLEScannerImpl_send_ATT_ATTHandleValueConfirmation_sender);
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
register_ANDUA651BLEImpl_send_ANDUA651BLE_WantsToConnect_listener(&ANDUA651BLEImpl_send_ANDUA651BLE_WantsToConnect_sender);
register_ANDUA651BLEImpl_send_ANDUA651BLE_FinishedConnection_listener(&ANDUA651BLEImpl_send_ANDUA651BLE_FinishedConnection_sender);
register_ANDUA651BLEImpl_send_Scanner_Start_listener(&ANDUA651BLEImpl_send_Scanner_Start_sender);
register_ANDUA651BLEImpl_send_Scanner_Stop_listener(&ANDUA651BLEImpl_send_Scanner_Stop_sender);
register_ANDUA651BLEImpl_send_Connecter_Connect_listener(&ANDUA651BLEImpl_send_Connecter_Connect_sender);
register_ANDUA651BLEImpl_send_Connecter_ConnectTo_listener(&ANDUA651BLEImpl_send_Connecter_ConnectTo_sender);
register_ANDUA651BLEImpl_send_Connecter_ConnectToU_listener(&ANDUA651BLEImpl_send_Connecter_ConnectToU_sender);
register_ANDUA651BLEImpl_send_Connecter_Stop_listener(&ANDUA651BLEImpl_send_Connecter_Stop_sender);
register_ANDUA651BLEImpl_send_Connecter_Encrypt_listener(&ANDUA651BLEImpl_send_Connecter_Encrypt_sender);
register_ANDUA651BLEImpl_send_Notifications_NotifierConnect_listener(&ANDUA651BLEImpl_send_Notifications_NotifierConnect_sender);
register_ANDUA651BLEImpl_send_Notifications_NotifierRequest_listener(&ANDUA651BLEImpl_send_Notifications_NotifierRequest_sender);
register_ANDUA651BLEImpl_send_Notifications_NotifierError_listener(&ANDUA651BLEImpl_send_Notifications_NotifierError_sender);
register_ANDUA651BLEImpl_send_Notifications_NotifierReceived_listener(&ANDUA651BLEImpl_send_Notifications_NotifierReceived_sender);
register_ANDUA651BLEImpl_send_Notifications_NotifierStored_listener(&ANDUA651BLEImpl_send_Notifications_NotifierStored_sender);
register_ANDUA651BLEImpl_send_ATT_ATTFindInformationRequest_listener(&ANDUA651BLEImpl_send_ATT_ATTFindInformationRequest_sender);
register_ANDUA651BLEImpl_send_ATT_ATTFindInformationResponse_listener(&ANDUA651BLEImpl_send_ATT_ATTFindInformationResponse_sender);
register_ANDUA651BLEImpl_send_ATT_ATTFindInformationError_listener(&ANDUA651BLEImpl_send_ATT_ATTFindInformationError_sender);
register_ANDUA651BLEImpl_send_ATT_ATTReadByTypeRequest_listener(&ANDUA651BLEImpl_send_ATT_ATTReadByTypeRequest_sender);
register_ANDUA651BLEImpl_send_ATT_ATTReadByTypeResponse_listener(&ANDUA651BLEImpl_send_ATT_ATTReadByTypeResponse_sender);
register_ANDUA651BLEImpl_send_ATT_ATTReadByTypeError_listener(&ANDUA651BLEImpl_send_ATT_ATTReadByTypeError_sender);
register_ANDUA651BLEImpl_send_ATT_ATTReadRequest_listener(&ANDUA651BLEImpl_send_ATT_ATTReadRequest_sender);
register_ANDUA651BLEImpl_send_ATT_ATTReadResponse_listener(&ANDUA651BLEImpl_send_ATT_ATTReadResponse_sender);
register_ANDUA651BLEImpl_send_ATT_ATTReadError_listener(&ANDUA651BLEImpl_send_ATT_ATTReadError_sender);
register_ANDUA651BLEImpl_send_ATT_ATTReadByGroupTypeRequest_listener(&ANDUA651BLEImpl_send_ATT_ATTReadByGroupTypeRequest_sender);
register_ANDUA651BLEImpl_send_ATT_ATTReadByGroupTypeResponse_listener(&ANDUA651BLEImpl_send_ATT_ATTReadByGroupTypeResponse_sender);
register_ANDUA651BLEImpl_send_ATT_ATTReadByGroupTypeError_listener(&ANDUA651BLEImpl_send_ATT_ATTReadByGroupTypeError_sender);
register_ANDUA651BLEImpl_send_ATT_ATTWriteRequest_listener(&ANDUA651BLEImpl_send_ATT_ATTWriteRequest_sender);
register_ANDUA651BLEImpl_send_ATT_ATTWriteResponse_listener(&ANDUA651BLEImpl_send_ATT_ATTWriteResponse_sender);
register_ANDUA651BLEImpl_send_ATT_ATTWriteError_listener(&ANDUA651BLEImpl_send_ATT_ATTWriteError_sender);
register_ANDUA651BLEImpl_send_ATT_ATTWriteCommand_listener(&ANDUA651BLEImpl_send_ATT_ATTWriteCommand_sender);
register_ANDUA651BLEImpl_send_ATT_ATTHandleValueNotification_listener(&ANDUA651BLEImpl_send_ATT_ATTHandleValueNotification_sender);
register_ANDUA651BLEImpl_send_ATT_ATTHandleValueIndication_listener(&ANDUA651BLEImpl_send_ATT_ATTHandleValueIndication_sender);
register_ANDUA651BLEImpl_send_ATT_ATTHandleValueConfirmation_listener(&ANDUA651BLEImpl_send_ATT_ATTHandleValueConfirmation_sender);
register_ExitHandler_send_Signals_Interrupt_listener(&ExitHandler_send_Signals_Interrupt_sender);
register_BLENotifierImpl_send_Notifications_NotifierReady_listener(&BLENotifierImpl_send_Notifications_NotifierReady_sender);
register_BLENotifierImpl_send_Notifications_NotifierFinished_listener(&BLENotifierImpl_send_Notifications_NotifierFinished_sender);
register_BLENotifierImpl_send_Connecter_Connect_listener(&BLENotifierImpl_send_Connecter_Connect_sender);
register_BLENotifierImpl_send_Connecter_ConnectTo_listener(&BLENotifierImpl_send_Connecter_ConnectTo_sender);
register_BLENotifierImpl_send_Connecter_ConnectToU_listener(&BLENotifierImpl_send_Connecter_ConnectToU_sender);
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
register_Main_send_Signals_Quit_listener(&Main_send_Signals_Quit_sender);
register_Main_send_Initialiser_Start_listener(&Main_send_Initialiser_Start_sender);
register_Main_send_Initialiser_Stop_listener(&Main_send_Initialiser_Stop_sender);
register_Main_send_Scanner_Start_listener(&Main_send_Scanner_Start_sender);
register_Main_send_Scanner_Stop_listener(&Main_send_Scanner_Stop_sender);
register_Main_send_ANDUC352BLE_AllowedToConnect_listener(&Main_send_ANDUC352BLE_AllowedToConnect_sender);
register_Main_send_ANDUA651BLE_AllowedToConnect_listener(&Main_send_ANDUA651BLE_AllowedToConnect_sender);
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
register_ANDUC352BLEImpl_send_ANDUC352BLE_WantsToConnect_listener(&ANDUC352BLEImpl_send_ANDUC352BLE_WantsToConnect_sender);
register_ANDUC352BLEImpl_send_ANDUC352BLE_FinishedConnection_listener(&ANDUC352BLEImpl_send_ANDUC352BLE_FinishedConnection_sender);
register_ANDUC352BLEImpl_send_Scanner_Start_listener(&ANDUC352BLEImpl_send_Scanner_Start_sender);
register_ANDUC352BLEImpl_send_Scanner_Stop_listener(&ANDUC352BLEImpl_send_Scanner_Stop_sender);
register_ANDUC352BLEImpl_send_Connecter_Connect_listener(&ANDUC352BLEImpl_send_Connecter_Connect_sender);
register_ANDUC352BLEImpl_send_Connecter_ConnectTo_listener(&ANDUC352BLEImpl_send_Connecter_ConnectTo_sender);
register_ANDUC352BLEImpl_send_Connecter_ConnectToU_listener(&ANDUC352BLEImpl_send_Connecter_ConnectToU_sender);
register_ANDUC352BLEImpl_send_Connecter_Stop_listener(&ANDUC352BLEImpl_send_Connecter_Stop_sender);
register_ANDUC352BLEImpl_send_Connecter_Encrypt_listener(&ANDUC352BLEImpl_send_Connecter_Encrypt_sender);
register_ANDUC352BLEImpl_send_Notifications_NotifierConnect_listener(&ANDUC352BLEImpl_send_Notifications_NotifierConnect_sender);
register_ANDUC352BLEImpl_send_Notifications_NotifierRequest_listener(&ANDUC352BLEImpl_send_Notifications_NotifierRequest_sender);
register_ANDUC352BLEImpl_send_Notifications_NotifierError_listener(&ANDUC352BLEImpl_send_Notifications_NotifierError_sender);
register_ANDUC352BLEImpl_send_Notifications_NotifierReceived_listener(&ANDUC352BLEImpl_send_Notifications_NotifierReceived_sender);
register_ANDUC352BLEImpl_send_Notifications_NotifierStored_listener(&ANDUC352BLEImpl_send_Notifications_NotifierStored_sender);
register_ANDUC352BLEImpl_send_ATT_ATTFindInformationRequest_listener(&ANDUC352BLEImpl_send_ATT_ATTFindInformationRequest_sender);
register_ANDUC352BLEImpl_send_ATT_ATTFindInformationResponse_listener(&ANDUC352BLEImpl_send_ATT_ATTFindInformationResponse_sender);
register_ANDUC352BLEImpl_send_ATT_ATTFindInformationError_listener(&ANDUC352BLEImpl_send_ATT_ATTFindInformationError_sender);
register_ANDUC352BLEImpl_send_ATT_ATTReadByTypeRequest_listener(&ANDUC352BLEImpl_send_ATT_ATTReadByTypeRequest_sender);
register_ANDUC352BLEImpl_send_ATT_ATTReadByTypeResponse_listener(&ANDUC352BLEImpl_send_ATT_ATTReadByTypeResponse_sender);
register_ANDUC352BLEImpl_send_ATT_ATTReadByTypeError_listener(&ANDUC352BLEImpl_send_ATT_ATTReadByTypeError_sender);
register_ANDUC352BLEImpl_send_ATT_ATTReadRequest_listener(&ANDUC352BLEImpl_send_ATT_ATTReadRequest_sender);
register_ANDUC352BLEImpl_send_ATT_ATTReadResponse_listener(&ANDUC352BLEImpl_send_ATT_ATTReadResponse_sender);
register_ANDUC352BLEImpl_send_ATT_ATTReadError_listener(&ANDUC352BLEImpl_send_ATT_ATTReadError_sender);
register_ANDUC352BLEImpl_send_ATT_ATTReadByGroupTypeRequest_listener(&ANDUC352BLEImpl_send_ATT_ATTReadByGroupTypeRequest_sender);
register_ANDUC352BLEImpl_send_ATT_ATTReadByGroupTypeResponse_listener(&ANDUC352BLEImpl_send_ATT_ATTReadByGroupTypeResponse_sender);
register_ANDUC352BLEImpl_send_ATT_ATTReadByGroupTypeError_listener(&ANDUC352BLEImpl_send_ATT_ATTReadByGroupTypeError_sender);
register_ANDUC352BLEImpl_send_ATT_ATTWriteRequest_listener(&ANDUC352BLEImpl_send_ATT_ATTWriteRequest_sender);
register_ANDUC352BLEImpl_send_ATT_ATTWriteResponse_listener(&ANDUC352BLEImpl_send_ATT_ATTWriteResponse_sender);
register_ANDUC352BLEImpl_send_ATT_ATTWriteError_listener(&ANDUC352BLEImpl_send_ATT_ATTWriteError_sender);
register_ANDUC352BLEImpl_send_ATT_ATTWriteCommand_listener(&ANDUC352BLEImpl_send_ATT_ATTWriteCommand_sender);
register_ANDUC352BLEImpl_send_ATT_ATTHandleValueNotification_listener(&ANDUC352BLEImpl_send_ATT_ATTHandleValueNotification_sender);
register_ANDUC352BLEImpl_send_ATT_ATTHandleValueIndication_listener(&ANDUC352BLEImpl_send_ATT_ATTHandleValueIndication_sender);
register_ANDUC352BLEImpl_send_ATT_ATTHandleValueConfirmation_listener(&ANDUC352BLEImpl_send_ATT_ATTHandleValueConfirmation_sender);
register_external_ANDUC352BLEImpl_send_Tellu_TelluCloudWeightScale_listener(&forward_ANDUC352BLEImpl_send_Tellu_TelluCloudWeightScale);
register_external_ANDUA651BLEImpl_send_Tellu_TelluCloudBloodPressure_listener(&forward_ANDUA651BLEImpl_send_Tellu_TelluCloudBloodPressure);

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
hci_var.HCISocketProxy_Device_var = "hci0";

// Init the ID, state variables and properties for instance scanner
scanner_var.id_Scanner = add_instance( (void*) &scanner_var);
scanner_var.id_Socket = add_instance( (void*) &scanner_var);
scanner_var.id_HCICommands = add_instance( (void*) &scanner_var);
scanner_var.id_HCIEvents = add_instance( (void*) &scanner_var);
scanner_var.id_SMP = add_instance( (void*) &scanner_var);
scanner_var.id_ATT = add_instance( (void*) &scanner_var);
scanner_var.BLEScannerImpl_States_State = BLESCANNERIMPL_STATES_STANDBY_STATE;
scanner_var.active = true;
scanner_var.alive = true;

// Init the ID, state variables and properties for instance notifierconnecter
notifierconnecter_var.id_Connecter = add_instance( (void*) &notifierconnecter_var);
notifierconnecter_var.id_Socket = add_instance( (void*) &notifierconnecter_var);
notifierconnecter_var.id_HCICommands = add_instance( (void*) &notifierconnecter_var);
notifierconnecter_var.id_HCIEvents = add_instance( (void*) &notifierconnecter_var);
notifierconnecter_var.id_SMP = add_instance( (void*) &notifierconnecter_var);
notifierconnecter_var.id_ATT = add_instance( (void*) &notifierconnecter_var);
notifierconnecter_var.BLEConnecterImpl_States_State = BLECONNECTERIMPL_STATES_NOTCONNECTED_STATE;
notifierconnecter_var.active = true;
notifierconnecter_var.alive = true;

// Init the ID, state variables and properties for instance notifier
notifier_var.id_Notifications = add_instance( (void*) &notifier_var);
notifier_var.id_Connecter = add_instance( (void*) &notifier_var);
notifier_var.id_ATT = add_instance( (void*) &notifier_var);
notifier_var.BLENotifierImpl_States_State = BLENOTIFIERIMPL_STATES_WAITING_STATE;
notifier_var.BLENotifierImpl_States_Connected_State = BLENOTIFIERIMPL_STATES_CONNECTED_SETREADNOTIFICATIONS_STATE;
notifier_var.active = true;
notifier_var.alive = true;
notifier_var.BLENotifierImpl_ReadByteConfigurationHandle_var = 0x0023;
notifier_var.BLENotifierImpl_WriteByteValueHandle_var = 0x0025;
notifier_var.BLENotifierImpl_ReadByteValueHandle_var = 0x0021;

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

// Init the ID, state variables and properties for instance bloodpressure
bloodpressure_var.id_ANDUA651BLE = add_instance( (void*) &bloodpressure_var);
bloodpressure_var.id_Tellu = add_instance( (void*) &bloodpressure_var);
bloodpressure_var.id_Scanner = add_instance( (void*) &bloodpressure_var);
bloodpressure_var.id_Connecter = add_instance( (void*) &bloodpressure_var);
bloodpressure_var.id_Notifications = add_instance( (void*) &bloodpressure_var);
bloodpressure_var.id_ATT = add_instance( (void*) &bloodpressure_var);
bloodpressure_var.ANDUA651BLEImpl_States_State = ANDUA651BLEIMPL_STATES_STANDBY_STATE;
bloodpressure_var.ANDUA651BLEImpl_States_Notify_State = ANDUA651BLEIMPL_STATES_NOTIFY_WAIT_STATE;
bloodpressure_var.active = true;
bloodpressure_var.alive = true;
bloodpressure_var.ANDUA651BLEImpl_NotifierAddressType_var = BLEADDRESSTYPE_RANDOM;
bloodpressure_var.ANDUA651BLEImpl_AddressType_var = BLEADDRESSTYPE_PUBLIC;
bloodpressure_var.ANDUA651BLEImpl_BloodPressureConfigurationHandle_var = 0x0013;
bloodpressure_var.ANDUA651BLEImpl_BatteryValueHandle_var = 0x002B;
bloodpressure_var.ANDUA651BLEImpl_NotifierAddress_var = "F3:48:7F:62:B8:60";
bloodpressure_var.ANDUA651BLEImpl_BloodPressureValueHandle_var = 0x0012;
bloodpressure_var.ANDUA651BLEImpl_Address_var = "5C:31:3E:00:4B:6B";

// Init the ID, state variables and properties for instance handler
handler_var.id_Signals = add_instance( (void*) &handler_var);
handler_var.ExitHandler_Handler_State = EXITHANDLER_HANDLER_WAITING_STATE;
handler_var.active = true;
handler_var.alive = true;

// Init the ID, state variables and properties for instance weightscale
weightscale_var.id_ANDUC352BLE = add_instance( (void*) &weightscale_var);
weightscale_var.id_Tellu = add_instance( (void*) &weightscale_var);
weightscale_var.id_Scanner = add_instance( (void*) &weightscale_var);
weightscale_var.id_Connecter = add_instance( (void*) &weightscale_var);
weightscale_var.id_Notifications = add_instance( (void*) &weightscale_var);
weightscale_var.id_ATT = add_instance( (void*) &weightscale_var);
weightscale_var.ANDUC352BLEImpl_States_State = ANDUC352BLEIMPL_STATES_STANDBY_STATE;
weightscale_var.ANDUC352BLEImpl_States_Sync_State = ANDUC352BLEIMPL_STATES_SYNC_READBATTERY_STATE;
weightscale_var.ANDUC352BLEImpl_States_Notify_State = ANDUC352BLEIMPL_STATES_NOTIFY_WAIT_STATE;
weightscale_var.active = true;
weightscale_var.alive = true;
weightscale_var.ANDUC352BLEImpl_BatteryValueHandle_var = 0x002B;
weightscale_var.ANDUC352BLEImpl_NotifierAddressType_var = BLEADDRESSTYPE_RANDOM;
weightscale_var.ANDUC352BLEImpl_Address_var = "5C:31:3E:5F:00:7A";
weightscale_var.ANDUC352BLEImpl_NotifierAddress_var = "CC:AF:6D:65:64:4A";
weightscale_var.ANDUC352BLEImpl_WeightScaleConfigurationHandle_var = 0x0013;
weightscale_var.ANDUC352BLEImpl_AddressType_var = BLEADDRESSTYPE_PUBLIC;
weightscale_var.ANDUC352BLEImpl_WeightScaleValueHandle_var = 0x0012;

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

// Init the ID, state variables and properties for instance main
main_var.id_Signals = add_instance( (void*) &main_var);
main_var.id_Initialiser = add_instance( (void*) &main_var);
main_var.id_Scanner = add_instance( (void*) &main_var);
main_var.id_ANDUC352BLE = add_instance( (void*) &main_var);
main_var.id_ANDUA651BLE = add_instance( (void*) &main_var);
main_var.Main_States_State = MAIN_STATES_INITIALISE_STATE;
main_var.Main_States_Standby_State = MAIN_STATES_STANDBY_SCAN_STATE;
main_var.active = true;
main_var.alive = true;

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

  
  initialize_configuration_MedicalGW();

// Network Initialization
// Initialise MQTT2:
MQTT2_instance.listener_id = add_instance(&MQTT2_instance);
MQTT2_setup(&MQTT2_instance);
pthread_t thread_MQTT2;
pthread_create( &thread_MQTT2, NULL, MQTT2_start_receiver_thread, NULL);

// Initialise MQTT1:
MQTT1_instance.listener_id = add_instance(&MQTT1_instance);
MQTT1_setup(&MQTT1_instance);
pthread_t thread_MQTT1;
pthread_create( &thread_MQTT1, NULL, MQTT1_start_receiver_thread, NULL);
// End Network Initialization

scanner_var.fifo.fifo_size = 65535;
scanner_var.fifo.fifo_head = 0;
scanner_var.fifo.fifo_tail = 0;
scanner_var.fifo.fifo = &scanner_fifo_array;
init_runtime(&(scanner_var.fifo));
pthread_t thread_scanner;

notifierconnecter_var.fifo.fifo_size = 65535;
notifierconnecter_var.fifo.fifo_head = 0;
notifierconnecter_var.fifo.fifo_tail = 0;
notifierconnecter_var.fifo.fifo = &notifierconnecter_fifo_array;
init_runtime(&(notifierconnecter_var.fifo));
pthread_t thread_notifierconnecter;

bloodpressure_var.fifo.fifo_size = 65535;
bloodpressure_var.fifo.fifo_head = 0;
bloodpressure_var.fifo.fifo_tail = 0;
bloodpressure_var.fifo.fifo = &bloodpressure_fifo_array;
init_runtime(&(bloodpressure_var.fifo));
pthread_t thread_bloodpressure;

handler_var.fifo.fifo_size = 65535;
handler_var.fifo.fifo_head = 0;
handler_var.fifo.fifo_tail = 0;
handler_var.fifo.fifo = &handler_fifo_array;
init_runtime(&(handler_var.fifo));
pthread_t thread_handler;

notifier_var.fifo.fifo_size = 65535;
notifier_var.fifo.fifo_head = 0;
notifier_var.fifo.fifo_tail = 0;
notifier_var.fifo.fifo = &notifier_fifo_array;
init_runtime(&(notifier_var.fifo));
pthread_t thread_notifier;

connecter_var.fifo.fifo_size = 65535;
connecter_var.fifo.fifo_head = 0;
connecter_var.fifo.fifo_tail = 0;
connecter_var.fifo.fifo = &connecter_fifo_array;
init_runtime(&(connecter_var.fifo));
pthread_t thread_connecter;

hci_var.fifo.fifo_size = 65535;
hci_var.fifo.fifo_head = 0;
hci_var.fifo.fifo_tail = 0;
hci_var.fifo.fifo = &hci_fifo_array;
init_runtime(&(hci_var.fifo));
pthread_t thread_hci;

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

weightscale_var.fifo.fifo_size = 65535;
weightscale_var.fifo.fifo_head = 0;
weightscale_var.fifo.fifo_tail = 0;
weightscale_var.fifo.fifo = &weightscale_fifo_array;
init_runtime(&(weightscale_var.fifo));
pthread_t thread_weightscale;

hci_var.initState = -1;
HCISocketProxy_Socket_OnEntry(HCISOCKETPROXY_SOCKET_STATE, &hci_var);
pthread_create( &thread_hci, NULL, HCISocketProxyImpl_run, (void *) &hci_var);
scanner_var.initState = -1;
BLEScannerImpl_States_OnEntry(BLESCANNERIMPL_STATES_STATE, &scanner_var);
pthread_create( &thread_scanner, NULL, BLEScannerImpl_run, (void *) &scanner_var);
notifierconnecter_var.initState = -1;
BLEConnecterImpl_States_OnEntry(BLECONNECTERIMPL_STATES_STATE, &notifierconnecter_var);
pthread_create( &thread_notifierconnecter, NULL, BLEConnecterImpl_run, (void *) &notifierconnecter_var);
notifier_var.initState = -1;
BLENotifierImpl_States_OnEntry(BLENOTIFIERIMPL_STATES_STATE, &notifier_var);
pthread_create( &thread_notifier, NULL, BLENotifierImpl_run, (void *) &notifier_var);
connecter_var.initState = -1;
BLEConnecterImpl_States_OnEntry(BLECONNECTERIMPL_STATES_STATE, &connecter_var);
pthread_create( &thread_connecter, NULL, BLEConnecterImpl_run, (void *) &connecter_var);
bloodpressure_var.initState = -1;
ANDUA651BLEImpl_States_OnEntry(ANDUA651BLEIMPL_STATES_STATE, &bloodpressure_var);
pthread_create( &thread_bloodpressure, NULL, ANDUA651BLEImpl_run, (void *) &bloodpressure_var);
handler_var.initState = -1;
ExitHandler_Handler_OnEntry(EXITHANDLER_HANDLER_STATE, &handler_var);
pthread_create( &thread_handler, NULL, ExitHandler_run, (void *) &handler_var);
weightscale_var.initState = -1;
ANDUC352BLEImpl_States_OnEntry(ANDUC352BLEIMPL_STATES_STATE, &weightscale_var);
pthread_create( &thread_weightscale, NULL, ANDUC352BLEImpl_run, (void *) &weightscale_var);
initialiser_var.initState = -1;
BLEInitialiserImpl_States_OnEntry(BLEINITIALISERIMPL_STATES_STATE, &initialiser_var);
pthread_create( &thread_initialiser, NULL, BLEInitialiserImpl_run, (void *) &initialiser_var);
main_var.initState = -1;
Main_States_OnEntry(MAIN_STATES_STATE, &main_var);
pthread_create( &thread_main, NULL, Main_run, (void *) &main_var);

  pthread_join( thread_scanner, NULL);
pthread_join( thread_notifierconnecter, NULL);
pthread_join( thread_bloodpressure, NULL);
pthread_join( thread_handler, NULL);
pthread_join( thread_notifier, NULL);
pthread_join( thread_connecter, NULL);
pthread_join( thread_hci, NULL);
pthread_join( thread_main, NULL);
pthread_join( thread_initialiser, NULL);
pthread_join( thread_weightscale, NULL);

}