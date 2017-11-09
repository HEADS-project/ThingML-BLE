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
#include "ANDUA651BLEImpl.h"
#include "ANDUC352BLEImpl.h"
#include "BLEInitialiserImpl.h"
#include "BLEConnecterImpl.h"
#include "BLENotifierImpl.h"
#include "Main.h"
#include "ExitHandler.h"
#include "HCISocketProxyImpl.h"

#include "MQTT1.h"
#include "MQTT2.h"




/*****************************************************************************
 * Definitions for configuration : MedicalGW
 *****************************************************************************/

//Declaration of instance variables
//Instance scanner
// Variables for the properties of the instance
struct BLEScannerImpl_Instance scanner_var;
// Variables for the sessions of the instance
//Instance bloodpressure
// Variables for the properties of the instance
struct ANDUA651BLEImpl_Instance bloodpressure_var;
// Variables for the sessions of the instance
//Instance weightscale
// Variables for the properties of the instance
struct ANDUC352BLEImpl_Instance weightscale_var;
// Variables for the sessions of the instance
//Instance initialiser
// Variables for the properties of the instance
struct BLEInitialiserImpl_Instance initialiser_var;
// Variables for the sessions of the instance
//Instance connecter
// Variables for the properties of the instance
struct BLEConnecterImpl_Instance connecter_var;
// Variables for the sessions of the instance
//Instance notifier
// Variables for the properties of the instance
struct BLENotifierImpl_Instance notifier_var;
// Variables for the sessions of the instance
//Instance main
// Variables for the properties of the instance
struct Main_Instance main_var;
// Variables for the sessions of the instance
//Instance notifierconnecter
// Variables for the properties of the instance
struct BLEConnecterImpl_Instance notifierconnecter_var;
// Variables for the sessions of the instance
//Instance handler
// Variables for the properties of the instance
struct ExitHandler_Instance handler_var;
// Variables for the sessions of the instance
//Instance hci
// Variables for the properties of the instance
struct HCISocketProxyImpl_Instance hci_var;
// Variables for the sessions of the instance

//Instance MQTT1 for network plugin PosixMQTTPlugin
struct MQTT1_Instance MQTT1_instance;
//Instance MQTT2 for network plugin PosixMQTTPlugin
struct MQTT2_Instance MQTT2_instance;

// Enqueue of messages BLEScannerImpl::Scanner::Stopped
void enqueue_BLEScannerImpl_send_Scanner_Stopped(struct BLEScannerImpl_Instance *_instance){
fifo_lock();
if ( fifo_byte_available() > 4 ) {

_fifo_enqueue( (5 >> 8) & 0xFF );
_fifo_enqueue( 5 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_Scanner >> 8) & 0xFF );
_fifo_enqueue( _instance->id_Scanner & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages BLEScannerImpl::Scanner::Started
void enqueue_BLEScannerImpl_send_Scanner_Started(struct BLEScannerImpl_Instance *_instance){
fifo_lock();
if ( fifo_byte_available() > 4 ) {

_fifo_enqueue( (6 >> 8) & 0xFF );
_fifo_enqueue( 6 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_Scanner >> 8) & 0xFF );
_fifo_enqueue( _instance->id_Scanner & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages BLEScannerImpl::Scanner::Failure
void enqueue_BLEScannerImpl_send_Scanner_Failure(struct BLEScannerImpl_Instance *_instance){
fifo_lock();
if ( fifo_byte_available() > 4 ) {

_fifo_enqueue( (7 >> 8) & 0xFF );
_fifo_enqueue( 7 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_Scanner >> 8) & 0xFF );
_fifo_enqueue( _instance->id_Scanner & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages BLEScannerImpl::Scanner::ConnectableAdvertisement
void enqueue_BLEScannerImpl_send_Scanner_ConnectableAdvertisement(struct BLEScannerImpl_Instance *_instance, uint8_t AddressType, bdaddr_t Address){
fifo_lock();
if ( fifo_byte_available() > 11 ) {

_fifo_enqueue( (8 >> 8) & 0xFF );
_fifo_enqueue( 8 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_Scanner >> 8) & 0xFF );
_fifo_enqueue( _instance->id_Scanner & 0xFF );

// parameter AddressType
union u_AddressType_t {
uint8_t p;
byte bytebuffer[1];
} u_AddressType;
u_AddressType.p = AddressType;
_fifo_enqueue(u_AddressType.bytebuffer[0] & 0xFF );

// parameter Address
union u_Address_t {
bdaddr_t p;
byte bytebuffer[6];
} u_Address;
u_Address.p = Address;
_fifo_enqueue(u_Address.bytebuffer[5] & 0xFF );
_fifo_enqueue(u_Address.bytebuffer[4] & 0xFF );
_fifo_enqueue(u_Address.bytebuffer[3] & 0xFF );
_fifo_enqueue(u_Address.bytebuffer[2] & 0xFF );
_fifo_enqueue(u_Address.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_Address.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages BLEScannerImpl::Socket::Open
void enqueue_BLEScannerImpl_send_Socket_Open(struct BLEScannerImpl_Instance *_instance){
fifo_lock();
if ( fifo_byte_available() > 4 ) {

_fifo_enqueue( (9 >> 8) & 0xFF );
_fifo_enqueue( 9 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_Socket >> 8) & 0xFF );
_fifo_enqueue( _instance->id_Socket & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages BLEScannerImpl::Socket::Close
void enqueue_BLEScannerImpl_send_Socket_Close(struct BLEScannerImpl_Instance *_instance){
fifo_lock();
if ( fifo_byte_available() > 4 ) {

_fifo_enqueue( (10 >> 8) & 0xFF );
_fifo_enqueue( 10 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_Socket >> 8) & 0xFF );
_fifo_enqueue( _instance->id_Socket & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages BLEScannerImpl::HCICommands::SetLEAdvertisementParameters
void enqueue_BLEScannerImpl_send_HCICommands_SetLEAdvertisementParameters(struct BLEScannerImpl_Instance *_instance, uint16_t MinInterval, uint16_t MaxInterval, uint8_t Type, uint8_t OwnAddressType, uint8_t PeerAddressType, bdaddr_t PeerAddress, uint8_t Channel, uint8_t FilterPolicy){
fifo_lock();
if ( fifo_byte_available() > 19 ) {

_fifo_enqueue( (11 >> 8) & 0xFF );
_fifo_enqueue( 11 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_HCICommands >> 8) & 0xFF );
_fifo_enqueue( _instance->id_HCICommands & 0xFF );

// parameter MinInterval
union u_MinInterval_t {
uint16_t p;
byte bytebuffer[2];
} u_MinInterval;
u_MinInterval.p = MinInterval;
_fifo_enqueue(u_MinInterval.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_MinInterval.bytebuffer[0] & 0xFF );

// parameter MaxInterval
union u_MaxInterval_t {
uint16_t p;
byte bytebuffer[2];
} u_MaxInterval;
u_MaxInterval.p = MaxInterval;
_fifo_enqueue(u_MaxInterval.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_MaxInterval.bytebuffer[0] & 0xFF );

// parameter Type
union u_Type_t {
uint8_t p;
byte bytebuffer[1];
} u_Type;
u_Type.p = Type;
_fifo_enqueue(u_Type.bytebuffer[0] & 0xFF );

// parameter OwnAddressType
union u_OwnAddressType_t {
uint8_t p;
byte bytebuffer[1];
} u_OwnAddressType;
u_OwnAddressType.p = OwnAddressType;
_fifo_enqueue(u_OwnAddressType.bytebuffer[0] & 0xFF );

// parameter PeerAddressType
union u_PeerAddressType_t {
uint8_t p;
byte bytebuffer[1];
} u_PeerAddressType;
u_PeerAddressType.p = PeerAddressType;
_fifo_enqueue(u_PeerAddressType.bytebuffer[0] & 0xFF );

// parameter PeerAddress
union u_PeerAddress_t {
bdaddr_t p;
byte bytebuffer[6];
} u_PeerAddress;
u_PeerAddress.p = PeerAddress;
_fifo_enqueue(u_PeerAddress.bytebuffer[5] & 0xFF );
_fifo_enqueue(u_PeerAddress.bytebuffer[4] & 0xFF );
_fifo_enqueue(u_PeerAddress.bytebuffer[3] & 0xFF );
_fifo_enqueue(u_PeerAddress.bytebuffer[2] & 0xFF );
_fifo_enqueue(u_PeerAddress.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_PeerAddress.bytebuffer[0] & 0xFF );

// parameter Channel
union u_Channel_t {
uint8_t p;
byte bytebuffer[1];
} u_Channel;
u_Channel.p = Channel;
_fifo_enqueue(u_Channel.bytebuffer[0] & 0xFF );

// parameter FilterPolicy
union u_FilterPolicy_t {
uint8_t p;
byte bytebuffer[1];
} u_FilterPolicy;
u_FilterPolicy.p = FilterPolicy;
_fifo_enqueue(u_FilterPolicy.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages BLEScannerImpl::HCICommands::SetLEScanParameters
void enqueue_BLEScannerImpl_send_HCICommands_SetLEScanParameters(struct BLEScannerImpl_Instance *_instance, uint8_t Type, uint16_t Interval, uint16_t Window, uint8_t OwnAddressType, uint8_t FilterPolicy){
fifo_lock();
if ( fifo_byte_available() > 11 ) {

_fifo_enqueue( (12 >> 8) & 0xFF );
_fifo_enqueue( 12 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_HCICommands >> 8) & 0xFF );
_fifo_enqueue( _instance->id_HCICommands & 0xFF );

// parameter Type
union u_Type_t {
uint8_t p;
byte bytebuffer[1];
} u_Type;
u_Type.p = Type;
_fifo_enqueue(u_Type.bytebuffer[0] & 0xFF );

// parameter Interval
union u_Interval_t {
uint16_t p;
byte bytebuffer[2];
} u_Interval;
u_Interval.p = Interval;
_fifo_enqueue(u_Interval.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_Interval.bytebuffer[0] & 0xFF );

// parameter Window
union u_Window_t {
uint16_t p;
byte bytebuffer[2];
} u_Window;
u_Window.p = Window;
_fifo_enqueue(u_Window.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_Window.bytebuffer[0] & 0xFF );

// parameter OwnAddressType
union u_OwnAddressType_t {
uint8_t p;
byte bytebuffer[1];
} u_OwnAddressType;
u_OwnAddressType.p = OwnAddressType;
_fifo_enqueue(u_OwnAddressType.bytebuffer[0] & 0xFF );

// parameter FilterPolicy
union u_FilterPolicy_t {
uint8_t p;
byte bytebuffer[1];
} u_FilterPolicy;
u_FilterPolicy.p = FilterPolicy;
_fifo_enqueue(u_FilterPolicy.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages BLEScannerImpl::HCICommands::Disconnect
void enqueue_BLEScannerImpl_send_HCICommands_Disconnect(struct BLEScannerImpl_Instance *_instance, uint16_t ConnectionHandle, uint8_t Reason){
fifo_lock();
if ( fifo_byte_available() > 7 ) {

_fifo_enqueue( (13 >> 8) & 0xFF );
_fifo_enqueue( 13 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_HCICommands >> 8) & 0xFF );
_fifo_enqueue( _instance->id_HCICommands & 0xFF );

// parameter ConnectionHandle
union u_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ConnectionHandle;
u_ConnectionHandle.p = ConnectionHandle;
_fifo_enqueue(u_ConnectionHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_ConnectionHandle.bytebuffer[0] & 0xFF );

// parameter Reason
union u_Reason_t {
uint8_t p;
byte bytebuffer[1];
} u_Reason;
u_Reason.p = Reason;
_fifo_enqueue(u_Reason.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages BLEScannerImpl::HCICommands::SetEventMaskAll
void enqueue_BLEScannerImpl_send_HCICommands_SetEventMaskAll(struct BLEScannerImpl_Instance *_instance){
fifo_lock();
if ( fifo_byte_available() > 4 ) {

_fifo_enqueue( (14 >> 8) & 0xFF );
_fifo_enqueue( 14 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_HCICommands >> 8) & 0xFF );
_fifo_enqueue( _instance->id_HCICommands & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages BLEScannerImpl::HCICommands::SetLEAdvertiseEnable
void enqueue_BLEScannerImpl_send_HCICommands_SetLEAdvertiseEnable(struct BLEScannerImpl_Instance *_instance, uint8_t Enable){
fifo_lock();
if ( fifo_byte_available() > 5 ) {

_fifo_enqueue( (15 >> 8) & 0xFF );
_fifo_enqueue( 15 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_HCICommands >> 8) & 0xFF );
_fifo_enqueue( _instance->id_HCICommands & 0xFF );

// parameter Enable
union u_Enable_t {
uint8_t p;
byte bytebuffer[1];
} u_Enable;
u_Enable.p = Enable;
_fifo_enqueue(u_Enable.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages BLEScannerImpl::HCICommands::LERand
void enqueue_BLEScannerImpl_send_HCICommands_LERand(struct BLEScannerImpl_Instance *_instance){
fifo_lock();
if ( fifo_byte_available() > 4 ) {

_fifo_enqueue( (16 >> 8) & 0xFF );
_fifo_enqueue( 16 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_HCICommands >> 8) & 0xFF );
_fifo_enqueue( _instance->id_HCICommands & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages BLEScannerImpl::HCICommands::SetLEAdvertisingData
void enqueue_BLEScannerImpl_send_HCICommands_SetLEAdvertisingData(struct BLEScannerImpl_Instance *_instance, uint8_t Length, ble_adv_data_t Data){
fifo_lock();
if ( fifo_byte_available() > 36 ) {

_fifo_enqueue( (17 >> 8) & 0xFF );
_fifo_enqueue( 17 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_HCICommands >> 8) & 0xFF );
_fifo_enqueue( _instance->id_HCICommands & 0xFF );

// parameter Length
union u_Length_t {
uint8_t p;
byte bytebuffer[1];
} u_Length;
u_Length.p = Length;
_fifo_enqueue(u_Length.bytebuffer[0] & 0xFF );

// parameter Data
union u_Data_t {
ble_adv_data_t p;
byte bytebuffer[31];
} u_Data;
u_Data.p = Data;
_fifo_enqueue(u_Data.bytebuffer[30] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[29] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[28] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[27] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[26] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[25] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[24] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[23] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[22] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[21] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[20] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[19] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[18] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[17] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[16] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[15] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[14] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[13] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[12] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[11] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[10] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[9] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[8] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[7] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[6] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[5] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[4] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[3] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[2] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages BLEScannerImpl::HCICommands::SetLEEventMaskAll
void enqueue_BLEScannerImpl_send_HCICommands_SetLEEventMaskAll(struct BLEScannerImpl_Instance *_instance){
fifo_lock();
if ( fifo_byte_available() > 4 ) {

_fifo_enqueue( (18 >> 8) & 0xFF );
_fifo_enqueue( 18 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_HCICommands >> 8) & 0xFF );
_fifo_enqueue( _instance->id_HCICommands & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages BLEScannerImpl::HCICommands::LECreateConnectionCancel
void enqueue_BLEScannerImpl_send_HCICommands_LECreateConnectionCancel(struct BLEScannerImpl_Instance *_instance){
fifo_lock();
if ( fifo_byte_available() > 4 ) {

_fifo_enqueue( (19 >> 8) & 0xFF );
_fifo_enqueue( 19 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_HCICommands >> 8) & 0xFF );
_fifo_enqueue( _instance->id_HCICommands & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages BLEScannerImpl::HCICommands::LECreateConnection
void enqueue_BLEScannerImpl_send_HCICommands_LECreateConnection(struct BLEScannerImpl_Instance *_instance, uint16_t Interval, uint16_t Window, uint8_t FilterPolicy, uint8_t PeerAddressType, bdaddr_t PeerAddress, uint8_t OwnAddressType, uint16_t ConnIntervalMin, uint16_t ConnIntervalMax, uint16_t ConnLatency, uint16_t SupervisionTimeout, uint16_t CELengthMin, uint16_t CELengthMax){
fifo_lock();
if ( fifo_byte_available() > 29 ) {

_fifo_enqueue( (20 >> 8) & 0xFF );
_fifo_enqueue( 20 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_HCICommands >> 8) & 0xFF );
_fifo_enqueue( _instance->id_HCICommands & 0xFF );

// parameter Interval
union u_Interval_t {
uint16_t p;
byte bytebuffer[2];
} u_Interval;
u_Interval.p = Interval;
_fifo_enqueue(u_Interval.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_Interval.bytebuffer[0] & 0xFF );

// parameter Window
union u_Window_t {
uint16_t p;
byte bytebuffer[2];
} u_Window;
u_Window.p = Window;
_fifo_enqueue(u_Window.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_Window.bytebuffer[0] & 0xFF );

// parameter FilterPolicy
union u_FilterPolicy_t {
uint8_t p;
byte bytebuffer[1];
} u_FilterPolicy;
u_FilterPolicy.p = FilterPolicy;
_fifo_enqueue(u_FilterPolicy.bytebuffer[0] & 0xFF );

// parameter PeerAddressType
union u_PeerAddressType_t {
uint8_t p;
byte bytebuffer[1];
} u_PeerAddressType;
u_PeerAddressType.p = PeerAddressType;
_fifo_enqueue(u_PeerAddressType.bytebuffer[0] & 0xFF );

// parameter PeerAddress
union u_PeerAddress_t {
bdaddr_t p;
byte bytebuffer[6];
} u_PeerAddress;
u_PeerAddress.p = PeerAddress;
_fifo_enqueue(u_PeerAddress.bytebuffer[5] & 0xFF );
_fifo_enqueue(u_PeerAddress.bytebuffer[4] & 0xFF );
_fifo_enqueue(u_PeerAddress.bytebuffer[3] & 0xFF );
_fifo_enqueue(u_PeerAddress.bytebuffer[2] & 0xFF );
_fifo_enqueue(u_PeerAddress.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_PeerAddress.bytebuffer[0] & 0xFF );

// parameter OwnAddressType
union u_OwnAddressType_t {
uint8_t p;
byte bytebuffer[1];
} u_OwnAddressType;
u_OwnAddressType.p = OwnAddressType;
_fifo_enqueue(u_OwnAddressType.bytebuffer[0] & 0xFF );

// parameter ConnIntervalMin
union u_ConnIntervalMin_t {
uint16_t p;
byte bytebuffer[2];
} u_ConnIntervalMin;
u_ConnIntervalMin.p = ConnIntervalMin;
_fifo_enqueue(u_ConnIntervalMin.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_ConnIntervalMin.bytebuffer[0] & 0xFF );

// parameter ConnIntervalMax
union u_ConnIntervalMax_t {
uint16_t p;
byte bytebuffer[2];
} u_ConnIntervalMax;
u_ConnIntervalMax.p = ConnIntervalMax;
_fifo_enqueue(u_ConnIntervalMax.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_ConnIntervalMax.bytebuffer[0] & 0xFF );

// parameter ConnLatency
union u_ConnLatency_t {
uint16_t p;
byte bytebuffer[2];
} u_ConnLatency;
u_ConnLatency.p = ConnLatency;
_fifo_enqueue(u_ConnLatency.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_ConnLatency.bytebuffer[0] & 0xFF );

// parameter SupervisionTimeout
union u_SupervisionTimeout_t {
uint16_t p;
byte bytebuffer[2];
} u_SupervisionTimeout;
u_SupervisionTimeout.p = SupervisionTimeout;
_fifo_enqueue(u_SupervisionTimeout.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_SupervisionTimeout.bytebuffer[0] & 0xFF );

// parameter CELengthMin
union u_CELengthMin_t {
uint16_t p;
byte bytebuffer[2];
} u_CELengthMin;
u_CELengthMin.p = CELengthMin;
_fifo_enqueue(u_CELengthMin.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_CELengthMin.bytebuffer[0] & 0xFF );

// parameter CELengthMax
union u_CELengthMax_t {
uint16_t p;
byte bytebuffer[2];
} u_CELengthMax;
u_CELengthMax.p = CELengthMax;
_fifo_enqueue(u_CELengthMax.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_CELengthMax.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages BLEScannerImpl::HCICommands::LEEncrypt
void enqueue_BLEScannerImpl_send_HCICommands_LEEncrypt(struct BLEScannerImpl_Instance *_instance, ble_random_number_t Key, ble_random_number_t Plaintext){
fifo_lock();
if ( fifo_byte_available() > 36 ) {

_fifo_enqueue( (21 >> 8) & 0xFF );
_fifo_enqueue( 21 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_HCICommands >> 8) & 0xFF );
_fifo_enqueue( _instance->id_HCICommands & 0xFF );

// parameter Key
union u_Key_t {
ble_random_number_t p;
byte bytebuffer[16];
} u_Key;
u_Key.p = Key;
_fifo_enqueue(u_Key.bytebuffer[15] & 0xFF );
_fifo_enqueue(u_Key.bytebuffer[14] & 0xFF );
_fifo_enqueue(u_Key.bytebuffer[13] & 0xFF );
_fifo_enqueue(u_Key.bytebuffer[12] & 0xFF );
_fifo_enqueue(u_Key.bytebuffer[11] & 0xFF );
_fifo_enqueue(u_Key.bytebuffer[10] & 0xFF );
_fifo_enqueue(u_Key.bytebuffer[9] & 0xFF );
_fifo_enqueue(u_Key.bytebuffer[8] & 0xFF );
_fifo_enqueue(u_Key.bytebuffer[7] & 0xFF );
_fifo_enqueue(u_Key.bytebuffer[6] & 0xFF );
_fifo_enqueue(u_Key.bytebuffer[5] & 0xFF );
_fifo_enqueue(u_Key.bytebuffer[4] & 0xFF );
_fifo_enqueue(u_Key.bytebuffer[3] & 0xFF );
_fifo_enqueue(u_Key.bytebuffer[2] & 0xFF );
_fifo_enqueue(u_Key.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_Key.bytebuffer[0] & 0xFF );

// parameter Plaintext
union u_Plaintext_t {
ble_random_number_t p;
byte bytebuffer[16];
} u_Plaintext;
u_Plaintext.p = Plaintext;
_fifo_enqueue(u_Plaintext.bytebuffer[15] & 0xFF );
_fifo_enqueue(u_Plaintext.bytebuffer[14] & 0xFF );
_fifo_enqueue(u_Plaintext.bytebuffer[13] & 0xFF );
_fifo_enqueue(u_Plaintext.bytebuffer[12] & 0xFF );
_fifo_enqueue(u_Plaintext.bytebuffer[11] & 0xFF );
_fifo_enqueue(u_Plaintext.bytebuffer[10] & 0xFF );
_fifo_enqueue(u_Plaintext.bytebuffer[9] & 0xFF );
_fifo_enqueue(u_Plaintext.bytebuffer[8] & 0xFF );
_fifo_enqueue(u_Plaintext.bytebuffer[7] & 0xFF );
_fifo_enqueue(u_Plaintext.bytebuffer[6] & 0xFF );
_fifo_enqueue(u_Plaintext.bytebuffer[5] & 0xFF );
_fifo_enqueue(u_Plaintext.bytebuffer[4] & 0xFF );
_fifo_enqueue(u_Plaintext.bytebuffer[3] & 0xFF );
_fifo_enqueue(u_Plaintext.bytebuffer[2] & 0xFF );
_fifo_enqueue(u_Plaintext.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_Plaintext.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages BLEScannerImpl::HCICommands::SetEventMask
void enqueue_BLEScannerImpl_send_HCICommands_SetEventMask(struct BLEScannerImpl_Instance *_instance, set_event_mask_cp Mask){
fifo_lock();
if ( fifo_byte_available() > 12 ) {

_fifo_enqueue( (22 >> 8) & 0xFF );
_fifo_enqueue( 22 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_HCICommands >> 8) & 0xFF );
_fifo_enqueue( _instance->id_HCICommands & 0xFF );

// parameter Mask
union u_Mask_t {
set_event_mask_cp p;
byte bytebuffer[8];
} u_Mask;
u_Mask.p = Mask;
_fifo_enqueue(u_Mask.bytebuffer[7] & 0xFF );
_fifo_enqueue(u_Mask.bytebuffer[6] & 0xFF );
_fifo_enqueue(u_Mask.bytebuffer[5] & 0xFF );
_fifo_enqueue(u_Mask.bytebuffer[4] & 0xFF );
_fifo_enqueue(u_Mask.bytebuffer[3] & 0xFF );
_fifo_enqueue(u_Mask.bytebuffer[2] & 0xFF );
_fifo_enqueue(u_Mask.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_Mask.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages BLEScannerImpl::HCICommands::SetLocalName
void enqueue_BLEScannerImpl_send_HCICommands_SetLocalName(struct BLEScannerImpl_Instance *_instance, change_local_name_cp Name){
fifo_lock();
if ( fifo_byte_available() > 252 ) {

_fifo_enqueue( (23 >> 8) & 0xFF );
_fifo_enqueue( 23 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_HCICommands >> 8) & 0xFF );
_fifo_enqueue( _instance->id_HCICommands & 0xFF );

// parameter Name
union u_Name_t {
change_local_name_cp p;
byte bytebuffer[248];
} u_Name;
u_Name.p = Name;
_fifo_enqueue(u_Name.bytebuffer[247] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[246] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[245] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[244] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[243] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[242] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[241] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[240] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[239] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[238] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[237] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[236] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[235] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[234] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[233] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[232] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[231] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[230] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[229] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[228] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[227] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[226] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[225] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[224] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[223] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[222] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[221] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[220] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[219] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[218] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[217] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[216] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[215] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[214] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[213] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[212] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[211] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[210] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[209] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[208] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[207] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[206] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[205] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[204] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[203] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[202] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[201] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[200] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[199] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[198] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[197] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[196] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[195] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[194] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[193] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[192] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[191] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[190] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[189] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[188] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[187] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[186] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[185] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[184] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[183] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[182] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[181] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[180] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[179] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[178] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[177] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[176] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[175] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[174] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[173] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[172] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[171] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[170] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[169] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[168] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[167] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[166] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[165] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[164] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[163] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[162] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[161] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[160] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[159] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[158] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[157] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[156] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[155] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[154] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[153] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[152] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[151] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[150] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[149] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[148] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[147] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[146] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[145] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[144] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[143] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[142] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[141] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[140] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[139] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[138] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[137] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[136] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[135] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[134] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[133] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[132] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[131] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[130] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[129] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[128] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[127] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[126] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[125] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[124] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[123] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[122] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[121] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[120] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[119] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[118] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[117] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[116] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[115] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[114] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[113] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[112] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[111] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[110] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[109] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[108] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[107] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[106] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[105] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[104] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[103] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[102] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[101] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[100] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[99] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[98] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[97] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[96] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[95] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[94] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[93] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[92] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[91] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[90] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[89] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[88] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[87] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[86] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[85] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[84] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[83] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[82] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[81] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[80] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[79] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[78] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[77] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[76] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[75] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[74] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[73] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[72] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[71] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[70] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[69] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[68] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[67] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[66] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[65] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[64] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[63] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[62] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[61] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[60] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[59] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[58] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[57] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[56] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[55] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[54] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[53] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[52] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[51] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[50] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[49] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[48] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[47] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[46] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[45] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[44] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[43] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[42] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[41] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[40] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[39] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[38] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[37] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[36] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[35] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[34] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[33] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[32] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[31] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[30] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[29] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[28] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[27] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[26] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[25] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[24] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[23] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[22] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[21] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[20] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[19] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[18] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[17] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[16] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[15] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[14] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[13] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[12] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[11] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[10] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[9] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[8] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[7] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[6] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[5] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[4] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[3] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[2] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages BLEScannerImpl::HCICommands::Reset
void enqueue_BLEScannerImpl_send_HCICommands_Reset(struct BLEScannerImpl_Instance *_instance){
fifo_lock();
if ( fifo_byte_available() > 4 ) {

_fifo_enqueue( (24 >> 8) & 0xFF );
_fifo_enqueue( 24 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_HCICommands >> 8) & 0xFF );
_fifo_enqueue( _instance->id_HCICommands & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages BLEScannerImpl::HCICommands::LEStartEncryption
void enqueue_BLEScannerImpl_send_HCICommands_LEStartEncryption(struct BLEScannerImpl_Instance *_instance, uint16_t ConnectionHandle, ble_random_part_t Random, uint16_t EDIV, ble_random_number_t LTK){
fifo_lock();
if ( fifo_byte_available() > 32 ) {

_fifo_enqueue( (25 >> 8) & 0xFF );
_fifo_enqueue( 25 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_HCICommands >> 8) & 0xFF );
_fifo_enqueue( _instance->id_HCICommands & 0xFF );

// parameter ConnectionHandle
union u_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ConnectionHandle;
u_ConnectionHandle.p = ConnectionHandle;
_fifo_enqueue(u_ConnectionHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_ConnectionHandle.bytebuffer[0] & 0xFF );

// parameter Random
union u_Random_t {
ble_random_part_t p;
byte bytebuffer[8];
} u_Random;
u_Random.p = Random;
_fifo_enqueue(u_Random.bytebuffer[7] & 0xFF );
_fifo_enqueue(u_Random.bytebuffer[6] & 0xFF );
_fifo_enqueue(u_Random.bytebuffer[5] & 0xFF );
_fifo_enqueue(u_Random.bytebuffer[4] & 0xFF );
_fifo_enqueue(u_Random.bytebuffer[3] & 0xFF );
_fifo_enqueue(u_Random.bytebuffer[2] & 0xFF );
_fifo_enqueue(u_Random.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_Random.bytebuffer[0] & 0xFF );

// parameter EDIV
union u_EDIV_t {
uint16_t p;
byte bytebuffer[2];
} u_EDIV;
u_EDIV.p = EDIV;
_fifo_enqueue(u_EDIV.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_EDIV.bytebuffer[0] & 0xFF );

// parameter LTK
union u_LTK_t {
ble_random_number_t p;
byte bytebuffer[16];
} u_LTK;
u_LTK.p = LTK;
_fifo_enqueue(u_LTK.bytebuffer[15] & 0xFF );
_fifo_enqueue(u_LTK.bytebuffer[14] & 0xFF );
_fifo_enqueue(u_LTK.bytebuffer[13] & 0xFF );
_fifo_enqueue(u_LTK.bytebuffer[12] & 0xFF );
_fifo_enqueue(u_LTK.bytebuffer[11] & 0xFF );
_fifo_enqueue(u_LTK.bytebuffer[10] & 0xFF );
_fifo_enqueue(u_LTK.bytebuffer[9] & 0xFF );
_fifo_enqueue(u_LTK.bytebuffer[8] & 0xFF );
_fifo_enqueue(u_LTK.bytebuffer[7] & 0xFF );
_fifo_enqueue(u_LTK.bytebuffer[6] & 0xFF );
_fifo_enqueue(u_LTK.bytebuffer[5] & 0xFF );
_fifo_enqueue(u_LTK.bytebuffer[4] & 0xFF );
_fifo_enqueue(u_LTK.bytebuffer[3] & 0xFF );
_fifo_enqueue(u_LTK.bytebuffer[2] & 0xFF );
_fifo_enqueue(u_LTK.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_LTK.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages BLEScannerImpl::HCICommands::SetLEScanEnable
void enqueue_BLEScannerImpl_send_HCICommands_SetLEScanEnable(struct BLEScannerImpl_Instance *_instance, uint8_t Enable, uint8_t FilterDuplicates){
fifo_lock();
if ( fifo_byte_available() > 6 ) {

_fifo_enqueue( (26 >> 8) & 0xFF );
_fifo_enqueue( 26 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_HCICommands >> 8) & 0xFF );
_fifo_enqueue( _instance->id_HCICommands & 0xFF );

// parameter Enable
union u_Enable_t {
uint8_t p;
byte bytebuffer[1];
} u_Enable;
u_Enable.p = Enable;
_fifo_enqueue(u_Enable.bytebuffer[0] & 0xFF );

// parameter FilterDuplicates
union u_FilterDuplicates_t {
uint8_t p;
byte bytebuffer[1];
} u_FilterDuplicates;
u_FilterDuplicates.p = FilterDuplicates;
_fifo_enqueue(u_FilterDuplicates.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages BLEScannerImpl::HCICommands::SetLEEventMask
void enqueue_BLEScannerImpl_send_HCICommands_SetLEEventMask(struct BLEScannerImpl_Instance *_instance, set_event_mask_cp Mask){
fifo_lock();
if ( fifo_byte_available() > 12 ) {

_fifo_enqueue( (27 >> 8) & 0xFF );
_fifo_enqueue( 27 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_HCICommands >> 8) & 0xFF );
_fifo_enqueue( _instance->id_HCICommands & 0xFF );

// parameter Mask
union u_Mask_t {
set_event_mask_cp p;
byte bytebuffer[8];
} u_Mask;
u_Mask.p = Mask;
_fifo_enqueue(u_Mask.bytebuffer[7] & 0xFF );
_fifo_enqueue(u_Mask.bytebuffer[6] & 0xFF );
_fifo_enqueue(u_Mask.bytebuffer[5] & 0xFF );
_fifo_enqueue(u_Mask.bytebuffer[4] & 0xFF );
_fifo_enqueue(u_Mask.bytebuffer[3] & 0xFF );
_fifo_enqueue(u_Mask.bytebuffer[2] & 0xFF );
_fifo_enqueue(u_Mask.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_Mask.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages BLEScannerImpl::HCICommands::SetLEScanResponseData
void enqueue_BLEScannerImpl_send_HCICommands_SetLEScanResponseData(struct BLEScannerImpl_Instance *_instance, uint8_t Length, ble_adv_data_t Data){
fifo_lock();
if ( fifo_byte_available() > 36 ) {

_fifo_enqueue( (28 >> 8) & 0xFF );
_fifo_enqueue( 28 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_HCICommands >> 8) & 0xFF );
_fifo_enqueue( _instance->id_HCICommands & 0xFF );

// parameter Length
union u_Length_t {
uint8_t p;
byte bytebuffer[1];
} u_Length;
u_Length.p = Length;
_fifo_enqueue(u_Length.bytebuffer[0] & 0xFF );

// parameter Data
union u_Data_t {
ble_adv_data_t p;
byte bytebuffer[31];
} u_Data;
u_Data.p = Data;
_fifo_enqueue(u_Data.bytebuffer[30] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[29] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[28] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[27] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[26] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[25] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[24] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[23] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[22] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[21] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[20] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[19] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[18] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[17] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[16] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[15] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[14] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[13] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[12] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[11] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[10] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[9] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[8] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[7] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[6] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[5] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[4] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[3] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[2] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages BLEScannerImpl::SMP::SMPPairingRequest
void enqueue_BLEScannerImpl_send_SMP_SMPPairingRequest(struct BLEScannerImpl_Instance *_instance, uint16_t Handle, uint8_t IOCapability, uint8_t OOBDataPresent, uint8_t Bonding, uint8_t MITM, uint8_t SecureConnection, uint8_t Keypress, uint8_t MaximumEncryptionKeySize, uint8_t InitiatorKeyDistribution, uint8_t ResponderKeyDistribution){
fifo_lock();
if ( fifo_byte_available() > 15 ) {

_fifo_enqueue( (29 >> 8) & 0xFF );
_fifo_enqueue( 29 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_SMP >> 8) & 0xFF );
_fifo_enqueue( _instance->id_SMP & 0xFF );

// parameter Handle
union u_Handle_t {
uint16_t p;
byte bytebuffer[2];
} u_Handle;
u_Handle.p = Handle;
_fifo_enqueue(u_Handle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_Handle.bytebuffer[0] & 0xFF );

// parameter IOCapability
union u_IOCapability_t {
uint8_t p;
byte bytebuffer[1];
} u_IOCapability;
u_IOCapability.p = IOCapability;
_fifo_enqueue(u_IOCapability.bytebuffer[0] & 0xFF );

// parameter OOBDataPresent
union u_OOBDataPresent_t {
uint8_t p;
byte bytebuffer[1];
} u_OOBDataPresent;
u_OOBDataPresent.p = OOBDataPresent;
_fifo_enqueue(u_OOBDataPresent.bytebuffer[0] & 0xFF );

// parameter Bonding
union u_Bonding_t {
uint8_t p;
byte bytebuffer[1];
} u_Bonding;
u_Bonding.p = Bonding;
_fifo_enqueue(u_Bonding.bytebuffer[0] & 0xFF );

// parameter MITM
union u_MITM_t {
uint8_t p;
byte bytebuffer[1];
} u_MITM;
u_MITM.p = MITM;
_fifo_enqueue(u_MITM.bytebuffer[0] & 0xFF );

// parameter SecureConnection
union u_SecureConnection_t {
uint8_t p;
byte bytebuffer[1];
} u_SecureConnection;
u_SecureConnection.p = SecureConnection;
_fifo_enqueue(u_SecureConnection.bytebuffer[0] & 0xFF );

// parameter Keypress
union u_Keypress_t {
uint8_t p;
byte bytebuffer[1];
} u_Keypress;
u_Keypress.p = Keypress;
_fifo_enqueue(u_Keypress.bytebuffer[0] & 0xFF );

// parameter MaximumEncryptionKeySize
union u_MaximumEncryptionKeySize_t {
uint8_t p;
byte bytebuffer[1];
} u_MaximumEncryptionKeySize;
u_MaximumEncryptionKeySize.p = MaximumEncryptionKeySize;
_fifo_enqueue(u_MaximumEncryptionKeySize.bytebuffer[0] & 0xFF );

// parameter InitiatorKeyDistribution
union u_InitiatorKeyDistribution_t {
uint8_t p;
byte bytebuffer[1];
} u_InitiatorKeyDistribution;
u_InitiatorKeyDistribution.p = InitiatorKeyDistribution;
_fifo_enqueue(u_InitiatorKeyDistribution.bytebuffer[0] & 0xFF );

// parameter ResponderKeyDistribution
union u_ResponderKeyDistribution_t {
uint8_t p;
byte bytebuffer[1];
} u_ResponderKeyDistribution;
u_ResponderKeyDistribution.p = ResponderKeyDistribution;
_fifo_enqueue(u_ResponderKeyDistribution.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages BLEScannerImpl::SMP::SMPPairingDHKeyCheck
void enqueue_BLEScannerImpl_send_SMP_SMPPairingDHKeyCheck(struct BLEScannerImpl_Instance *_instance, uint16_t Handle, ble_random_number_t DHKeyCheck){
fifo_lock();
if ( fifo_byte_available() > 22 ) {

_fifo_enqueue( (30 >> 8) & 0xFF );
_fifo_enqueue( 30 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_SMP >> 8) & 0xFF );
_fifo_enqueue( _instance->id_SMP & 0xFF );

// parameter Handle
union u_Handle_t {
uint16_t p;
byte bytebuffer[2];
} u_Handle;
u_Handle.p = Handle;
_fifo_enqueue(u_Handle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_Handle.bytebuffer[0] & 0xFF );

// parameter DHKeyCheck
union u_DHKeyCheck_t {
ble_random_number_t p;
byte bytebuffer[16];
} u_DHKeyCheck;
u_DHKeyCheck.p = DHKeyCheck;
_fifo_enqueue(u_DHKeyCheck.bytebuffer[15] & 0xFF );
_fifo_enqueue(u_DHKeyCheck.bytebuffer[14] & 0xFF );
_fifo_enqueue(u_DHKeyCheck.bytebuffer[13] & 0xFF );
_fifo_enqueue(u_DHKeyCheck.bytebuffer[12] & 0xFF );
_fifo_enqueue(u_DHKeyCheck.bytebuffer[11] & 0xFF );
_fifo_enqueue(u_DHKeyCheck.bytebuffer[10] & 0xFF );
_fifo_enqueue(u_DHKeyCheck.bytebuffer[9] & 0xFF );
_fifo_enqueue(u_DHKeyCheck.bytebuffer[8] & 0xFF );
_fifo_enqueue(u_DHKeyCheck.bytebuffer[7] & 0xFF );
_fifo_enqueue(u_DHKeyCheck.bytebuffer[6] & 0xFF );
_fifo_enqueue(u_DHKeyCheck.bytebuffer[5] & 0xFF );
_fifo_enqueue(u_DHKeyCheck.bytebuffer[4] & 0xFF );
_fifo_enqueue(u_DHKeyCheck.bytebuffer[3] & 0xFF );
_fifo_enqueue(u_DHKeyCheck.bytebuffer[2] & 0xFF );
_fifo_enqueue(u_DHKeyCheck.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_DHKeyCheck.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages BLEScannerImpl::SMP::SMPEncryptionInformation
void enqueue_BLEScannerImpl_send_SMP_SMPEncryptionInformation(struct BLEScannerImpl_Instance *_instance, uint16_t Handle, ble_random_number_t LongTermKey){
fifo_lock();
if ( fifo_byte_available() > 22 ) {

_fifo_enqueue( (31 >> 8) & 0xFF );
_fifo_enqueue( 31 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_SMP >> 8) & 0xFF );
_fifo_enqueue( _instance->id_SMP & 0xFF );

// parameter Handle
union u_Handle_t {
uint16_t p;
byte bytebuffer[2];
} u_Handle;
u_Handle.p = Handle;
_fifo_enqueue(u_Handle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_Handle.bytebuffer[0] & 0xFF );

// parameter LongTermKey
union u_LongTermKey_t {
ble_random_number_t p;
byte bytebuffer[16];
} u_LongTermKey;
u_LongTermKey.p = LongTermKey;
_fifo_enqueue(u_LongTermKey.bytebuffer[15] & 0xFF );
_fifo_enqueue(u_LongTermKey.bytebuffer[14] & 0xFF );
_fifo_enqueue(u_LongTermKey.bytebuffer[13] & 0xFF );
_fifo_enqueue(u_LongTermKey.bytebuffer[12] & 0xFF );
_fifo_enqueue(u_LongTermKey.bytebuffer[11] & 0xFF );
_fifo_enqueue(u_LongTermKey.bytebuffer[10] & 0xFF );
_fifo_enqueue(u_LongTermKey.bytebuffer[9] & 0xFF );
_fifo_enqueue(u_LongTermKey.bytebuffer[8] & 0xFF );
_fifo_enqueue(u_LongTermKey.bytebuffer[7] & 0xFF );
_fifo_enqueue(u_LongTermKey.bytebuffer[6] & 0xFF );
_fifo_enqueue(u_LongTermKey.bytebuffer[5] & 0xFF );
_fifo_enqueue(u_LongTermKey.bytebuffer[4] & 0xFF );
_fifo_enqueue(u_LongTermKey.bytebuffer[3] & 0xFF );
_fifo_enqueue(u_LongTermKey.bytebuffer[2] & 0xFF );
_fifo_enqueue(u_LongTermKey.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_LongTermKey.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages BLEScannerImpl::SMP::SMPPairingConfirm
void enqueue_BLEScannerImpl_send_SMP_SMPPairingConfirm(struct BLEScannerImpl_Instance *_instance, uint16_t Handle, ble_random_number_t ConfirmValue){
fifo_lock();
if ( fifo_byte_available() > 22 ) {

_fifo_enqueue( (32 >> 8) & 0xFF );
_fifo_enqueue( 32 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_SMP >> 8) & 0xFF );
_fifo_enqueue( _instance->id_SMP & 0xFF );

// parameter Handle
union u_Handle_t {
uint16_t p;
byte bytebuffer[2];
} u_Handle;
u_Handle.p = Handle;
_fifo_enqueue(u_Handle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_Handle.bytebuffer[0] & 0xFF );

// parameter ConfirmValue
union u_ConfirmValue_t {
ble_random_number_t p;
byte bytebuffer[16];
} u_ConfirmValue;
u_ConfirmValue.p = ConfirmValue;
_fifo_enqueue(u_ConfirmValue.bytebuffer[15] & 0xFF );
_fifo_enqueue(u_ConfirmValue.bytebuffer[14] & 0xFF );
_fifo_enqueue(u_ConfirmValue.bytebuffer[13] & 0xFF );
_fifo_enqueue(u_ConfirmValue.bytebuffer[12] & 0xFF );
_fifo_enqueue(u_ConfirmValue.bytebuffer[11] & 0xFF );
_fifo_enqueue(u_ConfirmValue.bytebuffer[10] & 0xFF );
_fifo_enqueue(u_ConfirmValue.bytebuffer[9] & 0xFF );
_fifo_enqueue(u_ConfirmValue.bytebuffer[8] & 0xFF );
_fifo_enqueue(u_ConfirmValue.bytebuffer[7] & 0xFF );
_fifo_enqueue(u_ConfirmValue.bytebuffer[6] & 0xFF );
_fifo_enqueue(u_ConfirmValue.bytebuffer[5] & 0xFF );
_fifo_enqueue(u_ConfirmValue.bytebuffer[4] & 0xFF );
_fifo_enqueue(u_ConfirmValue.bytebuffer[3] & 0xFF );
_fifo_enqueue(u_ConfirmValue.bytebuffer[2] & 0xFF );
_fifo_enqueue(u_ConfirmValue.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_ConfirmValue.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages BLEScannerImpl::SMP::SMPSecurityRequest
void enqueue_BLEScannerImpl_send_SMP_SMPSecurityRequest(struct BLEScannerImpl_Instance *_instance, uint16_t Handle, uint8_t Bonding, uint8_t MITM, uint8_t SecureConnection, uint8_t Keypress){
fifo_lock();
if ( fifo_byte_available() > 10 ) {

_fifo_enqueue( (33 >> 8) & 0xFF );
_fifo_enqueue( 33 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_SMP >> 8) & 0xFF );
_fifo_enqueue( _instance->id_SMP & 0xFF );

// parameter Handle
union u_Handle_t {
uint16_t p;
byte bytebuffer[2];
} u_Handle;
u_Handle.p = Handle;
_fifo_enqueue(u_Handle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_Handle.bytebuffer[0] & 0xFF );

// parameter Bonding
union u_Bonding_t {
uint8_t p;
byte bytebuffer[1];
} u_Bonding;
u_Bonding.p = Bonding;
_fifo_enqueue(u_Bonding.bytebuffer[0] & 0xFF );

// parameter MITM
union u_MITM_t {
uint8_t p;
byte bytebuffer[1];
} u_MITM;
u_MITM.p = MITM;
_fifo_enqueue(u_MITM.bytebuffer[0] & 0xFF );

// parameter SecureConnection
union u_SecureConnection_t {
uint8_t p;
byte bytebuffer[1];
} u_SecureConnection;
u_SecureConnection.p = SecureConnection;
_fifo_enqueue(u_SecureConnection.bytebuffer[0] & 0xFF );

// parameter Keypress
union u_Keypress_t {
uint8_t p;
byte bytebuffer[1];
} u_Keypress;
u_Keypress.p = Keypress;
_fifo_enqueue(u_Keypress.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages BLEScannerImpl::SMP::SMPPairingFailed
void enqueue_BLEScannerImpl_send_SMP_SMPPairingFailed(struct BLEScannerImpl_Instance *_instance, uint16_t Handle, uint8_t Reason){
fifo_lock();
if ( fifo_byte_available() > 7 ) {

_fifo_enqueue( (34 >> 8) & 0xFF );
_fifo_enqueue( 34 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_SMP >> 8) & 0xFF );
_fifo_enqueue( _instance->id_SMP & 0xFF );

// parameter Handle
union u_Handle_t {
uint16_t p;
byte bytebuffer[2];
} u_Handle;
u_Handle.p = Handle;
_fifo_enqueue(u_Handle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_Handle.bytebuffer[0] & 0xFF );

// parameter Reason
union u_Reason_t {
uint8_t p;
byte bytebuffer[1];
} u_Reason;
u_Reason.p = Reason;
_fifo_enqueue(u_Reason.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages BLEScannerImpl::SMP::SMPPairingPublicKey
void enqueue_BLEScannerImpl_send_SMP_SMPPairingPublicKey(struct BLEScannerImpl_Instance *_instance, uint16_t Handle, smp_public_key_t KeyX, smp_public_key_t KeyY){
fifo_lock();
if ( fifo_byte_available() > 70 ) {

_fifo_enqueue( (35 >> 8) & 0xFF );
_fifo_enqueue( 35 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_SMP >> 8) & 0xFF );
_fifo_enqueue( _instance->id_SMP & 0xFF );

// parameter Handle
union u_Handle_t {
uint16_t p;
byte bytebuffer[2];
} u_Handle;
u_Handle.p = Handle;
_fifo_enqueue(u_Handle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_Handle.bytebuffer[0] & 0xFF );

// parameter KeyX
union u_KeyX_t {
smp_public_key_t p;
byte bytebuffer[32];
} u_KeyX;
u_KeyX.p = KeyX;
_fifo_enqueue(u_KeyX.bytebuffer[31] & 0xFF );
_fifo_enqueue(u_KeyX.bytebuffer[30] & 0xFF );
_fifo_enqueue(u_KeyX.bytebuffer[29] & 0xFF );
_fifo_enqueue(u_KeyX.bytebuffer[28] & 0xFF );
_fifo_enqueue(u_KeyX.bytebuffer[27] & 0xFF );
_fifo_enqueue(u_KeyX.bytebuffer[26] & 0xFF );
_fifo_enqueue(u_KeyX.bytebuffer[25] & 0xFF );
_fifo_enqueue(u_KeyX.bytebuffer[24] & 0xFF );
_fifo_enqueue(u_KeyX.bytebuffer[23] & 0xFF );
_fifo_enqueue(u_KeyX.bytebuffer[22] & 0xFF );
_fifo_enqueue(u_KeyX.bytebuffer[21] & 0xFF );
_fifo_enqueue(u_KeyX.bytebuffer[20] & 0xFF );
_fifo_enqueue(u_KeyX.bytebuffer[19] & 0xFF );
_fifo_enqueue(u_KeyX.bytebuffer[18] & 0xFF );
_fifo_enqueue(u_KeyX.bytebuffer[17] & 0xFF );
_fifo_enqueue(u_KeyX.bytebuffer[16] & 0xFF );
_fifo_enqueue(u_KeyX.bytebuffer[15] & 0xFF );
_fifo_enqueue(u_KeyX.bytebuffer[14] & 0xFF );
_fifo_enqueue(u_KeyX.bytebuffer[13] & 0xFF );
_fifo_enqueue(u_KeyX.bytebuffer[12] & 0xFF );
_fifo_enqueue(u_KeyX.bytebuffer[11] & 0xFF );
_fifo_enqueue(u_KeyX.bytebuffer[10] & 0xFF );
_fifo_enqueue(u_KeyX.bytebuffer[9] & 0xFF );
_fifo_enqueue(u_KeyX.bytebuffer[8] & 0xFF );
_fifo_enqueue(u_KeyX.bytebuffer[7] & 0xFF );
_fifo_enqueue(u_KeyX.bytebuffer[6] & 0xFF );
_fifo_enqueue(u_KeyX.bytebuffer[5] & 0xFF );
_fifo_enqueue(u_KeyX.bytebuffer[4] & 0xFF );
_fifo_enqueue(u_KeyX.bytebuffer[3] & 0xFF );
_fifo_enqueue(u_KeyX.bytebuffer[2] & 0xFF );
_fifo_enqueue(u_KeyX.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_KeyX.bytebuffer[0] & 0xFF );

// parameter KeyY
union u_KeyY_t {
smp_public_key_t p;
byte bytebuffer[32];
} u_KeyY;
u_KeyY.p = KeyY;
_fifo_enqueue(u_KeyY.bytebuffer[31] & 0xFF );
_fifo_enqueue(u_KeyY.bytebuffer[30] & 0xFF );
_fifo_enqueue(u_KeyY.bytebuffer[29] & 0xFF );
_fifo_enqueue(u_KeyY.bytebuffer[28] & 0xFF );
_fifo_enqueue(u_KeyY.bytebuffer[27] & 0xFF );
_fifo_enqueue(u_KeyY.bytebuffer[26] & 0xFF );
_fifo_enqueue(u_KeyY.bytebuffer[25] & 0xFF );
_fifo_enqueue(u_KeyY.bytebuffer[24] & 0xFF );
_fifo_enqueue(u_KeyY.bytebuffer[23] & 0xFF );
_fifo_enqueue(u_KeyY.bytebuffer[22] & 0xFF );
_fifo_enqueue(u_KeyY.bytebuffer[21] & 0xFF );
_fifo_enqueue(u_KeyY.bytebuffer[20] & 0xFF );
_fifo_enqueue(u_KeyY.bytebuffer[19] & 0xFF );
_fifo_enqueue(u_KeyY.bytebuffer[18] & 0xFF );
_fifo_enqueue(u_KeyY.bytebuffer[17] & 0xFF );
_fifo_enqueue(u_KeyY.bytebuffer[16] & 0xFF );
_fifo_enqueue(u_KeyY.bytebuffer[15] & 0xFF );
_fifo_enqueue(u_KeyY.bytebuffer[14] & 0xFF );
_fifo_enqueue(u_KeyY.bytebuffer[13] & 0xFF );
_fifo_enqueue(u_KeyY.bytebuffer[12] & 0xFF );
_fifo_enqueue(u_KeyY.bytebuffer[11] & 0xFF );
_fifo_enqueue(u_KeyY.bytebuffer[10] & 0xFF );
_fifo_enqueue(u_KeyY.bytebuffer[9] & 0xFF );
_fifo_enqueue(u_KeyY.bytebuffer[8] & 0xFF );
_fifo_enqueue(u_KeyY.bytebuffer[7] & 0xFF );
_fifo_enqueue(u_KeyY.bytebuffer[6] & 0xFF );
_fifo_enqueue(u_KeyY.bytebuffer[5] & 0xFF );
_fifo_enqueue(u_KeyY.bytebuffer[4] & 0xFF );
_fifo_enqueue(u_KeyY.bytebuffer[3] & 0xFF );
_fifo_enqueue(u_KeyY.bytebuffer[2] & 0xFF );
_fifo_enqueue(u_KeyY.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_KeyY.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages BLEScannerImpl::SMP::SMPIdentityAddressInformation
void enqueue_BLEScannerImpl_send_SMP_SMPIdentityAddressInformation(struct BLEScannerImpl_Instance *_instance, uint16_t Handle, uint8_t AddressType, bdaddr_t Address){
fifo_lock();
if ( fifo_byte_available() > 13 ) {

_fifo_enqueue( (36 >> 8) & 0xFF );
_fifo_enqueue( 36 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_SMP >> 8) & 0xFF );
_fifo_enqueue( _instance->id_SMP & 0xFF );

// parameter Handle
union u_Handle_t {
uint16_t p;
byte bytebuffer[2];
} u_Handle;
u_Handle.p = Handle;
_fifo_enqueue(u_Handle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_Handle.bytebuffer[0] & 0xFF );

// parameter AddressType
union u_AddressType_t {
uint8_t p;
byte bytebuffer[1];
} u_AddressType;
u_AddressType.p = AddressType;
_fifo_enqueue(u_AddressType.bytebuffer[0] & 0xFF );

// parameter Address
union u_Address_t {
bdaddr_t p;
byte bytebuffer[6];
} u_Address;
u_Address.p = Address;
_fifo_enqueue(u_Address.bytebuffer[5] & 0xFF );
_fifo_enqueue(u_Address.bytebuffer[4] & 0xFF );
_fifo_enqueue(u_Address.bytebuffer[3] & 0xFF );
_fifo_enqueue(u_Address.bytebuffer[2] & 0xFF );
_fifo_enqueue(u_Address.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_Address.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages BLEScannerImpl::SMP::SMPPairingRandom
void enqueue_BLEScannerImpl_send_SMP_SMPPairingRandom(struct BLEScannerImpl_Instance *_instance, uint16_t Handle, ble_random_number_t RandomValue){
fifo_lock();
if ( fifo_byte_available() > 22 ) {

_fifo_enqueue( (37 >> 8) & 0xFF );
_fifo_enqueue( 37 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_SMP >> 8) & 0xFF );
_fifo_enqueue( _instance->id_SMP & 0xFF );

// parameter Handle
union u_Handle_t {
uint16_t p;
byte bytebuffer[2];
} u_Handle;
u_Handle.p = Handle;
_fifo_enqueue(u_Handle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_Handle.bytebuffer[0] & 0xFF );

// parameter RandomValue
union u_RandomValue_t {
ble_random_number_t p;
byte bytebuffer[16];
} u_RandomValue;
u_RandomValue.p = RandomValue;
_fifo_enqueue(u_RandomValue.bytebuffer[15] & 0xFF );
_fifo_enqueue(u_RandomValue.bytebuffer[14] & 0xFF );
_fifo_enqueue(u_RandomValue.bytebuffer[13] & 0xFF );
_fifo_enqueue(u_RandomValue.bytebuffer[12] & 0xFF );
_fifo_enqueue(u_RandomValue.bytebuffer[11] & 0xFF );
_fifo_enqueue(u_RandomValue.bytebuffer[10] & 0xFF );
_fifo_enqueue(u_RandomValue.bytebuffer[9] & 0xFF );
_fifo_enqueue(u_RandomValue.bytebuffer[8] & 0xFF );
_fifo_enqueue(u_RandomValue.bytebuffer[7] & 0xFF );
_fifo_enqueue(u_RandomValue.bytebuffer[6] & 0xFF );
_fifo_enqueue(u_RandomValue.bytebuffer[5] & 0xFF );
_fifo_enqueue(u_RandomValue.bytebuffer[4] & 0xFF );
_fifo_enqueue(u_RandomValue.bytebuffer[3] & 0xFF );
_fifo_enqueue(u_RandomValue.bytebuffer[2] & 0xFF );
_fifo_enqueue(u_RandomValue.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_RandomValue.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages BLEScannerImpl::SMP::SMPMasterIdentification
void enqueue_BLEScannerImpl_send_SMP_SMPMasterIdentification(struct BLEScannerImpl_Instance *_instance, uint16_t Handle, uint16_t EDIV, ble_random_part_t Rand){
fifo_lock();
if ( fifo_byte_available() > 16 ) {

_fifo_enqueue( (38 >> 8) & 0xFF );
_fifo_enqueue( 38 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_SMP >> 8) & 0xFF );
_fifo_enqueue( _instance->id_SMP & 0xFF );

// parameter Handle
union u_Handle_t {
uint16_t p;
byte bytebuffer[2];
} u_Handle;
u_Handle.p = Handle;
_fifo_enqueue(u_Handle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_Handle.bytebuffer[0] & 0xFF );

// parameter EDIV
union u_EDIV_t {
uint16_t p;
byte bytebuffer[2];
} u_EDIV;
u_EDIV.p = EDIV;
_fifo_enqueue(u_EDIV.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_EDIV.bytebuffer[0] & 0xFF );

// parameter Rand
union u_Rand_t {
ble_random_part_t p;
byte bytebuffer[8];
} u_Rand;
u_Rand.p = Rand;
_fifo_enqueue(u_Rand.bytebuffer[7] & 0xFF );
_fifo_enqueue(u_Rand.bytebuffer[6] & 0xFF );
_fifo_enqueue(u_Rand.bytebuffer[5] & 0xFF );
_fifo_enqueue(u_Rand.bytebuffer[4] & 0xFF );
_fifo_enqueue(u_Rand.bytebuffer[3] & 0xFF );
_fifo_enqueue(u_Rand.bytebuffer[2] & 0xFF );
_fifo_enqueue(u_Rand.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_Rand.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages BLEScannerImpl::SMP::SMPPairingResponse
void enqueue_BLEScannerImpl_send_SMP_SMPPairingResponse(struct BLEScannerImpl_Instance *_instance, uint16_t Handle, uint8_t IOCapability, uint8_t OOBDataPresent, uint8_t Bonding, uint8_t MITM, uint8_t SecureConnection, uint8_t Keypress, uint8_t MaximumEncryptionKeySize, uint8_t InitiatorKeyDistribution, uint8_t ResponderKeyDistribution){
fifo_lock();
if ( fifo_byte_available() > 15 ) {

_fifo_enqueue( (39 >> 8) & 0xFF );
_fifo_enqueue( 39 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_SMP >> 8) & 0xFF );
_fifo_enqueue( _instance->id_SMP & 0xFF );

// parameter Handle
union u_Handle_t {
uint16_t p;
byte bytebuffer[2];
} u_Handle;
u_Handle.p = Handle;
_fifo_enqueue(u_Handle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_Handle.bytebuffer[0] & 0xFF );

// parameter IOCapability
union u_IOCapability_t {
uint8_t p;
byte bytebuffer[1];
} u_IOCapability;
u_IOCapability.p = IOCapability;
_fifo_enqueue(u_IOCapability.bytebuffer[0] & 0xFF );

// parameter OOBDataPresent
union u_OOBDataPresent_t {
uint8_t p;
byte bytebuffer[1];
} u_OOBDataPresent;
u_OOBDataPresent.p = OOBDataPresent;
_fifo_enqueue(u_OOBDataPresent.bytebuffer[0] & 0xFF );

// parameter Bonding
union u_Bonding_t {
uint8_t p;
byte bytebuffer[1];
} u_Bonding;
u_Bonding.p = Bonding;
_fifo_enqueue(u_Bonding.bytebuffer[0] & 0xFF );

// parameter MITM
union u_MITM_t {
uint8_t p;
byte bytebuffer[1];
} u_MITM;
u_MITM.p = MITM;
_fifo_enqueue(u_MITM.bytebuffer[0] & 0xFF );

// parameter SecureConnection
union u_SecureConnection_t {
uint8_t p;
byte bytebuffer[1];
} u_SecureConnection;
u_SecureConnection.p = SecureConnection;
_fifo_enqueue(u_SecureConnection.bytebuffer[0] & 0xFF );

// parameter Keypress
union u_Keypress_t {
uint8_t p;
byte bytebuffer[1];
} u_Keypress;
u_Keypress.p = Keypress;
_fifo_enqueue(u_Keypress.bytebuffer[0] & 0xFF );

// parameter MaximumEncryptionKeySize
union u_MaximumEncryptionKeySize_t {
uint8_t p;
byte bytebuffer[1];
} u_MaximumEncryptionKeySize;
u_MaximumEncryptionKeySize.p = MaximumEncryptionKeySize;
_fifo_enqueue(u_MaximumEncryptionKeySize.bytebuffer[0] & 0xFF );

// parameter InitiatorKeyDistribution
union u_InitiatorKeyDistribution_t {
uint8_t p;
byte bytebuffer[1];
} u_InitiatorKeyDistribution;
u_InitiatorKeyDistribution.p = InitiatorKeyDistribution;
_fifo_enqueue(u_InitiatorKeyDistribution.bytebuffer[0] & 0xFF );

// parameter ResponderKeyDistribution
union u_ResponderKeyDistribution_t {
uint8_t p;
byte bytebuffer[1];
} u_ResponderKeyDistribution;
u_ResponderKeyDistribution.p = ResponderKeyDistribution;
_fifo_enqueue(u_ResponderKeyDistribution.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages BLEScannerImpl::SMP::SMPIdentityInformation
void enqueue_BLEScannerImpl_send_SMP_SMPIdentityInformation(struct BLEScannerImpl_Instance *_instance, uint16_t Handle, ble_random_number_t IdentityResolvingKey){
fifo_lock();
if ( fifo_byte_available() > 22 ) {

_fifo_enqueue( (40 >> 8) & 0xFF );
_fifo_enqueue( 40 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_SMP >> 8) & 0xFF );
_fifo_enqueue( _instance->id_SMP & 0xFF );

// parameter Handle
union u_Handle_t {
uint16_t p;
byte bytebuffer[2];
} u_Handle;
u_Handle.p = Handle;
_fifo_enqueue(u_Handle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_Handle.bytebuffer[0] & 0xFF );

// parameter IdentityResolvingKey
union u_IdentityResolvingKey_t {
ble_random_number_t p;
byte bytebuffer[16];
} u_IdentityResolvingKey;
u_IdentityResolvingKey.p = IdentityResolvingKey;
_fifo_enqueue(u_IdentityResolvingKey.bytebuffer[15] & 0xFF );
_fifo_enqueue(u_IdentityResolvingKey.bytebuffer[14] & 0xFF );
_fifo_enqueue(u_IdentityResolvingKey.bytebuffer[13] & 0xFF );
_fifo_enqueue(u_IdentityResolvingKey.bytebuffer[12] & 0xFF );
_fifo_enqueue(u_IdentityResolvingKey.bytebuffer[11] & 0xFF );
_fifo_enqueue(u_IdentityResolvingKey.bytebuffer[10] & 0xFF );
_fifo_enqueue(u_IdentityResolvingKey.bytebuffer[9] & 0xFF );
_fifo_enqueue(u_IdentityResolvingKey.bytebuffer[8] & 0xFF );
_fifo_enqueue(u_IdentityResolvingKey.bytebuffer[7] & 0xFF );
_fifo_enqueue(u_IdentityResolvingKey.bytebuffer[6] & 0xFF );
_fifo_enqueue(u_IdentityResolvingKey.bytebuffer[5] & 0xFF );
_fifo_enqueue(u_IdentityResolvingKey.bytebuffer[4] & 0xFF );
_fifo_enqueue(u_IdentityResolvingKey.bytebuffer[3] & 0xFF );
_fifo_enqueue(u_IdentityResolvingKey.bytebuffer[2] & 0xFF );
_fifo_enqueue(u_IdentityResolvingKey.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_IdentityResolvingKey.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages BLEScannerImpl::SMP::SMPKeypressNotification
void enqueue_BLEScannerImpl_send_SMP_SMPKeypressNotification(struct BLEScannerImpl_Instance *_instance, uint16_t Handle, uint8_t Type){
fifo_lock();
if ( fifo_byte_available() > 7 ) {

_fifo_enqueue( (41 >> 8) & 0xFF );
_fifo_enqueue( 41 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_SMP >> 8) & 0xFF );
_fifo_enqueue( _instance->id_SMP & 0xFF );

// parameter Handle
union u_Handle_t {
uint16_t p;
byte bytebuffer[2];
} u_Handle;
u_Handle.p = Handle;
_fifo_enqueue(u_Handle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_Handle.bytebuffer[0] & 0xFF );

// parameter Type
union u_Type_t {
uint8_t p;
byte bytebuffer[1];
} u_Type;
u_Type.p = Type;
_fifo_enqueue(u_Type.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages BLEScannerImpl::SMP::SMPSigningInformation
void enqueue_BLEScannerImpl_send_SMP_SMPSigningInformation(struct BLEScannerImpl_Instance *_instance, uint16_t Handle, ble_random_number_t SignatureKey){
fifo_lock();
if ( fifo_byte_available() > 22 ) {

_fifo_enqueue( (42 >> 8) & 0xFF );
_fifo_enqueue( 42 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_SMP >> 8) & 0xFF );
_fifo_enqueue( _instance->id_SMP & 0xFF );

// parameter Handle
union u_Handle_t {
uint16_t p;
byte bytebuffer[2];
} u_Handle;
u_Handle.p = Handle;
_fifo_enqueue(u_Handle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_Handle.bytebuffer[0] & 0xFF );

// parameter SignatureKey
union u_SignatureKey_t {
ble_random_number_t p;
byte bytebuffer[16];
} u_SignatureKey;
u_SignatureKey.p = SignatureKey;
_fifo_enqueue(u_SignatureKey.bytebuffer[15] & 0xFF );
_fifo_enqueue(u_SignatureKey.bytebuffer[14] & 0xFF );
_fifo_enqueue(u_SignatureKey.bytebuffer[13] & 0xFF );
_fifo_enqueue(u_SignatureKey.bytebuffer[12] & 0xFF );
_fifo_enqueue(u_SignatureKey.bytebuffer[11] & 0xFF );
_fifo_enqueue(u_SignatureKey.bytebuffer[10] & 0xFF );
_fifo_enqueue(u_SignatureKey.bytebuffer[9] & 0xFF );
_fifo_enqueue(u_SignatureKey.bytebuffer[8] & 0xFF );
_fifo_enqueue(u_SignatureKey.bytebuffer[7] & 0xFF );
_fifo_enqueue(u_SignatureKey.bytebuffer[6] & 0xFF );
_fifo_enqueue(u_SignatureKey.bytebuffer[5] & 0xFF );
_fifo_enqueue(u_SignatureKey.bytebuffer[4] & 0xFF );
_fifo_enqueue(u_SignatureKey.bytebuffer[3] & 0xFF );
_fifo_enqueue(u_SignatureKey.bytebuffer[2] & 0xFF );
_fifo_enqueue(u_SignatureKey.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_SignatureKey.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages BLEScannerImpl::ATT::ATTReadByTypeError
void enqueue_BLEScannerImpl_send_ATT_ATTReadByTypeError(struct BLEScannerImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error){
fifo_lock();
if ( fifo_byte_available() > 9 ) {

_fifo_enqueue( (43 >> 8) & 0xFF );
_fifo_enqueue( 43 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_ATT >> 8) & 0xFF );
_fifo_enqueue( _instance->id_ATT & 0xFF );

// parameter ConnectionHandle
union u_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ConnectionHandle;
u_ConnectionHandle.p = ConnectionHandle;
_fifo_enqueue(u_ConnectionHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_ConnectionHandle.bytebuffer[0] & 0xFF );

// parameter AttributeHandle
union u_AttributeHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_AttributeHandle;
u_AttributeHandle.p = AttributeHandle;
_fifo_enqueue(u_AttributeHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_AttributeHandle.bytebuffer[0] & 0xFF );

// parameter Error
union u_Error_t {
uint8_t p;
byte bytebuffer[1];
} u_Error;
u_Error.p = Error;
_fifo_enqueue(u_Error.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages BLEScannerImpl::ATT::ATTReadByGroupTypeError
void enqueue_BLEScannerImpl_send_ATT_ATTReadByGroupTypeError(struct BLEScannerImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error){
fifo_lock();
if ( fifo_byte_available() > 9 ) {

_fifo_enqueue( (44 >> 8) & 0xFF );
_fifo_enqueue( 44 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_ATT >> 8) & 0xFF );
_fifo_enqueue( _instance->id_ATT & 0xFF );

// parameter ConnectionHandle
union u_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ConnectionHandle;
u_ConnectionHandle.p = ConnectionHandle;
_fifo_enqueue(u_ConnectionHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_ConnectionHandle.bytebuffer[0] & 0xFF );

// parameter AttributeHandle
union u_AttributeHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_AttributeHandle;
u_AttributeHandle.p = AttributeHandle;
_fifo_enqueue(u_AttributeHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_AttributeHandle.bytebuffer[0] & 0xFF );

// parameter Error
union u_Error_t {
uint8_t p;
byte bytebuffer[1];
} u_Error;
u_Error.p = Error;
_fifo_enqueue(u_Error.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages BLEScannerImpl::ATT::ATTWriteResponse
void enqueue_BLEScannerImpl_send_ATT_ATTWriteResponse(struct BLEScannerImpl_Instance *_instance, uint16_t ConnectionHandle){
fifo_lock();
if ( fifo_byte_available() > 6 ) {

_fifo_enqueue( (45 >> 8) & 0xFF );
_fifo_enqueue( 45 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_ATT >> 8) & 0xFF );
_fifo_enqueue( _instance->id_ATT & 0xFF );

// parameter ConnectionHandle
union u_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ConnectionHandle;
u_ConnectionHandle.p = ConnectionHandle;
_fifo_enqueue(u_ConnectionHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_ConnectionHandle.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages BLEScannerImpl::ATT::ATTReadRequest
void enqueue_BLEScannerImpl_send_ATT_ATTReadRequest(struct BLEScannerImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle){
fifo_lock();
if ( fifo_byte_available() > 8 ) {

_fifo_enqueue( (46 >> 8) & 0xFF );
_fifo_enqueue( 46 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_ATT >> 8) & 0xFF );
_fifo_enqueue( _instance->id_ATT & 0xFF );

// parameter ConnectionHandle
union u_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ConnectionHandle;
u_ConnectionHandle.p = ConnectionHandle;
_fifo_enqueue(u_ConnectionHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_ConnectionHandle.bytebuffer[0] & 0xFF );

// parameter AttributeHandle
union u_AttributeHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_AttributeHandle;
u_AttributeHandle.p = AttributeHandle;
_fifo_enqueue(u_AttributeHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_AttributeHandle.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages BLEScannerImpl::ATT::ATTFindInformationError
void enqueue_BLEScannerImpl_send_ATT_ATTFindInformationError(struct BLEScannerImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error){
fifo_lock();
if ( fifo_byte_available() > 9 ) {

_fifo_enqueue( (47 >> 8) & 0xFF );
_fifo_enqueue( 47 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_ATT >> 8) & 0xFF );
_fifo_enqueue( _instance->id_ATT & 0xFF );

// parameter ConnectionHandle
union u_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ConnectionHandle;
u_ConnectionHandle.p = ConnectionHandle;
_fifo_enqueue(u_ConnectionHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_ConnectionHandle.bytebuffer[0] & 0xFF );

// parameter AttributeHandle
union u_AttributeHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_AttributeHandle;
u_AttributeHandle.p = AttributeHandle;
_fifo_enqueue(u_AttributeHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_AttributeHandle.bytebuffer[0] & 0xFF );

// parameter Error
union u_Error_t {
uint8_t p;
byte bytebuffer[1];
} u_Error;
u_Error.p = Error;
_fifo_enqueue(u_Error.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages BLEScannerImpl::ATT::ATTReadByTypeRequest
void enqueue_BLEScannerImpl_send_ATT_ATTReadByTypeRequest(struct BLEScannerImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t StartingHandle, uint16_t EndingHandle, ble_uuid_t AttributeType){
fifo_lock();
if ( fifo_byte_available() > 26 ) {

_fifo_enqueue( (48 >> 8) & 0xFF );
_fifo_enqueue( 48 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_ATT >> 8) & 0xFF );
_fifo_enqueue( _instance->id_ATT & 0xFF );

// parameter ConnectionHandle
union u_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ConnectionHandle;
u_ConnectionHandle.p = ConnectionHandle;
_fifo_enqueue(u_ConnectionHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_ConnectionHandle.bytebuffer[0] & 0xFF );

// parameter StartingHandle
union u_StartingHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_StartingHandle;
u_StartingHandle.p = StartingHandle;
_fifo_enqueue(u_StartingHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_StartingHandle.bytebuffer[0] & 0xFF );

// parameter EndingHandle
union u_EndingHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_EndingHandle;
u_EndingHandle.p = EndingHandle;
_fifo_enqueue(u_EndingHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_EndingHandle.bytebuffer[0] & 0xFF );

// parameter AttributeType
union u_AttributeType_t {
ble_uuid_t p;
byte bytebuffer[16];
} u_AttributeType;
u_AttributeType.p = AttributeType;
_fifo_enqueue(u_AttributeType.bytebuffer[15] & 0xFF );
_fifo_enqueue(u_AttributeType.bytebuffer[14] & 0xFF );
_fifo_enqueue(u_AttributeType.bytebuffer[13] & 0xFF );
_fifo_enqueue(u_AttributeType.bytebuffer[12] & 0xFF );
_fifo_enqueue(u_AttributeType.bytebuffer[11] & 0xFF );
_fifo_enqueue(u_AttributeType.bytebuffer[10] & 0xFF );
_fifo_enqueue(u_AttributeType.bytebuffer[9] & 0xFF );
_fifo_enqueue(u_AttributeType.bytebuffer[8] & 0xFF );
_fifo_enqueue(u_AttributeType.bytebuffer[7] & 0xFF );
_fifo_enqueue(u_AttributeType.bytebuffer[6] & 0xFF );
_fifo_enqueue(u_AttributeType.bytebuffer[5] & 0xFF );
_fifo_enqueue(u_AttributeType.bytebuffer[4] & 0xFF );
_fifo_enqueue(u_AttributeType.bytebuffer[3] & 0xFF );
_fifo_enqueue(u_AttributeType.bytebuffer[2] & 0xFF );
_fifo_enqueue(u_AttributeType.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_AttributeType.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages BLEScannerImpl::ATT::ATTHandleValueConfirmation
void enqueue_BLEScannerImpl_send_ATT_ATTHandleValueConfirmation(struct BLEScannerImpl_Instance *_instance, uint16_t ConnectionHandle){
fifo_lock();
if ( fifo_byte_available() > 6 ) {

_fifo_enqueue( (49 >> 8) & 0xFF );
_fifo_enqueue( 49 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_ATT >> 8) & 0xFF );
_fifo_enqueue( _instance->id_ATT & 0xFF );

// parameter ConnectionHandle
union u_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ConnectionHandle;
u_ConnectionHandle.p = ConnectionHandle;
_fifo_enqueue(u_ConnectionHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_ConnectionHandle.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages BLEScannerImpl::ATT::ATTReadError
void enqueue_BLEScannerImpl_send_ATT_ATTReadError(struct BLEScannerImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error){
fifo_lock();
if ( fifo_byte_available() > 9 ) {

_fifo_enqueue( (50 >> 8) & 0xFF );
_fifo_enqueue( 50 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_ATT >> 8) & 0xFF );
_fifo_enqueue( _instance->id_ATT & 0xFF );

// parameter ConnectionHandle
union u_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ConnectionHandle;
u_ConnectionHandle.p = ConnectionHandle;
_fifo_enqueue(u_ConnectionHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_ConnectionHandle.bytebuffer[0] & 0xFF );

// parameter AttributeHandle
union u_AttributeHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_AttributeHandle;
u_AttributeHandle.p = AttributeHandle;
_fifo_enqueue(u_AttributeHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_AttributeHandle.bytebuffer[0] & 0xFF );

// parameter Error
union u_Error_t {
uint8_t p;
byte bytebuffer[1];
} u_Error;
u_Error.p = Error;
_fifo_enqueue(u_Error.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages BLEScannerImpl::ATT::ATTWriteRequest
void enqueue_BLEScannerImpl_send_ATT_ATTWriteRequest(struct BLEScannerImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, ble_gatt_data_t AttributeValue){
fifo_lock();
if ( fifo_byte_available() > 32 ) {

_fifo_enqueue( (51 >> 8) & 0xFF );
_fifo_enqueue( 51 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_ATT >> 8) & 0xFF );
_fifo_enqueue( _instance->id_ATT & 0xFF );

// parameter ConnectionHandle
union u_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ConnectionHandle;
u_ConnectionHandle.p = ConnectionHandle;
_fifo_enqueue(u_ConnectionHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_ConnectionHandle.bytebuffer[0] & 0xFF );

// parameter AttributeHandle
union u_AttributeHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_AttributeHandle;
u_AttributeHandle.p = AttributeHandle;
_fifo_enqueue(u_AttributeHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_AttributeHandle.bytebuffer[0] & 0xFF );

// parameter AttributeValue
union u_AttributeValue_t {
ble_gatt_data_t p;
byte bytebuffer[24];
} u_AttributeValue;
u_AttributeValue.p = AttributeValue;
_fifo_enqueue(u_AttributeValue.bytebuffer[23] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[22] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[21] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[20] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[19] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[18] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[17] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[16] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[15] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[14] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[13] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[12] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[11] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[10] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[9] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[8] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[7] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[6] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[5] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[4] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[3] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[2] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages BLEScannerImpl::ATT::ATTWriteCommand
void enqueue_BLEScannerImpl_send_ATT_ATTWriteCommand(struct BLEScannerImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, ble_gatt_data_t AttributeValue){
fifo_lock();
if ( fifo_byte_available() > 32 ) {

_fifo_enqueue( (52 >> 8) & 0xFF );
_fifo_enqueue( 52 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_ATT >> 8) & 0xFF );
_fifo_enqueue( _instance->id_ATT & 0xFF );

// parameter ConnectionHandle
union u_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ConnectionHandle;
u_ConnectionHandle.p = ConnectionHandle;
_fifo_enqueue(u_ConnectionHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_ConnectionHandle.bytebuffer[0] & 0xFF );

// parameter AttributeHandle
union u_AttributeHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_AttributeHandle;
u_AttributeHandle.p = AttributeHandle;
_fifo_enqueue(u_AttributeHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_AttributeHandle.bytebuffer[0] & 0xFF );

// parameter AttributeValue
union u_AttributeValue_t {
ble_gatt_data_t p;
byte bytebuffer[24];
} u_AttributeValue;
u_AttributeValue.p = AttributeValue;
_fifo_enqueue(u_AttributeValue.bytebuffer[23] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[22] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[21] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[20] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[19] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[18] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[17] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[16] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[15] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[14] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[13] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[12] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[11] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[10] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[9] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[8] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[7] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[6] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[5] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[4] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[3] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[2] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages BLEScannerImpl::ATT::ATTWriteError
void enqueue_BLEScannerImpl_send_ATT_ATTWriteError(struct BLEScannerImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error){
fifo_lock();
if ( fifo_byte_available() > 9 ) {

_fifo_enqueue( (53 >> 8) & 0xFF );
_fifo_enqueue( 53 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_ATT >> 8) & 0xFF );
_fifo_enqueue( _instance->id_ATT & 0xFF );

// parameter ConnectionHandle
union u_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ConnectionHandle;
u_ConnectionHandle.p = ConnectionHandle;
_fifo_enqueue(u_ConnectionHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_ConnectionHandle.bytebuffer[0] & 0xFF );

// parameter AttributeHandle
union u_AttributeHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_AttributeHandle;
u_AttributeHandle.p = AttributeHandle;
_fifo_enqueue(u_AttributeHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_AttributeHandle.bytebuffer[0] & 0xFF );

// parameter Error
union u_Error_t {
uint8_t p;
byte bytebuffer[1];
} u_Error;
u_Error.p = Error;
_fifo_enqueue(u_Error.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages BLEScannerImpl::ATT::ATTHandleValueNotification
void enqueue_BLEScannerImpl_send_ATT_ATTHandleValueNotification(struct BLEScannerImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, ble_gatt_data_t AttributeValue){
fifo_lock();
if ( fifo_byte_available() > 32 ) {

_fifo_enqueue( (54 >> 8) & 0xFF );
_fifo_enqueue( 54 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_ATT >> 8) & 0xFF );
_fifo_enqueue( _instance->id_ATT & 0xFF );

// parameter ConnectionHandle
union u_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ConnectionHandle;
u_ConnectionHandle.p = ConnectionHandle;
_fifo_enqueue(u_ConnectionHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_ConnectionHandle.bytebuffer[0] & 0xFF );

// parameter AttributeHandle
union u_AttributeHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_AttributeHandle;
u_AttributeHandle.p = AttributeHandle;
_fifo_enqueue(u_AttributeHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_AttributeHandle.bytebuffer[0] & 0xFF );

// parameter AttributeValue
union u_AttributeValue_t {
ble_gatt_data_t p;
byte bytebuffer[24];
} u_AttributeValue;
u_AttributeValue.p = AttributeValue;
_fifo_enqueue(u_AttributeValue.bytebuffer[23] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[22] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[21] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[20] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[19] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[18] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[17] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[16] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[15] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[14] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[13] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[12] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[11] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[10] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[9] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[8] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[7] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[6] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[5] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[4] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[3] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[2] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages BLEScannerImpl::ATT::ATTFindInformationResponse
void enqueue_BLEScannerImpl_send_ATT_ATTFindInformationResponse(struct BLEScannerImpl_Instance *_instance, uint16_t ConnectionHandle, uint8_t Format, ble_gatt_data_t InformationData){
fifo_lock();
if ( fifo_byte_available() > 31 ) {

_fifo_enqueue( (55 >> 8) & 0xFF );
_fifo_enqueue( 55 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_ATT >> 8) & 0xFF );
_fifo_enqueue( _instance->id_ATT & 0xFF );

// parameter ConnectionHandle
union u_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ConnectionHandle;
u_ConnectionHandle.p = ConnectionHandle;
_fifo_enqueue(u_ConnectionHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_ConnectionHandle.bytebuffer[0] & 0xFF );

// parameter Format
union u_Format_t {
uint8_t p;
byte bytebuffer[1];
} u_Format;
u_Format.p = Format;
_fifo_enqueue(u_Format.bytebuffer[0] & 0xFF );

// parameter InformationData
union u_InformationData_t {
ble_gatt_data_t p;
byte bytebuffer[24];
} u_InformationData;
u_InformationData.p = InformationData;
_fifo_enqueue(u_InformationData.bytebuffer[23] & 0xFF );
_fifo_enqueue(u_InformationData.bytebuffer[22] & 0xFF );
_fifo_enqueue(u_InformationData.bytebuffer[21] & 0xFF );
_fifo_enqueue(u_InformationData.bytebuffer[20] & 0xFF );
_fifo_enqueue(u_InformationData.bytebuffer[19] & 0xFF );
_fifo_enqueue(u_InformationData.bytebuffer[18] & 0xFF );
_fifo_enqueue(u_InformationData.bytebuffer[17] & 0xFF );
_fifo_enqueue(u_InformationData.bytebuffer[16] & 0xFF );
_fifo_enqueue(u_InformationData.bytebuffer[15] & 0xFF );
_fifo_enqueue(u_InformationData.bytebuffer[14] & 0xFF );
_fifo_enqueue(u_InformationData.bytebuffer[13] & 0xFF );
_fifo_enqueue(u_InformationData.bytebuffer[12] & 0xFF );
_fifo_enqueue(u_InformationData.bytebuffer[11] & 0xFF );
_fifo_enqueue(u_InformationData.bytebuffer[10] & 0xFF );
_fifo_enqueue(u_InformationData.bytebuffer[9] & 0xFF );
_fifo_enqueue(u_InformationData.bytebuffer[8] & 0xFF );
_fifo_enqueue(u_InformationData.bytebuffer[7] & 0xFF );
_fifo_enqueue(u_InformationData.bytebuffer[6] & 0xFF );
_fifo_enqueue(u_InformationData.bytebuffer[5] & 0xFF );
_fifo_enqueue(u_InformationData.bytebuffer[4] & 0xFF );
_fifo_enqueue(u_InformationData.bytebuffer[3] & 0xFF );
_fifo_enqueue(u_InformationData.bytebuffer[2] & 0xFF );
_fifo_enqueue(u_InformationData.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_InformationData.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages BLEScannerImpl::ATT::ATTReadByGroupTypeResponse
void enqueue_BLEScannerImpl_send_ATT_ATTReadByGroupTypeResponse(struct BLEScannerImpl_Instance *_instance, uint16_t ConnectionHandle, uint8_t Length, ble_gatt_data_t AttributeDataList){
fifo_lock();
if ( fifo_byte_available() > 31 ) {

_fifo_enqueue( (56 >> 8) & 0xFF );
_fifo_enqueue( 56 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_ATT >> 8) & 0xFF );
_fifo_enqueue( _instance->id_ATT & 0xFF );

// parameter ConnectionHandle
union u_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ConnectionHandle;
u_ConnectionHandle.p = ConnectionHandle;
_fifo_enqueue(u_ConnectionHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_ConnectionHandle.bytebuffer[0] & 0xFF );

// parameter Length
union u_Length_t {
uint8_t p;
byte bytebuffer[1];
} u_Length;
u_Length.p = Length;
_fifo_enqueue(u_Length.bytebuffer[0] & 0xFF );

// parameter AttributeDataList
union u_AttributeDataList_t {
ble_gatt_data_t p;
byte bytebuffer[24];
} u_AttributeDataList;
u_AttributeDataList.p = AttributeDataList;
_fifo_enqueue(u_AttributeDataList.bytebuffer[23] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[22] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[21] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[20] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[19] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[18] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[17] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[16] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[15] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[14] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[13] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[12] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[11] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[10] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[9] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[8] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[7] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[6] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[5] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[4] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[3] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[2] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages BLEScannerImpl::ATT::ATTReadByTypeResponse
void enqueue_BLEScannerImpl_send_ATT_ATTReadByTypeResponse(struct BLEScannerImpl_Instance *_instance, uint16_t ConnectionHandle, uint8_t Length, ble_gatt_data_t AttributeDataList){
fifo_lock();
if ( fifo_byte_available() > 31 ) {

_fifo_enqueue( (57 >> 8) & 0xFF );
_fifo_enqueue( 57 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_ATT >> 8) & 0xFF );
_fifo_enqueue( _instance->id_ATT & 0xFF );

// parameter ConnectionHandle
union u_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ConnectionHandle;
u_ConnectionHandle.p = ConnectionHandle;
_fifo_enqueue(u_ConnectionHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_ConnectionHandle.bytebuffer[0] & 0xFF );

// parameter Length
union u_Length_t {
uint8_t p;
byte bytebuffer[1];
} u_Length;
u_Length.p = Length;
_fifo_enqueue(u_Length.bytebuffer[0] & 0xFF );

// parameter AttributeDataList
union u_AttributeDataList_t {
ble_gatt_data_t p;
byte bytebuffer[24];
} u_AttributeDataList;
u_AttributeDataList.p = AttributeDataList;
_fifo_enqueue(u_AttributeDataList.bytebuffer[23] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[22] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[21] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[20] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[19] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[18] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[17] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[16] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[15] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[14] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[13] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[12] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[11] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[10] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[9] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[8] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[7] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[6] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[5] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[4] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[3] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[2] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages BLEScannerImpl::ATT::ATTFindInformationRequest
void enqueue_BLEScannerImpl_send_ATT_ATTFindInformationRequest(struct BLEScannerImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t StartingHandle, uint16_t EndingHandle){
fifo_lock();
if ( fifo_byte_available() > 10 ) {

_fifo_enqueue( (58 >> 8) & 0xFF );
_fifo_enqueue( 58 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_ATT >> 8) & 0xFF );
_fifo_enqueue( _instance->id_ATT & 0xFF );

// parameter ConnectionHandle
union u_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ConnectionHandle;
u_ConnectionHandle.p = ConnectionHandle;
_fifo_enqueue(u_ConnectionHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_ConnectionHandle.bytebuffer[0] & 0xFF );

// parameter StartingHandle
union u_StartingHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_StartingHandle;
u_StartingHandle.p = StartingHandle;
_fifo_enqueue(u_StartingHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_StartingHandle.bytebuffer[0] & 0xFF );

// parameter EndingHandle
union u_EndingHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_EndingHandle;
u_EndingHandle.p = EndingHandle;
_fifo_enqueue(u_EndingHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_EndingHandle.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages BLEScannerImpl::ATT::ATTReadResponse
void enqueue_BLEScannerImpl_send_ATT_ATTReadResponse(struct BLEScannerImpl_Instance *_instance, uint16_t ConnectionHandle, ble_gatt_data_t AttributeValue){
fifo_lock();
if ( fifo_byte_available() > 30 ) {

_fifo_enqueue( (59 >> 8) & 0xFF );
_fifo_enqueue( 59 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_ATT >> 8) & 0xFF );
_fifo_enqueue( _instance->id_ATT & 0xFF );

// parameter ConnectionHandle
union u_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ConnectionHandle;
u_ConnectionHandle.p = ConnectionHandle;
_fifo_enqueue(u_ConnectionHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_ConnectionHandle.bytebuffer[0] & 0xFF );

// parameter AttributeValue
union u_AttributeValue_t {
ble_gatt_data_t p;
byte bytebuffer[24];
} u_AttributeValue;
u_AttributeValue.p = AttributeValue;
_fifo_enqueue(u_AttributeValue.bytebuffer[23] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[22] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[21] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[20] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[19] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[18] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[17] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[16] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[15] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[14] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[13] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[12] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[11] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[10] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[9] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[8] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[7] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[6] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[5] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[4] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[3] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[2] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages BLEScannerImpl::ATT::ATTReadByGroupTypeRequest
void enqueue_BLEScannerImpl_send_ATT_ATTReadByGroupTypeRequest(struct BLEScannerImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t StartingHandle, uint16_t EndingHandle, ble_uuid_t AttributeGroupType){
fifo_lock();
if ( fifo_byte_available() > 26 ) {

_fifo_enqueue( (60 >> 8) & 0xFF );
_fifo_enqueue( 60 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_ATT >> 8) & 0xFF );
_fifo_enqueue( _instance->id_ATT & 0xFF );

// parameter ConnectionHandle
union u_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ConnectionHandle;
u_ConnectionHandle.p = ConnectionHandle;
_fifo_enqueue(u_ConnectionHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_ConnectionHandle.bytebuffer[0] & 0xFF );

// parameter StartingHandle
union u_StartingHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_StartingHandle;
u_StartingHandle.p = StartingHandle;
_fifo_enqueue(u_StartingHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_StartingHandle.bytebuffer[0] & 0xFF );

// parameter EndingHandle
union u_EndingHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_EndingHandle;
u_EndingHandle.p = EndingHandle;
_fifo_enqueue(u_EndingHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_EndingHandle.bytebuffer[0] & 0xFF );

// parameter AttributeGroupType
union u_AttributeGroupType_t {
ble_uuid_t p;
byte bytebuffer[16];
} u_AttributeGroupType;
u_AttributeGroupType.p = AttributeGroupType;
_fifo_enqueue(u_AttributeGroupType.bytebuffer[15] & 0xFF );
_fifo_enqueue(u_AttributeGroupType.bytebuffer[14] & 0xFF );
_fifo_enqueue(u_AttributeGroupType.bytebuffer[13] & 0xFF );
_fifo_enqueue(u_AttributeGroupType.bytebuffer[12] & 0xFF );
_fifo_enqueue(u_AttributeGroupType.bytebuffer[11] & 0xFF );
_fifo_enqueue(u_AttributeGroupType.bytebuffer[10] & 0xFF );
_fifo_enqueue(u_AttributeGroupType.bytebuffer[9] & 0xFF );
_fifo_enqueue(u_AttributeGroupType.bytebuffer[8] & 0xFF );
_fifo_enqueue(u_AttributeGroupType.bytebuffer[7] & 0xFF );
_fifo_enqueue(u_AttributeGroupType.bytebuffer[6] & 0xFF );
_fifo_enqueue(u_AttributeGroupType.bytebuffer[5] & 0xFF );
_fifo_enqueue(u_AttributeGroupType.bytebuffer[4] & 0xFF );
_fifo_enqueue(u_AttributeGroupType.bytebuffer[3] & 0xFF );
_fifo_enqueue(u_AttributeGroupType.bytebuffer[2] & 0xFF );
_fifo_enqueue(u_AttributeGroupType.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_AttributeGroupType.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages BLEScannerImpl::ATT::ATTHandleValueIndication
void enqueue_BLEScannerImpl_send_ATT_ATTHandleValueIndication(struct BLEScannerImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, ble_gatt_data_t AttributeValue){
fifo_lock();
if ( fifo_byte_available() > 32 ) {

_fifo_enqueue( (61 >> 8) & 0xFF );
_fifo_enqueue( 61 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_ATT >> 8) & 0xFF );
_fifo_enqueue( _instance->id_ATT & 0xFF );

// parameter ConnectionHandle
union u_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ConnectionHandle;
u_ConnectionHandle.p = ConnectionHandle;
_fifo_enqueue(u_ConnectionHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_ConnectionHandle.bytebuffer[0] & 0xFF );

// parameter AttributeHandle
union u_AttributeHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_AttributeHandle;
u_AttributeHandle.p = AttributeHandle;
_fifo_enqueue(u_AttributeHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_AttributeHandle.bytebuffer[0] & 0xFF );

// parameter AttributeValue
union u_AttributeValue_t {
ble_gatt_data_t p;
byte bytebuffer[24];
} u_AttributeValue;
u_AttributeValue.p = AttributeValue;
_fifo_enqueue(u_AttributeValue.bytebuffer[23] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[22] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[21] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[20] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[19] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[18] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[17] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[16] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[15] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[14] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[13] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[12] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[11] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[10] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[9] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[8] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[7] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[6] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[5] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[4] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[3] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[2] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages ANDUA651BLEImpl::ANDUA651BLE::WantsToConnect
void enqueue_ANDUA651BLEImpl_send_ANDUA651BLE_WantsToConnect(struct ANDUA651BLEImpl_Instance *_instance){
fifo_lock();
if ( fifo_byte_available() > 4 ) {

_fifo_enqueue( (62 >> 8) & 0xFF );
_fifo_enqueue( 62 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_ANDUA651BLE >> 8) & 0xFF );
_fifo_enqueue( _instance->id_ANDUA651BLE & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages ANDUA651BLEImpl::ANDUA651BLE::FinishedConnection
void enqueue_ANDUA651BLEImpl_send_ANDUA651BLE_FinishedConnection(struct ANDUA651BLEImpl_Instance *_instance){
fifo_lock();
if ( fifo_byte_available() > 4 ) {

_fifo_enqueue( (63 >> 8) & 0xFF );
_fifo_enqueue( 63 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_ANDUA651BLE >> 8) & 0xFF );
_fifo_enqueue( _instance->id_ANDUA651BLE & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages ANDUA651BLEImpl::Scanner::Start
void enqueue_ANDUA651BLEImpl_send_Scanner_Start(struct ANDUA651BLEImpl_Instance *_instance){
fifo_lock();
if ( fifo_byte_available() > 4 ) {

_fifo_enqueue( (64 >> 8) & 0xFF );
_fifo_enqueue( 64 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_Scanner >> 8) & 0xFF );
_fifo_enqueue( _instance->id_Scanner & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages ANDUA651BLEImpl::Scanner::Stop
void enqueue_ANDUA651BLEImpl_send_Scanner_Stop(struct ANDUA651BLEImpl_Instance *_instance){
fifo_lock();
if ( fifo_byte_available() > 4 ) {

_fifo_enqueue( (65 >> 8) & 0xFF );
_fifo_enqueue( 65 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_Scanner >> 8) & 0xFF );
_fifo_enqueue( _instance->id_Scanner & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages ANDUA651BLEImpl::Connecter::Encrypt
void enqueue_ANDUA651BLEImpl_send_Connecter_Encrypt(struct ANDUA651BLEImpl_Instance *_instance){
fifo_lock();
if ( fifo_byte_available() > 4 ) {

_fifo_enqueue( (66 >> 8) & 0xFF );
_fifo_enqueue( 66 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_Connecter >> 8) & 0xFF );
_fifo_enqueue( _instance->id_Connecter & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages ANDUA651BLEImpl::Connecter::Connect
void enqueue_ANDUA651BLEImpl_send_Connecter_Connect(struct ANDUA651BLEImpl_Instance *_instance){
fifo_lock();
if ( fifo_byte_available() > 4 ) {

_fifo_enqueue( (67 >> 8) & 0xFF );
_fifo_enqueue( 67 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_Connecter >> 8) & 0xFF );
_fifo_enqueue( _instance->id_Connecter & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages ANDUA651BLEImpl::Connecter::Stop
void enqueue_ANDUA651BLEImpl_send_Connecter_Stop(struct ANDUA651BLEImpl_Instance *_instance){
fifo_lock();
if ( fifo_byte_available() > 4 ) {

_fifo_enqueue( (65 >> 8) & 0xFF );
_fifo_enqueue( 65 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_Connecter >> 8) & 0xFF );
_fifo_enqueue( _instance->id_Connecter & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages ANDUA651BLEImpl::Connecter::ConnectToU
void enqueue_ANDUA651BLEImpl_send_Connecter_ConnectToU(struct ANDUA651BLEImpl_Instance *_instance, uint8_t AddressType, bdaddr_t Address){
fifo_lock();
if ( fifo_byte_available() > 11 ) {

_fifo_enqueue( (68 >> 8) & 0xFF );
_fifo_enqueue( 68 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_Connecter >> 8) & 0xFF );
_fifo_enqueue( _instance->id_Connecter & 0xFF );

// parameter AddressType
union u_AddressType_t {
uint8_t p;
byte bytebuffer[1];
} u_AddressType;
u_AddressType.p = AddressType;
_fifo_enqueue(u_AddressType.bytebuffer[0] & 0xFF );

// parameter Address
union u_Address_t {
bdaddr_t p;
byte bytebuffer[6];
} u_Address;
u_Address.p = Address;
_fifo_enqueue(u_Address.bytebuffer[5] & 0xFF );
_fifo_enqueue(u_Address.bytebuffer[4] & 0xFF );
_fifo_enqueue(u_Address.bytebuffer[3] & 0xFF );
_fifo_enqueue(u_Address.bytebuffer[2] & 0xFF );
_fifo_enqueue(u_Address.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_Address.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages ANDUA651BLEImpl::Connecter::ConnectTo
void enqueue_ANDUA651BLEImpl_send_Connecter_ConnectTo(struct ANDUA651BLEImpl_Instance *_instance, uint8_t AddressType, bdaddr_t Address, ble_random_number_t LongTermKey, uint16_t EncryptedDiversifier, ble_random_part_t RandomNumber){
fifo_lock();
if ( fifo_byte_available() > 37 ) {

_fifo_enqueue( (69 >> 8) & 0xFF );
_fifo_enqueue( 69 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_Connecter >> 8) & 0xFF );
_fifo_enqueue( _instance->id_Connecter & 0xFF );

// parameter AddressType
union u_AddressType_t {
uint8_t p;
byte bytebuffer[1];
} u_AddressType;
u_AddressType.p = AddressType;
_fifo_enqueue(u_AddressType.bytebuffer[0] & 0xFF );

// parameter Address
union u_Address_t {
bdaddr_t p;
byte bytebuffer[6];
} u_Address;
u_Address.p = Address;
_fifo_enqueue(u_Address.bytebuffer[5] & 0xFF );
_fifo_enqueue(u_Address.bytebuffer[4] & 0xFF );
_fifo_enqueue(u_Address.bytebuffer[3] & 0xFF );
_fifo_enqueue(u_Address.bytebuffer[2] & 0xFF );
_fifo_enqueue(u_Address.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_Address.bytebuffer[0] & 0xFF );

// parameter LongTermKey
union u_LongTermKey_t {
ble_random_number_t p;
byte bytebuffer[16];
} u_LongTermKey;
u_LongTermKey.p = LongTermKey;
_fifo_enqueue(u_LongTermKey.bytebuffer[15] & 0xFF );
_fifo_enqueue(u_LongTermKey.bytebuffer[14] & 0xFF );
_fifo_enqueue(u_LongTermKey.bytebuffer[13] & 0xFF );
_fifo_enqueue(u_LongTermKey.bytebuffer[12] & 0xFF );
_fifo_enqueue(u_LongTermKey.bytebuffer[11] & 0xFF );
_fifo_enqueue(u_LongTermKey.bytebuffer[10] & 0xFF );
_fifo_enqueue(u_LongTermKey.bytebuffer[9] & 0xFF );
_fifo_enqueue(u_LongTermKey.bytebuffer[8] & 0xFF );
_fifo_enqueue(u_LongTermKey.bytebuffer[7] & 0xFF );
_fifo_enqueue(u_LongTermKey.bytebuffer[6] & 0xFF );
_fifo_enqueue(u_LongTermKey.bytebuffer[5] & 0xFF );
_fifo_enqueue(u_LongTermKey.bytebuffer[4] & 0xFF );
_fifo_enqueue(u_LongTermKey.bytebuffer[3] & 0xFF );
_fifo_enqueue(u_LongTermKey.bytebuffer[2] & 0xFF );
_fifo_enqueue(u_LongTermKey.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_LongTermKey.bytebuffer[0] & 0xFF );

// parameter EncryptedDiversifier
union u_EncryptedDiversifier_t {
uint16_t p;
byte bytebuffer[2];
} u_EncryptedDiversifier;
u_EncryptedDiversifier.p = EncryptedDiversifier;
_fifo_enqueue(u_EncryptedDiversifier.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_EncryptedDiversifier.bytebuffer[0] & 0xFF );

// parameter RandomNumber
union u_RandomNumber_t {
ble_random_part_t p;
byte bytebuffer[8];
} u_RandomNumber;
u_RandomNumber.p = RandomNumber;
_fifo_enqueue(u_RandomNumber.bytebuffer[7] & 0xFF );
_fifo_enqueue(u_RandomNumber.bytebuffer[6] & 0xFF );
_fifo_enqueue(u_RandomNumber.bytebuffer[5] & 0xFF );
_fifo_enqueue(u_RandomNumber.bytebuffer[4] & 0xFF );
_fifo_enqueue(u_RandomNumber.bytebuffer[3] & 0xFF );
_fifo_enqueue(u_RandomNumber.bytebuffer[2] & 0xFF );
_fifo_enqueue(u_RandomNumber.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_RandomNumber.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages ANDUA651BLEImpl::Notifications::NotifierReceived
void enqueue_ANDUA651BLEImpl_send_Notifications_NotifierReceived(struct ANDUA651BLEImpl_Instance *_instance){
fifo_lock();
if ( fifo_byte_available() > 4 ) {

_fifo_enqueue( (70 >> 8) & 0xFF );
_fifo_enqueue( 70 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_Notifications >> 8) & 0xFF );
_fifo_enqueue( _instance->id_Notifications & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages ANDUA651BLEImpl::Notifications::NotifierError
void enqueue_ANDUA651BLEImpl_send_Notifications_NotifierError(struct ANDUA651BLEImpl_Instance *_instance){
fifo_lock();
if ( fifo_byte_available() > 4 ) {

_fifo_enqueue( (71 >> 8) & 0xFF );
_fifo_enqueue( 71 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_Notifications >> 8) & 0xFF );
_fifo_enqueue( _instance->id_Notifications & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages ANDUA651BLEImpl::Notifications::NotifierRequest
void enqueue_ANDUA651BLEImpl_send_Notifications_NotifierRequest(struct ANDUA651BLEImpl_Instance *_instance){
fifo_lock();
if ( fifo_byte_available() > 4 ) {

_fifo_enqueue( (72 >> 8) & 0xFF );
_fifo_enqueue( 72 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_Notifications >> 8) & 0xFF );
_fifo_enqueue( _instance->id_Notifications & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages ANDUA651BLEImpl::Notifications::NotifierConnect
void enqueue_ANDUA651BLEImpl_send_Notifications_NotifierConnect(struct ANDUA651BLEImpl_Instance *_instance, uint8_t AddressType, bdaddr_t Address){
fifo_lock();
if ( fifo_byte_available() > 11 ) {

_fifo_enqueue( (73 >> 8) & 0xFF );
_fifo_enqueue( 73 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_Notifications >> 8) & 0xFF );
_fifo_enqueue( _instance->id_Notifications & 0xFF );

// parameter AddressType
union u_AddressType_t {
uint8_t p;
byte bytebuffer[1];
} u_AddressType;
u_AddressType.p = AddressType;
_fifo_enqueue(u_AddressType.bytebuffer[0] & 0xFF );

// parameter Address
union u_Address_t {
bdaddr_t p;
byte bytebuffer[6];
} u_Address;
u_Address.p = Address;
_fifo_enqueue(u_Address.bytebuffer[5] & 0xFF );
_fifo_enqueue(u_Address.bytebuffer[4] & 0xFF );
_fifo_enqueue(u_Address.bytebuffer[3] & 0xFF );
_fifo_enqueue(u_Address.bytebuffer[2] & 0xFF );
_fifo_enqueue(u_Address.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_Address.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages ANDUA651BLEImpl::Notifications::NotifierStored
void enqueue_ANDUA651BLEImpl_send_Notifications_NotifierStored(struct ANDUA651BLEImpl_Instance *_instance){
fifo_lock();
if ( fifo_byte_available() > 4 ) {

_fifo_enqueue( (74 >> 8) & 0xFF );
_fifo_enqueue( 74 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_Notifications >> 8) & 0xFF );
_fifo_enqueue( _instance->id_Notifications & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages ANDUA651BLEImpl::ATT::ATTReadByTypeError
void enqueue_ANDUA651BLEImpl_send_ATT_ATTReadByTypeError(struct ANDUA651BLEImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error){
fifo_lock();
if ( fifo_byte_available() > 9 ) {

_fifo_enqueue( (43 >> 8) & 0xFF );
_fifo_enqueue( 43 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_ATT >> 8) & 0xFF );
_fifo_enqueue( _instance->id_ATT & 0xFF );

// parameter ConnectionHandle
union u_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ConnectionHandle;
u_ConnectionHandle.p = ConnectionHandle;
_fifo_enqueue(u_ConnectionHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_ConnectionHandle.bytebuffer[0] & 0xFF );

// parameter AttributeHandle
union u_AttributeHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_AttributeHandle;
u_AttributeHandle.p = AttributeHandle;
_fifo_enqueue(u_AttributeHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_AttributeHandle.bytebuffer[0] & 0xFF );

// parameter Error
union u_Error_t {
uint8_t p;
byte bytebuffer[1];
} u_Error;
u_Error.p = Error;
_fifo_enqueue(u_Error.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages ANDUA651BLEImpl::ATT::ATTReadByGroupTypeError
void enqueue_ANDUA651BLEImpl_send_ATT_ATTReadByGroupTypeError(struct ANDUA651BLEImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error){
fifo_lock();
if ( fifo_byte_available() > 9 ) {

_fifo_enqueue( (44 >> 8) & 0xFF );
_fifo_enqueue( 44 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_ATT >> 8) & 0xFF );
_fifo_enqueue( _instance->id_ATT & 0xFF );

// parameter ConnectionHandle
union u_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ConnectionHandle;
u_ConnectionHandle.p = ConnectionHandle;
_fifo_enqueue(u_ConnectionHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_ConnectionHandle.bytebuffer[0] & 0xFF );

// parameter AttributeHandle
union u_AttributeHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_AttributeHandle;
u_AttributeHandle.p = AttributeHandle;
_fifo_enqueue(u_AttributeHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_AttributeHandle.bytebuffer[0] & 0xFF );

// parameter Error
union u_Error_t {
uint8_t p;
byte bytebuffer[1];
} u_Error;
u_Error.p = Error;
_fifo_enqueue(u_Error.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages ANDUA651BLEImpl::ATT::ATTWriteResponse
void enqueue_ANDUA651BLEImpl_send_ATT_ATTWriteResponse(struct ANDUA651BLEImpl_Instance *_instance, uint16_t ConnectionHandle){
fifo_lock();
if ( fifo_byte_available() > 6 ) {

_fifo_enqueue( (45 >> 8) & 0xFF );
_fifo_enqueue( 45 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_ATT >> 8) & 0xFF );
_fifo_enqueue( _instance->id_ATT & 0xFF );

// parameter ConnectionHandle
union u_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ConnectionHandle;
u_ConnectionHandle.p = ConnectionHandle;
_fifo_enqueue(u_ConnectionHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_ConnectionHandle.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages ANDUA651BLEImpl::ATT::ATTReadRequest
void enqueue_ANDUA651BLEImpl_send_ATT_ATTReadRequest(struct ANDUA651BLEImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle){
fifo_lock();
if ( fifo_byte_available() > 8 ) {

_fifo_enqueue( (46 >> 8) & 0xFF );
_fifo_enqueue( 46 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_ATT >> 8) & 0xFF );
_fifo_enqueue( _instance->id_ATT & 0xFF );

// parameter ConnectionHandle
union u_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ConnectionHandle;
u_ConnectionHandle.p = ConnectionHandle;
_fifo_enqueue(u_ConnectionHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_ConnectionHandle.bytebuffer[0] & 0xFF );

// parameter AttributeHandle
union u_AttributeHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_AttributeHandle;
u_AttributeHandle.p = AttributeHandle;
_fifo_enqueue(u_AttributeHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_AttributeHandle.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages ANDUA651BLEImpl::ATT::ATTFindInformationError
void enqueue_ANDUA651BLEImpl_send_ATT_ATTFindInformationError(struct ANDUA651BLEImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error){
fifo_lock();
if ( fifo_byte_available() > 9 ) {

_fifo_enqueue( (47 >> 8) & 0xFF );
_fifo_enqueue( 47 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_ATT >> 8) & 0xFF );
_fifo_enqueue( _instance->id_ATT & 0xFF );

// parameter ConnectionHandle
union u_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ConnectionHandle;
u_ConnectionHandle.p = ConnectionHandle;
_fifo_enqueue(u_ConnectionHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_ConnectionHandle.bytebuffer[0] & 0xFF );

// parameter AttributeHandle
union u_AttributeHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_AttributeHandle;
u_AttributeHandle.p = AttributeHandle;
_fifo_enqueue(u_AttributeHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_AttributeHandle.bytebuffer[0] & 0xFF );

// parameter Error
union u_Error_t {
uint8_t p;
byte bytebuffer[1];
} u_Error;
u_Error.p = Error;
_fifo_enqueue(u_Error.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages ANDUA651BLEImpl::ATT::ATTReadByTypeRequest
void enqueue_ANDUA651BLEImpl_send_ATT_ATTReadByTypeRequest(struct ANDUA651BLEImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t StartingHandle, uint16_t EndingHandle, ble_uuid_t AttributeType){
fifo_lock();
if ( fifo_byte_available() > 26 ) {

_fifo_enqueue( (48 >> 8) & 0xFF );
_fifo_enqueue( 48 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_ATT >> 8) & 0xFF );
_fifo_enqueue( _instance->id_ATT & 0xFF );

// parameter ConnectionHandle
union u_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ConnectionHandle;
u_ConnectionHandle.p = ConnectionHandle;
_fifo_enqueue(u_ConnectionHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_ConnectionHandle.bytebuffer[0] & 0xFF );

// parameter StartingHandle
union u_StartingHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_StartingHandle;
u_StartingHandle.p = StartingHandle;
_fifo_enqueue(u_StartingHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_StartingHandle.bytebuffer[0] & 0xFF );

// parameter EndingHandle
union u_EndingHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_EndingHandle;
u_EndingHandle.p = EndingHandle;
_fifo_enqueue(u_EndingHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_EndingHandle.bytebuffer[0] & 0xFF );

// parameter AttributeType
union u_AttributeType_t {
ble_uuid_t p;
byte bytebuffer[16];
} u_AttributeType;
u_AttributeType.p = AttributeType;
_fifo_enqueue(u_AttributeType.bytebuffer[15] & 0xFF );
_fifo_enqueue(u_AttributeType.bytebuffer[14] & 0xFF );
_fifo_enqueue(u_AttributeType.bytebuffer[13] & 0xFF );
_fifo_enqueue(u_AttributeType.bytebuffer[12] & 0xFF );
_fifo_enqueue(u_AttributeType.bytebuffer[11] & 0xFF );
_fifo_enqueue(u_AttributeType.bytebuffer[10] & 0xFF );
_fifo_enqueue(u_AttributeType.bytebuffer[9] & 0xFF );
_fifo_enqueue(u_AttributeType.bytebuffer[8] & 0xFF );
_fifo_enqueue(u_AttributeType.bytebuffer[7] & 0xFF );
_fifo_enqueue(u_AttributeType.bytebuffer[6] & 0xFF );
_fifo_enqueue(u_AttributeType.bytebuffer[5] & 0xFF );
_fifo_enqueue(u_AttributeType.bytebuffer[4] & 0xFF );
_fifo_enqueue(u_AttributeType.bytebuffer[3] & 0xFF );
_fifo_enqueue(u_AttributeType.bytebuffer[2] & 0xFF );
_fifo_enqueue(u_AttributeType.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_AttributeType.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages ANDUA651BLEImpl::ATT::ATTHandleValueConfirmation
void enqueue_ANDUA651BLEImpl_send_ATT_ATTHandleValueConfirmation(struct ANDUA651BLEImpl_Instance *_instance, uint16_t ConnectionHandle){
fifo_lock();
if ( fifo_byte_available() > 6 ) {

_fifo_enqueue( (49 >> 8) & 0xFF );
_fifo_enqueue( 49 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_ATT >> 8) & 0xFF );
_fifo_enqueue( _instance->id_ATT & 0xFF );

// parameter ConnectionHandle
union u_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ConnectionHandle;
u_ConnectionHandle.p = ConnectionHandle;
_fifo_enqueue(u_ConnectionHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_ConnectionHandle.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages ANDUA651BLEImpl::ATT::ATTReadError
void enqueue_ANDUA651BLEImpl_send_ATT_ATTReadError(struct ANDUA651BLEImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error){
fifo_lock();
if ( fifo_byte_available() > 9 ) {

_fifo_enqueue( (50 >> 8) & 0xFF );
_fifo_enqueue( 50 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_ATT >> 8) & 0xFF );
_fifo_enqueue( _instance->id_ATT & 0xFF );

// parameter ConnectionHandle
union u_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ConnectionHandle;
u_ConnectionHandle.p = ConnectionHandle;
_fifo_enqueue(u_ConnectionHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_ConnectionHandle.bytebuffer[0] & 0xFF );

// parameter AttributeHandle
union u_AttributeHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_AttributeHandle;
u_AttributeHandle.p = AttributeHandle;
_fifo_enqueue(u_AttributeHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_AttributeHandle.bytebuffer[0] & 0xFF );

// parameter Error
union u_Error_t {
uint8_t p;
byte bytebuffer[1];
} u_Error;
u_Error.p = Error;
_fifo_enqueue(u_Error.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages ANDUA651BLEImpl::ATT::ATTWriteRequest
void enqueue_ANDUA651BLEImpl_send_ATT_ATTWriteRequest(struct ANDUA651BLEImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, ble_gatt_data_t AttributeValue){
fifo_lock();
if ( fifo_byte_available() > 32 ) {

_fifo_enqueue( (51 >> 8) & 0xFF );
_fifo_enqueue( 51 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_ATT >> 8) & 0xFF );
_fifo_enqueue( _instance->id_ATT & 0xFF );

// parameter ConnectionHandle
union u_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ConnectionHandle;
u_ConnectionHandle.p = ConnectionHandle;
_fifo_enqueue(u_ConnectionHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_ConnectionHandle.bytebuffer[0] & 0xFF );

// parameter AttributeHandle
union u_AttributeHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_AttributeHandle;
u_AttributeHandle.p = AttributeHandle;
_fifo_enqueue(u_AttributeHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_AttributeHandle.bytebuffer[0] & 0xFF );

// parameter AttributeValue
union u_AttributeValue_t {
ble_gatt_data_t p;
byte bytebuffer[24];
} u_AttributeValue;
u_AttributeValue.p = AttributeValue;
_fifo_enqueue(u_AttributeValue.bytebuffer[23] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[22] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[21] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[20] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[19] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[18] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[17] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[16] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[15] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[14] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[13] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[12] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[11] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[10] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[9] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[8] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[7] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[6] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[5] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[4] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[3] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[2] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages ANDUA651BLEImpl::ATT::ATTWriteCommand
void enqueue_ANDUA651BLEImpl_send_ATT_ATTWriteCommand(struct ANDUA651BLEImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, ble_gatt_data_t AttributeValue){
fifo_lock();
if ( fifo_byte_available() > 32 ) {

_fifo_enqueue( (52 >> 8) & 0xFF );
_fifo_enqueue( 52 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_ATT >> 8) & 0xFF );
_fifo_enqueue( _instance->id_ATT & 0xFF );

// parameter ConnectionHandle
union u_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ConnectionHandle;
u_ConnectionHandle.p = ConnectionHandle;
_fifo_enqueue(u_ConnectionHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_ConnectionHandle.bytebuffer[0] & 0xFF );

// parameter AttributeHandle
union u_AttributeHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_AttributeHandle;
u_AttributeHandle.p = AttributeHandle;
_fifo_enqueue(u_AttributeHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_AttributeHandle.bytebuffer[0] & 0xFF );

// parameter AttributeValue
union u_AttributeValue_t {
ble_gatt_data_t p;
byte bytebuffer[24];
} u_AttributeValue;
u_AttributeValue.p = AttributeValue;
_fifo_enqueue(u_AttributeValue.bytebuffer[23] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[22] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[21] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[20] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[19] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[18] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[17] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[16] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[15] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[14] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[13] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[12] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[11] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[10] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[9] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[8] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[7] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[6] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[5] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[4] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[3] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[2] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages ANDUA651BLEImpl::ATT::ATTWriteError
void enqueue_ANDUA651BLEImpl_send_ATT_ATTWriteError(struct ANDUA651BLEImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error){
fifo_lock();
if ( fifo_byte_available() > 9 ) {

_fifo_enqueue( (53 >> 8) & 0xFF );
_fifo_enqueue( 53 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_ATT >> 8) & 0xFF );
_fifo_enqueue( _instance->id_ATT & 0xFF );

// parameter ConnectionHandle
union u_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ConnectionHandle;
u_ConnectionHandle.p = ConnectionHandle;
_fifo_enqueue(u_ConnectionHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_ConnectionHandle.bytebuffer[0] & 0xFF );

// parameter AttributeHandle
union u_AttributeHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_AttributeHandle;
u_AttributeHandle.p = AttributeHandle;
_fifo_enqueue(u_AttributeHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_AttributeHandle.bytebuffer[0] & 0xFF );

// parameter Error
union u_Error_t {
uint8_t p;
byte bytebuffer[1];
} u_Error;
u_Error.p = Error;
_fifo_enqueue(u_Error.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages ANDUA651BLEImpl::ATT::ATTHandleValueNotification
void enqueue_ANDUA651BLEImpl_send_ATT_ATTHandleValueNotification(struct ANDUA651BLEImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, ble_gatt_data_t AttributeValue){
fifo_lock();
if ( fifo_byte_available() > 32 ) {

_fifo_enqueue( (54 >> 8) & 0xFF );
_fifo_enqueue( 54 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_ATT >> 8) & 0xFF );
_fifo_enqueue( _instance->id_ATT & 0xFF );

// parameter ConnectionHandle
union u_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ConnectionHandle;
u_ConnectionHandle.p = ConnectionHandle;
_fifo_enqueue(u_ConnectionHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_ConnectionHandle.bytebuffer[0] & 0xFF );

// parameter AttributeHandle
union u_AttributeHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_AttributeHandle;
u_AttributeHandle.p = AttributeHandle;
_fifo_enqueue(u_AttributeHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_AttributeHandle.bytebuffer[0] & 0xFF );

// parameter AttributeValue
union u_AttributeValue_t {
ble_gatt_data_t p;
byte bytebuffer[24];
} u_AttributeValue;
u_AttributeValue.p = AttributeValue;
_fifo_enqueue(u_AttributeValue.bytebuffer[23] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[22] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[21] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[20] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[19] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[18] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[17] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[16] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[15] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[14] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[13] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[12] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[11] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[10] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[9] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[8] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[7] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[6] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[5] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[4] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[3] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[2] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages ANDUA651BLEImpl::ATT::ATTFindInformationResponse
void enqueue_ANDUA651BLEImpl_send_ATT_ATTFindInformationResponse(struct ANDUA651BLEImpl_Instance *_instance, uint16_t ConnectionHandle, uint8_t Format, ble_gatt_data_t InformationData){
fifo_lock();
if ( fifo_byte_available() > 31 ) {

_fifo_enqueue( (55 >> 8) & 0xFF );
_fifo_enqueue( 55 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_ATT >> 8) & 0xFF );
_fifo_enqueue( _instance->id_ATT & 0xFF );

// parameter ConnectionHandle
union u_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ConnectionHandle;
u_ConnectionHandle.p = ConnectionHandle;
_fifo_enqueue(u_ConnectionHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_ConnectionHandle.bytebuffer[0] & 0xFF );

// parameter Format
union u_Format_t {
uint8_t p;
byte bytebuffer[1];
} u_Format;
u_Format.p = Format;
_fifo_enqueue(u_Format.bytebuffer[0] & 0xFF );

// parameter InformationData
union u_InformationData_t {
ble_gatt_data_t p;
byte bytebuffer[24];
} u_InformationData;
u_InformationData.p = InformationData;
_fifo_enqueue(u_InformationData.bytebuffer[23] & 0xFF );
_fifo_enqueue(u_InformationData.bytebuffer[22] & 0xFF );
_fifo_enqueue(u_InformationData.bytebuffer[21] & 0xFF );
_fifo_enqueue(u_InformationData.bytebuffer[20] & 0xFF );
_fifo_enqueue(u_InformationData.bytebuffer[19] & 0xFF );
_fifo_enqueue(u_InformationData.bytebuffer[18] & 0xFF );
_fifo_enqueue(u_InformationData.bytebuffer[17] & 0xFF );
_fifo_enqueue(u_InformationData.bytebuffer[16] & 0xFF );
_fifo_enqueue(u_InformationData.bytebuffer[15] & 0xFF );
_fifo_enqueue(u_InformationData.bytebuffer[14] & 0xFF );
_fifo_enqueue(u_InformationData.bytebuffer[13] & 0xFF );
_fifo_enqueue(u_InformationData.bytebuffer[12] & 0xFF );
_fifo_enqueue(u_InformationData.bytebuffer[11] & 0xFF );
_fifo_enqueue(u_InformationData.bytebuffer[10] & 0xFF );
_fifo_enqueue(u_InformationData.bytebuffer[9] & 0xFF );
_fifo_enqueue(u_InformationData.bytebuffer[8] & 0xFF );
_fifo_enqueue(u_InformationData.bytebuffer[7] & 0xFF );
_fifo_enqueue(u_InformationData.bytebuffer[6] & 0xFF );
_fifo_enqueue(u_InformationData.bytebuffer[5] & 0xFF );
_fifo_enqueue(u_InformationData.bytebuffer[4] & 0xFF );
_fifo_enqueue(u_InformationData.bytebuffer[3] & 0xFF );
_fifo_enqueue(u_InformationData.bytebuffer[2] & 0xFF );
_fifo_enqueue(u_InformationData.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_InformationData.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages ANDUA651BLEImpl::ATT::ATTReadByGroupTypeResponse
void enqueue_ANDUA651BLEImpl_send_ATT_ATTReadByGroupTypeResponse(struct ANDUA651BLEImpl_Instance *_instance, uint16_t ConnectionHandle, uint8_t Length, ble_gatt_data_t AttributeDataList){
fifo_lock();
if ( fifo_byte_available() > 31 ) {

_fifo_enqueue( (56 >> 8) & 0xFF );
_fifo_enqueue( 56 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_ATT >> 8) & 0xFF );
_fifo_enqueue( _instance->id_ATT & 0xFF );

// parameter ConnectionHandle
union u_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ConnectionHandle;
u_ConnectionHandle.p = ConnectionHandle;
_fifo_enqueue(u_ConnectionHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_ConnectionHandle.bytebuffer[0] & 0xFF );

// parameter Length
union u_Length_t {
uint8_t p;
byte bytebuffer[1];
} u_Length;
u_Length.p = Length;
_fifo_enqueue(u_Length.bytebuffer[0] & 0xFF );

// parameter AttributeDataList
union u_AttributeDataList_t {
ble_gatt_data_t p;
byte bytebuffer[24];
} u_AttributeDataList;
u_AttributeDataList.p = AttributeDataList;
_fifo_enqueue(u_AttributeDataList.bytebuffer[23] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[22] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[21] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[20] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[19] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[18] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[17] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[16] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[15] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[14] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[13] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[12] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[11] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[10] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[9] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[8] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[7] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[6] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[5] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[4] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[3] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[2] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages ANDUA651BLEImpl::ATT::ATTReadByTypeResponse
void enqueue_ANDUA651BLEImpl_send_ATT_ATTReadByTypeResponse(struct ANDUA651BLEImpl_Instance *_instance, uint16_t ConnectionHandle, uint8_t Length, ble_gatt_data_t AttributeDataList){
fifo_lock();
if ( fifo_byte_available() > 31 ) {

_fifo_enqueue( (57 >> 8) & 0xFF );
_fifo_enqueue( 57 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_ATT >> 8) & 0xFF );
_fifo_enqueue( _instance->id_ATT & 0xFF );

// parameter ConnectionHandle
union u_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ConnectionHandle;
u_ConnectionHandle.p = ConnectionHandle;
_fifo_enqueue(u_ConnectionHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_ConnectionHandle.bytebuffer[0] & 0xFF );

// parameter Length
union u_Length_t {
uint8_t p;
byte bytebuffer[1];
} u_Length;
u_Length.p = Length;
_fifo_enqueue(u_Length.bytebuffer[0] & 0xFF );

// parameter AttributeDataList
union u_AttributeDataList_t {
ble_gatt_data_t p;
byte bytebuffer[24];
} u_AttributeDataList;
u_AttributeDataList.p = AttributeDataList;
_fifo_enqueue(u_AttributeDataList.bytebuffer[23] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[22] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[21] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[20] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[19] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[18] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[17] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[16] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[15] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[14] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[13] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[12] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[11] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[10] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[9] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[8] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[7] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[6] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[5] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[4] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[3] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[2] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages ANDUA651BLEImpl::ATT::ATTFindInformationRequest
void enqueue_ANDUA651BLEImpl_send_ATT_ATTFindInformationRequest(struct ANDUA651BLEImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t StartingHandle, uint16_t EndingHandle){
fifo_lock();
if ( fifo_byte_available() > 10 ) {

_fifo_enqueue( (58 >> 8) & 0xFF );
_fifo_enqueue( 58 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_ATT >> 8) & 0xFF );
_fifo_enqueue( _instance->id_ATT & 0xFF );

// parameter ConnectionHandle
union u_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ConnectionHandle;
u_ConnectionHandle.p = ConnectionHandle;
_fifo_enqueue(u_ConnectionHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_ConnectionHandle.bytebuffer[0] & 0xFF );

// parameter StartingHandle
union u_StartingHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_StartingHandle;
u_StartingHandle.p = StartingHandle;
_fifo_enqueue(u_StartingHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_StartingHandle.bytebuffer[0] & 0xFF );

// parameter EndingHandle
union u_EndingHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_EndingHandle;
u_EndingHandle.p = EndingHandle;
_fifo_enqueue(u_EndingHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_EndingHandle.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages ANDUA651BLEImpl::ATT::ATTReadResponse
void enqueue_ANDUA651BLEImpl_send_ATT_ATTReadResponse(struct ANDUA651BLEImpl_Instance *_instance, uint16_t ConnectionHandle, ble_gatt_data_t AttributeValue){
fifo_lock();
if ( fifo_byte_available() > 30 ) {

_fifo_enqueue( (59 >> 8) & 0xFF );
_fifo_enqueue( 59 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_ATT >> 8) & 0xFF );
_fifo_enqueue( _instance->id_ATT & 0xFF );

// parameter ConnectionHandle
union u_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ConnectionHandle;
u_ConnectionHandle.p = ConnectionHandle;
_fifo_enqueue(u_ConnectionHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_ConnectionHandle.bytebuffer[0] & 0xFF );

// parameter AttributeValue
union u_AttributeValue_t {
ble_gatt_data_t p;
byte bytebuffer[24];
} u_AttributeValue;
u_AttributeValue.p = AttributeValue;
_fifo_enqueue(u_AttributeValue.bytebuffer[23] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[22] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[21] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[20] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[19] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[18] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[17] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[16] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[15] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[14] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[13] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[12] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[11] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[10] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[9] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[8] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[7] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[6] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[5] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[4] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[3] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[2] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages ANDUA651BLEImpl::ATT::ATTReadByGroupTypeRequest
void enqueue_ANDUA651BLEImpl_send_ATT_ATTReadByGroupTypeRequest(struct ANDUA651BLEImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t StartingHandle, uint16_t EndingHandle, ble_uuid_t AttributeGroupType){
fifo_lock();
if ( fifo_byte_available() > 26 ) {

_fifo_enqueue( (60 >> 8) & 0xFF );
_fifo_enqueue( 60 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_ATT >> 8) & 0xFF );
_fifo_enqueue( _instance->id_ATT & 0xFF );

// parameter ConnectionHandle
union u_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ConnectionHandle;
u_ConnectionHandle.p = ConnectionHandle;
_fifo_enqueue(u_ConnectionHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_ConnectionHandle.bytebuffer[0] & 0xFF );

// parameter StartingHandle
union u_StartingHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_StartingHandle;
u_StartingHandle.p = StartingHandle;
_fifo_enqueue(u_StartingHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_StartingHandle.bytebuffer[0] & 0xFF );

// parameter EndingHandle
union u_EndingHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_EndingHandle;
u_EndingHandle.p = EndingHandle;
_fifo_enqueue(u_EndingHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_EndingHandle.bytebuffer[0] & 0xFF );

// parameter AttributeGroupType
union u_AttributeGroupType_t {
ble_uuid_t p;
byte bytebuffer[16];
} u_AttributeGroupType;
u_AttributeGroupType.p = AttributeGroupType;
_fifo_enqueue(u_AttributeGroupType.bytebuffer[15] & 0xFF );
_fifo_enqueue(u_AttributeGroupType.bytebuffer[14] & 0xFF );
_fifo_enqueue(u_AttributeGroupType.bytebuffer[13] & 0xFF );
_fifo_enqueue(u_AttributeGroupType.bytebuffer[12] & 0xFF );
_fifo_enqueue(u_AttributeGroupType.bytebuffer[11] & 0xFF );
_fifo_enqueue(u_AttributeGroupType.bytebuffer[10] & 0xFF );
_fifo_enqueue(u_AttributeGroupType.bytebuffer[9] & 0xFF );
_fifo_enqueue(u_AttributeGroupType.bytebuffer[8] & 0xFF );
_fifo_enqueue(u_AttributeGroupType.bytebuffer[7] & 0xFF );
_fifo_enqueue(u_AttributeGroupType.bytebuffer[6] & 0xFF );
_fifo_enqueue(u_AttributeGroupType.bytebuffer[5] & 0xFF );
_fifo_enqueue(u_AttributeGroupType.bytebuffer[4] & 0xFF );
_fifo_enqueue(u_AttributeGroupType.bytebuffer[3] & 0xFF );
_fifo_enqueue(u_AttributeGroupType.bytebuffer[2] & 0xFF );
_fifo_enqueue(u_AttributeGroupType.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_AttributeGroupType.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages ANDUA651BLEImpl::ATT::ATTHandleValueIndication
void enqueue_ANDUA651BLEImpl_send_ATT_ATTHandleValueIndication(struct ANDUA651BLEImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, ble_gatt_data_t AttributeValue){
fifo_lock();
if ( fifo_byte_available() > 32 ) {

_fifo_enqueue( (61 >> 8) & 0xFF );
_fifo_enqueue( 61 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_ATT >> 8) & 0xFF );
_fifo_enqueue( _instance->id_ATT & 0xFF );

// parameter ConnectionHandle
union u_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ConnectionHandle;
u_ConnectionHandle.p = ConnectionHandle;
_fifo_enqueue(u_ConnectionHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_ConnectionHandle.bytebuffer[0] & 0xFF );

// parameter AttributeHandle
union u_AttributeHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_AttributeHandle;
u_AttributeHandle.p = AttributeHandle;
_fifo_enqueue(u_AttributeHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_AttributeHandle.bytebuffer[0] & 0xFF );

// parameter AttributeValue
union u_AttributeValue_t {
ble_gatt_data_t p;
byte bytebuffer[24];
} u_AttributeValue;
u_AttributeValue.p = AttributeValue;
_fifo_enqueue(u_AttributeValue.bytebuffer[23] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[22] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[21] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[20] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[19] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[18] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[17] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[16] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[15] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[14] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[13] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[12] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[11] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[10] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[9] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[8] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[7] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[6] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[5] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[4] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[3] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[2] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages ANDUC352BLEImpl::ANDUC352BLE::WantsToConnect
void enqueue_ANDUC352BLEImpl_send_ANDUC352BLE_WantsToConnect(struct ANDUC352BLEImpl_Instance *_instance){
fifo_lock();
if ( fifo_byte_available() > 4 ) {

_fifo_enqueue( (62 >> 8) & 0xFF );
_fifo_enqueue( 62 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_ANDUC352BLE >> 8) & 0xFF );
_fifo_enqueue( _instance->id_ANDUC352BLE & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages ANDUC352BLEImpl::ANDUC352BLE::FinishedConnection
void enqueue_ANDUC352BLEImpl_send_ANDUC352BLE_FinishedConnection(struct ANDUC352BLEImpl_Instance *_instance){
fifo_lock();
if ( fifo_byte_available() > 4 ) {

_fifo_enqueue( (63 >> 8) & 0xFF );
_fifo_enqueue( 63 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_ANDUC352BLE >> 8) & 0xFF );
_fifo_enqueue( _instance->id_ANDUC352BLE & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages ANDUC352BLEImpl::Scanner::Start
void enqueue_ANDUC352BLEImpl_send_Scanner_Start(struct ANDUC352BLEImpl_Instance *_instance){
fifo_lock();
if ( fifo_byte_available() > 4 ) {

_fifo_enqueue( (64 >> 8) & 0xFF );
_fifo_enqueue( 64 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_Scanner >> 8) & 0xFF );
_fifo_enqueue( _instance->id_Scanner & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages ANDUC352BLEImpl::Scanner::Stop
void enqueue_ANDUC352BLEImpl_send_Scanner_Stop(struct ANDUC352BLEImpl_Instance *_instance){
fifo_lock();
if ( fifo_byte_available() > 4 ) {

_fifo_enqueue( (65 >> 8) & 0xFF );
_fifo_enqueue( 65 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_Scanner >> 8) & 0xFF );
_fifo_enqueue( _instance->id_Scanner & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages ANDUC352BLEImpl::Connecter::Encrypt
void enqueue_ANDUC352BLEImpl_send_Connecter_Encrypt(struct ANDUC352BLEImpl_Instance *_instance){
fifo_lock();
if ( fifo_byte_available() > 4 ) {

_fifo_enqueue( (66 >> 8) & 0xFF );
_fifo_enqueue( 66 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_Connecter >> 8) & 0xFF );
_fifo_enqueue( _instance->id_Connecter & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages ANDUC352BLEImpl::Connecter::Connect
void enqueue_ANDUC352BLEImpl_send_Connecter_Connect(struct ANDUC352BLEImpl_Instance *_instance){
fifo_lock();
if ( fifo_byte_available() > 4 ) {

_fifo_enqueue( (67 >> 8) & 0xFF );
_fifo_enqueue( 67 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_Connecter >> 8) & 0xFF );
_fifo_enqueue( _instance->id_Connecter & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages ANDUC352BLEImpl::Connecter::Stop
void enqueue_ANDUC352BLEImpl_send_Connecter_Stop(struct ANDUC352BLEImpl_Instance *_instance){
fifo_lock();
if ( fifo_byte_available() > 4 ) {

_fifo_enqueue( (65 >> 8) & 0xFF );
_fifo_enqueue( 65 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_Connecter >> 8) & 0xFF );
_fifo_enqueue( _instance->id_Connecter & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages ANDUC352BLEImpl::Connecter::ConnectToU
void enqueue_ANDUC352BLEImpl_send_Connecter_ConnectToU(struct ANDUC352BLEImpl_Instance *_instance, uint8_t AddressType, bdaddr_t Address){
fifo_lock();
if ( fifo_byte_available() > 11 ) {

_fifo_enqueue( (68 >> 8) & 0xFF );
_fifo_enqueue( 68 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_Connecter >> 8) & 0xFF );
_fifo_enqueue( _instance->id_Connecter & 0xFF );

// parameter AddressType
union u_AddressType_t {
uint8_t p;
byte bytebuffer[1];
} u_AddressType;
u_AddressType.p = AddressType;
_fifo_enqueue(u_AddressType.bytebuffer[0] & 0xFF );

// parameter Address
union u_Address_t {
bdaddr_t p;
byte bytebuffer[6];
} u_Address;
u_Address.p = Address;
_fifo_enqueue(u_Address.bytebuffer[5] & 0xFF );
_fifo_enqueue(u_Address.bytebuffer[4] & 0xFF );
_fifo_enqueue(u_Address.bytebuffer[3] & 0xFF );
_fifo_enqueue(u_Address.bytebuffer[2] & 0xFF );
_fifo_enqueue(u_Address.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_Address.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages ANDUC352BLEImpl::Connecter::ConnectTo
void enqueue_ANDUC352BLEImpl_send_Connecter_ConnectTo(struct ANDUC352BLEImpl_Instance *_instance, uint8_t AddressType, bdaddr_t Address, ble_random_number_t LongTermKey, uint16_t EncryptedDiversifier, ble_random_part_t RandomNumber){
fifo_lock();
if ( fifo_byte_available() > 37 ) {

_fifo_enqueue( (69 >> 8) & 0xFF );
_fifo_enqueue( 69 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_Connecter >> 8) & 0xFF );
_fifo_enqueue( _instance->id_Connecter & 0xFF );

// parameter AddressType
union u_AddressType_t {
uint8_t p;
byte bytebuffer[1];
} u_AddressType;
u_AddressType.p = AddressType;
_fifo_enqueue(u_AddressType.bytebuffer[0] & 0xFF );

// parameter Address
union u_Address_t {
bdaddr_t p;
byte bytebuffer[6];
} u_Address;
u_Address.p = Address;
_fifo_enqueue(u_Address.bytebuffer[5] & 0xFF );
_fifo_enqueue(u_Address.bytebuffer[4] & 0xFF );
_fifo_enqueue(u_Address.bytebuffer[3] & 0xFF );
_fifo_enqueue(u_Address.bytebuffer[2] & 0xFF );
_fifo_enqueue(u_Address.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_Address.bytebuffer[0] & 0xFF );

// parameter LongTermKey
union u_LongTermKey_t {
ble_random_number_t p;
byte bytebuffer[16];
} u_LongTermKey;
u_LongTermKey.p = LongTermKey;
_fifo_enqueue(u_LongTermKey.bytebuffer[15] & 0xFF );
_fifo_enqueue(u_LongTermKey.bytebuffer[14] & 0xFF );
_fifo_enqueue(u_LongTermKey.bytebuffer[13] & 0xFF );
_fifo_enqueue(u_LongTermKey.bytebuffer[12] & 0xFF );
_fifo_enqueue(u_LongTermKey.bytebuffer[11] & 0xFF );
_fifo_enqueue(u_LongTermKey.bytebuffer[10] & 0xFF );
_fifo_enqueue(u_LongTermKey.bytebuffer[9] & 0xFF );
_fifo_enqueue(u_LongTermKey.bytebuffer[8] & 0xFF );
_fifo_enqueue(u_LongTermKey.bytebuffer[7] & 0xFF );
_fifo_enqueue(u_LongTermKey.bytebuffer[6] & 0xFF );
_fifo_enqueue(u_LongTermKey.bytebuffer[5] & 0xFF );
_fifo_enqueue(u_LongTermKey.bytebuffer[4] & 0xFF );
_fifo_enqueue(u_LongTermKey.bytebuffer[3] & 0xFF );
_fifo_enqueue(u_LongTermKey.bytebuffer[2] & 0xFF );
_fifo_enqueue(u_LongTermKey.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_LongTermKey.bytebuffer[0] & 0xFF );

// parameter EncryptedDiversifier
union u_EncryptedDiversifier_t {
uint16_t p;
byte bytebuffer[2];
} u_EncryptedDiversifier;
u_EncryptedDiversifier.p = EncryptedDiversifier;
_fifo_enqueue(u_EncryptedDiversifier.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_EncryptedDiversifier.bytebuffer[0] & 0xFF );

// parameter RandomNumber
union u_RandomNumber_t {
ble_random_part_t p;
byte bytebuffer[8];
} u_RandomNumber;
u_RandomNumber.p = RandomNumber;
_fifo_enqueue(u_RandomNumber.bytebuffer[7] & 0xFF );
_fifo_enqueue(u_RandomNumber.bytebuffer[6] & 0xFF );
_fifo_enqueue(u_RandomNumber.bytebuffer[5] & 0xFF );
_fifo_enqueue(u_RandomNumber.bytebuffer[4] & 0xFF );
_fifo_enqueue(u_RandomNumber.bytebuffer[3] & 0xFF );
_fifo_enqueue(u_RandomNumber.bytebuffer[2] & 0xFF );
_fifo_enqueue(u_RandomNumber.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_RandomNumber.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages ANDUC352BLEImpl::Notifications::NotifierReceived
void enqueue_ANDUC352BLEImpl_send_Notifications_NotifierReceived(struct ANDUC352BLEImpl_Instance *_instance){
fifo_lock();
if ( fifo_byte_available() > 4 ) {

_fifo_enqueue( (70 >> 8) & 0xFF );
_fifo_enqueue( 70 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_Notifications >> 8) & 0xFF );
_fifo_enqueue( _instance->id_Notifications & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages ANDUC352BLEImpl::Notifications::NotifierError
void enqueue_ANDUC352BLEImpl_send_Notifications_NotifierError(struct ANDUC352BLEImpl_Instance *_instance){
fifo_lock();
if ( fifo_byte_available() > 4 ) {

_fifo_enqueue( (71 >> 8) & 0xFF );
_fifo_enqueue( 71 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_Notifications >> 8) & 0xFF );
_fifo_enqueue( _instance->id_Notifications & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages ANDUC352BLEImpl::Notifications::NotifierRequest
void enqueue_ANDUC352BLEImpl_send_Notifications_NotifierRequest(struct ANDUC352BLEImpl_Instance *_instance){
fifo_lock();
if ( fifo_byte_available() > 4 ) {

_fifo_enqueue( (72 >> 8) & 0xFF );
_fifo_enqueue( 72 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_Notifications >> 8) & 0xFF );
_fifo_enqueue( _instance->id_Notifications & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages ANDUC352BLEImpl::Notifications::NotifierConnect
void enqueue_ANDUC352BLEImpl_send_Notifications_NotifierConnect(struct ANDUC352BLEImpl_Instance *_instance, uint8_t AddressType, bdaddr_t Address){
fifo_lock();
if ( fifo_byte_available() > 11 ) {

_fifo_enqueue( (73 >> 8) & 0xFF );
_fifo_enqueue( 73 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_Notifications >> 8) & 0xFF );
_fifo_enqueue( _instance->id_Notifications & 0xFF );

// parameter AddressType
union u_AddressType_t {
uint8_t p;
byte bytebuffer[1];
} u_AddressType;
u_AddressType.p = AddressType;
_fifo_enqueue(u_AddressType.bytebuffer[0] & 0xFF );

// parameter Address
union u_Address_t {
bdaddr_t p;
byte bytebuffer[6];
} u_Address;
u_Address.p = Address;
_fifo_enqueue(u_Address.bytebuffer[5] & 0xFF );
_fifo_enqueue(u_Address.bytebuffer[4] & 0xFF );
_fifo_enqueue(u_Address.bytebuffer[3] & 0xFF );
_fifo_enqueue(u_Address.bytebuffer[2] & 0xFF );
_fifo_enqueue(u_Address.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_Address.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages ANDUC352BLEImpl::Notifications::NotifierStored
void enqueue_ANDUC352BLEImpl_send_Notifications_NotifierStored(struct ANDUC352BLEImpl_Instance *_instance){
fifo_lock();
if ( fifo_byte_available() > 4 ) {

_fifo_enqueue( (74 >> 8) & 0xFF );
_fifo_enqueue( 74 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_Notifications >> 8) & 0xFF );
_fifo_enqueue( _instance->id_Notifications & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages ANDUC352BLEImpl::ATT::ATTReadByTypeError
void enqueue_ANDUC352BLEImpl_send_ATT_ATTReadByTypeError(struct ANDUC352BLEImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error){
fifo_lock();
if ( fifo_byte_available() > 9 ) {

_fifo_enqueue( (43 >> 8) & 0xFF );
_fifo_enqueue( 43 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_ATT >> 8) & 0xFF );
_fifo_enqueue( _instance->id_ATT & 0xFF );

// parameter ConnectionHandle
union u_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ConnectionHandle;
u_ConnectionHandle.p = ConnectionHandle;
_fifo_enqueue(u_ConnectionHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_ConnectionHandle.bytebuffer[0] & 0xFF );

// parameter AttributeHandle
union u_AttributeHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_AttributeHandle;
u_AttributeHandle.p = AttributeHandle;
_fifo_enqueue(u_AttributeHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_AttributeHandle.bytebuffer[0] & 0xFF );

// parameter Error
union u_Error_t {
uint8_t p;
byte bytebuffer[1];
} u_Error;
u_Error.p = Error;
_fifo_enqueue(u_Error.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages ANDUC352BLEImpl::ATT::ATTReadByGroupTypeError
void enqueue_ANDUC352BLEImpl_send_ATT_ATTReadByGroupTypeError(struct ANDUC352BLEImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error){
fifo_lock();
if ( fifo_byte_available() > 9 ) {

_fifo_enqueue( (44 >> 8) & 0xFF );
_fifo_enqueue( 44 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_ATT >> 8) & 0xFF );
_fifo_enqueue( _instance->id_ATT & 0xFF );

// parameter ConnectionHandle
union u_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ConnectionHandle;
u_ConnectionHandle.p = ConnectionHandle;
_fifo_enqueue(u_ConnectionHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_ConnectionHandle.bytebuffer[0] & 0xFF );

// parameter AttributeHandle
union u_AttributeHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_AttributeHandle;
u_AttributeHandle.p = AttributeHandle;
_fifo_enqueue(u_AttributeHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_AttributeHandle.bytebuffer[0] & 0xFF );

// parameter Error
union u_Error_t {
uint8_t p;
byte bytebuffer[1];
} u_Error;
u_Error.p = Error;
_fifo_enqueue(u_Error.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages ANDUC352BLEImpl::ATT::ATTWriteResponse
void enqueue_ANDUC352BLEImpl_send_ATT_ATTWriteResponse(struct ANDUC352BLEImpl_Instance *_instance, uint16_t ConnectionHandle){
fifo_lock();
if ( fifo_byte_available() > 6 ) {

_fifo_enqueue( (45 >> 8) & 0xFF );
_fifo_enqueue( 45 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_ATT >> 8) & 0xFF );
_fifo_enqueue( _instance->id_ATT & 0xFF );

// parameter ConnectionHandle
union u_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ConnectionHandle;
u_ConnectionHandle.p = ConnectionHandle;
_fifo_enqueue(u_ConnectionHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_ConnectionHandle.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages ANDUC352BLEImpl::ATT::ATTReadRequest
void enqueue_ANDUC352BLEImpl_send_ATT_ATTReadRequest(struct ANDUC352BLEImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle){
fifo_lock();
if ( fifo_byte_available() > 8 ) {

_fifo_enqueue( (46 >> 8) & 0xFF );
_fifo_enqueue( 46 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_ATT >> 8) & 0xFF );
_fifo_enqueue( _instance->id_ATT & 0xFF );

// parameter ConnectionHandle
union u_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ConnectionHandle;
u_ConnectionHandle.p = ConnectionHandle;
_fifo_enqueue(u_ConnectionHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_ConnectionHandle.bytebuffer[0] & 0xFF );

// parameter AttributeHandle
union u_AttributeHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_AttributeHandle;
u_AttributeHandle.p = AttributeHandle;
_fifo_enqueue(u_AttributeHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_AttributeHandle.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages ANDUC352BLEImpl::ATT::ATTFindInformationError
void enqueue_ANDUC352BLEImpl_send_ATT_ATTFindInformationError(struct ANDUC352BLEImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error){
fifo_lock();
if ( fifo_byte_available() > 9 ) {

_fifo_enqueue( (47 >> 8) & 0xFF );
_fifo_enqueue( 47 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_ATT >> 8) & 0xFF );
_fifo_enqueue( _instance->id_ATT & 0xFF );

// parameter ConnectionHandle
union u_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ConnectionHandle;
u_ConnectionHandle.p = ConnectionHandle;
_fifo_enqueue(u_ConnectionHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_ConnectionHandle.bytebuffer[0] & 0xFF );

// parameter AttributeHandle
union u_AttributeHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_AttributeHandle;
u_AttributeHandle.p = AttributeHandle;
_fifo_enqueue(u_AttributeHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_AttributeHandle.bytebuffer[0] & 0xFF );

// parameter Error
union u_Error_t {
uint8_t p;
byte bytebuffer[1];
} u_Error;
u_Error.p = Error;
_fifo_enqueue(u_Error.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages ANDUC352BLEImpl::ATT::ATTReadByTypeRequest
void enqueue_ANDUC352BLEImpl_send_ATT_ATTReadByTypeRequest(struct ANDUC352BLEImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t StartingHandle, uint16_t EndingHandle, ble_uuid_t AttributeType){
fifo_lock();
if ( fifo_byte_available() > 26 ) {

_fifo_enqueue( (48 >> 8) & 0xFF );
_fifo_enqueue( 48 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_ATT >> 8) & 0xFF );
_fifo_enqueue( _instance->id_ATT & 0xFF );

// parameter ConnectionHandle
union u_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ConnectionHandle;
u_ConnectionHandle.p = ConnectionHandle;
_fifo_enqueue(u_ConnectionHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_ConnectionHandle.bytebuffer[0] & 0xFF );

// parameter StartingHandle
union u_StartingHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_StartingHandle;
u_StartingHandle.p = StartingHandle;
_fifo_enqueue(u_StartingHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_StartingHandle.bytebuffer[0] & 0xFF );

// parameter EndingHandle
union u_EndingHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_EndingHandle;
u_EndingHandle.p = EndingHandle;
_fifo_enqueue(u_EndingHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_EndingHandle.bytebuffer[0] & 0xFF );

// parameter AttributeType
union u_AttributeType_t {
ble_uuid_t p;
byte bytebuffer[16];
} u_AttributeType;
u_AttributeType.p = AttributeType;
_fifo_enqueue(u_AttributeType.bytebuffer[15] & 0xFF );
_fifo_enqueue(u_AttributeType.bytebuffer[14] & 0xFF );
_fifo_enqueue(u_AttributeType.bytebuffer[13] & 0xFF );
_fifo_enqueue(u_AttributeType.bytebuffer[12] & 0xFF );
_fifo_enqueue(u_AttributeType.bytebuffer[11] & 0xFF );
_fifo_enqueue(u_AttributeType.bytebuffer[10] & 0xFF );
_fifo_enqueue(u_AttributeType.bytebuffer[9] & 0xFF );
_fifo_enqueue(u_AttributeType.bytebuffer[8] & 0xFF );
_fifo_enqueue(u_AttributeType.bytebuffer[7] & 0xFF );
_fifo_enqueue(u_AttributeType.bytebuffer[6] & 0xFF );
_fifo_enqueue(u_AttributeType.bytebuffer[5] & 0xFF );
_fifo_enqueue(u_AttributeType.bytebuffer[4] & 0xFF );
_fifo_enqueue(u_AttributeType.bytebuffer[3] & 0xFF );
_fifo_enqueue(u_AttributeType.bytebuffer[2] & 0xFF );
_fifo_enqueue(u_AttributeType.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_AttributeType.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages ANDUC352BLEImpl::ATT::ATTHandleValueConfirmation
void enqueue_ANDUC352BLEImpl_send_ATT_ATTHandleValueConfirmation(struct ANDUC352BLEImpl_Instance *_instance, uint16_t ConnectionHandle){
fifo_lock();
if ( fifo_byte_available() > 6 ) {

_fifo_enqueue( (49 >> 8) & 0xFF );
_fifo_enqueue( 49 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_ATT >> 8) & 0xFF );
_fifo_enqueue( _instance->id_ATT & 0xFF );

// parameter ConnectionHandle
union u_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ConnectionHandle;
u_ConnectionHandle.p = ConnectionHandle;
_fifo_enqueue(u_ConnectionHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_ConnectionHandle.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages ANDUC352BLEImpl::ATT::ATTReadError
void enqueue_ANDUC352BLEImpl_send_ATT_ATTReadError(struct ANDUC352BLEImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error){
fifo_lock();
if ( fifo_byte_available() > 9 ) {

_fifo_enqueue( (50 >> 8) & 0xFF );
_fifo_enqueue( 50 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_ATT >> 8) & 0xFF );
_fifo_enqueue( _instance->id_ATT & 0xFF );

// parameter ConnectionHandle
union u_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ConnectionHandle;
u_ConnectionHandle.p = ConnectionHandle;
_fifo_enqueue(u_ConnectionHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_ConnectionHandle.bytebuffer[0] & 0xFF );

// parameter AttributeHandle
union u_AttributeHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_AttributeHandle;
u_AttributeHandle.p = AttributeHandle;
_fifo_enqueue(u_AttributeHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_AttributeHandle.bytebuffer[0] & 0xFF );

// parameter Error
union u_Error_t {
uint8_t p;
byte bytebuffer[1];
} u_Error;
u_Error.p = Error;
_fifo_enqueue(u_Error.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages ANDUC352BLEImpl::ATT::ATTWriteRequest
void enqueue_ANDUC352BLEImpl_send_ATT_ATTWriteRequest(struct ANDUC352BLEImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, ble_gatt_data_t AttributeValue){
fifo_lock();
if ( fifo_byte_available() > 32 ) {

_fifo_enqueue( (51 >> 8) & 0xFF );
_fifo_enqueue( 51 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_ATT >> 8) & 0xFF );
_fifo_enqueue( _instance->id_ATT & 0xFF );

// parameter ConnectionHandle
union u_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ConnectionHandle;
u_ConnectionHandle.p = ConnectionHandle;
_fifo_enqueue(u_ConnectionHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_ConnectionHandle.bytebuffer[0] & 0xFF );

// parameter AttributeHandle
union u_AttributeHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_AttributeHandle;
u_AttributeHandle.p = AttributeHandle;
_fifo_enqueue(u_AttributeHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_AttributeHandle.bytebuffer[0] & 0xFF );

// parameter AttributeValue
union u_AttributeValue_t {
ble_gatt_data_t p;
byte bytebuffer[24];
} u_AttributeValue;
u_AttributeValue.p = AttributeValue;
_fifo_enqueue(u_AttributeValue.bytebuffer[23] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[22] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[21] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[20] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[19] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[18] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[17] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[16] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[15] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[14] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[13] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[12] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[11] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[10] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[9] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[8] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[7] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[6] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[5] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[4] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[3] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[2] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages ANDUC352BLEImpl::ATT::ATTWriteCommand
void enqueue_ANDUC352BLEImpl_send_ATT_ATTWriteCommand(struct ANDUC352BLEImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, ble_gatt_data_t AttributeValue){
fifo_lock();
if ( fifo_byte_available() > 32 ) {

_fifo_enqueue( (52 >> 8) & 0xFF );
_fifo_enqueue( 52 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_ATT >> 8) & 0xFF );
_fifo_enqueue( _instance->id_ATT & 0xFF );

// parameter ConnectionHandle
union u_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ConnectionHandle;
u_ConnectionHandle.p = ConnectionHandle;
_fifo_enqueue(u_ConnectionHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_ConnectionHandle.bytebuffer[0] & 0xFF );

// parameter AttributeHandle
union u_AttributeHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_AttributeHandle;
u_AttributeHandle.p = AttributeHandle;
_fifo_enqueue(u_AttributeHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_AttributeHandle.bytebuffer[0] & 0xFF );

// parameter AttributeValue
union u_AttributeValue_t {
ble_gatt_data_t p;
byte bytebuffer[24];
} u_AttributeValue;
u_AttributeValue.p = AttributeValue;
_fifo_enqueue(u_AttributeValue.bytebuffer[23] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[22] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[21] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[20] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[19] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[18] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[17] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[16] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[15] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[14] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[13] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[12] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[11] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[10] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[9] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[8] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[7] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[6] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[5] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[4] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[3] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[2] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages ANDUC352BLEImpl::ATT::ATTWriteError
void enqueue_ANDUC352BLEImpl_send_ATT_ATTWriteError(struct ANDUC352BLEImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error){
fifo_lock();
if ( fifo_byte_available() > 9 ) {

_fifo_enqueue( (53 >> 8) & 0xFF );
_fifo_enqueue( 53 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_ATT >> 8) & 0xFF );
_fifo_enqueue( _instance->id_ATT & 0xFF );

// parameter ConnectionHandle
union u_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ConnectionHandle;
u_ConnectionHandle.p = ConnectionHandle;
_fifo_enqueue(u_ConnectionHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_ConnectionHandle.bytebuffer[0] & 0xFF );

// parameter AttributeHandle
union u_AttributeHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_AttributeHandle;
u_AttributeHandle.p = AttributeHandle;
_fifo_enqueue(u_AttributeHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_AttributeHandle.bytebuffer[0] & 0xFF );

// parameter Error
union u_Error_t {
uint8_t p;
byte bytebuffer[1];
} u_Error;
u_Error.p = Error;
_fifo_enqueue(u_Error.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages ANDUC352BLEImpl::ATT::ATTHandleValueNotification
void enqueue_ANDUC352BLEImpl_send_ATT_ATTHandleValueNotification(struct ANDUC352BLEImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, ble_gatt_data_t AttributeValue){
fifo_lock();
if ( fifo_byte_available() > 32 ) {

_fifo_enqueue( (54 >> 8) & 0xFF );
_fifo_enqueue( 54 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_ATT >> 8) & 0xFF );
_fifo_enqueue( _instance->id_ATT & 0xFF );

// parameter ConnectionHandle
union u_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ConnectionHandle;
u_ConnectionHandle.p = ConnectionHandle;
_fifo_enqueue(u_ConnectionHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_ConnectionHandle.bytebuffer[0] & 0xFF );

// parameter AttributeHandle
union u_AttributeHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_AttributeHandle;
u_AttributeHandle.p = AttributeHandle;
_fifo_enqueue(u_AttributeHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_AttributeHandle.bytebuffer[0] & 0xFF );

// parameter AttributeValue
union u_AttributeValue_t {
ble_gatt_data_t p;
byte bytebuffer[24];
} u_AttributeValue;
u_AttributeValue.p = AttributeValue;
_fifo_enqueue(u_AttributeValue.bytebuffer[23] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[22] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[21] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[20] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[19] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[18] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[17] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[16] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[15] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[14] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[13] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[12] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[11] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[10] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[9] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[8] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[7] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[6] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[5] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[4] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[3] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[2] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages ANDUC352BLEImpl::ATT::ATTFindInformationResponse
void enqueue_ANDUC352BLEImpl_send_ATT_ATTFindInformationResponse(struct ANDUC352BLEImpl_Instance *_instance, uint16_t ConnectionHandle, uint8_t Format, ble_gatt_data_t InformationData){
fifo_lock();
if ( fifo_byte_available() > 31 ) {

_fifo_enqueue( (55 >> 8) & 0xFF );
_fifo_enqueue( 55 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_ATT >> 8) & 0xFF );
_fifo_enqueue( _instance->id_ATT & 0xFF );

// parameter ConnectionHandle
union u_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ConnectionHandle;
u_ConnectionHandle.p = ConnectionHandle;
_fifo_enqueue(u_ConnectionHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_ConnectionHandle.bytebuffer[0] & 0xFF );

// parameter Format
union u_Format_t {
uint8_t p;
byte bytebuffer[1];
} u_Format;
u_Format.p = Format;
_fifo_enqueue(u_Format.bytebuffer[0] & 0xFF );

// parameter InformationData
union u_InformationData_t {
ble_gatt_data_t p;
byte bytebuffer[24];
} u_InformationData;
u_InformationData.p = InformationData;
_fifo_enqueue(u_InformationData.bytebuffer[23] & 0xFF );
_fifo_enqueue(u_InformationData.bytebuffer[22] & 0xFF );
_fifo_enqueue(u_InformationData.bytebuffer[21] & 0xFF );
_fifo_enqueue(u_InformationData.bytebuffer[20] & 0xFF );
_fifo_enqueue(u_InformationData.bytebuffer[19] & 0xFF );
_fifo_enqueue(u_InformationData.bytebuffer[18] & 0xFF );
_fifo_enqueue(u_InformationData.bytebuffer[17] & 0xFF );
_fifo_enqueue(u_InformationData.bytebuffer[16] & 0xFF );
_fifo_enqueue(u_InformationData.bytebuffer[15] & 0xFF );
_fifo_enqueue(u_InformationData.bytebuffer[14] & 0xFF );
_fifo_enqueue(u_InformationData.bytebuffer[13] & 0xFF );
_fifo_enqueue(u_InformationData.bytebuffer[12] & 0xFF );
_fifo_enqueue(u_InformationData.bytebuffer[11] & 0xFF );
_fifo_enqueue(u_InformationData.bytebuffer[10] & 0xFF );
_fifo_enqueue(u_InformationData.bytebuffer[9] & 0xFF );
_fifo_enqueue(u_InformationData.bytebuffer[8] & 0xFF );
_fifo_enqueue(u_InformationData.bytebuffer[7] & 0xFF );
_fifo_enqueue(u_InformationData.bytebuffer[6] & 0xFF );
_fifo_enqueue(u_InformationData.bytebuffer[5] & 0xFF );
_fifo_enqueue(u_InformationData.bytebuffer[4] & 0xFF );
_fifo_enqueue(u_InformationData.bytebuffer[3] & 0xFF );
_fifo_enqueue(u_InformationData.bytebuffer[2] & 0xFF );
_fifo_enqueue(u_InformationData.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_InformationData.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages ANDUC352BLEImpl::ATT::ATTReadByGroupTypeResponse
void enqueue_ANDUC352BLEImpl_send_ATT_ATTReadByGroupTypeResponse(struct ANDUC352BLEImpl_Instance *_instance, uint16_t ConnectionHandle, uint8_t Length, ble_gatt_data_t AttributeDataList){
fifo_lock();
if ( fifo_byte_available() > 31 ) {

_fifo_enqueue( (56 >> 8) & 0xFF );
_fifo_enqueue( 56 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_ATT >> 8) & 0xFF );
_fifo_enqueue( _instance->id_ATT & 0xFF );

// parameter ConnectionHandle
union u_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ConnectionHandle;
u_ConnectionHandle.p = ConnectionHandle;
_fifo_enqueue(u_ConnectionHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_ConnectionHandle.bytebuffer[0] & 0xFF );

// parameter Length
union u_Length_t {
uint8_t p;
byte bytebuffer[1];
} u_Length;
u_Length.p = Length;
_fifo_enqueue(u_Length.bytebuffer[0] & 0xFF );

// parameter AttributeDataList
union u_AttributeDataList_t {
ble_gatt_data_t p;
byte bytebuffer[24];
} u_AttributeDataList;
u_AttributeDataList.p = AttributeDataList;
_fifo_enqueue(u_AttributeDataList.bytebuffer[23] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[22] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[21] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[20] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[19] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[18] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[17] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[16] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[15] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[14] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[13] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[12] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[11] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[10] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[9] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[8] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[7] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[6] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[5] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[4] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[3] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[2] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages ANDUC352BLEImpl::ATT::ATTReadByTypeResponse
void enqueue_ANDUC352BLEImpl_send_ATT_ATTReadByTypeResponse(struct ANDUC352BLEImpl_Instance *_instance, uint16_t ConnectionHandle, uint8_t Length, ble_gatt_data_t AttributeDataList){
fifo_lock();
if ( fifo_byte_available() > 31 ) {

_fifo_enqueue( (57 >> 8) & 0xFF );
_fifo_enqueue( 57 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_ATT >> 8) & 0xFF );
_fifo_enqueue( _instance->id_ATT & 0xFF );

// parameter ConnectionHandle
union u_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ConnectionHandle;
u_ConnectionHandle.p = ConnectionHandle;
_fifo_enqueue(u_ConnectionHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_ConnectionHandle.bytebuffer[0] & 0xFF );

// parameter Length
union u_Length_t {
uint8_t p;
byte bytebuffer[1];
} u_Length;
u_Length.p = Length;
_fifo_enqueue(u_Length.bytebuffer[0] & 0xFF );

// parameter AttributeDataList
union u_AttributeDataList_t {
ble_gatt_data_t p;
byte bytebuffer[24];
} u_AttributeDataList;
u_AttributeDataList.p = AttributeDataList;
_fifo_enqueue(u_AttributeDataList.bytebuffer[23] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[22] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[21] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[20] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[19] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[18] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[17] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[16] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[15] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[14] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[13] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[12] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[11] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[10] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[9] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[8] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[7] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[6] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[5] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[4] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[3] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[2] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages ANDUC352BLEImpl::ATT::ATTFindInformationRequest
void enqueue_ANDUC352BLEImpl_send_ATT_ATTFindInformationRequest(struct ANDUC352BLEImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t StartingHandle, uint16_t EndingHandle){
fifo_lock();
if ( fifo_byte_available() > 10 ) {

_fifo_enqueue( (58 >> 8) & 0xFF );
_fifo_enqueue( 58 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_ATT >> 8) & 0xFF );
_fifo_enqueue( _instance->id_ATT & 0xFF );

// parameter ConnectionHandle
union u_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ConnectionHandle;
u_ConnectionHandle.p = ConnectionHandle;
_fifo_enqueue(u_ConnectionHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_ConnectionHandle.bytebuffer[0] & 0xFF );

// parameter StartingHandle
union u_StartingHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_StartingHandle;
u_StartingHandle.p = StartingHandle;
_fifo_enqueue(u_StartingHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_StartingHandle.bytebuffer[0] & 0xFF );

// parameter EndingHandle
union u_EndingHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_EndingHandle;
u_EndingHandle.p = EndingHandle;
_fifo_enqueue(u_EndingHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_EndingHandle.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages ANDUC352BLEImpl::ATT::ATTReadResponse
void enqueue_ANDUC352BLEImpl_send_ATT_ATTReadResponse(struct ANDUC352BLEImpl_Instance *_instance, uint16_t ConnectionHandle, ble_gatt_data_t AttributeValue){
fifo_lock();
if ( fifo_byte_available() > 30 ) {

_fifo_enqueue( (59 >> 8) & 0xFF );
_fifo_enqueue( 59 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_ATT >> 8) & 0xFF );
_fifo_enqueue( _instance->id_ATT & 0xFF );

// parameter ConnectionHandle
union u_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ConnectionHandle;
u_ConnectionHandle.p = ConnectionHandle;
_fifo_enqueue(u_ConnectionHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_ConnectionHandle.bytebuffer[0] & 0xFF );

// parameter AttributeValue
union u_AttributeValue_t {
ble_gatt_data_t p;
byte bytebuffer[24];
} u_AttributeValue;
u_AttributeValue.p = AttributeValue;
_fifo_enqueue(u_AttributeValue.bytebuffer[23] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[22] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[21] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[20] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[19] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[18] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[17] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[16] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[15] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[14] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[13] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[12] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[11] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[10] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[9] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[8] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[7] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[6] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[5] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[4] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[3] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[2] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages ANDUC352BLEImpl::ATT::ATTReadByGroupTypeRequest
void enqueue_ANDUC352BLEImpl_send_ATT_ATTReadByGroupTypeRequest(struct ANDUC352BLEImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t StartingHandle, uint16_t EndingHandle, ble_uuid_t AttributeGroupType){
fifo_lock();
if ( fifo_byte_available() > 26 ) {

_fifo_enqueue( (60 >> 8) & 0xFF );
_fifo_enqueue( 60 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_ATT >> 8) & 0xFF );
_fifo_enqueue( _instance->id_ATT & 0xFF );

// parameter ConnectionHandle
union u_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ConnectionHandle;
u_ConnectionHandle.p = ConnectionHandle;
_fifo_enqueue(u_ConnectionHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_ConnectionHandle.bytebuffer[0] & 0xFF );

// parameter StartingHandle
union u_StartingHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_StartingHandle;
u_StartingHandle.p = StartingHandle;
_fifo_enqueue(u_StartingHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_StartingHandle.bytebuffer[0] & 0xFF );

// parameter EndingHandle
union u_EndingHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_EndingHandle;
u_EndingHandle.p = EndingHandle;
_fifo_enqueue(u_EndingHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_EndingHandle.bytebuffer[0] & 0xFF );

// parameter AttributeGroupType
union u_AttributeGroupType_t {
ble_uuid_t p;
byte bytebuffer[16];
} u_AttributeGroupType;
u_AttributeGroupType.p = AttributeGroupType;
_fifo_enqueue(u_AttributeGroupType.bytebuffer[15] & 0xFF );
_fifo_enqueue(u_AttributeGroupType.bytebuffer[14] & 0xFF );
_fifo_enqueue(u_AttributeGroupType.bytebuffer[13] & 0xFF );
_fifo_enqueue(u_AttributeGroupType.bytebuffer[12] & 0xFF );
_fifo_enqueue(u_AttributeGroupType.bytebuffer[11] & 0xFF );
_fifo_enqueue(u_AttributeGroupType.bytebuffer[10] & 0xFF );
_fifo_enqueue(u_AttributeGroupType.bytebuffer[9] & 0xFF );
_fifo_enqueue(u_AttributeGroupType.bytebuffer[8] & 0xFF );
_fifo_enqueue(u_AttributeGroupType.bytebuffer[7] & 0xFF );
_fifo_enqueue(u_AttributeGroupType.bytebuffer[6] & 0xFF );
_fifo_enqueue(u_AttributeGroupType.bytebuffer[5] & 0xFF );
_fifo_enqueue(u_AttributeGroupType.bytebuffer[4] & 0xFF );
_fifo_enqueue(u_AttributeGroupType.bytebuffer[3] & 0xFF );
_fifo_enqueue(u_AttributeGroupType.bytebuffer[2] & 0xFF );
_fifo_enqueue(u_AttributeGroupType.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_AttributeGroupType.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages ANDUC352BLEImpl::ATT::ATTHandleValueIndication
void enqueue_ANDUC352BLEImpl_send_ATT_ATTHandleValueIndication(struct ANDUC352BLEImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, ble_gatt_data_t AttributeValue){
fifo_lock();
if ( fifo_byte_available() > 32 ) {

_fifo_enqueue( (61 >> 8) & 0xFF );
_fifo_enqueue( 61 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_ATT >> 8) & 0xFF );
_fifo_enqueue( _instance->id_ATT & 0xFF );

// parameter ConnectionHandle
union u_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ConnectionHandle;
u_ConnectionHandle.p = ConnectionHandle;
_fifo_enqueue(u_ConnectionHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_ConnectionHandle.bytebuffer[0] & 0xFF );

// parameter AttributeHandle
union u_AttributeHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_AttributeHandle;
u_AttributeHandle.p = AttributeHandle;
_fifo_enqueue(u_AttributeHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_AttributeHandle.bytebuffer[0] & 0xFF );

// parameter AttributeValue
union u_AttributeValue_t {
ble_gatt_data_t p;
byte bytebuffer[24];
} u_AttributeValue;
u_AttributeValue.p = AttributeValue;
_fifo_enqueue(u_AttributeValue.bytebuffer[23] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[22] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[21] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[20] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[19] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[18] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[17] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[16] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[15] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[14] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[13] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[12] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[11] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[10] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[9] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[8] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[7] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[6] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[5] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[4] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[3] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[2] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages BLEInitialiserImpl::Initialiser::Stopped
void enqueue_BLEInitialiserImpl_send_Initialiser_Stopped(struct BLEInitialiserImpl_Instance *_instance){
fifo_lock();
if ( fifo_byte_available() > 4 ) {

_fifo_enqueue( (5 >> 8) & 0xFF );
_fifo_enqueue( 5 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_Initialiser >> 8) & 0xFF );
_fifo_enqueue( _instance->id_Initialiser & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages BLEInitialiserImpl::Initialiser::DeviceInitialised
void enqueue_BLEInitialiserImpl_send_Initialiser_DeviceInitialised(struct BLEInitialiserImpl_Instance *_instance, bdaddr_t Address){
fifo_lock();
if ( fifo_byte_available() > 10 ) {

_fifo_enqueue( (75 >> 8) & 0xFF );
_fifo_enqueue( 75 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_Initialiser >> 8) & 0xFF );
_fifo_enqueue( _instance->id_Initialiser & 0xFF );

// parameter Address
union u_Address_t {
bdaddr_t p;
byte bytebuffer[6];
} u_Address;
u_Address.p = Address;
_fifo_enqueue(u_Address.bytebuffer[5] & 0xFF );
_fifo_enqueue(u_Address.bytebuffer[4] & 0xFF );
_fifo_enqueue(u_Address.bytebuffer[3] & 0xFF );
_fifo_enqueue(u_Address.bytebuffer[2] & 0xFF );
_fifo_enqueue(u_Address.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_Address.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages BLEInitialiserImpl::Initialiser::Started
void enqueue_BLEInitialiserImpl_send_Initialiser_Started(struct BLEInitialiserImpl_Instance *_instance){
fifo_lock();
if ( fifo_byte_available() > 4 ) {

_fifo_enqueue( (6 >> 8) & 0xFF );
_fifo_enqueue( 6 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_Initialiser >> 8) & 0xFF );
_fifo_enqueue( _instance->id_Initialiser & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages BLEInitialiserImpl::Initialiser::Failure
void enqueue_BLEInitialiserImpl_send_Initialiser_Failure(struct BLEInitialiserImpl_Instance *_instance){
fifo_lock();
if ( fifo_byte_available() > 4 ) {

_fifo_enqueue( (7 >> 8) & 0xFF );
_fifo_enqueue( 7 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_Initialiser >> 8) & 0xFF );
_fifo_enqueue( _instance->id_Initialiser & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages BLEInitialiserImpl::Socket::Open
void enqueue_BLEInitialiserImpl_send_Socket_Open(struct BLEInitialiserImpl_Instance *_instance){
fifo_lock();
if ( fifo_byte_available() > 4 ) {

_fifo_enqueue( (9 >> 8) & 0xFF );
_fifo_enqueue( 9 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_Socket >> 8) & 0xFF );
_fifo_enqueue( _instance->id_Socket & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages BLEInitialiserImpl::Socket::Close
void enqueue_BLEInitialiserImpl_send_Socket_Close(struct BLEInitialiserImpl_Instance *_instance){
fifo_lock();
if ( fifo_byte_available() > 4 ) {

_fifo_enqueue( (10 >> 8) & 0xFF );
_fifo_enqueue( 10 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_Socket >> 8) & 0xFF );
_fifo_enqueue( _instance->id_Socket & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages BLEInitialiserImpl::HCICommands::SetLEAdvertisementParameters
void enqueue_BLEInitialiserImpl_send_HCICommands_SetLEAdvertisementParameters(struct BLEInitialiserImpl_Instance *_instance, uint16_t MinInterval, uint16_t MaxInterval, uint8_t Type, uint8_t OwnAddressType, uint8_t PeerAddressType, bdaddr_t PeerAddress, uint8_t Channel, uint8_t FilterPolicy){
fifo_lock();
if ( fifo_byte_available() > 19 ) {

_fifo_enqueue( (11 >> 8) & 0xFF );
_fifo_enqueue( 11 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_HCICommands >> 8) & 0xFF );
_fifo_enqueue( _instance->id_HCICommands & 0xFF );

// parameter MinInterval
union u_MinInterval_t {
uint16_t p;
byte bytebuffer[2];
} u_MinInterval;
u_MinInterval.p = MinInterval;
_fifo_enqueue(u_MinInterval.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_MinInterval.bytebuffer[0] & 0xFF );

// parameter MaxInterval
union u_MaxInterval_t {
uint16_t p;
byte bytebuffer[2];
} u_MaxInterval;
u_MaxInterval.p = MaxInterval;
_fifo_enqueue(u_MaxInterval.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_MaxInterval.bytebuffer[0] & 0xFF );

// parameter Type
union u_Type_t {
uint8_t p;
byte bytebuffer[1];
} u_Type;
u_Type.p = Type;
_fifo_enqueue(u_Type.bytebuffer[0] & 0xFF );

// parameter OwnAddressType
union u_OwnAddressType_t {
uint8_t p;
byte bytebuffer[1];
} u_OwnAddressType;
u_OwnAddressType.p = OwnAddressType;
_fifo_enqueue(u_OwnAddressType.bytebuffer[0] & 0xFF );

// parameter PeerAddressType
union u_PeerAddressType_t {
uint8_t p;
byte bytebuffer[1];
} u_PeerAddressType;
u_PeerAddressType.p = PeerAddressType;
_fifo_enqueue(u_PeerAddressType.bytebuffer[0] & 0xFF );

// parameter PeerAddress
union u_PeerAddress_t {
bdaddr_t p;
byte bytebuffer[6];
} u_PeerAddress;
u_PeerAddress.p = PeerAddress;
_fifo_enqueue(u_PeerAddress.bytebuffer[5] & 0xFF );
_fifo_enqueue(u_PeerAddress.bytebuffer[4] & 0xFF );
_fifo_enqueue(u_PeerAddress.bytebuffer[3] & 0xFF );
_fifo_enqueue(u_PeerAddress.bytebuffer[2] & 0xFF );
_fifo_enqueue(u_PeerAddress.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_PeerAddress.bytebuffer[0] & 0xFF );

// parameter Channel
union u_Channel_t {
uint8_t p;
byte bytebuffer[1];
} u_Channel;
u_Channel.p = Channel;
_fifo_enqueue(u_Channel.bytebuffer[0] & 0xFF );

// parameter FilterPolicy
union u_FilterPolicy_t {
uint8_t p;
byte bytebuffer[1];
} u_FilterPolicy;
u_FilterPolicy.p = FilterPolicy;
_fifo_enqueue(u_FilterPolicy.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages BLEInitialiserImpl::HCICommands::SetLEScanParameters
void enqueue_BLEInitialiserImpl_send_HCICommands_SetLEScanParameters(struct BLEInitialiserImpl_Instance *_instance, uint8_t Type, uint16_t Interval, uint16_t Window, uint8_t OwnAddressType, uint8_t FilterPolicy){
fifo_lock();
if ( fifo_byte_available() > 11 ) {

_fifo_enqueue( (12 >> 8) & 0xFF );
_fifo_enqueue( 12 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_HCICommands >> 8) & 0xFF );
_fifo_enqueue( _instance->id_HCICommands & 0xFF );

// parameter Type
union u_Type_t {
uint8_t p;
byte bytebuffer[1];
} u_Type;
u_Type.p = Type;
_fifo_enqueue(u_Type.bytebuffer[0] & 0xFF );

// parameter Interval
union u_Interval_t {
uint16_t p;
byte bytebuffer[2];
} u_Interval;
u_Interval.p = Interval;
_fifo_enqueue(u_Interval.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_Interval.bytebuffer[0] & 0xFF );

// parameter Window
union u_Window_t {
uint16_t p;
byte bytebuffer[2];
} u_Window;
u_Window.p = Window;
_fifo_enqueue(u_Window.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_Window.bytebuffer[0] & 0xFF );

// parameter OwnAddressType
union u_OwnAddressType_t {
uint8_t p;
byte bytebuffer[1];
} u_OwnAddressType;
u_OwnAddressType.p = OwnAddressType;
_fifo_enqueue(u_OwnAddressType.bytebuffer[0] & 0xFF );

// parameter FilterPolicy
union u_FilterPolicy_t {
uint8_t p;
byte bytebuffer[1];
} u_FilterPolicy;
u_FilterPolicy.p = FilterPolicy;
_fifo_enqueue(u_FilterPolicy.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages BLEInitialiserImpl::HCICommands::Disconnect
void enqueue_BLEInitialiserImpl_send_HCICommands_Disconnect(struct BLEInitialiserImpl_Instance *_instance, uint16_t ConnectionHandle, uint8_t Reason){
fifo_lock();
if ( fifo_byte_available() > 7 ) {

_fifo_enqueue( (13 >> 8) & 0xFF );
_fifo_enqueue( 13 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_HCICommands >> 8) & 0xFF );
_fifo_enqueue( _instance->id_HCICommands & 0xFF );

// parameter ConnectionHandle
union u_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ConnectionHandle;
u_ConnectionHandle.p = ConnectionHandle;
_fifo_enqueue(u_ConnectionHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_ConnectionHandle.bytebuffer[0] & 0xFF );

// parameter Reason
union u_Reason_t {
uint8_t p;
byte bytebuffer[1];
} u_Reason;
u_Reason.p = Reason;
_fifo_enqueue(u_Reason.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages BLEInitialiserImpl::HCICommands::SetEventMaskAll
void enqueue_BLEInitialiserImpl_send_HCICommands_SetEventMaskAll(struct BLEInitialiserImpl_Instance *_instance){
fifo_lock();
if ( fifo_byte_available() > 4 ) {

_fifo_enqueue( (14 >> 8) & 0xFF );
_fifo_enqueue( 14 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_HCICommands >> 8) & 0xFF );
_fifo_enqueue( _instance->id_HCICommands & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages BLEInitialiserImpl::HCICommands::SetLEAdvertiseEnable
void enqueue_BLEInitialiserImpl_send_HCICommands_SetLEAdvertiseEnable(struct BLEInitialiserImpl_Instance *_instance, uint8_t Enable){
fifo_lock();
if ( fifo_byte_available() > 5 ) {

_fifo_enqueue( (15 >> 8) & 0xFF );
_fifo_enqueue( 15 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_HCICommands >> 8) & 0xFF );
_fifo_enqueue( _instance->id_HCICommands & 0xFF );

// parameter Enable
union u_Enable_t {
uint8_t p;
byte bytebuffer[1];
} u_Enable;
u_Enable.p = Enable;
_fifo_enqueue(u_Enable.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages BLEInitialiserImpl::HCICommands::LERand
void enqueue_BLEInitialiserImpl_send_HCICommands_LERand(struct BLEInitialiserImpl_Instance *_instance){
fifo_lock();
if ( fifo_byte_available() > 4 ) {

_fifo_enqueue( (16 >> 8) & 0xFF );
_fifo_enqueue( 16 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_HCICommands >> 8) & 0xFF );
_fifo_enqueue( _instance->id_HCICommands & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages BLEInitialiserImpl::HCICommands::SetLEAdvertisingData
void enqueue_BLEInitialiserImpl_send_HCICommands_SetLEAdvertisingData(struct BLEInitialiserImpl_Instance *_instance, uint8_t Length, ble_adv_data_t Data){
fifo_lock();
if ( fifo_byte_available() > 36 ) {

_fifo_enqueue( (17 >> 8) & 0xFF );
_fifo_enqueue( 17 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_HCICommands >> 8) & 0xFF );
_fifo_enqueue( _instance->id_HCICommands & 0xFF );

// parameter Length
union u_Length_t {
uint8_t p;
byte bytebuffer[1];
} u_Length;
u_Length.p = Length;
_fifo_enqueue(u_Length.bytebuffer[0] & 0xFF );

// parameter Data
union u_Data_t {
ble_adv_data_t p;
byte bytebuffer[31];
} u_Data;
u_Data.p = Data;
_fifo_enqueue(u_Data.bytebuffer[30] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[29] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[28] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[27] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[26] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[25] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[24] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[23] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[22] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[21] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[20] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[19] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[18] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[17] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[16] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[15] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[14] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[13] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[12] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[11] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[10] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[9] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[8] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[7] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[6] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[5] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[4] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[3] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[2] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages BLEInitialiserImpl::HCICommands::SetLEEventMaskAll
void enqueue_BLEInitialiserImpl_send_HCICommands_SetLEEventMaskAll(struct BLEInitialiserImpl_Instance *_instance){
fifo_lock();
if ( fifo_byte_available() > 4 ) {

_fifo_enqueue( (18 >> 8) & 0xFF );
_fifo_enqueue( 18 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_HCICommands >> 8) & 0xFF );
_fifo_enqueue( _instance->id_HCICommands & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages BLEInitialiserImpl::HCICommands::LECreateConnectionCancel
void enqueue_BLEInitialiserImpl_send_HCICommands_LECreateConnectionCancel(struct BLEInitialiserImpl_Instance *_instance){
fifo_lock();
if ( fifo_byte_available() > 4 ) {

_fifo_enqueue( (19 >> 8) & 0xFF );
_fifo_enqueue( 19 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_HCICommands >> 8) & 0xFF );
_fifo_enqueue( _instance->id_HCICommands & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages BLEInitialiserImpl::HCICommands::LECreateConnection
void enqueue_BLEInitialiserImpl_send_HCICommands_LECreateConnection(struct BLEInitialiserImpl_Instance *_instance, uint16_t Interval, uint16_t Window, uint8_t FilterPolicy, uint8_t PeerAddressType, bdaddr_t PeerAddress, uint8_t OwnAddressType, uint16_t ConnIntervalMin, uint16_t ConnIntervalMax, uint16_t ConnLatency, uint16_t SupervisionTimeout, uint16_t CELengthMin, uint16_t CELengthMax){
fifo_lock();
if ( fifo_byte_available() > 29 ) {

_fifo_enqueue( (20 >> 8) & 0xFF );
_fifo_enqueue( 20 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_HCICommands >> 8) & 0xFF );
_fifo_enqueue( _instance->id_HCICommands & 0xFF );

// parameter Interval
union u_Interval_t {
uint16_t p;
byte bytebuffer[2];
} u_Interval;
u_Interval.p = Interval;
_fifo_enqueue(u_Interval.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_Interval.bytebuffer[0] & 0xFF );

// parameter Window
union u_Window_t {
uint16_t p;
byte bytebuffer[2];
} u_Window;
u_Window.p = Window;
_fifo_enqueue(u_Window.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_Window.bytebuffer[0] & 0xFF );

// parameter FilterPolicy
union u_FilterPolicy_t {
uint8_t p;
byte bytebuffer[1];
} u_FilterPolicy;
u_FilterPolicy.p = FilterPolicy;
_fifo_enqueue(u_FilterPolicy.bytebuffer[0] & 0xFF );

// parameter PeerAddressType
union u_PeerAddressType_t {
uint8_t p;
byte bytebuffer[1];
} u_PeerAddressType;
u_PeerAddressType.p = PeerAddressType;
_fifo_enqueue(u_PeerAddressType.bytebuffer[0] & 0xFF );

// parameter PeerAddress
union u_PeerAddress_t {
bdaddr_t p;
byte bytebuffer[6];
} u_PeerAddress;
u_PeerAddress.p = PeerAddress;
_fifo_enqueue(u_PeerAddress.bytebuffer[5] & 0xFF );
_fifo_enqueue(u_PeerAddress.bytebuffer[4] & 0xFF );
_fifo_enqueue(u_PeerAddress.bytebuffer[3] & 0xFF );
_fifo_enqueue(u_PeerAddress.bytebuffer[2] & 0xFF );
_fifo_enqueue(u_PeerAddress.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_PeerAddress.bytebuffer[0] & 0xFF );

// parameter OwnAddressType
union u_OwnAddressType_t {
uint8_t p;
byte bytebuffer[1];
} u_OwnAddressType;
u_OwnAddressType.p = OwnAddressType;
_fifo_enqueue(u_OwnAddressType.bytebuffer[0] & 0xFF );

// parameter ConnIntervalMin
union u_ConnIntervalMin_t {
uint16_t p;
byte bytebuffer[2];
} u_ConnIntervalMin;
u_ConnIntervalMin.p = ConnIntervalMin;
_fifo_enqueue(u_ConnIntervalMin.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_ConnIntervalMin.bytebuffer[0] & 0xFF );

// parameter ConnIntervalMax
union u_ConnIntervalMax_t {
uint16_t p;
byte bytebuffer[2];
} u_ConnIntervalMax;
u_ConnIntervalMax.p = ConnIntervalMax;
_fifo_enqueue(u_ConnIntervalMax.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_ConnIntervalMax.bytebuffer[0] & 0xFF );

// parameter ConnLatency
union u_ConnLatency_t {
uint16_t p;
byte bytebuffer[2];
} u_ConnLatency;
u_ConnLatency.p = ConnLatency;
_fifo_enqueue(u_ConnLatency.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_ConnLatency.bytebuffer[0] & 0xFF );

// parameter SupervisionTimeout
union u_SupervisionTimeout_t {
uint16_t p;
byte bytebuffer[2];
} u_SupervisionTimeout;
u_SupervisionTimeout.p = SupervisionTimeout;
_fifo_enqueue(u_SupervisionTimeout.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_SupervisionTimeout.bytebuffer[0] & 0xFF );

// parameter CELengthMin
union u_CELengthMin_t {
uint16_t p;
byte bytebuffer[2];
} u_CELengthMin;
u_CELengthMin.p = CELengthMin;
_fifo_enqueue(u_CELengthMin.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_CELengthMin.bytebuffer[0] & 0xFF );

// parameter CELengthMax
union u_CELengthMax_t {
uint16_t p;
byte bytebuffer[2];
} u_CELengthMax;
u_CELengthMax.p = CELengthMax;
_fifo_enqueue(u_CELengthMax.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_CELengthMax.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages BLEInitialiserImpl::HCICommands::LEEncrypt
void enqueue_BLEInitialiserImpl_send_HCICommands_LEEncrypt(struct BLEInitialiserImpl_Instance *_instance, ble_random_number_t Key, ble_random_number_t Plaintext){
fifo_lock();
if ( fifo_byte_available() > 36 ) {

_fifo_enqueue( (21 >> 8) & 0xFF );
_fifo_enqueue( 21 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_HCICommands >> 8) & 0xFF );
_fifo_enqueue( _instance->id_HCICommands & 0xFF );

// parameter Key
union u_Key_t {
ble_random_number_t p;
byte bytebuffer[16];
} u_Key;
u_Key.p = Key;
_fifo_enqueue(u_Key.bytebuffer[15] & 0xFF );
_fifo_enqueue(u_Key.bytebuffer[14] & 0xFF );
_fifo_enqueue(u_Key.bytebuffer[13] & 0xFF );
_fifo_enqueue(u_Key.bytebuffer[12] & 0xFF );
_fifo_enqueue(u_Key.bytebuffer[11] & 0xFF );
_fifo_enqueue(u_Key.bytebuffer[10] & 0xFF );
_fifo_enqueue(u_Key.bytebuffer[9] & 0xFF );
_fifo_enqueue(u_Key.bytebuffer[8] & 0xFF );
_fifo_enqueue(u_Key.bytebuffer[7] & 0xFF );
_fifo_enqueue(u_Key.bytebuffer[6] & 0xFF );
_fifo_enqueue(u_Key.bytebuffer[5] & 0xFF );
_fifo_enqueue(u_Key.bytebuffer[4] & 0xFF );
_fifo_enqueue(u_Key.bytebuffer[3] & 0xFF );
_fifo_enqueue(u_Key.bytebuffer[2] & 0xFF );
_fifo_enqueue(u_Key.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_Key.bytebuffer[0] & 0xFF );

// parameter Plaintext
union u_Plaintext_t {
ble_random_number_t p;
byte bytebuffer[16];
} u_Plaintext;
u_Plaintext.p = Plaintext;
_fifo_enqueue(u_Plaintext.bytebuffer[15] & 0xFF );
_fifo_enqueue(u_Plaintext.bytebuffer[14] & 0xFF );
_fifo_enqueue(u_Plaintext.bytebuffer[13] & 0xFF );
_fifo_enqueue(u_Plaintext.bytebuffer[12] & 0xFF );
_fifo_enqueue(u_Plaintext.bytebuffer[11] & 0xFF );
_fifo_enqueue(u_Plaintext.bytebuffer[10] & 0xFF );
_fifo_enqueue(u_Plaintext.bytebuffer[9] & 0xFF );
_fifo_enqueue(u_Plaintext.bytebuffer[8] & 0xFF );
_fifo_enqueue(u_Plaintext.bytebuffer[7] & 0xFF );
_fifo_enqueue(u_Plaintext.bytebuffer[6] & 0xFF );
_fifo_enqueue(u_Plaintext.bytebuffer[5] & 0xFF );
_fifo_enqueue(u_Plaintext.bytebuffer[4] & 0xFF );
_fifo_enqueue(u_Plaintext.bytebuffer[3] & 0xFF );
_fifo_enqueue(u_Plaintext.bytebuffer[2] & 0xFF );
_fifo_enqueue(u_Plaintext.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_Plaintext.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages BLEInitialiserImpl::HCICommands::SetEventMask
void enqueue_BLEInitialiserImpl_send_HCICommands_SetEventMask(struct BLEInitialiserImpl_Instance *_instance, set_event_mask_cp Mask){
fifo_lock();
if ( fifo_byte_available() > 12 ) {

_fifo_enqueue( (22 >> 8) & 0xFF );
_fifo_enqueue( 22 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_HCICommands >> 8) & 0xFF );
_fifo_enqueue( _instance->id_HCICommands & 0xFF );

// parameter Mask
union u_Mask_t {
set_event_mask_cp p;
byte bytebuffer[8];
} u_Mask;
u_Mask.p = Mask;
_fifo_enqueue(u_Mask.bytebuffer[7] & 0xFF );
_fifo_enqueue(u_Mask.bytebuffer[6] & 0xFF );
_fifo_enqueue(u_Mask.bytebuffer[5] & 0xFF );
_fifo_enqueue(u_Mask.bytebuffer[4] & 0xFF );
_fifo_enqueue(u_Mask.bytebuffer[3] & 0xFF );
_fifo_enqueue(u_Mask.bytebuffer[2] & 0xFF );
_fifo_enqueue(u_Mask.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_Mask.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages BLEInitialiserImpl::HCICommands::SetLocalName
void enqueue_BLEInitialiserImpl_send_HCICommands_SetLocalName(struct BLEInitialiserImpl_Instance *_instance, change_local_name_cp Name){
fifo_lock();
if ( fifo_byte_available() > 252 ) {

_fifo_enqueue( (23 >> 8) & 0xFF );
_fifo_enqueue( 23 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_HCICommands >> 8) & 0xFF );
_fifo_enqueue( _instance->id_HCICommands & 0xFF );

// parameter Name
union u_Name_t {
change_local_name_cp p;
byte bytebuffer[248];
} u_Name;
u_Name.p = Name;
_fifo_enqueue(u_Name.bytebuffer[247] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[246] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[245] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[244] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[243] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[242] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[241] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[240] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[239] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[238] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[237] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[236] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[235] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[234] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[233] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[232] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[231] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[230] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[229] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[228] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[227] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[226] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[225] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[224] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[223] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[222] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[221] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[220] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[219] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[218] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[217] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[216] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[215] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[214] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[213] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[212] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[211] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[210] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[209] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[208] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[207] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[206] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[205] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[204] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[203] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[202] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[201] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[200] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[199] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[198] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[197] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[196] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[195] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[194] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[193] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[192] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[191] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[190] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[189] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[188] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[187] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[186] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[185] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[184] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[183] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[182] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[181] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[180] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[179] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[178] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[177] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[176] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[175] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[174] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[173] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[172] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[171] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[170] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[169] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[168] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[167] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[166] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[165] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[164] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[163] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[162] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[161] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[160] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[159] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[158] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[157] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[156] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[155] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[154] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[153] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[152] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[151] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[150] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[149] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[148] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[147] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[146] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[145] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[144] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[143] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[142] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[141] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[140] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[139] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[138] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[137] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[136] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[135] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[134] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[133] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[132] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[131] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[130] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[129] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[128] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[127] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[126] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[125] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[124] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[123] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[122] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[121] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[120] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[119] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[118] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[117] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[116] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[115] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[114] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[113] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[112] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[111] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[110] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[109] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[108] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[107] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[106] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[105] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[104] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[103] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[102] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[101] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[100] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[99] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[98] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[97] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[96] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[95] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[94] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[93] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[92] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[91] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[90] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[89] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[88] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[87] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[86] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[85] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[84] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[83] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[82] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[81] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[80] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[79] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[78] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[77] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[76] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[75] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[74] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[73] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[72] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[71] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[70] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[69] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[68] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[67] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[66] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[65] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[64] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[63] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[62] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[61] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[60] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[59] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[58] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[57] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[56] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[55] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[54] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[53] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[52] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[51] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[50] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[49] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[48] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[47] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[46] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[45] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[44] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[43] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[42] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[41] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[40] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[39] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[38] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[37] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[36] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[35] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[34] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[33] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[32] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[31] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[30] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[29] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[28] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[27] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[26] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[25] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[24] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[23] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[22] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[21] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[20] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[19] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[18] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[17] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[16] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[15] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[14] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[13] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[12] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[11] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[10] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[9] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[8] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[7] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[6] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[5] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[4] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[3] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[2] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages BLEInitialiserImpl::HCICommands::Reset
void enqueue_BLEInitialiserImpl_send_HCICommands_Reset(struct BLEInitialiserImpl_Instance *_instance){
fifo_lock();
if ( fifo_byte_available() > 4 ) {

_fifo_enqueue( (24 >> 8) & 0xFF );
_fifo_enqueue( 24 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_HCICommands >> 8) & 0xFF );
_fifo_enqueue( _instance->id_HCICommands & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages BLEInitialiserImpl::HCICommands::LEStartEncryption
void enqueue_BLEInitialiserImpl_send_HCICommands_LEStartEncryption(struct BLEInitialiserImpl_Instance *_instance, uint16_t ConnectionHandle, ble_random_part_t Random, uint16_t EDIV, ble_random_number_t LTK){
fifo_lock();
if ( fifo_byte_available() > 32 ) {

_fifo_enqueue( (25 >> 8) & 0xFF );
_fifo_enqueue( 25 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_HCICommands >> 8) & 0xFF );
_fifo_enqueue( _instance->id_HCICommands & 0xFF );

// parameter ConnectionHandle
union u_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ConnectionHandle;
u_ConnectionHandle.p = ConnectionHandle;
_fifo_enqueue(u_ConnectionHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_ConnectionHandle.bytebuffer[0] & 0xFF );

// parameter Random
union u_Random_t {
ble_random_part_t p;
byte bytebuffer[8];
} u_Random;
u_Random.p = Random;
_fifo_enqueue(u_Random.bytebuffer[7] & 0xFF );
_fifo_enqueue(u_Random.bytebuffer[6] & 0xFF );
_fifo_enqueue(u_Random.bytebuffer[5] & 0xFF );
_fifo_enqueue(u_Random.bytebuffer[4] & 0xFF );
_fifo_enqueue(u_Random.bytebuffer[3] & 0xFF );
_fifo_enqueue(u_Random.bytebuffer[2] & 0xFF );
_fifo_enqueue(u_Random.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_Random.bytebuffer[0] & 0xFF );

// parameter EDIV
union u_EDIV_t {
uint16_t p;
byte bytebuffer[2];
} u_EDIV;
u_EDIV.p = EDIV;
_fifo_enqueue(u_EDIV.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_EDIV.bytebuffer[0] & 0xFF );

// parameter LTK
union u_LTK_t {
ble_random_number_t p;
byte bytebuffer[16];
} u_LTK;
u_LTK.p = LTK;
_fifo_enqueue(u_LTK.bytebuffer[15] & 0xFF );
_fifo_enqueue(u_LTK.bytebuffer[14] & 0xFF );
_fifo_enqueue(u_LTK.bytebuffer[13] & 0xFF );
_fifo_enqueue(u_LTK.bytebuffer[12] & 0xFF );
_fifo_enqueue(u_LTK.bytebuffer[11] & 0xFF );
_fifo_enqueue(u_LTK.bytebuffer[10] & 0xFF );
_fifo_enqueue(u_LTK.bytebuffer[9] & 0xFF );
_fifo_enqueue(u_LTK.bytebuffer[8] & 0xFF );
_fifo_enqueue(u_LTK.bytebuffer[7] & 0xFF );
_fifo_enqueue(u_LTK.bytebuffer[6] & 0xFF );
_fifo_enqueue(u_LTK.bytebuffer[5] & 0xFF );
_fifo_enqueue(u_LTK.bytebuffer[4] & 0xFF );
_fifo_enqueue(u_LTK.bytebuffer[3] & 0xFF );
_fifo_enqueue(u_LTK.bytebuffer[2] & 0xFF );
_fifo_enqueue(u_LTK.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_LTK.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages BLEInitialiserImpl::HCICommands::SetLEScanEnable
void enqueue_BLEInitialiserImpl_send_HCICommands_SetLEScanEnable(struct BLEInitialiserImpl_Instance *_instance, uint8_t Enable, uint8_t FilterDuplicates){
fifo_lock();
if ( fifo_byte_available() > 6 ) {

_fifo_enqueue( (26 >> 8) & 0xFF );
_fifo_enqueue( 26 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_HCICommands >> 8) & 0xFF );
_fifo_enqueue( _instance->id_HCICommands & 0xFF );

// parameter Enable
union u_Enable_t {
uint8_t p;
byte bytebuffer[1];
} u_Enable;
u_Enable.p = Enable;
_fifo_enqueue(u_Enable.bytebuffer[0] & 0xFF );

// parameter FilterDuplicates
union u_FilterDuplicates_t {
uint8_t p;
byte bytebuffer[1];
} u_FilterDuplicates;
u_FilterDuplicates.p = FilterDuplicates;
_fifo_enqueue(u_FilterDuplicates.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages BLEInitialiserImpl::HCICommands::SetLEEventMask
void enqueue_BLEInitialiserImpl_send_HCICommands_SetLEEventMask(struct BLEInitialiserImpl_Instance *_instance, set_event_mask_cp Mask){
fifo_lock();
if ( fifo_byte_available() > 12 ) {

_fifo_enqueue( (27 >> 8) & 0xFF );
_fifo_enqueue( 27 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_HCICommands >> 8) & 0xFF );
_fifo_enqueue( _instance->id_HCICommands & 0xFF );

// parameter Mask
union u_Mask_t {
set_event_mask_cp p;
byte bytebuffer[8];
} u_Mask;
u_Mask.p = Mask;
_fifo_enqueue(u_Mask.bytebuffer[7] & 0xFF );
_fifo_enqueue(u_Mask.bytebuffer[6] & 0xFF );
_fifo_enqueue(u_Mask.bytebuffer[5] & 0xFF );
_fifo_enqueue(u_Mask.bytebuffer[4] & 0xFF );
_fifo_enqueue(u_Mask.bytebuffer[3] & 0xFF );
_fifo_enqueue(u_Mask.bytebuffer[2] & 0xFF );
_fifo_enqueue(u_Mask.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_Mask.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages BLEInitialiserImpl::HCICommands::SetLEScanResponseData
void enqueue_BLEInitialiserImpl_send_HCICommands_SetLEScanResponseData(struct BLEInitialiserImpl_Instance *_instance, uint8_t Length, ble_adv_data_t Data){
fifo_lock();
if ( fifo_byte_available() > 36 ) {

_fifo_enqueue( (28 >> 8) & 0xFF );
_fifo_enqueue( 28 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_HCICommands >> 8) & 0xFF );
_fifo_enqueue( _instance->id_HCICommands & 0xFF );

// parameter Length
union u_Length_t {
uint8_t p;
byte bytebuffer[1];
} u_Length;
u_Length.p = Length;
_fifo_enqueue(u_Length.bytebuffer[0] & 0xFF );

// parameter Data
union u_Data_t {
ble_adv_data_t p;
byte bytebuffer[31];
} u_Data;
u_Data.p = Data;
_fifo_enqueue(u_Data.bytebuffer[30] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[29] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[28] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[27] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[26] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[25] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[24] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[23] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[22] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[21] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[20] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[19] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[18] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[17] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[16] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[15] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[14] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[13] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[12] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[11] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[10] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[9] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[8] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[7] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[6] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[5] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[4] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[3] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[2] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages BLEInitialiserImpl::SMP::SMPPairingRequest
void enqueue_BLEInitialiserImpl_send_SMP_SMPPairingRequest(struct BLEInitialiserImpl_Instance *_instance, uint16_t Handle, uint8_t IOCapability, uint8_t OOBDataPresent, uint8_t Bonding, uint8_t MITM, uint8_t SecureConnection, uint8_t Keypress, uint8_t MaximumEncryptionKeySize, uint8_t InitiatorKeyDistribution, uint8_t ResponderKeyDistribution){
fifo_lock();
if ( fifo_byte_available() > 15 ) {

_fifo_enqueue( (29 >> 8) & 0xFF );
_fifo_enqueue( 29 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_SMP >> 8) & 0xFF );
_fifo_enqueue( _instance->id_SMP & 0xFF );

// parameter Handle
union u_Handle_t {
uint16_t p;
byte bytebuffer[2];
} u_Handle;
u_Handle.p = Handle;
_fifo_enqueue(u_Handle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_Handle.bytebuffer[0] & 0xFF );

// parameter IOCapability
union u_IOCapability_t {
uint8_t p;
byte bytebuffer[1];
} u_IOCapability;
u_IOCapability.p = IOCapability;
_fifo_enqueue(u_IOCapability.bytebuffer[0] & 0xFF );

// parameter OOBDataPresent
union u_OOBDataPresent_t {
uint8_t p;
byte bytebuffer[1];
} u_OOBDataPresent;
u_OOBDataPresent.p = OOBDataPresent;
_fifo_enqueue(u_OOBDataPresent.bytebuffer[0] & 0xFF );

// parameter Bonding
union u_Bonding_t {
uint8_t p;
byte bytebuffer[1];
} u_Bonding;
u_Bonding.p = Bonding;
_fifo_enqueue(u_Bonding.bytebuffer[0] & 0xFF );

// parameter MITM
union u_MITM_t {
uint8_t p;
byte bytebuffer[1];
} u_MITM;
u_MITM.p = MITM;
_fifo_enqueue(u_MITM.bytebuffer[0] & 0xFF );

// parameter SecureConnection
union u_SecureConnection_t {
uint8_t p;
byte bytebuffer[1];
} u_SecureConnection;
u_SecureConnection.p = SecureConnection;
_fifo_enqueue(u_SecureConnection.bytebuffer[0] & 0xFF );

// parameter Keypress
union u_Keypress_t {
uint8_t p;
byte bytebuffer[1];
} u_Keypress;
u_Keypress.p = Keypress;
_fifo_enqueue(u_Keypress.bytebuffer[0] & 0xFF );

// parameter MaximumEncryptionKeySize
union u_MaximumEncryptionKeySize_t {
uint8_t p;
byte bytebuffer[1];
} u_MaximumEncryptionKeySize;
u_MaximumEncryptionKeySize.p = MaximumEncryptionKeySize;
_fifo_enqueue(u_MaximumEncryptionKeySize.bytebuffer[0] & 0xFF );

// parameter InitiatorKeyDistribution
union u_InitiatorKeyDistribution_t {
uint8_t p;
byte bytebuffer[1];
} u_InitiatorKeyDistribution;
u_InitiatorKeyDistribution.p = InitiatorKeyDistribution;
_fifo_enqueue(u_InitiatorKeyDistribution.bytebuffer[0] & 0xFF );

// parameter ResponderKeyDistribution
union u_ResponderKeyDistribution_t {
uint8_t p;
byte bytebuffer[1];
} u_ResponderKeyDistribution;
u_ResponderKeyDistribution.p = ResponderKeyDistribution;
_fifo_enqueue(u_ResponderKeyDistribution.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages BLEInitialiserImpl::SMP::SMPPairingDHKeyCheck
void enqueue_BLEInitialiserImpl_send_SMP_SMPPairingDHKeyCheck(struct BLEInitialiserImpl_Instance *_instance, uint16_t Handle, ble_random_number_t DHKeyCheck){
fifo_lock();
if ( fifo_byte_available() > 22 ) {

_fifo_enqueue( (30 >> 8) & 0xFF );
_fifo_enqueue( 30 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_SMP >> 8) & 0xFF );
_fifo_enqueue( _instance->id_SMP & 0xFF );

// parameter Handle
union u_Handle_t {
uint16_t p;
byte bytebuffer[2];
} u_Handle;
u_Handle.p = Handle;
_fifo_enqueue(u_Handle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_Handle.bytebuffer[0] & 0xFF );

// parameter DHKeyCheck
union u_DHKeyCheck_t {
ble_random_number_t p;
byte bytebuffer[16];
} u_DHKeyCheck;
u_DHKeyCheck.p = DHKeyCheck;
_fifo_enqueue(u_DHKeyCheck.bytebuffer[15] & 0xFF );
_fifo_enqueue(u_DHKeyCheck.bytebuffer[14] & 0xFF );
_fifo_enqueue(u_DHKeyCheck.bytebuffer[13] & 0xFF );
_fifo_enqueue(u_DHKeyCheck.bytebuffer[12] & 0xFF );
_fifo_enqueue(u_DHKeyCheck.bytebuffer[11] & 0xFF );
_fifo_enqueue(u_DHKeyCheck.bytebuffer[10] & 0xFF );
_fifo_enqueue(u_DHKeyCheck.bytebuffer[9] & 0xFF );
_fifo_enqueue(u_DHKeyCheck.bytebuffer[8] & 0xFF );
_fifo_enqueue(u_DHKeyCheck.bytebuffer[7] & 0xFF );
_fifo_enqueue(u_DHKeyCheck.bytebuffer[6] & 0xFF );
_fifo_enqueue(u_DHKeyCheck.bytebuffer[5] & 0xFF );
_fifo_enqueue(u_DHKeyCheck.bytebuffer[4] & 0xFF );
_fifo_enqueue(u_DHKeyCheck.bytebuffer[3] & 0xFF );
_fifo_enqueue(u_DHKeyCheck.bytebuffer[2] & 0xFF );
_fifo_enqueue(u_DHKeyCheck.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_DHKeyCheck.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages BLEInitialiserImpl::SMP::SMPEncryptionInformation
void enqueue_BLEInitialiserImpl_send_SMP_SMPEncryptionInformation(struct BLEInitialiserImpl_Instance *_instance, uint16_t Handle, ble_random_number_t LongTermKey){
fifo_lock();
if ( fifo_byte_available() > 22 ) {

_fifo_enqueue( (31 >> 8) & 0xFF );
_fifo_enqueue( 31 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_SMP >> 8) & 0xFF );
_fifo_enqueue( _instance->id_SMP & 0xFF );

// parameter Handle
union u_Handle_t {
uint16_t p;
byte bytebuffer[2];
} u_Handle;
u_Handle.p = Handle;
_fifo_enqueue(u_Handle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_Handle.bytebuffer[0] & 0xFF );

// parameter LongTermKey
union u_LongTermKey_t {
ble_random_number_t p;
byte bytebuffer[16];
} u_LongTermKey;
u_LongTermKey.p = LongTermKey;
_fifo_enqueue(u_LongTermKey.bytebuffer[15] & 0xFF );
_fifo_enqueue(u_LongTermKey.bytebuffer[14] & 0xFF );
_fifo_enqueue(u_LongTermKey.bytebuffer[13] & 0xFF );
_fifo_enqueue(u_LongTermKey.bytebuffer[12] & 0xFF );
_fifo_enqueue(u_LongTermKey.bytebuffer[11] & 0xFF );
_fifo_enqueue(u_LongTermKey.bytebuffer[10] & 0xFF );
_fifo_enqueue(u_LongTermKey.bytebuffer[9] & 0xFF );
_fifo_enqueue(u_LongTermKey.bytebuffer[8] & 0xFF );
_fifo_enqueue(u_LongTermKey.bytebuffer[7] & 0xFF );
_fifo_enqueue(u_LongTermKey.bytebuffer[6] & 0xFF );
_fifo_enqueue(u_LongTermKey.bytebuffer[5] & 0xFF );
_fifo_enqueue(u_LongTermKey.bytebuffer[4] & 0xFF );
_fifo_enqueue(u_LongTermKey.bytebuffer[3] & 0xFF );
_fifo_enqueue(u_LongTermKey.bytebuffer[2] & 0xFF );
_fifo_enqueue(u_LongTermKey.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_LongTermKey.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages BLEInitialiserImpl::SMP::SMPPairingConfirm
void enqueue_BLEInitialiserImpl_send_SMP_SMPPairingConfirm(struct BLEInitialiserImpl_Instance *_instance, uint16_t Handle, ble_random_number_t ConfirmValue){
fifo_lock();
if ( fifo_byte_available() > 22 ) {

_fifo_enqueue( (32 >> 8) & 0xFF );
_fifo_enqueue( 32 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_SMP >> 8) & 0xFF );
_fifo_enqueue( _instance->id_SMP & 0xFF );

// parameter Handle
union u_Handle_t {
uint16_t p;
byte bytebuffer[2];
} u_Handle;
u_Handle.p = Handle;
_fifo_enqueue(u_Handle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_Handle.bytebuffer[0] & 0xFF );

// parameter ConfirmValue
union u_ConfirmValue_t {
ble_random_number_t p;
byte bytebuffer[16];
} u_ConfirmValue;
u_ConfirmValue.p = ConfirmValue;
_fifo_enqueue(u_ConfirmValue.bytebuffer[15] & 0xFF );
_fifo_enqueue(u_ConfirmValue.bytebuffer[14] & 0xFF );
_fifo_enqueue(u_ConfirmValue.bytebuffer[13] & 0xFF );
_fifo_enqueue(u_ConfirmValue.bytebuffer[12] & 0xFF );
_fifo_enqueue(u_ConfirmValue.bytebuffer[11] & 0xFF );
_fifo_enqueue(u_ConfirmValue.bytebuffer[10] & 0xFF );
_fifo_enqueue(u_ConfirmValue.bytebuffer[9] & 0xFF );
_fifo_enqueue(u_ConfirmValue.bytebuffer[8] & 0xFF );
_fifo_enqueue(u_ConfirmValue.bytebuffer[7] & 0xFF );
_fifo_enqueue(u_ConfirmValue.bytebuffer[6] & 0xFF );
_fifo_enqueue(u_ConfirmValue.bytebuffer[5] & 0xFF );
_fifo_enqueue(u_ConfirmValue.bytebuffer[4] & 0xFF );
_fifo_enqueue(u_ConfirmValue.bytebuffer[3] & 0xFF );
_fifo_enqueue(u_ConfirmValue.bytebuffer[2] & 0xFF );
_fifo_enqueue(u_ConfirmValue.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_ConfirmValue.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages BLEInitialiserImpl::SMP::SMPSecurityRequest
void enqueue_BLEInitialiserImpl_send_SMP_SMPSecurityRequest(struct BLEInitialiserImpl_Instance *_instance, uint16_t Handle, uint8_t Bonding, uint8_t MITM, uint8_t SecureConnection, uint8_t Keypress){
fifo_lock();
if ( fifo_byte_available() > 10 ) {

_fifo_enqueue( (33 >> 8) & 0xFF );
_fifo_enqueue( 33 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_SMP >> 8) & 0xFF );
_fifo_enqueue( _instance->id_SMP & 0xFF );

// parameter Handle
union u_Handle_t {
uint16_t p;
byte bytebuffer[2];
} u_Handle;
u_Handle.p = Handle;
_fifo_enqueue(u_Handle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_Handle.bytebuffer[0] & 0xFF );

// parameter Bonding
union u_Bonding_t {
uint8_t p;
byte bytebuffer[1];
} u_Bonding;
u_Bonding.p = Bonding;
_fifo_enqueue(u_Bonding.bytebuffer[0] & 0xFF );

// parameter MITM
union u_MITM_t {
uint8_t p;
byte bytebuffer[1];
} u_MITM;
u_MITM.p = MITM;
_fifo_enqueue(u_MITM.bytebuffer[0] & 0xFF );

// parameter SecureConnection
union u_SecureConnection_t {
uint8_t p;
byte bytebuffer[1];
} u_SecureConnection;
u_SecureConnection.p = SecureConnection;
_fifo_enqueue(u_SecureConnection.bytebuffer[0] & 0xFF );

// parameter Keypress
union u_Keypress_t {
uint8_t p;
byte bytebuffer[1];
} u_Keypress;
u_Keypress.p = Keypress;
_fifo_enqueue(u_Keypress.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages BLEInitialiserImpl::SMP::SMPPairingFailed
void enqueue_BLEInitialiserImpl_send_SMP_SMPPairingFailed(struct BLEInitialiserImpl_Instance *_instance, uint16_t Handle, uint8_t Reason){
fifo_lock();
if ( fifo_byte_available() > 7 ) {

_fifo_enqueue( (34 >> 8) & 0xFF );
_fifo_enqueue( 34 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_SMP >> 8) & 0xFF );
_fifo_enqueue( _instance->id_SMP & 0xFF );

// parameter Handle
union u_Handle_t {
uint16_t p;
byte bytebuffer[2];
} u_Handle;
u_Handle.p = Handle;
_fifo_enqueue(u_Handle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_Handle.bytebuffer[0] & 0xFF );

// parameter Reason
union u_Reason_t {
uint8_t p;
byte bytebuffer[1];
} u_Reason;
u_Reason.p = Reason;
_fifo_enqueue(u_Reason.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages BLEInitialiserImpl::SMP::SMPPairingPublicKey
void enqueue_BLEInitialiserImpl_send_SMP_SMPPairingPublicKey(struct BLEInitialiserImpl_Instance *_instance, uint16_t Handle, smp_public_key_t KeyX, smp_public_key_t KeyY){
fifo_lock();
if ( fifo_byte_available() > 70 ) {

_fifo_enqueue( (35 >> 8) & 0xFF );
_fifo_enqueue( 35 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_SMP >> 8) & 0xFF );
_fifo_enqueue( _instance->id_SMP & 0xFF );

// parameter Handle
union u_Handle_t {
uint16_t p;
byte bytebuffer[2];
} u_Handle;
u_Handle.p = Handle;
_fifo_enqueue(u_Handle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_Handle.bytebuffer[0] & 0xFF );

// parameter KeyX
union u_KeyX_t {
smp_public_key_t p;
byte bytebuffer[32];
} u_KeyX;
u_KeyX.p = KeyX;
_fifo_enqueue(u_KeyX.bytebuffer[31] & 0xFF );
_fifo_enqueue(u_KeyX.bytebuffer[30] & 0xFF );
_fifo_enqueue(u_KeyX.bytebuffer[29] & 0xFF );
_fifo_enqueue(u_KeyX.bytebuffer[28] & 0xFF );
_fifo_enqueue(u_KeyX.bytebuffer[27] & 0xFF );
_fifo_enqueue(u_KeyX.bytebuffer[26] & 0xFF );
_fifo_enqueue(u_KeyX.bytebuffer[25] & 0xFF );
_fifo_enqueue(u_KeyX.bytebuffer[24] & 0xFF );
_fifo_enqueue(u_KeyX.bytebuffer[23] & 0xFF );
_fifo_enqueue(u_KeyX.bytebuffer[22] & 0xFF );
_fifo_enqueue(u_KeyX.bytebuffer[21] & 0xFF );
_fifo_enqueue(u_KeyX.bytebuffer[20] & 0xFF );
_fifo_enqueue(u_KeyX.bytebuffer[19] & 0xFF );
_fifo_enqueue(u_KeyX.bytebuffer[18] & 0xFF );
_fifo_enqueue(u_KeyX.bytebuffer[17] & 0xFF );
_fifo_enqueue(u_KeyX.bytebuffer[16] & 0xFF );
_fifo_enqueue(u_KeyX.bytebuffer[15] & 0xFF );
_fifo_enqueue(u_KeyX.bytebuffer[14] & 0xFF );
_fifo_enqueue(u_KeyX.bytebuffer[13] & 0xFF );
_fifo_enqueue(u_KeyX.bytebuffer[12] & 0xFF );
_fifo_enqueue(u_KeyX.bytebuffer[11] & 0xFF );
_fifo_enqueue(u_KeyX.bytebuffer[10] & 0xFF );
_fifo_enqueue(u_KeyX.bytebuffer[9] & 0xFF );
_fifo_enqueue(u_KeyX.bytebuffer[8] & 0xFF );
_fifo_enqueue(u_KeyX.bytebuffer[7] & 0xFF );
_fifo_enqueue(u_KeyX.bytebuffer[6] & 0xFF );
_fifo_enqueue(u_KeyX.bytebuffer[5] & 0xFF );
_fifo_enqueue(u_KeyX.bytebuffer[4] & 0xFF );
_fifo_enqueue(u_KeyX.bytebuffer[3] & 0xFF );
_fifo_enqueue(u_KeyX.bytebuffer[2] & 0xFF );
_fifo_enqueue(u_KeyX.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_KeyX.bytebuffer[0] & 0xFF );

// parameter KeyY
union u_KeyY_t {
smp_public_key_t p;
byte bytebuffer[32];
} u_KeyY;
u_KeyY.p = KeyY;
_fifo_enqueue(u_KeyY.bytebuffer[31] & 0xFF );
_fifo_enqueue(u_KeyY.bytebuffer[30] & 0xFF );
_fifo_enqueue(u_KeyY.bytebuffer[29] & 0xFF );
_fifo_enqueue(u_KeyY.bytebuffer[28] & 0xFF );
_fifo_enqueue(u_KeyY.bytebuffer[27] & 0xFF );
_fifo_enqueue(u_KeyY.bytebuffer[26] & 0xFF );
_fifo_enqueue(u_KeyY.bytebuffer[25] & 0xFF );
_fifo_enqueue(u_KeyY.bytebuffer[24] & 0xFF );
_fifo_enqueue(u_KeyY.bytebuffer[23] & 0xFF );
_fifo_enqueue(u_KeyY.bytebuffer[22] & 0xFF );
_fifo_enqueue(u_KeyY.bytebuffer[21] & 0xFF );
_fifo_enqueue(u_KeyY.bytebuffer[20] & 0xFF );
_fifo_enqueue(u_KeyY.bytebuffer[19] & 0xFF );
_fifo_enqueue(u_KeyY.bytebuffer[18] & 0xFF );
_fifo_enqueue(u_KeyY.bytebuffer[17] & 0xFF );
_fifo_enqueue(u_KeyY.bytebuffer[16] & 0xFF );
_fifo_enqueue(u_KeyY.bytebuffer[15] & 0xFF );
_fifo_enqueue(u_KeyY.bytebuffer[14] & 0xFF );
_fifo_enqueue(u_KeyY.bytebuffer[13] & 0xFF );
_fifo_enqueue(u_KeyY.bytebuffer[12] & 0xFF );
_fifo_enqueue(u_KeyY.bytebuffer[11] & 0xFF );
_fifo_enqueue(u_KeyY.bytebuffer[10] & 0xFF );
_fifo_enqueue(u_KeyY.bytebuffer[9] & 0xFF );
_fifo_enqueue(u_KeyY.bytebuffer[8] & 0xFF );
_fifo_enqueue(u_KeyY.bytebuffer[7] & 0xFF );
_fifo_enqueue(u_KeyY.bytebuffer[6] & 0xFF );
_fifo_enqueue(u_KeyY.bytebuffer[5] & 0xFF );
_fifo_enqueue(u_KeyY.bytebuffer[4] & 0xFF );
_fifo_enqueue(u_KeyY.bytebuffer[3] & 0xFF );
_fifo_enqueue(u_KeyY.bytebuffer[2] & 0xFF );
_fifo_enqueue(u_KeyY.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_KeyY.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages BLEInitialiserImpl::SMP::SMPIdentityAddressInformation
void enqueue_BLEInitialiserImpl_send_SMP_SMPIdentityAddressInformation(struct BLEInitialiserImpl_Instance *_instance, uint16_t Handle, uint8_t AddressType, bdaddr_t Address){
fifo_lock();
if ( fifo_byte_available() > 13 ) {

_fifo_enqueue( (36 >> 8) & 0xFF );
_fifo_enqueue( 36 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_SMP >> 8) & 0xFF );
_fifo_enqueue( _instance->id_SMP & 0xFF );

// parameter Handle
union u_Handle_t {
uint16_t p;
byte bytebuffer[2];
} u_Handle;
u_Handle.p = Handle;
_fifo_enqueue(u_Handle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_Handle.bytebuffer[0] & 0xFF );

// parameter AddressType
union u_AddressType_t {
uint8_t p;
byte bytebuffer[1];
} u_AddressType;
u_AddressType.p = AddressType;
_fifo_enqueue(u_AddressType.bytebuffer[0] & 0xFF );

// parameter Address
union u_Address_t {
bdaddr_t p;
byte bytebuffer[6];
} u_Address;
u_Address.p = Address;
_fifo_enqueue(u_Address.bytebuffer[5] & 0xFF );
_fifo_enqueue(u_Address.bytebuffer[4] & 0xFF );
_fifo_enqueue(u_Address.bytebuffer[3] & 0xFF );
_fifo_enqueue(u_Address.bytebuffer[2] & 0xFF );
_fifo_enqueue(u_Address.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_Address.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages BLEInitialiserImpl::SMP::SMPPairingRandom
void enqueue_BLEInitialiserImpl_send_SMP_SMPPairingRandom(struct BLEInitialiserImpl_Instance *_instance, uint16_t Handle, ble_random_number_t RandomValue){
fifo_lock();
if ( fifo_byte_available() > 22 ) {

_fifo_enqueue( (37 >> 8) & 0xFF );
_fifo_enqueue( 37 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_SMP >> 8) & 0xFF );
_fifo_enqueue( _instance->id_SMP & 0xFF );

// parameter Handle
union u_Handle_t {
uint16_t p;
byte bytebuffer[2];
} u_Handle;
u_Handle.p = Handle;
_fifo_enqueue(u_Handle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_Handle.bytebuffer[0] & 0xFF );

// parameter RandomValue
union u_RandomValue_t {
ble_random_number_t p;
byte bytebuffer[16];
} u_RandomValue;
u_RandomValue.p = RandomValue;
_fifo_enqueue(u_RandomValue.bytebuffer[15] & 0xFF );
_fifo_enqueue(u_RandomValue.bytebuffer[14] & 0xFF );
_fifo_enqueue(u_RandomValue.bytebuffer[13] & 0xFF );
_fifo_enqueue(u_RandomValue.bytebuffer[12] & 0xFF );
_fifo_enqueue(u_RandomValue.bytebuffer[11] & 0xFF );
_fifo_enqueue(u_RandomValue.bytebuffer[10] & 0xFF );
_fifo_enqueue(u_RandomValue.bytebuffer[9] & 0xFF );
_fifo_enqueue(u_RandomValue.bytebuffer[8] & 0xFF );
_fifo_enqueue(u_RandomValue.bytebuffer[7] & 0xFF );
_fifo_enqueue(u_RandomValue.bytebuffer[6] & 0xFF );
_fifo_enqueue(u_RandomValue.bytebuffer[5] & 0xFF );
_fifo_enqueue(u_RandomValue.bytebuffer[4] & 0xFF );
_fifo_enqueue(u_RandomValue.bytebuffer[3] & 0xFF );
_fifo_enqueue(u_RandomValue.bytebuffer[2] & 0xFF );
_fifo_enqueue(u_RandomValue.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_RandomValue.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages BLEInitialiserImpl::SMP::SMPMasterIdentification
void enqueue_BLEInitialiserImpl_send_SMP_SMPMasterIdentification(struct BLEInitialiserImpl_Instance *_instance, uint16_t Handle, uint16_t EDIV, ble_random_part_t Rand){
fifo_lock();
if ( fifo_byte_available() > 16 ) {

_fifo_enqueue( (38 >> 8) & 0xFF );
_fifo_enqueue( 38 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_SMP >> 8) & 0xFF );
_fifo_enqueue( _instance->id_SMP & 0xFF );

// parameter Handle
union u_Handle_t {
uint16_t p;
byte bytebuffer[2];
} u_Handle;
u_Handle.p = Handle;
_fifo_enqueue(u_Handle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_Handle.bytebuffer[0] & 0xFF );

// parameter EDIV
union u_EDIV_t {
uint16_t p;
byte bytebuffer[2];
} u_EDIV;
u_EDIV.p = EDIV;
_fifo_enqueue(u_EDIV.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_EDIV.bytebuffer[0] & 0xFF );

// parameter Rand
union u_Rand_t {
ble_random_part_t p;
byte bytebuffer[8];
} u_Rand;
u_Rand.p = Rand;
_fifo_enqueue(u_Rand.bytebuffer[7] & 0xFF );
_fifo_enqueue(u_Rand.bytebuffer[6] & 0xFF );
_fifo_enqueue(u_Rand.bytebuffer[5] & 0xFF );
_fifo_enqueue(u_Rand.bytebuffer[4] & 0xFF );
_fifo_enqueue(u_Rand.bytebuffer[3] & 0xFF );
_fifo_enqueue(u_Rand.bytebuffer[2] & 0xFF );
_fifo_enqueue(u_Rand.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_Rand.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages BLEInitialiserImpl::SMP::SMPPairingResponse
void enqueue_BLEInitialiserImpl_send_SMP_SMPPairingResponse(struct BLEInitialiserImpl_Instance *_instance, uint16_t Handle, uint8_t IOCapability, uint8_t OOBDataPresent, uint8_t Bonding, uint8_t MITM, uint8_t SecureConnection, uint8_t Keypress, uint8_t MaximumEncryptionKeySize, uint8_t InitiatorKeyDistribution, uint8_t ResponderKeyDistribution){
fifo_lock();
if ( fifo_byte_available() > 15 ) {

_fifo_enqueue( (39 >> 8) & 0xFF );
_fifo_enqueue( 39 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_SMP >> 8) & 0xFF );
_fifo_enqueue( _instance->id_SMP & 0xFF );

// parameter Handle
union u_Handle_t {
uint16_t p;
byte bytebuffer[2];
} u_Handle;
u_Handle.p = Handle;
_fifo_enqueue(u_Handle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_Handle.bytebuffer[0] & 0xFF );

// parameter IOCapability
union u_IOCapability_t {
uint8_t p;
byte bytebuffer[1];
} u_IOCapability;
u_IOCapability.p = IOCapability;
_fifo_enqueue(u_IOCapability.bytebuffer[0] & 0xFF );

// parameter OOBDataPresent
union u_OOBDataPresent_t {
uint8_t p;
byte bytebuffer[1];
} u_OOBDataPresent;
u_OOBDataPresent.p = OOBDataPresent;
_fifo_enqueue(u_OOBDataPresent.bytebuffer[0] & 0xFF );

// parameter Bonding
union u_Bonding_t {
uint8_t p;
byte bytebuffer[1];
} u_Bonding;
u_Bonding.p = Bonding;
_fifo_enqueue(u_Bonding.bytebuffer[0] & 0xFF );

// parameter MITM
union u_MITM_t {
uint8_t p;
byte bytebuffer[1];
} u_MITM;
u_MITM.p = MITM;
_fifo_enqueue(u_MITM.bytebuffer[0] & 0xFF );

// parameter SecureConnection
union u_SecureConnection_t {
uint8_t p;
byte bytebuffer[1];
} u_SecureConnection;
u_SecureConnection.p = SecureConnection;
_fifo_enqueue(u_SecureConnection.bytebuffer[0] & 0xFF );

// parameter Keypress
union u_Keypress_t {
uint8_t p;
byte bytebuffer[1];
} u_Keypress;
u_Keypress.p = Keypress;
_fifo_enqueue(u_Keypress.bytebuffer[0] & 0xFF );

// parameter MaximumEncryptionKeySize
union u_MaximumEncryptionKeySize_t {
uint8_t p;
byte bytebuffer[1];
} u_MaximumEncryptionKeySize;
u_MaximumEncryptionKeySize.p = MaximumEncryptionKeySize;
_fifo_enqueue(u_MaximumEncryptionKeySize.bytebuffer[0] & 0xFF );

// parameter InitiatorKeyDistribution
union u_InitiatorKeyDistribution_t {
uint8_t p;
byte bytebuffer[1];
} u_InitiatorKeyDistribution;
u_InitiatorKeyDistribution.p = InitiatorKeyDistribution;
_fifo_enqueue(u_InitiatorKeyDistribution.bytebuffer[0] & 0xFF );

// parameter ResponderKeyDistribution
union u_ResponderKeyDistribution_t {
uint8_t p;
byte bytebuffer[1];
} u_ResponderKeyDistribution;
u_ResponderKeyDistribution.p = ResponderKeyDistribution;
_fifo_enqueue(u_ResponderKeyDistribution.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages BLEInitialiserImpl::SMP::SMPIdentityInformation
void enqueue_BLEInitialiserImpl_send_SMP_SMPIdentityInformation(struct BLEInitialiserImpl_Instance *_instance, uint16_t Handle, ble_random_number_t IdentityResolvingKey){
fifo_lock();
if ( fifo_byte_available() > 22 ) {

_fifo_enqueue( (40 >> 8) & 0xFF );
_fifo_enqueue( 40 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_SMP >> 8) & 0xFF );
_fifo_enqueue( _instance->id_SMP & 0xFF );

// parameter Handle
union u_Handle_t {
uint16_t p;
byte bytebuffer[2];
} u_Handle;
u_Handle.p = Handle;
_fifo_enqueue(u_Handle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_Handle.bytebuffer[0] & 0xFF );

// parameter IdentityResolvingKey
union u_IdentityResolvingKey_t {
ble_random_number_t p;
byte bytebuffer[16];
} u_IdentityResolvingKey;
u_IdentityResolvingKey.p = IdentityResolvingKey;
_fifo_enqueue(u_IdentityResolvingKey.bytebuffer[15] & 0xFF );
_fifo_enqueue(u_IdentityResolvingKey.bytebuffer[14] & 0xFF );
_fifo_enqueue(u_IdentityResolvingKey.bytebuffer[13] & 0xFF );
_fifo_enqueue(u_IdentityResolvingKey.bytebuffer[12] & 0xFF );
_fifo_enqueue(u_IdentityResolvingKey.bytebuffer[11] & 0xFF );
_fifo_enqueue(u_IdentityResolvingKey.bytebuffer[10] & 0xFF );
_fifo_enqueue(u_IdentityResolvingKey.bytebuffer[9] & 0xFF );
_fifo_enqueue(u_IdentityResolvingKey.bytebuffer[8] & 0xFF );
_fifo_enqueue(u_IdentityResolvingKey.bytebuffer[7] & 0xFF );
_fifo_enqueue(u_IdentityResolvingKey.bytebuffer[6] & 0xFF );
_fifo_enqueue(u_IdentityResolvingKey.bytebuffer[5] & 0xFF );
_fifo_enqueue(u_IdentityResolvingKey.bytebuffer[4] & 0xFF );
_fifo_enqueue(u_IdentityResolvingKey.bytebuffer[3] & 0xFF );
_fifo_enqueue(u_IdentityResolvingKey.bytebuffer[2] & 0xFF );
_fifo_enqueue(u_IdentityResolvingKey.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_IdentityResolvingKey.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages BLEInitialiserImpl::SMP::SMPKeypressNotification
void enqueue_BLEInitialiserImpl_send_SMP_SMPKeypressNotification(struct BLEInitialiserImpl_Instance *_instance, uint16_t Handle, uint8_t Type){
fifo_lock();
if ( fifo_byte_available() > 7 ) {

_fifo_enqueue( (41 >> 8) & 0xFF );
_fifo_enqueue( 41 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_SMP >> 8) & 0xFF );
_fifo_enqueue( _instance->id_SMP & 0xFF );

// parameter Handle
union u_Handle_t {
uint16_t p;
byte bytebuffer[2];
} u_Handle;
u_Handle.p = Handle;
_fifo_enqueue(u_Handle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_Handle.bytebuffer[0] & 0xFF );

// parameter Type
union u_Type_t {
uint8_t p;
byte bytebuffer[1];
} u_Type;
u_Type.p = Type;
_fifo_enqueue(u_Type.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages BLEInitialiserImpl::SMP::SMPSigningInformation
void enqueue_BLEInitialiserImpl_send_SMP_SMPSigningInformation(struct BLEInitialiserImpl_Instance *_instance, uint16_t Handle, ble_random_number_t SignatureKey){
fifo_lock();
if ( fifo_byte_available() > 22 ) {

_fifo_enqueue( (42 >> 8) & 0xFF );
_fifo_enqueue( 42 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_SMP >> 8) & 0xFF );
_fifo_enqueue( _instance->id_SMP & 0xFF );

// parameter Handle
union u_Handle_t {
uint16_t p;
byte bytebuffer[2];
} u_Handle;
u_Handle.p = Handle;
_fifo_enqueue(u_Handle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_Handle.bytebuffer[0] & 0xFF );

// parameter SignatureKey
union u_SignatureKey_t {
ble_random_number_t p;
byte bytebuffer[16];
} u_SignatureKey;
u_SignatureKey.p = SignatureKey;
_fifo_enqueue(u_SignatureKey.bytebuffer[15] & 0xFF );
_fifo_enqueue(u_SignatureKey.bytebuffer[14] & 0xFF );
_fifo_enqueue(u_SignatureKey.bytebuffer[13] & 0xFF );
_fifo_enqueue(u_SignatureKey.bytebuffer[12] & 0xFF );
_fifo_enqueue(u_SignatureKey.bytebuffer[11] & 0xFF );
_fifo_enqueue(u_SignatureKey.bytebuffer[10] & 0xFF );
_fifo_enqueue(u_SignatureKey.bytebuffer[9] & 0xFF );
_fifo_enqueue(u_SignatureKey.bytebuffer[8] & 0xFF );
_fifo_enqueue(u_SignatureKey.bytebuffer[7] & 0xFF );
_fifo_enqueue(u_SignatureKey.bytebuffer[6] & 0xFF );
_fifo_enqueue(u_SignatureKey.bytebuffer[5] & 0xFF );
_fifo_enqueue(u_SignatureKey.bytebuffer[4] & 0xFF );
_fifo_enqueue(u_SignatureKey.bytebuffer[3] & 0xFF );
_fifo_enqueue(u_SignatureKey.bytebuffer[2] & 0xFF );
_fifo_enqueue(u_SignatureKey.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_SignatureKey.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages BLEInitialiserImpl::ATT::ATTReadByTypeError
void enqueue_BLEInitialiserImpl_send_ATT_ATTReadByTypeError(struct BLEInitialiserImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error){
fifo_lock();
if ( fifo_byte_available() > 9 ) {

_fifo_enqueue( (43 >> 8) & 0xFF );
_fifo_enqueue( 43 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_ATT >> 8) & 0xFF );
_fifo_enqueue( _instance->id_ATT & 0xFF );

// parameter ConnectionHandle
union u_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ConnectionHandle;
u_ConnectionHandle.p = ConnectionHandle;
_fifo_enqueue(u_ConnectionHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_ConnectionHandle.bytebuffer[0] & 0xFF );

// parameter AttributeHandle
union u_AttributeHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_AttributeHandle;
u_AttributeHandle.p = AttributeHandle;
_fifo_enqueue(u_AttributeHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_AttributeHandle.bytebuffer[0] & 0xFF );

// parameter Error
union u_Error_t {
uint8_t p;
byte bytebuffer[1];
} u_Error;
u_Error.p = Error;
_fifo_enqueue(u_Error.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages BLEInitialiserImpl::ATT::ATTReadByGroupTypeError
void enqueue_BLEInitialiserImpl_send_ATT_ATTReadByGroupTypeError(struct BLEInitialiserImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error){
fifo_lock();
if ( fifo_byte_available() > 9 ) {

_fifo_enqueue( (44 >> 8) & 0xFF );
_fifo_enqueue( 44 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_ATT >> 8) & 0xFF );
_fifo_enqueue( _instance->id_ATT & 0xFF );

// parameter ConnectionHandle
union u_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ConnectionHandle;
u_ConnectionHandle.p = ConnectionHandle;
_fifo_enqueue(u_ConnectionHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_ConnectionHandle.bytebuffer[0] & 0xFF );

// parameter AttributeHandle
union u_AttributeHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_AttributeHandle;
u_AttributeHandle.p = AttributeHandle;
_fifo_enqueue(u_AttributeHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_AttributeHandle.bytebuffer[0] & 0xFF );

// parameter Error
union u_Error_t {
uint8_t p;
byte bytebuffer[1];
} u_Error;
u_Error.p = Error;
_fifo_enqueue(u_Error.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages BLEInitialiserImpl::ATT::ATTWriteResponse
void enqueue_BLEInitialiserImpl_send_ATT_ATTWriteResponse(struct BLEInitialiserImpl_Instance *_instance, uint16_t ConnectionHandle){
fifo_lock();
if ( fifo_byte_available() > 6 ) {

_fifo_enqueue( (45 >> 8) & 0xFF );
_fifo_enqueue( 45 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_ATT >> 8) & 0xFF );
_fifo_enqueue( _instance->id_ATT & 0xFF );

// parameter ConnectionHandle
union u_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ConnectionHandle;
u_ConnectionHandle.p = ConnectionHandle;
_fifo_enqueue(u_ConnectionHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_ConnectionHandle.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages BLEInitialiserImpl::ATT::ATTReadRequest
void enqueue_BLEInitialiserImpl_send_ATT_ATTReadRequest(struct BLEInitialiserImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle){
fifo_lock();
if ( fifo_byte_available() > 8 ) {

_fifo_enqueue( (46 >> 8) & 0xFF );
_fifo_enqueue( 46 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_ATT >> 8) & 0xFF );
_fifo_enqueue( _instance->id_ATT & 0xFF );

// parameter ConnectionHandle
union u_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ConnectionHandle;
u_ConnectionHandle.p = ConnectionHandle;
_fifo_enqueue(u_ConnectionHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_ConnectionHandle.bytebuffer[0] & 0xFF );

// parameter AttributeHandle
union u_AttributeHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_AttributeHandle;
u_AttributeHandle.p = AttributeHandle;
_fifo_enqueue(u_AttributeHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_AttributeHandle.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages BLEInitialiserImpl::ATT::ATTFindInformationError
void enqueue_BLEInitialiserImpl_send_ATT_ATTFindInformationError(struct BLEInitialiserImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error){
fifo_lock();
if ( fifo_byte_available() > 9 ) {

_fifo_enqueue( (47 >> 8) & 0xFF );
_fifo_enqueue( 47 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_ATT >> 8) & 0xFF );
_fifo_enqueue( _instance->id_ATT & 0xFF );

// parameter ConnectionHandle
union u_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ConnectionHandle;
u_ConnectionHandle.p = ConnectionHandle;
_fifo_enqueue(u_ConnectionHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_ConnectionHandle.bytebuffer[0] & 0xFF );

// parameter AttributeHandle
union u_AttributeHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_AttributeHandle;
u_AttributeHandle.p = AttributeHandle;
_fifo_enqueue(u_AttributeHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_AttributeHandle.bytebuffer[0] & 0xFF );

// parameter Error
union u_Error_t {
uint8_t p;
byte bytebuffer[1];
} u_Error;
u_Error.p = Error;
_fifo_enqueue(u_Error.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages BLEInitialiserImpl::ATT::ATTReadByTypeRequest
void enqueue_BLEInitialiserImpl_send_ATT_ATTReadByTypeRequest(struct BLEInitialiserImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t StartingHandle, uint16_t EndingHandle, ble_uuid_t AttributeType){
fifo_lock();
if ( fifo_byte_available() > 26 ) {

_fifo_enqueue( (48 >> 8) & 0xFF );
_fifo_enqueue( 48 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_ATT >> 8) & 0xFF );
_fifo_enqueue( _instance->id_ATT & 0xFF );

// parameter ConnectionHandle
union u_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ConnectionHandle;
u_ConnectionHandle.p = ConnectionHandle;
_fifo_enqueue(u_ConnectionHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_ConnectionHandle.bytebuffer[0] & 0xFF );

// parameter StartingHandle
union u_StartingHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_StartingHandle;
u_StartingHandle.p = StartingHandle;
_fifo_enqueue(u_StartingHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_StartingHandle.bytebuffer[0] & 0xFF );

// parameter EndingHandle
union u_EndingHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_EndingHandle;
u_EndingHandle.p = EndingHandle;
_fifo_enqueue(u_EndingHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_EndingHandle.bytebuffer[0] & 0xFF );

// parameter AttributeType
union u_AttributeType_t {
ble_uuid_t p;
byte bytebuffer[16];
} u_AttributeType;
u_AttributeType.p = AttributeType;
_fifo_enqueue(u_AttributeType.bytebuffer[15] & 0xFF );
_fifo_enqueue(u_AttributeType.bytebuffer[14] & 0xFF );
_fifo_enqueue(u_AttributeType.bytebuffer[13] & 0xFF );
_fifo_enqueue(u_AttributeType.bytebuffer[12] & 0xFF );
_fifo_enqueue(u_AttributeType.bytebuffer[11] & 0xFF );
_fifo_enqueue(u_AttributeType.bytebuffer[10] & 0xFF );
_fifo_enqueue(u_AttributeType.bytebuffer[9] & 0xFF );
_fifo_enqueue(u_AttributeType.bytebuffer[8] & 0xFF );
_fifo_enqueue(u_AttributeType.bytebuffer[7] & 0xFF );
_fifo_enqueue(u_AttributeType.bytebuffer[6] & 0xFF );
_fifo_enqueue(u_AttributeType.bytebuffer[5] & 0xFF );
_fifo_enqueue(u_AttributeType.bytebuffer[4] & 0xFF );
_fifo_enqueue(u_AttributeType.bytebuffer[3] & 0xFF );
_fifo_enqueue(u_AttributeType.bytebuffer[2] & 0xFF );
_fifo_enqueue(u_AttributeType.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_AttributeType.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages BLEInitialiserImpl::ATT::ATTHandleValueConfirmation
void enqueue_BLEInitialiserImpl_send_ATT_ATTHandleValueConfirmation(struct BLEInitialiserImpl_Instance *_instance, uint16_t ConnectionHandle){
fifo_lock();
if ( fifo_byte_available() > 6 ) {

_fifo_enqueue( (49 >> 8) & 0xFF );
_fifo_enqueue( 49 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_ATT >> 8) & 0xFF );
_fifo_enqueue( _instance->id_ATT & 0xFF );

// parameter ConnectionHandle
union u_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ConnectionHandle;
u_ConnectionHandle.p = ConnectionHandle;
_fifo_enqueue(u_ConnectionHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_ConnectionHandle.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages BLEInitialiserImpl::ATT::ATTReadError
void enqueue_BLEInitialiserImpl_send_ATT_ATTReadError(struct BLEInitialiserImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error){
fifo_lock();
if ( fifo_byte_available() > 9 ) {

_fifo_enqueue( (50 >> 8) & 0xFF );
_fifo_enqueue( 50 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_ATT >> 8) & 0xFF );
_fifo_enqueue( _instance->id_ATT & 0xFF );

// parameter ConnectionHandle
union u_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ConnectionHandle;
u_ConnectionHandle.p = ConnectionHandle;
_fifo_enqueue(u_ConnectionHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_ConnectionHandle.bytebuffer[0] & 0xFF );

// parameter AttributeHandle
union u_AttributeHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_AttributeHandle;
u_AttributeHandle.p = AttributeHandle;
_fifo_enqueue(u_AttributeHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_AttributeHandle.bytebuffer[0] & 0xFF );

// parameter Error
union u_Error_t {
uint8_t p;
byte bytebuffer[1];
} u_Error;
u_Error.p = Error;
_fifo_enqueue(u_Error.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages BLEInitialiserImpl::ATT::ATTWriteRequest
void enqueue_BLEInitialiserImpl_send_ATT_ATTWriteRequest(struct BLEInitialiserImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, ble_gatt_data_t AttributeValue){
fifo_lock();
if ( fifo_byte_available() > 32 ) {

_fifo_enqueue( (51 >> 8) & 0xFF );
_fifo_enqueue( 51 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_ATT >> 8) & 0xFF );
_fifo_enqueue( _instance->id_ATT & 0xFF );

// parameter ConnectionHandle
union u_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ConnectionHandle;
u_ConnectionHandle.p = ConnectionHandle;
_fifo_enqueue(u_ConnectionHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_ConnectionHandle.bytebuffer[0] & 0xFF );

// parameter AttributeHandle
union u_AttributeHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_AttributeHandle;
u_AttributeHandle.p = AttributeHandle;
_fifo_enqueue(u_AttributeHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_AttributeHandle.bytebuffer[0] & 0xFF );

// parameter AttributeValue
union u_AttributeValue_t {
ble_gatt_data_t p;
byte bytebuffer[24];
} u_AttributeValue;
u_AttributeValue.p = AttributeValue;
_fifo_enqueue(u_AttributeValue.bytebuffer[23] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[22] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[21] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[20] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[19] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[18] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[17] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[16] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[15] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[14] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[13] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[12] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[11] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[10] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[9] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[8] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[7] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[6] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[5] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[4] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[3] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[2] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages BLEInitialiserImpl::ATT::ATTWriteCommand
void enqueue_BLEInitialiserImpl_send_ATT_ATTWriteCommand(struct BLEInitialiserImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, ble_gatt_data_t AttributeValue){
fifo_lock();
if ( fifo_byte_available() > 32 ) {

_fifo_enqueue( (52 >> 8) & 0xFF );
_fifo_enqueue( 52 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_ATT >> 8) & 0xFF );
_fifo_enqueue( _instance->id_ATT & 0xFF );

// parameter ConnectionHandle
union u_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ConnectionHandle;
u_ConnectionHandle.p = ConnectionHandle;
_fifo_enqueue(u_ConnectionHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_ConnectionHandle.bytebuffer[0] & 0xFF );

// parameter AttributeHandle
union u_AttributeHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_AttributeHandle;
u_AttributeHandle.p = AttributeHandle;
_fifo_enqueue(u_AttributeHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_AttributeHandle.bytebuffer[0] & 0xFF );

// parameter AttributeValue
union u_AttributeValue_t {
ble_gatt_data_t p;
byte bytebuffer[24];
} u_AttributeValue;
u_AttributeValue.p = AttributeValue;
_fifo_enqueue(u_AttributeValue.bytebuffer[23] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[22] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[21] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[20] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[19] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[18] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[17] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[16] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[15] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[14] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[13] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[12] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[11] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[10] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[9] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[8] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[7] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[6] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[5] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[4] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[3] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[2] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages BLEInitialiserImpl::ATT::ATTWriteError
void enqueue_BLEInitialiserImpl_send_ATT_ATTWriteError(struct BLEInitialiserImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error){
fifo_lock();
if ( fifo_byte_available() > 9 ) {

_fifo_enqueue( (53 >> 8) & 0xFF );
_fifo_enqueue( 53 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_ATT >> 8) & 0xFF );
_fifo_enqueue( _instance->id_ATT & 0xFF );

// parameter ConnectionHandle
union u_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ConnectionHandle;
u_ConnectionHandle.p = ConnectionHandle;
_fifo_enqueue(u_ConnectionHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_ConnectionHandle.bytebuffer[0] & 0xFF );

// parameter AttributeHandle
union u_AttributeHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_AttributeHandle;
u_AttributeHandle.p = AttributeHandle;
_fifo_enqueue(u_AttributeHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_AttributeHandle.bytebuffer[0] & 0xFF );

// parameter Error
union u_Error_t {
uint8_t p;
byte bytebuffer[1];
} u_Error;
u_Error.p = Error;
_fifo_enqueue(u_Error.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages BLEInitialiserImpl::ATT::ATTHandleValueNotification
void enqueue_BLEInitialiserImpl_send_ATT_ATTHandleValueNotification(struct BLEInitialiserImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, ble_gatt_data_t AttributeValue){
fifo_lock();
if ( fifo_byte_available() > 32 ) {

_fifo_enqueue( (54 >> 8) & 0xFF );
_fifo_enqueue( 54 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_ATT >> 8) & 0xFF );
_fifo_enqueue( _instance->id_ATT & 0xFF );

// parameter ConnectionHandle
union u_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ConnectionHandle;
u_ConnectionHandle.p = ConnectionHandle;
_fifo_enqueue(u_ConnectionHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_ConnectionHandle.bytebuffer[0] & 0xFF );

// parameter AttributeHandle
union u_AttributeHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_AttributeHandle;
u_AttributeHandle.p = AttributeHandle;
_fifo_enqueue(u_AttributeHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_AttributeHandle.bytebuffer[0] & 0xFF );

// parameter AttributeValue
union u_AttributeValue_t {
ble_gatt_data_t p;
byte bytebuffer[24];
} u_AttributeValue;
u_AttributeValue.p = AttributeValue;
_fifo_enqueue(u_AttributeValue.bytebuffer[23] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[22] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[21] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[20] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[19] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[18] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[17] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[16] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[15] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[14] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[13] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[12] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[11] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[10] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[9] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[8] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[7] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[6] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[5] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[4] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[3] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[2] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages BLEInitialiserImpl::ATT::ATTFindInformationResponse
void enqueue_BLEInitialiserImpl_send_ATT_ATTFindInformationResponse(struct BLEInitialiserImpl_Instance *_instance, uint16_t ConnectionHandle, uint8_t Format, ble_gatt_data_t InformationData){
fifo_lock();
if ( fifo_byte_available() > 31 ) {

_fifo_enqueue( (55 >> 8) & 0xFF );
_fifo_enqueue( 55 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_ATT >> 8) & 0xFF );
_fifo_enqueue( _instance->id_ATT & 0xFF );

// parameter ConnectionHandle
union u_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ConnectionHandle;
u_ConnectionHandle.p = ConnectionHandle;
_fifo_enqueue(u_ConnectionHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_ConnectionHandle.bytebuffer[0] & 0xFF );

// parameter Format
union u_Format_t {
uint8_t p;
byte bytebuffer[1];
} u_Format;
u_Format.p = Format;
_fifo_enqueue(u_Format.bytebuffer[0] & 0xFF );

// parameter InformationData
union u_InformationData_t {
ble_gatt_data_t p;
byte bytebuffer[24];
} u_InformationData;
u_InformationData.p = InformationData;
_fifo_enqueue(u_InformationData.bytebuffer[23] & 0xFF );
_fifo_enqueue(u_InformationData.bytebuffer[22] & 0xFF );
_fifo_enqueue(u_InformationData.bytebuffer[21] & 0xFF );
_fifo_enqueue(u_InformationData.bytebuffer[20] & 0xFF );
_fifo_enqueue(u_InformationData.bytebuffer[19] & 0xFF );
_fifo_enqueue(u_InformationData.bytebuffer[18] & 0xFF );
_fifo_enqueue(u_InformationData.bytebuffer[17] & 0xFF );
_fifo_enqueue(u_InformationData.bytebuffer[16] & 0xFF );
_fifo_enqueue(u_InformationData.bytebuffer[15] & 0xFF );
_fifo_enqueue(u_InformationData.bytebuffer[14] & 0xFF );
_fifo_enqueue(u_InformationData.bytebuffer[13] & 0xFF );
_fifo_enqueue(u_InformationData.bytebuffer[12] & 0xFF );
_fifo_enqueue(u_InformationData.bytebuffer[11] & 0xFF );
_fifo_enqueue(u_InformationData.bytebuffer[10] & 0xFF );
_fifo_enqueue(u_InformationData.bytebuffer[9] & 0xFF );
_fifo_enqueue(u_InformationData.bytebuffer[8] & 0xFF );
_fifo_enqueue(u_InformationData.bytebuffer[7] & 0xFF );
_fifo_enqueue(u_InformationData.bytebuffer[6] & 0xFF );
_fifo_enqueue(u_InformationData.bytebuffer[5] & 0xFF );
_fifo_enqueue(u_InformationData.bytebuffer[4] & 0xFF );
_fifo_enqueue(u_InformationData.bytebuffer[3] & 0xFF );
_fifo_enqueue(u_InformationData.bytebuffer[2] & 0xFF );
_fifo_enqueue(u_InformationData.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_InformationData.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages BLEInitialiserImpl::ATT::ATTReadByGroupTypeResponse
void enqueue_BLEInitialiserImpl_send_ATT_ATTReadByGroupTypeResponse(struct BLEInitialiserImpl_Instance *_instance, uint16_t ConnectionHandle, uint8_t Length, ble_gatt_data_t AttributeDataList){
fifo_lock();
if ( fifo_byte_available() > 31 ) {

_fifo_enqueue( (56 >> 8) & 0xFF );
_fifo_enqueue( 56 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_ATT >> 8) & 0xFF );
_fifo_enqueue( _instance->id_ATT & 0xFF );

// parameter ConnectionHandle
union u_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ConnectionHandle;
u_ConnectionHandle.p = ConnectionHandle;
_fifo_enqueue(u_ConnectionHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_ConnectionHandle.bytebuffer[0] & 0xFF );

// parameter Length
union u_Length_t {
uint8_t p;
byte bytebuffer[1];
} u_Length;
u_Length.p = Length;
_fifo_enqueue(u_Length.bytebuffer[0] & 0xFF );

// parameter AttributeDataList
union u_AttributeDataList_t {
ble_gatt_data_t p;
byte bytebuffer[24];
} u_AttributeDataList;
u_AttributeDataList.p = AttributeDataList;
_fifo_enqueue(u_AttributeDataList.bytebuffer[23] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[22] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[21] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[20] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[19] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[18] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[17] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[16] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[15] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[14] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[13] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[12] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[11] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[10] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[9] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[8] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[7] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[6] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[5] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[4] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[3] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[2] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages BLEInitialiserImpl::ATT::ATTReadByTypeResponse
void enqueue_BLEInitialiserImpl_send_ATT_ATTReadByTypeResponse(struct BLEInitialiserImpl_Instance *_instance, uint16_t ConnectionHandle, uint8_t Length, ble_gatt_data_t AttributeDataList){
fifo_lock();
if ( fifo_byte_available() > 31 ) {

_fifo_enqueue( (57 >> 8) & 0xFF );
_fifo_enqueue( 57 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_ATT >> 8) & 0xFF );
_fifo_enqueue( _instance->id_ATT & 0xFF );

// parameter ConnectionHandle
union u_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ConnectionHandle;
u_ConnectionHandle.p = ConnectionHandle;
_fifo_enqueue(u_ConnectionHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_ConnectionHandle.bytebuffer[0] & 0xFF );

// parameter Length
union u_Length_t {
uint8_t p;
byte bytebuffer[1];
} u_Length;
u_Length.p = Length;
_fifo_enqueue(u_Length.bytebuffer[0] & 0xFF );

// parameter AttributeDataList
union u_AttributeDataList_t {
ble_gatt_data_t p;
byte bytebuffer[24];
} u_AttributeDataList;
u_AttributeDataList.p = AttributeDataList;
_fifo_enqueue(u_AttributeDataList.bytebuffer[23] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[22] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[21] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[20] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[19] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[18] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[17] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[16] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[15] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[14] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[13] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[12] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[11] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[10] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[9] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[8] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[7] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[6] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[5] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[4] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[3] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[2] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages BLEInitialiserImpl::ATT::ATTFindInformationRequest
void enqueue_BLEInitialiserImpl_send_ATT_ATTFindInformationRequest(struct BLEInitialiserImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t StartingHandle, uint16_t EndingHandle){
fifo_lock();
if ( fifo_byte_available() > 10 ) {

_fifo_enqueue( (58 >> 8) & 0xFF );
_fifo_enqueue( 58 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_ATT >> 8) & 0xFF );
_fifo_enqueue( _instance->id_ATT & 0xFF );

// parameter ConnectionHandle
union u_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ConnectionHandle;
u_ConnectionHandle.p = ConnectionHandle;
_fifo_enqueue(u_ConnectionHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_ConnectionHandle.bytebuffer[0] & 0xFF );

// parameter StartingHandle
union u_StartingHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_StartingHandle;
u_StartingHandle.p = StartingHandle;
_fifo_enqueue(u_StartingHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_StartingHandle.bytebuffer[0] & 0xFF );

// parameter EndingHandle
union u_EndingHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_EndingHandle;
u_EndingHandle.p = EndingHandle;
_fifo_enqueue(u_EndingHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_EndingHandle.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages BLEInitialiserImpl::ATT::ATTReadResponse
void enqueue_BLEInitialiserImpl_send_ATT_ATTReadResponse(struct BLEInitialiserImpl_Instance *_instance, uint16_t ConnectionHandle, ble_gatt_data_t AttributeValue){
fifo_lock();
if ( fifo_byte_available() > 30 ) {

_fifo_enqueue( (59 >> 8) & 0xFF );
_fifo_enqueue( 59 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_ATT >> 8) & 0xFF );
_fifo_enqueue( _instance->id_ATT & 0xFF );

// parameter ConnectionHandle
union u_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ConnectionHandle;
u_ConnectionHandle.p = ConnectionHandle;
_fifo_enqueue(u_ConnectionHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_ConnectionHandle.bytebuffer[0] & 0xFF );

// parameter AttributeValue
union u_AttributeValue_t {
ble_gatt_data_t p;
byte bytebuffer[24];
} u_AttributeValue;
u_AttributeValue.p = AttributeValue;
_fifo_enqueue(u_AttributeValue.bytebuffer[23] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[22] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[21] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[20] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[19] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[18] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[17] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[16] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[15] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[14] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[13] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[12] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[11] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[10] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[9] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[8] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[7] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[6] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[5] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[4] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[3] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[2] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages BLEInitialiserImpl::ATT::ATTReadByGroupTypeRequest
void enqueue_BLEInitialiserImpl_send_ATT_ATTReadByGroupTypeRequest(struct BLEInitialiserImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t StartingHandle, uint16_t EndingHandle, ble_uuid_t AttributeGroupType){
fifo_lock();
if ( fifo_byte_available() > 26 ) {

_fifo_enqueue( (60 >> 8) & 0xFF );
_fifo_enqueue( 60 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_ATT >> 8) & 0xFF );
_fifo_enqueue( _instance->id_ATT & 0xFF );

// parameter ConnectionHandle
union u_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ConnectionHandle;
u_ConnectionHandle.p = ConnectionHandle;
_fifo_enqueue(u_ConnectionHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_ConnectionHandle.bytebuffer[0] & 0xFF );

// parameter StartingHandle
union u_StartingHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_StartingHandle;
u_StartingHandle.p = StartingHandle;
_fifo_enqueue(u_StartingHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_StartingHandle.bytebuffer[0] & 0xFF );

// parameter EndingHandle
union u_EndingHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_EndingHandle;
u_EndingHandle.p = EndingHandle;
_fifo_enqueue(u_EndingHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_EndingHandle.bytebuffer[0] & 0xFF );

// parameter AttributeGroupType
union u_AttributeGroupType_t {
ble_uuid_t p;
byte bytebuffer[16];
} u_AttributeGroupType;
u_AttributeGroupType.p = AttributeGroupType;
_fifo_enqueue(u_AttributeGroupType.bytebuffer[15] & 0xFF );
_fifo_enqueue(u_AttributeGroupType.bytebuffer[14] & 0xFF );
_fifo_enqueue(u_AttributeGroupType.bytebuffer[13] & 0xFF );
_fifo_enqueue(u_AttributeGroupType.bytebuffer[12] & 0xFF );
_fifo_enqueue(u_AttributeGroupType.bytebuffer[11] & 0xFF );
_fifo_enqueue(u_AttributeGroupType.bytebuffer[10] & 0xFF );
_fifo_enqueue(u_AttributeGroupType.bytebuffer[9] & 0xFF );
_fifo_enqueue(u_AttributeGroupType.bytebuffer[8] & 0xFF );
_fifo_enqueue(u_AttributeGroupType.bytebuffer[7] & 0xFF );
_fifo_enqueue(u_AttributeGroupType.bytebuffer[6] & 0xFF );
_fifo_enqueue(u_AttributeGroupType.bytebuffer[5] & 0xFF );
_fifo_enqueue(u_AttributeGroupType.bytebuffer[4] & 0xFF );
_fifo_enqueue(u_AttributeGroupType.bytebuffer[3] & 0xFF );
_fifo_enqueue(u_AttributeGroupType.bytebuffer[2] & 0xFF );
_fifo_enqueue(u_AttributeGroupType.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_AttributeGroupType.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages BLEInitialiserImpl::ATT::ATTHandleValueIndication
void enqueue_BLEInitialiserImpl_send_ATT_ATTHandleValueIndication(struct BLEInitialiserImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, ble_gatt_data_t AttributeValue){
fifo_lock();
if ( fifo_byte_available() > 32 ) {

_fifo_enqueue( (61 >> 8) & 0xFF );
_fifo_enqueue( 61 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_ATT >> 8) & 0xFF );
_fifo_enqueue( _instance->id_ATT & 0xFF );

// parameter ConnectionHandle
union u_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ConnectionHandle;
u_ConnectionHandle.p = ConnectionHandle;
_fifo_enqueue(u_ConnectionHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_ConnectionHandle.bytebuffer[0] & 0xFF );

// parameter AttributeHandle
union u_AttributeHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_AttributeHandle;
u_AttributeHandle.p = AttributeHandle;
_fifo_enqueue(u_AttributeHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_AttributeHandle.bytebuffer[0] & 0xFF );

// parameter AttributeValue
union u_AttributeValue_t {
ble_gatt_data_t p;
byte bytebuffer[24];
} u_AttributeValue;
u_AttributeValue.p = AttributeValue;
_fifo_enqueue(u_AttributeValue.bytebuffer[23] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[22] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[21] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[20] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[19] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[18] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[17] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[16] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[15] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[14] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[13] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[12] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[11] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[10] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[9] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[8] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[7] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[6] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[5] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[4] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[3] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[2] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages BLEConnecterImpl::Connecter::Stopped
void enqueue_BLEConnecterImpl_send_Connecter_Stopped(struct BLEConnecterImpl_Instance *_instance){
fifo_lock();
if ( fifo_byte_available() > 4 ) {

_fifo_enqueue( (5 >> 8) & 0xFF );
_fifo_enqueue( 5 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_Connecter >> 8) & 0xFF );
_fifo_enqueue( _instance->id_Connecter & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages BLEConnecterImpl::Connecter::Connected
void enqueue_BLEConnecterImpl_send_Connecter_Connected(struct BLEConnecterImpl_Instance *_instance, uint16_t Handle, uint8_t AddressType, bdaddr_t Address){
fifo_lock();
if ( fifo_byte_available() > 13 ) {

_fifo_enqueue( (76 >> 8) & 0xFF );
_fifo_enqueue( 76 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_Connecter >> 8) & 0xFF );
_fifo_enqueue( _instance->id_Connecter & 0xFF );

// parameter Handle
union u_Handle_t {
uint16_t p;
byte bytebuffer[2];
} u_Handle;
u_Handle.p = Handle;
_fifo_enqueue(u_Handle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_Handle.bytebuffer[0] & 0xFF );

// parameter AddressType
union u_AddressType_t {
uint8_t p;
byte bytebuffer[1];
} u_AddressType;
u_AddressType.p = AddressType;
_fifo_enqueue(u_AddressType.bytebuffer[0] & 0xFF );

// parameter Address
union u_Address_t {
bdaddr_t p;
byte bytebuffer[6];
} u_Address;
u_Address.p = Address;
_fifo_enqueue(u_Address.bytebuffer[5] & 0xFF );
_fifo_enqueue(u_Address.bytebuffer[4] & 0xFF );
_fifo_enqueue(u_Address.bytebuffer[3] & 0xFF );
_fifo_enqueue(u_Address.bytebuffer[2] & 0xFF );
_fifo_enqueue(u_Address.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_Address.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages BLEConnecterImpl::Connecter::Failure
void enqueue_BLEConnecterImpl_send_Connecter_Failure(struct BLEConnecterImpl_Instance *_instance){
fifo_lock();
if ( fifo_byte_available() > 4 ) {

_fifo_enqueue( (7 >> 8) & 0xFF );
_fifo_enqueue( 7 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_Connecter >> 8) & 0xFF );
_fifo_enqueue( _instance->id_Connecter & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages BLEConnecterImpl::Connecter::Encrypted
void enqueue_BLEConnecterImpl_send_Connecter_Encrypted(struct BLEConnecterImpl_Instance *_instance){
fifo_lock();
if ( fifo_byte_available() > 4 ) {

_fifo_enqueue( (77 >> 8) & 0xFF );
_fifo_enqueue( 77 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_Connecter >> 8) & 0xFF );
_fifo_enqueue( _instance->id_Connecter & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages BLEConnecterImpl::Socket::Open
void enqueue_BLEConnecterImpl_send_Socket_Open(struct BLEConnecterImpl_Instance *_instance){
fifo_lock();
if ( fifo_byte_available() > 4 ) {

_fifo_enqueue( (9 >> 8) & 0xFF );
_fifo_enqueue( 9 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_Socket >> 8) & 0xFF );
_fifo_enqueue( _instance->id_Socket & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages BLEConnecterImpl::Socket::Close
void enqueue_BLEConnecterImpl_send_Socket_Close(struct BLEConnecterImpl_Instance *_instance){
fifo_lock();
if ( fifo_byte_available() > 4 ) {

_fifo_enqueue( (10 >> 8) & 0xFF );
_fifo_enqueue( 10 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_Socket >> 8) & 0xFF );
_fifo_enqueue( _instance->id_Socket & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages BLEConnecterImpl::HCICommands::SetLEAdvertisementParameters
void enqueue_BLEConnecterImpl_send_HCICommands_SetLEAdvertisementParameters(struct BLEConnecterImpl_Instance *_instance, uint16_t MinInterval, uint16_t MaxInterval, uint8_t Type, uint8_t OwnAddressType, uint8_t PeerAddressType, bdaddr_t PeerAddress, uint8_t Channel, uint8_t FilterPolicy){
fifo_lock();
if ( fifo_byte_available() > 19 ) {

_fifo_enqueue( (11 >> 8) & 0xFF );
_fifo_enqueue( 11 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_HCICommands >> 8) & 0xFF );
_fifo_enqueue( _instance->id_HCICommands & 0xFF );

// parameter MinInterval
union u_MinInterval_t {
uint16_t p;
byte bytebuffer[2];
} u_MinInterval;
u_MinInterval.p = MinInterval;
_fifo_enqueue(u_MinInterval.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_MinInterval.bytebuffer[0] & 0xFF );

// parameter MaxInterval
union u_MaxInterval_t {
uint16_t p;
byte bytebuffer[2];
} u_MaxInterval;
u_MaxInterval.p = MaxInterval;
_fifo_enqueue(u_MaxInterval.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_MaxInterval.bytebuffer[0] & 0xFF );

// parameter Type
union u_Type_t {
uint8_t p;
byte bytebuffer[1];
} u_Type;
u_Type.p = Type;
_fifo_enqueue(u_Type.bytebuffer[0] & 0xFF );

// parameter OwnAddressType
union u_OwnAddressType_t {
uint8_t p;
byte bytebuffer[1];
} u_OwnAddressType;
u_OwnAddressType.p = OwnAddressType;
_fifo_enqueue(u_OwnAddressType.bytebuffer[0] & 0xFF );

// parameter PeerAddressType
union u_PeerAddressType_t {
uint8_t p;
byte bytebuffer[1];
} u_PeerAddressType;
u_PeerAddressType.p = PeerAddressType;
_fifo_enqueue(u_PeerAddressType.bytebuffer[0] & 0xFF );

// parameter PeerAddress
union u_PeerAddress_t {
bdaddr_t p;
byte bytebuffer[6];
} u_PeerAddress;
u_PeerAddress.p = PeerAddress;
_fifo_enqueue(u_PeerAddress.bytebuffer[5] & 0xFF );
_fifo_enqueue(u_PeerAddress.bytebuffer[4] & 0xFF );
_fifo_enqueue(u_PeerAddress.bytebuffer[3] & 0xFF );
_fifo_enqueue(u_PeerAddress.bytebuffer[2] & 0xFF );
_fifo_enqueue(u_PeerAddress.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_PeerAddress.bytebuffer[0] & 0xFF );

// parameter Channel
union u_Channel_t {
uint8_t p;
byte bytebuffer[1];
} u_Channel;
u_Channel.p = Channel;
_fifo_enqueue(u_Channel.bytebuffer[0] & 0xFF );

// parameter FilterPolicy
union u_FilterPolicy_t {
uint8_t p;
byte bytebuffer[1];
} u_FilterPolicy;
u_FilterPolicy.p = FilterPolicy;
_fifo_enqueue(u_FilterPolicy.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages BLEConnecterImpl::HCICommands::SetLEScanParameters
void enqueue_BLEConnecterImpl_send_HCICommands_SetLEScanParameters(struct BLEConnecterImpl_Instance *_instance, uint8_t Type, uint16_t Interval, uint16_t Window, uint8_t OwnAddressType, uint8_t FilterPolicy){
fifo_lock();
if ( fifo_byte_available() > 11 ) {

_fifo_enqueue( (12 >> 8) & 0xFF );
_fifo_enqueue( 12 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_HCICommands >> 8) & 0xFF );
_fifo_enqueue( _instance->id_HCICommands & 0xFF );

// parameter Type
union u_Type_t {
uint8_t p;
byte bytebuffer[1];
} u_Type;
u_Type.p = Type;
_fifo_enqueue(u_Type.bytebuffer[0] & 0xFF );

// parameter Interval
union u_Interval_t {
uint16_t p;
byte bytebuffer[2];
} u_Interval;
u_Interval.p = Interval;
_fifo_enqueue(u_Interval.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_Interval.bytebuffer[0] & 0xFF );

// parameter Window
union u_Window_t {
uint16_t p;
byte bytebuffer[2];
} u_Window;
u_Window.p = Window;
_fifo_enqueue(u_Window.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_Window.bytebuffer[0] & 0xFF );

// parameter OwnAddressType
union u_OwnAddressType_t {
uint8_t p;
byte bytebuffer[1];
} u_OwnAddressType;
u_OwnAddressType.p = OwnAddressType;
_fifo_enqueue(u_OwnAddressType.bytebuffer[0] & 0xFF );

// parameter FilterPolicy
union u_FilterPolicy_t {
uint8_t p;
byte bytebuffer[1];
} u_FilterPolicy;
u_FilterPolicy.p = FilterPolicy;
_fifo_enqueue(u_FilterPolicy.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages BLEConnecterImpl::HCICommands::Disconnect
void enqueue_BLEConnecterImpl_send_HCICommands_Disconnect(struct BLEConnecterImpl_Instance *_instance, uint16_t ConnectionHandle, uint8_t Reason){
fifo_lock();
if ( fifo_byte_available() > 7 ) {

_fifo_enqueue( (13 >> 8) & 0xFF );
_fifo_enqueue( 13 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_HCICommands >> 8) & 0xFF );
_fifo_enqueue( _instance->id_HCICommands & 0xFF );

// parameter ConnectionHandle
union u_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ConnectionHandle;
u_ConnectionHandle.p = ConnectionHandle;
_fifo_enqueue(u_ConnectionHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_ConnectionHandle.bytebuffer[0] & 0xFF );

// parameter Reason
union u_Reason_t {
uint8_t p;
byte bytebuffer[1];
} u_Reason;
u_Reason.p = Reason;
_fifo_enqueue(u_Reason.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages BLEConnecterImpl::HCICommands::SetEventMaskAll
void enqueue_BLEConnecterImpl_send_HCICommands_SetEventMaskAll(struct BLEConnecterImpl_Instance *_instance){
fifo_lock();
if ( fifo_byte_available() > 4 ) {

_fifo_enqueue( (14 >> 8) & 0xFF );
_fifo_enqueue( 14 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_HCICommands >> 8) & 0xFF );
_fifo_enqueue( _instance->id_HCICommands & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages BLEConnecterImpl::HCICommands::SetLEAdvertiseEnable
void enqueue_BLEConnecterImpl_send_HCICommands_SetLEAdvertiseEnable(struct BLEConnecterImpl_Instance *_instance, uint8_t Enable){
fifo_lock();
if ( fifo_byte_available() > 5 ) {

_fifo_enqueue( (15 >> 8) & 0xFF );
_fifo_enqueue( 15 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_HCICommands >> 8) & 0xFF );
_fifo_enqueue( _instance->id_HCICommands & 0xFF );

// parameter Enable
union u_Enable_t {
uint8_t p;
byte bytebuffer[1];
} u_Enable;
u_Enable.p = Enable;
_fifo_enqueue(u_Enable.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages BLEConnecterImpl::HCICommands::LERand
void enqueue_BLEConnecterImpl_send_HCICommands_LERand(struct BLEConnecterImpl_Instance *_instance){
fifo_lock();
if ( fifo_byte_available() > 4 ) {

_fifo_enqueue( (16 >> 8) & 0xFF );
_fifo_enqueue( 16 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_HCICommands >> 8) & 0xFF );
_fifo_enqueue( _instance->id_HCICommands & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages BLEConnecterImpl::HCICommands::SetLEAdvertisingData
void enqueue_BLEConnecterImpl_send_HCICommands_SetLEAdvertisingData(struct BLEConnecterImpl_Instance *_instance, uint8_t Length, ble_adv_data_t Data){
fifo_lock();
if ( fifo_byte_available() > 36 ) {

_fifo_enqueue( (17 >> 8) & 0xFF );
_fifo_enqueue( 17 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_HCICommands >> 8) & 0xFF );
_fifo_enqueue( _instance->id_HCICommands & 0xFF );

// parameter Length
union u_Length_t {
uint8_t p;
byte bytebuffer[1];
} u_Length;
u_Length.p = Length;
_fifo_enqueue(u_Length.bytebuffer[0] & 0xFF );

// parameter Data
union u_Data_t {
ble_adv_data_t p;
byte bytebuffer[31];
} u_Data;
u_Data.p = Data;
_fifo_enqueue(u_Data.bytebuffer[30] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[29] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[28] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[27] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[26] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[25] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[24] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[23] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[22] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[21] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[20] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[19] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[18] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[17] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[16] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[15] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[14] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[13] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[12] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[11] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[10] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[9] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[8] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[7] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[6] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[5] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[4] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[3] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[2] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages BLEConnecterImpl::HCICommands::SetLEEventMaskAll
void enqueue_BLEConnecterImpl_send_HCICommands_SetLEEventMaskAll(struct BLEConnecterImpl_Instance *_instance){
fifo_lock();
if ( fifo_byte_available() > 4 ) {

_fifo_enqueue( (18 >> 8) & 0xFF );
_fifo_enqueue( 18 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_HCICommands >> 8) & 0xFF );
_fifo_enqueue( _instance->id_HCICommands & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages BLEConnecterImpl::HCICommands::LECreateConnectionCancel
void enqueue_BLEConnecterImpl_send_HCICommands_LECreateConnectionCancel(struct BLEConnecterImpl_Instance *_instance){
fifo_lock();
if ( fifo_byte_available() > 4 ) {

_fifo_enqueue( (19 >> 8) & 0xFF );
_fifo_enqueue( 19 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_HCICommands >> 8) & 0xFF );
_fifo_enqueue( _instance->id_HCICommands & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages BLEConnecterImpl::HCICommands::LECreateConnection
void enqueue_BLEConnecterImpl_send_HCICommands_LECreateConnection(struct BLEConnecterImpl_Instance *_instance, uint16_t Interval, uint16_t Window, uint8_t FilterPolicy, uint8_t PeerAddressType, bdaddr_t PeerAddress, uint8_t OwnAddressType, uint16_t ConnIntervalMin, uint16_t ConnIntervalMax, uint16_t ConnLatency, uint16_t SupervisionTimeout, uint16_t CELengthMin, uint16_t CELengthMax){
fifo_lock();
if ( fifo_byte_available() > 29 ) {

_fifo_enqueue( (20 >> 8) & 0xFF );
_fifo_enqueue( 20 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_HCICommands >> 8) & 0xFF );
_fifo_enqueue( _instance->id_HCICommands & 0xFF );

// parameter Interval
union u_Interval_t {
uint16_t p;
byte bytebuffer[2];
} u_Interval;
u_Interval.p = Interval;
_fifo_enqueue(u_Interval.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_Interval.bytebuffer[0] & 0xFF );

// parameter Window
union u_Window_t {
uint16_t p;
byte bytebuffer[2];
} u_Window;
u_Window.p = Window;
_fifo_enqueue(u_Window.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_Window.bytebuffer[0] & 0xFF );

// parameter FilterPolicy
union u_FilterPolicy_t {
uint8_t p;
byte bytebuffer[1];
} u_FilterPolicy;
u_FilterPolicy.p = FilterPolicy;
_fifo_enqueue(u_FilterPolicy.bytebuffer[0] & 0xFF );

// parameter PeerAddressType
union u_PeerAddressType_t {
uint8_t p;
byte bytebuffer[1];
} u_PeerAddressType;
u_PeerAddressType.p = PeerAddressType;
_fifo_enqueue(u_PeerAddressType.bytebuffer[0] & 0xFF );

// parameter PeerAddress
union u_PeerAddress_t {
bdaddr_t p;
byte bytebuffer[6];
} u_PeerAddress;
u_PeerAddress.p = PeerAddress;
_fifo_enqueue(u_PeerAddress.bytebuffer[5] & 0xFF );
_fifo_enqueue(u_PeerAddress.bytebuffer[4] & 0xFF );
_fifo_enqueue(u_PeerAddress.bytebuffer[3] & 0xFF );
_fifo_enqueue(u_PeerAddress.bytebuffer[2] & 0xFF );
_fifo_enqueue(u_PeerAddress.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_PeerAddress.bytebuffer[0] & 0xFF );

// parameter OwnAddressType
union u_OwnAddressType_t {
uint8_t p;
byte bytebuffer[1];
} u_OwnAddressType;
u_OwnAddressType.p = OwnAddressType;
_fifo_enqueue(u_OwnAddressType.bytebuffer[0] & 0xFF );

// parameter ConnIntervalMin
union u_ConnIntervalMin_t {
uint16_t p;
byte bytebuffer[2];
} u_ConnIntervalMin;
u_ConnIntervalMin.p = ConnIntervalMin;
_fifo_enqueue(u_ConnIntervalMin.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_ConnIntervalMin.bytebuffer[0] & 0xFF );

// parameter ConnIntervalMax
union u_ConnIntervalMax_t {
uint16_t p;
byte bytebuffer[2];
} u_ConnIntervalMax;
u_ConnIntervalMax.p = ConnIntervalMax;
_fifo_enqueue(u_ConnIntervalMax.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_ConnIntervalMax.bytebuffer[0] & 0xFF );

// parameter ConnLatency
union u_ConnLatency_t {
uint16_t p;
byte bytebuffer[2];
} u_ConnLatency;
u_ConnLatency.p = ConnLatency;
_fifo_enqueue(u_ConnLatency.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_ConnLatency.bytebuffer[0] & 0xFF );

// parameter SupervisionTimeout
union u_SupervisionTimeout_t {
uint16_t p;
byte bytebuffer[2];
} u_SupervisionTimeout;
u_SupervisionTimeout.p = SupervisionTimeout;
_fifo_enqueue(u_SupervisionTimeout.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_SupervisionTimeout.bytebuffer[0] & 0xFF );

// parameter CELengthMin
union u_CELengthMin_t {
uint16_t p;
byte bytebuffer[2];
} u_CELengthMin;
u_CELengthMin.p = CELengthMin;
_fifo_enqueue(u_CELengthMin.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_CELengthMin.bytebuffer[0] & 0xFF );

// parameter CELengthMax
union u_CELengthMax_t {
uint16_t p;
byte bytebuffer[2];
} u_CELengthMax;
u_CELengthMax.p = CELengthMax;
_fifo_enqueue(u_CELengthMax.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_CELengthMax.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages BLEConnecterImpl::HCICommands::LEEncrypt
void enqueue_BLEConnecterImpl_send_HCICommands_LEEncrypt(struct BLEConnecterImpl_Instance *_instance, ble_random_number_t Key, ble_random_number_t Plaintext){
fifo_lock();
if ( fifo_byte_available() > 36 ) {

_fifo_enqueue( (21 >> 8) & 0xFF );
_fifo_enqueue( 21 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_HCICommands >> 8) & 0xFF );
_fifo_enqueue( _instance->id_HCICommands & 0xFF );

// parameter Key
union u_Key_t {
ble_random_number_t p;
byte bytebuffer[16];
} u_Key;
u_Key.p = Key;
_fifo_enqueue(u_Key.bytebuffer[15] & 0xFF );
_fifo_enqueue(u_Key.bytebuffer[14] & 0xFF );
_fifo_enqueue(u_Key.bytebuffer[13] & 0xFF );
_fifo_enqueue(u_Key.bytebuffer[12] & 0xFF );
_fifo_enqueue(u_Key.bytebuffer[11] & 0xFF );
_fifo_enqueue(u_Key.bytebuffer[10] & 0xFF );
_fifo_enqueue(u_Key.bytebuffer[9] & 0xFF );
_fifo_enqueue(u_Key.bytebuffer[8] & 0xFF );
_fifo_enqueue(u_Key.bytebuffer[7] & 0xFF );
_fifo_enqueue(u_Key.bytebuffer[6] & 0xFF );
_fifo_enqueue(u_Key.bytebuffer[5] & 0xFF );
_fifo_enqueue(u_Key.bytebuffer[4] & 0xFF );
_fifo_enqueue(u_Key.bytebuffer[3] & 0xFF );
_fifo_enqueue(u_Key.bytebuffer[2] & 0xFF );
_fifo_enqueue(u_Key.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_Key.bytebuffer[0] & 0xFF );

// parameter Plaintext
union u_Plaintext_t {
ble_random_number_t p;
byte bytebuffer[16];
} u_Plaintext;
u_Plaintext.p = Plaintext;
_fifo_enqueue(u_Plaintext.bytebuffer[15] & 0xFF );
_fifo_enqueue(u_Plaintext.bytebuffer[14] & 0xFF );
_fifo_enqueue(u_Plaintext.bytebuffer[13] & 0xFF );
_fifo_enqueue(u_Plaintext.bytebuffer[12] & 0xFF );
_fifo_enqueue(u_Plaintext.bytebuffer[11] & 0xFF );
_fifo_enqueue(u_Plaintext.bytebuffer[10] & 0xFF );
_fifo_enqueue(u_Plaintext.bytebuffer[9] & 0xFF );
_fifo_enqueue(u_Plaintext.bytebuffer[8] & 0xFF );
_fifo_enqueue(u_Plaintext.bytebuffer[7] & 0xFF );
_fifo_enqueue(u_Plaintext.bytebuffer[6] & 0xFF );
_fifo_enqueue(u_Plaintext.bytebuffer[5] & 0xFF );
_fifo_enqueue(u_Plaintext.bytebuffer[4] & 0xFF );
_fifo_enqueue(u_Plaintext.bytebuffer[3] & 0xFF );
_fifo_enqueue(u_Plaintext.bytebuffer[2] & 0xFF );
_fifo_enqueue(u_Plaintext.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_Plaintext.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages BLEConnecterImpl::HCICommands::SetEventMask
void enqueue_BLEConnecterImpl_send_HCICommands_SetEventMask(struct BLEConnecterImpl_Instance *_instance, set_event_mask_cp Mask){
fifo_lock();
if ( fifo_byte_available() > 12 ) {

_fifo_enqueue( (22 >> 8) & 0xFF );
_fifo_enqueue( 22 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_HCICommands >> 8) & 0xFF );
_fifo_enqueue( _instance->id_HCICommands & 0xFF );

// parameter Mask
union u_Mask_t {
set_event_mask_cp p;
byte bytebuffer[8];
} u_Mask;
u_Mask.p = Mask;
_fifo_enqueue(u_Mask.bytebuffer[7] & 0xFF );
_fifo_enqueue(u_Mask.bytebuffer[6] & 0xFF );
_fifo_enqueue(u_Mask.bytebuffer[5] & 0xFF );
_fifo_enqueue(u_Mask.bytebuffer[4] & 0xFF );
_fifo_enqueue(u_Mask.bytebuffer[3] & 0xFF );
_fifo_enqueue(u_Mask.bytebuffer[2] & 0xFF );
_fifo_enqueue(u_Mask.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_Mask.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages BLEConnecterImpl::HCICommands::SetLocalName
void enqueue_BLEConnecterImpl_send_HCICommands_SetLocalName(struct BLEConnecterImpl_Instance *_instance, change_local_name_cp Name){
fifo_lock();
if ( fifo_byte_available() > 252 ) {

_fifo_enqueue( (23 >> 8) & 0xFF );
_fifo_enqueue( 23 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_HCICommands >> 8) & 0xFF );
_fifo_enqueue( _instance->id_HCICommands & 0xFF );

// parameter Name
union u_Name_t {
change_local_name_cp p;
byte bytebuffer[248];
} u_Name;
u_Name.p = Name;
_fifo_enqueue(u_Name.bytebuffer[247] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[246] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[245] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[244] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[243] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[242] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[241] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[240] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[239] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[238] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[237] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[236] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[235] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[234] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[233] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[232] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[231] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[230] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[229] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[228] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[227] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[226] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[225] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[224] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[223] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[222] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[221] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[220] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[219] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[218] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[217] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[216] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[215] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[214] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[213] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[212] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[211] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[210] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[209] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[208] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[207] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[206] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[205] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[204] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[203] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[202] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[201] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[200] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[199] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[198] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[197] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[196] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[195] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[194] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[193] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[192] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[191] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[190] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[189] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[188] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[187] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[186] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[185] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[184] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[183] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[182] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[181] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[180] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[179] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[178] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[177] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[176] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[175] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[174] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[173] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[172] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[171] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[170] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[169] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[168] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[167] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[166] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[165] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[164] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[163] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[162] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[161] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[160] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[159] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[158] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[157] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[156] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[155] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[154] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[153] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[152] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[151] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[150] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[149] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[148] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[147] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[146] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[145] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[144] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[143] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[142] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[141] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[140] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[139] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[138] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[137] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[136] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[135] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[134] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[133] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[132] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[131] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[130] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[129] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[128] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[127] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[126] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[125] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[124] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[123] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[122] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[121] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[120] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[119] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[118] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[117] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[116] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[115] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[114] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[113] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[112] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[111] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[110] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[109] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[108] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[107] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[106] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[105] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[104] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[103] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[102] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[101] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[100] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[99] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[98] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[97] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[96] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[95] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[94] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[93] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[92] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[91] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[90] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[89] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[88] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[87] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[86] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[85] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[84] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[83] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[82] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[81] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[80] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[79] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[78] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[77] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[76] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[75] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[74] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[73] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[72] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[71] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[70] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[69] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[68] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[67] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[66] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[65] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[64] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[63] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[62] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[61] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[60] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[59] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[58] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[57] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[56] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[55] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[54] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[53] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[52] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[51] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[50] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[49] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[48] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[47] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[46] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[45] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[44] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[43] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[42] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[41] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[40] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[39] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[38] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[37] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[36] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[35] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[34] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[33] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[32] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[31] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[30] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[29] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[28] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[27] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[26] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[25] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[24] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[23] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[22] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[21] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[20] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[19] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[18] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[17] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[16] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[15] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[14] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[13] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[12] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[11] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[10] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[9] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[8] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[7] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[6] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[5] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[4] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[3] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[2] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_Name.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages BLEConnecterImpl::HCICommands::Reset
void enqueue_BLEConnecterImpl_send_HCICommands_Reset(struct BLEConnecterImpl_Instance *_instance){
fifo_lock();
if ( fifo_byte_available() > 4 ) {

_fifo_enqueue( (24 >> 8) & 0xFF );
_fifo_enqueue( 24 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_HCICommands >> 8) & 0xFF );
_fifo_enqueue( _instance->id_HCICommands & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages BLEConnecterImpl::HCICommands::LEStartEncryption
void enqueue_BLEConnecterImpl_send_HCICommands_LEStartEncryption(struct BLEConnecterImpl_Instance *_instance, uint16_t ConnectionHandle, ble_random_part_t Random, uint16_t EDIV, ble_random_number_t LTK){
fifo_lock();
if ( fifo_byte_available() > 32 ) {

_fifo_enqueue( (25 >> 8) & 0xFF );
_fifo_enqueue( 25 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_HCICommands >> 8) & 0xFF );
_fifo_enqueue( _instance->id_HCICommands & 0xFF );

// parameter ConnectionHandle
union u_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ConnectionHandle;
u_ConnectionHandle.p = ConnectionHandle;
_fifo_enqueue(u_ConnectionHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_ConnectionHandle.bytebuffer[0] & 0xFF );

// parameter Random
union u_Random_t {
ble_random_part_t p;
byte bytebuffer[8];
} u_Random;
u_Random.p = Random;
_fifo_enqueue(u_Random.bytebuffer[7] & 0xFF );
_fifo_enqueue(u_Random.bytebuffer[6] & 0xFF );
_fifo_enqueue(u_Random.bytebuffer[5] & 0xFF );
_fifo_enqueue(u_Random.bytebuffer[4] & 0xFF );
_fifo_enqueue(u_Random.bytebuffer[3] & 0xFF );
_fifo_enqueue(u_Random.bytebuffer[2] & 0xFF );
_fifo_enqueue(u_Random.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_Random.bytebuffer[0] & 0xFF );

// parameter EDIV
union u_EDIV_t {
uint16_t p;
byte bytebuffer[2];
} u_EDIV;
u_EDIV.p = EDIV;
_fifo_enqueue(u_EDIV.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_EDIV.bytebuffer[0] & 0xFF );

// parameter LTK
union u_LTK_t {
ble_random_number_t p;
byte bytebuffer[16];
} u_LTK;
u_LTK.p = LTK;
_fifo_enqueue(u_LTK.bytebuffer[15] & 0xFF );
_fifo_enqueue(u_LTK.bytebuffer[14] & 0xFF );
_fifo_enqueue(u_LTK.bytebuffer[13] & 0xFF );
_fifo_enqueue(u_LTK.bytebuffer[12] & 0xFF );
_fifo_enqueue(u_LTK.bytebuffer[11] & 0xFF );
_fifo_enqueue(u_LTK.bytebuffer[10] & 0xFF );
_fifo_enqueue(u_LTK.bytebuffer[9] & 0xFF );
_fifo_enqueue(u_LTK.bytebuffer[8] & 0xFF );
_fifo_enqueue(u_LTK.bytebuffer[7] & 0xFF );
_fifo_enqueue(u_LTK.bytebuffer[6] & 0xFF );
_fifo_enqueue(u_LTK.bytebuffer[5] & 0xFF );
_fifo_enqueue(u_LTK.bytebuffer[4] & 0xFF );
_fifo_enqueue(u_LTK.bytebuffer[3] & 0xFF );
_fifo_enqueue(u_LTK.bytebuffer[2] & 0xFF );
_fifo_enqueue(u_LTK.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_LTK.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages BLEConnecterImpl::HCICommands::SetLEScanEnable
void enqueue_BLEConnecterImpl_send_HCICommands_SetLEScanEnable(struct BLEConnecterImpl_Instance *_instance, uint8_t Enable, uint8_t FilterDuplicates){
fifo_lock();
if ( fifo_byte_available() > 6 ) {

_fifo_enqueue( (26 >> 8) & 0xFF );
_fifo_enqueue( 26 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_HCICommands >> 8) & 0xFF );
_fifo_enqueue( _instance->id_HCICommands & 0xFF );

// parameter Enable
union u_Enable_t {
uint8_t p;
byte bytebuffer[1];
} u_Enable;
u_Enable.p = Enable;
_fifo_enqueue(u_Enable.bytebuffer[0] & 0xFF );

// parameter FilterDuplicates
union u_FilterDuplicates_t {
uint8_t p;
byte bytebuffer[1];
} u_FilterDuplicates;
u_FilterDuplicates.p = FilterDuplicates;
_fifo_enqueue(u_FilterDuplicates.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages BLEConnecterImpl::HCICommands::SetLEEventMask
void enqueue_BLEConnecterImpl_send_HCICommands_SetLEEventMask(struct BLEConnecterImpl_Instance *_instance, set_event_mask_cp Mask){
fifo_lock();
if ( fifo_byte_available() > 12 ) {

_fifo_enqueue( (27 >> 8) & 0xFF );
_fifo_enqueue( 27 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_HCICommands >> 8) & 0xFF );
_fifo_enqueue( _instance->id_HCICommands & 0xFF );

// parameter Mask
union u_Mask_t {
set_event_mask_cp p;
byte bytebuffer[8];
} u_Mask;
u_Mask.p = Mask;
_fifo_enqueue(u_Mask.bytebuffer[7] & 0xFF );
_fifo_enqueue(u_Mask.bytebuffer[6] & 0xFF );
_fifo_enqueue(u_Mask.bytebuffer[5] & 0xFF );
_fifo_enqueue(u_Mask.bytebuffer[4] & 0xFF );
_fifo_enqueue(u_Mask.bytebuffer[3] & 0xFF );
_fifo_enqueue(u_Mask.bytebuffer[2] & 0xFF );
_fifo_enqueue(u_Mask.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_Mask.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages BLEConnecterImpl::HCICommands::SetLEScanResponseData
void enqueue_BLEConnecterImpl_send_HCICommands_SetLEScanResponseData(struct BLEConnecterImpl_Instance *_instance, uint8_t Length, ble_adv_data_t Data){
fifo_lock();
if ( fifo_byte_available() > 36 ) {

_fifo_enqueue( (28 >> 8) & 0xFF );
_fifo_enqueue( 28 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_HCICommands >> 8) & 0xFF );
_fifo_enqueue( _instance->id_HCICommands & 0xFF );

// parameter Length
union u_Length_t {
uint8_t p;
byte bytebuffer[1];
} u_Length;
u_Length.p = Length;
_fifo_enqueue(u_Length.bytebuffer[0] & 0xFF );

// parameter Data
union u_Data_t {
ble_adv_data_t p;
byte bytebuffer[31];
} u_Data;
u_Data.p = Data;
_fifo_enqueue(u_Data.bytebuffer[30] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[29] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[28] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[27] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[26] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[25] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[24] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[23] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[22] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[21] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[20] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[19] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[18] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[17] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[16] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[15] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[14] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[13] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[12] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[11] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[10] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[9] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[8] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[7] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[6] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[5] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[4] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[3] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[2] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages BLEConnecterImpl::SMP::SMPPairingRequest
void enqueue_BLEConnecterImpl_send_SMP_SMPPairingRequest(struct BLEConnecterImpl_Instance *_instance, uint16_t Handle, uint8_t IOCapability, uint8_t OOBDataPresent, uint8_t Bonding, uint8_t MITM, uint8_t SecureConnection, uint8_t Keypress, uint8_t MaximumEncryptionKeySize, uint8_t InitiatorKeyDistribution, uint8_t ResponderKeyDistribution){
fifo_lock();
if ( fifo_byte_available() > 15 ) {

_fifo_enqueue( (29 >> 8) & 0xFF );
_fifo_enqueue( 29 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_SMP >> 8) & 0xFF );
_fifo_enqueue( _instance->id_SMP & 0xFF );

// parameter Handle
union u_Handle_t {
uint16_t p;
byte bytebuffer[2];
} u_Handle;
u_Handle.p = Handle;
_fifo_enqueue(u_Handle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_Handle.bytebuffer[0] & 0xFF );

// parameter IOCapability
union u_IOCapability_t {
uint8_t p;
byte bytebuffer[1];
} u_IOCapability;
u_IOCapability.p = IOCapability;
_fifo_enqueue(u_IOCapability.bytebuffer[0] & 0xFF );

// parameter OOBDataPresent
union u_OOBDataPresent_t {
uint8_t p;
byte bytebuffer[1];
} u_OOBDataPresent;
u_OOBDataPresent.p = OOBDataPresent;
_fifo_enqueue(u_OOBDataPresent.bytebuffer[0] & 0xFF );

// parameter Bonding
union u_Bonding_t {
uint8_t p;
byte bytebuffer[1];
} u_Bonding;
u_Bonding.p = Bonding;
_fifo_enqueue(u_Bonding.bytebuffer[0] & 0xFF );

// parameter MITM
union u_MITM_t {
uint8_t p;
byte bytebuffer[1];
} u_MITM;
u_MITM.p = MITM;
_fifo_enqueue(u_MITM.bytebuffer[0] & 0xFF );

// parameter SecureConnection
union u_SecureConnection_t {
uint8_t p;
byte bytebuffer[1];
} u_SecureConnection;
u_SecureConnection.p = SecureConnection;
_fifo_enqueue(u_SecureConnection.bytebuffer[0] & 0xFF );

// parameter Keypress
union u_Keypress_t {
uint8_t p;
byte bytebuffer[1];
} u_Keypress;
u_Keypress.p = Keypress;
_fifo_enqueue(u_Keypress.bytebuffer[0] & 0xFF );

// parameter MaximumEncryptionKeySize
union u_MaximumEncryptionKeySize_t {
uint8_t p;
byte bytebuffer[1];
} u_MaximumEncryptionKeySize;
u_MaximumEncryptionKeySize.p = MaximumEncryptionKeySize;
_fifo_enqueue(u_MaximumEncryptionKeySize.bytebuffer[0] & 0xFF );

// parameter InitiatorKeyDistribution
union u_InitiatorKeyDistribution_t {
uint8_t p;
byte bytebuffer[1];
} u_InitiatorKeyDistribution;
u_InitiatorKeyDistribution.p = InitiatorKeyDistribution;
_fifo_enqueue(u_InitiatorKeyDistribution.bytebuffer[0] & 0xFF );

// parameter ResponderKeyDistribution
union u_ResponderKeyDistribution_t {
uint8_t p;
byte bytebuffer[1];
} u_ResponderKeyDistribution;
u_ResponderKeyDistribution.p = ResponderKeyDistribution;
_fifo_enqueue(u_ResponderKeyDistribution.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages BLEConnecterImpl::SMP::SMPPairingDHKeyCheck
void enqueue_BLEConnecterImpl_send_SMP_SMPPairingDHKeyCheck(struct BLEConnecterImpl_Instance *_instance, uint16_t Handle, ble_random_number_t DHKeyCheck){
fifo_lock();
if ( fifo_byte_available() > 22 ) {

_fifo_enqueue( (30 >> 8) & 0xFF );
_fifo_enqueue( 30 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_SMP >> 8) & 0xFF );
_fifo_enqueue( _instance->id_SMP & 0xFF );

// parameter Handle
union u_Handle_t {
uint16_t p;
byte bytebuffer[2];
} u_Handle;
u_Handle.p = Handle;
_fifo_enqueue(u_Handle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_Handle.bytebuffer[0] & 0xFF );

// parameter DHKeyCheck
union u_DHKeyCheck_t {
ble_random_number_t p;
byte bytebuffer[16];
} u_DHKeyCheck;
u_DHKeyCheck.p = DHKeyCheck;
_fifo_enqueue(u_DHKeyCheck.bytebuffer[15] & 0xFF );
_fifo_enqueue(u_DHKeyCheck.bytebuffer[14] & 0xFF );
_fifo_enqueue(u_DHKeyCheck.bytebuffer[13] & 0xFF );
_fifo_enqueue(u_DHKeyCheck.bytebuffer[12] & 0xFF );
_fifo_enqueue(u_DHKeyCheck.bytebuffer[11] & 0xFF );
_fifo_enqueue(u_DHKeyCheck.bytebuffer[10] & 0xFF );
_fifo_enqueue(u_DHKeyCheck.bytebuffer[9] & 0xFF );
_fifo_enqueue(u_DHKeyCheck.bytebuffer[8] & 0xFF );
_fifo_enqueue(u_DHKeyCheck.bytebuffer[7] & 0xFF );
_fifo_enqueue(u_DHKeyCheck.bytebuffer[6] & 0xFF );
_fifo_enqueue(u_DHKeyCheck.bytebuffer[5] & 0xFF );
_fifo_enqueue(u_DHKeyCheck.bytebuffer[4] & 0xFF );
_fifo_enqueue(u_DHKeyCheck.bytebuffer[3] & 0xFF );
_fifo_enqueue(u_DHKeyCheck.bytebuffer[2] & 0xFF );
_fifo_enqueue(u_DHKeyCheck.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_DHKeyCheck.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages BLEConnecterImpl::SMP::SMPEncryptionInformation
void enqueue_BLEConnecterImpl_send_SMP_SMPEncryptionInformation(struct BLEConnecterImpl_Instance *_instance, uint16_t Handle, ble_random_number_t LongTermKey){
fifo_lock();
if ( fifo_byte_available() > 22 ) {

_fifo_enqueue( (31 >> 8) & 0xFF );
_fifo_enqueue( 31 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_SMP >> 8) & 0xFF );
_fifo_enqueue( _instance->id_SMP & 0xFF );

// parameter Handle
union u_Handle_t {
uint16_t p;
byte bytebuffer[2];
} u_Handle;
u_Handle.p = Handle;
_fifo_enqueue(u_Handle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_Handle.bytebuffer[0] & 0xFF );

// parameter LongTermKey
union u_LongTermKey_t {
ble_random_number_t p;
byte bytebuffer[16];
} u_LongTermKey;
u_LongTermKey.p = LongTermKey;
_fifo_enqueue(u_LongTermKey.bytebuffer[15] & 0xFF );
_fifo_enqueue(u_LongTermKey.bytebuffer[14] & 0xFF );
_fifo_enqueue(u_LongTermKey.bytebuffer[13] & 0xFF );
_fifo_enqueue(u_LongTermKey.bytebuffer[12] & 0xFF );
_fifo_enqueue(u_LongTermKey.bytebuffer[11] & 0xFF );
_fifo_enqueue(u_LongTermKey.bytebuffer[10] & 0xFF );
_fifo_enqueue(u_LongTermKey.bytebuffer[9] & 0xFF );
_fifo_enqueue(u_LongTermKey.bytebuffer[8] & 0xFF );
_fifo_enqueue(u_LongTermKey.bytebuffer[7] & 0xFF );
_fifo_enqueue(u_LongTermKey.bytebuffer[6] & 0xFF );
_fifo_enqueue(u_LongTermKey.bytebuffer[5] & 0xFF );
_fifo_enqueue(u_LongTermKey.bytebuffer[4] & 0xFF );
_fifo_enqueue(u_LongTermKey.bytebuffer[3] & 0xFF );
_fifo_enqueue(u_LongTermKey.bytebuffer[2] & 0xFF );
_fifo_enqueue(u_LongTermKey.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_LongTermKey.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages BLEConnecterImpl::SMP::SMPPairingConfirm
void enqueue_BLEConnecterImpl_send_SMP_SMPPairingConfirm(struct BLEConnecterImpl_Instance *_instance, uint16_t Handle, ble_random_number_t ConfirmValue){
fifo_lock();
if ( fifo_byte_available() > 22 ) {

_fifo_enqueue( (32 >> 8) & 0xFF );
_fifo_enqueue( 32 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_SMP >> 8) & 0xFF );
_fifo_enqueue( _instance->id_SMP & 0xFF );

// parameter Handle
union u_Handle_t {
uint16_t p;
byte bytebuffer[2];
} u_Handle;
u_Handle.p = Handle;
_fifo_enqueue(u_Handle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_Handle.bytebuffer[0] & 0xFF );

// parameter ConfirmValue
union u_ConfirmValue_t {
ble_random_number_t p;
byte bytebuffer[16];
} u_ConfirmValue;
u_ConfirmValue.p = ConfirmValue;
_fifo_enqueue(u_ConfirmValue.bytebuffer[15] & 0xFF );
_fifo_enqueue(u_ConfirmValue.bytebuffer[14] & 0xFF );
_fifo_enqueue(u_ConfirmValue.bytebuffer[13] & 0xFF );
_fifo_enqueue(u_ConfirmValue.bytebuffer[12] & 0xFF );
_fifo_enqueue(u_ConfirmValue.bytebuffer[11] & 0xFF );
_fifo_enqueue(u_ConfirmValue.bytebuffer[10] & 0xFF );
_fifo_enqueue(u_ConfirmValue.bytebuffer[9] & 0xFF );
_fifo_enqueue(u_ConfirmValue.bytebuffer[8] & 0xFF );
_fifo_enqueue(u_ConfirmValue.bytebuffer[7] & 0xFF );
_fifo_enqueue(u_ConfirmValue.bytebuffer[6] & 0xFF );
_fifo_enqueue(u_ConfirmValue.bytebuffer[5] & 0xFF );
_fifo_enqueue(u_ConfirmValue.bytebuffer[4] & 0xFF );
_fifo_enqueue(u_ConfirmValue.bytebuffer[3] & 0xFF );
_fifo_enqueue(u_ConfirmValue.bytebuffer[2] & 0xFF );
_fifo_enqueue(u_ConfirmValue.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_ConfirmValue.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages BLEConnecterImpl::SMP::SMPSecurityRequest
void enqueue_BLEConnecterImpl_send_SMP_SMPSecurityRequest(struct BLEConnecterImpl_Instance *_instance, uint16_t Handle, uint8_t Bonding, uint8_t MITM, uint8_t SecureConnection, uint8_t Keypress){
fifo_lock();
if ( fifo_byte_available() > 10 ) {

_fifo_enqueue( (33 >> 8) & 0xFF );
_fifo_enqueue( 33 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_SMP >> 8) & 0xFF );
_fifo_enqueue( _instance->id_SMP & 0xFF );

// parameter Handle
union u_Handle_t {
uint16_t p;
byte bytebuffer[2];
} u_Handle;
u_Handle.p = Handle;
_fifo_enqueue(u_Handle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_Handle.bytebuffer[0] & 0xFF );

// parameter Bonding
union u_Bonding_t {
uint8_t p;
byte bytebuffer[1];
} u_Bonding;
u_Bonding.p = Bonding;
_fifo_enqueue(u_Bonding.bytebuffer[0] & 0xFF );

// parameter MITM
union u_MITM_t {
uint8_t p;
byte bytebuffer[1];
} u_MITM;
u_MITM.p = MITM;
_fifo_enqueue(u_MITM.bytebuffer[0] & 0xFF );

// parameter SecureConnection
union u_SecureConnection_t {
uint8_t p;
byte bytebuffer[1];
} u_SecureConnection;
u_SecureConnection.p = SecureConnection;
_fifo_enqueue(u_SecureConnection.bytebuffer[0] & 0xFF );

// parameter Keypress
union u_Keypress_t {
uint8_t p;
byte bytebuffer[1];
} u_Keypress;
u_Keypress.p = Keypress;
_fifo_enqueue(u_Keypress.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages BLEConnecterImpl::SMP::SMPPairingFailed
void enqueue_BLEConnecterImpl_send_SMP_SMPPairingFailed(struct BLEConnecterImpl_Instance *_instance, uint16_t Handle, uint8_t Reason){
fifo_lock();
if ( fifo_byte_available() > 7 ) {

_fifo_enqueue( (34 >> 8) & 0xFF );
_fifo_enqueue( 34 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_SMP >> 8) & 0xFF );
_fifo_enqueue( _instance->id_SMP & 0xFF );

// parameter Handle
union u_Handle_t {
uint16_t p;
byte bytebuffer[2];
} u_Handle;
u_Handle.p = Handle;
_fifo_enqueue(u_Handle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_Handle.bytebuffer[0] & 0xFF );

// parameter Reason
union u_Reason_t {
uint8_t p;
byte bytebuffer[1];
} u_Reason;
u_Reason.p = Reason;
_fifo_enqueue(u_Reason.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages BLEConnecterImpl::SMP::SMPPairingPublicKey
void enqueue_BLEConnecterImpl_send_SMP_SMPPairingPublicKey(struct BLEConnecterImpl_Instance *_instance, uint16_t Handle, smp_public_key_t KeyX, smp_public_key_t KeyY){
fifo_lock();
if ( fifo_byte_available() > 70 ) {

_fifo_enqueue( (35 >> 8) & 0xFF );
_fifo_enqueue( 35 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_SMP >> 8) & 0xFF );
_fifo_enqueue( _instance->id_SMP & 0xFF );

// parameter Handle
union u_Handle_t {
uint16_t p;
byte bytebuffer[2];
} u_Handle;
u_Handle.p = Handle;
_fifo_enqueue(u_Handle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_Handle.bytebuffer[0] & 0xFF );

// parameter KeyX
union u_KeyX_t {
smp_public_key_t p;
byte bytebuffer[32];
} u_KeyX;
u_KeyX.p = KeyX;
_fifo_enqueue(u_KeyX.bytebuffer[31] & 0xFF );
_fifo_enqueue(u_KeyX.bytebuffer[30] & 0xFF );
_fifo_enqueue(u_KeyX.bytebuffer[29] & 0xFF );
_fifo_enqueue(u_KeyX.bytebuffer[28] & 0xFF );
_fifo_enqueue(u_KeyX.bytebuffer[27] & 0xFF );
_fifo_enqueue(u_KeyX.bytebuffer[26] & 0xFF );
_fifo_enqueue(u_KeyX.bytebuffer[25] & 0xFF );
_fifo_enqueue(u_KeyX.bytebuffer[24] & 0xFF );
_fifo_enqueue(u_KeyX.bytebuffer[23] & 0xFF );
_fifo_enqueue(u_KeyX.bytebuffer[22] & 0xFF );
_fifo_enqueue(u_KeyX.bytebuffer[21] & 0xFF );
_fifo_enqueue(u_KeyX.bytebuffer[20] & 0xFF );
_fifo_enqueue(u_KeyX.bytebuffer[19] & 0xFF );
_fifo_enqueue(u_KeyX.bytebuffer[18] & 0xFF );
_fifo_enqueue(u_KeyX.bytebuffer[17] & 0xFF );
_fifo_enqueue(u_KeyX.bytebuffer[16] & 0xFF );
_fifo_enqueue(u_KeyX.bytebuffer[15] & 0xFF );
_fifo_enqueue(u_KeyX.bytebuffer[14] & 0xFF );
_fifo_enqueue(u_KeyX.bytebuffer[13] & 0xFF );
_fifo_enqueue(u_KeyX.bytebuffer[12] & 0xFF );
_fifo_enqueue(u_KeyX.bytebuffer[11] & 0xFF );
_fifo_enqueue(u_KeyX.bytebuffer[10] & 0xFF );
_fifo_enqueue(u_KeyX.bytebuffer[9] & 0xFF );
_fifo_enqueue(u_KeyX.bytebuffer[8] & 0xFF );
_fifo_enqueue(u_KeyX.bytebuffer[7] & 0xFF );
_fifo_enqueue(u_KeyX.bytebuffer[6] & 0xFF );
_fifo_enqueue(u_KeyX.bytebuffer[5] & 0xFF );
_fifo_enqueue(u_KeyX.bytebuffer[4] & 0xFF );
_fifo_enqueue(u_KeyX.bytebuffer[3] & 0xFF );
_fifo_enqueue(u_KeyX.bytebuffer[2] & 0xFF );
_fifo_enqueue(u_KeyX.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_KeyX.bytebuffer[0] & 0xFF );

// parameter KeyY
union u_KeyY_t {
smp_public_key_t p;
byte bytebuffer[32];
} u_KeyY;
u_KeyY.p = KeyY;
_fifo_enqueue(u_KeyY.bytebuffer[31] & 0xFF );
_fifo_enqueue(u_KeyY.bytebuffer[30] & 0xFF );
_fifo_enqueue(u_KeyY.bytebuffer[29] & 0xFF );
_fifo_enqueue(u_KeyY.bytebuffer[28] & 0xFF );
_fifo_enqueue(u_KeyY.bytebuffer[27] & 0xFF );
_fifo_enqueue(u_KeyY.bytebuffer[26] & 0xFF );
_fifo_enqueue(u_KeyY.bytebuffer[25] & 0xFF );
_fifo_enqueue(u_KeyY.bytebuffer[24] & 0xFF );
_fifo_enqueue(u_KeyY.bytebuffer[23] & 0xFF );
_fifo_enqueue(u_KeyY.bytebuffer[22] & 0xFF );
_fifo_enqueue(u_KeyY.bytebuffer[21] & 0xFF );
_fifo_enqueue(u_KeyY.bytebuffer[20] & 0xFF );
_fifo_enqueue(u_KeyY.bytebuffer[19] & 0xFF );
_fifo_enqueue(u_KeyY.bytebuffer[18] & 0xFF );
_fifo_enqueue(u_KeyY.bytebuffer[17] & 0xFF );
_fifo_enqueue(u_KeyY.bytebuffer[16] & 0xFF );
_fifo_enqueue(u_KeyY.bytebuffer[15] & 0xFF );
_fifo_enqueue(u_KeyY.bytebuffer[14] & 0xFF );
_fifo_enqueue(u_KeyY.bytebuffer[13] & 0xFF );
_fifo_enqueue(u_KeyY.bytebuffer[12] & 0xFF );
_fifo_enqueue(u_KeyY.bytebuffer[11] & 0xFF );
_fifo_enqueue(u_KeyY.bytebuffer[10] & 0xFF );
_fifo_enqueue(u_KeyY.bytebuffer[9] & 0xFF );
_fifo_enqueue(u_KeyY.bytebuffer[8] & 0xFF );
_fifo_enqueue(u_KeyY.bytebuffer[7] & 0xFF );
_fifo_enqueue(u_KeyY.bytebuffer[6] & 0xFF );
_fifo_enqueue(u_KeyY.bytebuffer[5] & 0xFF );
_fifo_enqueue(u_KeyY.bytebuffer[4] & 0xFF );
_fifo_enqueue(u_KeyY.bytebuffer[3] & 0xFF );
_fifo_enqueue(u_KeyY.bytebuffer[2] & 0xFF );
_fifo_enqueue(u_KeyY.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_KeyY.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages BLEConnecterImpl::SMP::SMPIdentityAddressInformation
void enqueue_BLEConnecterImpl_send_SMP_SMPIdentityAddressInformation(struct BLEConnecterImpl_Instance *_instance, uint16_t Handle, uint8_t AddressType, bdaddr_t Address){
fifo_lock();
if ( fifo_byte_available() > 13 ) {

_fifo_enqueue( (36 >> 8) & 0xFF );
_fifo_enqueue( 36 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_SMP >> 8) & 0xFF );
_fifo_enqueue( _instance->id_SMP & 0xFF );

// parameter Handle
union u_Handle_t {
uint16_t p;
byte bytebuffer[2];
} u_Handle;
u_Handle.p = Handle;
_fifo_enqueue(u_Handle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_Handle.bytebuffer[0] & 0xFF );

// parameter AddressType
union u_AddressType_t {
uint8_t p;
byte bytebuffer[1];
} u_AddressType;
u_AddressType.p = AddressType;
_fifo_enqueue(u_AddressType.bytebuffer[0] & 0xFF );

// parameter Address
union u_Address_t {
bdaddr_t p;
byte bytebuffer[6];
} u_Address;
u_Address.p = Address;
_fifo_enqueue(u_Address.bytebuffer[5] & 0xFF );
_fifo_enqueue(u_Address.bytebuffer[4] & 0xFF );
_fifo_enqueue(u_Address.bytebuffer[3] & 0xFF );
_fifo_enqueue(u_Address.bytebuffer[2] & 0xFF );
_fifo_enqueue(u_Address.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_Address.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages BLEConnecterImpl::SMP::SMPPairingRandom
void enqueue_BLEConnecterImpl_send_SMP_SMPPairingRandom(struct BLEConnecterImpl_Instance *_instance, uint16_t Handle, ble_random_number_t RandomValue){
fifo_lock();
if ( fifo_byte_available() > 22 ) {

_fifo_enqueue( (37 >> 8) & 0xFF );
_fifo_enqueue( 37 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_SMP >> 8) & 0xFF );
_fifo_enqueue( _instance->id_SMP & 0xFF );

// parameter Handle
union u_Handle_t {
uint16_t p;
byte bytebuffer[2];
} u_Handle;
u_Handle.p = Handle;
_fifo_enqueue(u_Handle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_Handle.bytebuffer[0] & 0xFF );

// parameter RandomValue
union u_RandomValue_t {
ble_random_number_t p;
byte bytebuffer[16];
} u_RandomValue;
u_RandomValue.p = RandomValue;
_fifo_enqueue(u_RandomValue.bytebuffer[15] & 0xFF );
_fifo_enqueue(u_RandomValue.bytebuffer[14] & 0xFF );
_fifo_enqueue(u_RandomValue.bytebuffer[13] & 0xFF );
_fifo_enqueue(u_RandomValue.bytebuffer[12] & 0xFF );
_fifo_enqueue(u_RandomValue.bytebuffer[11] & 0xFF );
_fifo_enqueue(u_RandomValue.bytebuffer[10] & 0xFF );
_fifo_enqueue(u_RandomValue.bytebuffer[9] & 0xFF );
_fifo_enqueue(u_RandomValue.bytebuffer[8] & 0xFF );
_fifo_enqueue(u_RandomValue.bytebuffer[7] & 0xFF );
_fifo_enqueue(u_RandomValue.bytebuffer[6] & 0xFF );
_fifo_enqueue(u_RandomValue.bytebuffer[5] & 0xFF );
_fifo_enqueue(u_RandomValue.bytebuffer[4] & 0xFF );
_fifo_enqueue(u_RandomValue.bytebuffer[3] & 0xFF );
_fifo_enqueue(u_RandomValue.bytebuffer[2] & 0xFF );
_fifo_enqueue(u_RandomValue.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_RandomValue.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages BLEConnecterImpl::SMP::SMPMasterIdentification
void enqueue_BLEConnecterImpl_send_SMP_SMPMasterIdentification(struct BLEConnecterImpl_Instance *_instance, uint16_t Handle, uint16_t EDIV, ble_random_part_t Rand){
fifo_lock();
if ( fifo_byte_available() > 16 ) {

_fifo_enqueue( (38 >> 8) & 0xFF );
_fifo_enqueue( 38 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_SMP >> 8) & 0xFF );
_fifo_enqueue( _instance->id_SMP & 0xFF );

// parameter Handle
union u_Handle_t {
uint16_t p;
byte bytebuffer[2];
} u_Handle;
u_Handle.p = Handle;
_fifo_enqueue(u_Handle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_Handle.bytebuffer[0] & 0xFF );

// parameter EDIV
union u_EDIV_t {
uint16_t p;
byte bytebuffer[2];
} u_EDIV;
u_EDIV.p = EDIV;
_fifo_enqueue(u_EDIV.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_EDIV.bytebuffer[0] & 0xFF );

// parameter Rand
union u_Rand_t {
ble_random_part_t p;
byte bytebuffer[8];
} u_Rand;
u_Rand.p = Rand;
_fifo_enqueue(u_Rand.bytebuffer[7] & 0xFF );
_fifo_enqueue(u_Rand.bytebuffer[6] & 0xFF );
_fifo_enqueue(u_Rand.bytebuffer[5] & 0xFF );
_fifo_enqueue(u_Rand.bytebuffer[4] & 0xFF );
_fifo_enqueue(u_Rand.bytebuffer[3] & 0xFF );
_fifo_enqueue(u_Rand.bytebuffer[2] & 0xFF );
_fifo_enqueue(u_Rand.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_Rand.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages BLEConnecterImpl::SMP::SMPPairingResponse
void enqueue_BLEConnecterImpl_send_SMP_SMPPairingResponse(struct BLEConnecterImpl_Instance *_instance, uint16_t Handle, uint8_t IOCapability, uint8_t OOBDataPresent, uint8_t Bonding, uint8_t MITM, uint8_t SecureConnection, uint8_t Keypress, uint8_t MaximumEncryptionKeySize, uint8_t InitiatorKeyDistribution, uint8_t ResponderKeyDistribution){
fifo_lock();
if ( fifo_byte_available() > 15 ) {

_fifo_enqueue( (39 >> 8) & 0xFF );
_fifo_enqueue( 39 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_SMP >> 8) & 0xFF );
_fifo_enqueue( _instance->id_SMP & 0xFF );

// parameter Handle
union u_Handle_t {
uint16_t p;
byte bytebuffer[2];
} u_Handle;
u_Handle.p = Handle;
_fifo_enqueue(u_Handle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_Handle.bytebuffer[0] & 0xFF );

// parameter IOCapability
union u_IOCapability_t {
uint8_t p;
byte bytebuffer[1];
} u_IOCapability;
u_IOCapability.p = IOCapability;
_fifo_enqueue(u_IOCapability.bytebuffer[0] & 0xFF );

// parameter OOBDataPresent
union u_OOBDataPresent_t {
uint8_t p;
byte bytebuffer[1];
} u_OOBDataPresent;
u_OOBDataPresent.p = OOBDataPresent;
_fifo_enqueue(u_OOBDataPresent.bytebuffer[0] & 0xFF );

// parameter Bonding
union u_Bonding_t {
uint8_t p;
byte bytebuffer[1];
} u_Bonding;
u_Bonding.p = Bonding;
_fifo_enqueue(u_Bonding.bytebuffer[0] & 0xFF );

// parameter MITM
union u_MITM_t {
uint8_t p;
byte bytebuffer[1];
} u_MITM;
u_MITM.p = MITM;
_fifo_enqueue(u_MITM.bytebuffer[0] & 0xFF );

// parameter SecureConnection
union u_SecureConnection_t {
uint8_t p;
byte bytebuffer[1];
} u_SecureConnection;
u_SecureConnection.p = SecureConnection;
_fifo_enqueue(u_SecureConnection.bytebuffer[0] & 0xFF );

// parameter Keypress
union u_Keypress_t {
uint8_t p;
byte bytebuffer[1];
} u_Keypress;
u_Keypress.p = Keypress;
_fifo_enqueue(u_Keypress.bytebuffer[0] & 0xFF );

// parameter MaximumEncryptionKeySize
union u_MaximumEncryptionKeySize_t {
uint8_t p;
byte bytebuffer[1];
} u_MaximumEncryptionKeySize;
u_MaximumEncryptionKeySize.p = MaximumEncryptionKeySize;
_fifo_enqueue(u_MaximumEncryptionKeySize.bytebuffer[0] & 0xFF );

// parameter InitiatorKeyDistribution
union u_InitiatorKeyDistribution_t {
uint8_t p;
byte bytebuffer[1];
} u_InitiatorKeyDistribution;
u_InitiatorKeyDistribution.p = InitiatorKeyDistribution;
_fifo_enqueue(u_InitiatorKeyDistribution.bytebuffer[0] & 0xFF );

// parameter ResponderKeyDistribution
union u_ResponderKeyDistribution_t {
uint8_t p;
byte bytebuffer[1];
} u_ResponderKeyDistribution;
u_ResponderKeyDistribution.p = ResponderKeyDistribution;
_fifo_enqueue(u_ResponderKeyDistribution.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages BLEConnecterImpl::SMP::SMPIdentityInformation
void enqueue_BLEConnecterImpl_send_SMP_SMPIdentityInformation(struct BLEConnecterImpl_Instance *_instance, uint16_t Handle, ble_random_number_t IdentityResolvingKey){
fifo_lock();
if ( fifo_byte_available() > 22 ) {

_fifo_enqueue( (40 >> 8) & 0xFF );
_fifo_enqueue( 40 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_SMP >> 8) & 0xFF );
_fifo_enqueue( _instance->id_SMP & 0xFF );

// parameter Handle
union u_Handle_t {
uint16_t p;
byte bytebuffer[2];
} u_Handle;
u_Handle.p = Handle;
_fifo_enqueue(u_Handle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_Handle.bytebuffer[0] & 0xFF );

// parameter IdentityResolvingKey
union u_IdentityResolvingKey_t {
ble_random_number_t p;
byte bytebuffer[16];
} u_IdentityResolvingKey;
u_IdentityResolvingKey.p = IdentityResolvingKey;
_fifo_enqueue(u_IdentityResolvingKey.bytebuffer[15] & 0xFF );
_fifo_enqueue(u_IdentityResolvingKey.bytebuffer[14] & 0xFF );
_fifo_enqueue(u_IdentityResolvingKey.bytebuffer[13] & 0xFF );
_fifo_enqueue(u_IdentityResolvingKey.bytebuffer[12] & 0xFF );
_fifo_enqueue(u_IdentityResolvingKey.bytebuffer[11] & 0xFF );
_fifo_enqueue(u_IdentityResolvingKey.bytebuffer[10] & 0xFF );
_fifo_enqueue(u_IdentityResolvingKey.bytebuffer[9] & 0xFF );
_fifo_enqueue(u_IdentityResolvingKey.bytebuffer[8] & 0xFF );
_fifo_enqueue(u_IdentityResolvingKey.bytebuffer[7] & 0xFF );
_fifo_enqueue(u_IdentityResolvingKey.bytebuffer[6] & 0xFF );
_fifo_enqueue(u_IdentityResolvingKey.bytebuffer[5] & 0xFF );
_fifo_enqueue(u_IdentityResolvingKey.bytebuffer[4] & 0xFF );
_fifo_enqueue(u_IdentityResolvingKey.bytebuffer[3] & 0xFF );
_fifo_enqueue(u_IdentityResolvingKey.bytebuffer[2] & 0xFF );
_fifo_enqueue(u_IdentityResolvingKey.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_IdentityResolvingKey.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages BLEConnecterImpl::SMP::SMPKeypressNotification
void enqueue_BLEConnecterImpl_send_SMP_SMPKeypressNotification(struct BLEConnecterImpl_Instance *_instance, uint16_t Handle, uint8_t Type){
fifo_lock();
if ( fifo_byte_available() > 7 ) {

_fifo_enqueue( (41 >> 8) & 0xFF );
_fifo_enqueue( 41 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_SMP >> 8) & 0xFF );
_fifo_enqueue( _instance->id_SMP & 0xFF );

// parameter Handle
union u_Handle_t {
uint16_t p;
byte bytebuffer[2];
} u_Handle;
u_Handle.p = Handle;
_fifo_enqueue(u_Handle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_Handle.bytebuffer[0] & 0xFF );

// parameter Type
union u_Type_t {
uint8_t p;
byte bytebuffer[1];
} u_Type;
u_Type.p = Type;
_fifo_enqueue(u_Type.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages BLEConnecterImpl::SMP::SMPSigningInformation
void enqueue_BLEConnecterImpl_send_SMP_SMPSigningInformation(struct BLEConnecterImpl_Instance *_instance, uint16_t Handle, ble_random_number_t SignatureKey){
fifo_lock();
if ( fifo_byte_available() > 22 ) {

_fifo_enqueue( (42 >> 8) & 0xFF );
_fifo_enqueue( 42 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_SMP >> 8) & 0xFF );
_fifo_enqueue( _instance->id_SMP & 0xFF );

// parameter Handle
union u_Handle_t {
uint16_t p;
byte bytebuffer[2];
} u_Handle;
u_Handle.p = Handle;
_fifo_enqueue(u_Handle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_Handle.bytebuffer[0] & 0xFF );

// parameter SignatureKey
union u_SignatureKey_t {
ble_random_number_t p;
byte bytebuffer[16];
} u_SignatureKey;
u_SignatureKey.p = SignatureKey;
_fifo_enqueue(u_SignatureKey.bytebuffer[15] & 0xFF );
_fifo_enqueue(u_SignatureKey.bytebuffer[14] & 0xFF );
_fifo_enqueue(u_SignatureKey.bytebuffer[13] & 0xFF );
_fifo_enqueue(u_SignatureKey.bytebuffer[12] & 0xFF );
_fifo_enqueue(u_SignatureKey.bytebuffer[11] & 0xFF );
_fifo_enqueue(u_SignatureKey.bytebuffer[10] & 0xFF );
_fifo_enqueue(u_SignatureKey.bytebuffer[9] & 0xFF );
_fifo_enqueue(u_SignatureKey.bytebuffer[8] & 0xFF );
_fifo_enqueue(u_SignatureKey.bytebuffer[7] & 0xFF );
_fifo_enqueue(u_SignatureKey.bytebuffer[6] & 0xFF );
_fifo_enqueue(u_SignatureKey.bytebuffer[5] & 0xFF );
_fifo_enqueue(u_SignatureKey.bytebuffer[4] & 0xFF );
_fifo_enqueue(u_SignatureKey.bytebuffer[3] & 0xFF );
_fifo_enqueue(u_SignatureKey.bytebuffer[2] & 0xFF );
_fifo_enqueue(u_SignatureKey.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_SignatureKey.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages BLEConnecterImpl::ATT::ATTReadByTypeError
void enqueue_BLEConnecterImpl_send_ATT_ATTReadByTypeError(struct BLEConnecterImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error){
fifo_lock();
if ( fifo_byte_available() > 9 ) {

_fifo_enqueue( (43 >> 8) & 0xFF );
_fifo_enqueue( 43 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_ATT >> 8) & 0xFF );
_fifo_enqueue( _instance->id_ATT & 0xFF );

// parameter ConnectionHandle
union u_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ConnectionHandle;
u_ConnectionHandle.p = ConnectionHandle;
_fifo_enqueue(u_ConnectionHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_ConnectionHandle.bytebuffer[0] & 0xFF );

// parameter AttributeHandle
union u_AttributeHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_AttributeHandle;
u_AttributeHandle.p = AttributeHandle;
_fifo_enqueue(u_AttributeHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_AttributeHandle.bytebuffer[0] & 0xFF );

// parameter Error
union u_Error_t {
uint8_t p;
byte bytebuffer[1];
} u_Error;
u_Error.p = Error;
_fifo_enqueue(u_Error.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages BLEConnecterImpl::ATT::ATTReadByGroupTypeError
void enqueue_BLEConnecterImpl_send_ATT_ATTReadByGroupTypeError(struct BLEConnecterImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error){
fifo_lock();
if ( fifo_byte_available() > 9 ) {

_fifo_enqueue( (44 >> 8) & 0xFF );
_fifo_enqueue( 44 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_ATT >> 8) & 0xFF );
_fifo_enqueue( _instance->id_ATT & 0xFF );

// parameter ConnectionHandle
union u_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ConnectionHandle;
u_ConnectionHandle.p = ConnectionHandle;
_fifo_enqueue(u_ConnectionHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_ConnectionHandle.bytebuffer[0] & 0xFF );

// parameter AttributeHandle
union u_AttributeHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_AttributeHandle;
u_AttributeHandle.p = AttributeHandle;
_fifo_enqueue(u_AttributeHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_AttributeHandle.bytebuffer[0] & 0xFF );

// parameter Error
union u_Error_t {
uint8_t p;
byte bytebuffer[1];
} u_Error;
u_Error.p = Error;
_fifo_enqueue(u_Error.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages BLEConnecterImpl::ATT::ATTWriteResponse
void enqueue_BLEConnecterImpl_send_ATT_ATTWriteResponse(struct BLEConnecterImpl_Instance *_instance, uint16_t ConnectionHandle){
fifo_lock();
if ( fifo_byte_available() > 6 ) {

_fifo_enqueue( (45 >> 8) & 0xFF );
_fifo_enqueue( 45 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_ATT >> 8) & 0xFF );
_fifo_enqueue( _instance->id_ATT & 0xFF );

// parameter ConnectionHandle
union u_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ConnectionHandle;
u_ConnectionHandle.p = ConnectionHandle;
_fifo_enqueue(u_ConnectionHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_ConnectionHandle.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages BLEConnecterImpl::ATT::ATTReadRequest
void enqueue_BLEConnecterImpl_send_ATT_ATTReadRequest(struct BLEConnecterImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle){
fifo_lock();
if ( fifo_byte_available() > 8 ) {

_fifo_enqueue( (46 >> 8) & 0xFF );
_fifo_enqueue( 46 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_ATT >> 8) & 0xFF );
_fifo_enqueue( _instance->id_ATT & 0xFF );

// parameter ConnectionHandle
union u_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ConnectionHandle;
u_ConnectionHandle.p = ConnectionHandle;
_fifo_enqueue(u_ConnectionHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_ConnectionHandle.bytebuffer[0] & 0xFF );

// parameter AttributeHandle
union u_AttributeHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_AttributeHandle;
u_AttributeHandle.p = AttributeHandle;
_fifo_enqueue(u_AttributeHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_AttributeHandle.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages BLEConnecterImpl::ATT::ATTFindInformationError
void enqueue_BLEConnecterImpl_send_ATT_ATTFindInformationError(struct BLEConnecterImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error){
fifo_lock();
if ( fifo_byte_available() > 9 ) {

_fifo_enqueue( (47 >> 8) & 0xFF );
_fifo_enqueue( 47 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_ATT >> 8) & 0xFF );
_fifo_enqueue( _instance->id_ATT & 0xFF );

// parameter ConnectionHandle
union u_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ConnectionHandle;
u_ConnectionHandle.p = ConnectionHandle;
_fifo_enqueue(u_ConnectionHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_ConnectionHandle.bytebuffer[0] & 0xFF );

// parameter AttributeHandle
union u_AttributeHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_AttributeHandle;
u_AttributeHandle.p = AttributeHandle;
_fifo_enqueue(u_AttributeHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_AttributeHandle.bytebuffer[0] & 0xFF );

// parameter Error
union u_Error_t {
uint8_t p;
byte bytebuffer[1];
} u_Error;
u_Error.p = Error;
_fifo_enqueue(u_Error.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages BLEConnecterImpl::ATT::ATTReadByTypeRequest
void enqueue_BLEConnecterImpl_send_ATT_ATTReadByTypeRequest(struct BLEConnecterImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t StartingHandle, uint16_t EndingHandle, ble_uuid_t AttributeType){
fifo_lock();
if ( fifo_byte_available() > 26 ) {

_fifo_enqueue( (48 >> 8) & 0xFF );
_fifo_enqueue( 48 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_ATT >> 8) & 0xFF );
_fifo_enqueue( _instance->id_ATT & 0xFF );

// parameter ConnectionHandle
union u_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ConnectionHandle;
u_ConnectionHandle.p = ConnectionHandle;
_fifo_enqueue(u_ConnectionHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_ConnectionHandle.bytebuffer[0] & 0xFF );

// parameter StartingHandle
union u_StartingHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_StartingHandle;
u_StartingHandle.p = StartingHandle;
_fifo_enqueue(u_StartingHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_StartingHandle.bytebuffer[0] & 0xFF );

// parameter EndingHandle
union u_EndingHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_EndingHandle;
u_EndingHandle.p = EndingHandle;
_fifo_enqueue(u_EndingHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_EndingHandle.bytebuffer[0] & 0xFF );

// parameter AttributeType
union u_AttributeType_t {
ble_uuid_t p;
byte bytebuffer[16];
} u_AttributeType;
u_AttributeType.p = AttributeType;
_fifo_enqueue(u_AttributeType.bytebuffer[15] & 0xFF );
_fifo_enqueue(u_AttributeType.bytebuffer[14] & 0xFF );
_fifo_enqueue(u_AttributeType.bytebuffer[13] & 0xFF );
_fifo_enqueue(u_AttributeType.bytebuffer[12] & 0xFF );
_fifo_enqueue(u_AttributeType.bytebuffer[11] & 0xFF );
_fifo_enqueue(u_AttributeType.bytebuffer[10] & 0xFF );
_fifo_enqueue(u_AttributeType.bytebuffer[9] & 0xFF );
_fifo_enqueue(u_AttributeType.bytebuffer[8] & 0xFF );
_fifo_enqueue(u_AttributeType.bytebuffer[7] & 0xFF );
_fifo_enqueue(u_AttributeType.bytebuffer[6] & 0xFF );
_fifo_enqueue(u_AttributeType.bytebuffer[5] & 0xFF );
_fifo_enqueue(u_AttributeType.bytebuffer[4] & 0xFF );
_fifo_enqueue(u_AttributeType.bytebuffer[3] & 0xFF );
_fifo_enqueue(u_AttributeType.bytebuffer[2] & 0xFF );
_fifo_enqueue(u_AttributeType.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_AttributeType.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages BLEConnecterImpl::ATT::ATTHandleValueConfirmation
void enqueue_BLEConnecterImpl_send_ATT_ATTHandleValueConfirmation(struct BLEConnecterImpl_Instance *_instance, uint16_t ConnectionHandle){
fifo_lock();
if ( fifo_byte_available() > 6 ) {

_fifo_enqueue( (49 >> 8) & 0xFF );
_fifo_enqueue( 49 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_ATT >> 8) & 0xFF );
_fifo_enqueue( _instance->id_ATT & 0xFF );

// parameter ConnectionHandle
union u_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ConnectionHandle;
u_ConnectionHandle.p = ConnectionHandle;
_fifo_enqueue(u_ConnectionHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_ConnectionHandle.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages BLEConnecterImpl::ATT::ATTReadError
void enqueue_BLEConnecterImpl_send_ATT_ATTReadError(struct BLEConnecterImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error){
fifo_lock();
if ( fifo_byte_available() > 9 ) {

_fifo_enqueue( (50 >> 8) & 0xFF );
_fifo_enqueue( 50 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_ATT >> 8) & 0xFF );
_fifo_enqueue( _instance->id_ATT & 0xFF );

// parameter ConnectionHandle
union u_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ConnectionHandle;
u_ConnectionHandle.p = ConnectionHandle;
_fifo_enqueue(u_ConnectionHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_ConnectionHandle.bytebuffer[0] & 0xFF );

// parameter AttributeHandle
union u_AttributeHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_AttributeHandle;
u_AttributeHandle.p = AttributeHandle;
_fifo_enqueue(u_AttributeHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_AttributeHandle.bytebuffer[0] & 0xFF );

// parameter Error
union u_Error_t {
uint8_t p;
byte bytebuffer[1];
} u_Error;
u_Error.p = Error;
_fifo_enqueue(u_Error.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages BLEConnecterImpl::ATT::ATTWriteRequest
void enqueue_BLEConnecterImpl_send_ATT_ATTWriteRequest(struct BLEConnecterImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, ble_gatt_data_t AttributeValue){
fifo_lock();
if ( fifo_byte_available() > 32 ) {

_fifo_enqueue( (51 >> 8) & 0xFF );
_fifo_enqueue( 51 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_ATT >> 8) & 0xFF );
_fifo_enqueue( _instance->id_ATT & 0xFF );

// parameter ConnectionHandle
union u_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ConnectionHandle;
u_ConnectionHandle.p = ConnectionHandle;
_fifo_enqueue(u_ConnectionHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_ConnectionHandle.bytebuffer[0] & 0xFF );

// parameter AttributeHandle
union u_AttributeHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_AttributeHandle;
u_AttributeHandle.p = AttributeHandle;
_fifo_enqueue(u_AttributeHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_AttributeHandle.bytebuffer[0] & 0xFF );

// parameter AttributeValue
union u_AttributeValue_t {
ble_gatt_data_t p;
byte bytebuffer[24];
} u_AttributeValue;
u_AttributeValue.p = AttributeValue;
_fifo_enqueue(u_AttributeValue.bytebuffer[23] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[22] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[21] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[20] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[19] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[18] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[17] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[16] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[15] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[14] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[13] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[12] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[11] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[10] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[9] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[8] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[7] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[6] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[5] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[4] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[3] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[2] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages BLEConnecterImpl::ATT::ATTWriteCommand
void enqueue_BLEConnecterImpl_send_ATT_ATTWriteCommand(struct BLEConnecterImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, ble_gatt_data_t AttributeValue){
fifo_lock();
if ( fifo_byte_available() > 32 ) {

_fifo_enqueue( (52 >> 8) & 0xFF );
_fifo_enqueue( 52 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_ATT >> 8) & 0xFF );
_fifo_enqueue( _instance->id_ATT & 0xFF );

// parameter ConnectionHandle
union u_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ConnectionHandle;
u_ConnectionHandle.p = ConnectionHandle;
_fifo_enqueue(u_ConnectionHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_ConnectionHandle.bytebuffer[0] & 0xFF );

// parameter AttributeHandle
union u_AttributeHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_AttributeHandle;
u_AttributeHandle.p = AttributeHandle;
_fifo_enqueue(u_AttributeHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_AttributeHandle.bytebuffer[0] & 0xFF );

// parameter AttributeValue
union u_AttributeValue_t {
ble_gatt_data_t p;
byte bytebuffer[24];
} u_AttributeValue;
u_AttributeValue.p = AttributeValue;
_fifo_enqueue(u_AttributeValue.bytebuffer[23] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[22] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[21] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[20] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[19] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[18] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[17] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[16] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[15] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[14] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[13] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[12] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[11] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[10] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[9] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[8] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[7] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[6] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[5] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[4] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[3] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[2] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages BLEConnecterImpl::ATT::ATTWriteError
void enqueue_BLEConnecterImpl_send_ATT_ATTWriteError(struct BLEConnecterImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error){
fifo_lock();
if ( fifo_byte_available() > 9 ) {

_fifo_enqueue( (53 >> 8) & 0xFF );
_fifo_enqueue( 53 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_ATT >> 8) & 0xFF );
_fifo_enqueue( _instance->id_ATT & 0xFF );

// parameter ConnectionHandle
union u_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ConnectionHandle;
u_ConnectionHandle.p = ConnectionHandle;
_fifo_enqueue(u_ConnectionHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_ConnectionHandle.bytebuffer[0] & 0xFF );

// parameter AttributeHandle
union u_AttributeHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_AttributeHandle;
u_AttributeHandle.p = AttributeHandle;
_fifo_enqueue(u_AttributeHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_AttributeHandle.bytebuffer[0] & 0xFF );

// parameter Error
union u_Error_t {
uint8_t p;
byte bytebuffer[1];
} u_Error;
u_Error.p = Error;
_fifo_enqueue(u_Error.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages BLEConnecterImpl::ATT::ATTHandleValueNotification
void enqueue_BLEConnecterImpl_send_ATT_ATTHandleValueNotification(struct BLEConnecterImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, ble_gatt_data_t AttributeValue){
fifo_lock();
if ( fifo_byte_available() > 32 ) {

_fifo_enqueue( (54 >> 8) & 0xFF );
_fifo_enqueue( 54 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_ATT >> 8) & 0xFF );
_fifo_enqueue( _instance->id_ATT & 0xFF );

// parameter ConnectionHandle
union u_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ConnectionHandle;
u_ConnectionHandle.p = ConnectionHandle;
_fifo_enqueue(u_ConnectionHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_ConnectionHandle.bytebuffer[0] & 0xFF );

// parameter AttributeHandle
union u_AttributeHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_AttributeHandle;
u_AttributeHandle.p = AttributeHandle;
_fifo_enqueue(u_AttributeHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_AttributeHandle.bytebuffer[0] & 0xFF );

// parameter AttributeValue
union u_AttributeValue_t {
ble_gatt_data_t p;
byte bytebuffer[24];
} u_AttributeValue;
u_AttributeValue.p = AttributeValue;
_fifo_enqueue(u_AttributeValue.bytebuffer[23] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[22] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[21] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[20] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[19] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[18] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[17] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[16] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[15] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[14] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[13] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[12] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[11] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[10] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[9] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[8] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[7] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[6] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[5] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[4] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[3] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[2] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages BLEConnecterImpl::ATT::ATTFindInformationResponse
void enqueue_BLEConnecterImpl_send_ATT_ATTFindInformationResponse(struct BLEConnecterImpl_Instance *_instance, uint16_t ConnectionHandle, uint8_t Format, ble_gatt_data_t InformationData){
fifo_lock();
if ( fifo_byte_available() > 31 ) {

_fifo_enqueue( (55 >> 8) & 0xFF );
_fifo_enqueue( 55 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_ATT >> 8) & 0xFF );
_fifo_enqueue( _instance->id_ATT & 0xFF );

// parameter ConnectionHandle
union u_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ConnectionHandle;
u_ConnectionHandle.p = ConnectionHandle;
_fifo_enqueue(u_ConnectionHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_ConnectionHandle.bytebuffer[0] & 0xFF );

// parameter Format
union u_Format_t {
uint8_t p;
byte bytebuffer[1];
} u_Format;
u_Format.p = Format;
_fifo_enqueue(u_Format.bytebuffer[0] & 0xFF );

// parameter InformationData
union u_InformationData_t {
ble_gatt_data_t p;
byte bytebuffer[24];
} u_InformationData;
u_InformationData.p = InformationData;
_fifo_enqueue(u_InformationData.bytebuffer[23] & 0xFF );
_fifo_enqueue(u_InformationData.bytebuffer[22] & 0xFF );
_fifo_enqueue(u_InformationData.bytebuffer[21] & 0xFF );
_fifo_enqueue(u_InformationData.bytebuffer[20] & 0xFF );
_fifo_enqueue(u_InformationData.bytebuffer[19] & 0xFF );
_fifo_enqueue(u_InformationData.bytebuffer[18] & 0xFF );
_fifo_enqueue(u_InformationData.bytebuffer[17] & 0xFF );
_fifo_enqueue(u_InformationData.bytebuffer[16] & 0xFF );
_fifo_enqueue(u_InformationData.bytebuffer[15] & 0xFF );
_fifo_enqueue(u_InformationData.bytebuffer[14] & 0xFF );
_fifo_enqueue(u_InformationData.bytebuffer[13] & 0xFF );
_fifo_enqueue(u_InformationData.bytebuffer[12] & 0xFF );
_fifo_enqueue(u_InformationData.bytebuffer[11] & 0xFF );
_fifo_enqueue(u_InformationData.bytebuffer[10] & 0xFF );
_fifo_enqueue(u_InformationData.bytebuffer[9] & 0xFF );
_fifo_enqueue(u_InformationData.bytebuffer[8] & 0xFF );
_fifo_enqueue(u_InformationData.bytebuffer[7] & 0xFF );
_fifo_enqueue(u_InformationData.bytebuffer[6] & 0xFF );
_fifo_enqueue(u_InformationData.bytebuffer[5] & 0xFF );
_fifo_enqueue(u_InformationData.bytebuffer[4] & 0xFF );
_fifo_enqueue(u_InformationData.bytebuffer[3] & 0xFF );
_fifo_enqueue(u_InformationData.bytebuffer[2] & 0xFF );
_fifo_enqueue(u_InformationData.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_InformationData.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages BLEConnecterImpl::ATT::ATTReadByGroupTypeResponse
void enqueue_BLEConnecterImpl_send_ATT_ATTReadByGroupTypeResponse(struct BLEConnecterImpl_Instance *_instance, uint16_t ConnectionHandle, uint8_t Length, ble_gatt_data_t AttributeDataList){
fifo_lock();
if ( fifo_byte_available() > 31 ) {

_fifo_enqueue( (56 >> 8) & 0xFF );
_fifo_enqueue( 56 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_ATT >> 8) & 0xFF );
_fifo_enqueue( _instance->id_ATT & 0xFF );

// parameter ConnectionHandle
union u_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ConnectionHandle;
u_ConnectionHandle.p = ConnectionHandle;
_fifo_enqueue(u_ConnectionHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_ConnectionHandle.bytebuffer[0] & 0xFF );

// parameter Length
union u_Length_t {
uint8_t p;
byte bytebuffer[1];
} u_Length;
u_Length.p = Length;
_fifo_enqueue(u_Length.bytebuffer[0] & 0xFF );

// parameter AttributeDataList
union u_AttributeDataList_t {
ble_gatt_data_t p;
byte bytebuffer[24];
} u_AttributeDataList;
u_AttributeDataList.p = AttributeDataList;
_fifo_enqueue(u_AttributeDataList.bytebuffer[23] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[22] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[21] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[20] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[19] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[18] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[17] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[16] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[15] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[14] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[13] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[12] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[11] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[10] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[9] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[8] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[7] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[6] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[5] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[4] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[3] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[2] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages BLEConnecterImpl::ATT::ATTReadByTypeResponse
void enqueue_BLEConnecterImpl_send_ATT_ATTReadByTypeResponse(struct BLEConnecterImpl_Instance *_instance, uint16_t ConnectionHandle, uint8_t Length, ble_gatt_data_t AttributeDataList){
fifo_lock();
if ( fifo_byte_available() > 31 ) {

_fifo_enqueue( (57 >> 8) & 0xFF );
_fifo_enqueue( 57 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_ATT >> 8) & 0xFF );
_fifo_enqueue( _instance->id_ATT & 0xFF );

// parameter ConnectionHandle
union u_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ConnectionHandle;
u_ConnectionHandle.p = ConnectionHandle;
_fifo_enqueue(u_ConnectionHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_ConnectionHandle.bytebuffer[0] & 0xFF );

// parameter Length
union u_Length_t {
uint8_t p;
byte bytebuffer[1];
} u_Length;
u_Length.p = Length;
_fifo_enqueue(u_Length.bytebuffer[0] & 0xFF );

// parameter AttributeDataList
union u_AttributeDataList_t {
ble_gatt_data_t p;
byte bytebuffer[24];
} u_AttributeDataList;
u_AttributeDataList.p = AttributeDataList;
_fifo_enqueue(u_AttributeDataList.bytebuffer[23] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[22] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[21] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[20] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[19] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[18] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[17] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[16] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[15] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[14] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[13] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[12] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[11] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[10] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[9] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[8] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[7] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[6] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[5] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[4] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[3] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[2] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages BLEConnecterImpl::ATT::ATTFindInformationRequest
void enqueue_BLEConnecterImpl_send_ATT_ATTFindInformationRequest(struct BLEConnecterImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t StartingHandle, uint16_t EndingHandle){
fifo_lock();
if ( fifo_byte_available() > 10 ) {

_fifo_enqueue( (58 >> 8) & 0xFF );
_fifo_enqueue( 58 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_ATT >> 8) & 0xFF );
_fifo_enqueue( _instance->id_ATT & 0xFF );

// parameter ConnectionHandle
union u_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ConnectionHandle;
u_ConnectionHandle.p = ConnectionHandle;
_fifo_enqueue(u_ConnectionHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_ConnectionHandle.bytebuffer[0] & 0xFF );

// parameter StartingHandle
union u_StartingHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_StartingHandle;
u_StartingHandle.p = StartingHandle;
_fifo_enqueue(u_StartingHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_StartingHandle.bytebuffer[0] & 0xFF );

// parameter EndingHandle
union u_EndingHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_EndingHandle;
u_EndingHandle.p = EndingHandle;
_fifo_enqueue(u_EndingHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_EndingHandle.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages BLEConnecterImpl::ATT::ATTReadResponse
void enqueue_BLEConnecterImpl_send_ATT_ATTReadResponse(struct BLEConnecterImpl_Instance *_instance, uint16_t ConnectionHandle, ble_gatt_data_t AttributeValue){
fifo_lock();
if ( fifo_byte_available() > 30 ) {

_fifo_enqueue( (59 >> 8) & 0xFF );
_fifo_enqueue( 59 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_ATT >> 8) & 0xFF );
_fifo_enqueue( _instance->id_ATT & 0xFF );

// parameter ConnectionHandle
union u_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ConnectionHandle;
u_ConnectionHandle.p = ConnectionHandle;
_fifo_enqueue(u_ConnectionHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_ConnectionHandle.bytebuffer[0] & 0xFF );

// parameter AttributeValue
union u_AttributeValue_t {
ble_gatt_data_t p;
byte bytebuffer[24];
} u_AttributeValue;
u_AttributeValue.p = AttributeValue;
_fifo_enqueue(u_AttributeValue.bytebuffer[23] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[22] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[21] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[20] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[19] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[18] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[17] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[16] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[15] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[14] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[13] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[12] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[11] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[10] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[9] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[8] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[7] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[6] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[5] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[4] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[3] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[2] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages BLEConnecterImpl::ATT::ATTReadByGroupTypeRequest
void enqueue_BLEConnecterImpl_send_ATT_ATTReadByGroupTypeRequest(struct BLEConnecterImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t StartingHandle, uint16_t EndingHandle, ble_uuid_t AttributeGroupType){
fifo_lock();
if ( fifo_byte_available() > 26 ) {

_fifo_enqueue( (60 >> 8) & 0xFF );
_fifo_enqueue( 60 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_ATT >> 8) & 0xFF );
_fifo_enqueue( _instance->id_ATT & 0xFF );

// parameter ConnectionHandle
union u_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ConnectionHandle;
u_ConnectionHandle.p = ConnectionHandle;
_fifo_enqueue(u_ConnectionHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_ConnectionHandle.bytebuffer[0] & 0xFF );

// parameter StartingHandle
union u_StartingHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_StartingHandle;
u_StartingHandle.p = StartingHandle;
_fifo_enqueue(u_StartingHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_StartingHandle.bytebuffer[0] & 0xFF );

// parameter EndingHandle
union u_EndingHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_EndingHandle;
u_EndingHandle.p = EndingHandle;
_fifo_enqueue(u_EndingHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_EndingHandle.bytebuffer[0] & 0xFF );

// parameter AttributeGroupType
union u_AttributeGroupType_t {
ble_uuid_t p;
byte bytebuffer[16];
} u_AttributeGroupType;
u_AttributeGroupType.p = AttributeGroupType;
_fifo_enqueue(u_AttributeGroupType.bytebuffer[15] & 0xFF );
_fifo_enqueue(u_AttributeGroupType.bytebuffer[14] & 0xFF );
_fifo_enqueue(u_AttributeGroupType.bytebuffer[13] & 0xFF );
_fifo_enqueue(u_AttributeGroupType.bytebuffer[12] & 0xFF );
_fifo_enqueue(u_AttributeGroupType.bytebuffer[11] & 0xFF );
_fifo_enqueue(u_AttributeGroupType.bytebuffer[10] & 0xFF );
_fifo_enqueue(u_AttributeGroupType.bytebuffer[9] & 0xFF );
_fifo_enqueue(u_AttributeGroupType.bytebuffer[8] & 0xFF );
_fifo_enqueue(u_AttributeGroupType.bytebuffer[7] & 0xFF );
_fifo_enqueue(u_AttributeGroupType.bytebuffer[6] & 0xFF );
_fifo_enqueue(u_AttributeGroupType.bytebuffer[5] & 0xFF );
_fifo_enqueue(u_AttributeGroupType.bytebuffer[4] & 0xFF );
_fifo_enqueue(u_AttributeGroupType.bytebuffer[3] & 0xFF );
_fifo_enqueue(u_AttributeGroupType.bytebuffer[2] & 0xFF );
_fifo_enqueue(u_AttributeGroupType.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_AttributeGroupType.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages BLEConnecterImpl::ATT::ATTHandleValueIndication
void enqueue_BLEConnecterImpl_send_ATT_ATTHandleValueIndication(struct BLEConnecterImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, ble_gatt_data_t AttributeValue){
fifo_lock();
if ( fifo_byte_available() > 32 ) {

_fifo_enqueue( (61 >> 8) & 0xFF );
_fifo_enqueue( 61 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_ATT >> 8) & 0xFF );
_fifo_enqueue( _instance->id_ATT & 0xFF );

// parameter ConnectionHandle
union u_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ConnectionHandle;
u_ConnectionHandle.p = ConnectionHandle;
_fifo_enqueue(u_ConnectionHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_ConnectionHandle.bytebuffer[0] & 0xFF );

// parameter AttributeHandle
union u_AttributeHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_AttributeHandle;
u_AttributeHandle.p = AttributeHandle;
_fifo_enqueue(u_AttributeHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_AttributeHandle.bytebuffer[0] & 0xFF );

// parameter AttributeValue
union u_AttributeValue_t {
ble_gatt_data_t p;
byte bytebuffer[24];
} u_AttributeValue;
u_AttributeValue.p = AttributeValue;
_fifo_enqueue(u_AttributeValue.bytebuffer[23] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[22] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[21] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[20] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[19] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[18] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[17] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[16] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[15] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[14] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[13] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[12] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[11] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[10] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[9] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[8] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[7] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[6] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[5] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[4] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[3] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[2] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages BLENotifierImpl::Notifications::NotifierReady
void enqueue_BLENotifierImpl_send_Notifications_NotifierReady(struct BLENotifierImpl_Instance *_instance){
fifo_lock();
if ( fifo_byte_available() > 4 ) {

_fifo_enqueue( (78 >> 8) & 0xFF );
_fifo_enqueue( 78 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_Notifications >> 8) & 0xFF );
_fifo_enqueue( _instance->id_Notifications & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages BLENotifierImpl::Notifications::NotifierFinished
void enqueue_BLENotifierImpl_send_Notifications_NotifierFinished(struct BLENotifierImpl_Instance *_instance){
fifo_lock();
if ( fifo_byte_available() > 4 ) {

_fifo_enqueue( (79 >> 8) & 0xFF );
_fifo_enqueue( 79 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_Notifications >> 8) & 0xFF );
_fifo_enqueue( _instance->id_Notifications & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages BLENotifierImpl::Connecter::Encrypt
void enqueue_BLENotifierImpl_send_Connecter_Encrypt(struct BLENotifierImpl_Instance *_instance){
fifo_lock();
if ( fifo_byte_available() > 4 ) {

_fifo_enqueue( (66 >> 8) & 0xFF );
_fifo_enqueue( 66 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_Connecter >> 8) & 0xFF );
_fifo_enqueue( _instance->id_Connecter & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages BLENotifierImpl::Connecter::Connect
void enqueue_BLENotifierImpl_send_Connecter_Connect(struct BLENotifierImpl_Instance *_instance){
fifo_lock();
if ( fifo_byte_available() > 4 ) {

_fifo_enqueue( (67 >> 8) & 0xFF );
_fifo_enqueue( 67 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_Connecter >> 8) & 0xFF );
_fifo_enqueue( _instance->id_Connecter & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages BLENotifierImpl::Connecter::Stop
void enqueue_BLENotifierImpl_send_Connecter_Stop(struct BLENotifierImpl_Instance *_instance){
fifo_lock();
if ( fifo_byte_available() > 4 ) {

_fifo_enqueue( (65 >> 8) & 0xFF );
_fifo_enqueue( 65 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_Connecter >> 8) & 0xFF );
_fifo_enqueue( _instance->id_Connecter & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages BLENotifierImpl::Connecter::ConnectToU
void enqueue_BLENotifierImpl_send_Connecter_ConnectToU(struct BLENotifierImpl_Instance *_instance, uint8_t AddressType, bdaddr_t Address){
fifo_lock();
if ( fifo_byte_available() > 11 ) {

_fifo_enqueue( (68 >> 8) & 0xFF );
_fifo_enqueue( 68 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_Connecter >> 8) & 0xFF );
_fifo_enqueue( _instance->id_Connecter & 0xFF );

// parameter AddressType
union u_AddressType_t {
uint8_t p;
byte bytebuffer[1];
} u_AddressType;
u_AddressType.p = AddressType;
_fifo_enqueue(u_AddressType.bytebuffer[0] & 0xFF );

// parameter Address
union u_Address_t {
bdaddr_t p;
byte bytebuffer[6];
} u_Address;
u_Address.p = Address;
_fifo_enqueue(u_Address.bytebuffer[5] & 0xFF );
_fifo_enqueue(u_Address.bytebuffer[4] & 0xFF );
_fifo_enqueue(u_Address.bytebuffer[3] & 0xFF );
_fifo_enqueue(u_Address.bytebuffer[2] & 0xFF );
_fifo_enqueue(u_Address.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_Address.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages BLENotifierImpl::Connecter::ConnectTo
void enqueue_BLENotifierImpl_send_Connecter_ConnectTo(struct BLENotifierImpl_Instance *_instance, uint8_t AddressType, bdaddr_t Address, ble_random_number_t LongTermKey, uint16_t EncryptedDiversifier, ble_random_part_t RandomNumber){
fifo_lock();
if ( fifo_byte_available() > 37 ) {

_fifo_enqueue( (69 >> 8) & 0xFF );
_fifo_enqueue( 69 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_Connecter >> 8) & 0xFF );
_fifo_enqueue( _instance->id_Connecter & 0xFF );

// parameter AddressType
union u_AddressType_t {
uint8_t p;
byte bytebuffer[1];
} u_AddressType;
u_AddressType.p = AddressType;
_fifo_enqueue(u_AddressType.bytebuffer[0] & 0xFF );

// parameter Address
union u_Address_t {
bdaddr_t p;
byte bytebuffer[6];
} u_Address;
u_Address.p = Address;
_fifo_enqueue(u_Address.bytebuffer[5] & 0xFF );
_fifo_enqueue(u_Address.bytebuffer[4] & 0xFF );
_fifo_enqueue(u_Address.bytebuffer[3] & 0xFF );
_fifo_enqueue(u_Address.bytebuffer[2] & 0xFF );
_fifo_enqueue(u_Address.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_Address.bytebuffer[0] & 0xFF );

// parameter LongTermKey
union u_LongTermKey_t {
ble_random_number_t p;
byte bytebuffer[16];
} u_LongTermKey;
u_LongTermKey.p = LongTermKey;
_fifo_enqueue(u_LongTermKey.bytebuffer[15] & 0xFF );
_fifo_enqueue(u_LongTermKey.bytebuffer[14] & 0xFF );
_fifo_enqueue(u_LongTermKey.bytebuffer[13] & 0xFF );
_fifo_enqueue(u_LongTermKey.bytebuffer[12] & 0xFF );
_fifo_enqueue(u_LongTermKey.bytebuffer[11] & 0xFF );
_fifo_enqueue(u_LongTermKey.bytebuffer[10] & 0xFF );
_fifo_enqueue(u_LongTermKey.bytebuffer[9] & 0xFF );
_fifo_enqueue(u_LongTermKey.bytebuffer[8] & 0xFF );
_fifo_enqueue(u_LongTermKey.bytebuffer[7] & 0xFF );
_fifo_enqueue(u_LongTermKey.bytebuffer[6] & 0xFF );
_fifo_enqueue(u_LongTermKey.bytebuffer[5] & 0xFF );
_fifo_enqueue(u_LongTermKey.bytebuffer[4] & 0xFF );
_fifo_enqueue(u_LongTermKey.bytebuffer[3] & 0xFF );
_fifo_enqueue(u_LongTermKey.bytebuffer[2] & 0xFF );
_fifo_enqueue(u_LongTermKey.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_LongTermKey.bytebuffer[0] & 0xFF );

// parameter EncryptedDiversifier
union u_EncryptedDiversifier_t {
uint16_t p;
byte bytebuffer[2];
} u_EncryptedDiversifier;
u_EncryptedDiversifier.p = EncryptedDiversifier;
_fifo_enqueue(u_EncryptedDiversifier.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_EncryptedDiversifier.bytebuffer[0] & 0xFF );

// parameter RandomNumber
union u_RandomNumber_t {
ble_random_part_t p;
byte bytebuffer[8];
} u_RandomNumber;
u_RandomNumber.p = RandomNumber;
_fifo_enqueue(u_RandomNumber.bytebuffer[7] & 0xFF );
_fifo_enqueue(u_RandomNumber.bytebuffer[6] & 0xFF );
_fifo_enqueue(u_RandomNumber.bytebuffer[5] & 0xFF );
_fifo_enqueue(u_RandomNumber.bytebuffer[4] & 0xFF );
_fifo_enqueue(u_RandomNumber.bytebuffer[3] & 0xFF );
_fifo_enqueue(u_RandomNumber.bytebuffer[2] & 0xFF );
_fifo_enqueue(u_RandomNumber.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_RandomNumber.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages BLENotifierImpl::ATT::ATTReadByTypeError
void enqueue_BLENotifierImpl_send_ATT_ATTReadByTypeError(struct BLENotifierImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error){
fifo_lock();
if ( fifo_byte_available() > 9 ) {

_fifo_enqueue( (43 >> 8) & 0xFF );
_fifo_enqueue( 43 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_ATT >> 8) & 0xFF );
_fifo_enqueue( _instance->id_ATT & 0xFF );

// parameter ConnectionHandle
union u_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ConnectionHandle;
u_ConnectionHandle.p = ConnectionHandle;
_fifo_enqueue(u_ConnectionHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_ConnectionHandle.bytebuffer[0] & 0xFF );

// parameter AttributeHandle
union u_AttributeHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_AttributeHandle;
u_AttributeHandle.p = AttributeHandle;
_fifo_enqueue(u_AttributeHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_AttributeHandle.bytebuffer[0] & 0xFF );

// parameter Error
union u_Error_t {
uint8_t p;
byte bytebuffer[1];
} u_Error;
u_Error.p = Error;
_fifo_enqueue(u_Error.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages BLENotifierImpl::ATT::ATTReadByGroupTypeError
void enqueue_BLENotifierImpl_send_ATT_ATTReadByGroupTypeError(struct BLENotifierImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error){
fifo_lock();
if ( fifo_byte_available() > 9 ) {

_fifo_enqueue( (44 >> 8) & 0xFF );
_fifo_enqueue( 44 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_ATT >> 8) & 0xFF );
_fifo_enqueue( _instance->id_ATT & 0xFF );

// parameter ConnectionHandle
union u_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ConnectionHandle;
u_ConnectionHandle.p = ConnectionHandle;
_fifo_enqueue(u_ConnectionHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_ConnectionHandle.bytebuffer[0] & 0xFF );

// parameter AttributeHandle
union u_AttributeHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_AttributeHandle;
u_AttributeHandle.p = AttributeHandle;
_fifo_enqueue(u_AttributeHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_AttributeHandle.bytebuffer[0] & 0xFF );

// parameter Error
union u_Error_t {
uint8_t p;
byte bytebuffer[1];
} u_Error;
u_Error.p = Error;
_fifo_enqueue(u_Error.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages BLENotifierImpl::ATT::ATTWriteResponse
void enqueue_BLENotifierImpl_send_ATT_ATTWriteResponse(struct BLENotifierImpl_Instance *_instance, uint16_t ConnectionHandle){
fifo_lock();
if ( fifo_byte_available() > 6 ) {

_fifo_enqueue( (45 >> 8) & 0xFF );
_fifo_enqueue( 45 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_ATT >> 8) & 0xFF );
_fifo_enqueue( _instance->id_ATT & 0xFF );

// parameter ConnectionHandle
union u_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ConnectionHandle;
u_ConnectionHandle.p = ConnectionHandle;
_fifo_enqueue(u_ConnectionHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_ConnectionHandle.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages BLENotifierImpl::ATT::ATTReadRequest
void enqueue_BLENotifierImpl_send_ATT_ATTReadRequest(struct BLENotifierImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle){
fifo_lock();
if ( fifo_byte_available() > 8 ) {

_fifo_enqueue( (46 >> 8) & 0xFF );
_fifo_enqueue( 46 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_ATT >> 8) & 0xFF );
_fifo_enqueue( _instance->id_ATT & 0xFF );

// parameter ConnectionHandle
union u_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ConnectionHandle;
u_ConnectionHandle.p = ConnectionHandle;
_fifo_enqueue(u_ConnectionHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_ConnectionHandle.bytebuffer[0] & 0xFF );

// parameter AttributeHandle
union u_AttributeHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_AttributeHandle;
u_AttributeHandle.p = AttributeHandle;
_fifo_enqueue(u_AttributeHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_AttributeHandle.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages BLENotifierImpl::ATT::ATTFindInformationError
void enqueue_BLENotifierImpl_send_ATT_ATTFindInformationError(struct BLENotifierImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error){
fifo_lock();
if ( fifo_byte_available() > 9 ) {

_fifo_enqueue( (47 >> 8) & 0xFF );
_fifo_enqueue( 47 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_ATT >> 8) & 0xFF );
_fifo_enqueue( _instance->id_ATT & 0xFF );

// parameter ConnectionHandle
union u_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ConnectionHandle;
u_ConnectionHandle.p = ConnectionHandle;
_fifo_enqueue(u_ConnectionHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_ConnectionHandle.bytebuffer[0] & 0xFF );

// parameter AttributeHandle
union u_AttributeHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_AttributeHandle;
u_AttributeHandle.p = AttributeHandle;
_fifo_enqueue(u_AttributeHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_AttributeHandle.bytebuffer[0] & 0xFF );

// parameter Error
union u_Error_t {
uint8_t p;
byte bytebuffer[1];
} u_Error;
u_Error.p = Error;
_fifo_enqueue(u_Error.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages BLENotifierImpl::ATT::ATTReadByTypeRequest
void enqueue_BLENotifierImpl_send_ATT_ATTReadByTypeRequest(struct BLENotifierImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t StartingHandle, uint16_t EndingHandle, ble_uuid_t AttributeType){
fifo_lock();
if ( fifo_byte_available() > 26 ) {

_fifo_enqueue( (48 >> 8) & 0xFF );
_fifo_enqueue( 48 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_ATT >> 8) & 0xFF );
_fifo_enqueue( _instance->id_ATT & 0xFF );

// parameter ConnectionHandle
union u_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ConnectionHandle;
u_ConnectionHandle.p = ConnectionHandle;
_fifo_enqueue(u_ConnectionHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_ConnectionHandle.bytebuffer[0] & 0xFF );

// parameter StartingHandle
union u_StartingHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_StartingHandle;
u_StartingHandle.p = StartingHandle;
_fifo_enqueue(u_StartingHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_StartingHandle.bytebuffer[0] & 0xFF );

// parameter EndingHandle
union u_EndingHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_EndingHandle;
u_EndingHandle.p = EndingHandle;
_fifo_enqueue(u_EndingHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_EndingHandle.bytebuffer[0] & 0xFF );

// parameter AttributeType
union u_AttributeType_t {
ble_uuid_t p;
byte bytebuffer[16];
} u_AttributeType;
u_AttributeType.p = AttributeType;
_fifo_enqueue(u_AttributeType.bytebuffer[15] & 0xFF );
_fifo_enqueue(u_AttributeType.bytebuffer[14] & 0xFF );
_fifo_enqueue(u_AttributeType.bytebuffer[13] & 0xFF );
_fifo_enqueue(u_AttributeType.bytebuffer[12] & 0xFF );
_fifo_enqueue(u_AttributeType.bytebuffer[11] & 0xFF );
_fifo_enqueue(u_AttributeType.bytebuffer[10] & 0xFF );
_fifo_enqueue(u_AttributeType.bytebuffer[9] & 0xFF );
_fifo_enqueue(u_AttributeType.bytebuffer[8] & 0xFF );
_fifo_enqueue(u_AttributeType.bytebuffer[7] & 0xFF );
_fifo_enqueue(u_AttributeType.bytebuffer[6] & 0xFF );
_fifo_enqueue(u_AttributeType.bytebuffer[5] & 0xFF );
_fifo_enqueue(u_AttributeType.bytebuffer[4] & 0xFF );
_fifo_enqueue(u_AttributeType.bytebuffer[3] & 0xFF );
_fifo_enqueue(u_AttributeType.bytebuffer[2] & 0xFF );
_fifo_enqueue(u_AttributeType.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_AttributeType.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages BLENotifierImpl::ATT::ATTHandleValueConfirmation
void enqueue_BLENotifierImpl_send_ATT_ATTHandleValueConfirmation(struct BLENotifierImpl_Instance *_instance, uint16_t ConnectionHandle){
fifo_lock();
if ( fifo_byte_available() > 6 ) {

_fifo_enqueue( (49 >> 8) & 0xFF );
_fifo_enqueue( 49 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_ATT >> 8) & 0xFF );
_fifo_enqueue( _instance->id_ATT & 0xFF );

// parameter ConnectionHandle
union u_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ConnectionHandle;
u_ConnectionHandle.p = ConnectionHandle;
_fifo_enqueue(u_ConnectionHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_ConnectionHandle.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages BLENotifierImpl::ATT::ATTReadError
void enqueue_BLENotifierImpl_send_ATT_ATTReadError(struct BLENotifierImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error){
fifo_lock();
if ( fifo_byte_available() > 9 ) {

_fifo_enqueue( (50 >> 8) & 0xFF );
_fifo_enqueue( 50 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_ATT >> 8) & 0xFF );
_fifo_enqueue( _instance->id_ATT & 0xFF );

// parameter ConnectionHandle
union u_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ConnectionHandle;
u_ConnectionHandle.p = ConnectionHandle;
_fifo_enqueue(u_ConnectionHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_ConnectionHandle.bytebuffer[0] & 0xFF );

// parameter AttributeHandle
union u_AttributeHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_AttributeHandle;
u_AttributeHandle.p = AttributeHandle;
_fifo_enqueue(u_AttributeHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_AttributeHandle.bytebuffer[0] & 0xFF );

// parameter Error
union u_Error_t {
uint8_t p;
byte bytebuffer[1];
} u_Error;
u_Error.p = Error;
_fifo_enqueue(u_Error.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages BLENotifierImpl::ATT::ATTWriteRequest
void enqueue_BLENotifierImpl_send_ATT_ATTWriteRequest(struct BLENotifierImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, ble_gatt_data_t AttributeValue){
fifo_lock();
if ( fifo_byte_available() > 32 ) {

_fifo_enqueue( (51 >> 8) & 0xFF );
_fifo_enqueue( 51 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_ATT >> 8) & 0xFF );
_fifo_enqueue( _instance->id_ATT & 0xFF );

// parameter ConnectionHandle
union u_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ConnectionHandle;
u_ConnectionHandle.p = ConnectionHandle;
_fifo_enqueue(u_ConnectionHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_ConnectionHandle.bytebuffer[0] & 0xFF );

// parameter AttributeHandle
union u_AttributeHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_AttributeHandle;
u_AttributeHandle.p = AttributeHandle;
_fifo_enqueue(u_AttributeHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_AttributeHandle.bytebuffer[0] & 0xFF );

// parameter AttributeValue
union u_AttributeValue_t {
ble_gatt_data_t p;
byte bytebuffer[24];
} u_AttributeValue;
u_AttributeValue.p = AttributeValue;
_fifo_enqueue(u_AttributeValue.bytebuffer[23] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[22] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[21] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[20] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[19] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[18] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[17] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[16] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[15] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[14] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[13] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[12] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[11] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[10] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[9] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[8] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[7] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[6] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[5] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[4] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[3] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[2] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages BLENotifierImpl::ATT::ATTWriteCommand
void enqueue_BLENotifierImpl_send_ATT_ATTWriteCommand(struct BLENotifierImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, ble_gatt_data_t AttributeValue){
fifo_lock();
if ( fifo_byte_available() > 32 ) {

_fifo_enqueue( (52 >> 8) & 0xFF );
_fifo_enqueue( 52 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_ATT >> 8) & 0xFF );
_fifo_enqueue( _instance->id_ATT & 0xFF );

// parameter ConnectionHandle
union u_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ConnectionHandle;
u_ConnectionHandle.p = ConnectionHandle;
_fifo_enqueue(u_ConnectionHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_ConnectionHandle.bytebuffer[0] & 0xFF );

// parameter AttributeHandle
union u_AttributeHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_AttributeHandle;
u_AttributeHandle.p = AttributeHandle;
_fifo_enqueue(u_AttributeHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_AttributeHandle.bytebuffer[0] & 0xFF );

// parameter AttributeValue
union u_AttributeValue_t {
ble_gatt_data_t p;
byte bytebuffer[24];
} u_AttributeValue;
u_AttributeValue.p = AttributeValue;
_fifo_enqueue(u_AttributeValue.bytebuffer[23] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[22] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[21] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[20] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[19] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[18] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[17] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[16] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[15] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[14] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[13] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[12] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[11] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[10] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[9] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[8] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[7] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[6] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[5] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[4] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[3] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[2] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages BLENotifierImpl::ATT::ATTWriteError
void enqueue_BLENotifierImpl_send_ATT_ATTWriteError(struct BLENotifierImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error){
fifo_lock();
if ( fifo_byte_available() > 9 ) {

_fifo_enqueue( (53 >> 8) & 0xFF );
_fifo_enqueue( 53 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_ATT >> 8) & 0xFF );
_fifo_enqueue( _instance->id_ATT & 0xFF );

// parameter ConnectionHandle
union u_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ConnectionHandle;
u_ConnectionHandle.p = ConnectionHandle;
_fifo_enqueue(u_ConnectionHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_ConnectionHandle.bytebuffer[0] & 0xFF );

// parameter AttributeHandle
union u_AttributeHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_AttributeHandle;
u_AttributeHandle.p = AttributeHandle;
_fifo_enqueue(u_AttributeHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_AttributeHandle.bytebuffer[0] & 0xFF );

// parameter Error
union u_Error_t {
uint8_t p;
byte bytebuffer[1];
} u_Error;
u_Error.p = Error;
_fifo_enqueue(u_Error.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages BLENotifierImpl::ATT::ATTHandleValueNotification
void enqueue_BLENotifierImpl_send_ATT_ATTHandleValueNotification(struct BLENotifierImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, ble_gatt_data_t AttributeValue){
fifo_lock();
if ( fifo_byte_available() > 32 ) {

_fifo_enqueue( (54 >> 8) & 0xFF );
_fifo_enqueue( 54 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_ATT >> 8) & 0xFF );
_fifo_enqueue( _instance->id_ATT & 0xFF );

// parameter ConnectionHandle
union u_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ConnectionHandle;
u_ConnectionHandle.p = ConnectionHandle;
_fifo_enqueue(u_ConnectionHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_ConnectionHandle.bytebuffer[0] & 0xFF );

// parameter AttributeHandle
union u_AttributeHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_AttributeHandle;
u_AttributeHandle.p = AttributeHandle;
_fifo_enqueue(u_AttributeHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_AttributeHandle.bytebuffer[0] & 0xFF );

// parameter AttributeValue
union u_AttributeValue_t {
ble_gatt_data_t p;
byte bytebuffer[24];
} u_AttributeValue;
u_AttributeValue.p = AttributeValue;
_fifo_enqueue(u_AttributeValue.bytebuffer[23] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[22] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[21] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[20] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[19] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[18] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[17] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[16] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[15] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[14] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[13] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[12] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[11] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[10] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[9] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[8] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[7] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[6] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[5] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[4] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[3] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[2] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages BLENotifierImpl::ATT::ATTFindInformationResponse
void enqueue_BLENotifierImpl_send_ATT_ATTFindInformationResponse(struct BLENotifierImpl_Instance *_instance, uint16_t ConnectionHandle, uint8_t Format, ble_gatt_data_t InformationData){
fifo_lock();
if ( fifo_byte_available() > 31 ) {

_fifo_enqueue( (55 >> 8) & 0xFF );
_fifo_enqueue( 55 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_ATT >> 8) & 0xFF );
_fifo_enqueue( _instance->id_ATT & 0xFF );

// parameter ConnectionHandle
union u_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ConnectionHandle;
u_ConnectionHandle.p = ConnectionHandle;
_fifo_enqueue(u_ConnectionHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_ConnectionHandle.bytebuffer[0] & 0xFF );

// parameter Format
union u_Format_t {
uint8_t p;
byte bytebuffer[1];
} u_Format;
u_Format.p = Format;
_fifo_enqueue(u_Format.bytebuffer[0] & 0xFF );

// parameter InformationData
union u_InformationData_t {
ble_gatt_data_t p;
byte bytebuffer[24];
} u_InformationData;
u_InformationData.p = InformationData;
_fifo_enqueue(u_InformationData.bytebuffer[23] & 0xFF );
_fifo_enqueue(u_InformationData.bytebuffer[22] & 0xFF );
_fifo_enqueue(u_InformationData.bytebuffer[21] & 0xFF );
_fifo_enqueue(u_InformationData.bytebuffer[20] & 0xFF );
_fifo_enqueue(u_InformationData.bytebuffer[19] & 0xFF );
_fifo_enqueue(u_InformationData.bytebuffer[18] & 0xFF );
_fifo_enqueue(u_InformationData.bytebuffer[17] & 0xFF );
_fifo_enqueue(u_InformationData.bytebuffer[16] & 0xFF );
_fifo_enqueue(u_InformationData.bytebuffer[15] & 0xFF );
_fifo_enqueue(u_InformationData.bytebuffer[14] & 0xFF );
_fifo_enqueue(u_InformationData.bytebuffer[13] & 0xFF );
_fifo_enqueue(u_InformationData.bytebuffer[12] & 0xFF );
_fifo_enqueue(u_InformationData.bytebuffer[11] & 0xFF );
_fifo_enqueue(u_InformationData.bytebuffer[10] & 0xFF );
_fifo_enqueue(u_InformationData.bytebuffer[9] & 0xFF );
_fifo_enqueue(u_InformationData.bytebuffer[8] & 0xFF );
_fifo_enqueue(u_InformationData.bytebuffer[7] & 0xFF );
_fifo_enqueue(u_InformationData.bytebuffer[6] & 0xFF );
_fifo_enqueue(u_InformationData.bytebuffer[5] & 0xFF );
_fifo_enqueue(u_InformationData.bytebuffer[4] & 0xFF );
_fifo_enqueue(u_InformationData.bytebuffer[3] & 0xFF );
_fifo_enqueue(u_InformationData.bytebuffer[2] & 0xFF );
_fifo_enqueue(u_InformationData.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_InformationData.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages BLENotifierImpl::ATT::ATTReadByGroupTypeResponse
void enqueue_BLENotifierImpl_send_ATT_ATTReadByGroupTypeResponse(struct BLENotifierImpl_Instance *_instance, uint16_t ConnectionHandle, uint8_t Length, ble_gatt_data_t AttributeDataList){
fifo_lock();
if ( fifo_byte_available() > 31 ) {

_fifo_enqueue( (56 >> 8) & 0xFF );
_fifo_enqueue( 56 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_ATT >> 8) & 0xFF );
_fifo_enqueue( _instance->id_ATT & 0xFF );

// parameter ConnectionHandle
union u_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ConnectionHandle;
u_ConnectionHandle.p = ConnectionHandle;
_fifo_enqueue(u_ConnectionHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_ConnectionHandle.bytebuffer[0] & 0xFF );

// parameter Length
union u_Length_t {
uint8_t p;
byte bytebuffer[1];
} u_Length;
u_Length.p = Length;
_fifo_enqueue(u_Length.bytebuffer[0] & 0xFF );

// parameter AttributeDataList
union u_AttributeDataList_t {
ble_gatt_data_t p;
byte bytebuffer[24];
} u_AttributeDataList;
u_AttributeDataList.p = AttributeDataList;
_fifo_enqueue(u_AttributeDataList.bytebuffer[23] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[22] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[21] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[20] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[19] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[18] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[17] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[16] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[15] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[14] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[13] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[12] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[11] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[10] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[9] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[8] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[7] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[6] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[5] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[4] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[3] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[2] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages BLENotifierImpl::ATT::ATTReadByTypeResponse
void enqueue_BLENotifierImpl_send_ATT_ATTReadByTypeResponse(struct BLENotifierImpl_Instance *_instance, uint16_t ConnectionHandle, uint8_t Length, ble_gatt_data_t AttributeDataList){
fifo_lock();
if ( fifo_byte_available() > 31 ) {

_fifo_enqueue( (57 >> 8) & 0xFF );
_fifo_enqueue( 57 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_ATT >> 8) & 0xFF );
_fifo_enqueue( _instance->id_ATT & 0xFF );

// parameter ConnectionHandle
union u_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ConnectionHandle;
u_ConnectionHandle.p = ConnectionHandle;
_fifo_enqueue(u_ConnectionHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_ConnectionHandle.bytebuffer[0] & 0xFF );

// parameter Length
union u_Length_t {
uint8_t p;
byte bytebuffer[1];
} u_Length;
u_Length.p = Length;
_fifo_enqueue(u_Length.bytebuffer[0] & 0xFF );

// parameter AttributeDataList
union u_AttributeDataList_t {
ble_gatt_data_t p;
byte bytebuffer[24];
} u_AttributeDataList;
u_AttributeDataList.p = AttributeDataList;
_fifo_enqueue(u_AttributeDataList.bytebuffer[23] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[22] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[21] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[20] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[19] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[18] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[17] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[16] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[15] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[14] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[13] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[12] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[11] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[10] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[9] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[8] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[7] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[6] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[5] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[4] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[3] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[2] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages BLENotifierImpl::ATT::ATTFindInformationRequest
void enqueue_BLENotifierImpl_send_ATT_ATTFindInformationRequest(struct BLENotifierImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t StartingHandle, uint16_t EndingHandle){
fifo_lock();
if ( fifo_byte_available() > 10 ) {

_fifo_enqueue( (58 >> 8) & 0xFF );
_fifo_enqueue( 58 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_ATT >> 8) & 0xFF );
_fifo_enqueue( _instance->id_ATT & 0xFF );

// parameter ConnectionHandle
union u_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ConnectionHandle;
u_ConnectionHandle.p = ConnectionHandle;
_fifo_enqueue(u_ConnectionHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_ConnectionHandle.bytebuffer[0] & 0xFF );

// parameter StartingHandle
union u_StartingHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_StartingHandle;
u_StartingHandle.p = StartingHandle;
_fifo_enqueue(u_StartingHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_StartingHandle.bytebuffer[0] & 0xFF );

// parameter EndingHandle
union u_EndingHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_EndingHandle;
u_EndingHandle.p = EndingHandle;
_fifo_enqueue(u_EndingHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_EndingHandle.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages BLENotifierImpl::ATT::ATTReadResponse
void enqueue_BLENotifierImpl_send_ATT_ATTReadResponse(struct BLENotifierImpl_Instance *_instance, uint16_t ConnectionHandle, ble_gatt_data_t AttributeValue){
fifo_lock();
if ( fifo_byte_available() > 30 ) {

_fifo_enqueue( (59 >> 8) & 0xFF );
_fifo_enqueue( 59 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_ATT >> 8) & 0xFF );
_fifo_enqueue( _instance->id_ATT & 0xFF );

// parameter ConnectionHandle
union u_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ConnectionHandle;
u_ConnectionHandle.p = ConnectionHandle;
_fifo_enqueue(u_ConnectionHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_ConnectionHandle.bytebuffer[0] & 0xFF );

// parameter AttributeValue
union u_AttributeValue_t {
ble_gatt_data_t p;
byte bytebuffer[24];
} u_AttributeValue;
u_AttributeValue.p = AttributeValue;
_fifo_enqueue(u_AttributeValue.bytebuffer[23] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[22] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[21] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[20] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[19] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[18] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[17] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[16] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[15] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[14] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[13] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[12] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[11] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[10] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[9] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[8] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[7] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[6] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[5] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[4] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[3] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[2] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages BLENotifierImpl::ATT::ATTReadByGroupTypeRequest
void enqueue_BLENotifierImpl_send_ATT_ATTReadByGroupTypeRequest(struct BLENotifierImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t StartingHandle, uint16_t EndingHandle, ble_uuid_t AttributeGroupType){
fifo_lock();
if ( fifo_byte_available() > 26 ) {

_fifo_enqueue( (60 >> 8) & 0xFF );
_fifo_enqueue( 60 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_ATT >> 8) & 0xFF );
_fifo_enqueue( _instance->id_ATT & 0xFF );

// parameter ConnectionHandle
union u_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ConnectionHandle;
u_ConnectionHandle.p = ConnectionHandle;
_fifo_enqueue(u_ConnectionHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_ConnectionHandle.bytebuffer[0] & 0xFF );

// parameter StartingHandle
union u_StartingHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_StartingHandle;
u_StartingHandle.p = StartingHandle;
_fifo_enqueue(u_StartingHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_StartingHandle.bytebuffer[0] & 0xFF );

// parameter EndingHandle
union u_EndingHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_EndingHandle;
u_EndingHandle.p = EndingHandle;
_fifo_enqueue(u_EndingHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_EndingHandle.bytebuffer[0] & 0xFF );

// parameter AttributeGroupType
union u_AttributeGroupType_t {
ble_uuid_t p;
byte bytebuffer[16];
} u_AttributeGroupType;
u_AttributeGroupType.p = AttributeGroupType;
_fifo_enqueue(u_AttributeGroupType.bytebuffer[15] & 0xFF );
_fifo_enqueue(u_AttributeGroupType.bytebuffer[14] & 0xFF );
_fifo_enqueue(u_AttributeGroupType.bytebuffer[13] & 0xFF );
_fifo_enqueue(u_AttributeGroupType.bytebuffer[12] & 0xFF );
_fifo_enqueue(u_AttributeGroupType.bytebuffer[11] & 0xFF );
_fifo_enqueue(u_AttributeGroupType.bytebuffer[10] & 0xFF );
_fifo_enqueue(u_AttributeGroupType.bytebuffer[9] & 0xFF );
_fifo_enqueue(u_AttributeGroupType.bytebuffer[8] & 0xFF );
_fifo_enqueue(u_AttributeGroupType.bytebuffer[7] & 0xFF );
_fifo_enqueue(u_AttributeGroupType.bytebuffer[6] & 0xFF );
_fifo_enqueue(u_AttributeGroupType.bytebuffer[5] & 0xFF );
_fifo_enqueue(u_AttributeGroupType.bytebuffer[4] & 0xFF );
_fifo_enqueue(u_AttributeGroupType.bytebuffer[3] & 0xFF );
_fifo_enqueue(u_AttributeGroupType.bytebuffer[2] & 0xFF );
_fifo_enqueue(u_AttributeGroupType.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_AttributeGroupType.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages BLENotifierImpl::ATT::ATTHandleValueIndication
void enqueue_BLENotifierImpl_send_ATT_ATTHandleValueIndication(struct BLENotifierImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, ble_gatt_data_t AttributeValue){
fifo_lock();
if ( fifo_byte_available() > 32 ) {

_fifo_enqueue( (61 >> 8) & 0xFF );
_fifo_enqueue( 61 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_ATT >> 8) & 0xFF );
_fifo_enqueue( _instance->id_ATT & 0xFF );

// parameter ConnectionHandle
union u_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ConnectionHandle;
u_ConnectionHandle.p = ConnectionHandle;
_fifo_enqueue(u_ConnectionHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_ConnectionHandle.bytebuffer[0] & 0xFF );

// parameter AttributeHandle
union u_AttributeHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_AttributeHandle;
u_AttributeHandle.p = AttributeHandle;
_fifo_enqueue(u_AttributeHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_AttributeHandle.bytebuffer[0] & 0xFF );

// parameter AttributeValue
union u_AttributeValue_t {
ble_gatt_data_t p;
byte bytebuffer[24];
} u_AttributeValue;
u_AttributeValue.p = AttributeValue;
_fifo_enqueue(u_AttributeValue.bytebuffer[23] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[22] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[21] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[20] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[19] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[18] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[17] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[16] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[15] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[14] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[13] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[12] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[11] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[10] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[9] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[8] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[7] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[6] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[5] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[4] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[3] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[2] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages Main::Signals::Quit
void enqueue_Main_send_Signals_Quit(struct Main_Instance *_instance, int16_t code){
fifo_lock();
if ( fifo_byte_available() > 6 ) {

_fifo_enqueue( (80 >> 8) & 0xFF );
_fifo_enqueue( 80 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_Signals >> 8) & 0xFF );
_fifo_enqueue( _instance->id_Signals & 0xFF );

// parameter code
union u_code_t {
int16_t p;
byte bytebuffer[2];
} u_code;
u_code.p = code;
_fifo_enqueue(u_code.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_code.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages Main::Initialiser::Start
void enqueue_Main_send_Initialiser_Start(struct Main_Instance *_instance){
fifo_lock();
if ( fifo_byte_available() > 4 ) {

_fifo_enqueue( (64 >> 8) & 0xFF );
_fifo_enqueue( 64 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_Initialiser >> 8) & 0xFF );
_fifo_enqueue( _instance->id_Initialiser & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages Main::Initialiser::Stop
void enqueue_Main_send_Initialiser_Stop(struct Main_Instance *_instance){
fifo_lock();
if ( fifo_byte_available() > 4 ) {

_fifo_enqueue( (65 >> 8) & 0xFF );
_fifo_enqueue( 65 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_Initialiser >> 8) & 0xFF );
_fifo_enqueue( _instance->id_Initialiser & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages Main::Scanner::Start
void enqueue_Main_send_Scanner_Start(struct Main_Instance *_instance){
fifo_lock();
if ( fifo_byte_available() > 4 ) {

_fifo_enqueue( (64 >> 8) & 0xFF );
_fifo_enqueue( 64 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_Scanner >> 8) & 0xFF );
_fifo_enqueue( _instance->id_Scanner & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages Main::Scanner::Stop
void enqueue_Main_send_Scanner_Stop(struct Main_Instance *_instance){
fifo_lock();
if ( fifo_byte_available() > 4 ) {

_fifo_enqueue( (65 >> 8) & 0xFF );
_fifo_enqueue( 65 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_Scanner >> 8) & 0xFF );
_fifo_enqueue( _instance->id_Scanner & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages Main::ANDUC352BLE::AllowedToConnect
void enqueue_Main_send_ANDUC352BLE_AllowedToConnect(struct Main_Instance *_instance){
fifo_lock();
if ( fifo_byte_available() > 4 ) {

_fifo_enqueue( (81 >> 8) & 0xFF );
_fifo_enqueue( 81 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_ANDUC352BLE >> 8) & 0xFF );
_fifo_enqueue( _instance->id_ANDUC352BLE & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages Main::ANDUA651BLE::AllowedToConnect
void enqueue_Main_send_ANDUA651BLE_AllowedToConnect(struct Main_Instance *_instance){
fifo_lock();
if ( fifo_byte_available() > 4 ) {

_fifo_enqueue( (81 >> 8) & 0xFF );
_fifo_enqueue( 81 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_ANDUA651BLE >> 8) & 0xFF );
_fifo_enqueue( _instance->id_ANDUA651BLE & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages ExitHandler::Signals::Interrupt
void enqueue_ExitHandler_send_Signals_Interrupt(struct ExitHandler_Instance *_instance){
fifo_lock();
if ( fifo_byte_available() > 4 ) {

_fifo_enqueue( (82 >> 8) & 0xFF );
_fifo_enqueue( 82 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_Signals >> 8) & 0xFF );
_fifo_enqueue( _instance->id_Signals & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages HCISocketProxyImpl::Socket::Closed
void enqueue_HCISocketProxyImpl_send_Socket_Closed(struct HCISocketProxyImpl_Instance *_instance){
fifo_lock();
if ( fifo_byte_available() > 4 ) {

_fifo_enqueue( (83 >> 8) & 0xFF );
_fifo_enqueue( 83 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_Socket >> 8) & 0xFF );
_fifo_enqueue( _instance->id_Socket & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages HCISocketProxyImpl::Socket::Opened
void enqueue_HCISocketProxyImpl_send_Socket_Opened(struct HCISocketProxyImpl_Instance *_instance, bdaddr_t Address){
fifo_lock();
if ( fifo_byte_available() > 10 ) {

_fifo_enqueue( (84 >> 8) & 0xFF );
_fifo_enqueue( 84 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_Socket >> 8) & 0xFF );
_fifo_enqueue( _instance->id_Socket & 0xFF );

// parameter Address
union u_Address_t {
bdaddr_t p;
byte bytebuffer[6];
} u_Address;
u_Address.p = Address;
_fifo_enqueue(u_Address.bytebuffer[5] & 0xFF );
_fifo_enqueue(u_Address.bytebuffer[4] & 0xFF );
_fifo_enqueue(u_Address.bytebuffer[3] & 0xFF );
_fifo_enqueue(u_Address.bytebuffer[2] & 0xFF );
_fifo_enqueue(u_Address.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_Address.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages HCISocketProxyImpl::Events::SetLEAdvertisementParametersCompleted
void enqueue_HCISocketProxyImpl_send_Events_SetLEAdvertisementParametersCompleted(struct HCISocketProxyImpl_Instance *_instance, uint8_t NumberAllowedCommandPackets, uint8_t Status){
fifo_lock();
if ( fifo_byte_available() > 6 ) {

_fifo_enqueue( (85 >> 8) & 0xFF );
_fifo_enqueue( 85 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_Events >> 8) & 0xFF );
_fifo_enqueue( _instance->id_Events & 0xFF );

// parameter NumberAllowedCommandPackets
union u_NumberAllowedCommandPackets_t {
uint8_t p;
byte bytebuffer[1];
} u_NumberAllowedCommandPackets;
u_NumberAllowedCommandPackets.p = NumberAllowedCommandPackets;
_fifo_enqueue(u_NumberAllowedCommandPackets.bytebuffer[0] & 0xFF );

// parameter Status
union u_Status_t {
uint8_t p;
byte bytebuffer[1];
} u_Status;
u_Status.p = Status;
_fifo_enqueue(u_Status.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages HCISocketProxyImpl::Events::DisconnectStatus
void enqueue_HCISocketProxyImpl_send_Events_DisconnectStatus(struct HCISocketProxyImpl_Instance *_instance, uint8_t NumberAllowedCommandPackets, uint8_t Status){
fifo_lock();
if ( fifo_byte_available() > 6 ) {

_fifo_enqueue( (86 >> 8) & 0xFF );
_fifo_enqueue( 86 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_Events >> 8) & 0xFF );
_fifo_enqueue( _instance->id_Events & 0xFF );

// parameter NumberAllowedCommandPackets
union u_NumberAllowedCommandPackets_t {
uint8_t p;
byte bytebuffer[1];
} u_NumberAllowedCommandPackets;
u_NumberAllowedCommandPackets.p = NumberAllowedCommandPackets;
_fifo_enqueue(u_NumberAllowedCommandPackets.bytebuffer[0] & 0xFF );

// parameter Status
union u_Status_t {
uint8_t p;
byte bytebuffer[1];
} u_Status;
u_Status.p = Status;
_fifo_enqueue(u_Status.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages HCISocketProxyImpl::Events::SetLEScanResponseDataCompleted
void enqueue_HCISocketProxyImpl_send_Events_SetLEScanResponseDataCompleted(struct HCISocketProxyImpl_Instance *_instance, uint8_t NumberAllowedCommandPackets, uint8_t Status){
fifo_lock();
if ( fifo_byte_available() > 6 ) {

_fifo_enqueue( (87 >> 8) & 0xFF );
_fifo_enqueue( 87 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_Events >> 8) & 0xFF );
_fifo_enqueue( _instance->id_Events & 0xFF );

// parameter NumberAllowedCommandPackets
union u_NumberAllowedCommandPackets_t {
uint8_t p;
byte bytebuffer[1];
} u_NumberAllowedCommandPackets;
u_NumberAllowedCommandPackets.p = NumberAllowedCommandPackets;
_fifo_enqueue(u_NumberAllowedCommandPackets.bytebuffer[0] & 0xFF );

// parameter Status
union u_Status_t {
uint8_t p;
byte bytebuffer[1];
} u_Status;
u_Status.p = Status;
_fifo_enqueue(u_Status.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages HCISocketProxyImpl::Events::ResetCompleted
void enqueue_HCISocketProxyImpl_send_Events_ResetCompleted(struct HCISocketProxyImpl_Instance *_instance, uint8_t NumberAllowedCommandPackets, uint8_t Status){
fifo_lock();
if ( fifo_byte_available() > 6 ) {

_fifo_enqueue( (88 >> 8) & 0xFF );
_fifo_enqueue( 88 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_Events >> 8) & 0xFF );
_fifo_enqueue( _instance->id_Events & 0xFF );

// parameter NumberAllowedCommandPackets
union u_NumberAllowedCommandPackets_t {
uint8_t p;
byte bytebuffer[1];
} u_NumberAllowedCommandPackets;
u_NumberAllowedCommandPackets.p = NumberAllowedCommandPackets;
_fifo_enqueue(u_NumberAllowedCommandPackets.bytebuffer[0] & 0xFF );

// parameter Status
union u_Status_t {
uint8_t p;
byte bytebuffer[1];
} u_Status;
u_Status.p = Status;
_fifo_enqueue(u_Status.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages HCISocketProxyImpl::Events::SetEventMaskCompleted
void enqueue_HCISocketProxyImpl_send_Events_SetEventMaskCompleted(struct HCISocketProxyImpl_Instance *_instance, uint8_t NumberAllowedCommandPackets, uint8_t Status){
fifo_lock();
if ( fifo_byte_available() > 6 ) {

_fifo_enqueue( (89 >> 8) & 0xFF );
_fifo_enqueue( 89 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_Events >> 8) & 0xFF );
_fifo_enqueue( _instance->id_Events & 0xFF );

// parameter NumberAllowedCommandPackets
union u_NumberAllowedCommandPackets_t {
uint8_t p;
byte bytebuffer[1];
} u_NumberAllowedCommandPackets;
u_NumberAllowedCommandPackets.p = NumberAllowedCommandPackets;
_fifo_enqueue(u_NumberAllowedCommandPackets.bytebuffer[0] & 0xFF );

// parameter Status
union u_Status_t {
uint8_t p;
byte bytebuffer[1];
} u_Status;
u_Status.p = Status;
_fifo_enqueue(u_Status.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages HCISocketProxyImpl::Events::LECreateConnectionCancelCompleted
void enqueue_HCISocketProxyImpl_send_Events_LECreateConnectionCancelCompleted(struct HCISocketProxyImpl_Instance *_instance, uint8_t NumberAllowedCommandPackets, uint8_t Status){
fifo_lock();
if ( fifo_byte_available() > 6 ) {

_fifo_enqueue( (90 >> 8) & 0xFF );
_fifo_enqueue( 90 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_Events >> 8) & 0xFF );
_fifo_enqueue( _instance->id_Events & 0xFF );

// parameter NumberAllowedCommandPackets
union u_NumberAllowedCommandPackets_t {
uint8_t p;
byte bytebuffer[1];
} u_NumberAllowedCommandPackets;
u_NumberAllowedCommandPackets.p = NumberAllowedCommandPackets;
_fifo_enqueue(u_NumberAllowedCommandPackets.bytebuffer[0] & 0xFF );

// parameter Status
union u_Status_t {
uint8_t p;
byte bytebuffer[1];
} u_Status;
u_Status.p = Status;
_fifo_enqueue(u_Status.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages HCISocketProxyImpl::Events::LEStartEncryptionStatus
void enqueue_HCISocketProxyImpl_send_Events_LEStartEncryptionStatus(struct HCISocketProxyImpl_Instance *_instance, uint8_t NumberAllowedCommandPackets, uint8_t Status){
fifo_lock();
if ( fifo_byte_available() > 6 ) {

_fifo_enqueue( (91 >> 8) & 0xFF );
_fifo_enqueue( 91 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_Events >> 8) & 0xFF );
_fifo_enqueue( _instance->id_Events & 0xFF );

// parameter NumberAllowedCommandPackets
union u_NumberAllowedCommandPackets_t {
uint8_t p;
byte bytebuffer[1];
} u_NumberAllowedCommandPackets;
u_NumberAllowedCommandPackets.p = NumberAllowedCommandPackets;
_fifo_enqueue(u_NumberAllowedCommandPackets.bytebuffer[0] & 0xFF );

// parameter Status
union u_Status_t {
uint8_t p;
byte bytebuffer[1];
} u_Status;
u_Status.p = Status;
_fifo_enqueue(u_Status.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages HCISocketProxyImpl::Events::SetLocalNameCompleted
void enqueue_HCISocketProxyImpl_send_Events_SetLocalNameCompleted(struct HCISocketProxyImpl_Instance *_instance, uint8_t NumberAllowedCommandPackets, uint8_t Status){
fifo_lock();
if ( fifo_byte_available() > 6 ) {

_fifo_enqueue( (92 >> 8) & 0xFF );
_fifo_enqueue( 92 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_Events >> 8) & 0xFF );
_fifo_enqueue( _instance->id_Events & 0xFF );

// parameter NumberAllowedCommandPackets
union u_NumberAllowedCommandPackets_t {
uint8_t p;
byte bytebuffer[1];
} u_NumberAllowedCommandPackets;
u_NumberAllowedCommandPackets.p = NumberAllowedCommandPackets;
_fifo_enqueue(u_NumberAllowedCommandPackets.bytebuffer[0] & 0xFF );

// parameter Status
union u_Status_t {
uint8_t p;
byte bytebuffer[1];
} u_Status;
u_Status.p = Status;
_fifo_enqueue(u_Status.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages HCISocketProxyImpl::Events::LEConnectionComplete
void enqueue_HCISocketProxyImpl_send_Events_LEConnectionComplete(struct HCISocketProxyImpl_Instance *_instance, uint8_t Status, uint16_t ConnectionHandle, uint8_t Role, uint8_t PeerAddressType, bdaddr_t PeerAddress, uint16_t ConnInterval, uint16_t ConnLatency, uint16_t SupervisionTimeout, uint8_t MasterClockAccuracy){
fifo_lock();
if ( fifo_byte_available() > 22 ) {

_fifo_enqueue( (93 >> 8) & 0xFF );
_fifo_enqueue( 93 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_Events >> 8) & 0xFF );
_fifo_enqueue( _instance->id_Events & 0xFF );

// parameter Status
union u_Status_t {
uint8_t p;
byte bytebuffer[1];
} u_Status;
u_Status.p = Status;
_fifo_enqueue(u_Status.bytebuffer[0] & 0xFF );

// parameter ConnectionHandle
union u_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ConnectionHandle;
u_ConnectionHandle.p = ConnectionHandle;
_fifo_enqueue(u_ConnectionHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_ConnectionHandle.bytebuffer[0] & 0xFF );

// parameter Role
union u_Role_t {
uint8_t p;
byte bytebuffer[1];
} u_Role;
u_Role.p = Role;
_fifo_enqueue(u_Role.bytebuffer[0] & 0xFF );

// parameter PeerAddressType
union u_PeerAddressType_t {
uint8_t p;
byte bytebuffer[1];
} u_PeerAddressType;
u_PeerAddressType.p = PeerAddressType;
_fifo_enqueue(u_PeerAddressType.bytebuffer[0] & 0xFF );

// parameter PeerAddress
union u_PeerAddress_t {
bdaddr_t p;
byte bytebuffer[6];
} u_PeerAddress;
u_PeerAddress.p = PeerAddress;
_fifo_enqueue(u_PeerAddress.bytebuffer[5] & 0xFF );
_fifo_enqueue(u_PeerAddress.bytebuffer[4] & 0xFF );
_fifo_enqueue(u_PeerAddress.bytebuffer[3] & 0xFF );
_fifo_enqueue(u_PeerAddress.bytebuffer[2] & 0xFF );
_fifo_enqueue(u_PeerAddress.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_PeerAddress.bytebuffer[0] & 0xFF );

// parameter ConnInterval
union u_ConnInterval_t {
uint16_t p;
byte bytebuffer[2];
} u_ConnInterval;
u_ConnInterval.p = ConnInterval;
_fifo_enqueue(u_ConnInterval.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_ConnInterval.bytebuffer[0] & 0xFF );

// parameter ConnLatency
union u_ConnLatency_t {
uint16_t p;
byte bytebuffer[2];
} u_ConnLatency;
u_ConnLatency.p = ConnLatency;
_fifo_enqueue(u_ConnLatency.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_ConnLatency.bytebuffer[0] & 0xFF );

// parameter SupervisionTimeout
union u_SupervisionTimeout_t {
uint16_t p;
byte bytebuffer[2];
} u_SupervisionTimeout;
u_SupervisionTimeout.p = SupervisionTimeout;
_fifo_enqueue(u_SupervisionTimeout.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_SupervisionTimeout.bytebuffer[0] & 0xFF );

// parameter MasterClockAccuracy
union u_MasterClockAccuracy_t {
uint8_t p;
byte bytebuffer[1];
} u_MasterClockAccuracy;
u_MasterClockAccuracy.p = MasterClockAccuracy;
_fifo_enqueue(u_MasterClockAccuracy.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages HCISocketProxyImpl::Events::LERandCompleted
void enqueue_HCISocketProxyImpl_send_Events_LERandCompleted(struct HCISocketProxyImpl_Instance *_instance, uint8_t NumberAllowedCommandPackets, uint8_t Status, ble_random_part_t Random){
fifo_lock();
if ( fifo_byte_available() > 14 ) {

_fifo_enqueue( (94 >> 8) & 0xFF );
_fifo_enqueue( 94 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_Events >> 8) & 0xFF );
_fifo_enqueue( _instance->id_Events & 0xFF );

// parameter NumberAllowedCommandPackets
union u_NumberAllowedCommandPackets_t {
uint8_t p;
byte bytebuffer[1];
} u_NumberAllowedCommandPackets;
u_NumberAllowedCommandPackets.p = NumberAllowedCommandPackets;
_fifo_enqueue(u_NumberAllowedCommandPackets.bytebuffer[0] & 0xFF );

// parameter Status
union u_Status_t {
uint8_t p;
byte bytebuffer[1];
} u_Status;
u_Status.p = Status;
_fifo_enqueue(u_Status.bytebuffer[0] & 0xFF );

// parameter Random
union u_Random_t {
ble_random_part_t p;
byte bytebuffer[8];
} u_Random;
u_Random.p = Random;
_fifo_enqueue(u_Random.bytebuffer[7] & 0xFF );
_fifo_enqueue(u_Random.bytebuffer[6] & 0xFF );
_fifo_enqueue(u_Random.bytebuffer[5] & 0xFF );
_fifo_enqueue(u_Random.bytebuffer[4] & 0xFF );
_fifo_enqueue(u_Random.bytebuffer[3] & 0xFF );
_fifo_enqueue(u_Random.bytebuffer[2] & 0xFF );
_fifo_enqueue(u_Random.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_Random.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages HCISocketProxyImpl::Events::LEEncryptCompleted
void enqueue_HCISocketProxyImpl_send_Events_LEEncryptCompleted(struct HCISocketProxyImpl_Instance *_instance, uint8_t NumberAllowedCommandPackets, uint8_t Status, ble_random_number_t Encrypted){
fifo_lock();
if ( fifo_byte_available() > 22 ) {

_fifo_enqueue( (95 >> 8) & 0xFF );
_fifo_enqueue( 95 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_Events >> 8) & 0xFF );
_fifo_enqueue( _instance->id_Events & 0xFF );

// parameter NumberAllowedCommandPackets
union u_NumberAllowedCommandPackets_t {
uint8_t p;
byte bytebuffer[1];
} u_NumberAllowedCommandPackets;
u_NumberAllowedCommandPackets.p = NumberAllowedCommandPackets;
_fifo_enqueue(u_NumberAllowedCommandPackets.bytebuffer[0] & 0xFF );

// parameter Status
union u_Status_t {
uint8_t p;
byte bytebuffer[1];
} u_Status;
u_Status.p = Status;
_fifo_enqueue(u_Status.bytebuffer[0] & 0xFF );

// parameter Encrypted
union u_Encrypted_t {
ble_random_number_t p;
byte bytebuffer[16];
} u_Encrypted;
u_Encrypted.p = Encrypted;
_fifo_enqueue(u_Encrypted.bytebuffer[15] & 0xFF );
_fifo_enqueue(u_Encrypted.bytebuffer[14] & 0xFF );
_fifo_enqueue(u_Encrypted.bytebuffer[13] & 0xFF );
_fifo_enqueue(u_Encrypted.bytebuffer[12] & 0xFF );
_fifo_enqueue(u_Encrypted.bytebuffer[11] & 0xFF );
_fifo_enqueue(u_Encrypted.bytebuffer[10] & 0xFF );
_fifo_enqueue(u_Encrypted.bytebuffer[9] & 0xFF );
_fifo_enqueue(u_Encrypted.bytebuffer[8] & 0xFF );
_fifo_enqueue(u_Encrypted.bytebuffer[7] & 0xFF );
_fifo_enqueue(u_Encrypted.bytebuffer[6] & 0xFF );
_fifo_enqueue(u_Encrypted.bytebuffer[5] & 0xFF );
_fifo_enqueue(u_Encrypted.bytebuffer[4] & 0xFF );
_fifo_enqueue(u_Encrypted.bytebuffer[3] & 0xFF );
_fifo_enqueue(u_Encrypted.bytebuffer[2] & 0xFF );
_fifo_enqueue(u_Encrypted.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_Encrypted.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages HCISocketProxyImpl::Events::LECreateConnectionStatus
void enqueue_HCISocketProxyImpl_send_Events_LECreateConnectionStatus(struct HCISocketProxyImpl_Instance *_instance, uint8_t NumberAllowedCommandPackets, uint8_t Status){
fifo_lock();
if ( fifo_byte_available() > 6 ) {

_fifo_enqueue( (96 >> 8) & 0xFF );
_fifo_enqueue( 96 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_Events >> 8) & 0xFF );
_fifo_enqueue( _instance->id_Events & 0xFF );

// parameter NumberAllowedCommandPackets
union u_NumberAllowedCommandPackets_t {
uint8_t p;
byte bytebuffer[1];
} u_NumberAllowedCommandPackets;
u_NumberAllowedCommandPackets.p = NumberAllowedCommandPackets;
_fifo_enqueue(u_NumberAllowedCommandPackets.bytebuffer[0] & 0xFF );

// parameter Status
union u_Status_t {
uint8_t p;
byte bytebuffer[1];
} u_Status;
u_Status.p = Status;
_fifo_enqueue(u_Status.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages HCISocketProxyImpl::Events::SetLEScanEnableCompleted
void enqueue_HCISocketProxyImpl_send_Events_SetLEScanEnableCompleted(struct HCISocketProxyImpl_Instance *_instance, uint8_t NumberAllowedCommandPackets, uint8_t Status){
fifo_lock();
if ( fifo_byte_available() > 6 ) {

_fifo_enqueue( (97 >> 8) & 0xFF );
_fifo_enqueue( 97 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_Events >> 8) & 0xFF );
_fifo_enqueue( _instance->id_Events & 0xFF );

// parameter NumberAllowedCommandPackets
union u_NumberAllowedCommandPackets_t {
uint8_t p;
byte bytebuffer[1];
} u_NumberAllowedCommandPackets;
u_NumberAllowedCommandPackets.p = NumberAllowedCommandPackets;
_fifo_enqueue(u_NumberAllowedCommandPackets.bytebuffer[0] & 0xFF );

// parameter Status
union u_Status_t {
uint8_t p;
byte bytebuffer[1];
} u_Status;
u_Status.p = Status;
_fifo_enqueue(u_Status.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages HCISocketProxyImpl::Events::LEAdvertisementReport
void enqueue_HCISocketProxyImpl_send_Events_LEAdvertisementReport(struct HCISocketProxyImpl_Instance *_instance, uint8_t Type, uint8_t AddressType, bdaddr_t Address, uint8_t Length, ble_adv_data_t Data){
fifo_lock();
if ( fifo_byte_available() > 44 ) {

_fifo_enqueue( (98 >> 8) & 0xFF );
_fifo_enqueue( 98 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_Events >> 8) & 0xFF );
_fifo_enqueue( _instance->id_Events & 0xFF );

// parameter Type
union u_Type_t {
uint8_t p;
byte bytebuffer[1];
} u_Type;
u_Type.p = Type;
_fifo_enqueue(u_Type.bytebuffer[0] & 0xFF );

// parameter AddressType
union u_AddressType_t {
uint8_t p;
byte bytebuffer[1];
} u_AddressType;
u_AddressType.p = AddressType;
_fifo_enqueue(u_AddressType.bytebuffer[0] & 0xFF );

// parameter Address
union u_Address_t {
bdaddr_t p;
byte bytebuffer[6];
} u_Address;
u_Address.p = Address;
_fifo_enqueue(u_Address.bytebuffer[5] & 0xFF );
_fifo_enqueue(u_Address.bytebuffer[4] & 0xFF );
_fifo_enqueue(u_Address.bytebuffer[3] & 0xFF );
_fifo_enqueue(u_Address.bytebuffer[2] & 0xFF );
_fifo_enqueue(u_Address.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_Address.bytebuffer[0] & 0xFF );

// parameter Length
union u_Length_t {
uint8_t p;
byte bytebuffer[1];
} u_Length;
u_Length.p = Length;
_fifo_enqueue(u_Length.bytebuffer[0] & 0xFF );

// parameter Data
union u_Data_t {
ble_adv_data_t p;
byte bytebuffer[31];
} u_Data;
u_Data.p = Data;
_fifo_enqueue(u_Data.bytebuffer[30] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[29] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[28] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[27] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[26] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[25] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[24] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[23] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[22] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[21] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[20] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[19] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[18] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[17] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[16] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[15] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[14] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[13] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[12] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[11] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[10] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[9] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[8] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[7] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[6] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[5] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[4] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[3] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[2] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_Data.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages HCISocketProxyImpl::Events::SetLEAdvertisingDataCompleted
void enqueue_HCISocketProxyImpl_send_Events_SetLEAdvertisingDataCompleted(struct HCISocketProxyImpl_Instance *_instance, uint8_t NumberAllowedCommandPackets, uint8_t Status){
fifo_lock();
if ( fifo_byte_available() > 6 ) {

_fifo_enqueue( (99 >> 8) & 0xFF );
_fifo_enqueue( 99 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_Events >> 8) & 0xFF );
_fifo_enqueue( _instance->id_Events & 0xFF );

// parameter NumberAllowedCommandPackets
union u_NumberAllowedCommandPackets_t {
uint8_t p;
byte bytebuffer[1];
} u_NumberAllowedCommandPackets;
u_NumberAllowedCommandPackets.p = NumberAllowedCommandPackets;
_fifo_enqueue(u_NumberAllowedCommandPackets.bytebuffer[0] & 0xFF );

// parameter Status
union u_Status_t {
uint8_t p;
byte bytebuffer[1];
} u_Status;
u_Status.p = Status;
_fifo_enqueue(u_Status.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages HCISocketProxyImpl::Events::SetLEScanParametersCompleted
void enqueue_HCISocketProxyImpl_send_Events_SetLEScanParametersCompleted(struct HCISocketProxyImpl_Instance *_instance, uint8_t NumberAllowedCommandPackets, uint8_t Status){
fifo_lock();
if ( fifo_byte_available() > 6 ) {

_fifo_enqueue( (100 >> 8) & 0xFF );
_fifo_enqueue( 100 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_Events >> 8) & 0xFF );
_fifo_enqueue( _instance->id_Events & 0xFF );

// parameter NumberAllowedCommandPackets
union u_NumberAllowedCommandPackets_t {
uint8_t p;
byte bytebuffer[1];
} u_NumberAllowedCommandPackets;
u_NumberAllowedCommandPackets.p = NumberAllowedCommandPackets;
_fifo_enqueue(u_NumberAllowedCommandPackets.bytebuffer[0] & 0xFF );

// parameter Status
union u_Status_t {
uint8_t p;
byte bytebuffer[1];
} u_Status;
u_Status.p = Status;
_fifo_enqueue(u_Status.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages HCISocketProxyImpl::Events::LEEnhancedConnectionComplete
void enqueue_HCISocketProxyImpl_send_Events_LEEnhancedConnectionComplete(struct HCISocketProxyImpl_Instance *_instance, uint8_t Status, uint16_t ConnectionHandle, uint8_t Role, uint8_t PeerAddressType, bdaddr_t PeerAddress, bdaddr_t LocalResolvablePrivateAddress, bdaddr_t PeerResolvablePrivateAddress, uint16_t ConnInterval, uint16_t ConnLatency, uint16_t SupervisionTimeout, uint8_t MasterClockAccuracy){
fifo_lock();
if ( fifo_byte_available() > 34 ) {

_fifo_enqueue( (101 >> 8) & 0xFF );
_fifo_enqueue( 101 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_Events >> 8) & 0xFF );
_fifo_enqueue( _instance->id_Events & 0xFF );

// parameter Status
union u_Status_t {
uint8_t p;
byte bytebuffer[1];
} u_Status;
u_Status.p = Status;
_fifo_enqueue(u_Status.bytebuffer[0] & 0xFF );

// parameter ConnectionHandle
union u_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ConnectionHandle;
u_ConnectionHandle.p = ConnectionHandle;
_fifo_enqueue(u_ConnectionHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_ConnectionHandle.bytebuffer[0] & 0xFF );

// parameter Role
union u_Role_t {
uint8_t p;
byte bytebuffer[1];
} u_Role;
u_Role.p = Role;
_fifo_enqueue(u_Role.bytebuffer[0] & 0xFF );

// parameter PeerAddressType
union u_PeerAddressType_t {
uint8_t p;
byte bytebuffer[1];
} u_PeerAddressType;
u_PeerAddressType.p = PeerAddressType;
_fifo_enqueue(u_PeerAddressType.bytebuffer[0] & 0xFF );

// parameter PeerAddress
union u_PeerAddress_t {
bdaddr_t p;
byte bytebuffer[6];
} u_PeerAddress;
u_PeerAddress.p = PeerAddress;
_fifo_enqueue(u_PeerAddress.bytebuffer[5] & 0xFF );
_fifo_enqueue(u_PeerAddress.bytebuffer[4] & 0xFF );
_fifo_enqueue(u_PeerAddress.bytebuffer[3] & 0xFF );
_fifo_enqueue(u_PeerAddress.bytebuffer[2] & 0xFF );
_fifo_enqueue(u_PeerAddress.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_PeerAddress.bytebuffer[0] & 0xFF );

// parameter LocalResolvablePrivateAddress
union u_LocalResolvablePrivateAddress_t {
bdaddr_t p;
byte bytebuffer[6];
} u_LocalResolvablePrivateAddress;
u_LocalResolvablePrivateAddress.p = LocalResolvablePrivateAddress;
_fifo_enqueue(u_LocalResolvablePrivateAddress.bytebuffer[5] & 0xFF );
_fifo_enqueue(u_LocalResolvablePrivateAddress.bytebuffer[4] & 0xFF );
_fifo_enqueue(u_LocalResolvablePrivateAddress.bytebuffer[3] & 0xFF );
_fifo_enqueue(u_LocalResolvablePrivateAddress.bytebuffer[2] & 0xFF );
_fifo_enqueue(u_LocalResolvablePrivateAddress.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_LocalResolvablePrivateAddress.bytebuffer[0] & 0xFF );

// parameter PeerResolvablePrivateAddress
union u_PeerResolvablePrivateAddress_t {
bdaddr_t p;
byte bytebuffer[6];
} u_PeerResolvablePrivateAddress;
u_PeerResolvablePrivateAddress.p = PeerResolvablePrivateAddress;
_fifo_enqueue(u_PeerResolvablePrivateAddress.bytebuffer[5] & 0xFF );
_fifo_enqueue(u_PeerResolvablePrivateAddress.bytebuffer[4] & 0xFF );
_fifo_enqueue(u_PeerResolvablePrivateAddress.bytebuffer[3] & 0xFF );
_fifo_enqueue(u_PeerResolvablePrivateAddress.bytebuffer[2] & 0xFF );
_fifo_enqueue(u_PeerResolvablePrivateAddress.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_PeerResolvablePrivateAddress.bytebuffer[0] & 0xFF );

// parameter ConnInterval
union u_ConnInterval_t {
uint16_t p;
byte bytebuffer[2];
} u_ConnInterval;
u_ConnInterval.p = ConnInterval;
_fifo_enqueue(u_ConnInterval.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_ConnInterval.bytebuffer[0] & 0xFF );

// parameter ConnLatency
union u_ConnLatency_t {
uint16_t p;
byte bytebuffer[2];
} u_ConnLatency;
u_ConnLatency.p = ConnLatency;
_fifo_enqueue(u_ConnLatency.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_ConnLatency.bytebuffer[0] & 0xFF );

// parameter SupervisionTimeout
union u_SupervisionTimeout_t {
uint16_t p;
byte bytebuffer[2];
} u_SupervisionTimeout;
u_SupervisionTimeout.p = SupervisionTimeout;
_fifo_enqueue(u_SupervisionTimeout.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_SupervisionTimeout.bytebuffer[0] & 0xFF );

// parameter MasterClockAccuracy
union u_MasterClockAccuracy_t {
uint8_t p;
byte bytebuffer[1];
} u_MasterClockAccuracy;
u_MasterClockAccuracy.p = MasterClockAccuracy;
_fifo_enqueue(u_MasterClockAccuracy.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages HCISocketProxyImpl::Events::SetLEAdvertiseEnableCompleted
void enqueue_HCISocketProxyImpl_send_Events_SetLEAdvertiseEnableCompleted(struct HCISocketProxyImpl_Instance *_instance, uint8_t NumberAllowedCommandPackets, uint8_t Status){
fifo_lock();
if ( fifo_byte_available() > 6 ) {

_fifo_enqueue( (102 >> 8) & 0xFF );
_fifo_enqueue( 102 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_Events >> 8) & 0xFF );
_fifo_enqueue( _instance->id_Events & 0xFF );

// parameter NumberAllowedCommandPackets
union u_NumberAllowedCommandPackets_t {
uint8_t p;
byte bytebuffer[1];
} u_NumberAllowedCommandPackets;
u_NumberAllowedCommandPackets.p = NumberAllowedCommandPackets;
_fifo_enqueue(u_NumberAllowedCommandPackets.bytebuffer[0] & 0xFF );

// parameter Status
union u_Status_t {
uint8_t p;
byte bytebuffer[1];
} u_Status;
u_Status.p = Status;
_fifo_enqueue(u_Status.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages HCISocketProxyImpl::Events::SetLEEventMaskCompleted
void enqueue_HCISocketProxyImpl_send_Events_SetLEEventMaskCompleted(struct HCISocketProxyImpl_Instance *_instance, uint8_t NumberAllowedCommandPackets, uint8_t Status){
fifo_lock();
if ( fifo_byte_available() > 6 ) {

_fifo_enqueue( (103 >> 8) & 0xFF );
_fifo_enqueue( 103 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_Events >> 8) & 0xFF );
_fifo_enqueue( _instance->id_Events & 0xFF );

// parameter NumberAllowedCommandPackets
union u_NumberAllowedCommandPackets_t {
uint8_t p;
byte bytebuffer[1];
} u_NumberAllowedCommandPackets;
u_NumberAllowedCommandPackets.p = NumberAllowedCommandPackets;
_fifo_enqueue(u_NumberAllowedCommandPackets.bytebuffer[0] & 0xFF );

// parameter Status
union u_Status_t {
uint8_t p;
byte bytebuffer[1];
} u_Status;
u_Status.p = Status;
_fifo_enqueue(u_Status.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages HCISocketProxyImpl::Events::EncryptionChanged
void enqueue_HCISocketProxyImpl_send_Events_EncryptionChanged(struct HCISocketProxyImpl_Instance *_instance, uint8_t Status, uint16_t ConnectionHandle, uint8_t Enabled){
fifo_lock();
if ( fifo_byte_available() > 8 ) {

_fifo_enqueue( (104 >> 8) & 0xFF );
_fifo_enqueue( 104 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_Events >> 8) & 0xFF );
_fifo_enqueue( _instance->id_Events & 0xFF );

// parameter Status
union u_Status_t {
uint8_t p;
byte bytebuffer[1];
} u_Status;
u_Status.p = Status;
_fifo_enqueue(u_Status.bytebuffer[0] & 0xFF );

// parameter ConnectionHandle
union u_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ConnectionHandle;
u_ConnectionHandle.p = ConnectionHandle;
_fifo_enqueue(u_ConnectionHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_ConnectionHandle.bytebuffer[0] & 0xFF );

// parameter Enabled
union u_Enabled_t {
uint8_t p;
byte bytebuffer[1];
} u_Enabled;
u_Enabled.p = Enabled;
_fifo_enqueue(u_Enabled.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages HCISocketProxyImpl::Events::DisconnectionCompleted
void enqueue_HCISocketProxyImpl_send_Events_DisconnectionCompleted(struct HCISocketProxyImpl_Instance *_instance, uint8_t Status, uint16_t ConnectionHandle, uint8_t Reason){
fifo_lock();
if ( fifo_byte_available() > 8 ) {

_fifo_enqueue( (105 >> 8) & 0xFF );
_fifo_enqueue( 105 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_Events >> 8) & 0xFF );
_fifo_enqueue( _instance->id_Events & 0xFF );

// parameter Status
union u_Status_t {
uint8_t p;
byte bytebuffer[1];
} u_Status;
u_Status.p = Status;
_fifo_enqueue(u_Status.bytebuffer[0] & 0xFF );

// parameter ConnectionHandle
union u_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ConnectionHandle;
u_ConnectionHandle.p = ConnectionHandle;
_fifo_enqueue(u_ConnectionHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_ConnectionHandle.bytebuffer[0] & 0xFF );

// parameter Reason
union u_Reason_t {
uint8_t p;
byte bytebuffer[1];
} u_Reason;
u_Reason.p = Reason;
_fifo_enqueue(u_Reason.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages HCISocketProxyImpl::SMP::SMPPairingRequest
void enqueue_HCISocketProxyImpl_send_SMP_SMPPairingRequest(struct HCISocketProxyImpl_Instance *_instance, uint16_t Handle, uint8_t IOCapability, uint8_t OOBDataPresent, uint8_t Bonding, uint8_t MITM, uint8_t SecureConnection, uint8_t Keypress, uint8_t MaximumEncryptionKeySize, uint8_t InitiatorKeyDistribution, uint8_t ResponderKeyDistribution){
fifo_lock();
if ( fifo_byte_available() > 15 ) {

_fifo_enqueue( (29 >> 8) & 0xFF );
_fifo_enqueue( 29 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_SMP >> 8) & 0xFF );
_fifo_enqueue( _instance->id_SMP & 0xFF );

// parameter Handle
union u_Handle_t {
uint16_t p;
byte bytebuffer[2];
} u_Handle;
u_Handle.p = Handle;
_fifo_enqueue(u_Handle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_Handle.bytebuffer[0] & 0xFF );

// parameter IOCapability
union u_IOCapability_t {
uint8_t p;
byte bytebuffer[1];
} u_IOCapability;
u_IOCapability.p = IOCapability;
_fifo_enqueue(u_IOCapability.bytebuffer[0] & 0xFF );

// parameter OOBDataPresent
union u_OOBDataPresent_t {
uint8_t p;
byte bytebuffer[1];
} u_OOBDataPresent;
u_OOBDataPresent.p = OOBDataPresent;
_fifo_enqueue(u_OOBDataPresent.bytebuffer[0] & 0xFF );

// parameter Bonding
union u_Bonding_t {
uint8_t p;
byte bytebuffer[1];
} u_Bonding;
u_Bonding.p = Bonding;
_fifo_enqueue(u_Bonding.bytebuffer[0] & 0xFF );

// parameter MITM
union u_MITM_t {
uint8_t p;
byte bytebuffer[1];
} u_MITM;
u_MITM.p = MITM;
_fifo_enqueue(u_MITM.bytebuffer[0] & 0xFF );

// parameter SecureConnection
union u_SecureConnection_t {
uint8_t p;
byte bytebuffer[1];
} u_SecureConnection;
u_SecureConnection.p = SecureConnection;
_fifo_enqueue(u_SecureConnection.bytebuffer[0] & 0xFF );

// parameter Keypress
union u_Keypress_t {
uint8_t p;
byte bytebuffer[1];
} u_Keypress;
u_Keypress.p = Keypress;
_fifo_enqueue(u_Keypress.bytebuffer[0] & 0xFF );

// parameter MaximumEncryptionKeySize
union u_MaximumEncryptionKeySize_t {
uint8_t p;
byte bytebuffer[1];
} u_MaximumEncryptionKeySize;
u_MaximumEncryptionKeySize.p = MaximumEncryptionKeySize;
_fifo_enqueue(u_MaximumEncryptionKeySize.bytebuffer[0] & 0xFF );

// parameter InitiatorKeyDistribution
union u_InitiatorKeyDistribution_t {
uint8_t p;
byte bytebuffer[1];
} u_InitiatorKeyDistribution;
u_InitiatorKeyDistribution.p = InitiatorKeyDistribution;
_fifo_enqueue(u_InitiatorKeyDistribution.bytebuffer[0] & 0xFF );

// parameter ResponderKeyDistribution
union u_ResponderKeyDistribution_t {
uint8_t p;
byte bytebuffer[1];
} u_ResponderKeyDistribution;
u_ResponderKeyDistribution.p = ResponderKeyDistribution;
_fifo_enqueue(u_ResponderKeyDistribution.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages HCISocketProxyImpl::SMP::SMPPairingDHKeyCheck
void enqueue_HCISocketProxyImpl_send_SMP_SMPPairingDHKeyCheck(struct HCISocketProxyImpl_Instance *_instance, uint16_t Handle, ble_random_number_t DHKeyCheck){
fifo_lock();
if ( fifo_byte_available() > 22 ) {

_fifo_enqueue( (30 >> 8) & 0xFF );
_fifo_enqueue( 30 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_SMP >> 8) & 0xFF );
_fifo_enqueue( _instance->id_SMP & 0xFF );

// parameter Handle
union u_Handle_t {
uint16_t p;
byte bytebuffer[2];
} u_Handle;
u_Handle.p = Handle;
_fifo_enqueue(u_Handle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_Handle.bytebuffer[0] & 0xFF );

// parameter DHKeyCheck
union u_DHKeyCheck_t {
ble_random_number_t p;
byte bytebuffer[16];
} u_DHKeyCheck;
u_DHKeyCheck.p = DHKeyCheck;
_fifo_enqueue(u_DHKeyCheck.bytebuffer[15] & 0xFF );
_fifo_enqueue(u_DHKeyCheck.bytebuffer[14] & 0xFF );
_fifo_enqueue(u_DHKeyCheck.bytebuffer[13] & 0xFF );
_fifo_enqueue(u_DHKeyCheck.bytebuffer[12] & 0xFF );
_fifo_enqueue(u_DHKeyCheck.bytebuffer[11] & 0xFF );
_fifo_enqueue(u_DHKeyCheck.bytebuffer[10] & 0xFF );
_fifo_enqueue(u_DHKeyCheck.bytebuffer[9] & 0xFF );
_fifo_enqueue(u_DHKeyCheck.bytebuffer[8] & 0xFF );
_fifo_enqueue(u_DHKeyCheck.bytebuffer[7] & 0xFF );
_fifo_enqueue(u_DHKeyCheck.bytebuffer[6] & 0xFF );
_fifo_enqueue(u_DHKeyCheck.bytebuffer[5] & 0xFF );
_fifo_enqueue(u_DHKeyCheck.bytebuffer[4] & 0xFF );
_fifo_enqueue(u_DHKeyCheck.bytebuffer[3] & 0xFF );
_fifo_enqueue(u_DHKeyCheck.bytebuffer[2] & 0xFF );
_fifo_enqueue(u_DHKeyCheck.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_DHKeyCheck.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages HCISocketProxyImpl::SMP::SMPEncryptionInformation
void enqueue_HCISocketProxyImpl_send_SMP_SMPEncryptionInformation(struct HCISocketProxyImpl_Instance *_instance, uint16_t Handle, ble_random_number_t LongTermKey){
fifo_lock();
if ( fifo_byte_available() > 22 ) {

_fifo_enqueue( (31 >> 8) & 0xFF );
_fifo_enqueue( 31 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_SMP >> 8) & 0xFF );
_fifo_enqueue( _instance->id_SMP & 0xFF );

// parameter Handle
union u_Handle_t {
uint16_t p;
byte bytebuffer[2];
} u_Handle;
u_Handle.p = Handle;
_fifo_enqueue(u_Handle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_Handle.bytebuffer[0] & 0xFF );

// parameter LongTermKey
union u_LongTermKey_t {
ble_random_number_t p;
byte bytebuffer[16];
} u_LongTermKey;
u_LongTermKey.p = LongTermKey;
_fifo_enqueue(u_LongTermKey.bytebuffer[15] & 0xFF );
_fifo_enqueue(u_LongTermKey.bytebuffer[14] & 0xFF );
_fifo_enqueue(u_LongTermKey.bytebuffer[13] & 0xFF );
_fifo_enqueue(u_LongTermKey.bytebuffer[12] & 0xFF );
_fifo_enqueue(u_LongTermKey.bytebuffer[11] & 0xFF );
_fifo_enqueue(u_LongTermKey.bytebuffer[10] & 0xFF );
_fifo_enqueue(u_LongTermKey.bytebuffer[9] & 0xFF );
_fifo_enqueue(u_LongTermKey.bytebuffer[8] & 0xFF );
_fifo_enqueue(u_LongTermKey.bytebuffer[7] & 0xFF );
_fifo_enqueue(u_LongTermKey.bytebuffer[6] & 0xFF );
_fifo_enqueue(u_LongTermKey.bytebuffer[5] & 0xFF );
_fifo_enqueue(u_LongTermKey.bytebuffer[4] & 0xFF );
_fifo_enqueue(u_LongTermKey.bytebuffer[3] & 0xFF );
_fifo_enqueue(u_LongTermKey.bytebuffer[2] & 0xFF );
_fifo_enqueue(u_LongTermKey.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_LongTermKey.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages HCISocketProxyImpl::SMP::SMPPairingConfirm
void enqueue_HCISocketProxyImpl_send_SMP_SMPPairingConfirm(struct HCISocketProxyImpl_Instance *_instance, uint16_t Handle, ble_random_number_t ConfirmValue){
fifo_lock();
if ( fifo_byte_available() > 22 ) {

_fifo_enqueue( (32 >> 8) & 0xFF );
_fifo_enqueue( 32 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_SMP >> 8) & 0xFF );
_fifo_enqueue( _instance->id_SMP & 0xFF );

// parameter Handle
union u_Handle_t {
uint16_t p;
byte bytebuffer[2];
} u_Handle;
u_Handle.p = Handle;
_fifo_enqueue(u_Handle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_Handle.bytebuffer[0] & 0xFF );

// parameter ConfirmValue
union u_ConfirmValue_t {
ble_random_number_t p;
byte bytebuffer[16];
} u_ConfirmValue;
u_ConfirmValue.p = ConfirmValue;
_fifo_enqueue(u_ConfirmValue.bytebuffer[15] & 0xFF );
_fifo_enqueue(u_ConfirmValue.bytebuffer[14] & 0xFF );
_fifo_enqueue(u_ConfirmValue.bytebuffer[13] & 0xFF );
_fifo_enqueue(u_ConfirmValue.bytebuffer[12] & 0xFF );
_fifo_enqueue(u_ConfirmValue.bytebuffer[11] & 0xFF );
_fifo_enqueue(u_ConfirmValue.bytebuffer[10] & 0xFF );
_fifo_enqueue(u_ConfirmValue.bytebuffer[9] & 0xFF );
_fifo_enqueue(u_ConfirmValue.bytebuffer[8] & 0xFF );
_fifo_enqueue(u_ConfirmValue.bytebuffer[7] & 0xFF );
_fifo_enqueue(u_ConfirmValue.bytebuffer[6] & 0xFF );
_fifo_enqueue(u_ConfirmValue.bytebuffer[5] & 0xFF );
_fifo_enqueue(u_ConfirmValue.bytebuffer[4] & 0xFF );
_fifo_enqueue(u_ConfirmValue.bytebuffer[3] & 0xFF );
_fifo_enqueue(u_ConfirmValue.bytebuffer[2] & 0xFF );
_fifo_enqueue(u_ConfirmValue.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_ConfirmValue.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages HCISocketProxyImpl::SMP::SMPSecurityRequest
void enqueue_HCISocketProxyImpl_send_SMP_SMPSecurityRequest(struct HCISocketProxyImpl_Instance *_instance, uint16_t Handle, uint8_t Bonding, uint8_t MITM, uint8_t SecureConnection, uint8_t Keypress){
fifo_lock();
if ( fifo_byte_available() > 10 ) {

_fifo_enqueue( (33 >> 8) & 0xFF );
_fifo_enqueue( 33 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_SMP >> 8) & 0xFF );
_fifo_enqueue( _instance->id_SMP & 0xFF );

// parameter Handle
union u_Handle_t {
uint16_t p;
byte bytebuffer[2];
} u_Handle;
u_Handle.p = Handle;
_fifo_enqueue(u_Handle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_Handle.bytebuffer[0] & 0xFF );

// parameter Bonding
union u_Bonding_t {
uint8_t p;
byte bytebuffer[1];
} u_Bonding;
u_Bonding.p = Bonding;
_fifo_enqueue(u_Bonding.bytebuffer[0] & 0xFF );

// parameter MITM
union u_MITM_t {
uint8_t p;
byte bytebuffer[1];
} u_MITM;
u_MITM.p = MITM;
_fifo_enqueue(u_MITM.bytebuffer[0] & 0xFF );

// parameter SecureConnection
union u_SecureConnection_t {
uint8_t p;
byte bytebuffer[1];
} u_SecureConnection;
u_SecureConnection.p = SecureConnection;
_fifo_enqueue(u_SecureConnection.bytebuffer[0] & 0xFF );

// parameter Keypress
union u_Keypress_t {
uint8_t p;
byte bytebuffer[1];
} u_Keypress;
u_Keypress.p = Keypress;
_fifo_enqueue(u_Keypress.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages HCISocketProxyImpl::SMP::SMPPairingFailed
void enqueue_HCISocketProxyImpl_send_SMP_SMPPairingFailed(struct HCISocketProxyImpl_Instance *_instance, uint16_t Handle, uint8_t Reason){
fifo_lock();
if ( fifo_byte_available() > 7 ) {

_fifo_enqueue( (34 >> 8) & 0xFF );
_fifo_enqueue( 34 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_SMP >> 8) & 0xFF );
_fifo_enqueue( _instance->id_SMP & 0xFF );

// parameter Handle
union u_Handle_t {
uint16_t p;
byte bytebuffer[2];
} u_Handle;
u_Handle.p = Handle;
_fifo_enqueue(u_Handle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_Handle.bytebuffer[0] & 0xFF );

// parameter Reason
union u_Reason_t {
uint8_t p;
byte bytebuffer[1];
} u_Reason;
u_Reason.p = Reason;
_fifo_enqueue(u_Reason.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages HCISocketProxyImpl::SMP::SMPPairingPublicKey
void enqueue_HCISocketProxyImpl_send_SMP_SMPPairingPublicKey(struct HCISocketProxyImpl_Instance *_instance, uint16_t Handle, smp_public_key_t KeyX, smp_public_key_t KeyY){
fifo_lock();
if ( fifo_byte_available() > 70 ) {

_fifo_enqueue( (35 >> 8) & 0xFF );
_fifo_enqueue( 35 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_SMP >> 8) & 0xFF );
_fifo_enqueue( _instance->id_SMP & 0xFF );

// parameter Handle
union u_Handle_t {
uint16_t p;
byte bytebuffer[2];
} u_Handle;
u_Handle.p = Handle;
_fifo_enqueue(u_Handle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_Handle.bytebuffer[0] & 0xFF );

// parameter KeyX
union u_KeyX_t {
smp_public_key_t p;
byte bytebuffer[32];
} u_KeyX;
u_KeyX.p = KeyX;
_fifo_enqueue(u_KeyX.bytebuffer[31] & 0xFF );
_fifo_enqueue(u_KeyX.bytebuffer[30] & 0xFF );
_fifo_enqueue(u_KeyX.bytebuffer[29] & 0xFF );
_fifo_enqueue(u_KeyX.bytebuffer[28] & 0xFF );
_fifo_enqueue(u_KeyX.bytebuffer[27] & 0xFF );
_fifo_enqueue(u_KeyX.bytebuffer[26] & 0xFF );
_fifo_enqueue(u_KeyX.bytebuffer[25] & 0xFF );
_fifo_enqueue(u_KeyX.bytebuffer[24] & 0xFF );
_fifo_enqueue(u_KeyX.bytebuffer[23] & 0xFF );
_fifo_enqueue(u_KeyX.bytebuffer[22] & 0xFF );
_fifo_enqueue(u_KeyX.bytebuffer[21] & 0xFF );
_fifo_enqueue(u_KeyX.bytebuffer[20] & 0xFF );
_fifo_enqueue(u_KeyX.bytebuffer[19] & 0xFF );
_fifo_enqueue(u_KeyX.bytebuffer[18] & 0xFF );
_fifo_enqueue(u_KeyX.bytebuffer[17] & 0xFF );
_fifo_enqueue(u_KeyX.bytebuffer[16] & 0xFF );
_fifo_enqueue(u_KeyX.bytebuffer[15] & 0xFF );
_fifo_enqueue(u_KeyX.bytebuffer[14] & 0xFF );
_fifo_enqueue(u_KeyX.bytebuffer[13] & 0xFF );
_fifo_enqueue(u_KeyX.bytebuffer[12] & 0xFF );
_fifo_enqueue(u_KeyX.bytebuffer[11] & 0xFF );
_fifo_enqueue(u_KeyX.bytebuffer[10] & 0xFF );
_fifo_enqueue(u_KeyX.bytebuffer[9] & 0xFF );
_fifo_enqueue(u_KeyX.bytebuffer[8] & 0xFF );
_fifo_enqueue(u_KeyX.bytebuffer[7] & 0xFF );
_fifo_enqueue(u_KeyX.bytebuffer[6] & 0xFF );
_fifo_enqueue(u_KeyX.bytebuffer[5] & 0xFF );
_fifo_enqueue(u_KeyX.bytebuffer[4] & 0xFF );
_fifo_enqueue(u_KeyX.bytebuffer[3] & 0xFF );
_fifo_enqueue(u_KeyX.bytebuffer[2] & 0xFF );
_fifo_enqueue(u_KeyX.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_KeyX.bytebuffer[0] & 0xFF );

// parameter KeyY
union u_KeyY_t {
smp_public_key_t p;
byte bytebuffer[32];
} u_KeyY;
u_KeyY.p = KeyY;
_fifo_enqueue(u_KeyY.bytebuffer[31] & 0xFF );
_fifo_enqueue(u_KeyY.bytebuffer[30] & 0xFF );
_fifo_enqueue(u_KeyY.bytebuffer[29] & 0xFF );
_fifo_enqueue(u_KeyY.bytebuffer[28] & 0xFF );
_fifo_enqueue(u_KeyY.bytebuffer[27] & 0xFF );
_fifo_enqueue(u_KeyY.bytebuffer[26] & 0xFF );
_fifo_enqueue(u_KeyY.bytebuffer[25] & 0xFF );
_fifo_enqueue(u_KeyY.bytebuffer[24] & 0xFF );
_fifo_enqueue(u_KeyY.bytebuffer[23] & 0xFF );
_fifo_enqueue(u_KeyY.bytebuffer[22] & 0xFF );
_fifo_enqueue(u_KeyY.bytebuffer[21] & 0xFF );
_fifo_enqueue(u_KeyY.bytebuffer[20] & 0xFF );
_fifo_enqueue(u_KeyY.bytebuffer[19] & 0xFF );
_fifo_enqueue(u_KeyY.bytebuffer[18] & 0xFF );
_fifo_enqueue(u_KeyY.bytebuffer[17] & 0xFF );
_fifo_enqueue(u_KeyY.bytebuffer[16] & 0xFF );
_fifo_enqueue(u_KeyY.bytebuffer[15] & 0xFF );
_fifo_enqueue(u_KeyY.bytebuffer[14] & 0xFF );
_fifo_enqueue(u_KeyY.bytebuffer[13] & 0xFF );
_fifo_enqueue(u_KeyY.bytebuffer[12] & 0xFF );
_fifo_enqueue(u_KeyY.bytebuffer[11] & 0xFF );
_fifo_enqueue(u_KeyY.bytebuffer[10] & 0xFF );
_fifo_enqueue(u_KeyY.bytebuffer[9] & 0xFF );
_fifo_enqueue(u_KeyY.bytebuffer[8] & 0xFF );
_fifo_enqueue(u_KeyY.bytebuffer[7] & 0xFF );
_fifo_enqueue(u_KeyY.bytebuffer[6] & 0xFF );
_fifo_enqueue(u_KeyY.bytebuffer[5] & 0xFF );
_fifo_enqueue(u_KeyY.bytebuffer[4] & 0xFF );
_fifo_enqueue(u_KeyY.bytebuffer[3] & 0xFF );
_fifo_enqueue(u_KeyY.bytebuffer[2] & 0xFF );
_fifo_enqueue(u_KeyY.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_KeyY.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages HCISocketProxyImpl::SMP::SMPIdentityAddressInformation
void enqueue_HCISocketProxyImpl_send_SMP_SMPIdentityAddressInformation(struct HCISocketProxyImpl_Instance *_instance, uint16_t Handle, uint8_t AddressType, bdaddr_t Address){
fifo_lock();
if ( fifo_byte_available() > 13 ) {

_fifo_enqueue( (36 >> 8) & 0xFF );
_fifo_enqueue( 36 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_SMP >> 8) & 0xFF );
_fifo_enqueue( _instance->id_SMP & 0xFF );

// parameter Handle
union u_Handle_t {
uint16_t p;
byte bytebuffer[2];
} u_Handle;
u_Handle.p = Handle;
_fifo_enqueue(u_Handle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_Handle.bytebuffer[0] & 0xFF );

// parameter AddressType
union u_AddressType_t {
uint8_t p;
byte bytebuffer[1];
} u_AddressType;
u_AddressType.p = AddressType;
_fifo_enqueue(u_AddressType.bytebuffer[0] & 0xFF );

// parameter Address
union u_Address_t {
bdaddr_t p;
byte bytebuffer[6];
} u_Address;
u_Address.p = Address;
_fifo_enqueue(u_Address.bytebuffer[5] & 0xFF );
_fifo_enqueue(u_Address.bytebuffer[4] & 0xFF );
_fifo_enqueue(u_Address.bytebuffer[3] & 0xFF );
_fifo_enqueue(u_Address.bytebuffer[2] & 0xFF );
_fifo_enqueue(u_Address.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_Address.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages HCISocketProxyImpl::SMP::SMPPairingRandom
void enqueue_HCISocketProxyImpl_send_SMP_SMPPairingRandom(struct HCISocketProxyImpl_Instance *_instance, uint16_t Handle, ble_random_number_t RandomValue){
fifo_lock();
if ( fifo_byte_available() > 22 ) {

_fifo_enqueue( (37 >> 8) & 0xFF );
_fifo_enqueue( 37 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_SMP >> 8) & 0xFF );
_fifo_enqueue( _instance->id_SMP & 0xFF );

// parameter Handle
union u_Handle_t {
uint16_t p;
byte bytebuffer[2];
} u_Handle;
u_Handle.p = Handle;
_fifo_enqueue(u_Handle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_Handle.bytebuffer[0] & 0xFF );

// parameter RandomValue
union u_RandomValue_t {
ble_random_number_t p;
byte bytebuffer[16];
} u_RandomValue;
u_RandomValue.p = RandomValue;
_fifo_enqueue(u_RandomValue.bytebuffer[15] & 0xFF );
_fifo_enqueue(u_RandomValue.bytebuffer[14] & 0xFF );
_fifo_enqueue(u_RandomValue.bytebuffer[13] & 0xFF );
_fifo_enqueue(u_RandomValue.bytebuffer[12] & 0xFF );
_fifo_enqueue(u_RandomValue.bytebuffer[11] & 0xFF );
_fifo_enqueue(u_RandomValue.bytebuffer[10] & 0xFF );
_fifo_enqueue(u_RandomValue.bytebuffer[9] & 0xFF );
_fifo_enqueue(u_RandomValue.bytebuffer[8] & 0xFF );
_fifo_enqueue(u_RandomValue.bytebuffer[7] & 0xFF );
_fifo_enqueue(u_RandomValue.bytebuffer[6] & 0xFF );
_fifo_enqueue(u_RandomValue.bytebuffer[5] & 0xFF );
_fifo_enqueue(u_RandomValue.bytebuffer[4] & 0xFF );
_fifo_enqueue(u_RandomValue.bytebuffer[3] & 0xFF );
_fifo_enqueue(u_RandomValue.bytebuffer[2] & 0xFF );
_fifo_enqueue(u_RandomValue.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_RandomValue.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages HCISocketProxyImpl::SMP::SMPMasterIdentification
void enqueue_HCISocketProxyImpl_send_SMP_SMPMasterIdentification(struct HCISocketProxyImpl_Instance *_instance, uint16_t Handle, uint16_t EDIV, ble_random_part_t Rand){
fifo_lock();
if ( fifo_byte_available() > 16 ) {

_fifo_enqueue( (38 >> 8) & 0xFF );
_fifo_enqueue( 38 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_SMP >> 8) & 0xFF );
_fifo_enqueue( _instance->id_SMP & 0xFF );

// parameter Handle
union u_Handle_t {
uint16_t p;
byte bytebuffer[2];
} u_Handle;
u_Handle.p = Handle;
_fifo_enqueue(u_Handle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_Handle.bytebuffer[0] & 0xFF );

// parameter EDIV
union u_EDIV_t {
uint16_t p;
byte bytebuffer[2];
} u_EDIV;
u_EDIV.p = EDIV;
_fifo_enqueue(u_EDIV.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_EDIV.bytebuffer[0] & 0xFF );

// parameter Rand
union u_Rand_t {
ble_random_part_t p;
byte bytebuffer[8];
} u_Rand;
u_Rand.p = Rand;
_fifo_enqueue(u_Rand.bytebuffer[7] & 0xFF );
_fifo_enqueue(u_Rand.bytebuffer[6] & 0xFF );
_fifo_enqueue(u_Rand.bytebuffer[5] & 0xFF );
_fifo_enqueue(u_Rand.bytebuffer[4] & 0xFF );
_fifo_enqueue(u_Rand.bytebuffer[3] & 0xFF );
_fifo_enqueue(u_Rand.bytebuffer[2] & 0xFF );
_fifo_enqueue(u_Rand.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_Rand.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages HCISocketProxyImpl::SMP::SMPPairingResponse
void enqueue_HCISocketProxyImpl_send_SMP_SMPPairingResponse(struct HCISocketProxyImpl_Instance *_instance, uint16_t Handle, uint8_t IOCapability, uint8_t OOBDataPresent, uint8_t Bonding, uint8_t MITM, uint8_t SecureConnection, uint8_t Keypress, uint8_t MaximumEncryptionKeySize, uint8_t InitiatorKeyDistribution, uint8_t ResponderKeyDistribution){
fifo_lock();
if ( fifo_byte_available() > 15 ) {

_fifo_enqueue( (39 >> 8) & 0xFF );
_fifo_enqueue( 39 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_SMP >> 8) & 0xFF );
_fifo_enqueue( _instance->id_SMP & 0xFF );

// parameter Handle
union u_Handle_t {
uint16_t p;
byte bytebuffer[2];
} u_Handle;
u_Handle.p = Handle;
_fifo_enqueue(u_Handle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_Handle.bytebuffer[0] & 0xFF );

// parameter IOCapability
union u_IOCapability_t {
uint8_t p;
byte bytebuffer[1];
} u_IOCapability;
u_IOCapability.p = IOCapability;
_fifo_enqueue(u_IOCapability.bytebuffer[0] & 0xFF );

// parameter OOBDataPresent
union u_OOBDataPresent_t {
uint8_t p;
byte bytebuffer[1];
} u_OOBDataPresent;
u_OOBDataPresent.p = OOBDataPresent;
_fifo_enqueue(u_OOBDataPresent.bytebuffer[0] & 0xFF );

// parameter Bonding
union u_Bonding_t {
uint8_t p;
byte bytebuffer[1];
} u_Bonding;
u_Bonding.p = Bonding;
_fifo_enqueue(u_Bonding.bytebuffer[0] & 0xFF );

// parameter MITM
union u_MITM_t {
uint8_t p;
byte bytebuffer[1];
} u_MITM;
u_MITM.p = MITM;
_fifo_enqueue(u_MITM.bytebuffer[0] & 0xFF );

// parameter SecureConnection
union u_SecureConnection_t {
uint8_t p;
byte bytebuffer[1];
} u_SecureConnection;
u_SecureConnection.p = SecureConnection;
_fifo_enqueue(u_SecureConnection.bytebuffer[0] & 0xFF );

// parameter Keypress
union u_Keypress_t {
uint8_t p;
byte bytebuffer[1];
} u_Keypress;
u_Keypress.p = Keypress;
_fifo_enqueue(u_Keypress.bytebuffer[0] & 0xFF );

// parameter MaximumEncryptionKeySize
union u_MaximumEncryptionKeySize_t {
uint8_t p;
byte bytebuffer[1];
} u_MaximumEncryptionKeySize;
u_MaximumEncryptionKeySize.p = MaximumEncryptionKeySize;
_fifo_enqueue(u_MaximumEncryptionKeySize.bytebuffer[0] & 0xFF );

// parameter InitiatorKeyDistribution
union u_InitiatorKeyDistribution_t {
uint8_t p;
byte bytebuffer[1];
} u_InitiatorKeyDistribution;
u_InitiatorKeyDistribution.p = InitiatorKeyDistribution;
_fifo_enqueue(u_InitiatorKeyDistribution.bytebuffer[0] & 0xFF );

// parameter ResponderKeyDistribution
union u_ResponderKeyDistribution_t {
uint8_t p;
byte bytebuffer[1];
} u_ResponderKeyDistribution;
u_ResponderKeyDistribution.p = ResponderKeyDistribution;
_fifo_enqueue(u_ResponderKeyDistribution.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages HCISocketProxyImpl::SMP::SMPIdentityInformation
void enqueue_HCISocketProxyImpl_send_SMP_SMPIdentityInformation(struct HCISocketProxyImpl_Instance *_instance, uint16_t Handle, ble_random_number_t IdentityResolvingKey){
fifo_lock();
if ( fifo_byte_available() > 22 ) {

_fifo_enqueue( (40 >> 8) & 0xFF );
_fifo_enqueue( 40 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_SMP >> 8) & 0xFF );
_fifo_enqueue( _instance->id_SMP & 0xFF );

// parameter Handle
union u_Handle_t {
uint16_t p;
byte bytebuffer[2];
} u_Handle;
u_Handle.p = Handle;
_fifo_enqueue(u_Handle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_Handle.bytebuffer[0] & 0xFF );

// parameter IdentityResolvingKey
union u_IdentityResolvingKey_t {
ble_random_number_t p;
byte bytebuffer[16];
} u_IdentityResolvingKey;
u_IdentityResolvingKey.p = IdentityResolvingKey;
_fifo_enqueue(u_IdentityResolvingKey.bytebuffer[15] & 0xFF );
_fifo_enqueue(u_IdentityResolvingKey.bytebuffer[14] & 0xFF );
_fifo_enqueue(u_IdentityResolvingKey.bytebuffer[13] & 0xFF );
_fifo_enqueue(u_IdentityResolvingKey.bytebuffer[12] & 0xFF );
_fifo_enqueue(u_IdentityResolvingKey.bytebuffer[11] & 0xFF );
_fifo_enqueue(u_IdentityResolvingKey.bytebuffer[10] & 0xFF );
_fifo_enqueue(u_IdentityResolvingKey.bytebuffer[9] & 0xFF );
_fifo_enqueue(u_IdentityResolvingKey.bytebuffer[8] & 0xFF );
_fifo_enqueue(u_IdentityResolvingKey.bytebuffer[7] & 0xFF );
_fifo_enqueue(u_IdentityResolvingKey.bytebuffer[6] & 0xFF );
_fifo_enqueue(u_IdentityResolvingKey.bytebuffer[5] & 0xFF );
_fifo_enqueue(u_IdentityResolvingKey.bytebuffer[4] & 0xFF );
_fifo_enqueue(u_IdentityResolvingKey.bytebuffer[3] & 0xFF );
_fifo_enqueue(u_IdentityResolvingKey.bytebuffer[2] & 0xFF );
_fifo_enqueue(u_IdentityResolvingKey.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_IdentityResolvingKey.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages HCISocketProxyImpl::SMP::SMPKeypressNotification
void enqueue_HCISocketProxyImpl_send_SMP_SMPKeypressNotification(struct HCISocketProxyImpl_Instance *_instance, uint16_t Handle, uint8_t Type){
fifo_lock();
if ( fifo_byte_available() > 7 ) {

_fifo_enqueue( (41 >> 8) & 0xFF );
_fifo_enqueue( 41 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_SMP >> 8) & 0xFF );
_fifo_enqueue( _instance->id_SMP & 0xFF );

// parameter Handle
union u_Handle_t {
uint16_t p;
byte bytebuffer[2];
} u_Handle;
u_Handle.p = Handle;
_fifo_enqueue(u_Handle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_Handle.bytebuffer[0] & 0xFF );

// parameter Type
union u_Type_t {
uint8_t p;
byte bytebuffer[1];
} u_Type;
u_Type.p = Type;
_fifo_enqueue(u_Type.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages HCISocketProxyImpl::SMP::SMPSigningInformation
void enqueue_HCISocketProxyImpl_send_SMP_SMPSigningInformation(struct HCISocketProxyImpl_Instance *_instance, uint16_t Handle, ble_random_number_t SignatureKey){
fifo_lock();
if ( fifo_byte_available() > 22 ) {

_fifo_enqueue( (42 >> 8) & 0xFF );
_fifo_enqueue( 42 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_SMP >> 8) & 0xFF );
_fifo_enqueue( _instance->id_SMP & 0xFF );

// parameter Handle
union u_Handle_t {
uint16_t p;
byte bytebuffer[2];
} u_Handle;
u_Handle.p = Handle;
_fifo_enqueue(u_Handle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_Handle.bytebuffer[0] & 0xFF );

// parameter SignatureKey
union u_SignatureKey_t {
ble_random_number_t p;
byte bytebuffer[16];
} u_SignatureKey;
u_SignatureKey.p = SignatureKey;
_fifo_enqueue(u_SignatureKey.bytebuffer[15] & 0xFF );
_fifo_enqueue(u_SignatureKey.bytebuffer[14] & 0xFF );
_fifo_enqueue(u_SignatureKey.bytebuffer[13] & 0xFF );
_fifo_enqueue(u_SignatureKey.bytebuffer[12] & 0xFF );
_fifo_enqueue(u_SignatureKey.bytebuffer[11] & 0xFF );
_fifo_enqueue(u_SignatureKey.bytebuffer[10] & 0xFF );
_fifo_enqueue(u_SignatureKey.bytebuffer[9] & 0xFF );
_fifo_enqueue(u_SignatureKey.bytebuffer[8] & 0xFF );
_fifo_enqueue(u_SignatureKey.bytebuffer[7] & 0xFF );
_fifo_enqueue(u_SignatureKey.bytebuffer[6] & 0xFF );
_fifo_enqueue(u_SignatureKey.bytebuffer[5] & 0xFF );
_fifo_enqueue(u_SignatureKey.bytebuffer[4] & 0xFF );
_fifo_enqueue(u_SignatureKey.bytebuffer[3] & 0xFF );
_fifo_enqueue(u_SignatureKey.bytebuffer[2] & 0xFF );
_fifo_enqueue(u_SignatureKey.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_SignatureKey.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages HCISocketProxyImpl::ATT::ATTReadByTypeError
void enqueue_HCISocketProxyImpl_send_ATT_ATTReadByTypeError(struct HCISocketProxyImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error){
fifo_lock();
if ( fifo_byte_available() > 9 ) {

_fifo_enqueue( (43 >> 8) & 0xFF );
_fifo_enqueue( 43 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_ATT >> 8) & 0xFF );
_fifo_enqueue( _instance->id_ATT & 0xFF );

// parameter ConnectionHandle
union u_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ConnectionHandle;
u_ConnectionHandle.p = ConnectionHandle;
_fifo_enqueue(u_ConnectionHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_ConnectionHandle.bytebuffer[0] & 0xFF );

// parameter AttributeHandle
union u_AttributeHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_AttributeHandle;
u_AttributeHandle.p = AttributeHandle;
_fifo_enqueue(u_AttributeHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_AttributeHandle.bytebuffer[0] & 0xFF );

// parameter Error
union u_Error_t {
uint8_t p;
byte bytebuffer[1];
} u_Error;
u_Error.p = Error;
_fifo_enqueue(u_Error.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages HCISocketProxyImpl::ATT::ATTReadByGroupTypeError
void enqueue_HCISocketProxyImpl_send_ATT_ATTReadByGroupTypeError(struct HCISocketProxyImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error){
fifo_lock();
if ( fifo_byte_available() > 9 ) {

_fifo_enqueue( (44 >> 8) & 0xFF );
_fifo_enqueue( 44 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_ATT >> 8) & 0xFF );
_fifo_enqueue( _instance->id_ATT & 0xFF );

// parameter ConnectionHandle
union u_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ConnectionHandle;
u_ConnectionHandle.p = ConnectionHandle;
_fifo_enqueue(u_ConnectionHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_ConnectionHandle.bytebuffer[0] & 0xFF );

// parameter AttributeHandle
union u_AttributeHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_AttributeHandle;
u_AttributeHandle.p = AttributeHandle;
_fifo_enqueue(u_AttributeHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_AttributeHandle.bytebuffer[0] & 0xFF );

// parameter Error
union u_Error_t {
uint8_t p;
byte bytebuffer[1];
} u_Error;
u_Error.p = Error;
_fifo_enqueue(u_Error.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages HCISocketProxyImpl::ATT::ATTWriteResponse
void enqueue_HCISocketProxyImpl_send_ATT_ATTWriteResponse(struct HCISocketProxyImpl_Instance *_instance, uint16_t ConnectionHandle){
fifo_lock();
if ( fifo_byte_available() > 6 ) {

_fifo_enqueue( (45 >> 8) & 0xFF );
_fifo_enqueue( 45 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_ATT >> 8) & 0xFF );
_fifo_enqueue( _instance->id_ATT & 0xFF );

// parameter ConnectionHandle
union u_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ConnectionHandle;
u_ConnectionHandle.p = ConnectionHandle;
_fifo_enqueue(u_ConnectionHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_ConnectionHandle.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages HCISocketProxyImpl::ATT::ATTReadRequest
void enqueue_HCISocketProxyImpl_send_ATT_ATTReadRequest(struct HCISocketProxyImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle){
fifo_lock();
if ( fifo_byte_available() > 8 ) {

_fifo_enqueue( (46 >> 8) & 0xFF );
_fifo_enqueue( 46 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_ATT >> 8) & 0xFF );
_fifo_enqueue( _instance->id_ATT & 0xFF );

// parameter ConnectionHandle
union u_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ConnectionHandle;
u_ConnectionHandle.p = ConnectionHandle;
_fifo_enqueue(u_ConnectionHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_ConnectionHandle.bytebuffer[0] & 0xFF );

// parameter AttributeHandle
union u_AttributeHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_AttributeHandle;
u_AttributeHandle.p = AttributeHandle;
_fifo_enqueue(u_AttributeHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_AttributeHandle.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages HCISocketProxyImpl::ATT::ATTFindInformationError
void enqueue_HCISocketProxyImpl_send_ATT_ATTFindInformationError(struct HCISocketProxyImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error){
fifo_lock();
if ( fifo_byte_available() > 9 ) {

_fifo_enqueue( (47 >> 8) & 0xFF );
_fifo_enqueue( 47 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_ATT >> 8) & 0xFF );
_fifo_enqueue( _instance->id_ATT & 0xFF );

// parameter ConnectionHandle
union u_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ConnectionHandle;
u_ConnectionHandle.p = ConnectionHandle;
_fifo_enqueue(u_ConnectionHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_ConnectionHandle.bytebuffer[0] & 0xFF );

// parameter AttributeHandle
union u_AttributeHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_AttributeHandle;
u_AttributeHandle.p = AttributeHandle;
_fifo_enqueue(u_AttributeHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_AttributeHandle.bytebuffer[0] & 0xFF );

// parameter Error
union u_Error_t {
uint8_t p;
byte bytebuffer[1];
} u_Error;
u_Error.p = Error;
_fifo_enqueue(u_Error.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages HCISocketProxyImpl::ATT::ATTReadByTypeRequest
void enqueue_HCISocketProxyImpl_send_ATT_ATTReadByTypeRequest(struct HCISocketProxyImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t StartingHandle, uint16_t EndingHandle, ble_uuid_t AttributeType){
fifo_lock();
if ( fifo_byte_available() > 26 ) {

_fifo_enqueue( (48 >> 8) & 0xFF );
_fifo_enqueue( 48 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_ATT >> 8) & 0xFF );
_fifo_enqueue( _instance->id_ATT & 0xFF );

// parameter ConnectionHandle
union u_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ConnectionHandle;
u_ConnectionHandle.p = ConnectionHandle;
_fifo_enqueue(u_ConnectionHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_ConnectionHandle.bytebuffer[0] & 0xFF );

// parameter StartingHandle
union u_StartingHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_StartingHandle;
u_StartingHandle.p = StartingHandle;
_fifo_enqueue(u_StartingHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_StartingHandle.bytebuffer[0] & 0xFF );

// parameter EndingHandle
union u_EndingHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_EndingHandle;
u_EndingHandle.p = EndingHandle;
_fifo_enqueue(u_EndingHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_EndingHandle.bytebuffer[0] & 0xFF );

// parameter AttributeType
union u_AttributeType_t {
ble_uuid_t p;
byte bytebuffer[16];
} u_AttributeType;
u_AttributeType.p = AttributeType;
_fifo_enqueue(u_AttributeType.bytebuffer[15] & 0xFF );
_fifo_enqueue(u_AttributeType.bytebuffer[14] & 0xFF );
_fifo_enqueue(u_AttributeType.bytebuffer[13] & 0xFF );
_fifo_enqueue(u_AttributeType.bytebuffer[12] & 0xFF );
_fifo_enqueue(u_AttributeType.bytebuffer[11] & 0xFF );
_fifo_enqueue(u_AttributeType.bytebuffer[10] & 0xFF );
_fifo_enqueue(u_AttributeType.bytebuffer[9] & 0xFF );
_fifo_enqueue(u_AttributeType.bytebuffer[8] & 0xFF );
_fifo_enqueue(u_AttributeType.bytebuffer[7] & 0xFF );
_fifo_enqueue(u_AttributeType.bytebuffer[6] & 0xFF );
_fifo_enqueue(u_AttributeType.bytebuffer[5] & 0xFF );
_fifo_enqueue(u_AttributeType.bytebuffer[4] & 0xFF );
_fifo_enqueue(u_AttributeType.bytebuffer[3] & 0xFF );
_fifo_enqueue(u_AttributeType.bytebuffer[2] & 0xFF );
_fifo_enqueue(u_AttributeType.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_AttributeType.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages HCISocketProxyImpl::ATT::ATTHandleValueConfirmation
void enqueue_HCISocketProxyImpl_send_ATT_ATTHandleValueConfirmation(struct HCISocketProxyImpl_Instance *_instance, uint16_t ConnectionHandle){
fifo_lock();
if ( fifo_byte_available() > 6 ) {

_fifo_enqueue( (49 >> 8) & 0xFF );
_fifo_enqueue( 49 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_ATT >> 8) & 0xFF );
_fifo_enqueue( _instance->id_ATT & 0xFF );

// parameter ConnectionHandle
union u_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ConnectionHandle;
u_ConnectionHandle.p = ConnectionHandle;
_fifo_enqueue(u_ConnectionHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_ConnectionHandle.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages HCISocketProxyImpl::ATT::ATTReadError
void enqueue_HCISocketProxyImpl_send_ATT_ATTReadError(struct HCISocketProxyImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error){
fifo_lock();
if ( fifo_byte_available() > 9 ) {

_fifo_enqueue( (50 >> 8) & 0xFF );
_fifo_enqueue( 50 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_ATT >> 8) & 0xFF );
_fifo_enqueue( _instance->id_ATT & 0xFF );

// parameter ConnectionHandle
union u_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ConnectionHandle;
u_ConnectionHandle.p = ConnectionHandle;
_fifo_enqueue(u_ConnectionHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_ConnectionHandle.bytebuffer[0] & 0xFF );

// parameter AttributeHandle
union u_AttributeHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_AttributeHandle;
u_AttributeHandle.p = AttributeHandle;
_fifo_enqueue(u_AttributeHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_AttributeHandle.bytebuffer[0] & 0xFF );

// parameter Error
union u_Error_t {
uint8_t p;
byte bytebuffer[1];
} u_Error;
u_Error.p = Error;
_fifo_enqueue(u_Error.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages HCISocketProxyImpl::ATT::ATTWriteRequest
void enqueue_HCISocketProxyImpl_send_ATT_ATTWriteRequest(struct HCISocketProxyImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, ble_gatt_data_t AttributeValue){
fifo_lock();
if ( fifo_byte_available() > 32 ) {

_fifo_enqueue( (51 >> 8) & 0xFF );
_fifo_enqueue( 51 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_ATT >> 8) & 0xFF );
_fifo_enqueue( _instance->id_ATT & 0xFF );

// parameter ConnectionHandle
union u_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ConnectionHandle;
u_ConnectionHandle.p = ConnectionHandle;
_fifo_enqueue(u_ConnectionHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_ConnectionHandle.bytebuffer[0] & 0xFF );

// parameter AttributeHandle
union u_AttributeHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_AttributeHandle;
u_AttributeHandle.p = AttributeHandle;
_fifo_enqueue(u_AttributeHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_AttributeHandle.bytebuffer[0] & 0xFF );

// parameter AttributeValue
union u_AttributeValue_t {
ble_gatt_data_t p;
byte bytebuffer[24];
} u_AttributeValue;
u_AttributeValue.p = AttributeValue;
_fifo_enqueue(u_AttributeValue.bytebuffer[23] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[22] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[21] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[20] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[19] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[18] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[17] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[16] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[15] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[14] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[13] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[12] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[11] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[10] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[9] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[8] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[7] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[6] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[5] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[4] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[3] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[2] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages HCISocketProxyImpl::ATT::ATTWriteCommand
void enqueue_HCISocketProxyImpl_send_ATT_ATTWriteCommand(struct HCISocketProxyImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, ble_gatt_data_t AttributeValue){
fifo_lock();
if ( fifo_byte_available() > 32 ) {

_fifo_enqueue( (52 >> 8) & 0xFF );
_fifo_enqueue( 52 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_ATT >> 8) & 0xFF );
_fifo_enqueue( _instance->id_ATT & 0xFF );

// parameter ConnectionHandle
union u_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ConnectionHandle;
u_ConnectionHandle.p = ConnectionHandle;
_fifo_enqueue(u_ConnectionHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_ConnectionHandle.bytebuffer[0] & 0xFF );

// parameter AttributeHandle
union u_AttributeHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_AttributeHandle;
u_AttributeHandle.p = AttributeHandle;
_fifo_enqueue(u_AttributeHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_AttributeHandle.bytebuffer[0] & 0xFF );

// parameter AttributeValue
union u_AttributeValue_t {
ble_gatt_data_t p;
byte bytebuffer[24];
} u_AttributeValue;
u_AttributeValue.p = AttributeValue;
_fifo_enqueue(u_AttributeValue.bytebuffer[23] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[22] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[21] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[20] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[19] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[18] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[17] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[16] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[15] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[14] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[13] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[12] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[11] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[10] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[9] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[8] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[7] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[6] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[5] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[4] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[3] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[2] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages HCISocketProxyImpl::ATT::ATTWriteError
void enqueue_HCISocketProxyImpl_send_ATT_ATTWriteError(struct HCISocketProxyImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error){
fifo_lock();
if ( fifo_byte_available() > 9 ) {

_fifo_enqueue( (53 >> 8) & 0xFF );
_fifo_enqueue( 53 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_ATT >> 8) & 0xFF );
_fifo_enqueue( _instance->id_ATT & 0xFF );

// parameter ConnectionHandle
union u_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ConnectionHandle;
u_ConnectionHandle.p = ConnectionHandle;
_fifo_enqueue(u_ConnectionHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_ConnectionHandle.bytebuffer[0] & 0xFF );

// parameter AttributeHandle
union u_AttributeHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_AttributeHandle;
u_AttributeHandle.p = AttributeHandle;
_fifo_enqueue(u_AttributeHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_AttributeHandle.bytebuffer[0] & 0xFF );

// parameter Error
union u_Error_t {
uint8_t p;
byte bytebuffer[1];
} u_Error;
u_Error.p = Error;
_fifo_enqueue(u_Error.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages HCISocketProxyImpl::ATT::ATTHandleValueNotification
void enqueue_HCISocketProxyImpl_send_ATT_ATTHandleValueNotification(struct HCISocketProxyImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, ble_gatt_data_t AttributeValue){
fifo_lock();
if ( fifo_byte_available() > 32 ) {

_fifo_enqueue( (54 >> 8) & 0xFF );
_fifo_enqueue( 54 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_ATT >> 8) & 0xFF );
_fifo_enqueue( _instance->id_ATT & 0xFF );

// parameter ConnectionHandle
union u_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ConnectionHandle;
u_ConnectionHandle.p = ConnectionHandle;
_fifo_enqueue(u_ConnectionHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_ConnectionHandle.bytebuffer[0] & 0xFF );

// parameter AttributeHandle
union u_AttributeHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_AttributeHandle;
u_AttributeHandle.p = AttributeHandle;
_fifo_enqueue(u_AttributeHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_AttributeHandle.bytebuffer[0] & 0xFF );

// parameter AttributeValue
union u_AttributeValue_t {
ble_gatt_data_t p;
byte bytebuffer[24];
} u_AttributeValue;
u_AttributeValue.p = AttributeValue;
_fifo_enqueue(u_AttributeValue.bytebuffer[23] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[22] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[21] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[20] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[19] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[18] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[17] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[16] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[15] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[14] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[13] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[12] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[11] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[10] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[9] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[8] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[7] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[6] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[5] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[4] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[3] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[2] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages HCISocketProxyImpl::ATT::ATTFindInformationResponse
void enqueue_HCISocketProxyImpl_send_ATT_ATTFindInformationResponse(struct HCISocketProxyImpl_Instance *_instance, uint16_t ConnectionHandle, uint8_t Format, ble_gatt_data_t InformationData){
fifo_lock();
if ( fifo_byte_available() > 31 ) {

_fifo_enqueue( (55 >> 8) & 0xFF );
_fifo_enqueue( 55 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_ATT >> 8) & 0xFF );
_fifo_enqueue( _instance->id_ATT & 0xFF );

// parameter ConnectionHandle
union u_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ConnectionHandle;
u_ConnectionHandle.p = ConnectionHandle;
_fifo_enqueue(u_ConnectionHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_ConnectionHandle.bytebuffer[0] & 0xFF );

// parameter Format
union u_Format_t {
uint8_t p;
byte bytebuffer[1];
} u_Format;
u_Format.p = Format;
_fifo_enqueue(u_Format.bytebuffer[0] & 0xFF );

// parameter InformationData
union u_InformationData_t {
ble_gatt_data_t p;
byte bytebuffer[24];
} u_InformationData;
u_InformationData.p = InformationData;
_fifo_enqueue(u_InformationData.bytebuffer[23] & 0xFF );
_fifo_enqueue(u_InformationData.bytebuffer[22] & 0xFF );
_fifo_enqueue(u_InformationData.bytebuffer[21] & 0xFF );
_fifo_enqueue(u_InformationData.bytebuffer[20] & 0xFF );
_fifo_enqueue(u_InformationData.bytebuffer[19] & 0xFF );
_fifo_enqueue(u_InformationData.bytebuffer[18] & 0xFF );
_fifo_enqueue(u_InformationData.bytebuffer[17] & 0xFF );
_fifo_enqueue(u_InformationData.bytebuffer[16] & 0xFF );
_fifo_enqueue(u_InformationData.bytebuffer[15] & 0xFF );
_fifo_enqueue(u_InformationData.bytebuffer[14] & 0xFF );
_fifo_enqueue(u_InformationData.bytebuffer[13] & 0xFF );
_fifo_enqueue(u_InformationData.bytebuffer[12] & 0xFF );
_fifo_enqueue(u_InformationData.bytebuffer[11] & 0xFF );
_fifo_enqueue(u_InformationData.bytebuffer[10] & 0xFF );
_fifo_enqueue(u_InformationData.bytebuffer[9] & 0xFF );
_fifo_enqueue(u_InformationData.bytebuffer[8] & 0xFF );
_fifo_enqueue(u_InformationData.bytebuffer[7] & 0xFF );
_fifo_enqueue(u_InformationData.bytebuffer[6] & 0xFF );
_fifo_enqueue(u_InformationData.bytebuffer[5] & 0xFF );
_fifo_enqueue(u_InformationData.bytebuffer[4] & 0xFF );
_fifo_enqueue(u_InformationData.bytebuffer[3] & 0xFF );
_fifo_enqueue(u_InformationData.bytebuffer[2] & 0xFF );
_fifo_enqueue(u_InformationData.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_InformationData.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages HCISocketProxyImpl::ATT::ATTReadByGroupTypeResponse
void enqueue_HCISocketProxyImpl_send_ATT_ATTReadByGroupTypeResponse(struct HCISocketProxyImpl_Instance *_instance, uint16_t ConnectionHandle, uint8_t Length, ble_gatt_data_t AttributeDataList){
fifo_lock();
if ( fifo_byte_available() > 31 ) {

_fifo_enqueue( (56 >> 8) & 0xFF );
_fifo_enqueue( 56 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_ATT >> 8) & 0xFF );
_fifo_enqueue( _instance->id_ATT & 0xFF );

// parameter ConnectionHandle
union u_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ConnectionHandle;
u_ConnectionHandle.p = ConnectionHandle;
_fifo_enqueue(u_ConnectionHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_ConnectionHandle.bytebuffer[0] & 0xFF );

// parameter Length
union u_Length_t {
uint8_t p;
byte bytebuffer[1];
} u_Length;
u_Length.p = Length;
_fifo_enqueue(u_Length.bytebuffer[0] & 0xFF );

// parameter AttributeDataList
union u_AttributeDataList_t {
ble_gatt_data_t p;
byte bytebuffer[24];
} u_AttributeDataList;
u_AttributeDataList.p = AttributeDataList;
_fifo_enqueue(u_AttributeDataList.bytebuffer[23] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[22] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[21] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[20] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[19] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[18] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[17] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[16] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[15] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[14] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[13] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[12] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[11] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[10] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[9] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[8] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[7] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[6] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[5] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[4] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[3] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[2] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages HCISocketProxyImpl::ATT::ATTReadByTypeResponse
void enqueue_HCISocketProxyImpl_send_ATT_ATTReadByTypeResponse(struct HCISocketProxyImpl_Instance *_instance, uint16_t ConnectionHandle, uint8_t Length, ble_gatt_data_t AttributeDataList){
fifo_lock();
if ( fifo_byte_available() > 31 ) {

_fifo_enqueue( (57 >> 8) & 0xFF );
_fifo_enqueue( 57 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_ATT >> 8) & 0xFF );
_fifo_enqueue( _instance->id_ATT & 0xFF );

// parameter ConnectionHandle
union u_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ConnectionHandle;
u_ConnectionHandle.p = ConnectionHandle;
_fifo_enqueue(u_ConnectionHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_ConnectionHandle.bytebuffer[0] & 0xFF );

// parameter Length
union u_Length_t {
uint8_t p;
byte bytebuffer[1];
} u_Length;
u_Length.p = Length;
_fifo_enqueue(u_Length.bytebuffer[0] & 0xFF );

// parameter AttributeDataList
union u_AttributeDataList_t {
ble_gatt_data_t p;
byte bytebuffer[24];
} u_AttributeDataList;
u_AttributeDataList.p = AttributeDataList;
_fifo_enqueue(u_AttributeDataList.bytebuffer[23] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[22] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[21] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[20] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[19] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[18] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[17] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[16] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[15] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[14] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[13] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[12] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[11] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[10] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[9] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[8] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[7] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[6] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[5] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[4] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[3] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[2] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_AttributeDataList.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages HCISocketProxyImpl::ATT::ATTFindInformationRequest
void enqueue_HCISocketProxyImpl_send_ATT_ATTFindInformationRequest(struct HCISocketProxyImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t StartingHandle, uint16_t EndingHandle){
fifo_lock();
if ( fifo_byte_available() > 10 ) {

_fifo_enqueue( (58 >> 8) & 0xFF );
_fifo_enqueue( 58 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_ATT >> 8) & 0xFF );
_fifo_enqueue( _instance->id_ATT & 0xFF );

// parameter ConnectionHandle
union u_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ConnectionHandle;
u_ConnectionHandle.p = ConnectionHandle;
_fifo_enqueue(u_ConnectionHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_ConnectionHandle.bytebuffer[0] & 0xFF );

// parameter StartingHandle
union u_StartingHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_StartingHandle;
u_StartingHandle.p = StartingHandle;
_fifo_enqueue(u_StartingHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_StartingHandle.bytebuffer[0] & 0xFF );

// parameter EndingHandle
union u_EndingHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_EndingHandle;
u_EndingHandle.p = EndingHandle;
_fifo_enqueue(u_EndingHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_EndingHandle.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages HCISocketProxyImpl::ATT::ATTReadResponse
void enqueue_HCISocketProxyImpl_send_ATT_ATTReadResponse(struct HCISocketProxyImpl_Instance *_instance, uint16_t ConnectionHandle, ble_gatt_data_t AttributeValue){
fifo_lock();
if ( fifo_byte_available() > 30 ) {

_fifo_enqueue( (59 >> 8) & 0xFF );
_fifo_enqueue( 59 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_ATT >> 8) & 0xFF );
_fifo_enqueue( _instance->id_ATT & 0xFF );

// parameter ConnectionHandle
union u_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ConnectionHandle;
u_ConnectionHandle.p = ConnectionHandle;
_fifo_enqueue(u_ConnectionHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_ConnectionHandle.bytebuffer[0] & 0xFF );

// parameter AttributeValue
union u_AttributeValue_t {
ble_gatt_data_t p;
byte bytebuffer[24];
} u_AttributeValue;
u_AttributeValue.p = AttributeValue;
_fifo_enqueue(u_AttributeValue.bytebuffer[23] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[22] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[21] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[20] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[19] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[18] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[17] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[16] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[15] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[14] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[13] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[12] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[11] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[10] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[9] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[8] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[7] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[6] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[5] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[4] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[3] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[2] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages HCISocketProxyImpl::ATT::ATTReadByGroupTypeRequest
void enqueue_HCISocketProxyImpl_send_ATT_ATTReadByGroupTypeRequest(struct HCISocketProxyImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t StartingHandle, uint16_t EndingHandle, ble_uuid_t AttributeGroupType){
fifo_lock();
if ( fifo_byte_available() > 26 ) {

_fifo_enqueue( (60 >> 8) & 0xFF );
_fifo_enqueue( 60 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_ATT >> 8) & 0xFF );
_fifo_enqueue( _instance->id_ATT & 0xFF );

// parameter ConnectionHandle
union u_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ConnectionHandle;
u_ConnectionHandle.p = ConnectionHandle;
_fifo_enqueue(u_ConnectionHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_ConnectionHandle.bytebuffer[0] & 0xFF );

// parameter StartingHandle
union u_StartingHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_StartingHandle;
u_StartingHandle.p = StartingHandle;
_fifo_enqueue(u_StartingHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_StartingHandle.bytebuffer[0] & 0xFF );

// parameter EndingHandle
union u_EndingHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_EndingHandle;
u_EndingHandle.p = EndingHandle;
_fifo_enqueue(u_EndingHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_EndingHandle.bytebuffer[0] & 0xFF );

// parameter AttributeGroupType
union u_AttributeGroupType_t {
ble_uuid_t p;
byte bytebuffer[16];
} u_AttributeGroupType;
u_AttributeGroupType.p = AttributeGroupType;
_fifo_enqueue(u_AttributeGroupType.bytebuffer[15] & 0xFF );
_fifo_enqueue(u_AttributeGroupType.bytebuffer[14] & 0xFF );
_fifo_enqueue(u_AttributeGroupType.bytebuffer[13] & 0xFF );
_fifo_enqueue(u_AttributeGroupType.bytebuffer[12] & 0xFF );
_fifo_enqueue(u_AttributeGroupType.bytebuffer[11] & 0xFF );
_fifo_enqueue(u_AttributeGroupType.bytebuffer[10] & 0xFF );
_fifo_enqueue(u_AttributeGroupType.bytebuffer[9] & 0xFF );
_fifo_enqueue(u_AttributeGroupType.bytebuffer[8] & 0xFF );
_fifo_enqueue(u_AttributeGroupType.bytebuffer[7] & 0xFF );
_fifo_enqueue(u_AttributeGroupType.bytebuffer[6] & 0xFF );
_fifo_enqueue(u_AttributeGroupType.bytebuffer[5] & 0xFF );
_fifo_enqueue(u_AttributeGroupType.bytebuffer[4] & 0xFF );
_fifo_enqueue(u_AttributeGroupType.bytebuffer[3] & 0xFF );
_fifo_enqueue(u_AttributeGroupType.bytebuffer[2] & 0xFF );
_fifo_enqueue(u_AttributeGroupType.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_AttributeGroupType.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}
// Enqueue of messages HCISocketProxyImpl::ATT::ATTHandleValueIndication
void enqueue_HCISocketProxyImpl_send_ATT_ATTHandleValueIndication(struct HCISocketProxyImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, ble_gatt_data_t AttributeValue){
fifo_lock();
if ( fifo_byte_available() > 32 ) {

_fifo_enqueue( (61 >> 8) & 0xFF );
_fifo_enqueue( 61 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_ATT >> 8) & 0xFF );
_fifo_enqueue( _instance->id_ATT & 0xFF );

// parameter ConnectionHandle
union u_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ConnectionHandle;
u_ConnectionHandle.p = ConnectionHandle;
_fifo_enqueue(u_ConnectionHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_ConnectionHandle.bytebuffer[0] & 0xFF );

// parameter AttributeHandle
union u_AttributeHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_AttributeHandle;
u_AttributeHandle.p = AttributeHandle;
_fifo_enqueue(u_AttributeHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_AttributeHandle.bytebuffer[0] & 0xFF );

// parameter AttributeValue
union u_AttributeValue_t {
ble_gatt_data_t p;
byte bytebuffer[24];
} u_AttributeValue;
u_AttributeValue.p = AttributeValue;
_fifo_enqueue(u_AttributeValue.bytebuffer[23] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[22] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[21] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[20] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[19] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[18] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[17] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[16] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[15] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[14] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[13] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[12] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[11] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[10] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[9] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[8] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[7] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[6] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[5] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[4] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[3] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[2] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[1] & 0xFF );
_fifo_enqueue(u_AttributeValue.bytebuffer[0] & 0xFF );
}
fifo_unlock_and_notify();
}


//New dispatcher for messages
void dispatch_SMPPairingRequest(uint16_t sender, uint16_t param_Handle, uint8_t param_IOCapability, uint8_t param_OOBDataPresent, uint8_t param_Bonding, uint8_t param_MITM, uint8_t param_SecureConnection, uint8_t param_Keypress, uint8_t param_MaximumEncryptionKeySize, uint8_t param_InitiatorKeyDistribution, uint8_t param_ResponderKeyDistribution) {
if (sender == hci_var.id_SMP) {

}
if (sender == scanner_var.id_SMP) {
HCISocketProxyImpl_handle_SMP_SMPPairingRequest(&hci_var, param_Handle, param_IOCapability, param_OOBDataPresent, param_Bonding, param_MITM, param_SecureConnection, param_Keypress, param_MaximumEncryptionKeySize, param_InitiatorKeyDistribution, param_ResponderKeyDistribution);

}
if (sender == initialiser_var.id_SMP) {
HCISocketProxyImpl_handle_SMP_SMPPairingRequest(&hci_var, param_Handle, param_IOCapability, param_OOBDataPresent, param_Bonding, param_MITM, param_SecureConnection, param_Keypress, param_MaximumEncryptionKeySize, param_InitiatorKeyDistribution, param_ResponderKeyDistribution);

}
if (sender == connecter_var.id_SMP) {
HCISocketProxyImpl_handle_SMP_SMPPairingRequest(&hci_var, param_Handle, param_IOCapability, param_OOBDataPresent, param_Bonding, param_MITM, param_SecureConnection, param_Keypress, param_MaximumEncryptionKeySize, param_InitiatorKeyDistribution, param_ResponderKeyDistribution);

}

}


//New dispatcher for messages
void dispatch_LECreateConnectionCancelCompleted(uint16_t sender, uint8_t param_NumberAllowedCommandPackets, uint8_t param_Status) {
if (sender == hci_var.id_Events) {
BLEConnecterImpl_handle_HCIEvents_LECreateConnectionCancelCompleted(&connecter_var, param_NumberAllowedCommandPackets, param_Status);
BLEConnecterImpl_handle_HCIEvents_LECreateConnectionCancelCompleted(&notifierconnecter_var, param_NumberAllowedCommandPackets, param_Status);

}

}


//New dispatcher for messages
void dispatch_SetLEAdvertisingData(uint16_t sender, uint8_t param_Length, ble_adv_data_t param_Data) {
if (sender == initialiser_var.id_HCICommands) {
HCISocketProxyImpl_handle_Commands_SetLEAdvertisingData(&hci_var, param_Length, param_Data);

}
if (sender == connecter_var.id_HCICommands) {
HCISocketProxyImpl_handle_Commands_SetLEAdvertisingData(&hci_var, param_Length, param_Data);

}
if (sender == notifierconnecter_var.id_HCICommands) {
HCISocketProxyImpl_handle_Commands_SetLEAdvertisingData(&hci_var, param_Length, param_Data);

}
if (sender == scanner_var.id_HCICommands) {
HCISocketProxyImpl_handle_Commands_SetLEAdvertisingData(&hci_var, param_Length, param_Data);

}

}


//New dispatcher for messages
void dispatch_LECreateConnectionStatus(uint16_t sender, uint8_t param_NumberAllowedCommandPackets, uint8_t param_Status) {
if (sender == hci_var.id_Events) {
BLEConnecterImpl_handle_HCIEvents_LECreateConnectionStatus(&connecter_var, param_NumberAllowedCommandPackets, param_Status);
BLEConnecterImpl_handle_HCIEvents_LECreateConnectionStatus(&notifierconnecter_var, param_NumberAllowedCommandPackets, param_Status);

}

}


//New dispatcher for messages
void dispatch_LECreateConnectionCancel(uint16_t sender) {
if (sender == initialiser_var.id_HCICommands) {
HCISocketProxyImpl_handle_Commands_LECreateConnectionCancel(&hci_var);

}
if (sender == connecter_var.id_HCICommands) {
HCISocketProxyImpl_handle_Commands_LECreateConnectionCancel(&hci_var);

}
if (sender == notifierconnecter_var.id_HCICommands) {
HCISocketProxyImpl_handle_Commands_LECreateConnectionCancel(&hci_var);

}
if (sender == scanner_var.id_HCICommands) {
HCISocketProxyImpl_handle_Commands_LECreateConnectionCancel(&hci_var);

}

}


//New dispatcher for messages
void dispatch_SMPPairingRandom(uint16_t sender, uint16_t param_Handle, ble_random_number_t param_RandomValue) {
if (sender == hci_var.id_SMP) {

}
if (sender == scanner_var.id_SMP) {
HCISocketProxyImpl_handle_SMP_SMPPairingRandom(&hci_var, param_Handle, param_RandomValue);

}
if (sender == initialiser_var.id_SMP) {
HCISocketProxyImpl_handle_SMP_SMPPairingRandom(&hci_var, param_Handle, param_RandomValue);

}
if (sender == connecter_var.id_SMP) {
HCISocketProxyImpl_handle_SMP_SMPPairingRandom(&hci_var, param_Handle, param_RandomValue);

}

}


//New dispatcher for messages
void dispatch_SetLocalName(uint16_t sender, change_local_name_cp param_Name) {
if (sender == initialiser_var.id_HCICommands) {

}
if (sender == connecter_var.id_HCICommands) {

}
if (sender == notifierconnecter_var.id_HCICommands) {

}
if (sender == scanner_var.id_HCICommands) {

}

}


//New dispatcher for messages
void dispatch_FinishedConnection(uint16_t sender) {
if (sender == bloodpressure_var.id_ANDUA651BLE) {
Main_handle_ANDUA651BLE_FinishedConnection(&main_var);

}
if (sender == weightscale_var.id_ANDUC352BLE) {
Main_handle_ANDUC352BLE_FinishedConnection(&main_var);

}

}


//New dispatcher for messages
void dispatch_EncryptionChanged(uint16_t sender, uint8_t param_Status, uint16_t param_ConnectionHandle, uint8_t param_Enabled) {
if (sender == hci_var.id_Events) {
BLEConnecterImpl_handle_HCIEvents_EncryptionChanged(&connecter_var, param_Status, param_ConnectionHandle, param_Enabled);
BLEConnecterImpl_handle_HCIEvents_EncryptionChanged(&notifierconnecter_var, param_Status, param_ConnectionHandle, param_Enabled);

}

}


//New dispatcher for messages
void dispatch_SetLEEventMask(uint16_t sender, set_event_mask_cp param_Mask) {
if (sender == initialiser_var.id_HCICommands) {
HCISocketProxyImpl_handle_Commands_SetLEEventMask(&hci_var, param_Mask);

}
if (sender == connecter_var.id_HCICommands) {
HCISocketProxyImpl_handle_Commands_SetLEEventMask(&hci_var, param_Mask);

}
if (sender == notifierconnecter_var.id_HCICommands) {
HCISocketProxyImpl_handle_Commands_SetLEEventMask(&hci_var, param_Mask);

}
if (sender == scanner_var.id_HCICommands) {
HCISocketProxyImpl_handle_Commands_SetLEEventMask(&hci_var, param_Mask);

}

}


//New dispatcher for messages
void dispatch_LEConnectionComplete(uint16_t sender, uint8_t param_Status, uint16_t param_ConnectionHandle, uint8_t param_Role, uint8_t param_PeerAddressType, bdaddr_t param_PeerAddress, uint16_t param_ConnInterval, uint16_t param_ConnLatency, uint16_t param_SupervisionTimeout, uint8_t param_MasterClockAccuracy) {
if (sender == hci_var.id_Events) {
BLEConnecterImpl_handle_HCIEvents_LEConnectionComplete(&connecter_var, param_Status, param_ConnectionHandle, param_Role, param_PeerAddressType, param_PeerAddress, param_ConnInterval, param_ConnLatency, param_SupervisionTimeout, param_MasterClockAccuracy);
BLEConnecterImpl_handle_HCIEvents_LEConnectionComplete(&notifierconnecter_var, param_Status, param_ConnectionHandle, param_Role, param_PeerAddressType, param_PeerAddress, param_ConnInterval, param_ConnLatency, param_SupervisionTimeout, param_MasterClockAccuracy);

}

}


//New dispatcher for messages
void dispatch_ConnectToU(uint16_t sender, uint8_t param_AddressType, bdaddr_t param_Address) {
if (sender == weightscale_var.id_Connecter) {
BLEConnecterImpl_handle_Connecter_ConnectToU(&connecter_var, param_AddressType, param_Address);

}
if (sender == bloodpressure_var.id_Connecter) {
BLEConnecterImpl_handle_Connecter_ConnectToU(&connecter_var, param_AddressType, param_Address);

}
if (sender == notifier_var.id_Connecter) {
BLEConnecterImpl_handle_Connecter_ConnectToU(&notifierconnecter_var, param_AddressType, param_Address);

}

}


//New dispatcher for messages
void dispatch_ATTReadByTypeRequest(uint16_t sender, uint16_t param_ConnectionHandle, uint16_t param_StartingHandle, uint16_t param_EndingHandle, ble_uuid_t param_AttributeType) {
if (sender == initialiser_var.id_ATT) {
HCISocketProxyImpl_handle_ATT_ATTReadByTypeRequest(&hci_var, param_ConnectionHandle, param_StartingHandle, param_EndingHandle, param_AttributeType);

}
if (sender == connecter_var.id_ATT) {
HCISocketProxyImpl_handle_ATT_ATTReadByTypeRequest(&hci_var, param_ConnectionHandle, param_StartingHandle, param_EndingHandle, param_AttributeType);

}
if (sender == notifier_var.id_ATT) {
HCISocketProxyImpl_handle_ATT_ATTReadByTypeRequest(&hci_var, param_ConnectionHandle, param_StartingHandle, param_EndingHandle, param_AttributeType);

}
if (sender == bloodpressure_var.id_ATT) {
HCISocketProxyImpl_handle_ATT_ATTReadByTypeRequest(&hci_var, param_ConnectionHandle, param_StartingHandle, param_EndingHandle, param_AttributeType);

}
if (sender == hci_var.id_ATT) {

}
if (sender == weightscale_var.id_ATT) {
HCISocketProxyImpl_handle_ATT_ATTReadByTypeRequest(&hci_var, param_ConnectionHandle, param_StartingHandle, param_EndingHandle, param_AttributeType);

}
if (sender == scanner_var.id_ATT) {
HCISocketProxyImpl_handle_ATT_ATTReadByTypeRequest(&hci_var, param_ConnectionHandle, param_StartingHandle, param_EndingHandle, param_AttributeType);

}

}


//New dispatcher for messages
void dispatch_Stopped(uint16_t sender) {
if (sender == connecter_var.id_Connecter) {
ANDUC352BLEImpl_handle_Connecter_Stopped(&weightscale_var);
ANDUA651BLEImpl_handle_Connecter_Stopped(&bloodpressure_var);

}
if (sender == notifierconnecter_var.id_Connecter) {
BLENotifierImpl_handle_Connecter_Stopped(&notifier_var);

}
if (sender == scanner_var.id_Scanner) {
Main_handle_Scanner_Stopped(&main_var);

}
if (sender == initialiser_var.id_Initialiser) {
Main_handle_Initialiser_Stopped(&main_var);

}

}


//New dispatcher for messages
void dispatch_ATTWriteCommand(uint16_t sender, uint16_t param_ConnectionHandle, uint16_t param_AttributeHandle, ble_gatt_data_t param_AttributeValue) {
if (sender == initialiser_var.id_ATT) {
HCISocketProxyImpl_handle_ATT_ATTWriteCommand(&hci_var, param_ConnectionHandle, param_AttributeHandle, param_AttributeValue);

}
if (sender == connecter_var.id_ATT) {
HCISocketProxyImpl_handle_ATT_ATTWriteCommand(&hci_var, param_ConnectionHandle, param_AttributeHandle, param_AttributeValue);

}
if (sender == notifier_var.id_ATT) {
HCISocketProxyImpl_handle_ATT_ATTWriteCommand(&hci_var, param_ConnectionHandle, param_AttributeHandle, param_AttributeValue);

}
if (sender == bloodpressure_var.id_ATT) {
HCISocketProxyImpl_handle_ATT_ATTWriteCommand(&hci_var, param_ConnectionHandle, param_AttributeHandle, param_AttributeValue);

}
if (sender == hci_var.id_ATT) {

}
if (sender == weightscale_var.id_ATT) {
HCISocketProxyImpl_handle_ATT_ATTWriteCommand(&hci_var, param_ConnectionHandle, param_AttributeHandle, param_AttributeValue);

}
if (sender == scanner_var.id_ATT) {
HCISocketProxyImpl_handle_ATT_ATTWriteCommand(&hci_var, param_ConnectionHandle, param_AttributeHandle, param_AttributeValue);

}

}


//New dispatcher for messages
void dispatch_SetLEAdvertisingDataCompleted(uint16_t sender, uint8_t param_NumberAllowedCommandPackets, uint8_t param_Status) {
if (sender == hci_var.id_Events) {

}

}


//New dispatcher for messages
void dispatch_ATTWriteError(uint16_t sender, uint16_t param_ConnectionHandle, uint16_t param_AttributeHandle, uint8_t param_Error) {
if (sender == initialiser_var.id_ATT) {
HCISocketProxyImpl_handle_ATT_ATTWriteError(&hci_var, param_ConnectionHandle, param_AttributeHandle, param_Error);

}
if (sender == connecter_var.id_ATT) {
HCISocketProxyImpl_handle_ATT_ATTWriteError(&hci_var, param_ConnectionHandle, param_AttributeHandle, param_Error);

}
if (sender == notifier_var.id_ATT) {
HCISocketProxyImpl_handle_ATT_ATTWriteError(&hci_var, param_ConnectionHandle, param_AttributeHandle, param_Error);

}
if (sender == bloodpressure_var.id_ATT) {
HCISocketProxyImpl_handle_ATT_ATTWriteError(&hci_var, param_ConnectionHandle, param_AttributeHandle, param_Error);

}
if (sender == hci_var.id_ATT) {
BLENotifierImpl_handle_ATT_ATTWriteError(&notifier_var, param_ConnectionHandle, param_AttributeHandle, param_Error);
ANDUA651BLEImpl_handle_ATT_ATTWriteError(&bloodpressure_var, param_ConnectionHandle, param_AttributeHandle, param_Error);
ANDUC352BLEImpl_handle_ATT_ATTWriteError(&weightscale_var, param_ConnectionHandle, param_AttributeHandle, param_Error);

}
if (sender == weightscale_var.id_ATT) {
HCISocketProxyImpl_handle_ATT_ATTWriteError(&hci_var, param_ConnectionHandle, param_AttributeHandle, param_Error);

}
if (sender == scanner_var.id_ATT) {
HCISocketProxyImpl_handle_ATT_ATTWriteError(&hci_var, param_ConnectionHandle, param_AttributeHandle, param_Error);

}

}


//New dispatcher for messages
void dispatch_ATTHandleValueNotification(uint16_t sender, uint16_t param_ConnectionHandle, uint16_t param_AttributeHandle, ble_gatt_data_t param_AttributeValue) {
if (sender == initialiser_var.id_ATT) {
HCISocketProxyImpl_handle_ATT_ATTHandleValueNotification(&hci_var, param_ConnectionHandle, param_AttributeHandle, param_AttributeValue);

}
if (sender == connecter_var.id_ATT) {
HCISocketProxyImpl_handle_ATT_ATTHandleValueNotification(&hci_var, param_ConnectionHandle, param_AttributeHandle, param_AttributeValue);

}
if (sender == notifier_var.id_ATT) {
HCISocketProxyImpl_handle_ATT_ATTHandleValueNotification(&hci_var, param_ConnectionHandle, param_AttributeHandle, param_AttributeValue);

}
if (sender == bloodpressure_var.id_ATT) {
HCISocketProxyImpl_handle_ATT_ATTHandleValueNotification(&hci_var, param_ConnectionHandle, param_AttributeHandle, param_AttributeValue);

}
if (sender == hci_var.id_ATT) {
BLENotifierImpl_handle_ATT_ATTHandleValueNotification(&notifier_var, param_ConnectionHandle, param_AttributeHandle, param_AttributeValue);

}
if (sender == weightscale_var.id_ATT) {
HCISocketProxyImpl_handle_ATT_ATTHandleValueNotification(&hci_var, param_ConnectionHandle, param_AttributeHandle, param_AttributeValue);

}
if (sender == scanner_var.id_ATT) {
HCISocketProxyImpl_handle_ATT_ATTHandleValueNotification(&hci_var, param_ConnectionHandle, param_AttributeHandle, param_AttributeValue);

}

}


//New dispatcher for messages
void dispatch_SetLEScanParametersCompleted(uint16_t sender, uint8_t param_NumberAllowedCommandPackets, uint8_t param_Status) {
if (sender == hci_var.id_Events) {
BLEScannerImpl_handle_HCIEvents_SetLEScanParametersCompleted(&scanner_var, param_NumberAllowedCommandPackets, param_Status);

}

}


//New dispatcher for messages
void dispatch_NotifierReceived(uint16_t sender) {
if (sender == weightscale_var.id_Notifications) {
BLENotifierImpl_handle_Notifications_NotifierReceived(&notifier_var);

}
if (sender == bloodpressure_var.id_Notifications) {
BLENotifierImpl_handle_Notifications_NotifierReceived(&notifier_var);

}

}


//New dispatcher for messages
void dispatch_Failure(uint16_t sender) {
if (sender == connecter_var.id_Connecter) {
ANDUC352BLEImpl_handle_Connecter_Failure(&weightscale_var);
ANDUA651BLEImpl_handle_Connecter_Failure(&bloodpressure_var);

}
if (sender == notifierconnecter_var.id_Connecter) {
BLENotifierImpl_handle_Connecter_Failure(&notifier_var);

}
if (sender == scanner_var.id_Scanner) {
Main_handle_Scanner_Failure(&main_var);

}
if (sender == initialiser_var.id_Initialiser) {
Main_handle_Initialiser_Failure(&main_var);

}

}


//New dispatcher for messages
void dispatch_SetLEScanResponseData(uint16_t sender, uint8_t param_Length, ble_adv_data_t param_Data) {
if (sender == initialiser_var.id_HCICommands) {
HCISocketProxyImpl_handle_Commands_SetLEScanResponseData(&hci_var, param_Length, param_Data);

}
if (sender == connecter_var.id_HCICommands) {
HCISocketProxyImpl_handle_Commands_SetLEScanResponseData(&hci_var, param_Length, param_Data);

}
if (sender == notifierconnecter_var.id_HCICommands) {
HCISocketProxyImpl_handle_Commands_SetLEScanResponseData(&hci_var, param_Length, param_Data);

}
if (sender == scanner_var.id_HCICommands) {
HCISocketProxyImpl_handle_Commands_SetLEScanResponseData(&hci_var, param_Length, param_Data);

}

}


//New dispatcher for messages
void dispatch_SMPSigningInformation(uint16_t sender, uint16_t param_Handle, ble_random_number_t param_SignatureKey) {
if (sender == hci_var.id_SMP) {

}
if (sender == scanner_var.id_SMP) {
HCISocketProxyImpl_handle_SMP_SMPSigningInformation(&hci_var, param_Handle, param_SignatureKey);

}
if (sender == initialiser_var.id_SMP) {
HCISocketProxyImpl_handle_SMP_SMPSigningInformation(&hci_var, param_Handle, param_SignatureKey);

}
if (sender == connecter_var.id_SMP) {
HCISocketProxyImpl_handle_SMP_SMPSigningInformation(&hci_var, param_Handle, param_SignatureKey);

}

}


//New dispatcher for messages
void dispatch_SetLEAdvertisementParametersCompleted(uint16_t sender, uint8_t param_NumberAllowedCommandPackets, uint8_t param_Status) {
if (sender == hci_var.id_Events) {

}

}


//New dispatcher for messages
void dispatch_DisconnectStatus(uint16_t sender, uint8_t param_NumberAllowedCommandPackets, uint8_t param_Status) {
if (sender == hci_var.id_Events) {
BLEConnecterImpl_handle_HCIEvents_DisconnectStatus(&connecter_var, param_NumberAllowedCommandPackets, param_Status);
BLEConnecterImpl_handle_HCIEvents_DisconnectStatus(&notifierconnecter_var, param_NumberAllowedCommandPackets, param_Status);

}

}


//New dispatcher for messages
void dispatch_SMPEncryptionInformation(uint16_t sender, uint16_t param_Handle, ble_random_number_t param_LongTermKey) {
if (sender == hci_var.id_SMP) {

}
if (sender == scanner_var.id_SMP) {
HCISocketProxyImpl_handle_SMP_SMPEncryptionInformation(&hci_var, param_Handle, param_LongTermKey);

}
if (sender == initialiser_var.id_SMP) {
HCISocketProxyImpl_handle_SMP_SMPEncryptionInformation(&hci_var, param_Handle, param_LongTermKey);

}
if (sender == connecter_var.id_SMP) {
HCISocketProxyImpl_handle_SMP_SMPEncryptionInformation(&hci_var, param_Handle, param_LongTermKey);

}

}


//New dispatcher for messages
void dispatch_SetLEScanParameters(uint16_t sender, uint8_t param_Type, uint16_t param_Interval, uint16_t param_Window, uint8_t param_OwnAddressType, uint8_t param_FilterPolicy) {
if (sender == initialiser_var.id_HCICommands) {
HCISocketProxyImpl_handle_Commands_SetLEScanParameters(&hci_var, param_Type, param_Interval, param_Window, param_OwnAddressType, param_FilterPolicy);

}
if (sender == connecter_var.id_HCICommands) {
HCISocketProxyImpl_handle_Commands_SetLEScanParameters(&hci_var, param_Type, param_Interval, param_Window, param_OwnAddressType, param_FilterPolicy);

}
if (sender == notifierconnecter_var.id_HCICommands) {
HCISocketProxyImpl_handle_Commands_SetLEScanParameters(&hci_var, param_Type, param_Interval, param_Window, param_OwnAddressType, param_FilterPolicy);

}
if (sender == scanner_var.id_HCICommands) {
HCISocketProxyImpl_handle_Commands_SetLEScanParameters(&hci_var, param_Type, param_Interval, param_Window, param_OwnAddressType, param_FilterPolicy);

}

}


//New dispatcher for messages
void dispatch_ResetCompleted(uint16_t sender, uint8_t param_NumberAllowedCommandPackets, uint8_t param_Status) {
if (sender == hci_var.id_Events) {
BLEInitialiserImpl_handle_HCIEvents_ResetCompleted(&initialiser_var, param_NumberAllowedCommandPackets, param_Status);

}

}


//New dispatcher for messages
void dispatch_SMPSecurityRequest(uint16_t sender, uint16_t param_Handle, uint8_t param_Bonding, uint8_t param_MITM, uint8_t param_SecureConnection, uint8_t param_Keypress) {
if (sender == hci_var.id_SMP) {

}
if (sender == scanner_var.id_SMP) {
HCISocketProxyImpl_handle_SMP_SMPSecurityRequest(&hci_var, param_Handle, param_Bonding, param_MITM, param_SecureConnection, param_Keypress);

}
if (sender == initialiser_var.id_SMP) {
HCISocketProxyImpl_handle_SMP_SMPSecurityRequest(&hci_var, param_Handle, param_Bonding, param_MITM, param_SecureConnection, param_Keypress);

}
if (sender == connecter_var.id_SMP) {
HCISocketProxyImpl_handle_SMP_SMPSecurityRequest(&hci_var, param_Handle, param_Bonding, param_MITM, param_SecureConnection, param_Keypress);

}

}


//New dispatcher for messages
void dispatch_SetLEEventMaskAll(uint16_t sender) {
if (sender == initialiser_var.id_HCICommands) {
HCISocketProxyImpl_handle_Commands_SetLEEventMaskAll(&hci_var);

}
if (sender == connecter_var.id_HCICommands) {
HCISocketProxyImpl_handle_Commands_SetLEEventMaskAll(&hci_var);

}
if (sender == notifierconnecter_var.id_HCICommands) {
HCISocketProxyImpl_handle_Commands_SetLEEventMaskAll(&hci_var);

}
if (sender == scanner_var.id_HCICommands) {
HCISocketProxyImpl_handle_Commands_SetLEEventMaskAll(&hci_var);

}

}


//New dispatcher for messages
void dispatch_MqttRequestBloodPressureMeasurement(uint16_t sender) {
if (sender == MQTT1_instance.listener_id) {
ANDUA651BLEImpl_handle_Tellu_MqttRequestBloodPressureMeasurement(&bloodpressure_var);

}

}


//New dispatcher for messages
void dispatch_Opened(uint16_t sender, bdaddr_t param_Address) {
if (sender == hci_var.id_Socket) {
BLEInitialiserImpl_handle_Socket_Opened(&initialiser_var, param_Address);

}

}


//New dispatcher for messages
void dispatch_Started(uint16_t sender) {
if (sender == scanner_var.id_Scanner) {

}
if (sender == initialiser_var.id_Initialiser) {

}

}


//New dispatcher for messages
void dispatch_WantsToConnect(uint16_t sender) {
if (sender == bloodpressure_var.id_ANDUA651BLE) {
Main_handle_ANDUA651BLE_WantsToConnect(&main_var);

}
if (sender == weightscale_var.id_ANDUC352BLE) {
Main_handle_ANDUC352BLE_WantsToConnect(&main_var);

}

}


//New dispatcher for messages
void dispatch_ATTReadByGroupTypeResponse(uint16_t sender, uint16_t param_ConnectionHandle, uint8_t param_Length, ble_gatt_data_t param_AttributeDataList) {
if (sender == initialiser_var.id_ATT) {
HCISocketProxyImpl_handle_ATT_ATTReadByGroupTypeResponse(&hci_var, param_ConnectionHandle, param_Length, param_AttributeDataList);

}
if (sender == connecter_var.id_ATT) {
HCISocketProxyImpl_handle_ATT_ATTReadByGroupTypeResponse(&hci_var, param_ConnectionHandle, param_Length, param_AttributeDataList);

}
if (sender == notifier_var.id_ATT) {
HCISocketProxyImpl_handle_ATT_ATTReadByGroupTypeResponse(&hci_var, param_ConnectionHandle, param_Length, param_AttributeDataList);

}
if (sender == bloodpressure_var.id_ATT) {
HCISocketProxyImpl_handle_ATT_ATTReadByGroupTypeResponse(&hci_var, param_ConnectionHandle, param_Length, param_AttributeDataList);

}
if (sender == hci_var.id_ATT) {

}
if (sender == weightscale_var.id_ATT) {
HCISocketProxyImpl_handle_ATT_ATTReadByGroupTypeResponse(&hci_var, param_ConnectionHandle, param_Length, param_AttributeDataList);

}
if (sender == scanner_var.id_ATT) {
HCISocketProxyImpl_handle_ATT_ATTReadByGroupTypeResponse(&hci_var, param_ConnectionHandle, param_Length, param_AttributeDataList);

}

}


//New dispatcher for messages
void dispatch_NotifierFinished(uint16_t sender) {
if (sender == notifier_var.id_Notifications) {
ANDUC352BLEImpl_handle_Notifications_NotifierFinished(&weightscale_var);
ANDUA651BLEImpl_handle_Notifications_NotifierFinished(&bloodpressure_var);

}

}


//New dispatcher for messages
void dispatch_Closed(uint16_t sender) {
if (sender == hci_var.id_Socket) {
BLEInitialiserImpl_handle_Socket_Closed(&initialiser_var);

}

}


//New dispatcher for messages
void dispatch_DisconnectionCompleted(uint16_t sender, uint8_t param_Status, uint16_t param_ConnectionHandle, uint8_t param_Reason) {
if (sender == hci_var.id_Events) {
BLEConnecterImpl_handle_HCIEvents_DisconnectionCompleted(&connecter_var, param_Status, param_ConnectionHandle, param_Reason);
BLEConnecterImpl_handle_HCIEvents_DisconnectionCompleted(&notifierconnecter_var, param_Status, param_ConnectionHandle, param_Reason);

}

}


//New dispatcher for messages
void dispatch_MqttConfirmWeightMeasurement(uint16_t sender) {
if (sender == MQTT2_instance.listener_id) {
ANDUC352BLEImpl_handle_Tellu_MqttConfirmWeightMeasurement(&weightscale_var);

}

}


//New dispatcher for messages
void dispatch_SetLEAdvertisementParameters(uint16_t sender, uint16_t param_MinInterval, uint16_t param_MaxInterval, uint8_t param_Type, uint8_t param_OwnAddressType, uint8_t param_PeerAddressType, bdaddr_t param_PeerAddress, uint8_t param_Channel, uint8_t param_FilterPolicy) {
if (sender == initialiser_var.id_HCICommands) {
HCISocketProxyImpl_handle_Commands_SetLEAdvertisementParameters(&hci_var, param_MinInterval, param_MaxInterval, param_Type, param_OwnAddressType, param_PeerAddressType, param_PeerAddress, param_Channel, param_FilterPolicy);

}
if (sender == connecter_var.id_HCICommands) {
HCISocketProxyImpl_handle_Commands_SetLEAdvertisementParameters(&hci_var, param_MinInterval, param_MaxInterval, param_Type, param_OwnAddressType, param_PeerAddressType, param_PeerAddress, param_Channel, param_FilterPolicy);

}
if (sender == notifierconnecter_var.id_HCICommands) {
HCISocketProxyImpl_handle_Commands_SetLEAdvertisementParameters(&hci_var, param_MinInterval, param_MaxInterval, param_Type, param_OwnAddressType, param_PeerAddressType, param_PeerAddress, param_Channel, param_FilterPolicy);

}
if (sender == scanner_var.id_HCICommands) {
HCISocketProxyImpl_handle_Commands_SetLEAdvertisementParameters(&hci_var, param_MinInterval, param_MaxInterval, param_Type, param_OwnAddressType, param_PeerAddressType, param_PeerAddress, param_Channel, param_FilterPolicy);

}

}


//New dispatcher for messages
void dispatch_SetLEScanResponseDataCompleted(uint16_t sender, uint8_t param_NumberAllowedCommandPackets, uint8_t param_Status) {
if (sender == hci_var.id_Events) {

}

}


//New dispatcher for messages
void dispatch_SMPPairingDHKeyCheck(uint16_t sender, uint16_t param_Handle, ble_random_number_t param_DHKeyCheck) {
if (sender == hci_var.id_SMP) {

}
if (sender == scanner_var.id_SMP) {
HCISocketProxyImpl_handle_SMP_SMPPairingDHKeyCheck(&hci_var, param_Handle, param_DHKeyCheck);

}
if (sender == initialiser_var.id_SMP) {
HCISocketProxyImpl_handle_SMP_SMPPairingDHKeyCheck(&hci_var, param_Handle, param_DHKeyCheck);

}
if (sender == connecter_var.id_SMP) {
HCISocketProxyImpl_handle_SMP_SMPPairingDHKeyCheck(&hci_var, param_Handle, param_DHKeyCheck);

}

}


//New dispatcher for messages
void dispatch_SetEventMaskAll(uint16_t sender) {
if (sender == initialiser_var.id_HCICommands) {
HCISocketProxyImpl_handle_Commands_SetEventMaskAll(&hci_var);

}
if (sender == connecter_var.id_HCICommands) {
HCISocketProxyImpl_handle_Commands_SetEventMaskAll(&hci_var);

}
if (sender == notifierconnecter_var.id_HCICommands) {
HCISocketProxyImpl_handle_Commands_SetEventMaskAll(&hci_var);

}
if (sender == scanner_var.id_HCICommands) {
HCISocketProxyImpl_handle_Commands_SetEventMaskAll(&hci_var);

}

}


//New dispatcher for messages
void dispatch_Quit(uint16_t sender, int16_t param_code) {
if (sender == main_var.id_Signals) {
ExitHandler_handle_Signals_Quit(&handler_var, param_code);

}

}


//New dispatcher for messages
void dispatch_LERandCompleted(uint16_t sender, uint8_t param_NumberAllowedCommandPackets, uint8_t param_Status, ble_random_part_t param_Random) {
if (sender == hci_var.id_Events) {

}

}


//New dispatcher for messages
void dispatch_SetLEScanEnableCompleted(uint16_t sender, uint8_t param_NumberAllowedCommandPackets, uint8_t param_Status) {
if (sender == hci_var.id_Events) {
BLEScannerImpl_handle_HCIEvents_SetLEScanEnableCompleted(&scanner_var, param_NumberAllowedCommandPackets, param_Status);

}

}


//New dispatcher for messages
void dispatch_MqttConfirmBloodPressureMeasurement(uint16_t sender) {
if (sender == MQTT1_instance.listener_id) {
ANDUA651BLEImpl_handle_Tellu_MqttConfirmBloodPressureMeasurement(&bloodpressure_var);

}

}


//New dispatcher for messages
void dispatch_SMPIdentityAddressInformation(uint16_t sender, uint16_t param_Handle, uint8_t param_AddressType, bdaddr_t param_Address) {
if (sender == hci_var.id_SMP) {

}
if (sender == scanner_var.id_SMP) {
HCISocketProxyImpl_handle_SMP_SMPIdentityAddressInformation(&hci_var, param_Handle, param_AddressType, param_Address);

}
if (sender == initialiser_var.id_SMP) {
HCISocketProxyImpl_handle_SMP_SMPIdentityAddressInformation(&hci_var, param_Handle, param_AddressType, param_Address);

}
if (sender == connecter_var.id_SMP) {
HCISocketProxyImpl_handle_SMP_SMPIdentityAddressInformation(&hci_var, param_Handle, param_AddressType, param_Address);

}

}


//New dispatcher for messages
void dispatch_SetLEAdvertiseEnableCompleted(uint16_t sender, uint8_t param_NumberAllowedCommandPackets, uint8_t param_Status) {
if (sender == hci_var.id_Events) {

}

}


//New dispatcher for messages
void dispatch_SMPKeypressNotification(uint16_t sender, uint16_t param_Handle, uint8_t param_Type) {
if (sender == hci_var.id_SMP) {

}
if (sender == scanner_var.id_SMP) {
HCISocketProxyImpl_handle_SMP_SMPKeypressNotification(&hci_var, param_Handle, param_Type);

}
if (sender == initialiser_var.id_SMP) {
HCISocketProxyImpl_handle_SMP_SMPKeypressNotification(&hci_var, param_Handle, param_Type);

}
if (sender == connecter_var.id_SMP) {
HCISocketProxyImpl_handle_SMP_SMPKeypressNotification(&hci_var, param_Handle, param_Type);

}

}


//New dispatcher for messages
void dispatch_ATTReadByTypeResponse(uint16_t sender, uint16_t param_ConnectionHandle, uint8_t param_Length, ble_gatt_data_t param_AttributeDataList) {
if (sender == initialiser_var.id_ATT) {
HCISocketProxyImpl_handle_ATT_ATTReadByTypeResponse(&hci_var, param_ConnectionHandle, param_Length, param_AttributeDataList);

}
if (sender == connecter_var.id_ATT) {
HCISocketProxyImpl_handle_ATT_ATTReadByTypeResponse(&hci_var, param_ConnectionHandle, param_Length, param_AttributeDataList);

}
if (sender == notifier_var.id_ATT) {
HCISocketProxyImpl_handle_ATT_ATTReadByTypeResponse(&hci_var, param_ConnectionHandle, param_Length, param_AttributeDataList);

}
if (sender == bloodpressure_var.id_ATT) {
HCISocketProxyImpl_handle_ATT_ATTReadByTypeResponse(&hci_var, param_ConnectionHandle, param_Length, param_AttributeDataList);

}
if (sender == hci_var.id_ATT) {

}
if (sender == weightscale_var.id_ATT) {
HCISocketProxyImpl_handle_ATT_ATTReadByTypeResponse(&hci_var, param_ConnectionHandle, param_Length, param_AttributeDataList);

}
if (sender == scanner_var.id_ATT) {
HCISocketProxyImpl_handle_ATT_ATTReadByTypeResponse(&hci_var, param_ConnectionHandle, param_Length, param_AttributeDataList);

}

}


//New dispatcher for messages
void dispatch_ConnectableAdvertisement(uint16_t sender, uint8_t param_AddressType, bdaddr_t param_Address) {
if (sender == scanner_var.id_Scanner) {
ANDUA651BLEImpl_handle_Scanner_ConnectableAdvertisement(&bloodpressure_var, param_AddressType, param_Address);
ANDUC352BLEImpl_handle_Scanner_ConnectableAdvertisement(&weightscale_var, param_AddressType, param_Address);

}

}


//New dispatcher for messages
void dispatch_Close(uint16_t sender) {
if (sender == notifierconnecter_var.id_Socket) {
HCISocketProxyImpl_handle_Socket_Close(&hci_var);

}
if (sender == connecter_var.id_Socket) {
HCISocketProxyImpl_handle_Socket_Close(&hci_var);

}
if (sender == initialiser_var.id_Socket) {
HCISocketProxyImpl_handle_Socket_Close(&hci_var);

}
if (sender == scanner_var.id_Socket) {
HCISocketProxyImpl_handle_Socket_Close(&hci_var);

}

}


//New dispatcher for messages
void dispatch_Encrypt(uint16_t sender) {
if (sender == weightscale_var.id_Connecter) {
BLEConnecterImpl_handle_Connecter_Encrypt(&connecter_var);

}
if (sender == bloodpressure_var.id_Connecter) {
BLEConnecterImpl_handle_Connecter_Encrypt(&connecter_var);

}
if (sender == notifier_var.id_Connecter) {
BLEConnecterImpl_handle_Connecter_Encrypt(&notifierconnecter_var);

}

}


//New dispatcher for messages
void dispatch_SetEventMaskCompleted(uint16_t sender, uint8_t param_NumberAllowedCommandPackets, uint8_t param_Status) {
if (sender == hci_var.id_Events) {
BLEInitialiserImpl_handle_HCIEvents_SetEventMaskCompleted(&initialiser_var, param_NumberAllowedCommandPackets, param_Status);

}

}


//New dispatcher for messages
void dispatch_ATTWriteResponse(uint16_t sender, uint16_t param_ConnectionHandle) {
if (sender == initialiser_var.id_ATT) {
HCISocketProxyImpl_handle_ATT_ATTWriteResponse(&hci_var, param_ConnectionHandle);

}
if (sender == connecter_var.id_ATT) {
HCISocketProxyImpl_handle_ATT_ATTWriteResponse(&hci_var, param_ConnectionHandle);

}
if (sender == notifier_var.id_ATT) {
HCISocketProxyImpl_handle_ATT_ATTWriteResponse(&hci_var, param_ConnectionHandle);

}
if (sender == bloodpressure_var.id_ATT) {
HCISocketProxyImpl_handle_ATT_ATTWriteResponse(&hci_var, param_ConnectionHandle);

}
if (sender == hci_var.id_ATT) {
BLENotifierImpl_handle_ATT_ATTWriteResponse(&notifier_var, param_ConnectionHandle);
ANDUA651BLEImpl_handle_ATT_ATTWriteResponse(&bloodpressure_var, param_ConnectionHandle);
ANDUC352BLEImpl_handle_ATT_ATTWriteResponse(&weightscale_var, param_ConnectionHandle);

}
if (sender == weightscale_var.id_ATT) {
HCISocketProxyImpl_handle_ATT_ATTWriteResponse(&hci_var, param_ConnectionHandle);

}
if (sender == scanner_var.id_ATT) {
HCISocketProxyImpl_handle_ATT_ATTWriteResponse(&hci_var, param_ConnectionHandle);

}

}


//New dispatcher for messages
void dispatch_NotifierReady(uint16_t sender) {
if (sender == notifier_var.id_Notifications) {
ANDUC352BLEImpl_handle_Notifications_NotifierReady(&weightscale_var);
ANDUA651BLEImpl_handle_Notifications_NotifierReady(&bloodpressure_var);

}

}


//New dispatcher for messages
void dispatch_ATTReadRequest(uint16_t sender, uint16_t param_ConnectionHandle, uint16_t param_AttributeHandle) {
if (sender == initialiser_var.id_ATT) {
HCISocketProxyImpl_handle_ATT_ATTReadRequest(&hci_var, param_ConnectionHandle, param_AttributeHandle);

}
if (sender == connecter_var.id_ATT) {
HCISocketProxyImpl_handle_ATT_ATTReadRequest(&hci_var, param_ConnectionHandle, param_AttributeHandle);

}
if (sender == notifier_var.id_ATT) {
HCISocketProxyImpl_handle_ATT_ATTReadRequest(&hci_var, param_ConnectionHandle, param_AttributeHandle);

}
if (sender == bloodpressure_var.id_ATT) {
HCISocketProxyImpl_handle_ATT_ATTReadRequest(&hci_var, param_ConnectionHandle, param_AttributeHandle);

}
if (sender == hci_var.id_ATT) {

}
if (sender == weightscale_var.id_ATT) {
HCISocketProxyImpl_handle_ATT_ATTReadRequest(&hci_var, param_ConnectionHandle, param_AttributeHandle);

}
if (sender == scanner_var.id_ATT) {
HCISocketProxyImpl_handle_ATT_ATTReadRequest(&hci_var, param_ConnectionHandle, param_AttributeHandle);

}

}


//New dispatcher for messages
void dispatch_LEAdvertisementReport(uint16_t sender, uint8_t param_Type, uint8_t param_AddressType, bdaddr_t param_Address, uint8_t param_Length, ble_adv_data_t param_Data) {
if (sender == hci_var.id_Events) {
BLEScannerImpl_handle_HCIEvents_LEAdvertisementReport(&scanner_var, param_Type, param_AddressType, param_Address, param_Length, param_Data);

}

}


//New dispatcher for messages
void dispatch_NotifierStored(uint16_t sender) {
if (sender == weightscale_var.id_Notifications) {
BLENotifierImpl_handle_Notifications_NotifierStored(&notifier_var);

}
if (sender == bloodpressure_var.id_Notifications) {
BLENotifierImpl_handle_Notifications_NotifierStored(&notifier_var);

}

}


//New dispatcher for messages
void dispatch_Start(uint16_t sender) {
if (sender == bloodpressure_var.id_Scanner) {
BLEScannerImpl_handle_Scanner_Start(&scanner_var);

}
if (sender == weightscale_var.id_Scanner) {
BLEScannerImpl_handle_Scanner_Start(&scanner_var);

}
if (sender == main_var.id_Initialiser) {
BLEInitialiserImpl_handle_Initialiser_Start(&initialiser_var);

}
if (sender == main_var.id_Scanner) {
BLEScannerImpl_handle_Scanner_Start(&scanner_var);

}

}


//New dispatcher for messages
void dispatch_Reset(uint16_t sender) {
if (sender == initialiser_var.id_HCICommands) {
HCISocketProxyImpl_handle_Commands_Reset(&hci_var);

}
if (sender == connecter_var.id_HCICommands) {
HCISocketProxyImpl_handle_Commands_Reset(&hci_var);

}
if (sender == notifierconnecter_var.id_HCICommands) {
HCISocketProxyImpl_handle_Commands_Reset(&hci_var);

}
if (sender == scanner_var.id_HCICommands) {
HCISocketProxyImpl_handle_Commands_Reset(&hci_var);

}

}


//New dispatcher for messages
void dispatch_Interrupt(uint16_t sender) {
if (sender == handler_var.id_Signals) {
Main_handle_Signals_Interrupt(&main_var);

}

}


//New dispatcher for messages
void dispatch_ATTFindInformationResponse(uint16_t sender, uint16_t param_ConnectionHandle, uint8_t param_Format, ble_gatt_data_t param_InformationData) {
if (sender == initialiser_var.id_ATT) {
HCISocketProxyImpl_handle_ATT_ATTFindInformationResponse(&hci_var, param_ConnectionHandle, param_Format, param_InformationData);

}
if (sender == connecter_var.id_ATT) {
HCISocketProxyImpl_handle_ATT_ATTFindInformationResponse(&hci_var, param_ConnectionHandle, param_Format, param_InformationData);

}
if (sender == notifier_var.id_ATT) {
HCISocketProxyImpl_handle_ATT_ATTFindInformationResponse(&hci_var, param_ConnectionHandle, param_Format, param_InformationData);

}
if (sender == bloodpressure_var.id_ATT) {
HCISocketProxyImpl_handle_ATT_ATTFindInformationResponse(&hci_var, param_ConnectionHandle, param_Format, param_InformationData);

}
if (sender == hci_var.id_ATT) {

}
if (sender == weightscale_var.id_ATT) {
HCISocketProxyImpl_handle_ATT_ATTFindInformationResponse(&hci_var, param_ConnectionHandle, param_Format, param_InformationData);

}
if (sender == scanner_var.id_ATT) {
HCISocketProxyImpl_handle_ATT_ATTFindInformationResponse(&hci_var, param_ConnectionHandle, param_Format, param_InformationData);

}

}


//New dispatcher for messages
void dispatch_Connected(uint16_t sender, uint16_t param_Handle, uint8_t param_AddressType, bdaddr_t param_Address) {
if (sender == connecter_var.id_Connecter) {
ANDUC352BLEImpl_handle_Connecter_Connected(&weightscale_var, param_Handle, param_AddressType, param_Address);
ANDUA651BLEImpl_handle_Connecter_Connected(&bloodpressure_var, param_Handle, param_AddressType, param_Address);

}
if (sender == notifierconnecter_var.id_Connecter) {
BLENotifierImpl_handle_Connecter_Connected(&notifier_var, param_Handle, param_AddressType, param_Address);

}

}


//New dispatcher for messages
void dispatch_SMPPairingConfirm(uint16_t sender, uint16_t param_Handle, ble_random_number_t param_ConfirmValue) {
if (sender == hci_var.id_SMP) {

}
if (sender == scanner_var.id_SMP) {
HCISocketProxyImpl_handle_SMP_SMPPairingConfirm(&hci_var, param_Handle, param_ConfirmValue);

}
if (sender == initialiser_var.id_SMP) {
HCISocketProxyImpl_handle_SMP_SMPPairingConfirm(&hci_var, param_Handle, param_ConfirmValue);

}
if (sender == connecter_var.id_SMP) {
HCISocketProxyImpl_handle_SMP_SMPPairingConfirm(&hci_var, param_Handle, param_ConfirmValue);

}

}


//New dispatcher for messages
void dispatch_SetLocalNameCompleted(uint16_t sender, uint8_t param_NumberAllowedCommandPackets, uint8_t param_Status) {
if (sender == hci_var.id_Events) {

}

}


//New dispatcher for messages
void dispatch_SetLEAdvertiseEnable(uint16_t sender, uint8_t param_Enable) {
if (sender == initialiser_var.id_HCICommands) {
HCISocketProxyImpl_handle_Commands_SetLEAdvertiseEnable(&hci_var, param_Enable);

}
if (sender == connecter_var.id_HCICommands) {
HCISocketProxyImpl_handle_Commands_SetLEAdvertiseEnable(&hci_var, param_Enable);

}
if (sender == notifierconnecter_var.id_HCICommands) {
HCISocketProxyImpl_handle_Commands_SetLEAdvertiseEnable(&hci_var, param_Enable);

}
if (sender == scanner_var.id_HCICommands) {
HCISocketProxyImpl_handle_Commands_SetLEAdvertiseEnable(&hci_var, param_Enable);

}

}


//New dispatcher for messages
void dispatch_NotifierError(uint16_t sender) {
if (sender == weightscale_var.id_Notifications) {
BLENotifierImpl_handle_Notifications_NotifierError(&notifier_var);

}
if (sender == bloodpressure_var.id_Notifications) {
BLENotifierImpl_handle_Notifications_NotifierError(&notifier_var);

}

}


//New dispatcher for messages
void dispatch_LERand(uint16_t sender) {
if (sender == initialiser_var.id_HCICommands) {
HCISocketProxyImpl_handle_Commands_LERand(&hci_var);

}
if (sender == connecter_var.id_HCICommands) {
HCISocketProxyImpl_handle_Commands_LERand(&hci_var);

}
if (sender == notifierconnecter_var.id_HCICommands) {
HCISocketProxyImpl_handle_Commands_LERand(&hci_var);

}
if (sender == scanner_var.id_HCICommands) {
HCISocketProxyImpl_handle_Commands_LERand(&hci_var);

}

}


//New dispatcher for messages
void dispatch_LECreateConnection(uint16_t sender, uint16_t param_Interval, uint16_t param_Window, uint8_t param_FilterPolicy, uint8_t param_PeerAddressType, bdaddr_t param_PeerAddress, uint8_t param_OwnAddressType, uint16_t param_ConnIntervalMin, uint16_t param_ConnIntervalMax, uint16_t param_ConnLatency, uint16_t param_SupervisionTimeout, uint16_t param_CELengthMin, uint16_t param_CELengthMax) {
if (sender == initialiser_var.id_HCICommands) {
HCISocketProxyImpl_handle_Commands_LECreateConnection(&hci_var, param_Interval, param_Window, param_FilterPolicy, param_PeerAddressType, param_PeerAddress, param_OwnAddressType, param_ConnIntervalMin, param_ConnIntervalMax, param_ConnLatency, param_SupervisionTimeout, param_CELengthMin, param_CELengthMax);

}
if (sender == connecter_var.id_HCICommands) {
HCISocketProxyImpl_handle_Commands_LECreateConnection(&hci_var, param_Interval, param_Window, param_FilterPolicy, param_PeerAddressType, param_PeerAddress, param_OwnAddressType, param_ConnIntervalMin, param_ConnIntervalMax, param_ConnLatency, param_SupervisionTimeout, param_CELengthMin, param_CELengthMax);

}
if (sender == notifierconnecter_var.id_HCICommands) {
HCISocketProxyImpl_handle_Commands_LECreateConnection(&hci_var, param_Interval, param_Window, param_FilterPolicy, param_PeerAddressType, param_PeerAddress, param_OwnAddressType, param_ConnIntervalMin, param_ConnIntervalMax, param_ConnLatency, param_SupervisionTimeout, param_CELengthMin, param_CELengthMax);

}
if (sender == scanner_var.id_HCICommands) {
HCISocketProxyImpl_handle_Commands_LECreateConnection(&hci_var, param_Interval, param_Window, param_FilterPolicy, param_PeerAddressType, param_PeerAddress, param_OwnAddressType, param_ConnIntervalMin, param_ConnIntervalMax, param_ConnLatency, param_SupervisionTimeout, param_CELengthMin, param_CELengthMax);

}

}


//New dispatcher for messages
void dispatch_ATTFindInformationError(uint16_t sender, uint16_t param_ConnectionHandle, uint16_t param_AttributeHandle, uint8_t param_Error) {
if (sender == initialiser_var.id_ATT) {
HCISocketProxyImpl_handle_ATT_ATTFindInformationError(&hci_var, param_ConnectionHandle, param_AttributeHandle, param_Error);

}
if (sender == connecter_var.id_ATT) {
HCISocketProxyImpl_handle_ATT_ATTFindInformationError(&hci_var, param_ConnectionHandle, param_AttributeHandle, param_Error);

}
if (sender == notifier_var.id_ATT) {
HCISocketProxyImpl_handle_ATT_ATTFindInformationError(&hci_var, param_ConnectionHandle, param_AttributeHandle, param_Error);

}
if (sender == bloodpressure_var.id_ATT) {
HCISocketProxyImpl_handle_ATT_ATTFindInformationError(&hci_var, param_ConnectionHandle, param_AttributeHandle, param_Error);

}
if (sender == hci_var.id_ATT) {

}
if (sender == weightscale_var.id_ATT) {
HCISocketProxyImpl_handle_ATT_ATTFindInformationError(&hci_var, param_ConnectionHandle, param_AttributeHandle, param_Error);

}
if (sender == scanner_var.id_ATT) {
HCISocketProxyImpl_handle_ATT_ATTFindInformationError(&hci_var, param_ConnectionHandle, param_AttributeHandle, param_Error);

}

}


//New dispatcher for messages
void dispatch_NotifierRequest(uint16_t sender) {
if (sender == weightscale_var.id_Notifications) {
BLENotifierImpl_handle_Notifications_NotifierRequest(&notifier_var);

}
if (sender == bloodpressure_var.id_Notifications) {
BLENotifierImpl_handle_Notifications_NotifierRequest(&notifier_var);

}

}


//New dispatcher for messages
void dispatch_AllowedToConnect(uint16_t sender) {
if (sender == main_var.id_ANDUC352BLE) {
ANDUC352BLEImpl_handle_ANDUC352BLE_AllowedToConnect(&weightscale_var);

}
if (sender == main_var.id_ANDUA651BLE) {
ANDUA651BLEImpl_handle_ANDUA651BLE_AllowedToConnect(&bloodpressure_var);

}

}


//New dispatcher for messages
void dispatch_SetEventMask(uint16_t sender, set_event_mask_cp param_Mask) {
if (sender == initialiser_var.id_HCICommands) {
HCISocketProxyImpl_handle_Commands_SetEventMask(&hci_var, param_Mask);

}
if (sender == connecter_var.id_HCICommands) {
HCISocketProxyImpl_handle_Commands_SetEventMask(&hci_var, param_Mask);

}
if (sender == notifierconnecter_var.id_HCICommands) {
HCISocketProxyImpl_handle_Commands_SetEventMask(&hci_var, param_Mask);

}
if (sender == scanner_var.id_HCICommands) {
HCISocketProxyImpl_handle_Commands_SetEventMask(&hci_var, param_Mask);

}

}


//New dispatcher for messages
void dispatch_LEEnhancedConnectionComplete(uint16_t sender, uint8_t param_Status, uint16_t param_ConnectionHandle, uint8_t param_Role, uint8_t param_PeerAddressType, bdaddr_t param_PeerAddress, bdaddr_t param_LocalResolvablePrivateAddress, bdaddr_t param_PeerResolvablePrivateAddress, uint16_t param_ConnInterval, uint16_t param_ConnLatency, uint16_t param_SupervisionTimeout, uint8_t param_MasterClockAccuracy) {
if (sender == hci_var.id_Events) {
BLEConnecterImpl_handle_HCIEvents_LEEnhancedConnectionComplete(&connecter_var, param_Status, param_ConnectionHandle, param_Role, param_PeerAddressType, param_PeerAddress, param_LocalResolvablePrivateAddress, param_PeerResolvablePrivateAddress, param_ConnInterval, param_ConnLatency, param_SupervisionTimeout, param_MasterClockAccuracy);
BLEConnecterImpl_handle_HCIEvents_LEEnhancedConnectionComplete(&notifierconnecter_var, param_Status, param_ConnectionHandle, param_Role, param_PeerAddressType, param_PeerAddress, param_LocalResolvablePrivateAddress, param_PeerResolvablePrivateAddress, param_ConnInterval, param_ConnLatency, param_SupervisionTimeout, param_MasterClockAccuracy);

}

}


//New dispatcher for messages
void dispatch_Stop(uint16_t sender) {
if (sender == weightscale_var.id_Connecter) {
BLEConnecterImpl_handle_Connecter_Stop(&connecter_var);

}
if (sender == bloodpressure_var.id_Scanner) {
BLEScannerImpl_handle_Scanner_Stop(&scanner_var);

}
if (sender == weightscale_var.id_Scanner) {
BLEScannerImpl_handle_Scanner_Stop(&scanner_var);

}
if (sender == main_var.id_Initialiser) {
BLEInitialiserImpl_handle_Initialiser_Stop(&initialiser_var);

}
if (sender == bloodpressure_var.id_Connecter) {
BLEConnecterImpl_handle_Connecter_Stop(&connecter_var);

}
if (sender == main_var.id_Scanner) {
BLEScannerImpl_handle_Scanner_Stop(&scanner_var);

}
if (sender == notifier_var.id_Connecter) {
BLEConnecterImpl_handle_Connecter_Stop(&notifierconnecter_var);

}

}


//New dispatcher for messages
void dispatch_SMPIdentityInformation(uint16_t sender, uint16_t param_Handle, ble_random_number_t param_IdentityResolvingKey) {
if (sender == hci_var.id_SMP) {

}
if (sender == scanner_var.id_SMP) {
HCISocketProxyImpl_handle_SMP_SMPIdentityInformation(&hci_var, param_Handle, param_IdentityResolvingKey);

}
if (sender == initialiser_var.id_SMP) {
HCISocketProxyImpl_handle_SMP_SMPIdentityInformation(&hci_var, param_Handle, param_IdentityResolvingKey);

}
if (sender == connecter_var.id_SMP) {
HCISocketProxyImpl_handle_SMP_SMPIdentityInformation(&hci_var, param_Handle, param_IdentityResolvingKey);

}

}


//New dispatcher for messages
void dispatch_ATTReadResponse(uint16_t sender, uint16_t param_ConnectionHandle, ble_gatt_data_t param_AttributeValue) {
if (sender == initialiser_var.id_ATT) {
HCISocketProxyImpl_handle_ATT_ATTReadResponse(&hci_var, param_ConnectionHandle, param_AttributeValue);

}
if (sender == connecter_var.id_ATT) {
HCISocketProxyImpl_handle_ATT_ATTReadResponse(&hci_var, param_ConnectionHandle, param_AttributeValue);

}
if (sender == notifier_var.id_ATT) {
HCISocketProxyImpl_handle_ATT_ATTReadResponse(&hci_var, param_ConnectionHandle, param_AttributeValue);

}
if (sender == bloodpressure_var.id_ATT) {
HCISocketProxyImpl_handle_ATT_ATTReadResponse(&hci_var, param_ConnectionHandle, param_AttributeValue);

}
if (sender == hci_var.id_ATT) {
ANDUA651BLEImpl_handle_ATT_ATTReadResponse(&bloodpressure_var, param_ConnectionHandle, param_AttributeValue);
ANDUC352BLEImpl_handle_ATT_ATTReadResponse(&weightscale_var, param_ConnectionHandle, param_AttributeValue);

}
if (sender == weightscale_var.id_ATT) {
HCISocketProxyImpl_handle_ATT_ATTReadResponse(&hci_var, param_ConnectionHandle, param_AttributeValue);

}
if (sender == scanner_var.id_ATT) {
HCISocketProxyImpl_handle_ATT_ATTReadResponse(&hci_var, param_ConnectionHandle, param_AttributeValue);

}

}


//New dispatcher for messages
void dispatch_ATTReadByGroupTypeRequest(uint16_t sender, uint16_t param_ConnectionHandle, uint16_t param_StartingHandle, uint16_t param_EndingHandle, ble_uuid_t param_AttributeGroupType) {
if (sender == initialiser_var.id_ATT) {
HCISocketProxyImpl_handle_ATT_ATTReadByGroupTypeRequest(&hci_var, param_ConnectionHandle, param_StartingHandle, param_EndingHandle, param_AttributeGroupType);

}
if (sender == connecter_var.id_ATT) {
HCISocketProxyImpl_handle_ATT_ATTReadByGroupTypeRequest(&hci_var, param_ConnectionHandle, param_StartingHandle, param_EndingHandle, param_AttributeGroupType);

}
if (sender == notifier_var.id_ATT) {
HCISocketProxyImpl_handle_ATT_ATTReadByGroupTypeRequest(&hci_var, param_ConnectionHandle, param_StartingHandle, param_EndingHandle, param_AttributeGroupType);

}
if (sender == bloodpressure_var.id_ATT) {
HCISocketProxyImpl_handle_ATT_ATTReadByGroupTypeRequest(&hci_var, param_ConnectionHandle, param_StartingHandle, param_EndingHandle, param_AttributeGroupType);

}
if (sender == hci_var.id_ATT) {

}
if (sender == weightscale_var.id_ATT) {
HCISocketProxyImpl_handle_ATT_ATTReadByGroupTypeRequest(&hci_var, param_ConnectionHandle, param_StartingHandle, param_EndingHandle, param_AttributeGroupType);

}
if (sender == scanner_var.id_ATT) {
HCISocketProxyImpl_handle_ATT_ATTReadByGroupTypeRequest(&hci_var, param_ConnectionHandle, param_StartingHandle, param_EndingHandle, param_AttributeGroupType);

}

}


//New dispatcher for messages
void dispatch_Disconnect(uint16_t sender, uint16_t param_ConnectionHandle, uint8_t param_Reason) {
if (sender == initialiser_var.id_HCICommands) {
HCISocketProxyImpl_handle_Commands_Disconnect(&hci_var, param_ConnectionHandle, param_Reason);

}
if (sender == connecter_var.id_HCICommands) {
HCISocketProxyImpl_handle_Commands_Disconnect(&hci_var, param_ConnectionHandle, param_Reason);

}
if (sender == notifierconnecter_var.id_HCICommands) {
HCISocketProxyImpl_handle_Commands_Disconnect(&hci_var, param_ConnectionHandle, param_Reason);

}
if (sender == scanner_var.id_HCICommands) {
HCISocketProxyImpl_handle_Commands_Disconnect(&hci_var, param_ConnectionHandle, param_Reason);

}

}


//New dispatcher for messages
void dispatch_ATTReadByTypeError(uint16_t sender, uint16_t param_ConnectionHandle, uint16_t param_AttributeHandle, uint8_t param_Error) {
if (sender == initialiser_var.id_ATT) {
HCISocketProxyImpl_handle_ATT_ATTReadByTypeError(&hci_var, param_ConnectionHandle, param_AttributeHandle, param_Error);

}
if (sender == connecter_var.id_ATT) {
HCISocketProxyImpl_handle_ATT_ATTReadByTypeError(&hci_var, param_ConnectionHandle, param_AttributeHandle, param_Error);

}
if (sender == notifier_var.id_ATT) {
HCISocketProxyImpl_handle_ATT_ATTReadByTypeError(&hci_var, param_ConnectionHandle, param_AttributeHandle, param_Error);

}
if (sender == bloodpressure_var.id_ATT) {
HCISocketProxyImpl_handle_ATT_ATTReadByTypeError(&hci_var, param_ConnectionHandle, param_AttributeHandle, param_Error);

}
if (sender == hci_var.id_ATT) {

}
if (sender == weightscale_var.id_ATT) {
HCISocketProxyImpl_handle_ATT_ATTReadByTypeError(&hci_var, param_ConnectionHandle, param_AttributeHandle, param_Error);

}
if (sender == scanner_var.id_ATT) {
HCISocketProxyImpl_handle_ATT_ATTReadByTypeError(&hci_var, param_ConnectionHandle, param_AttributeHandle, param_Error);

}

}


//New dispatcher for messages
void dispatch_ATTReadByGroupTypeError(uint16_t sender, uint16_t param_ConnectionHandle, uint16_t param_AttributeHandle, uint8_t param_Error) {
if (sender == initialiser_var.id_ATT) {
HCISocketProxyImpl_handle_ATT_ATTReadByGroupTypeError(&hci_var, param_ConnectionHandle, param_AttributeHandle, param_Error);

}
if (sender == connecter_var.id_ATT) {
HCISocketProxyImpl_handle_ATT_ATTReadByGroupTypeError(&hci_var, param_ConnectionHandle, param_AttributeHandle, param_Error);

}
if (sender == notifier_var.id_ATT) {
HCISocketProxyImpl_handle_ATT_ATTReadByGroupTypeError(&hci_var, param_ConnectionHandle, param_AttributeHandle, param_Error);

}
if (sender == bloodpressure_var.id_ATT) {
HCISocketProxyImpl_handle_ATT_ATTReadByGroupTypeError(&hci_var, param_ConnectionHandle, param_AttributeHandle, param_Error);

}
if (sender == hci_var.id_ATT) {

}
if (sender == weightscale_var.id_ATT) {
HCISocketProxyImpl_handle_ATT_ATTReadByGroupTypeError(&hci_var, param_ConnectionHandle, param_AttributeHandle, param_Error);

}
if (sender == scanner_var.id_ATT) {
HCISocketProxyImpl_handle_ATT_ATTReadByGroupTypeError(&hci_var, param_ConnectionHandle, param_AttributeHandle, param_Error);

}

}


//New dispatcher for messages
void dispatch_LEEncryptCompleted(uint16_t sender, uint8_t param_NumberAllowedCommandPackets, uint8_t param_Status, ble_random_number_t param_Encrypted) {
if (sender == hci_var.id_Events) {

}

}


//New dispatcher for messages
void dispatch_ConnectTo(uint16_t sender, uint8_t param_AddressType, bdaddr_t param_Address, ble_random_number_t param_LongTermKey, uint16_t param_EncryptedDiversifier, ble_random_part_t param_RandomNumber) {
if (sender == weightscale_var.id_Connecter) {
BLEConnecterImpl_handle_Connecter_ConnectTo(&connecter_var, param_AddressType, param_Address, param_LongTermKey, param_EncryptedDiversifier, param_RandomNumber);

}
if (sender == bloodpressure_var.id_Connecter) {
BLEConnecterImpl_handle_Connecter_ConnectTo(&connecter_var, param_AddressType, param_Address, param_LongTermKey, param_EncryptedDiversifier, param_RandomNumber);

}
if (sender == notifier_var.id_Connecter) {
BLEConnecterImpl_handle_Connecter_ConnectTo(&notifierconnecter_var, param_AddressType, param_Address, param_LongTermKey, param_EncryptedDiversifier, param_RandomNumber);

}

}


//New dispatcher for messages
void dispatch_ATTWriteRequest(uint16_t sender, uint16_t param_ConnectionHandle, uint16_t param_AttributeHandle, ble_gatt_data_t param_AttributeValue) {
if (sender == initialiser_var.id_ATT) {
HCISocketProxyImpl_handle_ATT_ATTWriteRequest(&hci_var, param_ConnectionHandle, param_AttributeHandle, param_AttributeValue);

}
if (sender == connecter_var.id_ATT) {
HCISocketProxyImpl_handle_ATT_ATTWriteRequest(&hci_var, param_ConnectionHandle, param_AttributeHandle, param_AttributeValue);

}
if (sender == notifier_var.id_ATT) {
HCISocketProxyImpl_handle_ATT_ATTWriteRequest(&hci_var, param_ConnectionHandle, param_AttributeHandle, param_AttributeValue);

}
if (sender == bloodpressure_var.id_ATT) {
HCISocketProxyImpl_handle_ATT_ATTWriteRequest(&hci_var, param_ConnectionHandle, param_AttributeHandle, param_AttributeValue);

}
if (sender == hci_var.id_ATT) {

}
if (sender == weightscale_var.id_ATT) {
HCISocketProxyImpl_handle_ATT_ATTWriteRequest(&hci_var, param_ConnectionHandle, param_AttributeHandle, param_AttributeValue);

}
if (sender == scanner_var.id_ATT) {
HCISocketProxyImpl_handle_ATT_ATTWriteRequest(&hci_var, param_ConnectionHandle, param_AttributeHandle, param_AttributeValue);

}

}


//New dispatcher for messages
void dispatch_SMPMasterIdentification(uint16_t sender, uint16_t param_Handle, uint16_t param_EDIV, ble_random_part_t param_Rand) {
if (sender == hci_var.id_SMP) {

}
if (sender == scanner_var.id_SMP) {
HCISocketProxyImpl_handle_SMP_SMPMasterIdentification(&hci_var, param_Handle, param_EDIV, param_Rand);

}
if (sender == initialiser_var.id_SMP) {
HCISocketProxyImpl_handle_SMP_SMPMasterIdentification(&hci_var, param_Handle, param_EDIV, param_Rand);

}
if (sender == connecter_var.id_SMP) {
HCISocketProxyImpl_handle_SMP_SMPMasterIdentification(&hci_var, param_Handle, param_EDIV, param_Rand);

}

}


//New dispatcher for messages
void dispatch_SetLEEventMaskCompleted(uint16_t sender, uint8_t param_NumberAllowedCommandPackets, uint8_t param_Status) {
if (sender == hci_var.id_Events) {
BLEInitialiserImpl_handle_HCIEvents_SetLEEventMaskCompleted(&initialiser_var, param_NumberAllowedCommandPackets, param_Status);

}

}


//New dispatcher for messages
void dispatch_SetLEScanEnable(uint16_t sender, uint8_t param_Enable, uint8_t param_FilterDuplicates) {
if (sender == initialiser_var.id_HCICommands) {
HCISocketProxyImpl_handle_Commands_SetLEScanEnable(&hci_var, param_Enable, param_FilterDuplicates);

}
if (sender == connecter_var.id_HCICommands) {
HCISocketProxyImpl_handle_Commands_SetLEScanEnable(&hci_var, param_Enable, param_FilterDuplicates);

}
if (sender == notifierconnecter_var.id_HCICommands) {
HCISocketProxyImpl_handle_Commands_SetLEScanEnable(&hci_var, param_Enable, param_FilterDuplicates);

}
if (sender == scanner_var.id_HCICommands) {
HCISocketProxyImpl_handle_Commands_SetLEScanEnable(&hci_var, param_Enable, param_FilterDuplicates);

}

}


//New dispatcher for messages
void dispatch_ATTHandleValueIndication(uint16_t sender, uint16_t param_ConnectionHandle, uint16_t param_AttributeHandle, ble_gatt_data_t param_AttributeValue) {
if (sender == initialiser_var.id_ATT) {
HCISocketProxyImpl_handle_ATT_ATTHandleValueIndication(&hci_var, param_ConnectionHandle, param_AttributeHandle, param_AttributeValue);

}
if (sender == connecter_var.id_ATT) {
HCISocketProxyImpl_handle_ATT_ATTHandleValueIndication(&hci_var, param_ConnectionHandle, param_AttributeHandle, param_AttributeValue);

}
if (sender == notifier_var.id_ATT) {
HCISocketProxyImpl_handle_ATT_ATTHandleValueIndication(&hci_var, param_ConnectionHandle, param_AttributeHandle, param_AttributeValue);

}
if (sender == bloodpressure_var.id_ATT) {
HCISocketProxyImpl_handle_ATT_ATTHandleValueIndication(&hci_var, param_ConnectionHandle, param_AttributeHandle, param_AttributeValue);

}
if (sender == hci_var.id_ATT) {
ANDUA651BLEImpl_handle_ATT_ATTHandleValueIndication(&bloodpressure_var, param_ConnectionHandle, param_AttributeHandle, param_AttributeValue);
ANDUC352BLEImpl_handle_ATT_ATTHandleValueIndication(&weightscale_var, param_ConnectionHandle, param_AttributeHandle, param_AttributeValue);

}
if (sender == weightscale_var.id_ATT) {
HCISocketProxyImpl_handle_ATT_ATTHandleValueIndication(&hci_var, param_ConnectionHandle, param_AttributeHandle, param_AttributeValue);

}
if (sender == scanner_var.id_ATT) {
HCISocketProxyImpl_handle_ATT_ATTHandleValueIndication(&hci_var, param_ConnectionHandle, param_AttributeHandle, param_AttributeValue);

}

}


//New dispatcher for messages
void dispatch_Encrypted(uint16_t sender) {
if (sender == connecter_var.id_Connecter) {
ANDUC352BLEImpl_handle_Connecter_Encrypted(&weightscale_var);
ANDUA651BLEImpl_handle_Connecter_Encrypted(&bloodpressure_var);

}
if (sender == notifierconnecter_var.id_Connecter) {

}

}


//New dispatcher for messages
void dispatch_NotifierConnect(uint16_t sender, uint8_t param_AddressType, bdaddr_t param_Address) {
if (sender == weightscale_var.id_Notifications) {
BLENotifierImpl_handle_Notifications_NotifierConnect(&notifier_var, param_AddressType, param_Address);

}
if (sender == bloodpressure_var.id_Notifications) {
BLENotifierImpl_handle_Notifications_NotifierConnect(&notifier_var, param_AddressType, param_Address);

}

}


//New dispatcher for messages
void dispatch_DeviceInitialised(uint16_t sender, bdaddr_t param_Address) {
if (sender == initialiser_var.id_Initialiser) {
Main_handle_Initialiser_DeviceInitialised(&main_var, param_Address);

}

}


//New dispatcher for messages
void dispatch_LEStartEncryptionStatus(uint16_t sender, uint8_t param_NumberAllowedCommandPackets, uint8_t param_Status) {
if (sender == hci_var.id_Events) {
BLEConnecterImpl_handle_HCIEvents_LEStartEncryptionStatus(&connecter_var, param_NumberAllowedCommandPackets, param_Status);
BLEConnecterImpl_handle_HCIEvents_LEStartEncryptionStatus(&notifierconnecter_var, param_NumberAllowedCommandPackets, param_Status);

}

}


//New dispatcher for messages
void dispatch_SMPPairingFailed(uint16_t sender, uint16_t param_Handle, uint8_t param_Reason) {
if (sender == hci_var.id_SMP) {

}
if (sender == scanner_var.id_SMP) {
HCISocketProxyImpl_handle_SMP_SMPPairingFailed(&hci_var, param_Handle, param_Reason);

}
if (sender == initialiser_var.id_SMP) {
HCISocketProxyImpl_handle_SMP_SMPPairingFailed(&hci_var, param_Handle, param_Reason);

}
if (sender == connecter_var.id_SMP) {
HCISocketProxyImpl_handle_SMP_SMPPairingFailed(&hci_var, param_Handle, param_Reason);

}

}


//New dispatcher for messages
void dispatch_Open(uint16_t sender) {
if (sender == notifierconnecter_var.id_Socket) {
HCISocketProxyImpl_handle_Socket_Open(&hci_var);

}
if (sender == connecter_var.id_Socket) {
HCISocketProxyImpl_handle_Socket_Open(&hci_var);

}
if (sender == initialiser_var.id_Socket) {
HCISocketProxyImpl_handle_Socket_Open(&hci_var);

}
if (sender == scanner_var.id_Socket) {
HCISocketProxyImpl_handle_Socket_Open(&hci_var);

}

}


//New dispatcher for messages
void dispatch_LEEncrypt(uint16_t sender, ble_random_number_t param_Key, ble_random_number_t param_Plaintext) {
if (sender == initialiser_var.id_HCICommands) {
HCISocketProxyImpl_handle_Commands_LEEncrypt(&hci_var, param_Key, param_Plaintext);

}
if (sender == connecter_var.id_HCICommands) {
HCISocketProxyImpl_handle_Commands_LEEncrypt(&hci_var, param_Key, param_Plaintext);

}
if (sender == notifierconnecter_var.id_HCICommands) {
HCISocketProxyImpl_handle_Commands_LEEncrypt(&hci_var, param_Key, param_Plaintext);

}
if (sender == scanner_var.id_HCICommands) {
HCISocketProxyImpl_handle_Commands_LEEncrypt(&hci_var, param_Key, param_Plaintext);

}

}


//New dispatcher for messages
void dispatch_ATTHandleValueConfirmation(uint16_t sender, uint16_t param_ConnectionHandle) {
if (sender == initialiser_var.id_ATT) {
HCISocketProxyImpl_handle_ATT_ATTHandleValueConfirmation(&hci_var, param_ConnectionHandle);

}
if (sender == connecter_var.id_ATT) {
HCISocketProxyImpl_handle_ATT_ATTHandleValueConfirmation(&hci_var, param_ConnectionHandle);

}
if (sender == notifier_var.id_ATT) {
HCISocketProxyImpl_handle_ATT_ATTHandleValueConfirmation(&hci_var, param_ConnectionHandle);

}
if (sender == bloodpressure_var.id_ATT) {
HCISocketProxyImpl_handle_ATT_ATTHandleValueConfirmation(&hci_var, param_ConnectionHandle);

}
if (sender == hci_var.id_ATT) {

}
if (sender == weightscale_var.id_ATT) {
HCISocketProxyImpl_handle_ATT_ATTHandleValueConfirmation(&hci_var, param_ConnectionHandle);

}
if (sender == scanner_var.id_ATT) {
HCISocketProxyImpl_handle_ATT_ATTHandleValueConfirmation(&hci_var, param_ConnectionHandle);

}

}


//New dispatcher for messages
void dispatch_SMPPairingPublicKey(uint16_t sender, uint16_t param_Handle, smp_public_key_t param_KeyX, smp_public_key_t param_KeyY) {
if (sender == hci_var.id_SMP) {

}
if (sender == scanner_var.id_SMP) {
HCISocketProxyImpl_handle_SMP_SMPPairingPublicKey(&hci_var, param_Handle, param_KeyX, param_KeyY);

}
if (sender == initialiser_var.id_SMP) {
HCISocketProxyImpl_handle_SMP_SMPPairingPublicKey(&hci_var, param_Handle, param_KeyX, param_KeyY);

}
if (sender == connecter_var.id_SMP) {
HCISocketProxyImpl_handle_SMP_SMPPairingPublicKey(&hci_var, param_Handle, param_KeyX, param_KeyY);

}

}


//New dispatcher for messages
void dispatch_ATTReadError(uint16_t sender, uint16_t param_ConnectionHandle, uint16_t param_AttributeHandle, uint8_t param_Error) {
if (sender == initialiser_var.id_ATT) {
HCISocketProxyImpl_handle_ATT_ATTReadError(&hci_var, param_ConnectionHandle, param_AttributeHandle, param_Error);

}
if (sender == connecter_var.id_ATT) {
HCISocketProxyImpl_handle_ATT_ATTReadError(&hci_var, param_ConnectionHandle, param_AttributeHandle, param_Error);

}
if (sender == notifier_var.id_ATT) {
HCISocketProxyImpl_handle_ATT_ATTReadError(&hci_var, param_ConnectionHandle, param_AttributeHandle, param_Error);

}
if (sender == bloodpressure_var.id_ATT) {
HCISocketProxyImpl_handle_ATT_ATTReadError(&hci_var, param_ConnectionHandle, param_AttributeHandle, param_Error);

}
if (sender == hci_var.id_ATT) {
ANDUA651BLEImpl_handle_ATT_ATTReadError(&bloodpressure_var, param_ConnectionHandle, param_AttributeHandle, param_Error);
ANDUC352BLEImpl_handle_ATT_ATTReadError(&weightscale_var, param_ConnectionHandle, param_AttributeHandle, param_Error);

}
if (sender == weightscale_var.id_ATT) {
HCISocketProxyImpl_handle_ATT_ATTReadError(&hci_var, param_ConnectionHandle, param_AttributeHandle, param_Error);

}
if (sender == scanner_var.id_ATT) {
HCISocketProxyImpl_handle_ATT_ATTReadError(&hci_var, param_ConnectionHandle, param_AttributeHandle, param_Error);

}

}


//New dispatcher for messages
void dispatch_LEStartEncryption(uint16_t sender, uint16_t param_ConnectionHandle, ble_random_part_t param_Random, uint16_t param_EDIV, ble_random_number_t param_LTK) {
if (sender == initialiser_var.id_HCICommands) {
HCISocketProxyImpl_handle_Commands_LEStartEncryption(&hci_var, param_ConnectionHandle, param_Random, param_EDIV, param_LTK);

}
if (sender == connecter_var.id_HCICommands) {
HCISocketProxyImpl_handle_Commands_LEStartEncryption(&hci_var, param_ConnectionHandle, param_Random, param_EDIV, param_LTK);

}
if (sender == notifierconnecter_var.id_HCICommands) {
HCISocketProxyImpl_handle_Commands_LEStartEncryption(&hci_var, param_ConnectionHandle, param_Random, param_EDIV, param_LTK);

}
if (sender == scanner_var.id_HCICommands) {
HCISocketProxyImpl_handle_Commands_LEStartEncryption(&hci_var, param_ConnectionHandle, param_Random, param_EDIV, param_LTK);

}

}


//New dispatcher for messages
void dispatch_Connect(uint16_t sender) {
if (sender == weightscale_var.id_Connecter) {
BLEConnecterImpl_handle_Connecter_Connect(&connecter_var);

}
if (sender == bloodpressure_var.id_Connecter) {
BLEConnecterImpl_handle_Connecter_Connect(&connecter_var);

}
if (sender == notifier_var.id_Connecter) {
BLEConnecterImpl_handle_Connecter_Connect(&notifierconnecter_var);

}

}


//New dispatcher for messages
void dispatch_MqttRequestWeightMeasurement(uint16_t sender) {
if (sender == MQTT2_instance.listener_id) {
ANDUC352BLEImpl_handle_Tellu_MqttRequestWeightMeasurement(&weightscale_var);

}

}


//New dispatcher for messages
void dispatch_SMPPairingResponse(uint16_t sender, uint16_t param_Handle, uint8_t param_IOCapability, uint8_t param_OOBDataPresent, uint8_t param_Bonding, uint8_t param_MITM, uint8_t param_SecureConnection, uint8_t param_Keypress, uint8_t param_MaximumEncryptionKeySize, uint8_t param_InitiatorKeyDistribution, uint8_t param_ResponderKeyDistribution) {
if (sender == hci_var.id_SMP) {

}
if (sender == scanner_var.id_SMP) {
HCISocketProxyImpl_handle_SMP_SMPPairingResponse(&hci_var, param_Handle, param_IOCapability, param_OOBDataPresent, param_Bonding, param_MITM, param_SecureConnection, param_Keypress, param_MaximumEncryptionKeySize, param_InitiatorKeyDistribution, param_ResponderKeyDistribution);

}
if (sender == initialiser_var.id_SMP) {
HCISocketProxyImpl_handle_SMP_SMPPairingResponse(&hci_var, param_Handle, param_IOCapability, param_OOBDataPresent, param_Bonding, param_MITM, param_SecureConnection, param_Keypress, param_MaximumEncryptionKeySize, param_InitiatorKeyDistribution, param_ResponderKeyDistribution);

}
if (sender == connecter_var.id_SMP) {
HCISocketProxyImpl_handle_SMP_SMPPairingResponse(&hci_var, param_Handle, param_IOCapability, param_OOBDataPresent, param_Bonding, param_MITM, param_SecureConnection, param_Keypress, param_MaximumEncryptionKeySize, param_InitiatorKeyDistribution, param_ResponderKeyDistribution);

}

}


//New dispatcher for messages
void dispatch_ATTFindInformationRequest(uint16_t sender, uint16_t param_ConnectionHandle, uint16_t param_StartingHandle, uint16_t param_EndingHandle) {
if (sender == initialiser_var.id_ATT) {
HCISocketProxyImpl_handle_ATT_ATTFindInformationRequest(&hci_var, param_ConnectionHandle, param_StartingHandle, param_EndingHandle);

}
if (sender == connecter_var.id_ATT) {
HCISocketProxyImpl_handle_ATT_ATTFindInformationRequest(&hci_var, param_ConnectionHandle, param_StartingHandle, param_EndingHandle);

}
if (sender == notifier_var.id_ATT) {
HCISocketProxyImpl_handle_ATT_ATTFindInformationRequest(&hci_var, param_ConnectionHandle, param_StartingHandle, param_EndingHandle);

}
if (sender == bloodpressure_var.id_ATT) {
HCISocketProxyImpl_handle_ATT_ATTFindInformationRequest(&hci_var, param_ConnectionHandle, param_StartingHandle, param_EndingHandle);

}
if (sender == hci_var.id_ATT) {

}
if (sender == weightscale_var.id_ATT) {
HCISocketProxyImpl_handle_ATT_ATTFindInformationRequest(&hci_var, param_ConnectionHandle, param_StartingHandle, param_EndingHandle);

}
if (sender == scanner_var.id_ATT) {
HCISocketProxyImpl_handle_ATT_ATTFindInformationRequest(&hci_var, param_ConnectionHandle, param_StartingHandle, param_EndingHandle);

}

}


int processMessageQueue() {
fifo_lock();
while (fifo_empty()) fifo_wait();
uint8_t mbufi = 0;

// Read the code of the next port/message in the queue
uint16_t code = fifo_dequeue() << 8;

code += fifo_dequeue();

// Switch to call the appropriate handler
switch(code) {
case 29:{
byte mbuf[15 - 2];
while (mbufi < (15 - 2)) mbuf[mbufi++] = fifo_dequeue();
fifo_unlock();
uint8_t mbufi_SMPPairingRequest = 2;
union u_SMPPairingRequest_Handle_t {
uint16_t p;
byte bytebuffer[2];
} u_SMPPairingRequest_Handle;
u_SMPPairingRequest_Handle.bytebuffer[1] = mbuf[mbufi_SMPPairingRequest + 0];
u_SMPPairingRequest_Handle.bytebuffer[0] = mbuf[mbufi_SMPPairingRequest + 1];
mbufi_SMPPairingRequest += 2;
union u_SMPPairingRequest_IOCapability_t {
uint8_t p;
byte bytebuffer[1];
} u_SMPPairingRequest_IOCapability;
u_SMPPairingRequest_IOCapability.bytebuffer[0] = mbuf[mbufi_SMPPairingRequest + 0];
mbufi_SMPPairingRequest += 1;
union u_SMPPairingRequest_OOBDataPresent_t {
uint8_t p;
byte bytebuffer[1];
} u_SMPPairingRequest_OOBDataPresent;
u_SMPPairingRequest_OOBDataPresent.bytebuffer[0] = mbuf[mbufi_SMPPairingRequest + 0];
mbufi_SMPPairingRequest += 1;
union u_SMPPairingRequest_Bonding_t {
uint8_t p;
byte bytebuffer[1];
} u_SMPPairingRequest_Bonding;
u_SMPPairingRequest_Bonding.bytebuffer[0] = mbuf[mbufi_SMPPairingRequest + 0];
mbufi_SMPPairingRequest += 1;
union u_SMPPairingRequest_MITM_t {
uint8_t p;
byte bytebuffer[1];
} u_SMPPairingRequest_MITM;
u_SMPPairingRequest_MITM.bytebuffer[0] = mbuf[mbufi_SMPPairingRequest + 0];
mbufi_SMPPairingRequest += 1;
union u_SMPPairingRequest_SecureConnection_t {
uint8_t p;
byte bytebuffer[1];
} u_SMPPairingRequest_SecureConnection;
u_SMPPairingRequest_SecureConnection.bytebuffer[0] = mbuf[mbufi_SMPPairingRequest + 0];
mbufi_SMPPairingRequest += 1;
union u_SMPPairingRequest_Keypress_t {
uint8_t p;
byte bytebuffer[1];
} u_SMPPairingRequest_Keypress;
u_SMPPairingRequest_Keypress.bytebuffer[0] = mbuf[mbufi_SMPPairingRequest + 0];
mbufi_SMPPairingRequest += 1;
union u_SMPPairingRequest_MaximumEncryptionKeySize_t {
uint8_t p;
byte bytebuffer[1];
} u_SMPPairingRequest_MaximumEncryptionKeySize;
u_SMPPairingRequest_MaximumEncryptionKeySize.bytebuffer[0] = mbuf[mbufi_SMPPairingRequest + 0];
mbufi_SMPPairingRequest += 1;
union u_SMPPairingRequest_InitiatorKeyDistribution_t {
uint8_t p;
byte bytebuffer[1];
} u_SMPPairingRequest_InitiatorKeyDistribution;
u_SMPPairingRequest_InitiatorKeyDistribution.bytebuffer[0] = mbuf[mbufi_SMPPairingRequest + 0];
mbufi_SMPPairingRequest += 1;
union u_SMPPairingRequest_ResponderKeyDistribution_t {
uint8_t p;
byte bytebuffer[1];
} u_SMPPairingRequest_ResponderKeyDistribution;
u_SMPPairingRequest_ResponderKeyDistribution.bytebuffer[0] = mbuf[mbufi_SMPPairingRequest + 0];
mbufi_SMPPairingRequest += 1;
dispatch_SMPPairingRequest((mbuf[0] << 8) + mbuf[1] /* instance port*/,
 u_SMPPairingRequest_Handle.p /* Handle */ ,
 u_SMPPairingRequest_IOCapability.p /* IOCapability */ ,
 u_SMPPairingRequest_OOBDataPresent.p /* OOBDataPresent */ ,
 u_SMPPairingRequest_Bonding.p /* Bonding */ ,
 u_SMPPairingRequest_MITM.p /* MITM */ ,
 u_SMPPairingRequest_SecureConnection.p /* SecureConnection */ ,
 u_SMPPairingRequest_Keypress.p /* Keypress */ ,
 u_SMPPairingRequest_MaximumEncryptionKeySize.p /* MaximumEncryptionKeySize */ ,
 u_SMPPairingRequest_InitiatorKeyDistribution.p /* InitiatorKeyDistribution */ ,
 u_SMPPairingRequest_ResponderKeyDistribution.p /* ResponderKeyDistribution */ );
break;
}
case 90:{
byte mbuf[6 - 2];
while (mbufi < (6 - 2)) mbuf[mbufi++] = fifo_dequeue();
fifo_unlock();
uint8_t mbufi_LECreateConnectionCancelCompleted = 2;
union u_LECreateConnectionCancelCompleted_NumberAllowedCommandPackets_t {
uint8_t p;
byte bytebuffer[1];
} u_LECreateConnectionCancelCompleted_NumberAllowedCommandPackets;
u_LECreateConnectionCancelCompleted_NumberAllowedCommandPackets.bytebuffer[0] = mbuf[mbufi_LECreateConnectionCancelCompleted + 0];
mbufi_LECreateConnectionCancelCompleted += 1;
union u_LECreateConnectionCancelCompleted_Status_t {
uint8_t p;
byte bytebuffer[1];
} u_LECreateConnectionCancelCompleted_Status;
u_LECreateConnectionCancelCompleted_Status.bytebuffer[0] = mbuf[mbufi_LECreateConnectionCancelCompleted + 0];
mbufi_LECreateConnectionCancelCompleted += 1;
dispatch_LECreateConnectionCancelCompleted((mbuf[0] << 8) + mbuf[1] /* instance port*/,
 u_LECreateConnectionCancelCompleted_NumberAllowedCommandPackets.p /* NumberAllowedCommandPackets */ ,
 u_LECreateConnectionCancelCompleted_Status.p /* Status */ );
break;
}
case 17:{
byte mbuf[36 - 2];
while (mbufi < (36 - 2)) mbuf[mbufi++] = fifo_dequeue();
fifo_unlock();
uint8_t mbufi_SetLEAdvertisingData = 2;
union u_SetLEAdvertisingData_Length_t {
uint8_t p;
byte bytebuffer[1];
} u_SetLEAdvertisingData_Length;
u_SetLEAdvertisingData_Length.bytebuffer[0] = mbuf[mbufi_SetLEAdvertisingData + 0];
mbufi_SetLEAdvertisingData += 1;
union u_SetLEAdvertisingData_Data_t {
ble_adv_data_t p;
byte bytebuffer[31];
} u_SetLEAdvertisingData_Data;
u_SetLEAdvertisingData_Data.bytebuffer[30] = mbuf[mbufi_SetLEAdvertisingData + 0];
u_SetLEAdvertisingData_Data.bytebuffer[29] = mbuf[mbufi_SetLEAdvertisingData + 1];
u_SetLEAdvertisingData_Data.bytebuffer[28] = mbuf[mbufi_SetLEAdvertisingData + 2];
u_SetLEAdvertisingData_Data.bytebuffer[27] = mbuf[mbufi_SetLEAdvertisingData + 3];
u_SetLEAdvertisingData_Data.bytebuffer[26] = mbuf[mbufi_SetLEAdvertisingData + 4];
u_SetLEAdvertisingData_Data.bytebuffer[25] = mbuf[mbufi_SetLEAdvertisingData + 5];
u_SetLEAdvertisingData_Data.bytebuffer[24] = mbuf[mbufi_SetLEAdvertisingData + 6];
u_SetLEAdvertisingData_Data.bytebuffer[23] = mbuf[mbufi_SetLEAdvertisingData + 7];
u_SetLEAdvertisingData_Data.bytebuffer[22] = mbuf[mbufi_SetLEAdvertisingData + 8];
u_SetLEAdvertisingData_Data.bytebuffer[21] = mbuf[mbufi_SetLEAdvertisingData + 9];
u_SetLEAdvertisingData_Data.bytebuffer[20] = mbuf[mbufi_SetLEAdvertisingData + 10];
u_SetLEAdvertisingData_Data.bytebuffer[19] = mbuf[mbufi_SetLEAdvertisingData + 11];
u_SetLEAdvertisingData_Data.bytebuffer[18] = mbuf[mbufi_SetLEAdvertisingData + 12];
u_SetLEAdvertisingData_Data.bytebuffer[17] = mbuf[mbufi_SetLEAdvertisingData + 13];
u_SetLEAdvertisingData_Data.bytebuffer[16] = mbuf[mbufi_SetLEAdvertisingData + 14];
u_SetLEAdvertisingData_Data.bytebuffer[15] = mbuf[mbufi_SetLEAdvertisingData + 15];
u_SetLEAdvertisingData_Data.bytebuffer[14] = mbuf[mbufi_SetLEAdvertisingData + 16];
u_SetLEAdvertisingData_Data.bytebuffer[13] = mbuf[mbufi_SetLEAdvertisingData + 17];
u_SetLEAdvertisingData_Data.bytebuffer[12] = mbuf[mbufi_SetLEAdvertisingData + 18];
u_SetLEAdvertisingData_Data.bytebuffer[11] = mbuf[mbufi_SetLEAdvertisingData + 19];
u_SetLEAdvertisingData_Data.bytebuffer[10] = mbuf[mbufi_SetLEAdvertisingData + 20];
u_SetLEAdvertisingData_Data.bytebuffer[9] = mbuf[mbufi_SetLEAdvertisingData + 21];
u_SetLEAdvertisingData_Data.bytebuffer[8] = mbuf[mbufi_SetLEAdvertisingData + 22];
u_SetLEAdvertisingData_Data.bytebuffer[7] = mbuf[mbufi_SetLEAdvertisingData + 23];
u_SetLEAdvertisingData_Data.bytebuffer[6] = mbuf[mbufi_SetLEAdvertisingData + 24];
u_SetLEAdvertisingData_Data.bytebuffer[5] = mbuf[mbufi_SetLEAdvertisingData + 25];
u_SetLEAdvertisingData_Data.bytebuffer[4] = mbuf[mbufi_SetLEAdvertisingData + 26];
u_SetLEAdvertisingData_Data.bytebuffer[3] = mbuf[mbufi_SetLEAdvertisingData + 27];
u_SetLEAdvertisingData_Data.bytebuffer[2] = mbuf[mbufi_SetLEAdvertisingData + 28];
u_SetLEAdvertisingData_Data.bytebuffer[1] = mbuf[mbufi_SetLEAdvertisingData + 29];
u_SetLEAdvertisingData_Data.bytebuffer[0] = mbuf[mbufi_SetLEAdvertisingData + 30];
mbufi_SetLEAdvertisingData += 31;
dispatch_SetLEAdvertisingData((mbuf[0] << 8) + mbuf[1] /* instance port*/,
 u_SetLEAdvertisingData_Length.p /* Length */ ,
 u_SetLEAdvertisingData_Data.p /* Data */ );
break;
}
case 19:{
byte mbuf[4 - 2];
while (mbufi < (4 - 2)) mbuf[mbufi++] = fifo_dequeue();
fifo_unlock();
uint8_t mbufi_LECreateConnectionCancel = 2;
dispatch_LECreateConnectionCancel((mbuf[0] << 8) + mbuf[1] /* instance port*/);
break;
}
case 96:{
byte mbuf[6 - 2];
while (mbufi < (6 - 2)) mbuf[mbufi++] = fifo_dequeue();
fifo_unlock();
uint8_t mbufi_LECreateConnectionStatus = 2;
union u_LECreateConnectionStatus_NumberAllowedCommandPackets_t {
uint8_t p;
byte bytebuffer[1];
} u_LECreateConnectionStatus_NumberAllowedCommandPackets;
u_LECreateConnectionStatus_NumberAllowedCommandPackets.bytebuffer[0] = mbuf[mbufi_LECreateConnectionStatus + 0];
mbufi_LECreateConnectionStatus += 1;
union u_LECreateConnectionStatus_Status_t {
uint8_t p;
byte bytebuffer[1];
} u_LECreateConnectionStatus_Status;
u_LECreateConnectionStatus_Status.bytebuffer[0] = mbuf[mbufi_LECreateConnectionStatus + 0];
mbufi_LECreateConnectionStatus += 1;
dispatch_LECreateConnectionStatus((mbuf[0] << 8) + mbuf[1] /* instance port*/,
 u_LECreateConnectionStatus_NumberAllowedCommandPackets.p /* NumberAllowedCommandPackets */ ,
 u_LECreateConnectionStatus_Status.p /* Status */ );
break;
}
case 37:{
byte mbuf[22 - 2];
while (mbufi < (22 - 2)) mbuf[mbufi++] = fifo_dequeue();
fifo_unlock();
uint8_t mbufi_SMPPairingRandom = 2;
union u_SMPPairingRandom_Handle_t {
uint16_t p;
byte bytebuffer[2];
} u_SMPPairingRandom_Handle;
u_SMPPairingRandom_Handle.bytebuffer[1] = mbuf[mbufi_SMPPairingRandom + 0];
u_SMPPairingRandom_Handle.bytebuffer[0] = mbuf[mbufi_SMPPairingRandom + 1];
mbufi_SMPPairingRandom += 2;
union u_SMPPairingRandom_RandomValue_t {
ble_random_number_t p;
byte bytebuffer[16];
} u_SMPPairingRandom_RandomValue;
u_SMPPairingRandom_RandomValue.bytebuffer[15] = mbuf[mbufi_SMPPairingRandom + 0];
u_SMPPairingRandom_RandomValue.bytebuffer[14] = mbuf[mbufi_SMPPairingRandom + 1];
u_SMPPairingRandom_RandomValue.bytebuffer[13] = mbuf[mbufi_SMPPairingRandom + 2];
u_SMPPairingRandom_RandomValue.bytebuffer[12] = mbuf[mbufi_SMPPairingRandom + 3];
u_SMPPairingRandom_RandomValue.bytebuffer[11] = mbuf[mbufi_SMPPairingRandom + 4];
u_SMPPairingRandom_RandomValue.bytebuffer[10] = mbuf[mbufi_SMPPairingRandom + 5];
u_SMPPairingRandom_RandomValue.bytebuffer[9] = mbuf[mbufi_SMPPairingRandom + 6];
u_SMPPairingRandom_RandomValue.bytebuffer[8] = mbuf[mbufi_SMPPairingRandom + 7];
u_SMPPairingRandom_RandomValue.bytebuffer[7] = mbuf[mbufi_SMPPairingRandom + 8];
u_SMPPairingRandom_RandomValue.bytebuffer[6] = mbuf[mbufi_SMPPairingRandom + 9];
u_SMPPairingRandom_RandomValue.bytebuffer[5] = mbuf[mbufi_SMPPairingRandom + 10];
u_SMPPairingRandom_RandomValue.bytebuffer[4] = mbuf[mbufi_SMPPairingRandom + 11];
u_SMPPairingRandom_RandomValue.bytebuffer[3] = mbuf[mbufi_SMPPairingRandom + 12];
u_SMPPairingRandom_RandomValue.bytebuffer[2] = mbuf[mbufi_SMPPairingRandom + 13];
u_SMPPairingRandom_RandomValue.bytebuffer[1] = mbuf[mbufi_SMPPairingRandom + 14];
u_SMPPairingRandom_RandomValue.bytebuffer[0] = mbuf[mbufi_SMPPairingRandom + 15];
mbufi_SMPPairingRandom += 16;
dispatch_SMPPairingRandom((mbuf[0] << 8) + mbuf[1] /* instance port*/,
 u_SMPPairingRandom_Handle.p /* Handle */ ,
 u_SMPPairingRandom_RandomValue.p /* RandomValue */ );
break;
}
case 23:{
byte mbuf[252 - 2];
while (mbufi < (252 - 2)) mbuf[mbufi++] = fifo_dequeue();
fifo_unlock();
uint8_t mbufi_SetLocalName = 2;
union u_SetLocalName_Name_t {
change_local_name_cp p;
byte bytebuffer[248];
} u_SetLocalName_Name;
u_SetLocalName_Name.bytebuffer[247] = mbuf[mbufi_SetLocalName + 0];
u_SetLocalName_Name.bytebuffer[246] = mbuf[mbufi_SetLocalName + 1];
u_SetLocalName_Name.bytebuffer[245] = mbuf[mbufi_SetLocalName + 2];
u_SetLocalName_Name.bytebuffer[244] = mbuf[mbufi_SetLocalName + 3];
u_SetLocalName_Name.bytebuffer[243] = mbuf[mbufi_SetLocalName + 4];
u_SetLocalName_Name.bytebuffer[242] = mbuf[mbufi_SetLocalName + 5];
u_SetLocalName_Name.bytebuffer[241] = mbuf[mbufi_SetLocalName + 6];
u_SetLocalName_Name.bytebuffer[240] = mbuf[mbufi_SetLocalName + 7];
u_SetLocalName_Name.bytebuffer[239] = mbuf[mbufi_SetLocalName + 8];
u_SetLocalName_Name.bytebuffer[238] = mbuf[mbufi_SetLocalName + 9];
u_SetLocalName_Name.bytebuffer[237] = mbuf[mbufi_SetLocalName + 10];
u_SetLocalName_Name.bytebuffer[236] = mbuf[mbufi_SetLocalName + 11];
u_SetLocalName_Name.bytebuffer[235] = mbuf[mbufi_SetLocalName + 12];
u_SetLocalName_Name.bytebuffer[234] = mbuf[mbufi_SetLocalName + 13];
u_SetLocalName_Name.bytebuffer[233] = mbuf[mbufi_SetLocalName + 14];
u_SetLocalName_Name.bytebuffer[232] = mbuf[mbufi_SetLocalName + 15];
u_SetLocalName_Name.bytebuffer[231] = mbuf[mbufi_SetLocalName + 16];
u_SetLocalName_Name.bytebuffer[230] = mbuf[mbufi_SetLocalName + 17];
u_SetLocalName_Name.bytebuffer[229] = mbuf[mbufi_SetLocalName + 18];
u_SetLocalName_Name.bytebuffer[228] = mbuf[mbufi_SetLocalName + 19];
u_SetLocalName_Name.bytebuffer[227] = mbuf[mbufi_SetLocalName + 20];
u_SetLocalName_Name.bytebuffer[226] = mbuf[mbufi_SetLocalName + 21];
u_SetLocalName_Name.bytebuffer[225] = mbuf[mbufi_SetLocalName + 22];
u_SetLocalName_Name.bytebuffer[224] = mbuf[mbufi_SetLocalName + 23];
u_SetLocalName_Name.bytebuffer[223] = mbuf[mbufi_SetLocalName + 24];
u_SetLocalName_Name.bytebuffer[222] = mbuf[mbufi_SetLocalName + 25];
u_SetLocalName_Name.bytebuffer[221] = mbuf[mbufi_SetLocalName + 26];
u_SetLocalName_Name.bytebuffer[220] = mbuf[mbufi_SetLocalName + 27];
u_SetLocalName_Name.bytebuffer[219] = mbuf[mbufi_SetLocalName + 28];
u_SetLocalName_Name.bytebuffer[218] = mbuf[mbufi_SetLocalName + 29];
u_SetLocalName_Name.bytebuffer[217] = mbuf[mbufi_SetLocalName + 30];
u_SetLocalName_Name.bytebuffer[216] = mbuf[mbufi_SetLocalName + 31];
u_SetLocalName_Name.bytebuffer[215] = mbuf[mbufi_SetLocalName + 32];
u_SetLocalName_Name.bytebuffer[214] = mbuf[mbufi_SetLocalName + 33];
u_SetLocalName_Name.bytebuffer[213] = mbuf[mbufi_SetLocalName + 34];
u_SetLocalName_Name.bytebuffer[212] = mbuf[mbufi_SetLocalName + 35];
u_SetLocalName_Name.bytebuffer[211] = mbuf[mbufi_SetLocalName + 36];
u_SetLocalName_Name.bytebuffer[210] = mbuf[mbufi_SetLocalName + 37];
u_SetLocalName_Name.bytebuffer[209] = mbuf[mbufi_SetLocalName + 38];
u_SetLocalName_Name.bytebuffer[208] = mbuf[mbufi_SetLocalName + 39];
u_SetLocalName_Name.bytebuffer[207] = mbuf[mbufi_SetLocalName + 40];
u_SetLocalName_Name.bytebuffer[206] = mbuf[mbufi_SetLocalName + 41];
u_SetLocalName_Name.bytebuffer[205] = mbuf[mbufi_SetLocalName + 42];
u_SetLocalName_Name.bytebuffer[204] = mbuf[mbufi_SetLocalName + 43];
u_SetLocalName_Name.bytebuffer[203] = mbuf[mbufi_SetLocalName + 44];
u_SetLocalName_Name.bytebuffer[202] = mbuf[mbufi_SetLocalName + 45];
u_SetLocalName_Name.bytebuffer[201] = mbuf[mbufi_SetLocalName + 46];
u_SetLocalName_Name.bytebuffer[200] = mbuf[mbufi_SetLocalName + 47];
u_SetLocalName_Name.bytebuffer[199] = mbuf[mbufi_SetLocalName + 48];
u_SetLocalName_Name.bytebuffer[198] = mbuf[mbufi_SetLocalName + 49];
u_SetLocalName_Name.bytebuffer[197] = mbuf[mbufi_SetLocalName + 50];
u_SetLocalName_Name.bytebuffer[196] = mbuf[mbufi_SetLocalName + 51];
u_SetLocalName_Name.bytebuffer[195] = mbuf[mbufi_SetLocalName + 52];
u_SetLocalName_Name.bytebuffer[194] = mbuf[mbufi_SetLocalName + 53];
u_SetLocalName_Name.bytebuffer[193] = mbuf[mbufi_SetLocalName + 54];
u_SetLocalName_Name.bytebuffer[192] = mbuf[mbufi_SetLocalName + 55];
u_SetLocalName_Name.bytebuffer[191] = mbuf[mbufi_SetLocalName + 56];
u_SetLocalName_Name.bytebuffer[190] = mbuf[mbufi_SetLocalName + 57];
u_SetLocalName_Name.bytebuffer[189] = mbuf[mbufi_SetLocalName + 58];
u_SetLocalName_Name.bytebuffer[188] = mbuf[mbufi_SetLocalName + 59];
u_SetLocalName_Name.bytebuffer[187] = mbuf[mbufi_SetLocalName + 60];
u_SetLocalName_Name.bytebuffer[186] = mbuf[mbufi_SetLocalName + 61];
u_SetLocalName_Name.bytebuffer[185] = mbuf[mbufi_SetLocalName + 62];
u_SetLocalName_Name.bytebuffer[184] = mbuf[mbufi_SetLocalName + 63];
u_SetLocalName_Name.bytebuffer[183] = mbuf[mbufi_SetLocalName + 64];
u_SetLocalName_Name.bytebuffer[182] = mbuf[mbufi_SetLocalName + 65];
u_SetLocalName_Name.bytebuffer[181] = mbuf[mbufi_SetLocalName + 66];
u_SetLocalName_Name.bytebuffer[180] = mbuf[mbufi_SetLocalName + 67];
u_SetLocalName_Name.bytebuffer[179] = mbuf[mbufi_SetLocalName + 68];
u_SetLocalName_Name.bytebuffer[178] = mbuf[mbufi_SetLocalName + 69];
u_SetLocalName_Name.bytebuffer[177] = mbuf[mbufi_SetLocalName + 70];
u_SetLocalName_Name.bytebuffer[176] = mbuf[mbufi_SetLocalName + 71];
u_SetLocalName_Name.bytebuffer[175] = mbuf[mbufi_SetLocalName + 72];
u_SetLocalName_Name.bytebuffer[174] = mbuf[mbufi_SetLocalName + 73];
u_SetLocalName_Name.bytebuffer[173] = mbuf[mbufi_SetLocalName + 74];
u_SetLocalName_Name.bytebuffer[172] = mbuf[mbufi_SetLocalName + 75];
u_SetLocalName_Name.bytebuffer[171] = mbuf[mbufi_SetLocalName + 76];
u_SetLocalName_Name.bytebuffer[170] = mbuf[mbufi_SetLocalName + 77];
u_SetLocalName_Name.bytebuffer[169] = mbuf[mbufi_SetLocalName + 78];
u_SetLocalName_Name.bytebuffer[168] = mbuf[mbufi_SetLocalName + 79];
u_SetLocalName_Name.bytebuffer[167] = mbuf[mbufi_SetLocalName + 80];
u_SetLocalName_Name.bytebuffer[166] = mbuf[mbufi_SetLocalName + 81];
u_SetLocalName_Name.bytebuffer[165] = mbuf[mbufi_SetLocalName + 82];
u_SetLocalName_Name.bytebuffer[164] = mbuf[mbufi_SetLocalName + 83];
u_SetLocalName_Name.bytebuffer[163] = mbuf[mbufi_SetLocalName + 84];
u_SetLocalName_Name.bytebuffer[162] = mbuf[mbufi_SetLocalName + 85];
u_SetLocalName_Name.bytebuffer[161] = mbuf[mbufi_SetLocalName + 86];
u_SetLocalName_Name.bytebuffer[160] = mbuf[mbufi_SetLocalName + 87];
u_SetLocalName_Name.bytebuffer[159] = mbuf[mbufi_SetLocalName + 88];
u_SetLocalName_Name.bytebuffer[158] = mbuf[mbufi_SetLocalName + 89];
u_SetLocalName_Name.bytebuffer[157] = mbuf[mbufi_SetLocalName + 90];
u_SetLocalName_Name.bytebuffer[156] = mbuf[mbufi_SetLocalName + 91];
u_SetLocalName_Name.bytebuffer[155] = mbuf[mbufi_SetLocalName + 92];
u_SetLocalName_Name.bytebuffer[154] = mbuf[mbufi_SetLocalName + 93];
u_SetLocalName_Name.bytebuffer[153] = mbuf[mbufi_SetLocalName + 94];
u_SetLocalName_Name.bytebuffer[152] = mbuf[mbufi_SetLocalName + 95];
u_SetLocalName_Name.bytebuffer[151] = mbuf[mbufi_SetLocalName + 96];
u_SetLocalName_Name.bytebuffer[150] = mbuf[mbufi_SetLocalName + 97];
u_SetLocalName_Name.bytebuffer[149] = mbuf[mbufi_SetLocalName + 98];
u_SetLocalName_Name.bytebuffer[148] = mbuf[mbufi_SetLocalName + 99];
u_SetLocalName_Name.bytebuffer[147] = mbuf[mbufi_SetLocalName + 100];
u_SetLocalName_Name.bytebuffer[146] = mbuf[mbufi_SetLocalName + 101];
u_SetLocalName_Name.bytebuffer[145] = mbuf[mbufi_SetLocalName + 102];
u_SetLocalName_Name.bytebuffer[144] = mbuf[mbufi_SetLocalName + 103];
u_SetLocalName_Name.bytebuffer[143] = mbuf[mbufi_SetLocalName + 104];
u_SetLocalName_Name.bytebuffer[142] = mbuf[mbufi_SetLocalName + 105];
u_SetLocalName_Name.bytebuffer[141] = mbuf[mbufi_SetLocalName + 106];
u_SetLocalName_Name.bytebuffer[140] = mbuf[mbufi_SetLocalName + 107];
u_SetLocalName_Name.bytebuffer[139] = mbuf[mbufi_SetLocalName + 108];
u_SetLocalName_Name.bytebuffer[138] = mbuf[mbufi_SetLocalName + 109];
u_SetLocalName_Name.bytebuffer[137] = mbuf[mbufi_SetLocalName + 110];
u_SetLocalName_Name.bytebuffer[136] = mbuf[mbufi_SetLocalName + 111];
u_SetLocalName_Name.bytebuffer[135] = mbuf[mbufi_SetLocalName + 112];
u_SetLocalName_Name.bytebuffer[134] = mbuf[mbufi_SetLocalName + 113];
u_SetLocalName_Name.bytebuffer[133] = mbuf[mbufi_SetLocalName + 114];
u_SetLocalName_Name.bytebuffer[132] = mbuf[mbufi_SetLocalName + 115];
u_SetLocalName_Name.bytebuffer[131] = mbuf[mbufi_SetLocalName + 116];
u_SetLocalName_Name.bytebuffer[130] = mbuf[mbufi_SetLocalName + 117];
u_SetLocalName_Name.bytebuffer[129] = mbuf[mbufi_SetLocalName + 118];
u_SetLocalName_Name.bytebuffer[128] = mbuf[mbufi_SetLocalName + 119];
u_SetLocalName_Name.bytebuffer[127] = mbuf[mbufi_SetLocalName + 120];
u_SetLocalName_Name.bytebuffer[126] = mbuf[mbufi_SetLocalName + 121];
u_SetLocalName_Name.bytebuffer[125] = mbuf[mbufi_SetLocalName + 122];
u_SetLocalName_Name.bytebuffer[124] = mbuf[mbufi_SetLocalName + 123];
u_SetLocalName_Name.bytebuffer[123] = mbuf[mbufi_SetLocalName + 124];
u_SetLocalName_Name.bytebuffer[122] = mbuf[mbufi_SetLocalName + 125];
u_SetLocalName_Name.bytebuffer[121] = mbuf[mbufi_SetLocalName + 126];
u_SetLocalName_Name.bytebuffer[120] = mbuf[mbufi_SetLocalName + 127];
u_SetLocalName_Name.bytebuffer[119] = mbuf[mbufi_SetLocalName + 128];
u_SetLocalName_Name.bytebuffer[118] = mbuf[mbufi_SetLocalName + 129];
u_SetLocalName_Name.bytebuffer[117] = mbuf[mbufi_SetLocalName + 130];
u_SetLocalName_Name.bytebuffer[116] = mbuf[mbufi_SetLocalName + 131];
u_SetLocalName_Name.bytebuffer[115] = mbuf[mbufi_SetLocalName + 132];
u_SetLocalName_Name.bytebuffer[114] = mbuf[mbufi_SetLocalName + 133];
u_SetLocalName_Name.bytebuffer[113] = mbuf[mbufi_SetLocalName + 134];
u_SetLocalName_Name.bytebuffer[112] = mbuf[mbufi_SetLocalName + 135];
u_SetLocalName_Name.bytebuffer[111] = mbuf[mbufi_SetLocalName + 136];
u_SetLocalName_Name.bytebuffer[110] = mbuf[mbufi_SetLocalName + 137];
u_SetLocalName_Name.bytebuffer[109] = mbuf[mbufi_SetLocalName + 138];
u_SetLocalName_Name.bytebuffer[108] = mbuf[mbufi_SetLocalName + 139];
u_SetLocalName_Name.bytebuffer[107] = mbuf[mbufi_SetLocalName + 140];
u_SetLocalName_Name.bytebuffer[106] = mbuf[mbufi_SetLocalName + 141];
u_SetLocalName_Name.bytebuffer[105] = mbuf[mbufi_SetLocalName + 142];
u_SetLocalName_Name.bytebuffer[104] = mbuf[mbufi_SetLocalName + 143];
u_SetLocalName_Name.bytebuffer[103] = mbuf[mbufi_SetLocalName + 144];
u_SetLocalName_Name.bytebuffer[102] = mbuf[mbufi_SetLocalName + 145];
u_SetLocalName_Name.bytebuffer[101] = mbuf[mbufi_SetLocalName + 146];
u_SetLocalName_Name.bytebuffer[100] = mbuf[mbufi_SetLocalName + 147];
u_SetLocalName_Name.bytebuffer[99] = mbuf[mbufi_SetLocalName + 148];
u_SetLocalName_Name.bytebuffer[98] = mbuf[mbufi_SetLocalName + 149];
u_SetLocalName_Name.bytebuffer[97] = mbuf[mbufi_SetLocalName + 150];
u_SetLocalName_Name.bytebuffer[96] = mbuf[mbufi_SetLocalName + 151];
u_SetLocalName_Name.bytebuffer[95] = mbuf[mbufi_SetLocalName + 152];
u_SetLocalName_Name.bytebuffer[94] = mbuf[mbufi_SetLocalName + 153];
u_SetLocalName_Name.bytebuffer[93] = mbuf[mbufi_SetLocalName + 154];
u_SetLocalName_Name.bytebuffer[92] = mbuf[mbufi_SetLocalName + 155];
u_SetLocalName_Name.bytebuffer[91] = mbuf[mbufi_SetLocalName + 156];
u_SetLocalName_Name.bytebuffer[90] = mbuf[mbufi_SetLocalName + 157];
u_SetLocalName_Name.bytebuffer[89] = mbuf[mbufi_SetLocalName + 158];
u_SetLocalName_Name.bytebuffer[88] = mbuf[mbufi_SetLocalName + 159];
u_SetLocalName_Name.bytebuffer[87] = mbuf[mbufi_SetLocalName + 160];
u_SetLocalName_Name.bytebuffer[86] = mbuf[mbufi_SetLocalName + 161];
u_SetLocalName_Name.bytebuffer[85] = mbuf[mbufi_SetLocalName + 162];
u_SetLocalName_Name.bytebuffer[84] = mbuf[mbufi_SetLocalName + 163];
u_SetLocalName_Name.bytebuffer[83] = mbuf[mbufi_SetLocalName + 164];
u_SetLocalName_Name.bytebuffer[82] = mbuf[mbufi_SetLocalName + 165];
u_SetLocalName_Name.bytebuffer[81] = mbuf[mbufi_SetLocalName + 166];
u_SetLocalName_Name.bytebuffer[80] = mbuf[mbufi_SetLocalName + 167];
u_SetLocalName_Name.bytebuffer[79] = mbuf[mbufi_SetLocalName + 168];
u_SetLocalName_Name.bytebuffer[78] = mbuf[mbufi_SetLocalName + 169];
u_SetLocalName_Name.bytebuffer[77] = mbuf[mbufi_SetLocalName + 170];
u_SetLocalName_Name.bytebuffer[76] = mbuf[mbufi_SetLocalName + 171];
u_SetLocalName_Name.bytebuffer[75] = mbuf[mbufi_SetLocalName + 172];
u_SetLocalName_Name.bytebuffer[74] = mbuf[mbufi_SetLocalName + 173];
u_SetLocalName_Name.bytebuffer[73] = mbuf[mbufi_SetLocalName + 174];
u_SetLocalName_Name.bytebuffer[72] = mbuf[mbufi_SetLocalName + 175];
u_SetLocalName_Name.bytebuffer[71] = mbuf[mbufi_SetLocalName + 176];
u_SetLocalName_Name.bytebuffer[70] = mbuf[mbufi_SetLocalName + 177];
u_SetLocalName_Name.bytebuffer[69] = mbuf[mbufi_SetLocalName + 178];
u_SetLocalName_Name.bytebuffer[68] = mbuf[mbufi_SetLocalName + 179];
u_SetLocalName_Name.bytebuffer[67] = mbuf[mbufi_SetLocalName + 180];
u_SetLocalName_Name.bytebuffer[66] = mbuf[mbufi_SetLocalName + 181];
u_SetLocalName_Name.bytebuffer[65] = mbuf[mbufi_SetLocalName + 182];
u_SetLocalName_Name.bytebuffer[64] = mbuf[mbufi_SetLocalName + 183];
u_SetLocalName_Name.bytebuffer[63] = mbuf[mbufi_SetLocalName + 184];
u_SetLocalName_Name.bytebuffer[62] = mbuf[mbufi_SetLocalName + 185];
u_SetLocalName_Name.bytebuffer[61] = mbuf[mbufi_SetLocalName + 186];
u_SetLocalName_Name.bytebuffer[60] = mbuf[mbufi_SetLocalName + 187];
u_SetLocalName_Name.bytebuffer[59] = mbuf[mbufi_SetLocalName + 188];
u_SetLocalName_Name.bytebuffer[58] = mbuf[mbufi_SetLocalName + 189];
u_SetLocalName_Name.bytebuffer[57] = mbuf[mbufi_SetLocalName + 190];
u_SetLocalName_Name.bytebuffer[56] = mbuf[mbufi_SetLocalName + 191];
u_SetLocalName_Name.bytebuffer[55] = mbuf[mbufi_SetLocalName + 192];
u_SetLocalName_Name.bytebuffer[54] = mbuf[mbufi_SetLocalName + 193];
u_SetLocalName_Name.bytebuffer[53] = mbuf[mbufi_SetLocalName + 194];
u_SetLocalName_Name.bytebuffer[52] = mbuf[mbufi_SetLocalName + 195];
u_SetLocalName_Name.bytebuffer[51] = mbuf[mbufi_SetLocalName + 196];
u_SetLocalName_Name.bytebuffer[50] = mbuf[mbufi_SetLocalName + 197];
u_SetLocalName_Name.bytebuffer[49] = mbuf[mbufi_SetLocalName + 198];
u_SetLocalName_Name.bytebuffer[48] = mbuf[mbufi_SetLocalName + 199];
u_SetLocalName_Name.bytebuffer[47] = mbuf[mbufi_SetLocalName + 200];
u_SetLocalName_Name.bytebuffer[46] = mbuf[mbufi_SetLocalName + 201];
u_SetLocalName_Name.bytebuffer[45] = mbuf[mbufi_SetLocalName + 202];
u_SetLocalName_Name.bytebuffer[44] = mbuf[mbufi_SetLocalName + 203];
u_SetLocalName_Name.bytebuffer[43] = mbuf[mbufi_SetLocalName + 204];
u_SetLocalName_Name.bytebuffer[42] = mbuf[mbufi_SetLocalName + 205];
u_SetLocalName_Name.bytebuffer[41] = mbuf[mbufi_SetLocalName + 206];
u_SetLocalName_Name.bytebuffer[40] = mbuf[mbufi_SetLocalName + 207];
u_SetLocalName_Name.bytebuffer[39] = mbuf[mbufi_SetLocalName + 208];
u_SetLocalName_Name.bytebuffer[38] = mbuf[mbufi_SetLocalName + 209];
u_SetLocalName_Name.bytebuffer[37] = mbuf[mbufi_SetLocalName + 210];
u_SetLocalName_Name.bytebuffer[36] = mbuf[mbufi_SetLocalName + 211];
u_SetLocalName_Name.bytebuffer[35] = mbuf[mbufi_SetLocalName + 212];
u_SetLocalName_Name.bytebuffer[34] = mbuf[mbufi_SetLocalName + 213];
u_SetLocalName_Name.bytebuffer[33] = mbuf[mbufi_SetLocalName + 214];
u_SetLocalName_Name.bytebuffer[32] = mbuf[mbufi_SetLocalName + 215];
u_SetLocalName_Name.bytebuffer[31] = mbuf[mbufi_SetLocalName + 216];
u_SetLocalName_Name.bytebuffer[30] = mbuf[mbufi_SetLocalName + 217];
u_SetLocalName_Name.bytebuffer[29] = mbuf[mbufi_SetLocalName + 218];
u_SetLocalName_Name.bytebuffer[28] = mbuf[mbufi_SetLocalName + 219];
u_SetLocalName_Name.bytebuffer[27] = mbuf[mbufi_SetLocalName + 220];
u_SetLocalName_Name.bytebuffer[26] = mbuf[mbufi_SetLocalName + 221];
u_SetLocalName_Name.bytebuffer[25] = mbuf[mbufi_SetLocalName + 222];
u_SetLocalName_Name.bytebuffer[24] = mbuf[mbufi_SetLocalName + 223];
u_SetLocalName_Name.bytebuffer[23] = mbuf[mbufi_SetLocalName + 224];
u_SetLocalName_Name.bytebuffer[22] = mbuf[mbufi_SetLocalName + 225];
u_SetLocalName_Name.bytebuffer[21] = mbuf[mbufi_SetLocalName + 226];
u_SetLocalName_Name.bytebuffer[20] = mbuf[mbufi_SetLocalName + 227];
u_SetLocalName_Name.bytebuffer[19] = mbuf[mbufi_SetLocalName + 228];
u_SetLocalName_Name.bytebuffer[18] = mbuf[mbufi_SetLocalName + 229];
u_SetLocalName_Name.bytebuffer[17] = mbuf[mbufi_SetLocalName + 230];
u_SetLocalName_Name.bytebuffer[16] = mbuf[mbufi_SetLocalName + 231];
u_SetLocalName_Name.bytebuffer[15] = mbuf[mbufi_SetLocalName + 232];
u_SetLocalName_Name.bytebuffer[14] = mbuf[mbufi_SetLocalName + 233];
u_SetLocalName_Name.bytebuffer[13] = mbuf[mbufi_SetLocalName + 234];
u_SetLocalName_Name.bytebuffer[12] = mbuf[mbufi_SetLocalName + 235];
u_SetLocalName_Name.bytebuffer[11] = mbuf[mbufi_SetLocalName + 236];
u_SetLocalName_Name.bytebuffer[10] = mbuf[mbufi_SetLocalName + 237];
u_SetLocalName_Name.bytebuffer[9] = mbuf[mbufi_SetLocalName + 238];
u_SetLocalName_Name.bytebuffer[8] = mbuf[mbufi_SetLocalName + 239];
u_SetLocalName_Name.bytebuffer[7] = mbuf[mbufi_SetLocalName + 240];
u_SetLocalName_Name.bytebuffer[6] = mbuf[mbufi_SetLocalName + 241];
u_SetLocalName_Name.bytebuffer[5] = mbuf[mbufi_SetLocalName + 242];
u_SetLocalName_Name.bytebuffer[4] = mbuf[mbufi_SetLocalName + 243];
u_SetLocalName_Name.bytebuffer[3] = mbuf[mbufi_SetLocalName + 244];
u_SetLocalName_Name.bytebuffer[2] = mbuf[mbufi_SetLocalName + 245];
u_SetLocalName_Name.bytebuffer[1] = mbuf[mbufi_SetLocalName + 246];
u_SetLocalName_Name.bytebuffer[0] = mbuf[mbufi_SetLocalName + 247];
mbufi_SetLocalName += 248;
dispatch_SetLocalName((mbuf[0] << 8) + mbuf[1] /* instance port*/,
 u_SetLocalName_Name.p /* Name */ );
break;
}
case 63:{
byte mbuf[4 - 2];
while (mbufi < (4 - 2)) mbuf[mbufi++] = fifo_dequeue();
fifo_unlock();
uint8_t mbufi_FinishedConnection = 2;
dispatch_FinishedConnection((mbuf[0] << 8) + mbuf[1] /* instance port*/);
break;
}
case 27:{
byte mbuf[12 - 2];
while (mbufi < (12 - 2)) mbuf[mbufi++] = fifo_dequeue();
fifo_unlock();
uint8_t mbufi_SetLEEventMask = 2;
union u_SetLEEventMask_Mask_t {
set_event_mask_cp p;
byte bytebuffer[8];
} u_SetLEEventMask_Mask;
u_SetLEEventMask_Mask.bytebuffer[7] = mbuf[mbufi_SetLEEventMask + 0];
u_SetLEEventMask_Mask.bytebuffer[6] = mbuf[mbufi_SetLEEventMask + 1];
u_SetLEEventMask_Mask.bytebuffer[5] = mbuf[mbufi_SetLEEventMask + 2];
u_SetLEEventMask_Mask.bytebuffer[4] = mbuf[mbufi_SetLEEventMask + 3];
u_SetLEEventMask_Mask.bytebuffer[3] = mbuf[mbufi_SetLEEventMask + 4];
u_SetLEEventMask_Mask.bytebuffer[2] = mbuf[mbufi_SetLEEventMask + 5];
u_SetLEEventMask_Mask.bytebuffer[1] = mbuf[mbufi_SetLEEventMask + 6];
u_SetLEEventMask_Mask.bytebuffer[0] = mbuf[mbufi_SetLEEventMask + 7];
mbufi_SetLEEventMask += 8;
dispatch_SetLEEventMask((mbuf[0] << 8) + mbuf[1] /* instance port*/,
 u_SetLEEventMask_Mask.p /* Mask */ );
break;
}
case 104:{
byte mbuf[8 - 2];
while (mbufi < (8 - 2)) mbuf[mbufi++] = fifo_dequeue();
fifo_unlock();
uint8_t mbufi_EncryptionChanged = 2;
union u_EncryptionChanged_Status_t {
uint8_t p;
byte bytebuffer[1];
} u_EncryptionChanged_Status;
u_EncryptionChanged_Status.bytebuffer[0] = mbuf[mbufi_EncryptionChanged + 0];
mbufi_EncryptionChanged += 1;
union u_EncryptionChanged_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_EncryptionChanged_ConnectionHandle;
u_EncryptionChanged_ConnectionHandle.bytebuffer[1] = mbuf[mbufi_EncryptionChanged + 0];
u_EncryptionChanged_ConnectionHandle.bytebuffer[0] = mbuf[mbufi_EncryptionChanged + 1];
mbufi_EncryptionChanged += 2;
union u_EncryptionChanged_Enabled_t {
uint8_t p;
byte bytebuffer[1];
} u_EncryptionChanged_Enabled;
u_EncryptionChanged_Enabled.bytebuffer[0] = mbuf[mbufi_EncryptionChanged + 0];
mbufi_EncryptionChanged += 1;
dispatch_EncryptionChanged((mbuf[0] << 8) + mbuf[1] /* instance port*/,
 u_EncryptionChanged_Status.p /* Status */ ,
 u_EncryptionChanged_ConnectionHandle.p /* ConnectionHandle */ ,
 u_EncryptionChanged_Enabled.p /* Enabled */ );
break;
}
case 93:{
byte mbuf[22 - 2];
while (mbufi < (22 - 2)) mbuf[mbufi++] = fifo_dequeue();
fifo_unlock();
uint8_t mbufi_LEConnectionComplete = 2;
union u_LEConnectionComplete_Status_t {
uint8_t p;
byte bytebuffer[1];
} u_LEConnectionComplete_Status;
u_LEConnectionComplete_Status.bytebuffer[0] = mbuf[mbufi_LEConnectionComplete + 0];
mbufi_LEConnectionComplete += 1;
union u_LEConnectionComplete_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_LEConnectionComplete_ConnectionHandle;
u_LEConnectionComplete_ConnectionHandle.bytebuffer[1] = mbuf[mbufi_LEConnectionComplete + 0];
u_LEConnectionComplete_ConnectionHandle.bytebuffer[0] = mbuf[mbufi_LEConnectionComplete + 1];
mbufi_LEConnectionComplete += 2;
union u_LEConnectionComplete_Role_t {
uint8_t p;
byte bytebuffer[1];
} u_LEConnectionComplete_Role;
u_LEConnectionComplete_Role.bytebuffer[0] = mbuf[mbufi_LEConnectionComplete + 0];
mbufi_LEConnectionComplete += 1;
union u_LEConnectionComplete_PeerAddressType_t {
uint8_t p;
byte bytebuffer[1];
} u_LEConnectionComplete_PeerAddressType;
u_LEConnectionComplete_PeerAddressType.bytebuffer[0] = mbuf[mbufi_LEConnectionComplete + 0];
mbufi_LEConnectionComplete += 1;
union u_LEConnectionComplete_PeerAddress_t {
bdaddr_t p;
byte bytebuffer[6];
} u_LEConnectionComplete_PeerAddress;
u_LEConnectionComplete_PeerAddress.bytebuffer[5] = mbuf[mbufi_LEConnectionComplete + 0];
u_LEConnectionComplete_PeerAddress.bytebuffer[4] = mbuf[mbufi_LEConnectionComplete + 1];
u_LEConnectionComplete_PeerAddress.bytebuffer[3] = mbuf[mbufi_LEConnectionComplete + 2];
u_LEConnectionComplete_PeerAddress.bytebuffer[2] = mbuf[mbufi_LEConnectionComplete + 3];
u_LEConnectionComplete_PeerAddress.bytebuffer[1] = mbuf[mbufi_LEConnectionComplete + 4];
u_LEConnectionComplete_PeerAddress.bytebuffer[0] = mbuf[mbufi_LEConnectionComplete + 5];
mbufi_LEConnectionComplete += 6;
union u_LEConnectionComplete_ConnInterval_t {
uint16_t p;
byte bytebuffer[2];
} u_LEConnectionComplete_ConnInterval;
u_LEConnectionComplete_ConnInterval.bytebuffer[1] = mbuf[mbufi_LEConnectionComplete + 0];
u_LEConnectionComplete_ConnInterval.bytebuffer[0] = mbuf[mbufi_LEConnectionComplete + 1];
mbufi_LEConnectionComplete += 2;
union u_LEConnectionComplete_ConnLatency_t {
uint16_t p;
byte bytebuffer[2];
} u_LEConnectionComplete_ConnLatency;
u_LEConnectionComplete_ConnLatency.bytebuffer[1] = mbuf[mbufi_LEConnectionComplete + 0];
u_LEConnectionComplete_ConnLatency.bytebuffer[0] = mbuf[mbufi_LEConnectionComplete + 1];
mbufi_LEConnectionComplete += 2;
union u_LEConnectionComplete_SupervisionTimeout_t {
uint16_t p;
byte bytebuffer[2];
} u_LEConnectionComplete_SupervisionTimeout;
u_LEConnectionComplete_SupervisionTimeout.bytebuffer[1] = mbuf[mbufi_LEConnectionComplete + 0];
u_LEConnectionComplete_SupervisionTimeout.bytebuffer[0] = mbuf[mbufi_LEConnectionComplete + 1];
mbufi_LEConnectionComplete += 2;
union u_LEConnectionComplete_MasterClockAccuracy_t {
uint8_t p;
byte bytebuffer[1];
} u_LEConnectionComplete_MasterClockAccuracy;
u_LEConnectionComplete_MasterClockAccuracy.bytebuffer[0] = mbuf[mbufi_LEConnectionComplete + 0];
mbufi_LEConnectionComplete += 1;
dispatch_LEConnectionComplete((mbuf[0] << 8) + mbuf[1] /* instance port*/,
 u_LEConnectionComplete_Status.p /* Status */ ,
 u_LEConnectionComplete_ConnectionHandle.p /* ConnectionHandle */ ,
 u_LEConnectionComplete_Role.p /* Role */ ,
 u_LEConnectionComplete_PeerAddressType.p /* PeerAddressType */ ,
 u_LEConnectionComplete_PeerAddress.p /* PeerAddress */ ,
 u_LEConnectionComplete_ConnInterval.p /* ConnInterval */ ,
 u_LEConnectionComplete_ConnLatency.p /* ConnLatency */ ,
 u_LEConnectionComplete_SupervisionTimeout.p /* SupervisionTimeout */ ,
 u_LEConnectionComplete_MasterClockAccuracy.p /* MasterClockAccuracy */ );
break;
}
case 68:{
byte mbuf[11 - 2];
while (mbufi < (11 - 2)) mbuf[mbufi++] = fifo_dequeue();
fifo_unlock();
uint8_t mbufi_ConnectToU = 2;
union u_ConnectToU_AddressType_t {
uint8_t p;
byte bytebuffer[1];
} u_ConnectToU_AddressType;
u_ConnectToU_AddressType.bytebuffer[0] = mbuf[mbufi_ConnectToU + 0];
mbufi_ConnectToU += 1;
union u_ConnectToU_Address_t {
bdaddr_t p;
byte bytebuffer[6];
} u_ConnectToU_Address;
u_ConnectToU_Address.bytebuffer[5] = mbuf[mbufi_ConnectToU + 0];
u_ConnectToU_Address.bytebuffer[4] = mbuf[mbufi_ConnectToU + 1];
u_ConnectToU_Address.bytebuffer[3] = mbuf[mbufi_ConnectToU + 2];
u_ConnectToU_Address.bytebuffer[2] = mbuf[mbufi_ConnectToU + 3];
u_ConnectToU_Address.bytebuffer[1] = mbuf[mbufi_ConnectToU + 4];
u_ConnectToU_Address.bytebuffer[0] = mbuf[mbufi_ConnectToU + 5];
mbufi_ConnectToU += 6;
dispatch_ConnectToU((mbuf[0] << 8) + mbuf[1] /* instance port*/,
 u_ConnectToU_AddressType.p /* AddressType */ ,
 u_ConnectToU_Address.p /* Address */ );
break;
}
case 48:{
byte mbuf[26 - 2];
while (mbufi < (26 - 2)) mbuf[mbufi++] = fifo_dequeue();
fifo_unlock();
uint8_t mbufi_ATTReadByTypeRequest = 2;
union u_ATTReadByTypeRequest_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ATTReadByTypeRequest_ConnectionHandle;
u_ATTReadByTypeRequest_ConnectionHandle.bytebuffer[1] = mbuf[mbufi_ATTReadByTypeRequest + 0];
u_ATTReadByTypeRequest_ConnectionHandle.bytebuffer[0] = mbuf[mbufi_ATTReadByTypeRequest + 1];
mbufi_ATTReadByTypeRequest += 2;
union u_ATTReadByTypeRequest_StartingHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ATTReadByTypeRequest_StartingHandle;
u_ATTReadByTypeRequest_StartingHandle.bytebuffer[1] = mbuf[mbufi_ATTReadByTypeRequest + 0];
u_ATTReadByTypeRequest_StartingHandle.bytebuffer[0] = mbuf[mbufi_ATTReadByTypeRequest + 1];
mbufi_ATTReadByTypeRequest += 2;
union u_ATTReadByTypeRequest_EndingHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ATTReadByTypeRequest_EndingHandle;
u_ATTReadByTypeRequest_EndingHandle.bytebuffer[1] = mbuf[mbufi_ATTReadByTypeRequest + 0];
u_ATTReadByTypeRequest_EndingHandle.bytebuffer[0] = mbuf[mbufi_ATTReadByTypeRequest + 1];
mbufi_ATTReadByTypeRequest += 2;
union u_ATTReadByTypeRequest_AttributeType_t {
ble_uuid_t p;
byte bytebuffer[16];
} u_ATTReadByTypeRequest_AttributeType;
u_ATTReadByTypeRequest_AttributeType.bytebuffer[15] = mbuf[mbufi_ATTReadByTypeRequest + 0];
u_ATTReadByTypeRequest_AttributeType.bytebuffer[14] = mbuf[mbufi_ATTReadByTypeRequest + 1];
u_ATTReadByTypeRequest_AttributeType.bytebuffer[13] = mbuf[mbufi_ATTReadByTypeRequest + 2];
u_ATTReadByTypeRequest_AttributeType.bytebuffer[12] = mbuf[mbufi_ATTReadByTypeRequest + 3];
u_ATTReadByTypeRequest_AttributeType.bytebuffer[11] = mbuf[mbufi_ATTReadByTypeRequest + 4];
u_ATTReadByTypeRequest_AttributeType.bytebuffer[10] = mbuf[mbufi_ATTReadByTypeRequest + 5];
u_ATTReadByTypeRequest_AttributeType.bytebuffer[9] = mbuf[mbufi_ATTReadByTypeRequest + 6];
u_ATTReadByTypeRequest_AttributeType.bytebuffer[8] = mbuf[mbufi_ATTReadByTypeRequest + 7];
u_ATTReadByTypeRequest_AttributeType.bytebuffer[7] = mbuf[mbufi_ATTReadByTypeRequest + 8];
u_ATTReadByTypeRequest_AttributeType.bytebuffer[6] = mbuf[mbufi_ATTReadByTypeRequest + 9];
u_ATTReadByTypeRequest_AttributeType.bytebuffer[5] = mbuf[mbufi_ATTReadByTypeRequest + 10];
u_ATTReadByTypeRequest_AttributeType.bytebuffer[4] = mbuf[mbufi_ATTReadByTypeRequest + 11];
u_ATTReadByTypeRequest_AttributeType.bytebuffer[3] = mbuf[mbufi_ATTReadByTypeRequest + 12];
u_ATTReadByTypeRequest_AttributeType.bytebuffer[2] = mbuf[mbufi_ATTReadByTypeRequest + 13];
u_ATTReadByTypeRequest_AttributeType.bytebuffer[1] = mbuf[mbufi_ATTReadByTypeRequest + 14];
u_ATTReadByTypeRequest_AttributeType.bytebuffer[0] = mbuf[mbufi_ATTReadByTypeRequest + 15];
mbufi_ATTReadByTypeRequest += 16;
dispatch_ATTReadByTypeRequest((mbuf[0] << 8) + mbuf[1] /* instance port*/,
 u_ATTReadByTypeRequest_ConnectionHandle.p /* ConnectionHandle */ ,
 u_ATTReadByTypeRequest_StartingHandle.p /* StartingHandle */ ,
 u_ATTReadByTypeRequest_EndingHandle.p /* EndingHandle */ ,
 u_ATTReadByTypeRequest_AttributeType.p /* AttributeType */ );
break;
}
case 5:{
byte mbuf[4 - 2];
while (mbufi < (4 - 2)) mbuf[mbufi++] = fifo_dequeue();
fifo_unlock();
uint8_t mbufi_Stopped = 2;
dispatch_Stopped((mbuf[0] << 8) + mbuf[1] /* instance port*/);
break;
}
case 52:{
byte mbuf[32 - 2];
while (mbufi < (32 - 2)) mbuf[mbufi++] = fifo_dequeue();
fifo_unlock();
uint8_t mbufi_ATTWriteCommand = 2;
union u_ATTWriteCommand_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ATTWriteCommand_ConnectionHandle;
u_ATTWriteCommand_ConnectionHandle.bytebuffer[1] = mbuf[mbufi_ATTWriteCommand + 0];
u_ATTWriteCommand_ConnectionHandle.bytebuffer[0] = mbuf[mbufi_ATTWriteCommand + 1];
mbufi_ATTWriteCommand += 2;
union u_ATTWriteCommand_AttributeHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ATTWriteCommand_AttributeHandle;
u_ATTWriteCommand_AttributeHandle.bytebuffer[1] = mbuf[mbufi_ATTWriteCommand + 0];
u_ATTWriteCommand_AttributeHandle.bytebuffer[0] = mbuf[mbufi_ATTWriteCommand + 1];
mbufi_ATTWriteCommand += 2;
union u_ATTWriteCommand_AttributeValue_t {
ble_gatt_data_t p;
byte bytebuffer[24];
} u_ATTWriteCommand_AttributeValue;
u_ATTWriteCommand_AttributeValue.bytebuffer[23] = mbuf[mbufi_ATTWriteCommand + 0];
u_ATTWriteCommand_AttributeValue.bytebuffer[22] = mbuf[mbufi_ATTWriteCommand + 1];
u_ATTWriteCommand_AttributeValue.bytebuffer[21] = mbuf[mbufi_ATTWriteCommand + 2];
u_ATTWriteCommand_AttributeValue.bytebuffer[20] = mbuf[mbufi_ATTWriteCommand + 3];
u_ATTWriteCommand_AttributeValue.bytebuffer[19] = mbuf[mbufi_ATTWriteCommand + 4];
u_ATTWriteCommand_AttributeValue.bytebuffer[18] = mbuf[mbufi_ATTWriteCommand + 5];
u_ATTWriteCommand_AttributeValue.bytebuffer[17] = mbuf[mbufi_ATTWriteCommand + 6];
u_ATTWriteCommand_AttributeValue.bytebuffer[16] = mbuf[mbufi_ATTWriteCommand + 7];
u_ATTWriteCommand_AttributeValue.bytebuffer[15] = mbuf[mbufi_ATTWriteCommand + 8];
u_ATTWriteCommand_AttributeValue.bytebuffer[14] = mbuf[mbufi_ATTWriteCommand + 9];
u_ATTWriteCommand_AttributeValue.bytebuffer[13] = mbuf[mbufi_ATTWriteCommand + 10];
u_ATTWriteCommand_AttributeValue.bytebuffer[12] = mbuf[mbufi_ATTWriteCommand + 11];
u_ATTWriteCommand_AttributeValue.bytebuffer[11] = mbuf[mbufi_ATTWriteCommand + 12];
u_ATTWriteCommand_AttributeValue.bytebuffer[10] = mbuf[mbufi_ATTWriteCommand + 13];
u_ATTWriteCommand_AttributeValue.bytebuffer[9] = mbuf[mbufi_ATTWriteCommand + 14];
u_ATTWriteCommand_AttributeValue.bytebuffer[8] = mbuf[mbufi_ATTWriteCommand + 15];
u_ATTWriteCommand_AttributeValue.bytebuffer[7] = mbuf[mbufi_ATTWriteCommand + 16];
u_ATTWriteCommand_AttributeValue.bytebuffer[6] = mbuf[mbufi_ATTWriteCommand + 17];
u_ATTWriteCommand_AttributeValue.bytebuffer[5] = mbuf[mbufi_ATTWriteCommand + 18];
u_ATTWriteCommand_AttributeValue.bytebuffer[4] = mbuf[mbufi_ATTWriteCommand + 19];
u_ATTWriteCommand_AttributeValue.bytebuffer[3] = mbuf[mbufi_ATTWriteCommand + 20];
u_ATTWriteCommand_AttributeValue.bytebuffer[2] = mbuf[mbufi_ATTWriteCommand + 21];
u_ATTWriteCommand_AttributeValue.bytebuffer[1] = mbuf[mbufi_ATTWriteCommand + 22];
u_ATTWriteCommand_AttributeValue.bytebuffer[0] = mbuf[mbufi_ATTWriteCommand + 23];
mbufi_ATTWriteCommand += 24;
dispatch_ATTWriteCommand((mbuf[0] << 8) + mbuf[1] /* instance port*/,
 u_ATTWriteCommand_ConnectionHandle.p /* ConnectionHandle */ ,
 u_ATTWriteCommand_AttributeHandle.p /* AttributeHandle */ ,
 u_ATTWriteCommand_AttributeValue.p /* AttributeValue */ );
break;
}
case 99:{
byte mbuf[6 - 2];
while (mbufi < (6 - 2)) mbuf[mbufi++] = fifo_dequeue();
fifo_unlock();
uint8_t mbufi_SetLEAdvertisingDataCompleted = 2;
union u_SetLEAdvertisingDataCompleted_NumberAllowedCommandPackets_t {
uint8_t p;
byte bytebuffer[1];
} u_SetLEAdvertisingDataCompleted_NumberAllowedCommandPackets;
u_SetLEAdvertisingDataCompleted_NumberAllowedCommandPackets.bytebuffer[0] = mbuf[mbufi_SetLEAdvertisingDataCompleted + 0];
mbufi_SetLEAdvertisingDataCompleted += 1;
union u_SetLEAdvertisingDataCompleted_Status_t {
uint8_t p;
byte bytebuffer[1];
} u_SetLEAdvertisingDataCompleted_Status;
u_SetLEAdvertisingDataCompleted_Status.bytebuffer[0] = mbuf[mbufi_SetLEAdvertisingDataCompleted + 0];
mbufi_SetLEAdvertisingDataCompleted += 1;
dispatch_SetLEAdvertisingDataCompleted((mbuf[0] << 8) + mbuf[1] /* instance port*/,
 u_SetLEAdvertisingDataCompleted_NumberAllowedCommandPackets.p /* NumberAllowedCommandPackets */ ,
 u_SetLEAdvertisingDataCompleted_Status.p /* Status */ );
break;
}
case 53:{
byte mbuf[9 - 2];
while (mbufi < (9 - 2)) mbuf[mbufi++] = fifo_dequeue();
fifo_unlock();
uint8_t mbufi_ATTWriteError = 2;
union u_ATTWriteError_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ATTWriteError_ConnectionHandle;
u_ATTWriteError_ConnectionHandle.bytebuffer[1] = mbuf[mbufi_ATTWriteError + 0];
u_ATTWriteError_ConnectionHandle.bytebuffer[0] = mbuf[mbufi_ATTWriteError + 1];
mbufi_ATTWriteError += 2;
union u_ATTWriteError_AttributeHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ATTWriteError_AttributeHandle;
u_ATTWriteError_AttributeHandle.bytebuffer[1] = mbuf[mbufi_ATTWriteError + 0];
u_ATTWriteError_AttributeHandle.bytebuffer[0] = mbuf[mbufi_ATTWriteError + 1];
mbufi_ATTWriteError += 2;
union u_ATTWriteError_Error_t {
uint8_t p;
byte bytebuffer[1];
} u_ATTWriteError_Error;
u_ATTWriteError_Error.bytebuffer[0] = mbuf[mbufi_ATTWriteError + 0];
mbufi_ATTWriteError += 1;
dispatch_ATTWriteError((mbuf[0] << 8) + mbuf[1] /* instance port*/,
 u_ATTWriteError_ConnectionHandle.p /* ConnectionHandle */ ,
 u_ATTWriteError_AttributeHandle.p /* AttributeHandle */ ,
 u_ATTWriteError_Error.p /* Error */ );
break;
}
case 54:{
byte mbuf[32 - 2];
while (mbufi < (32 - 2)) mbuf[mbufi++] = fifo_dequeue();
fifo_unlock();
uint8_t mbufi_ATTHandleValueNotification = 2;
union u_ATTHandleValueNotification_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ATTHandleValueNotification_ConnectionHandle;
u_ATTHandleValueNotification_ConnectionHandle.bytebuffer[1] = mbuf[mbufi_ATTHandleValueNotification + 0];
u_ATTHandleValueNotification_ConnectionHandle.bytebuffer[0] = mbuf[mbufi_ATTHandleValueNotification + 1];
mbufi_ATTHandleValueNotification += 2;
union u_ATTHandleValueNotification_AttributeHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ATTHandleValueNotification_AttributeHandle;
u_ATTHandleValueNotification_AttributeHandle.bytebuffer[1] = mbuf[mbufi_ATTHandleValueNotification + 0];
u_ATTHandleValueNotification_AttributeHandle.bytebuffer[0] = mbuf[mbufi_ATTHandleValueNotification + 1];
mbufi_ATTHandleValueNotification += 2;
union u_ATTHandleValueNotification_AttributeValue_t {
ble_gatt_data_t p;
byte bytebuffer[24];
} u_ATTHandleValueNotification_AttributeValue;
u_ATTHandleValueNotification_AttributeValue.bytebuffer[23] = mbuf[mbufi_ATTHandleValueNotification + 0];
u_ATTHandleValueNotification_AttributeValue.bytebuffer[22] = mbuf[mbufi_ATTHandleValueNotification + 1];
u_ATTHandleValueNotification_AttributeValue.bytebuffer[21] = mbuf[mbufi_ATTHandleValueNotification + 2];
u_ATTHandleValueNotification_AttributeValue.bytebuffer[20] = mbuf[mbufi_ATTHandleValueNotification + 3];
u_ATTHandleValueNotification_AttributeValue.bytebuffer[19] = mbuf[mbufi_ATTHandleValueNotification + 4];
u_ATTHandleValueNotification_AttributeValue.bytebuffer[18] = mbuf[mbufi_ATTHandleValueNotification + 5];
u_ATTHandleValueNotification_AttributeValue.bytebuffer[17] = mbuf[mbufi_ATTHandleValueNotification + 6];
u_ATTHandleValueNotification_AttributeValue.bytebuffer[16] = mbuf[mbufi_ATTHandleValueNotification + 7];
u_ATTHandleValueNotification_AttributeValue.bytebuffer[15] = mbuf[mbufi_ATTHandleValueNotification + 8];
u_ATTHandleValueNotification_AttributeValue.bytebuffer[14] = mbuf[mbufi_ATTHandleValueNotification + 9];
u_ATTHandleValueNotification_AttributeValue.bytebuffer[13] = mbuf[mbufi_ATTHandleValueNotification + 10];
u_ATTHandleValueNotification_AttributeValue.bytebuffer[12] = mbuf[mbufi_ATTHandleValueNotification + 11];
u_ATTHandleValueNotification_AttributeValue.bytebuffer[11] = mbuf[mbufi_ATTHandleValueNotification + 12];
u_ATTHandleValueNotification_AttributeValue.bytebuffer[10] = mbuf[mbufi_ATTHandleValueNotification + 13];
u_ATTHandleValueNotification_AttributeValue.bytebuffer[9] = mbuf[mbufi_ATTHandleValueNotification + 14];
u_ATTHandleValueNotification_AttributeValue.bytebuffer[8] = mbuf[mbufi_ATTHandleValueNotification + 15];
u_ATTHandleValueNotification_AttributeValue.bytebuffer[7] = mbuf[mbufi_ATTHandleValueNotification + 16];
u_ATTHandleValueNotification_AttributeValue.bytebuffer[6] = mbuf[mbufi_ATTHandleValueNotification + 17];
u_ATTHandleValueNotification_AttributeValue.bytebuffer[5] = mbuf[mbufi_ATTHandleValueNotification + 18];
u_ATTHandleValueNotification_AttributeValue.bytebuffer[4] = mbuf[mbufi_ATTHandleValueNotification + 19];
u_ATTHandleValueNotification_AttributeValue.bytebuffer[3] = mbuf[mbufi_ATTHandleValueNotification + 20];
u_ATTHandleValueNotification_AttributeValue.bytebuffer[2] = mbuf[mbufi_ATTHandleValueNotification + 21];
u_ATTHandleValueNotification_AttributeValue.bytebuffer[1] = mbuf[mbufi_ATTHandleValueNotification + 22];
u_ATTHandleValueNotification_AttributeValue.bytebuffer[0] = mbuf[mbufi_ATTHandleValueNotification + 23];
mbufi_ATTHandleValueNotification += 24;
dispatch_ATTHandleValueNotification((mbuf[0] << 8) + mbuf[1] /* instance port*/,
 u_ATTHandleValueNotification_ConnectionHandle.p /* ConnectionHandle */ ,
 u_ATTHandleValueNotification_AttributeHandle.p /* AttributeHandle */ ,
 u_ATTHandleValueNotification_AttributeValue.p /* AttributeValue */ );
break;
}
case 70:{
byte mbuf[4 - 2];
while (mbufi < (4 - 2)) mbuf[mbufi++] = fifo_dequeue();
fifo_unlock();
uint8_t mbufi_NotifierReceived = 2;
dispatch_NotifierReceived((mbuf[0] << 8) + mbuf[1] /* instance port*/);
break;
}
case 100:{
byte mbuf[6 - 2];
while (mbufi < (6 - 2)) mbuf[mbufi++] = fifo_dequeue();
fifo_unlock();
uint8_t mbufi_SetLEScanParametersCompleted = 2;
union u_SetLEScanParametersCompleted_NumberAllowedCommandPackets_t {
uint8_t p;
byte bytebuffer[1];
} u_SetLEScanParametersCompleted_NumberAllowedCommandPackets;
u_SetLEScanParametersCompleted_NumberAllowedCommandPackets.bytebuffer[0] = mbuf[mbufi_SetLEScanParametersCompleted + 0];
mbufi_SetLEScanParametersCompleted += 1;
union u_SetLEScanParametersCompleted_Status_t {
uint8_t p;
byte bytebuffer[1];
} u_SetLEScanParametersCompleted_Status;
u_SetLEScanParametersCompleted_Status.bytebuffer[0] = mbuf[mbufi_SetLEScanParametersCompleted + 0];
mbufi_SetLEScanParametersCompleted += 1;
dispatch_SetLEScanParametersCompleted((mbuf[0] << 8) + mbuf[1] /* instance port*/,
 u_SetLEScanParametersCompleted_NumberAllowedCommandPackets.p /* NumberAllowedCommandPackets */ ,
 u_SetLEScanParametersCompleted_Status.p /* Status */ );
break;
}
case 7:{
byte mbuf[4 - 2];
while (mbufi < (4 - 2)) mbuf[mbufi++] = fifo_dequeue();
fifo_unlock();
uint8_t mbufi_Failure = 2;
dispatch_Failure((mbuf[0] << 8) + mbuf[1] /* instance port*/);
break;
}
case 28:{
byte mbuf[36 - 2];
while (mbufi < (36 - 2)) mbuf[mbufi++] = fifo_dequeue();
fifo_unlock();
uint8_t mbufi_SetLEScanResponseData = 2;
union u_SetLEScanResponseData_Length_t {
uint8_t p;
byte bytebuffer[1];
} u_SetLEScanResponseData_Length;
u_SetLEScanResponseData_Length.bytebuffer[0] = mbuf[mbufi_SetLEScanResponseData + 0];
mbufi_SetLEScanResponseData += 1;
union u_SetLEScanResponseData_Data_t {
ble_adv_data_t p;
byte bytebuffer[31];
} u_SetLEScanResponseData_Data;
u_SetLEScanResponseData_Data.bytebuffer[30] = mbuf[mbufi_SetLEScanResponseData + 0];
u_SetLEScanResponseData_Data.bytebuffer[29] = mbuf[mbufi_SetLEScanResponseData + 1];
u_SetLEScanResponseData_Data.bytebuffer[28] = mbuf[mbufi_SetLEScanResponseData + 2];
u_SetLEScanResponseData_Data.bytebuffer[27] = mbuf[mbufi_SetLEScanResponseData + 3];
u_SetLEScanResponseData_Data.bytebuffer[26] = mbuf[mbufi_SetLEScanResponseData + 4];
u_SetLEScanResponseData_Data.bytebuffer[25] = mbuf[mbufi_SetLEScanResponseData + 5];
u_SetLEScanResponseData_Data.bytebuffer[24] = mbuf[mbufi_SetLEScanResponseData + 6];
u_SetLEScanResponseData_Data.bytebuffer[23] = mbuf[mbufi_SetLEScanResponseData + 7];
u_SetLEScanResponseData_Data.bytebuffer[22] = mbuf[mbufi_SetLEScanResponseData + 8];
u_SetLEScanResponseData_Data.bytebuffer[21] = mbuf[mbufi_SetLEScanResponseData + 9];
u_SetLEScanResponseData_Data.bytebuffer[20] = mbuf[mbufi_SetLEScanResponseData + 10];
u_SetLEScanResponseData_Data.bytebuffer[19] = mbuf[mbufi_SetLEScanResponseData + 11];
u_SetLEScanResponseData_Data.bytebuffer[18] = mbuf[mbufi_SetLEScanResponseData + 12];
u_SetLEScanResponseData_Data.bytebuffer[17] = mbuf[mbufi_SetLEScanResponseData + 13];
u_SetLEScanResponseData_Data.bytebuffer[16] = mbuf[mbufi_SetLEScanResponseData + 14];
u_SetLEScanResponseData_Data.bytebuffer[15] = mbuf[mbufi_SetLEScanResponseData + 15];
u_SetLEScanResponseData_Data.bytebuffer[14] = mbuf[mbufi_SetLEScanResponseData + 16];
u_SetLEScanResponseData_Data.bytebuffer[13] = mbuf[mbufi_SetLEScanResponseData + 17];
u_SetLEScanResponseData_Data.bytebuffer[12] = mbuf[mbufi_SetLEScanResponseData + 18];
u_SetLEScanResponseData_Data.bytebuffer[11] = mbuf[mbufi_SetLEScanResponseData + 19];
u_SetLEScanResponseData_Data.bytebuffer[10] = mbuf[mbufi_SetLEScanResponseData + 20];
u_SetLEScanResponseData_Data.bytebuffer[9] = mbuf[mbufi_SetLEScanResponseData + 21];
u_SetLEScanResponseData_Data.bytebuffer[8] = mbuf[mbufi_SetLEScanResponseData + 22];
u_SetLEScanResponseData_Data.bytebuffer[7] = mbuf[mbufi_SetLEScanResponseData + 23];
u_SetLEScanResponseData_Data.bytebuffer[6] = mbuf[mbufi_SetLEScanResponseData + 24];
u_SetLEScanResponseData_Data.bytebuffer[5] = mbuf[mbufi_SetLEScanResponseData + 25];
u_SetLEScanResponseData_Data.bytebuffer[4] = mbuf[mbufi_SetLEScanResponseData + 26];
u_SetLEScanResponseData_Data.bytebuffer[3] = mbuf[mbufi_SetLEScanResponseData + 27];
u_SetLEScanResponseData_Data.bytebuffer[2] = mbuf[mbufi_SetLEScanResponseData + 28];
u_SetLEScanResponseData_Data.bytebuffer[1] = mbuf[mbufi_SetLEScanResponseData + 29];
u_SetLEScanResponseData_Data.bytebuffer[0] = mbuf[mbufi_SetLEScanResponseData + 30];
mbufi_SetLEScanResponseData += 31;
dispatch_SetLEScanResponseData((mbuf[0] << 8) + mbuf[1] /* instance port*/,
 u_SetLEScanResponseData_Length.p /* Length */ ,
 u_SetLEScanResponseData_Data.p /* Data */ );
break;
}
case 42:{
byte mbuf[22 - 2];
while (mbufi < (22 - 2)) mbuf[mbufi++] = fifo_dequeue();
fifo_unlock();
uint8_t mbufi_SMPSigningInformation = 2;
union u_SMPSigningInformation_Handle_t {
uint16_t p;
byte bytebuffer[2];
} u_SMPSigningInformation_Handle;
u_SMPSigningInformation_Handle.bytebuffer[1] = mbuf[mbufi_SMPSigningInformation + 0];
u_SMPSigningInformation_Handle.bytebuffer[0] = mbuf[mbufi_SMPSigningInformation + 1];
mbufi_SMPSigningInformation += 2;
union u_SMPSigningInformation_SignatureKey_t {
ble_random_number_t p;
byte bytebuffer[16];
} u_SMPSigningInformation_SignatureKey;
u_SMPSigningInformation_SignatureKey.bytebuffer[15] = mbuf[mbufi_SMPSigningInformation + 0];
u_SMPSigningInformation_SignatureKey.bytebuffer[14] = mbuf[mbufi_SMPSigningInformation + 1];
u_SMPSigningInformation_SignatureKey.bytebuffer[13] = mbuf[mbufi_SMPSigningInformation + 2];
u_SMPSigningInformation_SignatureKey.bytebuffer[12] = mbuf[mbufi_SMPSigningInformation + 3];
u_SMPSigningInformation_SignatureKey.bytebuffer[11] = mbuf[mbufi_SMPSigningInformation + 4];
u_SMPSigningInformation_SignatureKey.bytebuffer[10] = mbuf[mbufi_SMPSigningInformation + 5];
u_SMPSigningInformation_SignatureKey.bytebuffer[9] = mbuf[mbufi_SMPSigningInformation + 6];
u_SMPSigningInformation_SignatureKey.bytebuffer[8] = mbuf[mbufi_SMPSigningInformation + 7];
u_SMPSigningInformation_SignatureKey.bytebuffer[7] = mbuf[mbufi_SMPSigningInformation + 8];
u_SMPSigningInformation_SignatureKey.bytebuffer[6] = mbuf[mbufi_SMPSigningInformation + 9];
u_SMPSigningInformation_SignatureKey.bytebuffer[5] = mbuf[mbufi_SMPSigningInformation + 10];
u_SMPSigningInformation_SignatureKey.bytebuffer[4] = mbuf[mbufi_SMPSigningInformation + 11];
u_SMPSigningInformation_SignatureKey.bytebuffer[3] = mbuf[mbufi_SMPSigningInformation + 12];
u_SMPSigningInformation_SignatureKey.bytebuffer[2] = mbuf[mbufi_SMPSigningInformation + 13];
u_SMPSigningInformation_SignatureKey.bytebuffer[1] = mbuf[mbufi_SMPSigningInformation + 14];
u_SMPSigningInformation_SignatureKey.bytebuffer[0] = mbuf[mbufi_SMPSigningInformation + 15];
mbufi_SMPSigningInformation += 16;
dispatch_SMPSigningInformation((mbuf[0] << 8) + mbuf[1] /* instance port*/,
 u_SMPSigningInformation_Handle.p /* Handle */ ,
 u_SMPSigningInformation_SignatureKey.p /* SignatureKey */ );
break;
}
case 85:{
byte mbuf[6 - 2];
while (mbufi < (6 - 2)) mbuf[mbufi++] = fifo_dequeue();
fifo_unlock();
uint8_t mbufi_SetLEAdvertisementParametersCompleted = 2;
union u_SetLEAdvertisementParametersCompleted_NumberAllowedCommandPackets_t {
uint8_t p;
byte bytebuffer[1];
} u_SetLEAdvertisementParametersCompleted_NumberAllowedCommandPackets;
u_SetLEAdvertisementParametersCompleted_NumberAllowedCommandPackets.bytebuffer[0] = mbuf[mbufi_SetLEAdvertisementParametersCompleted + 0];
mbufi_SetLEAdvertisementParametersCompleted += 1;
union u_SetLEAdvertisementParametersCompleted_Status_t {
uint8_t p;
byte bytebuffer[1];
} u_SetLEAdvertisementParametersCompleted_Status;
u_SetLEAdvertisementParametersCompleted_Status.bytebuffer[0] = mbuf[mbufi_SetLEAdvertisementParametersCompleted + 0];
mbufi_SetLEAdvertisementParametersCompleted += 1;
dispatch_SetLEAdvertisementParametersCompleted((mbuf[0] << 8) + mbuf[1] /* instance port*/,
 u_SetLEAdvertisementParametersCompleted_NumberAllowedCommandPackets.p /* NumberAllowedCommandPackets */ ,
 u_SetLEAdvertisementParametersCompleted_Status.p /* Status */ );
break;
}
case 31:{
byte mbuf[22 - 2];
while (mbufi < (22 - 2)) mbuf[mbufi++] = fifo_dequeue();
fifo_unlock();
uint8_t mbufi_SMPEncryptionInformation = 2;
union u_SMPEncryptionInformation_Handle_t {
uint16_t p;
byte bytebuffer[2];
} u_SMPEncryptionInformation_Handle;
u_SMPEncryptionInformation_Handle.bytebuffer[1] = mbuf[mbufi_SMPEncryptionInformation + 0];
u_SMPEncryptionInformation_Handle.bytebuffer[0] = mbuf[mbufi_SMPEncryptionInformation + 1];
mbufi_SMPEncryptionInformation += 2;
union u_SMPEncryptionInformation_LongTermKey_t {
ble_random_number_t p;
byte bytebuffer[16];
} u_SMPEncryptionInformation_LongTermKey;
u_SMPEncryptionInformation_LongTermKey.bytebuffer[15] = mbuf[mbufi_SMPEncryptionInformation + 0];
u_SMPEncryptionInformation_LongTermKey.bytebuffer[14] = mbuf[mbufi_SMPEncryptionInformation + 1];
u_SMPEncryptionInformation_LongTermKey.bytebuffer[13] = mbuf[mbufi_SMPEncryptionInformation + 2];
u_SMPEncryptionInformation_LongTermKey.bytebuffer[12] = mbuf[mbufi_SMPEncryptionInformation + 3];
u_SMPEncryptionInformation_LongTermKey.bytebuffer[11] = mbuf[mbufi_SMPEncryptionInformation + 4];
u_SMPEncryptionInformation_LongTermKey.bytebuffer[10] = mbuf[mbufi_SMPEncryptionInformation + 5];
u_SMPEncryptionInformation_LongTermKey.bytebuffer[9] = mbuf[mbufi_SMPEncryptionInformation + 6];
u_SMPEncryptionInformation_LongTermKey.bytebuffer[8] = mbuf[mbufi_SMPEncryptionInformation + 7];
u_SMPEncryptionInformation_LongTermKey.bytebuffer[7] = mbuf[mbufi_SMPEncryptionInformation + 8];
u_SMPEncryptionInformation_LongTermKey.bytebuffer[6] = mbuf[mbufi_SMPEncryptionInformation + 9];
u_SMPEncryptionInformation_LongTermKey.bytebuffer[5] = mbuf[mbufi_SMPEncryptionInformation + 10];
u_SMPEncryptionInformation_LongTermKey.bytebuffer[4] = mbuf[mbufi_SMPEncryptionInformation + 11];
u_SMPEncryptionInformation_LongTermKey.bytebuffer[3] = mbuf[mbufi_SMPEncryptionInformation + 12];
u_SMPEncryptionInformation_LongTermKey.bytebuffer[2] = mbuf[mbufi_SMPEncryptionInformation + 13];
u_SMPEncryptionInformation_LongTermKey.bytebuffer[1] = mbuf[mbufi_SMPEncryptionInformation + 14];
u_SMPEncryptionInformation_LongTermKey.bytebuffer[0] = mbuf[mbufi_SMPEncryptionInformation + 15];
mbufi_SMPEncryptionInformation += 16;
dispatch_SMPEncryptionInformation((mbuf[0] << 8) + mbuf[1] /* instance port*/,
 u_SMPEncryptionInformation_Handle.p /* Handle */ ,
 u_SMPEncryptionInformation_LongTermKey.p /* LongTermKey */ );
break;
}
case 86:{
byte mbuf[6 - 2];
while (mbufi < (6 - 2)) mbuf[mbufi++] = fifo_dequeue();
fifo_unlock();
uint8_t mbufi_DisconnectStatus = 2;
union u_DisconnectStatus_NumberAllowedCommandPackets_t {
uint8_t p;
byte bytebuffer[1];
} u_DisconnectStatus_NumberAllowedCommandPackets;
u_DisconnectStatus_NumberAllowedCommandPackets.bytebuffer[0] = mbuf[mbufi_DisconnectStatus + 0];
mbufi_DisconnectStatus += 1;
union u_DisconnectStatus_Status_t {
uint8_t p;
byte bytebuffer[1];
} u_DisconnectStatus_Status;
u_DisconnectStatus_Status.bytebuffer[0] = mbuf[mbufi_DisconnectStatus + 0];
mbufi_DisconnectStatus += 1;
dispatch_DisconnectStatus((mbuf[0] << 8) + mbuf[1] /* instance port*/,
 u_DisconnectStatus_NumberAllowedCommandPackets.p /* NumberAllowedCommandPackets */ ,
 u_DisconnectStatus_Status.p /* Status */ );
break;
}
case 12:{
byte mbuf[11 - 2];
while (mbufi < (11 - 2)) mbuf[mbufi++] = fifo_dequeue();
fifo_unlock();
uint8_t mbufi_SetLEScanParameters = 2;
union u_SetLEScanParameters_Type_t {
uint8_t p;
byte bytebuffer[1];
} u_SetLEScanParameters_Type;
u_SetLEScanParameters_Type.bytebuffer[0] = mbuf[mbufi_SetLEScanParameters + 0];
mbufi_SetLEScanParameters += 1;
union u_SetLEScanParameters_Interval_t {
uint16_t p;
byte bytebuffer[2];
} u_SetLEScanParameters_Interval;
u_SetLEScanParameters_Interval.bytebuffer[1] = mbuf[mbufi_SetLEScanParameters + 0];
u_SetLEScanParameters_Interval.bytebuffer[0] = mbuf[mbufi_SetLEScanParameters + 1];
mbufi_SetLEScanParameters += 2;
union u_SetLEScanParameters_Window_t {
uint16_t p;
byte bytebuffer[2];
} u_SetLEScanParameters_Window;
u_SetLEScanParameters_Window.bytebuffer[1] = mbuf[mbufi_SetLEScanParameters + 0];
u_SetLEScanParameters_Window.bytebuffer[0] = mbuf[mbufi_SetLEScanParameters + 1];
mbufi_SetLEScanParameters += 2;
union u_SetLEScanParameters_OwnAddressType_t {
uint8_t p;
byte bytebuffer[1];
} u_SetLEScanParameters_OwnAddressType;
u_SetLEScanParameters_OwnAddressType.bytebuffer[0] = mbuf[mbufi_SetLEScanParameters + 0];
mbufi_SetLEScanParameters += 1;
union u_SetLEScanParameters_FilterPolicy_t {
uint8_t p;
byte bytebuffer[1];
} u_SetLEScanParameters_FilterPolicy;
u_SetLEScanParameters_FilterPolicy.bytebuffer[0] = mbuf[mbufi_SetLEScanParameters + 0];
mbufi_SetLEScanParameters += 1;
dispatch_SetLEScanParameters((mbuf[0] << 8) + mbuf[1] /* instance port*/,
 u_SetLEScanParameters_Type.p /* Type */ ,
 u_SetLEScanParameters_Interval.p /* Interval */ ,
 u_SetLEScanParameters_Window.p /* Window */ ,
 u_SetLEScanParameters_OwnAddressType.p /* OwnAddressType */ ,
 u_SetLEScanParameters_FilterPolicy.p /* FilterPolicy */ );
break;
}
case 88:{
byte mbuf[6 - 2];
while (mbufi < (6 - 2)) mbuf[mbufi++] = fifo_dequeue();
fifo_unlock();
uint8_t mbufi_ResetCompleted = 2;
union u_ResetCompleted_NumberAllowedCommandPackets_t {
uint8_t p;
byte bytebuffer[1];
} u_ResetCompleted_NumberAllowedCommandPackets;
u_ResetCompleted_NumberAllowedCommandPackets.bytebuffer[0] = mbuf[mbufi_ResetCompleted + 0];
mbufi_ResetCompleted += 1;
union u_ResetCompleted_Status_t {
uint8_t p;
byte bytebuffer[1];
} u_ResetCompleted_Status;
u_ResetCompleted_Status.bytebuffer[0] = mbuf[mbufi_ResetCompleted + 0];
mbufi_ResetCompleted += 1;
dispatch_ResetCompleted((mbuf[0] << 8) + mbuf[1] /* instance port*/,
 u_ResetCompleted_NumberAllowedCommandPackets.p /* NumberAllowedCommandPackets */ ,
 u_ResetCompleted_Status.p /* Status */ );
break;
}
case 33:{
byte mbuf[10 - 2];
while (mbufi < (10 - 2)) mbuf[mbufi++] = fifo_dequeue();
fifo_unlock();
uint8_t mbufi_SMPSecurityRequest = 2;
union u_SMPSecurityRequest_Handle_t {
uint16_t p;
byte bytebuffer[2];
} u_SMPSecurityRequest_Handle;
u_SMPSecurityRequest_Handle.bytebuffer[1] = mbuf[mbufi_SMPSecurityRequest + 0];
u_SMPSecurityRequest_Handle.bytebuffer[0] = mbuf[mbufi_SMPSecurityRequest + 1];
mbufi_SMPSecurityRequest += 2;
union u_SMPSecurityRequest_Bonding_t {
uint8_t p;
byte bytebuffer[1];
} u_SMPSecurityRequest_Bonding;
u_SMPSecurityRequest_Bonding.bytebuffer[0] = mbuf[mbufi_SMPSecurityRequest + 0];
mbufi_SMPSecurityRequest += 1;
union u_SMPSecurityRequest_MITM_t {
uint8_t p;
byte bytebuffer[1];
} u_SMPSecurityRequest_MITM;
u_SMPSecurityRequest_MITM.bytebuffer[0] = mbuf[mbufi_SMPSecurityRequest + 0];
mbufi_SMPSecurityRequest += 1;
union u_SMPSecurityRequest_SecureConnection_t {
uint8_t p;
byte bytebuffer[1];
} u_SMPSecurityRequest_SecureConnection;
u_SMPSecurityRequest_SecureConnection.bytebuffer[0] = mbuf[mbufi_SMPSecurityRequest + 0];
mbufi_SMPSecurityRequest += 1;
union u_SMPSecurityRequest_Keypress_t {
uint8_t p;
byte bytebuffer[1];
} u_SMPSecurityRequest_Keypress;
u_SMPSecurityRequest_Keypress.bytebuffer[0] = mbuf[mbufi_SMPSecurityRequest + 0];
mbufi_SMPSecurityRequest += 1;
dispatch_SMPSecurityRequest((mbuf[0] << 8) + mbuf[1] /* instance port*/,
 u_SMPSecurityRequest_Handle.p /* Handle */ ,
 u_SMPSecurityRequest_Bonding.p /* Bonding */ ,
 u_SMPSecurityRequest_MITM.p /* MITM */ ,
 u_SMPSecurityRequest_SecureConnection.p /* SecureConnection */ ,
 u_SMPSecurityRequest_Keypress.p /* Keypress */ );
break;
}
case 18:{
byte mbuf[4 - 2];
while (mbufi < (4 - 2)) mbuf[mbufi++] = fifo_dequeue();
fifo_unlock();
uint8_t mbufi_SetLEEventMaskAll = 2;
dispatch_SetLEEventMaskAll((mbuf[0] << 8) + mbuf[1] /* instance port*/);
break;
}
case 1:{
byte mbuf[4 - 2];
while (mbufi < (4 - 2)) mbuf[mbufi++] = fifo_dequeue();
fifo_unlock();
uint8_t mbufi_MqttRequestBloodPressureMeasurement = 2;
dispatch_MqttRequestBloodPressureMeasurement((mbuf[0] << 8) + mbuf[1] /* instance port*/);
break;
}
case 84:{
byte mbuf[10 - 2];
while (mbufi < (10 - 2)) mbuf[mbufi++] = fifo_dequeue();
fifo_unlock();
uint8_t mbufi_Opened = 2;
union u_Opened_Address_t {
bdaddr_t p;
byte bytebuffer[6];
} u_Opened_Address;
u_Opened_Address.bytebuffer[5] = mbuf[mbufi_Opened + 0];
u_Opened_Address.bytebuffer[4] = mbuf[mbufi_Opened + 1];
u_Opened_Address.bytebuffer[3] = mbuf[mbufi_Opened + 2];
u_Opened_Address.bytebuffer[2] = mbuf[mbufi_Opened + 3];
u_Opened_Address.bytebuffer[1] = mbuf[mbufi_Opened + 4];
u_Opened_Address.bytebuffer[0] = mbuf[mbufi_Opened + 5];
mbufi_Opened += 6;
dispatch_Opened((mbuf[0] << 8) + mbuf[1] /* instance port*/,
 u_Opened_Address.p /* Address */ );
break;
}
case 6:{
byte mbuf[4 - 2];
while (mbufi < (4 - 2)) mbuf[mbufi++] = fifo_dequeue();
fifo_unlock();
uint8_t mbufi_Started = 2;
dispatch_Started((mbuf[0] << 8) + mbuf[1] /* instance port*/);
break;
}
case 62:{
byte mbuf[4 - 2];
while (mbufi < (4 - 2)) mbuf[mbufi++] = fifo_dequeue();
fifo_unlock();
uint8_t mbufi_WantsToConnect = 2;
dispatch_WantsToConnect((mbuf[0] << 8) + mbuf[1] /* instance port*/);
break;
}
case 56:{
byte mbuf[31 - 2];
while (mbufi < (31 - 2)) mbuf[mbufi++] = fifo_dequeue();
fifo_unlock();
uint8_t mbufi_ATTReadByGroupTypeResponse = 2;
union u_ATTReadByGroupTypeResponse_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ATTReadByGroupTypeResponse_ConnectionHandle;
u_ATTReadByGroupTypeResponse_ConnectionHandle.bytebuffer[1] = mbuf[mbufi_ATTReadByGroupTypeResponse + 0];
u_ATTReadByGroupTypeResponse_ConnectionHandle.bytebuffer[0] = mbuf[mbufi_ATTReadByGroupTypeResponse + 1];
mbufi_ATTReadByGroupTypeResponse += 2;
union u_ATTReadByGroupTypeResponse_Length_t {
uint8_t p;
byte bytebuffer[1];
} u_ATTReadByGroupTypeResponse_Length;
u_ATTReadByGroupTypeResponse_Length.bytebuffer[0] = mbuf[mbufi_ATTReadByGroupTypeResponse + 0];
mbufi_ATTReadByGroupTypeResponse += 1;
union u_ATTReadByGroupTypeResponse_AttributeDataList_t {
ble_gatt_data_t p;
byte bytebuffer[24];
} u_ATTReadByGroupTypeResponse_AttributeDataList;
u_ATTReadByGroupTypeResponse_AttributeDataList.bytebuffer[23] = mbuf[mbufi_ATTReadByGroupTypeResponse + 0];
u_ATTReadByGroupTypeResponse_AttributeDataList.bytebuffer[22] = mbuf[mbufi_ATTReadByGroupTypeResponse + 1];
u_ATTReadByGroupTypeResponse_AttributeDataList.bytebuffer[21] = mbuf[mbufi_ATTReadByGroupTypeResponse + 2];
u_ATTReadByGroupTypeResponse_AttributeDataList.bytebuffer[20] = mbuf[mbufi_ATTReadByGroupTypeResponse + 3];
u_ATTReadByGroupTypeResponse_AttributeDataList.bytebuffer[19] = mbuf[mbufi_ATTReadByGroupTypeResponse + 4];
u_ATTReadByGroupTypeResponse_AttributeDataList.bytebuffer[18] = mbuf[mbufi_ATTReadByGroupTypeResponse + 5];
u_ATTReadByGroupTypeResponse_AttributeDataList.bytebuffer[17] = mbuf[mbufi_ATTReadByGroupTypeResponse + 6];
u_ATTReadByGroupTypeResponse_AttributeDataList.bytebuffer[16] = mbuf[mbufi_ATTReadByGroupTypeResponse + 7];
u_ATTReadByGroupTypeResponse_AttributeDataList.bytebuffer[15] = mbuf[mbufi_ATTReadByGroupTypeResponse + 8];
u_ATTReadByGroupTypeResponse_AttributeDataList.bytebuffer[14] = mbuf[mbufi_ATTReadByGroupTypeResponse + 9];
u_ATTReadByGroupTypeResponse_AttributeDataList.bytebuffer[13] = mbuf[mbufi_ATTReadByGroupTypeResponse + 10];
u_ATTReadByGroupTypeResponse_AttributeDataList.bytebuffer[12] = mbuf[mbufi_ATTReadByGroupTypeResponse + 11];
u_ATTReadByGroupTypeResponse_AttributeDataList.bytebuffer[11] = mbuf[mbufi_ATTReadByGroupTypeResponse + 12];
u_ATTReadByGroupTypeResponse_AttributeDataList.bytebuffer[10] = mbuf[mbufi_ATTReadByGroupTypeResponse + 13];
u_ATTReadByGroupTypeResponse_AttributeDataList.bytebuffer[9] = mbuf[mbufi_ATTReadByGroupTypeResponse + 14];
u_ATTReadByGroupTypeResponse_AttributeDataList.bytebuffer[8] = mbuf[mbufi_ATTReadByGroupTypeResponse + 15];
u_ATTReadByGroupTypeResponse_AttributeDataList.bytebuffer[7] = mbuf[mbufi_ATTReadByGroupTypeResponse + 16];
u_ATTReadByGroupTypeResponse_AttributeDataList.bytebuffer[6] = mbuf[mbufi_ATTReadByGroupTypeResponse + 17];
u_ATTReadByGroupTypeResponse_AttributeDataList.bytebuffer[5] = mbuf[mbufi_ATTReadByGroupTypeResponse + 18];
u_ATTReadByGroupTypeResponse_AttributeDataList.bytebuffer[4] = mbuf[mbufi_ATTReadByGroupTypeResponse + 19];
u_ATTReadByGroupTypeResponse_AttributeDataList.bytebuffer[3] = mbuf[mbufi_ATTReadByGroupTypeResponse + 20];
u_ATTReadByGroupTypeResponse_AttributeDataList.bytebuffer[2] = mbuf[mbufi_ATTReadByGroupTypeResponse + 21];
u_ATTReadByGroupTypeResponse_AttributeDataList.bytebuffer[1] = mbuf[mbufi_ATTReadByGroupTypeResponse + 22];
u_ATTReadByGroupTypeResponse_AttributeDataList.bytebuffer[0] = mbuf[mbufi_ATTReadByGroupTypeResponse + 23];
mbufi_ATTReadByGroupTypeResponse += 24;
dispatch_ATTReadByGroupTypeResponse((mbuf[0] << 8) + mbuf[1] /* instance port*/,
 u_ATTReadByGroupTypeResponse_ConnectionHandle.p /* ConnectionHandle */ ,
 u_ATTReadByGroupTypeResponse_Length.p /* Length */ ,
 u_ATTReadByGroupTypeResponse_AttributeDataList.p /* AttributeDataList */ );
break;
}
case 79:{
byte mbuf[4 - 2];
while (mbufi < (4 - 2)) mbuf[mbufi++] = fifo_dequeue();
fifo_unlock();
uint8_t mbufi_NotifierFinished = 2;
dispatch_NotifierFinished((mbuf[0] << 8) + mbuf[1] /* instance port*/);
break;
}
case 83:{
byte mbuf[4 - 2];
while (mbufi < (4 - 2)) mbuf[mbufi++] = fifo_dequeue();
fifo_unlock();
uint8_t mbufi_Closed = 2;
dispatch_Closed((mbuf[0] << 8) + mbuf[1] /* instance port*/);
break;
}
case 105:{
byte mbuf[8 - 2];
while (mbufi < (8 - 2)) mbuf[mbufi++] = fifo_dequeue();
fifo_unlock();
uint8_t mbufi_DisconnectionCompleted = 2;
union u_DisconnectionCompleted_Status_t {
uint8_t p;
byte bytebuffer[1];
} u_DisconnectionCompleted_Status;
u_DisconnectionCompleted_Status.bytebuffer[0] = mbuf[mbufi_DisconnectionCompleted + 0];
mbufi_DisconnectionCompleted += 1;
union u_DisconnectionCompleted_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_DisconnectionCompleted_ConnectionHandle;
u_DisconnectionCompleted_ConnectionHandle.bytebuffer[1] = mbuf[mbufi_DisconnectionCompleted + 0];
u_DisconnectionCompleted_ConnectionHandle.bytebuffer[0] = mbuf[mbufi_DisconnectionCompleted + 1];
mbufi_DisconnectionCompleted += 2;
union u_DisconnectionCompleted_Reason_t {
uint8_t p;
byte bytebuffer[1];
} u_DisconnectionCompleted_Reason;
u_DisconnectionCompleted_Reason.bytebuffer[0] = mbuf[mbufi_DisconnectionCompleted + 0];
mbufi_DisconnectionCompleted += 1;
dispatch_DisconnectionCompleted((mbuf[0] << 8) + mbuf[1] /* instance port*/,
 u_DisconnectionCompleted_Status.p /* Status */ ,
 u_DisconnectionCompleted_ConnectionHandle.p /* ConnectionHandle */ ,
 u_DisconnectionCompleted_Reason.p /* Reason */ );
break;
}
case 4:{
byte mbuf[4 - 2];
while (mbufi < (4 - 2)) mbuf[mbufi++] = fifo_dequeue();
fifo_unlock();
uint8_t mbufi_MqttConfirmWeightMeasurement = 2;
dispatch_MqttConfirmWeightMeasurement((mbuf[0] << 8) + mbuf[1] /* instance port*/);
break;
}
case 11:{
byte mbuf[19 - 2];
while (mbufi < (19 - 2)) mbuf[mbufi++] = fifo_dequeue();
fifo_unlock();
uint8_t mbufi_SetLEAdvertisementParameters = 2;
union u_SetLEAdvertisementParameters_MinInterval_t {
uint16_t p;
byte bytebuffer[2];
} u_SetLEAdvertisementParameters_MinInterval;
u_SetLEAdvertisementParameters_MinInterval.bytebuffer[1] = mbuf[mbufi_SetLEAdvertisementParameters + 0];
u_SetLEAdvertisementParameters_MinInterval.bytebuffer[0] = mbuf[mbufi_SetLEAdvertisementParameters + 1];
mbufi_SetLEAdvertisementParameters += 2;
union u_SetLEAdvertisementParameters_MaxInterval_t {
uint16_t p;
byte bytebuffer[2];
} u_SetLEAdvertisementParameters_MaxInterval;
u_SetLEAdvertisementParameters_MaxInterval.bytebuffer[1] = mbuf[mbufi_SetLEAdvertisementParameters + 0];
u_SetLEAdvertisementParameters_MaxInterval.bytebuffer[0] = mbuf[mbufi_SetLEAdvertisementParameters + 1];
mbufi_SetLEAdvertisementParameters += 2;
union u_SetLEAdvertisementParameters_Type_t {
uint8_t p;
byte bytebuffer[1];
} u_SetLEAdvertisementParameters_Type;
u_SetLEAdvertisementParameters_Type.bytebuffer[0] = mbuf[mbufi_SetLEAdvertisementParameters + 0];
mbufi_SetLEAdvertisementParameters += 1;
union u_SetLEAdvertisementParameters_OwnAddressType_t {
uint8_t p;
byte bytebuffer[1];
} u_SetLEAdvertisementParameters_OwnAddressType;
u_SetLEAdvertisementParameters_OwnAddressType.bytebuffer[0] = mbuf[mbufi_SetLEAdvertisementParameters + 0];
mbufi_SetLEAdvertisementParameters += 1;
union u_SetLEAdvertisementParameters_PeerAddressType_t {
uint8_t p;
byte bytebuffer[1];
} u_SetLEAdvertisementParameters_PeerAddressType;
u_SetLEAdvertisementParameters_PeerAddressType.bytebuffer[0] = mbuf[mbufi_SetLEAdvertisementParameters + 0];
mbufi_SetLEAdvertisementParameters += 1;
union u_SetLEAdvertisementParameters_PeerAddress_t {
bdaddr_t p;
byte bytebuffer[6];
} u_SetLEAdvertisementParameters_PeerAddress;
u_SetLEAdvertisementParameters_PeerAddress.bytebuffer[5] = mbuf[mbufi_SetLEAdvertisementParameters + 0];
u_SetLEAdvertisementParameters_PeerAddress.bytebuffer[4] = mbuf[mbufi_SetLEAdvertisementParameters + 1];
u_SetLEAdvertisementParameters_PeerAddress.bytebuffer[3] = mbuf[mbufi_SetLEAdvertisementParameters + 2];
u_SetLEAdvertisementParameters_PeerAddress.bytebuffer[2] = mbuf[mbufi_SetLEAdvertisementParameters + 3];
u_SetLEAdvertisementParameters_PeerAddress.bytebuffer[1] = mbuf[mbufi_SetLEAdvertisementParameters + 4];
u_SetLEAdvertisementParameters_PeerAddress.bytebuffer[0] = mbuf[mbufi_SetLEAdvertisementParameters + 5];
mbufi_SetLEAdvertisementParameters += 6;
union u_SetLEAdvertisementParameters_Channel_t {
uint8_t p;
byte bytebuffer[1];
} u_SetLEAdvertisementParameters_Channel;
u_SetLEAdvertisementParameters_Channel.bytebuffer[0] = mbuf[mbufi_SetLEAdvertisementParameters + 0];
mbufi_SetLEAdvertisementParameters += 1;
union u_SetLEAdvertisementParameters_FilterPolicy_t {
uint8_t p;
byte bytebuffer[1];
} u_SetLEAdvertisementParameters_FilterPolicy;
u_SetLEAdvertisementParameters_FilterPolicy.bytebuffer[0] = mbuf[mbufi_SetLEAdvertisementParameters + 0];
mbufi_SetLEAdvertisementParameters += 1;
dispatch_SetLEAdvertisementParameters((mbuf[0] << 8) + mbuf[1] /* instance port*/,
 u_SetLEAdvertisementParameters_MinInterval.p /* MinInterval */ ,
 u_SetLEAdvertisementParameters_MaxInterval.p /* MaxInterval */ ,
 u_SetLEAdvertisementParameters_Type.p /* Type */ ,
 u_SetLEAdvertisementParameters_OwnAddressType.p /* OwnAddressType */ ,
 u_SetLEAdvertisementParameters_PeerAddressType.p /* PeerAddressType */ ,
 u_SetLEAdvertisementParameters_PeerAddress.p /* PeerAddress */ ,
 u_SetLEAdvertisementParameters_Channel.p /* Channel */ ,
 u_SetLEAdvertisementParameters_FilterPolicy.p /* FilterPolicy */ );
break;
}
case 30:{
byte mbuf[22 - 2];
while (mbufi < (22 - 2)) mbuf[mbufi++] = fifo_dequeue();
fifo_unlock();
uint8_t mbufi_SMPPairingDHKeyCheck = 2;
union u_SMPPairingDHKeyCheck_Handle_t {
uint16_t p;
byte bytebuffer[2];
} u_SMPPairingDHKeyCheck_Handle;
u_SMPPairingDHKeyCheck_Handle.bytebuffer[1] = mbuf[mbufi_SMPPairingDHKeyCheck + 0];
u_SMPPairingDHKeyCheck_Handle.bytebuffer[0] = mbuf[mbufi_SMPPairingDHKeyCheck + 1];
mbufi_SMPPairingDHKeyCheck += 2;
union u_SMPPairingDHKeyCheck_DHKeyCheck_t {
ble_random_number_t p;
byte bytebuffer[16];
} u_SMPPairingDHKeyCheck_DHKeyCheck;
u_SMPPairingDHKeyCheck_DHKeyCheck.bytebuffer[15] = mbuf[mbufi_SMPPairingDHKeyCheck + 0];
u_SMPPairingDHKeyCheck_DHKeyCheck.bytebuffer[14] = mbuf[mbufi_SMPPairingDHKeyCheck + 1];
u_SMPPairingDHKeyCheck_DHKeyCheck.bytebuffer[13] = mbuf[mbufi_SMPPairingDHKeyCheck + 2];
u_SMPPairingDHKeyCheck_DHKeyCheck.bytebuffer[12] = mbuf[mbufi_SMPPairingDHKeyCheck + 3];
u_SMPPairingDHKeyCheck_DHKeyCheck.bytebuffer[11] = mbuf[mbufi_SMPPairingDHKeyCheck + 4];
u_SMPPairingDHKeyCheck_DHKeyCheck.bytebuffer[10] = mbuf[mbufi_SMPPairingDHKeyCheck + 5];
u_SMPPairingDHKeyCheck_DHKeyCheck.bytebuffer[9] = mbuf[mbufi_SMPPairingDHKeyCheck + 6];
u_SMPPairingDHKeyCheck_DHKeyCheck.bytebuffer[8] = mbuf[mbufi_SMPPairingDHKeyCheck + 7];
u_SMPPairingDHKeyCheck_DHKeyCheck.bytebuffer[7] = mbuf[mbufi_SMPPairingDHKeyCheck + 8];
u_SMPPairingDHKeyCheck_DHKeyCheck.bytebuffer[6] = mbuf[mbufi_SMPPairingDHKeyCheck + 9];
u_SMPPairingDHKeyCheck_DHKeyCheck.bytebuffer[5] = mbuf[mbufi_SMPPairingDHKeyCheck + 10];
u_SMPPairingDHKeyCheck_DHKeyCheck.bytebuffer[4] = mbuf[mbufi_SMPPairingDHKeyCheck + 11];
u_SMPPairingDHKeyCheck_DHKeyCheck.bytebuffer[3] = mbuf[mbufi_SMPPairingDHKeyCheck + 12];
u_SMPPairingDHKeyCheck_DHKeyCheck.bytebuffer[2] = mbuf[mbufi_SMPPairingDHKeyCheck + 13];
u_SMPPairingDHKeyCheck_DHKeyCheck.bytebuffer[1] = mbuf[mbufi_SMPPairingDHKeyCheck + 14];
u_SMPPairingDHKeyCheck_DHKeyCheck.bytebuffer[0] = mbuf[mbufi_SMPPairingDHKeyCheck + 15];
mbufi_SMPPairingDHKeyCheck += 16;
dispatch_SMPPairingDHKeyCheck((mbuf[0] << 8) + mbuf[1] /* instance port*/,
 u_SMPPairingDHKeyCheck_Handle.p /* Handle */ ,
 u_SMPPairingDHKeyCheck_DHKeyCheck.p /* DHKeyCheck */ );
break;
}
case 87:{
byte mbuf[6 - 2];
while (mbufi < (6 - 2)) mbuf[mbufi++] = fifo_dequeue();
fifo_unlock();
uint8_t mbufi_SetLEScanResponseDataCompleted = 2;
union u_SetLEScanResponseDataCompleted_NumberAllowedCommandPackets_t {
uint8_t p;
byte bytebuffer[1];
} u_SetLEScanResponseDataCompleted_NumberAllowedCommandPackets;
u_SetLEScanResponseDataCompleted_NumberAllowedCommandPackets.bytebuffer[0] = mbuf[mbufi_SetLEScanResponseDataCompleted + 0];
mbufi_SetLEScanResponseDataCompleted += 1;
union u_SetLEScanResponseDataCompleted_Status_t {
uint8_t p;
byte bytebuffer[1];
} u_SetLEScanResponseDataCompleted_Status;
u_SetLEScanResponseDataCompleted_Status.bytebuffer[0] = mbuf[mbufi_SetLEScanResponseDataCompleted + 0];
mbufi_SetLEScanResponseDataCompleted += 1;
dispatch_SetLEScanResponseDataCompleted((mbuf[0] << 8) + mbuf[1] /* instance port*/,
 u_SetLEScanResponseDataCompleted_NumberAllowedCommandPackets.p /* NumberAllowedCommandPackets */ ,
 u_SetLEScanResponseDataCompleted_Status.p /* Status */ );
break;
}
case 14:{
byte mbuf[4 - 2];
while (mbufi < (4 - 2)) mbuf[mbufi++] = fifo_dequeue();
fifo_unlock();
uint8_t mbufi_SetEventMaskAll = 2;
dispatch_SetEventMaskAll((mbuf[0] << 8) + mbuf[1] /* instance port*/);
break;
}
case 80:{
byte mbuf[6 - 2];
while (mbufi < (6 - 2)) mbuf[mbufi++] = fifo_dequeue();
fifo_unlock();
uint8_t mbufi_Quit = 2;
union u_Quit_code_t {
int16_t p;
byte bytebuffer[2];
} u_Quit_code;
u_Quit_code.bytebuffer[1] = mbuf[mbufi_Quit + 0];
u_Quit_code.bytebuffer[0] = mbuf[mbufi_Quit + 1];
mbufi_Quit += 2;
dispatch_Quit((mbuf[0] << 8) + mbuf[1] /* instance port*/,
 u_Quit_code.p /* code */ );
break;
}
case 94:{
byte mbuf[14 - 2];
while (mbufi < (14 - 2)) mbuf[mbufi++] = fifo_dequeue();
fifo_unlock();
uint8_t mbufi_LERandCompleted = 2;
union u_LERandCompleted_NumberAllowedCommandPackets_t {
uint8_t p;
byte bytebuffer[1];
} u_LERandCompleted_NumberAllowedCommandPackets;
u_LERandCompleted_NumberAllowedCommandPackets.bytebuffer[0] = mbuf[mbufi_LERandCompleted + 0];
mbufi_LERandCompleted += 1;
union u_LERandCompleted_Status_t {
uint8_t p;
byte bytebuffer[1];
} u_LERandCompleted_Status;
u_LERandCompleted_Status.bytebuffer[0] = mbuf[mbufi_LERandCompleted + 0];
mbufi_LERandCompleted += 1;
union u_LERandCompleted_Random_t {
ble_random_part_t p;
byte bytebuffer[8];
} u_LERandCompleted_Random;
u_LERandCompleted_Random.bytebuffer[7] = mbuf[mbufi_LERandCompleted + 0];
u_LERandCompleted_Random.bytebuffer[6] = mbuf[mbufi_LERandCompleted + 1];
u_LERandCompleted_Random.bytebuffer[5] = mbuf[mbufi_LERandCompleted + 2];
u_LERandCompleted_Random.bytebuffer[4] = mbuf[mbufi_LERandCompleted + 3];
u_LERandCompleted_Random.bytebuffer[3] = mbuf[mbufi_LERandCompleted + 4];
u_LERandCompleted_Random.bytebuffer[2] = mbuf[mbufi_LERandCompleted + 5];
u_LERandCompleted_Random.bytebuffer[1] = mbuf[mbufi_LERandCompleted + 6];
u_LERandCompleted_Random.bytebuffer[0] = mbuf[mbufi_LERandCompleted + 7];
mbufi_LERandCompleted += 8;
dispatch_LERandCompleted((mbuf[0] << 8) + mbuf[1] /* instance port*/,
 u_LERandCompleted_NumberAllowedCommandPackets.p /* NumberAllowedCommandPackets */ ,
 u_LERandCompleted_Status.p /* Status */ ,
 u_LERandCompleted_Random.p /* Random */ );
break;
}
case 97:{
byte mbuf[6 - 2];
while (mbufi < (6 - 2)) mbuf[mbufi++] = fifo_dequeue();
fifo_unlock();
uint8_t mbufi_SetLEScanEnableCompleted = 2;
union u_SetLEScanEnableCompleted_NumberAllowedCommandPackets_t {
uint8_t p;
byte bytebuffer[1];
} u_SetLEScanEnableCompleted_NumberAllowedCommandPackets;
u_SetLEScanEnableCompleted_NumberAllowedCommandPackets.bytebuffer[0] = mbuf[mbufi_SetLEScanEnableCompleted + 0];
mbufi_SetLEScanEnableCompleted += 1;
union u_SetLEScanEnableCompleted_Status_t {
uint8_t p;
byte bytebuffer[1];
} u_SetLEScanEnableCompleted_Status;
u_SetLEScanEnableCompleted_Status.bytebuffer[0] = mbuf[mbufi_SetLEScanEnableCompleted + 0];
mbufi_SetLEScanEnableCompleted += 1;
dispatch_SetLEScanEnableCompleted((mbuf[0] << 8) + mbuf[1] /* instance port*/,
 u_SetLEScanEnableCompleted_NumberAllowedCommandPackets.p /* NumberAllowedCommandPackets */ ,
 u_SetLEScanEnableCompleted_Status.p /* Status */ );
break;
}
case 2:{
byte mbuf[4 - 2];
while (mbufi < (4 - 2)) mbuf[mbufi++] = fifo_dequeue();
fifo_unlock();
uint8_t mbufi_MqttConfirmBloodPressureMeasurement = 2;
dispatch_MqttConfirmBloodPressureMeasurement((mbuf[0] << 8) + mbuf[1] /* instance port*/);
break;
}
case 36:{
byte mbuf[13 - 2];
while (mbufi < (13 - 2)) mbuf[mbufi++] = fifo_dequeue();
fifo_unlock();
uint8_t mbufi_SMPIdentityAddressInformation = 2;
union u_SMPIdentityAddressInformation_Handle_t {
uint16_t p;
byte bytebuffer[2];
} u_SMPIdentityAddressInformation_Handle;
u_SMPIdentityAddressInformation_Handle.bytebuffer[1] = mbuf[mbufi_SMPIdentityAddressInformation + 0];
u_SMPIdentityAddressInformation_Handle.bytebuffer[0] = mbuf[mbufi_SMPIdentityAddressInformation + 1];
mbufi_SMPIdentityAddressInformation += 2;
union u_SMPIdentityAddressInformation_AddressType_t {
uint8_t p;
byte bytebuffer[1];
} u_SMPIdentityAddressInformation_AddressType;
u_SMPIdentityAddressInformation_AddressType.bytebuffer[0] = mbuf[mbufi_SMPIdentityAddressInformation + 0];
mbufi_SMPIdentityAddressInformation += 1;
union u_SMPIdentityAddressInformation_Address_t {
bdaddr_t p;
byte bytebuffer[6];
} u_SMPIdentityAddressInformation_Address;
u_SMPIdentityAddressInformation_Address.bytebuffer[5] = mbuf[mbufi_SMPIdentityAddressInformation + 0];
u_SMPIdentityAddressInformation_Address.bytebuffer[4] = mbuf[mbufi_SMPIdentityAddressInformation + 1];
u_SMPIdentityAddressInformation_Address.bytebuffer[3] = mbuf[mbufi_SMPIdentityAddressInformation + 2];
u_SMPIdentityAddressInformation_Address.bytebuffer[2] = mbuf[mbufi_SMPIdentityAddressInformation + 3];
u_SMPIdentityAddressInformation_Address.bytebuffer[1] = mbuf[mbufi_SMPIdentityAddressInformation + 4];
u_SMPIdentityAddressInformation_Address.bytebuffer[0] = mbuf[mbufi_SMPIdentityAddressInformation + 5];
mbufi_SMPIdentityAddressInformation += 6;
dispatch_SMPIdentityAddressInformation((mbuf[0] << 8) + mbuf[1] /* instance port*/,
 u_SMPIdentityAddressInformation_Handle.p /* Handle */ ,
 u_SMPIdentityAddressInformation_AddressType.p /* AddressType */ ,
 u_SMPIdentityAddressInformation_Address.p /* Address */ );
break;
}
case 102:{
byte mbuf[6 - 2];
while (mbufi < (6 - 2)) mbuf[mbufi++] = fifo_dequeue();
fifo_unlock();
uint8_t mbufi_SetLEAdvertiseEnableCompleted = 2;
union u_SetLEAdvertiseEnableCompleted_NumberAllowedCommandPackets_t {
uint8_t p;
byte bytebuffer[1];
} u_SetLEAdvertiseEnableCompleted_NumberAllowedCommandPackets;
u_SetLEAdvertiseEnableCompleted_NumberAllowedCommandPackets.bytebuffer[0] = mbuf[mbufi_SetLEAdvertiseEnableCompleted + 0];
mbufi_SetLEAdvertiseEnableCompleted += 1;
union u_SetLEAdvertiseEnableCompleted_Status_t {
uint8_t p;
byte bytebuffer[1];
} u_SetLEAdvertiseEnableCompleted_Status;
u_SetLEAdvertiseEnableCompleted_Status.bytebuffer[0] = mbuf[mbufi_SetLEAdvertiseEnableCompleted + 0];
mbufi_SetLEAdvertiseEnableCompleted += 1;
dispatch_SetLEAdvertiseEnableCompleted((mbuf[0] << 8) + mbuf[1] /* instance port*/,
 u_SetLEAdvertiseEnableCompleted_NumberAllowedCommandPackets.p /* NumberAllowedCommandPackets */ ,
 u_SetLEAdvertiseEnableCompleted_Status.p /* Status */ );
break;
}
case 41:{
byte mbuf[7 - 2];
while (mbufi < (7 - 2)) mbuf[mbufi++] = fifo_dequeue();
fifo_unlock();
uint8_t mbufi_SMPKeypressNotification = 2;
union u_SMPKeypressNotification_Handle_t {
uint16_t p;
byte bytebuffer[2];
} u_SMPKeypressNotification_Handle;
u_SMPKeypressNotification_Handle.bytebuffer[1] = mbuf[mbufi_SMPKeypressNotification + 0];
u_SMPKeypressNotification_Handle.bytebuffer[0] = mbuf[mbufi_SMPKeypressNotification + 1];
mbufi_SMPKeypressNotification += 2;
union u_SMPKeypressNotification_Type_t {
uint8_t p;
byte bytebuffer[1];
} u_SMPKeypressNotification_Type;
u_SMPKeypressNotification_Type.bytebuffer[0] = mbuf[mbufi_SMPKeypressNotification + 0];
mbufi_SMPKeypressNotification += 1;
dispatch_SMPKeypressNotification((mbuf[0] << 8) + mbuf[1] /* instance port*/,
 u_SMPKeypressNotification_Handle.p /* Handle */ ,
 u_SMPKeypressNotification_Type.p /* Type */ );
break;
}
case 57:{
byte mbuf[31 - 2];
while (mbufi < (31 - 2)) mbuf[mbufi++] = fifo_dequeue();
fifo_unlock();
uint8_t mbufi_ATTReadByTypeResponse = 2;
union u_ATTReadByTypeResponse_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ATTReadByTypeResponse_ConnectionHandle;
u_ATTReadByTypeResponse_ConnectionHandle.bytebuffer[1] = mbuf[mbufi_ATTReadByTypeResponse + 0];
u_ATTReadByTypeResponse_ConnectionHandle.bytebuffer[0] = mbuf[mbufi_ATTReadByTypeResponse + 1];
mbufi_ATTReadByTypeResponse += 2;
union u_ATTReadByTypeResponse_Length_t {
uint8_t p;
byte bytebuffer[1];
} u_ATTReadByTypeResponse_Length;
u_ATTReadByTypeResponse_Length.bytebuffer[0] = mbuf[mbufi_ATTReadByTypeResponse + 0];
mbufi_ATTReadByTypeResponse += 1;
union u_ATTReadByTypeResponse_AttributeDataList_t {
ble_gatt_data_t p;
byte bytebuffer[24];
} u_ATTReadByTypeResponse_AttributeDataList;
u_ATTReadByTypeResponse_AttributeDataList.bytebuffer[23] = mbuf[mbufi_ATTReadByTypeResponse + 0];
u_ATTReadByTypeResponse_AttributeDataList.bytebuffer[22] = mbuf[mbufi_ATTReadByTypeResponse + 1];
u_ATTReadByTypeResponse_AttributeDataList.bytebuffer[21] = mbuf[mbufi_ATTReadByTypeResponse + 2];
u_ATTReadByTypeResponse_AttributeDataList.bytebuffer[20] = mbuf[mbufi_ATTReadByTypeResponse + 3];
u_ATTReadByTypeResponse_AttributeDataList.bytebuffer[19] = mbuf[mbufi_ATTReadByTypeResponse + 4];
u_ATTReadByTypeResponse_AttributeDataList.bytebuffer[18] = mbuf[mbufi_ATTReadByTypeResponse + 5];
u_ATTReadByTypeResponse_AttributeDataList.bytebuffer[17] = mbuf[mbufi_ATTReadByTypeResponse + 6];
u_ATTReadByTypeResponse_AttributeDataList.bytebuffer[16] = mbuf[mbufi_ATTReadByTypeResponse + 7];
u_ATTReadByTypeResponse_AttributeDataList.bytebuffer[15] = mbuf[mbufi_ATTReadByTypeResponse + 8];
u_ATTReadByTypeResponse_AttributeDataList.bytebuffer[14] = mbuf[mbufi_ATTReadByTypeResponse + 9];
u_ATTReadByTypeResponse_AttributeDataList.bytebuffer[13] = mbuf[mbufi_ATTReadByTypeResponse + 10];
u_ATTReadByTypeResponse_AttributeDataList.bytebuffer[12] = mbuf[mbufi_ATTReadByTypeResponse + 11];
u_ATTReadByTypeResponse_AttributeDataList.bytebuffer[11] = mbuf[mbufi_ATTReadByTypeResponse + 12];
u_ATTReadByTypeResponse_AttributeDataList.bytebuffer[10] = mbuf[mbufi_ATTReadByTypeResponse + 13];
u_ATTReadByTypeResponse_AttributeDataList.bytebuffer[9] = mbuf[mbufi_ATTReadByTypeResponse + 14];
u_ATTReadByTypeResponse_AttributeDataList.bytebuffer[8] = mbuf[mbufi_ATTReadByTypeResponse + 15];
u_ATTReadByTypeResponse_AttributeDataList.bytebuffer[7] = mbuf[mbufi_ATTReadByTypeResponse + 16];
u_ATTReadByTypeResponse_AttributeDataList.bytebuffer[6] = mbuf[mbufi_ATTReadByTypeResponse + 17];
u_ATTReadByTypeResponse_AttributeDataList.bytebuffer[5] = mbuf[mbufi_ATTReadByTypeResponse + 18];
u_ATTReadByTypeResponse_AttributeDataList.bytebuffer[4] = mbuf[mbufi_ATTReadByTypeResponse + 19];
u_ATTReadByTypeResponse_AttributeDataList.bytebuffer[3] = mbuf[mbufi_ATTReadByTypeResponse + 20];
u_ATTReadByTypeResponse_AttributeDataList.bytebuffer[2] = mbuf[mbufi_ATTReadByTypeResponse + 21];
u_ATTReadByTypeResponse_AttributeDataList.bytebuffer[1] = mbuf[mbufi_ATTReadByTypeResponse + 22];
u_ATTReadByTypeResponse_AttributeDataList.bytebuffer[0] = mbuf[mbufi_ATTReadByTypeResponse + 23];
mbufi_ATTReadByTypeResponse += 24;
dispatch_ATTReadByTypeResponse((mbuf[0] << 8) + mbuf[1] /* instance port*/,
 u_ATTReadByTypeResponse_ConnectionHandle.p /* ConnectionHandle */ ,
 u_ATTReadByTypeResponse_Length.p /* Length */ ,
 u_ATTReadByTypeResponse_AttributeDataList.p /* AttributeDataList */ );
break;
}
case 8:{
byte mbuf[11 - 2];
while (mbufi < (11 - 2)) mbuf[mbufi++] = fifo_dequeue();
fifo_unlock();
uint8_t mbufi_ConnectableAdvertisement = 2;
union u_ConnectableAdvertisement_AddressType_t {
uint8_t p;
byte bytebuffer[1];
} u_ConnectableAdvertisement_AddressType;
u_ConnectableAdvertisement_AddressType.bytebuffer[0] = mbuf[mbufi_ConnectableAdvertisement + 0];
mbufi_ConnectableAdvertisement += 1;
union u_ConnectableAdvertisement_Address_t {
bdaddr_t p;
byte bytebuffer[6];
} u_ConnectableAdvertisement_Address;
u_ConnectableAdvertisement_Address.bytebuffer[5] = mbuf[mbufi_ConnectableAdvertisement + 0];
u_ConnectableAdvertisement_Address.bytebuffer[4] = mbuf[mbufi_ConnectableAdvertisement + 1];
u_ConnectableAdvertisement_Address.bytebuffer[3] = mbuf[mbufi_ConnectableAdvertisement + 2];
u_ConnectableAdvertisement_Address.bytebuffer[2] = mbuf[mbufi_ConnectableAdvertisement + 3];
u_ConnectableAdvertisement_Address.bytebuffer[1] = mbuf[mbufi_ConnectableAdvertisement + 4];
u_ConnectableAdvertisement_Address.bytebuffer[0] = mbuf[mbufi_ConnectableAdvertisement + 5];
mbufi_ConnectableAdvertisement += 6;
dispatch_ConnectableAdvertisement((mbuf[0] << 8) + mbuf[1] /* instance port*/,
 u_ConnectableAdvertisement_AddressType.p /* AddressType */ ,
 u_ConnectableAdvertisement_Address.p /* Address */ );
break;
}
case 10:{
byte mbuf[4 - 2];
while (mbufi < (4 - 2)) mbuf[mbufi++] = fifo_dequeue();
fifo_unlock();
uint8_t mbufi_Close = 2;
dispatch_Close((mbuf[0] << 8) + mbuf[1] /* instance port*/);
break;
}
case 66:{
byte mbuf[4 - 2];
while (mbufi < (4 - 2)) mbuf[mbufi++] = fifo_dequeue();
fifo_unlock();
uint8_t mbufi_Encrypt = 2;
dispatch_Encrypt((mbuf[0] << 8) + mbuf[1] /* instance port*/);
break;
}
case 89:{
byte mbuf[6 - 2];
while (mbufi < (6 - 2)) mbuf[mbufi++] = fifo_dequeue();
fifo_unlock();
uint8_t mbufi_SetEventMaskCompleted = 2;
union u_SetEventMaskCompleted_NumberAllowedCommandPackets_t {
uint8_t p;
byte bytebuffer[1];
} u_SetEventMaskCompleted_NumberAllowedCommandPackets;
u_SetEventMaskCompleted_NumberAllowedCommandPackets.bytebuffer[0] = mbuf[mbufi_SetEventMaskCompleted + 0];
mbufi_SetEventMaskCompleted += 1;
union u_SetEventMaskCompleted_Status_t {
uint8_t p;
byte bytebuffer[1];
} u_SetEventMaskCompleted_Status;
u_SetEventMaskCompleted_Status.bytebuffer[0] = mbuf[mbufi_SetEventMaskCompleted + 0];
mbufi_SetEventMaskCompleted += 1;
dispatch_SetEventMaskCompleted((mbuf[0] << 8) + mbuf[1] /* instance port*/,
 u_SetEventMaskCompleted_NumberAllowedCommandPackets.p /* NumberAllowedCommandPackets */ ,
 u_SetEventMaskCompleted_Status.p /* Status */ );
break;
}
case 45:{
byte mbuf[6 - 2];
while (mbufi < (6 - 2)) mbuf[mbufi++] = fifo_dequeue();
fifo_unlock();
uint8_t mbufi_ATTWriteResponse = 2;
union u_ATTWriteResponse_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ATTWriteResponse_ConnectionHandle;
u_ATTWriteResponse_ConnectionHandle.bytebuffer[1] = mbuf[mbufi_ATTWriteResponse + 0];
u_ATTWriteResponse_ConnectionHandle.bytebuffer[0] = mbuf[mbufi_ATTWriteResponse + 1];
mbufi_ATTWriteResponse += 2;
dispatch_ATTWriteResponse((mbuf[0] << 8) + mbuf[1] /* instance port*/,
 u_ATTWriteResponse_ConnectionHandle.p /* ConnectionHandle */ );
break;
}
case 78:{
byte mbuf[4 - 2];
while (mbufi < (4 - 2)) mbuf[mbufi++] = fifo_dequeue();
fifo_unlock();
uint8_t mbufi_NotifierReady = 2;
dispatch_NotifierReady((mbuf[0] << 8) + mbuf[1] /* instance port*/);
break;
}
case 46:{
byte mbuf[8 - 2];
while (mbufi < (8 - 2)) mbuf[mbufi++] = fifo_dequeue();
fifo_unlock();
uint8_t mbufi_ATTReadRequest = 2;
union u_ATTReadRequest_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ATTReadRequest_ConnectionHandle;
u_ATTReadRequest_ConnectionHandle.bytebuffer[1] = mbuf[mbufi_ATTReadRequest + 0];
u_ATTReadRequest_ConnectionHandle.bytebuffer[0] = mbuf[mbufi_ATTReadRequest + 1];
mbufi_ATTReadRequest += 2;
union u_ATTReadRequest_AttributeHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ATTReadRequest_AttributeHandle;
u_ATTReadRequest_AttributeHandle.bytebuffer[1] = mbuf[mbufi_ATTReadRequest + 0];
u_ATTReadRequest_AttributeHandle.bytebuffer[0] = mbuf[mbufi_ATTReadRequest + 1];
mbufi_ATTReadRequest += 2;
dispatch_ATTReadRequest((mbuf[0] << 8) + mbuf[1] /* instance port*/,
 u_ATTReadRequest_ConnectionHandle.p /* ConnectionHandle */ ,
 u_ATTReadRequest_AttributeHandle.p /* AttributeHandle */ );
break;
}
case 98:{
byte mbuf[44 - 2];
while (mbufi < (44 - 2)) mbuf[mbufi++] = fifo_dequeue();
fifo_unlock();
uint8_t mbufi_LEAdvertisementReport = 2;
union u_LEAdvertisementReport_Type_t {
uint8_t p;
byte bytebuffer[1];
} u_LEAdvertisementReport_Type;
u_LEAdvertisementReport_Type.bytebuffer[0] = mbuf[mbufi_LEAdvertisementReport + 0];
mbufi_LEAdvertisementReport += 1;
union u_LEAdvertisementReport_AddressType_t {
uint8_t p;
byte bytebuffer[1];
} u_LEAdvertisementReport_AddressType;
u_LEAdvertisementReport_AddressType.bytebuffer[0] = mbuf[mbufi_LEAdvertisementReport + 0];
mbufi_LEAdvertisementReport += 1;
union u_LEAdvertisementReport_Address_t {
bdaddr_t p;
byte bytebuffer[6];
} u_LEAdvertisementReport_Address;
u_LEAdvertisementReport_Address.bytebuffer[5] = mbuf[mbufi_LEAdvertisementReport + 0];
u_LEAdvertisementReport_Address.bytebuffer[4] = mbuf[mbufi_LEAdvertisementReport + 1];
u_LEAdvertisementReport_Address.bytebuffer[3] = mbuf[mbufi_LEAdvertisementReport + 2];
u_LEAdvertisementReport_Address.bytebuffer[2] = mbuf[mbufi_LEAdvertisementReport + 3];
u_LEAdvertisementReport_Address.bytebuffer[1] = mbuf[mbufi_LEAdvertisementReport + 4];
u_LEAdvertisementReport_Address.bytebuffer[0] = mbuf[mbufi_LEAdvertisementReport + 5];
mbufi_LEAdvertisementReport += 6;
union u_LEAdvertisementReport_Length_t {
uint8_t p;
byte bytebuffer[1];
} u_LEAdvertisementReport_Length;
u_LEAdvertisementReport_Length.bytebuffer[0] = mbuf[mbufi_LEAdvertisementReport + 0];
mbufi_LEAdvertisementReport += 1;
union u_LEAdvertisementReport_Data_t {
ble_adv_data_t p;
byte bytebuffer[31];
} u_LEAdvertisementReport_Data;
u_LEAdvertisementReport_Data.bytebuffer[30] = mbuf[mbufi_LEAdvertisementReport + 0];
u_LEAdvertisementReport_Data.bytebuffer[29] = mbuf[mbufi_LEAdvertisementReport + 1];
u_LEAdvertisementReport_Data.bytebuffer[28] = mbuf[mbufi_LEAdvertisementReport + 2];
u_LEAdvertisementReport_Data.bytebuffer[27] = mbuf[mbufi_LEAdvertisementReport + 3];
u_LEAdvertisementReport_Data.bytebuffer[26] = mbuf[mbufi_LEAdvertisementReport + 4];
u_LEAdvertisementReport_Data.bytebuffer[25] = mbuf[mbufi_LEAdvertisementReport + 5];
u_LEAdvertisementReport_Data.bytebuffer[24] = mbuf[mbufi_LEAdvertisementReport + 6];
u_LEAdvertisementReport_Data.bytebuffer[23] = mbuf[mbufi_LEAdvertisementReport + 7];
u_LEAdvertisementReport_Data.bytebuffer[22] = mbuf[mbufi_LEAdvertisementReport + 8];
u_LEAdvertisementReport_Data.bytebuffer[21] = mbuf[mbufi_LEAdvertisementReport + 9];
u_LEAdvertisementReport_Data.bytebuffer[20] = mbuf[mbufi_LEAdvertisementReport + 10];
u_LEAdvertisementReport_Data.bytebuffer[19] = mbuf[mbufi_LEAdvertisementReport + 11];
u_LEAdvertisementReport_Data.bytebuffer[18] = mbuf[mbufi_LEAdvertisementReport + 12];
u_LEAdvertisementReport_Data.bytebuffer[17] = mbuf[mbufi_LEAdvertisementReport + 13];
u_LEAdvertisementReport_Data.bytebuffer[16] = mbuf[mbufi_LEAdvertisementReport + 14];
u_LEAdvertisementReport_Data.bytebuffer[15] = mbuf[mbufi_LEAdvertisementReport + 15];
u_LEAdvertisementReport_Data.bytebuffer[14] = mbuf[mbufi_LEAdvertisementReport + 16];
u_LEAdvertisementReport_Data.bytebuffer[13] = mbuf[mbufi_LEAdvertisementReport + 17];
u_LEAdvertisementReport_Data.bytebuffer[12] = mbuf[mbufi_LEAdvertisementReport + 18];
u_LEAdvertisementReport_Data.bytebuffer[11] = mbuf[mbufi_LEAdvertisementReport + 19];
u_LEAdvertisementReport_Data.bytebuffer[10] = mbuf[mbufi_LEAdvertisementReport + 20];
u_LEAdvertisementReport_Data.bytebuffer[9] = mbuf[mbufi_LEAdvertisementReport + 21];
u_LEAdvertisementReport_Data.bytebuffer[8] = mbuf[mbufi_LEAdvertisementReport + 22];
u_LEAdvertisementReport_Data.bytebuffer[7] = mbuf[mbufi_LEAdvertisementReport + 23];
u_LEAdvertisementReport_Data.bytebuffer[6] = mbuf[mbufi_LEAdvertisementReport + 24];
u_LEAdvertisementReport_Data.bytebuffer[5] = mbuf[mbufi_LEAdvertisementReport + 25];
u_LEAdvertisementReport_Data.bytebuffer[4] = mbuf[mbufi_LEAdvertisementReport + 26];
u_LEAdvertisementReport_Data.bytebuffer[3] = mbuf[mbufi_LEAdvertisementReport + 27];
u_LEAdvertisementReport_Data.bytebuffer[2] = mbuf[mbufi_LEAdvertisementReport + 28];
u_LEAdvertisementReport_Data.bytebuffer[1] = mbuf[mbufi_LEAdvertisementReport + 29];
u_LEAdvertisementReport_Data.bytebuffer[0] = mbuf[mbufi_LEAdvertisementReport + 30];
mbufi_LEAdvertisementReport += 31;
dispatch_LEAdvertisementReport((mbuf[0] << 8) + mbuf[1] /* instance port*/,
 u_LEAdvertisementReport_Type.p /* Type */ ,
 u_LEAdvertisementReport_AddressType.p /* AddressType */ ,
 u_LEAdvertisementReport_Address.p /* Address */ ,
 u_LEAdvertisementReport_Length.p /* Length */ ,
 u_LEAdvertisementReport_Data.p /* Data */ );
break;
}
case 74:{
byte mbuf[4 - 2];
while (mbufi < (4 - 2)) mbuf[mbufi++] = fifo_dequeue();
fifo_unlock();
uint8_t mbufi_NotifierStored = 2;
dispatch_NotifierStored((mbuf[0] << 8) + mbuf[1] /* instance port*/);
break;
}
case 64:{
byte mbuf[4 - 2];
while (mbufi < (4 - 2)) mbuf[mbufi++] = fifo_dequeue();
fifo_unlock();
uint8_t mbufi_Start = 2;
dispatch_Start((mbuf[0] << 8) + mbuf[1] /* instance port*/);
break;
}
case 24:{
byte mbuf[4 - 2];
while (mbufi < (4 - 2)) mbuf[mbufi++] = fifo_dequeue();
fifo_unlock();
uint8_t mbufi_Reset = 2;
dispatch_Reset((mbuf[0] << 8) + mbuf[1] /* instance port*/);
break;
}
case 82:{
byte mbuf[4 - 2];
while (mbufi < (4 - 2)) mbuf[mbufi++] = fifo_dequeue();
fifo_unlock();
uint8_t mbufi_Interrupt = 2;
dispatch_Interrupt((mbuf[0] << 8) + mbuf[1] /* instance port*/);
break;
}
case 55:{
byte mbuf[31 - 2];
while (mbufi < (31 - 2)) mbuf[mbufi++] = fifo_dequeue();
fifo_unlock();
uint8_t mbufi_ATTFindInformationResponse = 2;
union u_ATTFindInformationResponse_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ATTFindInformationResponse_ConnectionHandle;
u_ATTFindInformationResponse_ConnectionHandle.bytebuffer[1] = mbuf[mbufi_ATTFindInformationResponse + 0];
u_ATTFindInformationResponse_ConnectionHandle.bytebuffer[0] = mbuf[mbufi_ATTFindInformationResponse + 1];
mbufi_ATTFindInformationResponse += 2;
union u_ATTFindInformationResponse_Format_t {
uint8_t p;
byte bytebuffer[1];
} u_ATTFindInformationResponse_Format;
u_ATTFindInformationResponse_Format.bytebuffer[0] = mbuf[mbufi_ATTFindInformationResponse + 0];
mbufi_ATTFindInformationResponse += 1;
union u_ATTFindInformationResponse_InformationData_t {
ble_gatt_data_t p;
byte bytebuffer[24];
} u_ATTFindInformationResponse_InformationData;
u_ATTFindInformationResponse_InformationData.bytebuffer[23] = mbuf[mbufi_ATTFindInformationResponse + 0];
u_ATTFindInformationResponse_InformationData.bytebuffer[22] = mbuf[mbufi_ATTFindInformationResponse + 1];
u_ATTFindInformationResponse_InformationData.bytebuffer[21] = mbuf[mbufi_ATTFindInformationResponse + 2];
u_ATTFindInformationResponse_InformationData.bytebuffer[20] = mbuf[mbufi_ATTFindInformationResponse + 3];
u_ATTFindInformationResponse_InformationData.bytebuffer[19] = mbuf[mbufi_ATTFindInformationResponse + 4];
u_ATTFindInformationResponse_InformationData.bytebuffer[18] = mbuf[mbufi_ATTFindInformationResponse + 5];
u_ATTFindInformationResponse_InformationData.bytebuffer[17] = mbuf[mbufi_ATTFindInformationResponse + 6];
u_ATTFindInformationResponse_InformationData.bytebuffer[16] = mbuf[mbufi_ATTFindInformationResponse + 7];
u_ATTFindInformationResponse_InformationData.bytebuffer[15] = mbuf[mbufi_ATTFindInformationResponse + 8];
u_ATTFindInformationResponse_InformationData.bytebuffer[14] = mbuf[mbufi_ATTFindInformationResponse + 9];
u_ATTFindInformationResponse_InformationData.bytebuffer[13] = mbuf[mbufi_ATTFindInformationResponse + 10];
u_ATTFindInformationResponse_InformationData.bytebuffer[12] = mbuf[mbufi_ATTFindInformationResponse + 11];
u_ATTFindInformationResponse_InformationData.bytebuffer[11] = mbuf[mbufi_ATTFindInformationResponse + 12];
u_ATTFindInformationResponse_InformationData.bytebuffer[10] = mbuf[mbufi_ATTFindInformationResponse + 13];
u_ATTFindInformationResponse_InformationData.bytebuffer[9] = mbuf[mbufi_ATTFindInformationResponse + 14];
u_ATTFindInformationResponse_InformationData.bytebuffer[8] = mbuf[mbufi_ATTFindInformationResponse + 15];
u_ATTFindInformationResponse_InformationData.bytebuffer[7] = mbuf[mbufi_ATTFindInformationResponse + 16];
u_ATTFindInformationResponse_InformationData.bytebuffer[6] = mbuf[mbufi_ATTFindInformationResponse + 17];
u_ATTFindInformationResponse_InformationData.bytebuffer[5] = mbuf[mbufi_ATTFindInformationResponse + 18];
u_ATTFindInformationResponse_InformationData.bytebuffer[4] = mbuf[mbufi_ATTFindInformationResponse + 19];
u_ATTFindInformationResponse_InformationData.bytebuffer[3] = mbuf[mbufi_ATTFindInformationResponse + 20];
u_ATTFindInformationResponse_InformationData.bytebuffer[2] = mbuf[mbufi_ATTFindInformationResponse + 21];
u_ATTFindInformationResponse_InformationData.bytebuffer[1] = mbuf[mbufi_ATTFindInformationResponse + 22];
u_ATTFindInformationResponse_InformationData.bytebuffer[0] = mbuf[mbufi_ATTFindInformationResponse + 23];
mbufi_ATTFindInformationResponse += 24;
dispatch_ATTFindInformationResponse((mbuf[0] << 8) + mbuf[1] /* instance port*/,
 u_ATTFindInformationResponse_ConnectionHandle.p /* ConnectionHandle */ ,
 u_ATTFindInformationResponse_Format.p /* Format */ ,
 u_ATTFindInformationResponse_InformationData.p /* InformationData */ );
break;
}
case 76:{
byte mbuf[13 - 2];
while (mbufi < (13 - 2)) mbuf[mbufi++] = fifo_dequeue();
fifo_unlock();
uint8_t mbufi_Connected = 2;
union u_Connected_Handle_t {
uint16_t p;
byte bytebuffer[2];
} u_Connected_Handle;
u_Connected_Handle.bytebuffer[1] = mbuf[mbufi_Connected + 0];
u_Connected_Handle.bytebuffer[0] = mbuf[mbufi_Connected + 1];
mbufi_Connected += 2;
union u_Connected_AddressType_t {
uint8_t p;
byte bytebuffer[1];
} u_Connected_AddressType;
u_Connected_AddressType.bytebuffer[0] = mbuf[mbufi_Connected + 0];
mbufi_Connected += 1;
union u_Connected_Address_t {
bdaddr_t p;
byte bytebuffer[6];
} u_Connected_Address;
u_Connected_Address.bytebuffer[5] = mbuf[mbufi_Connected + 0];
u_Connected_Address.bytebuffer[4] = mbuf[mbufi_Connected + 1];
u_Connected_Address.bytebuffer[3] = mbuf[mbufi_Connected + 2];
u_Connected_Address.bytebuffer[2] = mbuf[mbufi_Connected + 3];
u_Connected_Address.bytebuffer[1] = mbuf[mbufi_Connected + 4];
u_Connected_Address.bytebuffer[0] = mbuf[mbufi_Connected + 5];
mbufi_Connected += 6;
dispatch_Connected((mbuf[0] << 8) + mbuf[1] /* instance port*/,
 u_Connected_Handle.p /* Handle */ ,
 u_Connected_AddressType.p /* AddressType */ ,
 u_Connected_Address.p /* Address */ );
break;
}
case 32:{
byte mbuf[22 - 2];
while (mbufi < (22 - 2)) mbuf[mbufi++] = fifo_dequeue();
fifo_unlock();
uint8_t mbufi_SMPPairingConfirm = 2;
union u_SMPPairingConfirm_Handle_t {
uint16_t p;
byte bytebuffer[2];
} u_SMPPairingConfirm_Handle;
u_SMPPairingConfirm_Handle.bytebuffer[1] = mbuf[mbufi_SMPPairingConfirm + 0];
u_SMPPairingConfirm_Handle.bytebuffer[0] = mbuf[mbufi_SMPPairingConfirm + 1];
mbufi_SMPPairingConfirm += 2;
union u_SMPPairingConfirm_ConfirmValue_t {
ble_random_number_t p;
byte bytebuffer[16];
} u_SMPPairingConfirm_ConfirmValue;
u_SMPPairingConfirm_ConfirmValue.bytebuffer[15] = mbuf[mbufi_SMPPairingConfirm + 0];
u_SMPPairingConfirm_ConfirmValue.bytebuffer[14] = mbuf[mbufi_SMPPairingConfirm + 1];
u_SMPPairingConfirm_ConfirmValue.bytebuffer[13] = mbuf[mbufi_SMPPairingConfirm + 2];
u_SMPPairingConfirm_ConfirmValue.bytebuffer[12] = mbuf[mbufi_SMPPairingConfirm + 3];
u_SMPPairingConfirm_ConfirmValue.bytebuffer[11] = mbuf[mbufi_SMPPairingConfirm + 4];
u_SMPPairingConfirm_ConfirmValue.bytebuffer[10] = mbuf[mbufi_SMPPairingConfirm + 5];
u_SMPPairingConfirm_ConfirmValue.bytebuffer[9] = mbuf[mbufi_SMPPairingConfirm + 6];
u_SMPPairingConfirm_ConfirmValue.bytebuffer[8] = mbuf[mbufi_SMPPairingConfirm + 7];
u_SMPPairingConfirm_ConfirmValue.bytebuffer[7] = mbuf[mbufi_SMPPairingConfirm + 8];
u_SMPPairingConfirm_ConfirmValue.bytebuffer[6] = mbuf[mbufi_SMPPairingConfirm + 9];
u_SMPPairingConfirm_ConfirmValue.bytebuffer[5] = mbuf[mbufi_SMPPairingConfirm + 10];
u_SMPPairingConfirm_ConfirmValue.bytebuffer[4] = mbuf[mbufi_SMPPairingConfirm + 11];
u_SMPPairingConfirm_ConfirmValue.bytebuffer[3] = mbuf[mbufi_SMPPairingConfirm + 12];
u_SMPPairingConfirm_ConfirmValue.bytebuffer[2] = mbuf[mbufi_SMPPairingConfirm + 13];
u_SMPPairingConfirm_ConfirmValue.bytebuffer[1] = mbuf[mbufi_SMPPairingConfirm + 14];
u_SMPPairingConfirm_ConfirmValue.bytebuffer[0] = mbuf[mbufi_SMPPairingConfirm + 15];
mbufi_SMPPairingConfirm += 16;
dispatch_SMPPairingConfirm((mbuf[0] << 8) + mbuf[1] /* instance port*/,
 u_SMPPairingConfirm_Handle.p /* Handle */ ,
 u_SMPPairingConfirm_ConfirmValue.p /* ConfirmValue */ );
break;
}
case 15:{
byte mbuf[5 - 2];
while (mbufi < (5 - 2)) mbuf[mbufi++] = fifo_dequeue();
fifo_unlock();
uint8_t mbufi_SetLEAdvertiseEnable = 2;
union u_SetLEAdvertiseEnable_Enable_t {
uint8_t p;
byte bytebuffer[1];
} u_SetLEAdvertiseEnable_Enable;
u_SetLEAdvertiseEnable_Enable.bytebuffer[0] = mbuf[mbufi_SetLEAdvertiseEnable + 0];
mbufi_SetLEAdvertiseEnable += 1;
dispatch_SetLEAdvertiseEnable((mbuf[0] << 8) + mbuf[1] /* instance port*/,
 u_SetLEAdvertiseEnable_Enable.p /* Enable */ );
break;
}
case 71:{
byte mbuf[4 - 2];
while (mbufi < (4 - 2)) mbuf[mbufi++] = fifo_dequeue();
fifo_unlock();
uint8_t mbufi_NotifierError = 2;
dispatch_NotifierError((mbuf[0] << 8) + mbuf[1] /* instance port*/);
break;
}
case 92:{
byte mbuf[6 - 2];
while (mbufi < (6 - 2)) mbuf[mbufi++] = fifo_dequeue();
fifo_unlock();
uint8_t mbufi_SetLocalNameCompleted = 2;
union u_SetLocalNameCompleted_NumberAllowedCommandPackets_t {
uint8_t p;
byte bytebuffer[1];
} u_SetLocalNameCompleted_NumberAllowedCommandPackets;
u_SetLocalNameCompleted_NumberAllowedCommandPackets.bytebuffer[0] = mbuf[mbufi_SetLocalNameCompleted + 0];
mbufi_SetLocalNameCompleted += 1;
union u_SetLocalNameCompleted_Status_t {
uint8_t p;
byte bytebuffer[1];
} u_SetLocalNameCompleted_Status;
u_SetLocalNameCompleted_Status.bytebuffer[0] = mbuf[mbufi_SetLocalNameCompleted + 0];
mbufi_SetLocalNameCompleted += 1;
dispatch_SetLocalNameCompleted((mbuf[0] << 8) + mbuf[1] /* instance port*/,
 u_SetLocalNameCompleted_NumberAllowedCommandPackets.p /* NumberAllowedCommandPackets */ ,
 u_SetLocalNameCompleted_Status.p /* Status */ );
break;
}
case 16:{
byte mbuf[4 - 2];
while (mbufi < (4 - 2)) mbuf[mbufi++] = fifo_dequeue();
fifo_unlock();
uint8_t mbufi_LERand = 2;
dispatch_LERand((mbuf[0] << 8) + mbuf[1] /* instance port*/);
break;
}
case 20:{
byte mbuf[29 - 2];
while (mbufi < (29 - 2)) mbuf[mbufi++] = fifo_dequeue();
fifo_unlock();
uint8_t mbufi_LECreateConnection = 2;
union u_LECreateConnection_Interval_t {
uint16_t p;
byte bytebuffer[2];
} u_LECreateConnection_Interval;
u_LECreateConnection_Interval.bytebuffer[1] = mbuf[mbufi_LECreateConnection + 0];
u_LECreateConnection_Interval.bytebuffer[0] = mbuf[mbufi_LECreateConnection + 1];
mbufi_LECreateConnection += 2;
union u_LECreateConnection_Window_t {
uint16_t p;
byte bytebuffer[2];
} u_LECreateConnection_Window;
u_LECreateConnection_Window.bytebuffer[1] = mbuf[mbufi_LECreateConnection + 0];
u_LECreateConnection_Window.bytebuffer[0] = mbuf[mbufi_LECreateConnection + 1];
mbufi_LECreateConnection += 2;
union u_LECreateConnection_FilterPolicy_t {
uint8_t p;
byte bytebuffer[1];
} u_LECreateConnection_FilterPolicy;
u_LECreateConnection_FilterPolicy.bytebuffer[0] = mbuf[mbufi_LECreateConnection + 0];
mbufi_LECreateConnection += 1;
union u_LECreateConnection_PeerAddressType_t {
uint8_t p;
byte bytebuffer[1];
} u_LECreateConnection_PeerAddressType;
u_LECreateConnection_PeerAddressType.bytebuffer[0] = mbuf[mbufi_LECreateConnection + 0];
mbufi_LECreateConnection += 1;
union u_LECreateConnection_PeerAddress_t {
bdaddr_t p;
byte bytebuffer[6];
} u_LECreateConnection_PeerAddress;
u_LECreateConnection_PeerAddress.bytebuffer[5] = mbuf[mbufi_LECreateConnection + 0];
u_LECreateConnection_PeerAddress.bytebuffer[4] = mbuf[mbufi_LECreateConnection + 1];
u_LECreateConnection_PeerAddress.bytebuffer[3] = mbuf[mbufi_LECreateConnection + 2];
u_LECreateConnection_PeerAddress.bytebuffer[2] = mbuf[mbufi_LECreateConnection + 3];
u_LECreateConnection_PeerAddress.bytebuffer[1] = mbuf[mbufi_LECreateConnection + 4];
u_LECreateConnection_PeerAddress.bytebuffer[0] = mbuf[mbufi_LECreateConnection + 5];
mbufi_LECreateConnection += 6;
union u_LECreateConnection_OwnAddressType_t {
uint8_t p;
byte bytebuffer[1];
} u_LECreateConnection_OwnAddressType;
u_LECreateConnection_OwnAddressType.bytebuffer[0] = mbuf[mbufi_LECreateConnection + 0];
mbufi_LECreateConnection += 1;
union u_LECreateConnection_ConnIntervalMin_t {
uint16_t p;
byte bytebuffer[2];
} u_LECreateConnection_ConnIntervalMin;
u_LECreateConnection_ConnIntervalMin.bytebuffer[1] = mbuf[mbufi_LECreateConnection + 0];
u_LECreateConnection_ConnIntervalMin.bytebuffer[0] = mbuf[mbufi_LECreateConnection + 1];
mbufi_LECreateConnection += 2;
union u_LECreateConnection_ConnIntervalMax_t {
uint16_t p;
byte bytebuffer[2];
} u_LECreateConnection_ConnIntervalMax;
u_LECreateConnection_ConnIntervalMax.bytebuffer[1] = mbuf[mbufi_LECreateConnection + 0];
u_LECreateConnection_ConnIntervalMax.bytebuffer[0] = mbuf[mbufi_LECreateConnection + 1];
mbufi_LECreateConnection += 2;
union u_LECreateConnection_ConnLatency_t {
uint16_t p;
byte bytebuffer[2];
} u_LECreateConnection_ConnLatency;
u_LECreateConnection_ConnLatency.bytebuffer[1] = mbuf[mbufi_LECreateConnection + 0];
u_LECreateConnection_ConnLatency.bytebuffer[0] = mbuf[mbufi_LECreateConnection + 1];
mbufi_LECreateConnection += 2;
union u_LECreateConnection_SupervisionTimeout_t {
uint16_t p;
byte bytebuffer[2];
} u_LECreateConnection_SupervisionTimeout;
u_LECreateConnection_SupervisionTimeout.bytebuffer[1] = mbuf[mbufi_LECreateConnection + 0];
u_LECreateConnection_SupervisionTimeout.bytebuffer[0] = mbuf[mbufi_LECreateConnection + 1];
mbufi_LECreateConnection += 2;
union u_LECreateConnection_CELengthMin_t {
uint16_t p;
byte bytebuffer[2];
} u_LECreateConnection_CELengthMin;
u_LECreateConnection_CELengthMin.bytebuffer[1] = mbuf[mbufi_LECreateConnection + 0];
u_LECreateConnection_CELengthMin.bytebuffer[0] = mbuf[mbufi_LECreateConnection + 1];
mbufi_LECreateConnection += 2;
union u_LECreateConnection_CELengthMax_t {
uint16_t p;
byte bytebuffer[2];
} u_LECreateConnection_CELengthMax;
u_LECreateConnection_CELengthMax.bytebuffer[1] = mbuf[mbufi_LECreateConnection + 0];
u_LECreateConnection_CELengthMax.bytebuffer[0] = mbuf[mbufi_LECreateConnection + 1];
mbufi_LECreateConnection += 2;
dispatch_LECreateConnection((mbuf[0] << 8) + mbuf[1] /* instance port*/,
 u_LECreateConnection_Interval.p /* Interval */ ,
 u_LECreateConnection_Window.p /* Window */ ,
 u_LECreateConnection_FilterPolicy.p /* FilterPolicy */ ,
 u_LECreateConnection_PeerAddressType.p /* PeerAddressType */ ,
 u_LECreateConnection_PeerAddress.p /* PeerAddress */ ,
 u_LECreateConnection_OwnAddressType.p /* OwnAddressType */ ,
 u_LECreateConnection_ConnIntervalMin.p /* ConnIntervalMin */ ,
 u_LECreateConnection_ConnIntervalMax.p /* ConnIntervalMax */ ,
 u_LECreateConnection_ConnLatency.p /* ConnLatency */ ,
 u_LECreateConnection_SupervisionTimeout.p /* SupervisionTimeout */ ,
 u_LECreateConnection_CELengthMin.p /* CELengthMin */ ,
 u_LECreateConnection_CELengthMax.p /* CELengthMax */ );
break;
}
case 47:{
byte mbuf[9 - 2];
while (mbufi < (9 - 2)) mbuf[mbufi++] = fifo_dequeue();
fifo_unlock();
uint8_t mbufi_ATTFindInformationError = 2;
union u_ATTFindInformationError_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ATTFindInformationError_ConnectionHandle;
u_ATTFindInformationError_ConnectionHandle.bytebuffer[1] = mbuf[mbufi_ATTFindInformationError + 0];
u_ATTFindInformationError_ConnectionHandle.bytebuffer[0] = mbuf[mbufi_ATTFindInformationError + 1];
mbufi_ATTFindInformationError += 2;
union u_ATTFindInformationError_AttributeHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ATTFindInformationError_AttributeHandle;
u_ATTFindInformationError_AttributeHandle.bytebuffer[1] = mbuf[mbufi_ATTFindInformationError + 0];
u_ATTFindInformationError_AttributeHandle.bytebuffer[0] = mbuf[mbufi_ATTFindInformationError + 1];
mbufi_ATTFindInformationError += 2;
union u_ATTFindInformationError_Error_t {
uint8_t p;
byte bytebuffer[1];
} u_ATTFindInformationError_Error;
u_ATTFindInformationError_Error.bytebuffer[0] = mbuf[mbufi_ATTFindInformationError + 0];
mbufi_ATTFindInformationError += 1;
dispatch_ATTFindInformationError((mbuf[0] << 8) + mbuf[1] /* instance port*/,
 u_ATTFindInformationError_ConnectionHandle.p /* ConnectionHandle */ ,
 u_ATTFindInformationError_AttributeHandle.p /* AttributeHandle */ ,
 u_ATTFindInformationError_Error.p /* Error */ );
break;
}
case 72:{
byte mbuf[4 - 2];
while (mbufi < (4 - 2)) mbuf[mbufi++] = fifo_dequeue();
fifo_unlock();
uint8_t mbufi_NotifierRequest = 2;
dispatch_NotifierRequest((mbuf[0] << 8) + mbuf[1] /* instance port*/);
break;
}
case 81:{
byte mbuf[4 - 2];
while (mbufi < (4 - 2)) mbuf[mbufi++] = fifo_dequeue();
fifo_unlock();
uint8_t mbufi_AllowedToConnect = 2;
dispatch_AllowedToConnect((mbuf[0] << 8) + mbuf[1] /* instance port*/);
break;
}
case 22:{
byte mbuf[12 - 2];
while (mbufi < (12 - 2)) mbuf[mbufi++] = fifo_dequeue();
fifo_unlock();
uint8_t mbufi_SetEventMask = 2;
union u_SetEventMask_Mask_t {
set_event_mask_cp p;
byte bytebuffer[8];
} u_SetEventMask_Mask;
u_SetEventMask_Mask.bytebuffer[7] = mbuf[mbufi_SetEventMask + 0];
u_SetEventMask_Mask.bytebuffer[6] = mbuf[mbufi_SetEventMask + 1];
u_SetEventMask_Mask.bytebuffer[5] = mbuf[mbufi_SetEventMask + 2];
u_SetEventMask_Mask.bytebuffer[4] = mbuf[mbufi_SetEventMask + 3];
u_SetEventMask_Mask.bytebuffer[3] = mbuf[mbufi_SetEventMask + 4];
u_SetEventMask_Mask.bytebuffer[2] = mbuf[mbufi_SetEventMask + 5];
u_SetEventMask_Mask.bytebuffer[1] = mbuf[mbufi_SetEventMask + 6];
u_SetEventMask_Mask.bytebuffer[0] = mbuf[mbufi_SetEventMask + 7];
mbufi_SetEventMask += 8;
dispatch_SetEventMask((mbuf[0] << 8) + mbuf[1] /* instance port*/,
 u_SetEventMask_Mask.p /* Mask */ );
break;
}
case 101:{
byte mbuf[34 - 2];
while (mbufi < (34 - 2)) mbuf[mbufi++] = fifo_dequeue();
fifo_unlock();
uint8_t mbufi_LEEnhancedConnectionComplete = 2;
union u_LEEnhancedConnectionComplete_Status_t {
uint8_t p;
byte bytebuffer[1];
} u_LEEnhancedConnectionComplete_Status;
u_LEEnhancedConnectionComplete_Status.bytebuffer[0] = mbuf[mbufi_LEEnhancedConnectionComplete + 0];
mbufi_LEEnhancedConnectionComplete += 1;
union u_LEEnhancedConnectionComplete_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_LEEnhancedConnectionComplete_ConnectionHandle;
u_LEEnhancedConnectionComplete_ConnectionHandle.bytebuffer[1] = mbuf[mbufi_LEEnhancedConnectionComplete + 0];
u_LEEnhancedConnectionComplete_ConnectionHandle.bytebuffer[0] = mbuf[mbufi_LEEnhancedConnectionComplete + 1];
mbufi_LEEnhancedConnectionComplete += 2;
union u_LEEnhancedConnectionComplete_Role_t {
uint8_t p;
byte bytebuffer[1];
} u_LEEnhancedConnectionComplete_Role;
u_LEEnhancedConnectionComplete_Role.bytebuffer[0] = mbuf[mbufi_LEEnhancedConnectionComplete + 0];
mbufi_LEEnhancedConnectionComplete += 1;
union u_LEEnhancedConnectionComplete_PeerAddressType_t {
uint8_t p;
byte bytebuffer[1];
} u_LEEnhancedConnectionComplete_PeerAddressType;
u_LEEnhancedConnectionComplete_PeerAddressType.bytebuffer[0] = mbuf[mbufi_LEEnhancedConnectionComplete + 0];
mbufi_LEEnhancedConnectionComplete += 1;
union u_LEEnhancedConnectionComplete_PeerAddress_t {
bdaddr_t p;
byte bytebuffer[6];
} u_LEEnhancedConnectionComplete_PeerAddress;
u_LEEnhancedConnectionComplete_PeerAddress.bytebuffer[5] = mbuf[mbufi_LEEnhancedConnectionComplete + 0];
u_LEEnhancedConnectionComplete_PeerAddress.bytebuffer[4] = mbuf[mbufi_LEEnhancedConnectionComplete + 1];
u_LEEnhancedConnectionComplete_PeerAddress.bytebuffer[3] = mbuf[mbufi_LEEnhancedConnectionComplete + 2];
u_LEEnhancedConnectionComplete_PeerAddress.bytebuffer[2] = mbuf[mbufi_LEEnhancedConnectionComplete + 3];
u_LEEnhancedConnectionComplete_PeerAddress.bytebuffer[1] = mbuf[mbufi_LEEnhancedConnectionComplete + 4];
u_LEEnhancedConnectionComplete_PeerAddress.bytebuffer[0] = mbuf[mbufi_LEEnhancedConnectionComplete + 5];
mbufi_LEEnhancedConnectionComplete += 6;
union u_LEEnhancedConnectionComplete_LocalResolvablePrivateAddress_t {
bdaddr_t p;
byte bytebuffer[6];
} u_LEEnhancedConnectionComplete_LocalResolvablePrivateAddress;
u_LEEnhancedConnectionComplete_LocalResolvablePrivateAddress.bytebuffer[5] = mbuf[mbufi_LEEnhancedConnectionComplete + 0];
u_LEEnhancedConnectionComplete_LocalResolvablePrivateAddress.bytebuffer[4] = mbuf[mbufi_LEEnhancedConnectionComplete + 1];
u_LEEnhancedConnectionComplete_LocalResolvablePrivateAddress.bytebuffer[3] = mbuf[mbufi_LEEnhancedConnectionComplete + 2];
u_LEEnhancedConnectionComplete_LocalResolvablePrivateAddress.bytebuffer[2] = mbuf[mbufi_LEEnhancedConnectionComplete + 3];
u_LEEnhancedConnectionComplete_LocalResolvablePrivateAddress.bytebuffer[1] = mbuf[mbufi_LEEnhancedConnectionComplete + 4];
u_LEEnhancedConnectionComplete_LocalResolvablePrivateAddress.bytebuffer[0] = mbuf[mbufi_LEEnhancedConnectionComplete + 5];
mbufi_LEEnhancedConnectionComplete += 6;
union u_LEEnhancedConnectionComplete_PeerResolvablePrivateAddress_t {
bdaddr_t p;
byte bytebuffer[6];
} u_LEEnhancedConnectionComplete_PeerResolvablePrivateAddress;
u_LEEnhancedConnectionComplete_PeerResolvablePrivateAddress.bytebuffer[5] = mbuf[mbufi_LEEnhancedConnectionComplete + 0];
u_LEEnhancedConnectionComplete_PeerResolvablePrivateAddress.bytebuffer[4] = mbuf[mbufi_LEEnhancedConnectionComplete + 1];
u_LEEnhancedConnectionComplete_PeerResolvablePrivateAddress.bytebuffer[3] = mbuf[mbufi_LEEnhancedConnectionComplete + 2];
u_LEEnhancedConnectionComplete_PeerResolvablePrivateAddress.bytebuffer[2] = mbuf[mbufi_LEEnhancedConnectionComplete + 3];
u_LEEnhancedConnectionComplete_PeerResolvablePrivateAddress.bytebuffer[1] = mbuf[mbufi_LEEnhancedConnectionComplete + 4];
u_LEEnhancedConnectionComplete_PeerResolvablePrivateAddress.bytebuffer[0] = mbuf[mbufi_LEEnhancedConnectionComplete + 5];
mbufi_LEEnhancedConnectionComplete += 6;
union u_LEEnhancedConnectionComplete_ConnInterval_t {
uint16_t p;
byte bytebuffer[2];
} u_LEEnhancedConnectionComplete_ConnInterval;
u_LEEnhancedConnectionComplete_ConnInterval.bytebuffer[1] = mbuf[mbufi_LEEnhancedConnectionComplete + 0];
u_LEEnhancedConnectionComplete_ConnInterval.bytebuffer[0] = mbuf[mbufi_LEEnhancedConnectionComplete + 1];
mbufi_LEEnhancedConnectionComplete += 2;
union u_LEEnhancedConnectionComplete_ConnLatency_t {
uint16_t p;
byte bytebuffer[2];
} u_LEEnhancedConnectionComplete_ConnLatency;
u_LEEnhancedConnectionComplete_ConnLatency.bytebuffer[1] = mbuf[mbufi_LEEnhancedConnectionComplete + 0];
u_LEEnhancedConnectionComplete_ConnLatency.bytebuffer[0] = mbuf[mbufi_LEEnhancedConnectionComplete + 1];
mbufi_LEEnhancedConnectionComplete += 2;
union u_LEEnhancedConnectionComplete_SupervisionTimeout_t {
uint16_t p;
byte bytebuffer[2];
} u_LEEnhancedConnectionComplete_SupervisionTimeout;
u_LEEnhancedConnectionComplete_SupervisionTimeout.bytebuffer[1] = mbuf[mbufi_LEEnhancedConnectionComplete + 0];
u_LEEnhancedConnectionComplete_SupervisionTimeout.bytebuffer[0] = mbuf[mbufi_LEEnhancedConnectionComplete + 1];
mbufi_LEEnhancedConnectionComplete += 2;
union u_LEEnhancedConnectionComplete_MasterClockAccuracy_t {
uint8_t p;
byte bytebuffer[1];
} u_LEEnhancedConnectionComplete_MasterClockAccuracy;
u_LEEnhancedConnectionComplete_MasterClockAccuracy.bytebuffer[0] = mbuf[mbufi_LEEnhancedConnectionComplete + 0];
mbufi_LEEnhancedConnectionComplete += 1;
dispatch_LEEnhancedConnectionComplete((mbuf[0] << 8) + mbuf[1] /* instance port*/,
 u_LEEnhancedConnectionComplete_Status.p /* Status */ ,
 u_LEEnhancedConnectionComplete_ConnectionHandle.p /* ConnectionHandle */ ,
 u_LEEnhancedConnectionComplete_Role.p /* Role */ ,
 u_LEEnhancedConnectionComplete_PeerAddressType.p /* PeerAddressType */ ,
 u_LEEnhancedConnectionComplete_PeerAddress.p /* PeerAddress */ ,
 u_LEEnhancedConnectionComplete_LocalResolvablePrivateAddress.p /* LocalResolvablePrivateAddress */ ,
 u_LEEnhancedConnectionComplete_PeerResolvablePrivateAddress.p /* PeerResolvablePrivateAddress */ ,
 u_LEEnhancedConnectionComplete_ConnInterval.p /* ConnInterval */ ,
 u_LEEnhancedConnectionComplete_ConnLatency.p /* ConnLatency */ ,
 u_LEEnhancedConnectionComplete_SupervisionTimeout.p /* SupervisionTimeout */ ,
 u_LEEnhancedConnectionComplete_MasterClockAccuracy.p /* MasterClockAccuracy */ );
break;
}
case 65:{
byte mbuf[4 - 2];
while (mbufi < (4 - 2)) mbuf[mbufi++] = fifo_dequeue();
fifo_unlock();
uint8_t mbufi_Stop = 2;
dispatch_Stop((mbuf[0] << 8) + mbuf[1] /* instance port*/);
break;
}
case 40:{
byte mbuf[22 - 2];
while (mbufi < (22 - 2)) mbuf[mbufi++] = fifo_dequeue();
fifo_unlock();
uint8_t mbufi_SMPIdentityInformation = 2;
union u_SMPIdentityInformation_Handle_t {
uint16_t p;
byte bytebuffer[2];
} u_SMPIdentityInformation_Handle;
u_SMPIdentityInformation_Handle.bytebuffer[1] = mbuf[mbufi_SMPIdentityInformation + 0];
u_SMPIdentityInformation_Handle.bytebuffer[0] = mbuf[mbufi_SMPIdentityInformation + 1];
mbufi_SMPIdentityInformation += 2;
union u_SMPIdentityInformation_IdentityResolvingKey_t {
ble_random_number_t p;
byte bytebuffer[16];
} u_SMPIdentityInformation_IdentityResolvingKey;
u_SMPIdentityInformation_IdentityResolvingKey.bytebuffer[15] = mbuf[mbufi_SMPIdentityInformation + 0];
u_SMPIdentityInformation_IdentityResolvingKey.bytebuffer[14] = mbuf[mbufi_SMPIdentityInformation + 1];
u_SMPIdentityInformation_IdentityResolvingKey.bytebuffer[13] = mbuf[mbufi_SMPIdentityInformation + 2];
u_SMPIdentityInformation_IdentityResolvingKey.bytebuffer[12] = mbuf[mbufi_SMPIdentityInformation + 3];
u_SMPIdentityInformation_IdentityResolvingKey.bytebuffer[11] = mbuf[mbufi_SMPIdentityInformation + 4];
u_SMPIdentityInformation_IdentityResolvingKey.bytebuffer[10] = mbuf[mbufi_SMPIdentityInformation + 5];
u_SMPIdentityInformation_IdentityResolvingKey.bytebuffer[9] = mbuf[mbufi_SMPIdentityInformation + 6];
u_SMPIdentityInformation_IdentityResolvingKey.bytebuffer[8] = mbuf[mbufi_SMPIdentityInformation + 7];
u_SMPIdentityInformation_IdentityResolvingKey.bytebuffer[7] = mbuf[mbufi_SMPIdentityInformation + 8];
u_SMPIdentityInformation_IdentityResolvingKey.bytebuffer[6] = mbuf[mbufi_SMPIdentityInformation + 9];
u_SMPIdentityInformation_IdentityResolvingKey.bytebuffer[5] = mbuf[mbufi_SMPIdentityInformation + 10];
u_SMPIdentityInformation_IdentityResolvingKey.bytebuffer[4] = mbuf[mbufi_SMPIdentityInformation + 11];
u_SMPIdentityInformation_IdentityResolvingKey.bytebuffer[3] = mbuf[mbufi_SMPIdentityInformation + 12];
u_SMPIdentityInformation_IdentityResolvingKey.bytebuffer[2] = mbuf[mbufi_SMPIdentityInformation + 13];
u_SMPIdentityInformation_IdentityResolvingKey.bytebuffer[1] = mbuf[mbufi_SMPIdentityInformation + 14];
u_SMPIdentityInformation_IdentityResolvingKey.bytebuffer[0] = mbuf[mbufi_SMPIdentityInformation + 15];
mbufi_SMPIdentityInformation += 16;
dispatch_SMPIdentityInformation((mbuf[0] << 8) + mbuf[1] /* instance port*/,
 u_SMPIdentityInformation_Handle.p /* Handle */ ,
 u_SMPIdentityInformation_IdentityResolvingKey.p /* IdentityResolvingKey */ );
break;
}
case 59:{
byte mbuf[30 - 2];
while (mbufi < (30 - 2)) mbuf[mbufi++] = fifo_dequeue();
fifo_unlock();
uint8_t mbufi_ATTReadResponse = 2;
union u_ATTReadResponse_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ATTReadResponse_ConnectionHandle;
u_ATTReadResponse_ConnectionHandle.bytebuffer[1] = mbuf[mbufi_ATTReadResponse + 0];
u_ATTReadResponse_ConnectionHandle.bytebuffer[0] = mbuf[mbufi_ATTReadResponse + 1];
mbufi_ATTReadResponse += 2;
union u_ATTReadResponse_AttributeValue_t {
ble_gatt_data_t p;
byte bytebuffer[24];
} u_ATTReadResponse_AttributeValue;
u_ATTReadResponse_AttributeValue.bytebuffer[23] = mbuf[mbufi_ATTReadResponse + 0];
u_ATTReadResponse_AttributeValue.bytebuffer[22] = mbuf[mbufi_ATTReadResponse + 1];
u_ATTReadResponse_AttributeValue.bytebuffer[21] = mbuf[mbufi_ATTReadResponse + 2];
u_ATTReadResponse_AttributeValue.bytebuffer[20] = mbuf[mbufi_ATTReadResponse + 3];
u_ATTReadResponse_AttributeValue.bytebuffer[19] = mbuf[mbufi_ATTReadResponse + 4];
u_ATTReadResponse_AttributeValue.bytebuffer[18] = mbuf[mbufi_ATTReadResponse + 5];
u_ATTReadResponse_AttributeValue.bytebuffer[17] = mbuf[mbufi_ATTReadResponse + 6];
u_ATTReadResponse_AttributeValue.bytebuffer[16] = mbuf[mbufi_ATTReadResponse + 7];
u_ATTReadResponse_AttributeValue.bytebuffer[15] = mbuf[mbufi_ATTReadResponse + 8];
u_ATTReadResponse_AttributeValue.bytebuffer[14] = mbuf[mbufi_ATTReadResponse + 9];
u_ATTReadResponse_AttributeValue.bytebuffer[13] = mbuf[mbufi_ATTReadResponse + 10];
u_ATTReadResponse_AttributeValue.bytebuffer[12] = mbuf[mbufi_ATTReadResponse + 11];
u_ATTReadResponse_AttributeValue.bytebuffer[11] = mbuf[mbufi_ATTReadResponse + 12];
u_ATTReadResponse_AttributeValue.bytebuffer[10] = mbuf[mbufi_ATTReadResponse + 13];
u_ATTReadResponse_AttributeValue.bytebuffer[9] = mbuf[mbufi_ATTReadResponse + 14];
u_ATTReadResponse_AttributeValue.bytebuffer[8] = mbuf[mbufi_ATTReadResponse + 15];
u_ATTReadResponse_AttributeValue.bytebuffer[7] = mbuf[mbufi_ATTReadResponse + 16];
u_ATTReadResponse_AttributeValue.bytebuffer[6] = mbuf[mbufi_ATTReadResponse + 17];
u_ATTReadResponse_AttributeValue.bytebuffer[5] = mbuf[mbufi_ATTReadResponse + 18];
u_ATTReadResponse_AttributeValue.bytebuffer[4] = mbuf[mbufi_ATTReadResponse + 19];
u_ATTReadResponse_AttributeValue.bytebuffer[3] = mbuf[mbufi_ATTReadResponse + 20];
u_ATTReadResponse_AttributeValue.bytebuffer[2] = mbuf[mbufi_ATTReadResponse + 21];
u_ATTReadResponse_AttributeValue.bytebuffer[1] = mbuf[mbufi_ATTReadResponse + 22];
u_ATTReadResponse_AttributeValue.bytebuffer[0] = mbuf[mbufi_ATTReadResponse + 23];
mbufi_ATTReadResponse += 24;
dispatch_ATTReadResponse((mbuf[0] << 8) + mbuf[1] /* instance port*/,
 u_ATTReadResponse_ConnectionHandle.p /* ConnectionHandle */ ,
 u_ATTReadResponse_AttributeValue.p /* AttributeValue */ );
break;
}
case 60:{
byte mbuf[26 - 2];
while (mbufi < (26 - 2)) mbuf[mbufi++] = fifo_dequeue();
fifo_unlock();
uint8_t mbufi_ATTReadByGroupTypeRequest = 2;
union u_ATTReadByGroupTypeRequest_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ATTReadByGroupTypeRequest_ConnectionHandle;
u_ATTReadByGroupTypeRequest_ConnectionHandle.bytebuffer[1] = mbuf[mbufi_ATTReadByGroupTypeRequest + 0];
u_ATTReadByGroupTypeRequest_ConnectionHandle.bytebuffer[0] = mbuf[mbufi_ATTReadByGroupTypeRequest + 1];
mbufi_ATTReadByGroupTypeRequest += 2;
union u_ATTReadByGroupTypeRequest_StartingHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ATTReadByGroupTypeRequest_StartingHandle;
u_ATTReadByGroupTypeRequest_StartingHandle.bytebuffer[1] = mbuf[mbufi_ATTReadByGroupTypeRequest + 0];
u_ATTReadByGroupTypeRequest_StartingHandle.bytebuffer[0] = mbuf[mbufi_ATTReadByGroupTypeRequest + 1];
mbufi_ATTReadByGroupTypeRequest += 2;
union u_ATTReadByGroupTypeRequest_EndingHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ATTReadByGroupTypeRequest_EndingHandle;
u_ATTReadByGroupTypeRequest_EndingHandle.bytebuffer[1] = mbuf[mbufi_ATTReadByGroupTypeRequest + 0];
u_ATTReadByGroupTypeRequest_EndingHandle.bytebuffer[0] = mbuf[mbufi_ATTReadByGroupTypeRequest + 1];
mbufi_ATTReadByGroupTypeRequest += 2;
union u_ATTReadByGroupTypeRequest_AttributeGroupType_t {
ble_uuid_t p;
byte bytebuffer[16];
} u_ATTReadByGroupTypeRequest_AttributeGroupType;
u_ATTReadByGroupTypeRequest_AttributeGroupType.bytebuffer[15] = mbuf[mbufi_ATTReadByGroupTypeRequest + 0];
u_ATTReadByGroupTypeRequest_AttributeGroupType.bytebuffer[14] = mbuf[mbufi_ATTReadByGroupTypeRequest + 1];
u_ATTReadByGroupTypeRequest_AttributeGroupType.bytebuffer[13] = mbuf[mbufi_ATTReadByGroupTypeRequest + 2];
u_ATTReadByGroupTypeRequest_AttributeGroupType.bytebuffer[12] = mbuf[mbufi_ATTReadByGroupTypeRequest + 3];
u_ATTReadByGroupTypeRequest_AttributeGroupType.bytebuffer[11] = mbuf[mbufi_ATTReadByGroupTypeRequest + 4];
u_ATTReadByGroupTypeRequest_AttributeGroupType.bytebuffer[10] = mbuf[mbufi_ATTReadByGroupTypeRequest + 5];
u_ATTReadByGroupTypeRequest_AttributeGroupType.bytebuffer[9] = mbuf[mbufi_ATTReadByGroupTypeRequest + 6];
u_ATTReadByGroupTypeRequest_AttributeGroupType.bytebuffer[8] = mbuf[mbufi_ATTReadByGroupTypeRequest + 7];
u_ATTReadByGroupTypeRequest_AttributeGroupType.bytebuffer[7] = mbuf[mbufi_ATTReadByGroupTypeRequest + 8];
u_ATTReadByGroupTypeRequest_AttributeGroupType.bytebuffer[6] = mbuf[mbufi_ATTReadByGroupTypeRequest + 9];
u_ATTReadByGroupTypeRequest_AttributeGroupType.bytebuffer[5] = mbuf[mbufi_ATTReadByGroupTypeRequest + 10];
u_ATTReadByGroupTypeRequest_AttributeGroupType.bytebuffer[4] = mbuf[mbufi_ATTReadByGroupTypeRequest + 11];
u_ATTReadByGroupTypeRequest_AttributeGroupType.bytebuffer[3] = mbuf[mbufi_ATTReadByGroupTypeRequest + 12];
u_ATTReadByGroupTypeRequest_AttributeGroupType.bytebuffer[2] = mbuf[mbufi_ATTReadByGroupTypeRequest + 13];
u_ATTReadByGroupTypeRequest_AttributeGroupType.bytebuffer[1] = mbuf[mbufi_ATTReadByGroupTypeRequest + 14];
u_ATTReadByGroupTypeRequest_AttributeGroupType.bytebuffer[0] = mbuf[mbufi_ATTReadByGroupTypeRequest + 15];
mbufi_ATTReadByGroupTypeRequest += 16;
dispatch_ATTReadByGroupTypeRequest((mbuf[0] << 8) + mbuf[1] /* instance port*/,
 u_ATTReadByGroupTypeRequest_ConnectionHandle.p /* ConnectionHandle */ ,
 u_ATTReadByGroupTypeRequest_StartingHandle.p /* StartingHandle */ ,
 u_ATTReadByGroupTypeRequest_EndingHandle.p /* EndingHandle */ ,
 u_ATTReadByGroupTypeRequest_AttributeGroupType.p /* AttributeGroupType */ );
break;
}
case 13:{
byte mbuf[7 - 2];
while (mbufi < (7 - 2)) mbuf[mbufi++] = fifo_dequeue();
fifo_unlock();
uint8_t mbufi_Disconnect = 2;
union u_Disconnect_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_Disconnect_ConnectionHandle;
u_Disconnect_ConnectionHandle.bytebuffer[1] = mbuf[mbufi_Disconnect + 0];
u_Disconnect_ConnectionHandle.bytebuffer[0] = mbuf[mbufi_Disconnect + 1];
mbufi_Disconnect += 2;
union u_Disconnect_Reason_t {
uint8_t p;
byte bytebuffer[1];
} u_Disconnect_Reason;
u_Disconnect_Reason.bytebuffer[0] = mbuf[mbufi_Disconnect + 0];
mbufi_Disconnect += 1;
dispatch_Disconnect((mbuf[0] << 8) + mbuf[1] /* instance port*/,
 u_Disconnect_ConnectionHandle.p /* ConnectionHandle */ ,
 u_Disconnect_Reason.p /* Reason */ );
break;
}
case 43:{
byte mbuf[9 - 2];
while (mbufi < (9 - 2)) mbuf[mbufi++] = fifo_dequeue();
fifo_unlock();
uint8_t mbufi_ATTReadByTypeError = 2;
union u_ATTReadByTypeError_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ATTReadByTypeError_ConnectionHandle;
u_ATTReadByTypeError_ConnectionHandle.bytebuffer[1] = mbuf[mbufi_ATTReadByTypeError + 0];
u_ATTReadByTypeError_ConnectionHandle.bytebuffer[0] = mbuf[mbufi_ATTReadByTypeError + 1];
mbufi_ATTReadByTypeError += 2;
union u_ATTReadByTypeError_AttributeHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ATTReadByTypeError_AttributeHandle;
u_ATTReadByTypeError_AttributeHandle.bytebuffer[1] = mbuf[mbufi_ATTReadByTypeError + 0];
u_ATTReadByTypeError_AttributeHandle.bytebuffer[0] = mbuf[mbufi_ATTReadByTypeError + 1];
mbufi_ATTReadByTypeError += 2;
union u_ATTReadByTypeError_Error_t {
uint8_t p;
byte bytebuffer[1];
} u_ATTReadByTypeError_Error;
u_ATTReadByTypeError_Error.bytebuffer[0] = mbuf[mbufi_ATTReadByTypeError + 0];
mbufi_ATTReadByTypeError += 1;
dispatch_ATTReadByTypeError((mbuf[0] << 8) + mbuf[1] /* instance port*/,
 u_ATTReadByTypeError_ConnectionHandle.p /* ConnectionHandle */ ,
 u_ATTReadByTypeError_AttributeHandle.p /* AttributeHandle */ ,
 u_ATTReadByTypeError_Error.p /* Error */ );
break;
}
case 44:{
byte mbuf[9 - 2];
while (mbufi < (9 - 2)) mbuf[mbufi++] = fifo_dequeue();
fifo_unlock();
uint8_t mbufi_ATTReadByGroupTypeError = 2;
union u_ATTReadByGroupTypeError_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ATTReadByGroupTypeError_ConnectionHandle;
u_ATTReadByGroupTypeError_ConnectionHandle.bytebuffer[1] = mbuf[mbufi_ATTReadByGroupTypeError + 0];
u_ATTReadByGroupTypeError_ConnectionHandle.bytebuffer[0] = mbuf[mbufi_ATTReadByGroupTypeError + 1];
mbufi_ATTReadByGroupTypeError += 2;
union u_ATTReadByGroupTypeError_AttributeHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ATTReadByGroupTypeError_AttributeHandle;
u_ATTReadByGroupTypeError_AttributeHandle.bytebuffer[1] = mbuf[mbufi_ATTReadByGroupTypeError + 0];
u_ATTReadByGroupTypeError_AttributeHandle.bytebuffer[0] = mbuf[mbufi_ATTReadByGroupTypeError + 1];
mbufi_ATTReadByGroupTypeError += 2;
union u_ATTReadByGroupTypeError_Error_t {
uint8_t p;
byte bytebuffer[1];
} u_ATTReadByGroupTypeError_Error;
u_ATTReadByGroupTypeError_Error.bytebuffer[0] = mbuf[mbufi_ATTReadByGroupTypeError + 0];
mbufi_ATTReadByGroupTypeError += 1;
dispatch_ATTReadByGroupTypeError((mbuf[0] << 8) + mbuf[1] /* instance port*/,
 u_ATTReadByGroupTypeError_ConnectionHandle.p /* ConnectionHandle */ ,
 u_ATTReadByGroupTypeError_AttributeHandle.p /* AttributeHandle */ ,
 u_ATTReadByGroupTypeError_Error.p /* Error */ );
break;
}
case 95:{
byte mbuf[22 - 2];
while (mbufi < (22 - 2)) mbuf[mbufi++] = fifo_dequeue();
fifo_unlock();
uint8_t mbufi_LEEncryptCompleted = 2;
union u_LEEncryptCompleted_NumberAllowedCommandPackets_t {
uint8_t p;
byte bytebuffer[1];
} u_LEEncryptCompleted_NumberAllowedCommandPackets;
u_LEEncryptCompleted_NumberAllowedCommandPackets.bytebuffer[0] = mbuf[mbufi_LEEncryptCompleted + 0];
mbufi_LEEncryptCompleted += 1;
union u_LEEncryptCompleted_Status_t {
uint8_t p;
byte bytebuffer[1];
} u_LEEncryptCompleted_Status;
u_LEEncryptCompleted_Status.bytebuffer[0] = mbuf[mbufi_LEEncryptCompleted + 0];
mbufi_LEEncryptCompleted += 1;
union u_LEEncryptCompleted_Encrypted_t {
ble_random_number_t p;
byte bytebuffer[16];
} u_LEEncryptCompleted_Encrypted;
u_LEEncryptCompleted_Encrypted.bytebuffer[15] = mbuf[mbufi_LEEncryptCompleted + 0];
u_LEEncryptCompleted_Encrypted.bytebuffer[14] = mbuf[mbufi_LEEncryptCompleted + 1];
u_LEEncryptCompleted_Encrypted.bytebuffer[13] = mbuf[mbufi_LEEncryptCompleted + 2];
u_LEEncryptCompleted_Encrypted.bytebuffer[12] = mbuf[mbufi_LEEncryptCompleted + 3];
u_LEEncryptCompleted_Encrypted.bytebuffer[11] = mbuf[mbufi_LEEncryptCompleted + 4];
u_LEEncryptCompleted_Encrypted.bytebuffer[10] = mbuf[mbufi_LEEncryptCompleted + 5];
u_LEEncryptCompleted_Encrypted.bytebuffer[9] = mbuf[mbufi_LEEncryptCompleted + 6];
u_LEEncryptCompleted_Encrypted.bytebuffer[8] = mbuf[mbufi_LEEncryptCompleted + 7];
u_LEEncryptCompleted_Encrypted.bytebuffer[7] = mbuf[mbufi_LEEncryptCompleted + 8];
u_LEEncryptCompleted_Encrypted.bytebuffer[6] = mbuf[mbufi_LEEncryptCompleted + 9];
u_LEEncryptCompleted_Encrypted.bytebuffer[5] = mbuf[mbufi_LEEncryptCompleted + 10];
u_LEEncryptCompleted_Encrypted.bytebuffer[4] = mbuf[mbufi_LEEncryptCompleted + 11];
u_LEEncryptCompleted_Encrypted.bytebuffer[3] = mbuf[mbufi_LEEncryptCompleted + 12];
u_LEEncryptCompleted_Encrypted.bytebuffer[2] = mbuf[mbufi_LEEncryptCompleted + 13];
u_LEEncryptCompleted_Encrypted.bytebuffer[1] = mbuf[mbufi_LEEncryptCompleted + 14];
u_LEEncryptCompleted_Encrypted.bytebuffer[0] = mbuf[mbufi_LEEncryptCompleted + 15];
mbufi_LEEncryptCompleted += 16;
dispatch_LEEncryptCompleted((mbuf[0] << 8) + mbuf[1] /* instance port*/,
 u_LEEncryptCompleted_NumberAllowedCommandPackets.p /* NumberAllowedCommandPackets */ ,
 u_LEEncryptCompleted_Status.p /* Status */ ,
 u_LEEncryptCompleted_Encrypted.p /* Encrypted */ );
break;
}
case 69:{
byte mbuf[37 - 2];
while (mbufi < (37 - 2)) mbuf[mbufi++] = fifo_dequeue();
fifo_unlock();
uint8_t mbufi_ConnectTo = 2;
union u_ConnectTo_AddressType_t {
uint8_t p;
byte bytebuffer[1];
} u_ConnectTo_AddressType;
u_ConnectTo_AddressType.bytebuffer[0] = mbuf[mbufi_ConnectTo + 0];
mbufi_ConnectTo += 1;
union u_ConnectTo_Address_t {
bdaddr_t p;
byte bytebuffer[6];
} u_ConnectTo_Address;
u_ConnectTo_Address.bytebuffer[5] = mbuf[mbufi_ConnectTo + 0];
u_ConnectTo_Address.bytebuffer[4] = mbuf[mbufi_ConnectTo + 1];
u_ConnectTo_Address.bytebuffer[3] = mbuf[mbufi_ConnectTo + 2];
u_ConnectTo_Address.bytebuffer[2] = mbuf[mbufi_ConnectTo + 3];
u_ConnectTo_Address.bytebuffer[1] = mbuf[mbufi_ConnectTo + 4];
u_ConnectTo_Address.bytebuffer[0] = mbuf[mbufi_ConnectTo + 5];
mbufi_ConnectTo += 6;
union u_ConnectTo_LongTermKey_t {
ble_random_number_t p;
byte bytebuffer[16];
} u_ConnectTo_LongTermKey;
u_ConnectTo_LongTermKey.bytebuffer[15] = mbuf[mbufi_ConnectTo + 0];
u_ConnectTo_LongTermKey.bytebuffer[14] = mbuf[mbufi_ConnectTo + 1];
u_ConnectTo_LongTermKey.bytebuffer[13] = mbuf[mbufi_ConnectTo + 2];
u_ConnectTo_LongTermKey.bytebuffer[12] = mbuf[mbufi_ConnectTo + 3];
u_ConnectTo_LongTermKey.bytebuffer[11] = mbuf[mbufi_ConnectTo + 4];
u_ConnectTo_LongTermKey.bytebuffer[10] = mbuf[mbufi_ConnectTo + 5];
u_ConnectTo_LongTermKey.bytebuffer[9] = mbuf[mbufi_ConnectTo + 6];
u_ConnectTo_LongTermKey.bytebuffer[8] = mbuf[mbufi_ConnectTo + 7];
u_ConnectTo_LongTermKey.bytebuffer[7] = mbuf[mbufi_ConnectTo + 8];
u_ConnectTo_LongTermKey.bytebuffer[6] = mbuf[mbufi_ConnectTo + 9];
u_ConnectTo_LongTermKey.bytebuffer[5] = mbuf[mbufi_ConnectTo + 10];
u_ConnectTo_LongTermKey.bytebuffer[4] = mbuf[mbufi_ConnectTo + 11];
u_ConnectTo_LongTermKey.bytebuffer[3] = mbuf[mbufi_ConnectTo + 12];
u_ConnectTo_LongTermKey.bytebuffer[2] = mbuf[mbufi_ConnectTo + 13];
u_ConnectTo_LongTermKey.bytebuffer[1] = mbuf[mbufi_ConnectTo + 14];
u_ConnectTo_LongTermKey.bytebuffer[0] = mbuf[mbufi_ConnectTo + 15];
mbufi_ConnectTo += 16;
union u_ConnectTo_EncryptedDiversifier_t {
uint16_t p;
byte bytebuffer[2];
} u_ConnectTo_EncryptedDiversifier;
u_ConnectTo_EncryptedDiversifier.bytebuffer[1] = mbuf[mbufi_ConnectTo + 0];
u_ConnectTo_EncryptedDiversifier.bytebuffer[0] = mbuf[mbufi_ConnectTo + 1];
mbufi_ConnectTo += 2;
union u_ConnectTo_RandomNumber_t {
ble_random_part_t p;
byte bytebuffer[8];
} u_ConnectTo_RandomNumber;
u_ConnectTo_RandomNumber.bytebuffer[7] = mbuf[mbufi_ConnectTo + 0];
u_ConnectTo_RandomNumber.bytebuffer[6] = mbuf[mbufi_ConnectTo + 1];
u_ConnectTo_RandomNumber.bytebuffer[5] = mbuf[mbufi_ConnectTo + 2];
u_ConnectTo_RandomNumber.bytebuffer[4] = mbuf[mbufi_ConnectTo + 3];
u_ConnectTo_RandomNumber.bytebuffer[3] = mbuf[mbufi_ConnectTo + 4];
u_ConnectTo_RandomNumber.bytebuffer[2] = mbuf[mbufi_ConnectTo + 5];
u_ConnectTo_RandomNumber.bytebuffer[1] = mbuf[mbufi_ConnectTo + 6];
u_ConnectTo_RandomNumber.bytebuffer[0] = mbuf[mbufi_ConnectTo + 7];
mbufi_ConnectTo += 8;
dispatch_ConnectTo((mbuf[0] << 8) + mbuf[1] /* instance port*/,
 u_ConnectTo_AddressType.p /* AddressType */ ,
 u_ConnectTo_Address.p /* Address */ ,
 u_ConnectTo_LongTermKey.p /* LongTermKey */ ,
 u_ConnectTo_EncryptedDiversifier.p /* EncryptedDiversifier */ ,
 u_ConnectTo_RandomNumber.p /* RandomNumber */ );
break;
}
case 51:{
byte mbuf[32 - 2];
while (mbufi < (32 - 2)) mbuf[mbufi++] = fifo_dequeue();
fifo_unlock();
uint8_t mbufi_ATTWriteRequest = 2;
union u_ATTWriteRequest_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ATTWriteRequest_ConnectionHandle;
u_ATTWriteRequest_ConnectionHandle.bytebuffer[1] = mbuf[mbufi_ATTWriteRequest + 0];
u_ATTWriteRequest_ConnectionHandle.bytebuffer[0] = mbuf[mbufi_ATTWriteRequest + 1];
mbufi_ATTWriteRequest += 2;
union u_ATTWriteRequest_AttributeHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ATTWriteRequest_AttributeHandle;
u_ATTWriteRequest_AttributeHandle.bytebuffer[1] = mbuf[mbufi_ATTWriteRequest + 0];
u_ATTWriteRequest_AttributeHandle.bytebuffer[0] = mbuf[mbufi_ATTWriteRequest + 1];
mbufi_ATTWriteRequest += 2;
union u_ATTWriteRequest_AttributeValue_t {
ble_gatt_data_t p;
byte bytebuffer[24];
} u_ATTWriteRequest_AttributeValue;
u_ATTWriteRequest_AttributeValue.bytebuffer[23] = mbuf[mbufi_ATTWriteRequest + 0];
u_ATTWriteRequest_AttributeValue.bytebuffer[22] = mbuf[mbufi_ATTWriteRequest + 1];
u_ATTWriteRequest_AttributeValue.bytebuffer[21] = mbuf[mbufi_ATTWriteRequest + 2];
u_ATTWriteRequest_AttributeValue.bytebuffer[20] = mbuf[mbufi_ATTWriteRequest + 3];
u_ATTWriteRequest_AttributeValue.bytebuffer[19] = mbuf[mbufi_ATTWriteRequest + 4];
u_ATTWriteRequest_AttributeValue.bytebuffer[18] = mbuf[mbufi_ATTWriteRequest + 5];
u_ATTWriteRequest_AttributeValue.bytebuffer[17] = mbuf[mbufi_ATTWriteRequest + 6];
u_ATTWriteRequest_AttributeValue.bytebuffer[16] = mbuf[mbufi_ATTWriteRequest + 7];
u_ATTWriteRequest_AttributeValue.bytebuffer[15] = mbuf[mbufi_ATTWriteRequest + 8];
u_ATTWriteRequest_AttributeValue.bytebuffer[14] = mbuf[mbufi_ATTWriteRequest + 9];
u_ATTWriteRequest_AttributeValue.bytebuffer[13] = mbuf[mbufi_ATTWriteRequest + 10];
u_ATTWriteRequest_AttributeValue.bytebuffer[12] = mbuf[mbufi_ATTWriteRequest + 11];
u_ATTWriteRequest_AttributeValue.bytebuffer[11] = mbuf[mbufi_ATTWriteRequest + 12];
u_ATTWriteRequest_AttributeValue.bytebuffer[10] = mbuf[mbufi_ATTWriteRequest + 13];
u_ATTWriteRequest_AttributeValue.bytebuffer[9] = mbuf[mbufi_ATTWriteRequest + 14];
u_ATTWriteRequest_AttributeValue.bytebuffer[8] = mbuf[mbufi_ATTWriteRequest + 15];
u_ATTWriteRequest_AttributeValue.bytebuffer[7] = mbuf[mbufi_ATTWriteRequest + 16];
u_ATTWriteRequest_AttributeValue.bytebuffer[6] = mbuf[mbufi_ATTWriteRequest + 17];
u_ATTWriteRequest_AttributeValue.bytebuffer[5] = mbuf[mbufi_ATTWriteRequest + 18];
u_ATTWriteRequest_AttributeValue.bytebuffer[4] = mbuf[mbufi_ATTWriteRequest + 19];
u_ATTWriteRequest_AttributeValue.bytebuffer[3] = mbuf[mbufi_ATTWriteRequest + 20];
u_ATTWriteRequest_AttributeValue.bytebuffer[2] = mbuf[mbufi_ATTWriteRequest + 21];
u_ATTWriteRequest_AttributeValue.bytebuffer[1] = mbuf[mbufi_ATTWriteRequest + 22];
u_ATTWriteRequest_AttributeValue.bytebuffer[0] = mbuf[mbufi_ATTWriteRequest + 23];
mbufi_ATTWriteRequest += 24;
dispatch_ATTWriteRequest((mbuf[0] << 8) + mbuf[1] /* instance port*/,
 u_ATTWriteRequest_ConnectionHandle.p /* ConnectionHandle */ ,
 u_ATTWriteRequest_AttributeHandle.p /* AttributeHandle */ ,
 u_ATTWriteRequest_AttributeValue.p /* AttributeValue */ );
break;
}
case 38:{
byte mbuf[16 - 2];
while (mbufi < (16 - 2)) mbuf[mbufi++] = fifo_dequeue();
fifo_unlock();
uint8_t mbufi_SMPMasterIdentification = 2;
union u_SMPMasterIdentification_Handle_t {
uint16_t p;
byte bytebuffer[2];
} u_SMPMasterIdentification_Handle;
u_SMPMasterIdentification_Handle.bytebuffer[1] = mbuf[mbufi_SMPMasterIdentification + 0];
u_SMPMasterIdentification_Handle.bytebuffer[0] = mbuf[mbufi_SMPMasterIdentification + 1];
mbufi_SMPMasterIdentification += 2;
union u_SMPMasterIdentification_EDIV_t {
uint16_t p;
byte bytebuffer[2];
} u_SMPMasterIdentification_EDIV;
u_SMPMasterIdentification_EDIV.bytebuffer[1] = mbuf[mbufi_SMPMasterIdentification + 0];
u_SMPMasterIdentification_EDIV.bytebuffer[0] = mbuf[mbufi_SMPMasterIdentification + 1];
mbufi_SMPMasterIdentification += 2;
union u_SMPMasterIdentification_Rand_t {
ble_random_part_t p;
byte bytebuffer[8];
} u_SMPMasterIdentification_Rand;
u_SMPMasterIdentification_Rand.bytebuffer[7] = mbuf[mbufi_SMPMasterIdentification + 0];
u_SMPMasterIdentification_Rand.bytebuffer[6] = mbuf[mbufi_SMPMasterIdentification + 1];
u_SMPMasterIdentification_Rand.bytebuffer[5] = mbuf[mbufi_SMPMasterIdentification + 2];
u_SMPMasterIdentification_Rand.bytebuffer[4] = mbuf[mbufi_SMPMasterIdentification + 3];
u_SMPMasterIdentification_Rand.bytebuffer[3] = mbuf[mbufi_SMPMasterIdentification + 4];
u_SMPMasterIdentification_Rand.bytebuffer[2] = mbuf[mbufi_SMPMasterIdentification + 5];
u_SMPMasterIdentification_Rand.bytebuffer[1] = mbuf[mbufi_SMPMasterIdentification + 6];
u_SMPMasterIdentification_Rand.bytebuffer[0] = mbuf[mbufi_SMPMasterIdentification + 7];
mbufi_SMPMasterIdentification += 8;
dispatch_SMPMasterIdentification((mbuf[0] << 8) + mbuf[1] /* instance port*/,
 u_SMPMasterIdentification_Handle.p /* Handle */ ,
 u_SMPMasterIdentification_EDIV.p /* EDIV */ ,
 u_SMPMasterIdentification_Rand.p /* Rand */ );
break;
}
case 103:{
byte mbuf[6 - 2];
while (mbufi < (6 - 2)) mbuf[mbufi++] = fifo_dequeue();
fifo_unlock();
uint8_t mbufi_SetLEEventMaskCompleted = 2;
union u_SetLEEventMaskCompleted_NumberAllowedCommandPackets_t {
uint8_t p;
byte bytebuffer[1];
} u_SetLEEventMaskCompleted_NumberAllowedCommandPackets;
u_SetLEEventMaskCompleted_NumberAllowedCommandPackets.bytebuffer[0] = mbuf[mbufi_SetLEEventMaskCompleted + 0];
mbufi_SetLEEventMaskCompleted += 1;
union u_SetLEEventMaskCompleted_Status_t {
uint8_t p;
byte bytebuffer[1];
} u_SetLEEventMaskCompleted_Status;
u_SetLEEventMaskCompleted_Status.bytebuffer[0] = mbuf[mbufi_SetLEEventMaskCompleted + 0];
mbufi_SetLEEventMaskCompleted += 1;
dispatch_SetLEEventMaskCompleted((mbuf[0] << 8) + mbuf[1] /* instance port*/,
 u_SetLEEventMaskCompleted_NumberAllowedCommandPackets.p /* NumberAllowedCommandPackets */ ,
 u_SetLEEventMaskCompleted_Status.p /* Status */ );
break;
}
case 26:{
byte mbuf[6 - 2];
while (mbufi < (6 - 2)) mbuf[mbufi++] = fifo_dequeue();
fifo_unlock();
uint8_t mbufi_SetLEScanEnable = 2;
union u_SetLEScanEnable_Enable_t {
uint8_t p;
byte bytebuffer[1];
} u_SetLEScanEnable_Enable;
u_SetLEScanEnable_Enable.bytebuffer[0] = mbuf[mbufi_SetLEScanEnable + 0];
mbufi_SetLEScanEnable += 1;
union u_SetLEScanEnable_FilterDuplicates_t {
uint8_t p;
byte bytebuffer[1];
} u_SetLEScanEnable_FilterDuplicates;
u_SetLEScanEnable_FilterDuplicates.bytebuffer[0] = mbuf[mbufi_SetLEScanEnable + 0];
mbufi_SetLEScanEnable += 1;
dispatch_SetLEScanEnable((mbuf[0] << 8) + mbuf[1] /* instance port*/,
 u_SetLEScanEnable_Enable.p /* Enable */ ,
 u_SetLEScanEnable_FilterDuplicates.p /* FilterDuplicates */ );
break;
}
case 61:{
byte mbuf[32 - 2];
while (mbufi < (32 - 2)) mbuf[mbufi++] = fifo_dequeue();
fifo_unlock();
uint8_t mbufi_ATTHandleValueIndication = 2;
union u_ATTHandleValueIndication_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ATTHandleValueIndication_ConnectionHandle;
u_ATTHandleValueIndication_ConnectionHandle.bytebuffer[1] = mbuf[mbufi_ATTHandleValueIndication + 0];
u_ATTHandleValueIndication_ConnectionHandle.bytebuffer[0] = mbuf[mbufi_ATTHandleValueIndication + 1];
mbufi_ATTHandleValueIndication += 2;
union u_ATTHandleValueIndication_AttributeHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ATTHandleValueIndication_AttributeHandle;
u_ATTHandleValueIndication_AttributeHandle.bytebuffer[1] = mbuf[mbufi_ATTHandleValueIndication + 0];
u_ATTHandleValueIndication_AttributeHandle.bytebuffer[0] = mbuf[mbufi_ATTHandleValueIndication + 1];
mbufi_ATTHandleValueIndication += 2;
union u_ATTHandleValueIndication_AttributeValue_t {
ble_gatt_data_t p;
byte bytebuffer[24];
} u_ATTHandleValueIndication_AttributeValue;
u_ATTHandleValueIndication_AttributeValue.bytebuffer[23] = mbuf[mbufi_ATTHandleValueIndication + 0];
u_ATTHandleValueIndication_AttributeValue.bytebuffer[22] = mbuf[mbufi_ATTHandleValueIndication + 1];
u_ATTHandleValueIndication_AttributeValue.bytebuffer[21] = mbuf[mbufi_ATTHandleValueIndication + 2];
u_ATTHandleValueIndication_AttributeValue.bytebuffer[20] = mbuf[mbufi_ATTHandleValueIndication + 3];
u_ATTHandleValueIndication_AttributeValue.bytebuffer[19] = mbuf[mbufi_ATTHandleValueIndication + 4];
u_ATTHandleValueIndication_AttributeValue.bytebuffer[18] = mbuf[mbufi_ATTHandleValueIndication + 5];
u_ATTHandleValueIndication_AttributeValue.bytebuffer[17] = mbuf[mbufi_ATTHandleValueIndication + 6];
u_ATTHandleValueIndication_AttributeValue.bytebuffer[16] = mbuf[mbufi_ATTHandleValueIndication + 7];
u_ATTHandleValueIndication_AttributeValue.bytebuffer[15] = mbuf[mbufi_ATTHandleValueIndication + 8];
u_ATTHandleValueIndication_AttributeValue.bytebuffer[14] = mbuf[mbufi_ATTHandleValueIndication + 9];
u_ATTHandleValueIndication_AttributeValue.bytebuffer[13] = mbuf[mbufi_ATTHandleValueIndication + 10];
u_ATTHandleValueIndication_AttributeValue.bytebuffer[12] = mbuf[mbufi_ATTHandleValueIndication + 11];
u_ATTHandleValueIndication_AttributeValue.bytebuffer[11] = mbuf[mbufi_ATTHandleValueIndication + 12];
u_ATTHandleValueIndication_AttributeValue.bytebuffer[10] = mbuf[mbufi_ATTHandleValueIndication + 13];
u_ATTHandleValueIndication_AttributeValue.bytebuffer[9] = mbuf[mbufi_ATTHandleValueIndication + 14];
u_ATTHandleValueIndication_AttributeValue.bytebuffer[8] = mbuf[mbufi_ATTHandleValueIndication + 15];
u_ATTHandleValueIndication_AttributeValue.bytebuffer[7] = mbuf[mbufi_ATTHandleValueIndication + 16];
u_ATTHandleValueIndication_AttributeValue.bytebuffer[6] = mbuf[mbufi_ATTHandleValueIndication + 17];
u_ATTHandleValueIndication_AttributeValue.bytebuffer[5] = mbuf[mbufi_ATTHandleValueIndication + 18];
u_ATTHandleValueIndication_AttributeValue.bytebuffer[4] = mbuf[mbufi_ATTHandleValueIndication + 19];
u_ATTHandleValueIndication_AttributeValue.bytebuffer[3] = mbuf[mbufi_ATTHandleValueIndication + 20];
u_ATTHandleValueIndication_AttributeValue.bytebuffer[2] = mbuf[mbufi_ATTHandleValueIndication + 21];
u_ATTHandleValueIndication_AttributeValue.bytebuffer[1] = mbuf[mbufi_ATTHandleValueIndication + 22];
u_ATTHandleValueIndication_AttributeValue.bytebuffer[0] = mbuf[mbufi_ATTHandleValueIndication + 23];
mbufi_ATTHandleValueIndication += 24;
dispatch_ATTHandleValueIndication((mbuf[0] << 8) + mbuf[1] /* instance port*/,
 u_ATTHandleValueIndication_ConnectionHandle.p /* ConnectionHandle */ ,
 u_ATTHandleValueIndication_AttributeHandle.p /* AttributeHandle */ ,
 u_ATTHandleValueIndication_AttributeValue.p /* AttributeValue */ );
break;
}
case 77:{
byte mbuf[4 - 2];
while (mbufi < (4 - 2)) mbuf[mbufi++] = fifo_dequeue();
fifo_unlock();
uint8_t mbufi_Encrypted = 2;
dispatch_Encrypted((mbuf[0] << 8) + mbuf[1] /* instance port*/);
break;
}
case 73:{
byte mbuf[11 - 2];
while (mbufi < (11 - 2)) mbuf[mbufi++] = fifo_dequeue();
fifo_unlock();
uint8_t mbufi_NotifierConnect = 2;
union u_NotifierConnect_AddressType_t {
uint8_t p;
byte bytebuffer[1];
} u_NotifierConnect_AddressType;
u_NotifierConnect_AddressType.bytebuffer[0] = mbuf[mbufi_NotifierConnect + 0];
mbufi_NotifierConnect += 1;
union u_NotifierConnect_Address_t {
bdaddr_t p;
byte bytebuffer[6];
} u_NotifierConnect_Address;
u_NotifierConnect_Address.bytebuffer[5] = mbuf[mbufi_NotifierConnect + 0];
u_NotifierConnect_Address.bytebuffer[4] = mbuf[mbufi_NotifierConnect + 1];
u_NotifierConnect_Address.bytebuffer[3] = mbuf[mbufi_NotifierConnect + 2];
u_NotifierConnect_Address.bytebuffer[2] = mbuf[mbufi_NotifierConnect + 3];
u_NotifierConnect_Address.bytebuffer[1] = mbuf[mbufi_NotifierConnect + 4];
u_NotifierConnect_Address.bytebuffer[0] = mbuf[mbufi_NotifierConnect + 5];
mbufi_NotifierConnect += 6;
dispatch_NotifierConnect((mbuf[0] << 8) + mbuf[1] /* instance port*/,
 u_NotifierConnect_AddressType.p /* AddressType */ ,
 u_NotifierConnect_Address.p /* Address */ );
break;
}
case 75:{
byte mbuf[10 - 2];
while (mbufi < (10 - 2)) mbuf[mbufi++] = fifo_dequeue();
fifo_unlock();
uint8_t mbufi_DeviceInitialised = 2;
union u_DeviceInitialised_Address_t {
bdaddr_t p;
byte bytebuffer[6];
} u_DeviceInitialised_Address;
u_DeviceInitialised_Address.bytebuffer[5] = mbuf[mbufi_DeviceInitialised + 0];
u_DeviceInitialised_Address.bytebuffer[4] = mbuf[mbufi_DeviceInitialised + 1];
u_DeviceInitialised_Address.bytebuffer[3] = mbuf[mbufi_DeviceInitialised + 2];
u_DeviceInitialised_Address.bytebuffer[2] = mbuf[mbufi_DeviceInitialised + 3];
u_DeviceInitialised_Address.bytebuffer[1] = mbuf[mbufi_DeviceInitialised + 4];
u_DeviceInitialised_Address.bytebuffer[0] = mbuf[mbufi_DeviceInitialised + 5];
mbufi_DeviceInitialised += 6;
dispatch_DeviceInitialised((mbuf[0] << 8) + mbuf[1] /* instance port*/,
 u_DeviceInitialised_Address.p /* Address */ );
break;
}
case 91:{
byte mbuf[6 - 2];
while (mbufi < (6 - 2)) mbuf[mbufi++] = fifo_dequeue();
fifo_unlock();
uint8_t mbufi_LEStartEncryptionStatus = 2;
union u_LEStartEncryptionStatus_NumberAllowedCommandPackets_t {
uint8_t p;
byte bytebuffer[1];
} u_LEStartEncryptionStatus_NumberAllowedCommandPackets;
u_LEStartEncryptionStatus_NumberAllowedCommandPackets.bytebuffer[0] = mbuf[mbufi_LEStartEncryptionStatus + 0];
mbufi_LEStartEncryptionStatus += 1;
union u_LEStartEncryptionStatus_Status_t {
uint8_t p;
byte bytebuffer[1];
} u_LEStartEncryptionStatus_Status;
u_LEStartEncryptionStatus_Status.bytebuffer[0] = mbuf[mbufi_LEStartEncryptionStatus + 0];
mbufi_LEStartEncryptionStatus += 1;
dispatch_LEStartEncryptionStatus((mbuf[0] << 8) + mbuf[1] /* instance port*/,
 u_LEStartEncryptionStatus_NumberAllowedCommandPackets.p /* NumberAllowedCommandPackets */ ,
 u_LEStartEncryptionStatus_Status.p /* Status */ );
break;
}
case 34:{
byte mbuf[7 - 2];
while (mbufi < (7 - 2)) mbuf[mbufi++] = fifo_dequeue();
fifo_unlock();
uint8_t mbufi_SMPPairingFailed = 2;
union u_SMPPairingFailed_Handle_t {
uint16_t p;
byte bytebuffer[2];
} u_SMPPairingFailed_Handle;
u_SMPPairingFailed_Handle.bytebuffer[1] = mbuf[mbufi_SMPPairingFailed + 0];
u_SMPPairingFailed_Handle.bytebuffer[0] = mbuf[mbufi_SMPPairingFailed + 1];
mbufi_SMPPairingFailed += 2;
union u_SMPPairingFailed_Reason_t {
uint8_t p;
byte bytebuffer[1];
} u_SMPPairingFailed_Reason;
u_SMPPairingFailed_Reason.bytebuffer[0] = mbuf[mbufi_SMPPairingFailed + 0];
mbufi_SMPPairingFailed += 1;
dispatch_SMPPairingFailed((mbuf[0] << 8) + mbuf[1] /* instance port*/,
 u_SMPPairingFailed_Handle.p /* Handle */ ,
 u_SMPPairingFailed_Reason.p /* Reason */ );
break;
}
case 9:{
byte mbuf[4 - 2];
while (mbufi < (4 - 2)) mbuf[mbufi++] = fifo_dequeue();
fifo_unlock();
uint8_t mbufi_Open = 2;
dispatch_Open((mbuf[0] << 8) + mbuf[1] /* instance port*/);
break;
}
case 21:{
byte mbuf[36 - 2];
while (mbufi < (36 - 2)) mbuf[mbufi++] = fifo_dequeue();
fifo_unlock();
uint8_t mbufi_LEEncrypt = 2;
union u_LEEncrypt_Key_t {
ble_random_number_t p;
byte bytebuffer[16];
} u_LEEncrypt_Key;
u_LEEncrypt_Key.bytebuffer[15] = mbuf[mbufi_LEEncrypt + 0];
u_LEEncrypt_Key.bytebuffer[14] = mbuf[mbufi_LEEncrypt + 1];
u_LEEncrypt_Key.bytebuffer[13] = mbuf[mbufi_LEEncrypt + 2];
u_LEEncrypt_Key.bytebuffer[12] = mbuf[mbufi_LEEncrypt + 3];
u_LEEncrypt_Key.bytebuffer[11] = mbuf[mbufi_LEEncrypt + 4];
u_LEEncrypt_Key.bytebuffer[10] = mbuf[mbufi_LEEncrypt + 5];
u_LEEncrypt_Key.bytebuffer[9] = mbuf[mbufi_LEEncrypt + 6];
u_LEEncrypt_Key.bytebuffer[8] = mbuf[mbufi_LEEncrypt + 7];
u_LEEncrypt_Key.bytebuffer[7] = mbuf[mbufi_LEEncrypt + 8];
u_LEEncrypt_Key.bytebuffer[6] = mbuf[mbufi_LEEncrypt + 9];
u_LEEncrypt_Key.bytebuffer[5] = mbuf[mbufi_LEEncrypt + 10];
u_LEEncrypt_Key.bytebuffer[4] = mbuf[mbufi_LEEncrypt + 11];
u_LEEncrypt_Key.bytebuffer[3] = mbuf[mbufi_LEEncrypt + 12];
u_LEEncrypt_Key.bytebuffer[2] = mbuf[mbufi_LEEncrypt + 13];
u_LEEncrypt_Key.bytebuffer[1] = mbuf[mbufi_LEEncrypt + 14];
u_LEEncrypt_Key.bytebuffer[0] = mbuf[mbufi_LEEncrypt + 15];
mbufi_LEEncrypt += 16;
union u_LEEncrypt_Plaintext_t {
ble_random_number_t p;
byte bytebuffer[16];
} u_LEEncrypt_Plaintext;
u_LEEncrypt_Plaintext.bytebuffer[15] = mbuf[mbufi_LEEncrypt + 0];
u_LEEncrypt_Plaintext.bytebuffer[14] = mbuf[mbufi_LEEncrypt + 1];
u_LEEncrypt_Plaintext.bytebuffer[13] = mbuf[mbufi_LEEncrypt + 2];
u_LEEncrypt_Plaintext.bytebuffer[12] = mbuf[mbufi_LEEncrypt + 3];
u_LEEncrypt_Plaintext.bytebuffer[11] = mbuf[mbufi_LEEncrypt + 4];
u_LEEncrypt_Plaintext.bytebuffer[10] = mbuf[mbufi_LEEncrypt + 5];
u_LEEncrypt_Plaintext.bytebuffer[9] = mbuf[mbufi_LEEncrypt + 6];
u_LEEncrypt_Plaintext.bytebuffer[8] = mbuf[mbufi_LEEncrypt + 7];
u_LEEncrypt_Plaintext.bytebuffer[7] = mbuf[mbufi_LEEncrypt + 8];
u_LEEncrypt_Plaintext.bytebuffer[6] = mbuf[mbufi_LEEncrypt + 9];
u_LEEncrypt_Plaintext.bytebuffer[5] = mbuf[mbufi_LEEncrypt + 10];
u_LEEncrypt_Plaintext.bytebuffer[4] = mbuf[mbufi_LEEncrypt + 11];
u_LEEncrypt_Plaintext.bytebuffer[3] = mbuf[mbufi_LEEncrypt + 12];
u_LEEncrypt_Plaintext.bytebuffer[2] = mbuf[mbufi_LEEncrypt + 13];
u_LEEncrypt_Plaintext.bytebuffer[1] = mbuf[mbufi_LEEncrypt + 14];
u_LEEncrypt_Plaintext.bytebuffer[0] = mbuf[mbufi_LEEncrypt + 15];
mbufi_LEEncrypt += 16;
dispatch_LEEncrypt((mbuf[0] << 8) + mbuf[1] /* instance port*/,
 u_LEEncrypt_Key.p /* Key */ ,
 u_LEEncrypt_Plaintext.p /* Plaintext */ );
break;
}
case 49:{
byte mbuf[6 - 2];
while (mbufi < (6 - 2)) mbuf[mbufi++] = fifo_dequeue();
fifo_unlock();
uint8_t mbufi_ATTHandleValueConfirmation = 2;
union u_ATTHandleValueConfirmation_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ATTHandleValueConfirmation_ConnectionHandle;
u_ATTHandleValueConfirmation_ConnectionHandle.bytebuffer[1] = mbuf[mbufi_ATTHandleValueConfirmation + 0];
u_ATTHandleValueConfirmation_ConnectionHandle.bytebuffer[0] = mbuf[mbufi_ATTHandleValueConfirmation + 1];
mbufi_ATTHandleValueConfirmation += 2;
dispatch_ATTHandleValueConfirmation((mbuf[0] << 8) + mbuf[1] /* instance port*/,
 u_ATTHandleValueConfirmation_ConnectionHandle.p /* ConnectionHandle */ );
break;
}
case 35:{
byte mbuf[70 - 2];
while (mbufi < (70 - 2)) mbuf[mbufi++] = fifo_dequeue();
fifo_unlock();
uint8_t mbufi_SMPPairingPublicKey = 2;
union u_SMPPairingPublicKey_Handle_t {
uint16_t p;
byte bytebuffer[2];
} u_SMPPairingPublicKey_Handle;
u_SMPPairingPublicKey_Handle.bytebuffer[1] = mbuf[mbufi_SMPPairingPublicKey + 0];
u_SMPPairingPublicKey_Handle.bytebuffer[0] = mbuf[mbufi_SMPPairingPublicKey + 1];
mbufi_SMPPairingPublicKey += 2;
union u_SMPPairingPublicKey_KeyX_t {
smp_public_key_t p;
byte bytebuffer[32];
} u_SMPPairingPublicKey_KeyX;
u_SMPPairingPublicKey_KeyX.bytebuffer[31] = mbuf[mbufi_SMPPairingPublicKey + 0];
u_SMPPairingPublicKey_KeyX.bytebuffer[30] = mbuf[mbufi_SMPPairingPublicKey + 1];
u_SMPPairingPublicKey_KeyX.bytebuffer[29] = mbuf[mbufi_SMPPairingPublicKey + 2];
u_SMPPairingPublicKey_KeyX.bytebuffer[28] = mbuf[mbufi_SMPPairingPublicKey + 3];
u_SMPPairingPublicKey_KeyX.bytebuffer[27] = mbuf[mbufi_SMPPairingPublicKey + 4];
u_SMPPairingPublicKey_KeyX.bytebuffer[26] = mbuf[mbufi_SMPPairingPublicKey + 5];
u_SMPPairingPublicKey_KeyX.bytebuffer[25] = mbuf[mbufi_SMPPairingPublicKey + 6];
u_SMPPairingPublicKey_KeyX.bytebuffer[24] = mbuf[mbufi_SMPPairingPublicKey + 7];
u_SMPPairingPublicKey_KeyX.bytebuffer[23] = mbuf[mbufi_SMPPairingPublicKey + 8];
u_SMPPairingPublicKey_KeyX.bytebuffer[22] = mbuf[mbufi_SMPPairingPublicKey + 9];
u_SMPPairingPublicKey_KeyX.bytebuffer[21] = mbuf[mbufi_SMPPairingPublicKey + 10];
u_SMPPairingPublicKey_KeyX.bytebuffer[20] = mbuf[mbufi_SMPPairingPublicKey + 11];
u_SMPPairingPublicKey_KeyX.bytebuffer[19] = mbuf[mbufi_SMPPairingPublicKey + 12];
u_SMPPairingPublicKey_KeyX.bytebuffer[18] = mbuf[mbufi_SMPPairingPublicKey + 13];
u_SMPPairingPublicKey_KeyX.bytebuffer[17] = mbuf[mbufi_SMPPairingPublicKey + 14];
u_SMPPairingPublicKey_KeyX.bytebuffer[16] = mbuf[mbufi_SMPPairingPublicKey + 15];
u_SMPPairingPublicKey_KeyX.bytebuffer[15] = mbuf[mbufi_SMPPairingPublicKey + 16];
u_SMPPairingPublicKey_KeyX.bytebuffer[14] = mbuf[mbufi_SMPPairingPublicKey + 17];
u_SMPPairingPublicKey_KeyX.bytebuffer[13] = mbuf[mbufi_SMPPairingPublicKey + 18];
u_SMPPairingPublicKey_KeyX.bytebuffer[12] = mbuf[mbufi_SMPPairingPublicKey + 19];
u_SMPPairingPublicKey_KeyX.bytebuffer[11] = mbuf[mbufi_SMPPairingPublicKey + 20];
u_SMPPairingPublicKey_KeyX.bytebuffer[10] = mbuf[mbufi_SMPPairingPublicKey + 21];
u_SMPPairingPublicKey_KeyX.bytebuffer[9] = mbuf[mbufi_SMPPairingPublicKey + 22];
u_SMPPairingPublicKey_KeyX.bytebuffer[8] = mbuf[mbufi_SMPPairingPublicKey + 23];
u_SMPPairingPublicKey_KeyX.bytebuffer[7] = mbuf[mbufi_SMPPairingPublicKey + 24];
u_SMPPairingPublicKey_KeyX.bytebuffer[6] = mbuf[mbufi_SMPPairingPublicKey + 25];
u_SMPPairingPublicKey_KeyX.bytebuffer[5] = mbuf[mbufi_SMPPairingPublicKey + 26];
u_SMPPairingPublicKey_KeyX.bytebuffer[4] = mbuf[mbufi_SMPPairingPublicKey + 27];
u_SMPPairingPublicKey_KeyX.bytebuffer[3] = mbuf[mbufi_SMPPairingPublicKey + 28];
u_SMPPairingPublicKey_KeyX.bytebuffer[2] = mbuf[mbufi_SMPPairingPublicKey + 29];
u_SMPPairingPublicKey_KeyX.bytebuffer[1] = mbuf[mbufi_SMPPairingPublicKey + 30];
u_SMPPairingPublicKey_KeyX.bytebuffer[0] = mbuf[mbufi_SMPPairingPublicKey + 31];
mbufi_SMPPairingPublicKey += 32;
union u_SMPPairingPublicKey_KeyY_t {
smp_public_key_t p;
byte bytebuffer[32];
} u_SMPPairingPublicKey_KeyY;
u_SMPPairingPublicKey_KeyY.bytebuffer[31] = mbuf[mbufi_SMPPairingPublicKey + 0];
u_SMPPairingPublicKey_KeyY.bytebuffer[30] = mbuf[mbufi_SMPPairingPublicKey + 1];
u_SMPPairingPublicKey_KeyY.bytebuffer[29] = mbuf[mbufi_SMPPairingPublicKey + 2];
u_SMPPairingPublicKey_KeyY.bytebuffer[28] = mbuf[mbufi_SMPPairingPublicKey + 3];
u_SMPPairingPublicKey_KeyY.bytebuffer[27] = mbuf[mbufi_SMPPairingPublicKey + 4];
u_SMPPairingPublicKey_KeyY.bytebuffer[26] = mbuf[mbufi_SMPPairingPublicKey + 5];
u_SMPPairingPublicKey_KeyY.bytebuffer[25] = mbuf[mbufi_SMPPairingPublicKey + 6];
u_SMPPairingPublicKey_KeyY.bytebuffer[24] = mbuf[mbufi_SMPPairingPublicKey + 7];
u_SMPPairingPublicKey_KeyY.bytebuffer[23] = mbuf[mbufi_SMPPairingPublicKey + 8];
u_SMPPairingPublicKey_KeyY.bytebuffer[22] = mbuf[mbufi_SMPPairingPublicKey + 9];
u_SMPPairingPublicKey_KeyY.bytebuffer[21] = mbuf[mbufi_SMPPairingPublicKey + 10];
u_SMPPairingPublicKey_KeyY.bytebuffer[20] = mbuf[mbufi_SMPPairingPublicKey + 11];
u_SMPPairingPublicKey_KeyY.bytebuffer[19] = mbuf[mbufi_SMPPairingPublicKey + 12];
u_SMPPairingPublicKey_KeyY.bytebuffer[18] = mbuf[mbufi_SMPPairingPublicKey + 13];
u_SMPPairingPublicKey_KeyY.bytebuffer[17] = mbuf[mbufi_SMPPairingPublicKey + 14];
u_SMPPairingPublicKey_KeyY.bytebuffer[16] = mbuf[mbufi_SMPPairingPublicKey + 15];
u_SMPPairingPublicKey_KeyY.bytebuffer[15] = mbuf[mbufi_SMPPairingPublicKey + 16];
u_SMPPairingPublicKey_KeyY.bytebuffer[14] = mbuf[mbufi_SMPPairingPublicKey + 17];
u_SMPPairingPublicKey_KeyY.bytebuffer[13] = mbuf[mbufi_SMPPairingPublicKey + 18];
u_SMPPairingPublicKey_KeyY.bytebuffer[12] = mbuf[mbufi_SMPPairingPublicKey + 19];
u_SMPPairingPublicKey_KeyY.bytebuffer[11] = mbuf[mbufi_SMPPairingPublicKey + 20];
u_SMPPairingPublicKey_KeyY.bytebuffer[10] = mbuf[mbufi_SMPPairingPublicKey + 21];
u_SMPPairingPublicKey_KeyY.bytebuffer[9] = mbuf[mbufi_SMPPairingPublicKey + 22];
u_SMPPairingPublicKey_KeyY.bytebuffer[8] = mbuf[mbufi_SMPPairingPublicKey + 23];
u_SMPPairingPublicKey_KeyY.bytebuffer[7] = mbuf[mbufi_SMPPairingPublicKey + 24];
u_SMPPairingPublicKey_KeyY.bytebuffer[6] = mbuf[mbufi_SMPPairingPublicKey + 25];
u_SMPPairingPublicKey_KeyY.bytebuffer[5] = mbuf[mbufi_SMPPairingPublicKey + 26];
u_SMPPairingPublicKey_KeyY.bytebuffer[4] = mbuf[mbufi_SMPPairingPublicKey + 27];
u_SMPPairingPublicKey_KeyY.bytebuffer[3] = mbuf[mbufi_SMPPairingPublicKey + 28];
u_SMPPairingPublicKey_KeyY.bytebuffer[2] = mbuf[mbufi_SMPPairingPublicKey + 29];
u_SMPPairingPublicKey_KeyY.bytebuffer[1] = mbuf[mbufi_SMPPairingPublicKey + 30];
u_SMPPairingPublicKey_KeyY.bytebuffer[0] = mbuf[mbufi_SMPPairingPublicKey + 31];
mbufi_SMPPairingPublicKey += 32;
dispatch_SMPPairingPublicKey((mbuf[0] << 8) + mbuf[1] /* instance port*/,
 u_SMPPairingPublicKey_Handle.p /* Handle */ ,
 u_SMPPairingPublicKey_KeyX.p /* KeyX */ ,
 u_SMPPairingPublicKey_KeyY.p /* KeyY */ );
break;
}
case 50:{
byte mbuf[9 - 2];
while (mbufi < (9 - 2)) mbuf[mbufi++] = fifo_dequeue();
fifo_unlock();
uint8_t mbufi_ATTReadError = 2;
union u_ATTReadError_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ATTReadError_ConnectionHandle;
u_ATTReadError_ConnectionHandle.bytebuffer[1] = mbuf[mbufi_ATTReadError + 0];
u_ATTReadError_ConnectionHandle.bytebuffer[0] = mbuf[mbufi_ATTReadError + 1];
mbufi_ATTReadError += 2;
union u_ATTReadError_AttributeHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ATTReadError_AttributeHandle;
u_ATTReadError_AttributeHandle.bytebuffer[1] = mbuf[mbufi_ATTReadError + 0];
u_ATTReadError_AttributeHandle.bytebuffer[0] = mbuf[mbufi_ATTReadError + 1];
mbufi_ATTReadError += 2;
union u_ATTReadError_Error_t {
uint8_t p;
byte bytebuffer[1];
} u_ATTReadError_Error;
u_ATTReadError_Error.bytebuffer[0] = mbuf[mbufi_ATTReadError + 0];
mbufi_ATTReadError += 1;
dispatch_ATTReadError((mbuf[0] << 8) + mbuf[1] /* instance port*/,
 u_ATTReadError_ConnectionHandle.p /* ConnectionHandle */ ,
 u_ATTReadError_AttributeHandle.p /* AttributeHandle */ ,
 u_ATTReadError_Error.p /* Error */ );
break;
}
case 25:{
byte mbuf[32 - 2];
while (mbufi < (32 - 2)) mbuf[mbufi++] = fifo_dequeue();
fifo_unlock();
uint8_t mbufi_LEStartEncryption = 2;
union u_LEStartEncryption_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_LEStartEncryption_ConnectionHandle;
u_LEStartEncryption_ConnectionHandle.bytebuffer[1] = mbuf[mbufi_LEStartEncryption + 0];
u_LEStartEncryption_ConnectionHandle.bytebuffer[0] = mbuf[mbufi_LEStartEncryption + 1];
mbufi_LEStartEncryption += 2;
union u_LEStartEncryption_Random_t {
ble_random_part_t p;
byte bytebuffer[8];
} u_LEStartEncryption_Random;
u_LEStartEncryption_Random.bytebuffer[7] = mbuf[mbufi_LEStartEncryption + 0];
u_LEStartEncryption_Random.bytebuffer[6] = mbuf[mbufi_LEStartEncryption + 1];
u_LEStartEncryption_Random.bytebuffer[5] = mbuf[mbufi_LEStartEncryption + 2];
u_LEStartEncryption_Random.bytebuffer[4] = mbuf[mbufi_LEStartEncryption + 3];
u_LEStartEncryption_Random.bytebuffer[3] = mbuf[mbufi_LEStartEncryption + 4];
u_LEStartEncryption_Random.bytebuffer[2] = mbuf[mbufi_LEStartEncryption + 5];
u_LEStartEncryption_Random.bytebuffer[1] = mbuf[mbufi_LEStartEncryption + 6];
u_LEStartEncryption_Random.bytebuffer[0] = mbuf[mbufi_LEStartEncryption + 7];
mbufi_LEStartEncryption += 8;
union u_LEStartEncryption_EDIV_t {
uint16_t p;
byte bytebuffer[2];
} u_LEStartEncryption_EDIV;
u_LEStartEncryption_EDIV.bytebuffer[1] = mbuf[mbufi_LEStartEncryption + 0];
u_LEStartEncryption_EDIV.bytebuffer[0] = mbuf[mbufi_LEStartEncryption + 1];
mbufi_LEStartEncryption += 2;
union u_LEStartEncryption_LTK_t {
ble_random_number_t p;
byte bytebuffer[16];
} u_LEStartEncryption_LTK;
u_LEStartEncryption_LTK.bytebuffer[15] = mbuf[mbufi_LEStartEncryption + 0];
u_LEStartEncryption_LTK.bytebuffer[14] = mbuf[mbufi_LEStartEncryption + 1];
u_LEStartEncryption_LTK.bytebuffer[13] = mbuf[mbufi_LEStartEncryption + 2];
u_LEStartEncryption_LTK.bytebuffer[12] = mbuf[mbufi_LEStartEncryption + 3];
u_LEStartEncryption_LTK.bytebuffer[11] = mbuf[mbufi_LEStartEncryption + 4];
u_LEStartEncryption_LTK.bytebuffer[10] = mbuf[mbufi_LEStartEncryption + 5];
u_LEStartEncryption_LTK.bytebuffer[9] = mbuf[mbufi_LEStartEncryption + 6];
u_LEStartEncryption_LTK.bytebuffer[8] = mbuf[mbufi_LEStartEncryption + 7];
u_LEStartEncryption_LTK.bytebuffer[7] = mbuf[mbufi_LEStartEncryption + 8];
u_LEStartEncryption_LTK.bytebuffer[6] = mbuf[mbufi_LEStartEncryption + 9];
u_LEStartEncryption_LTK.bytebuffer[5] = mbuf[mbufi_LEStartEncryption + 10];
u_LEStartEncryption_LTK.bytebuffer[4] = mbuf[mbufi_LEStartEncryption + 11];
u_LEStartEncryption_LTK.bytebuffer[3] = mbuf[mbufi_LEStartEncryption + 12];
u_LEStartEncryption_LTK.bytebuffer[2] = mbuf[mbufi_LEStartEncryption + 13];
u_LEStartEncryption_LTK.bytebuffer[1] = mbuf[mbufi_LEStartEncryption + 14];
u_LEStartEncryption_LTK.bytebuffer[0] = mbuf[mbufi_LEStartEncryption + 15];
mbufi_LEStartEncryption += 16;
dispatch_LEStartEncryption((mbuf[0] << 8) + mbuf[1] /* instance port*/,
 u_LEStartEncryption_ConnectionHandle.p /* ConnectionHandle */ ,
 u_LEStartEncryption_Random.p /* Random */ ,
 u_LEStartEncryption_EDIV.p /* EDIV */ ,
 u_LEStartEncryption_LTK.p /* LTK */ );
break;
}
case 67:{
byte mbuf[4 - 2];
while (mbufi < (4 - 2)) mbuf[mbufi++] = fifo_dequeue();
fifo_unlock();
uint8_t mbufi_Connect = 2;
dispatch_Connect((mbuf[0] << 8) + mbuf[1] /* instance port*/);
break;
}
case 3:{
byte mbuf[4 - 2];
while (mbufi < (4 - 2)) mbuf[mbufi++] = fifo_dequeue();
fifo_unlock();
uint8_t mbufi_MqttRequestWeightMeasurement = 2;
dispatch_MqttRequestWeightMeasurement((mbuf[0] << 8) + mbuf[1] /* instance port*/);
break;
}
case 39:{
byte mbuf[15 - 2];
while (mbufi < (15 - 2)) mbuf[mbufi++] = fifo_dequeue();
fifo_unlock();
uint8_t mbufi_SMPPairingResponse = 2;
union u_SMPPairingResponse_Handle_t {
uint16_t p;
byte bytebuffer[2];
} u_SMPPairingResponse_Handle;
u_SMPPairingResponse_Handle.bytebuffer[1] = mbuf[mbufi_SMPPairingResponse + 0];
u_SMPPairingResponse_Handle.bytebuffer[0] = mbuf[mbufi_SMPPairingResponse + 1];
mbufi_SMPPairingResponse += 2;
union u_SMPPairingResponse_IOCapability_t {
uint8_t p;
byte bytebuffer[1];
} u_SMPPairingResponse_IOCapability;
u_SMPPairingResponse_IOCapability.bytebuffer[0] = mbuf[mbufi_SMPPairingResponse + 0];
mbufi_SMPPairingResponse += 1;
union u_SMPPairingResponse_OOBDataPresent_t {
uint8_t p;
byte bytebuffer[1];
} u_SMPPairingResponse_OOBDataPresent;
u_SMPPairingResponse_OOBDataPresent.bytebuffer[0] = mbuf[mbufi_SMPPairingResponse + 0];
mbufi_SMPPairingResponse += 1;
union u_SMPPairingResponse_Bonding_t {
uint8_t p;
byte bytebuffer[1];
} u_SMPPairingResponse_Bonding;
u_SMPPairingResponse_Bonding.bytebuffer[0] = mbuf[mbufi_SMPPairingResponse + 0];
mbufi_SMPPairingResponse += 1;
union u_SMPPairingResponse_MITM_t {
uint8_t p;
byte bytebuffer[1];
} u_SMPPairingResponse_MITM;
u_SMPPairingResponse_MITM.bytebuffer[0] = mbuf[mbufi_SMPPairingResponse + 0];
mbufi_SMPPairingResponse += 1;
union u_SMPPairingResponse_SecureConnection_t {
uint8_t p;
byte bytebuffer[1];
} u_SMPPairingResponse_SecureConnection;
u_SMPPairingResponse_SecureConnection.bytebuffer[0] = mbuf[mbufi_SMPPairingResponse + 0];
mbufi_SMPPairingResponse += 1;
union u_SMPPairingResponse_Keypress_t {
uint8_t p;
byte bytebuffer[1];
} u_SMPPairingResponse_Keypress;
u_SMPPairingResponse_Keypress.bytebuffer[0] = mbuf[mbufi_SMPPairingResponse + 0];
mbufi_SMPPairingResponse += 1;
union u_SMPPairingResponse_MaximumEncryptionKeySize_t {
uint8_t p;
byte bytebuffer[1];
} u_SMPPairingResponse_MaximumEncryptionKeySize;
u_SMPPairingResponse_MaximumEncryptionKeySize.bytebuffer[0] = mbuf[mbufi_SMPPairingResponse + 0];
mbufi_SMPPairingResponse += 1;
union u_SMPPairingResponse_InitiatorKeyDistribution_t {
uint8_t p;
byte bytebuffer[1];
} u_SMPPairingResponse_InitiatorKeyDistribution;
u_SMPPairingResponse_InitiatorKeyDistribution.bytebuffer[0] = mbuf[mbufi_SMPPairingResponse + 0];
mbufi_SMPPairingResponse += 1;
union u_SMPPairingResponse_ResponderKeyDistribution_t {
uint8_t p;
byte bytebuffer[1];
} u_SMPPairingResponse_ResponderKeyDistribution;
u_SMPPairingResponse_ResponderKeyDistribution.bytebuffer[0] = mbuf[mbufi_SMPPairingResponse + 0];
mbufi_SMPPairingResponse += 1;
dispatch_SMPPairingResponse((mbuf[0] << 8) + mbuf[1] /* instance port*/,
 u_SMPPairingResponse_Handle.p /* Handle */ ,
 u_SMPPairingResponse_IOCapability.p /* IOCapability */ ,
 u_SMPPairingResponse_OOBDataPresent.p /* OOBDataPresent */ ,
 u_SMPPairingResponse_Bonding.p /* Bonding */ ,
 u_SMPPairingResponse_MITM.p /* MITM */ ,
 u_SMPPairingResponse_SecureConnection.p /* SecureConnection */ ,
 u_SMPPairingResponse_Keypress.p /* Keypress */ ,
 u_SMPPairingResponse_MaximumEncryptionKeySize.p /* MaximumEncryptionKeySize */ ,
 u_SMPPairingResponse_InitiatorKeyDistribution.p /* InitiatorKeyDistribution */ ,
 u_SMPPairingResponse_ResponderKeyDistribution.p /* ResponderKeyDistribution */ );
break;
}
case 58:{
byte mbuf[10 - 2];
while (mbufi < (10 - 2)) mbuf[mbufi++] = fifo_dequeue();
fifo_unlock();
uint8_t mbufi_ATTFindInformationRequest = 2;
union u_ATTFindInformationRequest_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ATTFindInformationRequest_ConnectionHandle;
u_ATTFindInformationRequest_ConnectionHandle.bytebuffer[1] = mbuf[mbufi_ATTFindInformationRequest + 0];
u_ATTFindInformationRequest_ConnectionHandle.bytebuffer[0] = mbuf[mbufi_ATTFindInformationRequest + 1];
mbufi_ATTFindInformationRequest += 2;
union u_ATTFindInformationRequest_StartingHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ATTFindInformationRequest_StartingHandle;
u_ATTFindInformationRequest_StartingHandle.bytebuffer[1] = mbuf[mbufi_ATTFindInformationRequest + 0];
u_ATTFindInformationRequest_StartingHandle.bytebuffer[0] = mbuf[mbufi_ATTFindInformationRequest + 1];
mbufi_ATTFindInformationRequest += 2;
union u_ATTFindInformationRequest_EndingHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ATTFindInformationRequest_EndingHandle;
u_ATTFindInformationRequest_EndingHandle.bytebuffer[1] = mbuf[mbufi_ATTFindInformationRequest + 0];
u_ATTFindInformationRequest_EndingHandle.bytebuffer[0] = mbuf[mbufi_ATTFindInformationRequest + 1];
mbufi_ATTFindInformationRequest += 2;
dispatch_ATTFindInformationRequest((mbuf[0] << 8) + mbuf[1] /* instance port*/,
 u_ATTFindInformationRequest_ConnectionHandle.p /* ConnectionHandle */ ,
 u_ATTFindInformationRequest_StartingHandle.p /* StartingHandle */ ,
 u_ATTFindInformationRequest_EndingHandle.p /* EndingHandle */ );
break;
}
}
return 1;
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

//external Message enqueue
void externalMessageEnqueue(uint8_t * msg, uint8_t msgSize, uint16_t listener_id) {
if ((msgSize >= 2) && (msg != NULL)) {
uint8_t msgSizeOK = 0;
switch(msg[0] * 256 + msg[1]) {
case 3:
if(msgSize == 2) {
msgSizeOK = 1;}
break;
case 1:
if(msgSize == 2) {
msgSizeOK = 1;}
break;
case 4:
if(msgSize == 2) {
msgSizeOK = 1;}
break;
case 2:
if(msgSize == 2) {
msgSizeOK = 1;}
break;
}

if(msgSizeOK == 1) {
fifo_lock();
if ( fifo_byte_available() > (msgSize + 2) ) {
	uint8_t i;
	for (i = 0; i < 2; i++) {
		_fifo_enqueue(msg[i]);
	}
	_fifo_enqueue((listener_id >> 8) & 0xFF);
	_fifo_enqueue(listener_id & 0xFF);
	for (i = 2; i < msgSize; i++) {
		_fifo_enqueue(msg[i]);
	}
}
fifo_unlock_and_notify();
}
}
}

void initialize_configuration_MedicalGW() {
// Initialize connectors
register_external_ANDUC352BLEImpl_send_Tellu_TelluCloudWeightScale_listener(&forward_ANDUC352BLEImpl_send_Tellu_TelluCloudWeightScale);
register_external_ANDUA651BLEImpl_send_Tellu_TelluCloudBloodPressure_listener(&forward_ANDUA651BLEImpl_send_Tellu_TelluCloudBloodPressure);
register_BLEScannerImpl_send_Scanner_Started_listener(&enqueue_BLEScannerImpl_send_Scanner_Started);
register_BLEScannerImpl_send_Scanner_Stopped_listener(&enqueue_BLEScannerImpl_send_Scanner_Stopped);
register_BLEScannerImpl_send_Scanner_Failure_listener(&enqueue_BLEScannerImpl_send_Scanner_Failure);
register_BLEScannerImpl_send_Scanner_ConnectableAdvertisement_listener(&enqueue_BLEScannerImpl_send_Scanner_ConnectableAdvertisement);
register_BLEScannerImpl_send_Socket_Open_listener(&enqueue_BLEScannerImpl_send_Socket_Open);
register_BLEScannerImpl_send_Socket_Close_listener(&enqueue_BLEScannerImpl_send_Socket_Close);
register_BLEScannerImpl_send_HCICommands_Reset_listener(&enqueue_BLEScannerImpl_send_HCICommands_Reset);
register_BLEScannerImpl_send_HCICommands_SetEventMask_listener(&enqueue_BLEScannerImpl_send_HCICommands_SetEventMask);
register_BLEScannerImpl_send_HCICommands_SetEventMaskAll_listener(&enqueue_BLEScannerImpl_send_HCICommands_SetEventMaskAll);
register_BLEScannerImpl_send_HCICommands_SetLocalName_listener(&enqueue_BLEScannerImpl_send_HCICommands_SetLocalName);
register_BLEScannerImpl_send_HCICommands_Disconnect_listener(&enqueue_BLEScannerImpl_send_HCICommands_Disconnect);
register_BLEScannerImpl_send_HCICommands_SetLEEventMask_listener(&enqueue_BLEScannerImpl_send_HCICommands_SetLEEventMask);
register_BLEScannerImpl_send_HCICommands_SetLEEventMaskAll_listener(&enqueue_BLEScannerImpl_send_HCICommands_SetLEEventMaskAll);
register_BLEScannerImpl_send_HCICommands_SetLEAdvertisementParameters_listener(&enqueue_BLEScannerImpl_send_HCICommands_SetLEAdvertisementParameters);
register_BLEScannerImpl_send_HCICommands_SetLEAdvertiseEnable_listener(&enqueue_BLEScannerImpl_send_HCICommands_SetLEAdvertiseEnable);
register_BLEScannerImpl_send_HCICommands_SetLEAdvertisingData_listener(&enqueue_BLEScannerImpl_send_HCICommands_SetLEAdvertisingData);
register_BLEScannerImpl_send_HCICommands_SetLEScanResponseData_listener(&enqueue_BLEScannerImpl_send_HCICommands_SetLEScanResponseData);
register_BLEScannerImpl_send_HCICommands_SetLEScanParameters_listener(&enqueue_BLEScannerImpl_send_HCICommands_SetLEScanParameters);
register_BLEScannerImpl_send_HCICommands_SetLEScanEnable_listener(&enqueue_BLEScannerImpl_send_HCICommands_SetLEScanEnable);
register_BLEScannerImpl_send_HCICommands_LECreateConnection_listener(&enqueue_BLEScannerImpl_send_HCICommands_LECreateConnection);
register_BLEScannerImpl_send_HCICommands_LECreateConnectionCancel_listener(&enqueue_BLEScannerImpl_send_HCICommands_LECreateConnectionCancel);
register_BLEScannerImpl_send_HCICommands_LERand_listener(&enqueue_BLEScannerImpl_send_HCICommands_LERand);
register_BLEScannerImpl_send_HCICommands_LEEncrypt_listener(&enqueue_BLEScannerImpl_send_HCICommands_LEEncrypt);
register_BLEScannerImpl_send_HCICommands_LEStartEncryption_listener(&enqueue_BLEScannerImpl_send_HCICommands_LEStartEncryption);
register_BLEScannerImpl_send_SMP_SMPPairingRequest_listener(&enqueue_BLEScannerImpl_send_SMP_SMPPairingRequest);
register_BLEScannerImpl_send_SMP_SMPPairingResponse_listener(&enqueue_BLEScannerImpl_send_SMP_SMPPairingResponse);
register_BLEScannerImpl_send_SMP_SMPPairingConfirm_listener(&enqueue_BLEScannerImpl_send_SMP_SMPPairingConfirm);
register_BLEScannerImpl_send_SMP_SMPPairingRandom_listener(&enqueue_BLEScannerImpl_send_SMP_SMPPairingRandom);
register_BLEScannerImpl_send_SMP_SMPPairingFailed_listener(&enqueue_BLEScannerImpl_send_SMP_SMPPairingFailed);
register_BLEScannerImpl_send_SMP_SMPPairingPublicKey_listener(&enqueue_BLEScannerImpl_send_SMP_SMPPairingPublicKey);
register_BLEScannerImpl_send_SMP_SMPPairingDHKeyCheck_listener(&enqueue_BLEScannerImpl_send_SMP_SMPPairingDHKeyCheck);
register_BLEScannerImpl_send_SMP_SMPKeypressNotification_listener(&enqueue_BLEScannerImpl_send_SMP_SMPKeypressNotification);
register_BLEScannerImpl_send_SMP_SMPEncryptionInformation_listener(&enqueue_BLEScannerImpl_send_SMP_SMPEncryptionInformation);
register_BLEScannerImpl_send_SMP_SMPMasterIdentification_listener(&enqueue_BLEScannerImpl_send_SMP_SMPMasterIdentification);
register_BLEScannerImpl_send_SMP_SMPIdentityInformation_listener(&enqueue_BLEScannerImpl_send_SMP_SMPIdentityInformation);
register_BLEScannerImpl_send_SMP_SMPIdentityAddressInformation_listener(&enqueue_BLEScannerImpl_send_SMP_SMPIdentityAddressInformation);
register_BLEScannerImpl_send_SMP_SMPSigningInformation_listener(&enqueue_BLEScannerImpl_send_SMP_SMPSigningInformation);
register_BLEScannerImpl_send_SMP_SMPSecurityRequest_listener(&enqueue_BLEScannerImpl_send_SMP_SMPSecurityRequest);
register_BLEScannerImpl_send_ATT_ATTFindInformationRequest_listener(&enqueue_BLEScannerImpl_send_ATT_ATTFindInformationRequest);
register_BLEScannerImpl_send_ATT_ATTFindInformationResponse_listener(&enqueue_BLEScannerImpl_send_ATT_ATTFindInformationResponse);
register_BLEScannerImpl_send_ATT_ATTFindInformationError_listener(&enqueue_BLEScannerImpl_send_ATT_ATTFindInformationError);
register_BLEScannerImpl_send_ATT_ATTReadByTypeRequest_listener(&enqueue_BLEScannerImpl_send_ATT_ATTReadByTypeRequest);
register_BLEScannerImpl_send_ATT_ATTReadByTypeResponse_listener(&enqueue_BLEScannerImpl_send_ATT_ATTReadByTypeResponse);
register_BLEScannerImpl_send_ATT_ATTReadByTypeError_listener(&enqueue_BLEScannerImpl_send_ATT_ATTReadByTypeError);
register_BLEScannerImpl_send_ATT_ATTReadRequest_listener(&enqueue_BLEScannerImpl_send_ATT_ATTReadRequest);
register_BLEScannerImpl_send_ATT_ATTReadResponse_listener(&enqueue_BLEScannerImpl_send_ATT_ATTReadResponse);
register_BLEScannerImpl_send_ATT_ATTReadError_listener(&enqueue_BLEScannerImpl_send_ATT_ATTReadError);
register_BLEScannerImpl_send_ATT_ATTReadByGroupTypeRequest_listener(&enqueue_BLEScannerImpl_send_ATT_ATTReadByGroupTypeRequest);
register_BLEScannerImpl_send_ATT_ATTReadByGroupTypeResponse_listener(&enqueue_BLEScannerImpl_send_ATT_ATTReadByGroupTypeResponse);
register_BLEScannerImpl_send_ATT_ATTReadByGroupTypeError_listener(&enqueue_BLEScannerImpl_send_ATT_ATTReadByGroupTypeError);
register_BLEScannerImpl_send_ATT_ATTWriteRequest_listener(&enqueue_BLEScannerImpl_send_ATT_ATTWriteRequest);
register_BLEScannerImpl_send_ATT_ATTWriteResponse_listener(&enqueue_BLEScannerImpl_send_ATT_ATTWriteResponse);
register_BLEScannerImpl_send_ATT_ATTWriteError_listener(&enqueue_BLEScannerImpl_send_ATT_ATTWriteError);
register_BLEScannerImpl_send_ATT_ATTWriteCommand_listener(&enqueue_BLEScannerImpl_send_ATT_ATTWriteCommand);
register_BLEScannerImpl_send_ATT_ATTHandleValueNotification_listener(&enqueue_BLEScannerImpl_send_ATT_ATTHandleValueNotification);
register_BLEScannerImpl_send_ATT_ATTHandleValueIndication_listener(&enqueue_BLEScannerImpl_send_ATT_ATTHandleValueIndication);
register_BLEScannerImpl_send_ATT_ATTHandleValueConfirmation_listener(&enqueue_BLEScannerImpl_send_ATT_ATTHandleValueConfirmation);
register_ANDUA651BLEImpl_send_ANDUA651BLE_WantsToConnect_listener(&enqueue_ANDUA651BLEImpl_send_ANDUA651BLE_WantsToConnect);
register_ANDUA651BLEImpl_send_ANDUA651BLE_FinishedConnection_listener(&enqueue_ANDUA651BLEImpl_send_ANDUA651BLE_FinishedConnection);
register_ANDUA651BLEImpl_send_Scanner_Start_listener(&enqueue_ANDUA651BLEImpl_send_Scanner_Start);
register_ANDUA651BLEImpl_send_Scanner_Stop_listener(&enqueue_ANDUA651BLEImpl_send_Scanner_Stop);
register_ANDUA651BLEImpl_send_Connecter_Connect_listener(&enqueue_ANDUA651BLEImpl_send_Connecter_Connect);
register_ANDUA651BLEImpl_send_Connecter_ConnectTo_listener(&enqueue_ANDUA651BLEImpl_send_Connecter_ConnectTo);
register_ANDUA651BLEImpl_send_Connecter_ConnectToU_listener(&enqueue_ANDUA651BLEImpl_send_Connecter_ConnectToU);
register_ANDUA651BLEImpl_send_Connecter_Stop_listener(&enqueue_ANDUA651BLEImpl_send_Connecter_Stop);
register_ANDUA651BLEImpl_send_Connecter_Encrypt_listener(&enqueue_ANDUA651BLEImpl_send_Connecter_Encrypt);
register_ANDUA651BLEImpl_send_Notifications_NotifierConnect_listener(&enqueue_ANDUA651BLEImpl_send_Notifications_NotifierConnect);
register_ANDUA651BLEImpl_send_Notifications_NotifierRequest_listener(&enqueue_ANDUA651BLEImpl_send_Notifications_NotifierRequest);
register_ANDUA651BLEImpl_send_Notifications_NotifierError_listener(&enqueue_ANDUA651BLEImpl_send_Notifications_NotifierError);
register_ANDUA651BLEImpl_send_Notifications_NotifierReceived_listener(&enqueue_ANDUA651BLEImpl_send_Notifications_NotifierReceived);
register_ANDUA651BLEImpl_send_Notifications_NotifierStored_listener(&enqueue_ANDUA651BLEImpl_send_Notifications_NotifierStored);
register_ANDUA651BLEImpl_send_ATT_ATTFindInformationRequest_listener(&enqueue_ANDUA651BLEImpl_send_ATT_ATTFindInformationRequest);
register_ANDUA651BLEImpl_send_ATT_ATTFindInformationResponse_listener(&enqueue_ANDUA651BLEImpl_send_ATT_ATTFindInformationResponse);
register_ANDUA651BLEImpl_send_ATT_ATTFindInformationError_listener(&enqueue_ANDUA651BLEImpl_send_ATT_ATTFindInformationError);
register_ANDUA651BLEImpl_send_ATT_ATTReadByTypeRequest_listener(&enqueue_ANDUA651BLEImpl_send_ATT_ATTReadByTypeRequest);
register_ANDUA651BLEImpl_send_ATT_ATTReadByTypeResponse_listener(&enqueue_ANDUA651BLEImpl_send_ATT_ATTReadByTypeResponse);
register_ANDUA651BLEImpl_send_ATT_ATTReadByTypeError_listener(&enqueue_ANDUA651BLEImpl_send_ATT_ATTReadByTypeError);
register_ANDUA651BLEImpl_send_ATT_ATTReadRequest_listener(&enqueue_ANDUA651BLEImpl_send_ATT_ATTReadRequest);
register_ANDUA651BLEImpl_send_ATT_ATTReadResponse_listener(&enqueue_ANDUA651BLEImpl_send_ATT_ATTReadResponse);
register_ANDUA651BLEImpl_send_ATT_ATTReadError_listener(&enqueue_ANDUA651BLEImpl_send_ATT_ATTReadError);
register_ANDUA651BLEImpl_send_ATT_ATTReadByGroupTypeRequest_listener(&enqueue_ANDUA651BLEImpl_send_ATT_ATTReadByGroupTypeRequest);
register_ANDUA651BLEImpl_send_ATT_ATTReadByGroupTypeResponse_listener(&enqueue_ANDUA651BLEImpl_send_ATT_ATTReadByGroupTypeResponse);
register_ANDUA651BLEImpl_send_ATT_ATTReadByGroupTypeError_listener(&enqueue_ANDUA651BLEImpl_send_ATT_ATTReadByGroupTypeError);
register_ANDUA651BLEImpl_send_ATT_ATTWriteRequest_listener(&enqueue_ANDUA651BLEImpl_send_ATT_ATTWriteRequest);
register_ANDUA651BLEImpl_send_ATT_ATTWriteResponse_listener(&enqueue_ANDUA651BLEImpl_send_ATT_ATTWriteResponse);
register_ANDUA651BLEImpl_send_ATT_ATTWriteError_listener(&enqueue_ANDUA651BLEImpl_send_ATT_ATTWriteError);
register_ANDUA651BLEImpl_send_ATT_ATTWriteCommand_listener(&enqueue_ANDUA651BLEImpl_send_ATT_ATTWriteCommand);
register_ANDUA651BLEImpl_send_ATT_ATTHandleValueNotification_listener(&enqueue_ANDUA651BLEImpl_send_ATT_ATTHandleValueNotification);
register_ANDUA651BLEImpl_send_ATT_ATTHandleValueIndication_listener(&enqueue_ANDUA651BLEImpl_send_ATT_ATTHandleValueIndication);
register_ANDUA651BLEImpl_send_ATT_ATTHandleValueConfirmation_listener(&enqueue_ANDUA651BLEImpl_send_ATT_ATTHandleValueConfirmation);
register_ANDUC352BLEImpl_send_ANDUC352BLE_WantsToConnect_listener(&enqueue_ANDUC352BLEImpl_send_ANDUC352BLE_WantsToConnect);
register_ANDUC352BLEImpl_send_ANDUC352BLE_FinishedConnection_listener(&enqueue_ANDUC352BLEImpl_send_ANDUC352BLE_FinishedConnection);
register_ANDUC352BLEImpl_send_Scanner_Start_listener(&enqueue_ANDUC352BLEImpl_send_Scanner_Start);
register_ANDUC352BLEImpl_send_Scanner_Stop_listener(&enqueue_ANDUC352BLEImpl_send_Scanner_Stop);
register_ANDUC352BLEImpl_send_Connecter_Connect_listener(&enqueue_ANDUC352BLEImpl_send_Connecter_Connect);
register_ANDUC352BLEImpl_send_Connecter_ConnectTo_listener(&enqueue_ANDUC352BLEImpl_send_Connecter_ConnectTo);
register_ANDUC352BLEImpl_send_Connecter_ConnectToU_listener(&enqueue_ANDUC352BLEImpl_send_Connecter_ConnectToU);
register_ANDUC352BLEImpl_send_Connecter_Stop_listener(&enqueue_ANDUC352BLEImpl_send_Connecter_Stop);
register_ANDUC352BLEImpl_send_Connecter_Encrypt_listener(&enqueue_ANDUC352BLEImpl_send_Connecter_Encrypt);
register_ANDUC352BLEImpl_send_Notifications_NotifierConnect_listener(&enqueue_ANDUC352BLEImpl_send_Notifications_NotifierConnect);
register_ANDUC352BLEImpl_send_Notifications_NotifierRequest_listener(&enqueue_ANDUC352BLEImpl_send_Notifications_NotifierRequest);
register_ANDUC352BLEImpl_send_Notifications_NotifierError_listener(&enqueue_ANDUC352BLEImpl_send_Notifications_NotifierError);
register_ANDUC352BLEImpl_send_Notifications_NotifierReceived_listener(&enqueue_ANDUC352BLEImpl_send_Notifications_NotifierReceived);
register_ANDUC352BLEImpl_send_Notifications_NotifierStored_listener(&enqueue_ANDUC352BLEImpl_send_Notifications_NotifierStored);
register_ANDUC352BLEImpl_send_ATT_ATTFindInformationRequest_listener(&enqueue_ANDUC352BLEImpl_send_ATT_ATTFindInformationRequest);
register_ANDUC352BLEImpl_send_ATT_ATTFindInformationResponse_listener(&enqueue_ANDUC352BLEImpl_send_ATT_ATTFindInformationResponse);
register_ANDUC352BLEImpl_send_ATT_ATTFindInformationError_listener(&enqueue_ANDUC352BLEImpl_send_ATT_ATTFindInformationError);
register_ANDUC352BLEImpl_send_ATT_ATTReadByTypeRequest_listener(&enqueue_ANDUC352BLEImpl_send_ATT_ATTReadByTypeRequest);
register_ANDUC352BLEImpl_send_ATT_ATTReadByTypeResponse_listener(&enqueue_ANDUC352BLEImpl_send_ATT_ATTReadByTypeResponse);
register_ANDUC352BLEImpl_send_ATT_ATTReadByTypeError_listener(&enqueue_ANDUC352BLEImpl_send_ATT_ATTReadByTypeError);
register_ANDUC352BLEImpl_send_ATT_ATTReadRequest_listener(&enqueue_ANDUC352BLEImpl_send_ATT_ATTReadRequest);
register_ANDUC352BLEImpl_send_ATT_ATTReadResponse_listener(&enqueue_ANDUC352BLEImpl_send_ATT_ATTReadResponse);
register_ANDUC352BLEImpl_send_ATT_ATTReadError_listener(&enqueue_ANDUC352BLEImpl_send_ATT_ATTReadError);
register_ANDUC352BLEImpl_send_ATT_ATTReadByGroupTypeRequest_listener(&enqueue_ANDUC352BLEImpl_send_ATT_ATTReadByGroupTypeRequest);
register_ANDUC352BLEImpl_send_ATT_ATTReadByGroupTypeResponse_listener(&enqueue_ANDUC352BLEImpl_send_ATT_ATTReadByGroupTypeResponse);
register_ANDUC352BLEImpl_send_ATT_ATTReadByGroupTypeError_listener(&enqueue_ANDUC352BLEImpl_send_ATT_ATTReadByGroupTypeError);
register_ANDUC352BLEImpl_send_ATT_ATTWriteRequest_listener(&enqueue_ANDUC352BLEImpl_send_ATT_ATTWriteRequest);
register_ANDUC352BLEImpl_send_ATT_ATTWriteResponse_listener(&enqueue_ANDUC352BLEImpl_send_ATT_ATTWriteResponse);
register_ANDUC352BLEImpl_send_ATT_ATTWriteError_listener(&enqueue_ANDUC352BLEImpl_send_ATT_ATTWriteError);
register_ANDUC352BLEImpl_send_ATT_ATTWriteCommand_listener(&enqueue_ANDUC352BLEImpl_send_ATT_ATTWriteCommand);
register_ANDUC352BLEImpl_send_ATT_ATTHandleValueNotification_listener(&enqueue_ANDUC352BLEImpl_send_ATT_ATTHandleValueNotification);
register_ANDUC352BLEImpl_send_ATT_ATTHandleValueIndication_listener(&enqueue_ANDUC352BLEImpl_send_ATT_ATTHandleValueIndication);
register_ANDUC352BLEImpl_send_ATT_ATTHandleValueConfirmation_listener(&enqueue_ANDUC352BLEImpl_send_ATT_ATTHandleValueConfirmation);
register_BLEInitialiserImpl_send_Initialiser_Started_listener(&enqueue_BLEInitialiserImpl_send_Initialiser_Started);
register_BLEInitialiserImpl_send_Initialiser_Stopped_listener(&enqueue_BLEInitialiserImpl_send_Initialiser_Stopped);
register_BLEInitialiserImpl_send_Initialiser_Failure_listener(&enqueue_BLEInitialiserImpl_send_Initialiser_Failure);
register_BLEInitialiserImpl_send_Initialiser_DeviceInitialised_listener(&enqueue_BLEInitialiserImpl_send_Initialiser_DeviceInitialised);
register_BLEInitialiserImpl_send_Socket_Open_listener(&enqueue_BLEInitialiserImpl_send_Socket_Open);
register_BLEInitialiserImpl_send_Socket_Close_listener(&enqueue_BLEInitialiserImpl_send_Socket_Close);
register_BLEInitialiserImpl_send_HCICommands_Reset_listener(&enqueue_BLEInitialiserImpl_send_HCICommands_Reset);
register_BLEInitialiserImpl_send_HCICommands_SetEventMask_listener(&enqueue_BLEInitialiserImpl_send_HCICommands_SetEventMask);
register_BLEInitialiserImpl_send_HCICommands_SetEventMaskAll_listener(&enqueue_BLEInitialiserImpl_send_HCICommands_SetEventMaskAll);
register_BLEInitialiserImpl_send_HCICommands_SetLocalName_listener(&enqueue_BLEInitialiserImpl_send_HCICommands_SetLocalName);
register_BLEInitialiserImpl_send_HCICommands_Disconnect_listener(&enqueue_BLEInitialiserImpl_send_HCICommands_Disconnect);
register_BLEInitialiserImpl_send_HCICommands_SetLEEventMask_listener(&enqueue_BLEInitialiserImpl_send_HCICommands_SetLEEventMask);
register_BLEInitialiserImpl_send_HCICommands_SetLEEventMaskAll_listener(&enqueue_BLEInitialiserImpl_send_HCICommands_SetLEEventMaskAll);
register_BLEInitialiserImpl_send_HCICommands_SetLEAdvertisementParameters_listener(&enqueue_BLEInitialiserImpl_send_HCICommands_SetLEAdvertisementParameters);
register_BLEInitialiserImpl_send_HCICommands_SetLEAdvertiseEnable_listener(&enqueue_BLEInitialiserImpl_send_HCICommands_SetLEAdvertiseEnable);
register_BLEInitialiserImpl_send_HCICommands_SetLEAdvertisingData_listener(&enqueue_BLEInitialiserImpl_send_HCICommands_SetLEAdvertisingData);
register_BLEInitialiserImpl_send_HCICommands_SetLEScanResponseData_listener(&enqueue_BLEInitialiserImpl_send_HCICommands_SetLEScanResponseData);
register_BLEInitialiserImpl_send_HCICommands_SetLEScanParameters_listener(&enqueue_BLEInitialiserImpl_send_HCICommands_SetLEScanParameters);
register_BLEInitialiserImpl_send_HCICommands_SetLEScanEnable_listener(&enqueue_BLEInitialiserImpl_send_HCICommands_SetLEScanEnable);
register_BLEInitialiserImpl_send_HCICommands_LECreateConnection_listener(&enqueue_BLEInitialiserImpl_send_HCICommands_LECreateConnection);
register_BLEInitialiserImpl_send_HCICommands_LECreateConnectionCancel_listener(&enqueue_BLEInitialiserImpl_send_HCICommands_LECreateConnectionCancel);
register_BLEInitialiserImpl_send_HCICommands_LERand_listener(&enqueue_BLEInitialiserImpl_send_HCICommands_LERand);
register_BLEInitialiserImpl_send_HCICommands_LEEncrypt_listener(&enqueue_BLEInitialiserImpl_send_HCICommands_LEEncrypt);
register_BLEInitialiserImpl_send_HCICommands_LEStartEncryption_listener(&enqueue_BLEInitialiserImpl_send_HCICommands_LEStartEncryption);
register_BLEInitialiserImpl_send_SMP_SMPPairingRequest_listener(&enqueue_BLEInitialiserImpl_send_SMP_SMPPairingRequest);
register_BLEInitialiserImpl_send_SMP_SMPPairingResponse_listener(&enqueue_BLEInitialiserImpl_send_SMP_SMPPairingResponse);
register_BLEInitialiserImpl_send_SMP_SMPPairingConfirm_listener(&enqueue_BLEInitialiserImpl_send_SMP_SMPPairingConfirm);
register_BLEInitialiserImpl_send_SMP_SMPPairingRandom_listener(&enqueue_BLEInitialiserImpl_send_SMP_SMPPairingRandom);
register_BLEInitialiserImpl_send_SMP_SMPPairingFailed_listener(&enqueue_BLEInitialiserImpl_send_SMP_SMPPairingFailed);
register_BLEInitialiserImpl_send_SMP_SMPPairingPublicKey_listener(&enqueue_BLEInitialiserImpl_send_SMP_SMPPairingPublicKey);
register_BLEInitialiserImpl_send_SMP_SMPPairingDHKeyCheck_listener(&enqueue_BLEInitialiserImpl_send_SMP_SMPPairingDHKeyCheck);
register_BLEInitialiserImpl_send_SMP_SMPKeypressNotification_listener(&enqueue_BLEInitialiserImpl_send_SMP_SMPKeypressNotification);
register_BLEInitialiserImpl_send_SMP_SMPEncryptionInformation_listener(&enqueue_BLEInitialiserImpl_send_SMP_SMPEncryptionInformation);
register_BLEInitialiserImpl_send_SMP_SMPMasterIdentification_listener(&enqueue_BLEInitialiserImpl_send_SMP_SMPMasterIdentification);
register_BLEInitialiserImpl_send_SMP_SMPIdentityInformation_listener(&enqueue_BLEInitialiserImpl_send_SMP_SMPIdentityInformation);
register_BLEInitialiserImpl_send_SMP_SMPIdentityAddressInformation_listener(&enqueue_BLEInitialiserImpl_send_SMP_SMPIdentityAddressInformation);
register_BLEInitialiserImpl_send_SMP_SMPSigningInformation_listener(&enqueue_BLEInitialiserImpl_send_SMP_SMPSigningInformation);
register_BLEInitialiserImpl_send_SMP_SMPSecurityRequest_listener(&enqueue_BLEInitialiserImpl_send_SMP_SMPSecurityRequest);
register_BLEInitialiserImpl_send_ATT_ATTFindInformationRequest_listener(&enqueue_BLEInitialiserImpl_send_ATT_ATTFindInformationRequest);
register_BLEInitialiserImpl_send_ATT_ATTFindInformationResponse_listener(&enqueue_BLEInitialiserImpl_send_ATT_ATTFindInformationResponse);
register_BLEInitialiserImpl_send_ATT_ATTFindInformationError_listener(&enqueue_BLEInitialiserImpl_send_ATT_ATTFindInformationError);
register_BLEInitialiserImpl_send_ATT_ATTReadByTypeRequest_listener(&enqueue_BLEInitialiserImpl_send_ATT_ATTReadByTypeRequest);
register_BLEInitialiserImpl_send_ATT_ATTReadByTypeResponse_listener(&enqueue_BLEInitialiserImpl_send_ATT_ATTReadByTypeResponse);
register_BLEInitialiserImpl_send_ATT_ATTReadByTypeError_listener(&enqueue_BLEInitialiserImpl_send_ATT_ATTReadByTypeError);
register_BLEInitialiserImpl_send_ATT_ATTReadRequest_listener(&enqueue_BLEInitialiserImpl_send_ATT_ATTReadRequest);
register_BLEInitialiserImpl_send_ATT_ATTReadResponse_listener(&enqueue_BLEInitialiserImpl_send_ATT_ATTReadResponse);
register_BLEInitialiserImpl_send_ATT_ATTReadError_listener(&enqueue_BLEInitialiserImpl_send_ATT_ATTReadError);
register_BLEInitialiserImpl_send_ATT_ATTReadByGroupTypeRequest_listener(&enqueue_BLEInitialiserImpl_send_ATT_ATTReadByGroupTypeRequest);
register_BLEInitialiserImpl_send_ATT_ATTReadByGroupTypeResponse_listener(&enqueue_BLEInitialiserImpl_send_ATT_ATTReadByGroupTypeResponse);
register_BLEInitialiserImpl_send_ATT_ATTReadByGroupTypeError_listener(&enqueue_BLEInitialiserImpl_send_ATT_ATTReadByGroupTypeError);
register_BLEInitialiserImpl_send_ATT_ATTWriteRequest_listener(&enqueue_BLEInitialiserImpl_send_ATT_ATTWriteRequest);
register_BLEInitialiserImpl_send_ATT_ATTWriteResponse_listener(&enqueue_BLEInitialiserImpl_send_ATT_ATTWriteResponse);
register_BLEInitialiserImpl_send_ATT_ATTWriteError_listener(&enqueue_BLEInitialiserImpl_send_ATT_ATTWriteError);
register_BLEInitialiserImpl_send_ATT_ATTWriteCommand_listener(&enqueue_BLEInitialiserImpl_send_ATT_ATTWriteCommand);
register_BLEInitialiserImpl_send_ATT_ATTHandleValueNotification_listener(&enqueue_BLEInitialiserImpl_send_ATT_ATTHandleValueNotification);
register_BLEInitialiserImpl_send_ATT_ATTHandleValueIndication_listener(&enqueue_BLEInitialiserImpl_send_ATT_ATTHandleValueIndication);
register_BLEInitialiserImpl_send_ATT_ATTHandleValueConfirmation_listener(&enqueue_BLEInitialiserImpl_send_ATT_ATTHandleValueConfirmation);
register_BLEConnecterImpl_send_Connecter_Connected_listener(&enqueue_BLEConnecterImpl_send_Connecter_Connected);
register_BLEConnecterImpl_send_Connecter_Stopped_listener(&enqueue_BLEConnecterImpl_send_Connecter_Stopped);
register_BLEConnecterImpl_send_Connecter_Failure_listener(&enqueue_BLEConnecterImpl_send_Connecter_Failure);
register_BLEConnecterImpl_send_Connecter_Encrypted_listener(&enqueue_BLEConnecterImpl_send_Connecter_Encrypted);
register_BLEConnecterImpl_send_Socket_Open_listener(&enqueue_BLEConnecterImpl_send_Socket_Open);
register_BLEConnecterImpl_send_Socket_Close_listener(&enqueue_BLEConnecterImpl_send_Socket_Close);
register_BLEConnecterImpl_send_HCICommands_Reset_listener(&enqueue_BLEConnecterImpl_send_HCICommands_Reset);
register_BLEConnecterImpl_send_HCICommands_SetEventMask_listener(&enqueue_BLEConnecterImpl_send_HCICommands_SetEventMask);
register_BLEConnecterImpl_send_HCICommands_SetEventMaskAll_listener(&enqueue_BLEConnecterImpl_send_HCICommands_SetEventMaskAll);
register_BLEConnecterImpl_send_HCICommands_SetLocalName_listener(&enqueue_BLEConnecterImpl_send_HCICommands_SetLocalName);
register_BLEConnecterImpl_send_HCICommands_Disconnect_listener(&enqueue_BLEConnecterImpl_send_HCICommands_Disconnect);
register_BLEConnecterImpl_send_HCICommands_SetLEEventMask_listener(&enqueue_BLEConnecterImpl_send_HCICommands_SetLEEventMask);
register_BLEConnecterImpl_send_HCICommands_SetLEEventMaskAll_listener(&enqueue_BLEConnecterImpl_send_HCICommands_SetLEEventMaskAll);
register_BLEConnecterImpl_send_HCICommands_SetLEAdvertisementParameters_listener(&enqueue_BLEConnecterImpl_send_HCICommands_SetLEAdvertisementParameters);
register_BLEConnecterImpl_send_HCICommands_SetLEAdvertiseEnable_listener(&enqueue_BLEConnecterImpl_send_HCICommands_SetLEAdvertiseEnable);
register_BLEConnecterImpl_send_HCICommands_SetLEAdvertisingData_listener(&enqueue_BLEConnecterImpl_send_HCICommands_SetLEAdvertisingData);
register_BLEConnecterImpl_send_HCICommands_SetLEScanResponseData_listener(&enqueue_BLEConnecterImpl_send_HCICommands_SetLEScanResponseData);
register_BLEConnecterImpl_send_HCICommands_SetLEScanParameters_listener(&enqueue_BLEConnecterImpl_send_HCICommands_SetLEScanParameters);
register_BLEConnecterImpl_send_HCICommands_SetLEScanEnable_listener(&enqueue_BLEConnecterImpl_send_HCICommands_SetLEScanEnable);
register_BLEConnecterImpl_send_HCICommands_LECreateConnection_listener(&enqueue_BLEConnecterImpl_send_HCICommands_LECreateConnection);
register_BLEConnecterImpl_send_HCICommands_LECreateConnectionCancel_listener(&enqueue_BLEConnecterImpl_send_HCICommands_LECreateConnectionCancel);
register_BLEConnecterImpl_send_HCICommands_LERand_listener(&enqueue_BLEConnecterImpl_send_HCICommands_LERand);
register_BLEConnecterImpl_send_HCICommands_LEEncrypt_listener(&enqueue_BLEConnecterImpl_send_HCICommands_LEEncrypt);
register_BLEConnecterImpl_send_HCICommands_LEStartEncryption_listener(&enqueue_BLEConnecterImpl_send_HCICommands_LEStartEncryption);
register_BLEConnecterImpl_send_SMP_SMPPairingRequest_listener(&enqueue_BLEConnecterImpl_send_SMP_SMPPairingRequest);
register_BLEConnecterImpl_send_SMP_SMPPairingResponse_listener(&enqueue_BLEConnecterImpl_send_SMP_SMPPairingResponse);
register_BLEConnecterImpl_send_SMP_SMPPairingConfirm_listener(&enqueue_BLEConnecterImpl_send_SMP_SMPPairingConfirm);
register_BLEConnecterImpl_send_SMP_SMPPairingRandom_listener(&enqueue_BLEConnecterImpl_send_SMP_SMPPairingRandom);
register_BLEConnecterImpl_send_SMP_SMPPairingFailed_listener(&enqueue_BLEConnecterImpl_send_SMP_SMPPairingFailed);
register_BLEConnecterImpl_send_SMP_SMPPairingPublicKey_listener(&enqueue_BLEConnecterImpl_send_SMP_SMPPairingPublicKey);
register_BLEConnecterImpl_send_SMP_SMPPairingDHKeyCheck_listener(&enqueue_BLEConnecterImpl_send_SMP_SMPPairingDHKeyCheck);
register_BLEConnecterImpl_send_SMP_SMPKeypressNotification_listener(&enqueue_BLEConnecterImpl_send_SMP_SMPKeypressNotification);
register_BLEConnecterImpl_send_SMP_SMPEncryptionInformation_listener(&enqueue_BLEConnecterImpl_send_SMP_SMPEncryptionInformation);
register_BLEConnecterImpl_send_SMP_SMPMasterIdentification_listener(&enqueue_BLEConnecterImpl_send_SMP_SMPMasterIdentification);
register_BLEConnecterImpl_send_SMP_SMPIdentityInformation_listener(&enqueue_BLEConnecterImpl_send_SMP_SMPIdentityInformation);
register_BLEConnecterImpl_send_SMP_SMPIdentityAddressInformation_listener(&enqueue_BLEConnecterImpl_send_SMP_SMPIdentityAddressInformation);
register_BLEConnecterImpl_send_SMP_SMPSigningInformation_listener(&enqueue_BLEConnecterImpl_send_SMP_SMPSigningInformation);
register_BLEConnecterImpl_send_SMP_SMPSecurityRequest_listener(&enqueue_BLEConnecterImpl_send_SMP_SMPSecurityRequest);
register_BLEConnecterImpl_send_ATT_ATTFindInformationRequest_listener(&enqueue_BLEConnecterImpl_send_ATT_ATTFindInformationRequest);
register_BLEConnecterImpl_send_ATT_ATTFindInformationResponse_listener(&enqueue_BLEConnecterImpl_send_ATT_ATTFindInformationResponse);
register_BLEConnecterImpl_send_ATT_ATTFindInformationError_listener(&enqueue_BLEConnecterImpl_send_ATT_ATTFindInformationError);
register_BLEConnecterImpl_send_ATT_ATTReadByTypeRequest_listener(&enqueue_BLEConnecterImpl_send_ATT_ATTReadByTypeRequest);
register_BLEConnecterImpl_send_ATT_ATTReadByTypeResponse_listener(&enqueue_BLEConnecterImpl_send_ATT_ATTReadByTypeResponse);
register_BLEConnecterImpl_send_ATT_ATTReadByTypeError_listener(&enqueue_BLEConnecterImpl_send_ATT_ATTReadByTypeError);
register_BLEConnecterImpl_send_ATT_ATTReadRequest_listener(&enqueue_BLEConnecterImpl_send_ATT_ATTReadRequest);
register_BLEConnecterImpl_send_ATT_ATTReadResponse_listener(&enqueue_BLEConnecterImpl_send_ATT_ATTReadResponse);
register_BLEConnecterImpl_send_ATT_ATTReadError_listener(&enqueue_BLEConnecterImpl_send_ATT_ATTReadError);
register_BLEConnecterImpl_send_ATT_ATTReadByGroupTypeRequest_listener(&enqueue_BLEConnecterImpl_send_ATT_ATTReadByGroupTypeRequest);
register_BLEConnecterImpl_send_ATT_ATTReadByGroupTypeResponse_listener(&enqueue_BLEConnecterImpl_send_ATT_ATTReadByGroupTypeResponse);
register_BLEConnecterImpl_send_ATT_ATTReadByGroupTypeError_listener(&enqueue_BLEConnecterImpl_send_ATT_ATTReadByGroupTypeError);
register_BLEConnecterImpl_send_ATT_ATTWriteRequest_listener(&enqueue_BLEConnecterImpl_send_ATT_ATTWriteRequest);
register_BLEConnecterImpl_send_ATT_ATTWriteResponse_listener(&enqueue_BLEConnecterImpl_send_ATT_ATTWriteResponse);
register_BLEConnecterImpl_send_ATT_ATTWriteError_listener(&enqueue_BLEConnecterImpl_send_ATT_ATTWriteError);
register_BLEConnecterImpl_send_ATT_ATTWriteCommand_listener(&enqueue_BLEConnecterImpl_send_ATT_ATTWriteCommand);
register_BLEConnecterImpl_send_ATT_ATTHandleValueNotification_listener(&enqueue_BLEConnecterImpl_send_ATT_ATTHandleValueNotification);
register_BLEConnecterImpl_send_ATT_ATTHandleValueIndication_listener(&enqueue_BLEConnecterImpl_send_ATT_ATTHandleValueIndication);
register_BLEConnecterImpl_send_ATT_ATTHandleValueConfirmation_listener(&enqueue_BLEConnecterImpl_send_ATT_ATTHandleValueConfirmation);
register_BLENotifierImpl_send_Notifications_NotifierReady_listener(&enqueue_BLENotifierImpl_send_Notifications_NotifierReady);
register_BLENotifierImpl_send_Notifications_NotifierFinished_listener(&enqueue_BLENotifierImpl_send_Notifications_NotifierFinished);
register_BLENotifierImpl_send_Connecter_Connect_listener(&enqueue_BLENotifierImpl_send_Connecter_Connect);
register_BLENotifierImpl_send_Connecter_ConnectTo_listener(&enqueue_BLENotifierImpl_send_Connecter_ConnectTo);
register_BLENotifierImpl_send_Connecter_ConnectToU_listener(&enqueue_BLENotifierImpl_send_Connecter_ConnectToU);
register_BLENotifierImpl_send_Connecter_Stop_listener(&enqueue_BLENotifierImpl_send_Connecter_Stop);
register_BLENotifierImpl_send_Connecter_Encrypt_listener(&enqueue_BLENotifierImpl_send_Connecter_Encrypt);
register_BLENotifierImpl_send_ATT_ATTFindInformationRequest_listener(&enqueue_BLENotifierImpl_send_ATT_ATTFindInformationRequest);
register_BLENotifierImpl_send_ATT_ATTFindInformationResponse_listener(&enqueue_BLENotifierImpl_send_ATT_ATTFindInformationResponse);
register_BLENotifierImpl_send_ATT_ATTFindInformationError_listener(&enqueue_BLENotifierImpl_send_ATT_ATTFindInformationError);
register_BLENotifierImpl_send_ATT_ATTReadByTypeRequest_listener(&enqueue_BLENotifierImpl_send_ATT_ATTReadByTypeRequest);
register_BLENotifierImpl_send_ATT_ATTReadByTypeResponse_listener(&enqueue_BLENotifierImpl_send_ATT_ATTReadByTypeResponse);
register_BLENotifierImpl_send_ATT_ATTReadByTypeError_listener(&enqueue_BLENotifierImpl_send_ATT_ATTReadByTypeError);
register_BLENotifierImpl_send_ATT_ATTReadRequest_listener(&enqueue_BLENotifierImpl_send_ATT_ATTReadRequest);
register_BLENotifierImpl_send_ATT_ATTReadResponse_listener(&enqueue_BLENotifierImpl_send_ATT_ATTReadResponse);
register_BLENotifierImpl_send_ATT_ATTReadError_listener(&enqueue_BLENotifierImpl_send_ATT_ATTReadError);
register_BLENotifierImpl_send_ATT_ATTReadByGroupTypeRequest_listener(&enqueue_BLENotifierImpl_send_ATT_ATTReadByGroupTypeRequest);
register_BLENotifierImpl_send_ATT_ATTReadByGroupTypeResponse_listener(&enqueue_BLENotifierImpl_send_ATT_ATTReadByGroupTypeResponse);
register_BLENotifierImpl_send_ATT_ATTReadByGroupTypeError_listener(&enqueue_BLENotifierImpl_send_ATT_ATTReadByGroupTypeError);
register_BLENotifierImpl_send_ATT_ATTWriteRequest_listener(&enqueue_BLENotifierImpl_send_ATT_ATTWriteRequest);
register_BLENotifierImpl_send_ATT_ATTWriteResponse_listener(&enqueue_BLENotifierImpl_send_ATT_ATTWriteResponse);
register_BLENotifierImpl_send_ATT_ATTWriteError_listener(&enqueue_BLENotifierImpl_send_ATT_ATTWriteError);
register_BLENotifierImpl_send_ATT_ATTWriteCommand_listener(&enqueue_BLENotifierImpl_send_ATT_ATTWriteCommand);
register_BLENotifierImpl_send_ATT_ATTHandleValueNotification_listener(&enqueue_BLENotifierImpl_send_ATT_ATTHandleValueNotification);
register_BLENotifierImpl_send_ATT_ATTHandleValueIndication_listener(&enqueue_BLENotifierImpl_send_ATT_ATTHandleValueIndication);
register_BLENotifierImpl_send_ATT_ATTHandleValueConfirmation_listener(&enqueue_BLENotifierImpl_send_ATT_ATTHandleValueConfirmation);
register_Main_send_Signals_Quit_listener(&enqueue_Main_send_Signals_Quit);
register_Main_send_Initialiser_Start_listener(&enqueue_Main_send_Initialiser_Start);
register_Main_send_Initialiser_Stop_listener(&enqueue_Main_send_Initialiser_Stop);
register_Main_send_Scanner_Start_listener(&enqueue_Main_send_Scanner_Start);
register_Main_send_Scanner_Stop_listener(&enqueue_Main_send_Scanner_Stop);
register_Main_send_ANDUC352BLE_AllowedToConnect_listener(&enqueue_Main_send_ANDUC352BLE_AllowedToConnect);
register_Main_send_ANDUA651BLE_AllowedToConnect_listener(&enqueue_Main_send_ANDUA651BLE_AllowedToConnect);
register_ExitHandler_send_Signals_Interrupt_listener(&enqueue_ExitHandler_send_Signals_Interrupt);
register_HCISocketProxyImpl_send_Socket_Opened_listener(&enqueue_HCISocketProxyImpl_send_Socket_Opened);
register_HCISocketProxyImpl_send_Socket_Closed_listener(&enqueue_HCISocketProxyImpl_send_Socket_Closed);
register_HCISocketProxyImpl_send_Events_ResetCompleted_listener(&enqueue_HCISocketProxyImpl_send_Events_ResetCompleted);
register_HCISocketProxyImpl_send_Events_SetEventMaskCompleted_listener(&enqueue_HCISocketProxyImpl_send_Events_SetEventMaskCompleted);
register_HCISocketProxyImpl_send_Events_SetLocalNameCompleted_listener(&enqueue_HCISocketProxyImpl_send_Events_SetLocalNameCompleted);
register_HCISocketProxyImpl_send_Events_DisconnectStatus_listener(&enqueue_HCISocketProxyImpl_send_Events_DisconnectStatus);
register_HCISocketProxyImpl_send_Events_DisconnectionCompleted_listener(&enqueue_HCISocketProxyImpl_send_Events_DisconnectionCompleted);
register_HCISocketProxyImpl_send_Events_SetLEEventMaskCompleted_listener(&enqueue_HCISocketProxyImpl_send_Events_SetLEEventMaskCompleted);
register_HCISocketProxyImpl_send_Events_SetLEAdvertisementParametersCompleted_listener(&enqueue_HCISocketProxyImpl_send_Events_SetLEAdvertisementParametersCompleted);
register_HCISocketProxyImpl_send_Events_SetLEAdvertiseEnableCompleted_listener(&enqueue_HCISocketProxyImpl_send_Events_SetLEAdvertiseEnableCompleted);
register_HCISocketProxyImpl_send_Events_SetLEAdvertisingDataCompleted_listener(&enqueue_HCISocketProxyImpl_send_Events_SetLEAdvertisingDataCompleted);
register_HCISocketProxyImpl_send_Events_SetLEScanResponseDataCompleted_listener(&enqueue_HCISocketProxyImpl_send_Events_SetLEScanResponseDataCompleted);
register_HCISocketProxyImpl_send_Events_SetLEScanParametersCompleted_listener(&enqueue_HCISocketProxyImpl_send_Events_SetLEScanParametersCompleted);
register_HCISocketProxyImpl_send_Events_SetLEScanEnableCompleted_listener(&enqueue_HCISocketProxyImpl_send_Events_SetLEScanEnableCompleted);
register_HCISocketProxyImpl_send_Events_LEAdvertisementReport_listener(&enqueue_HCISocketProxyImpl_send_Events_LEAdvertisementReport);
register_HCISocketProxyImpl_send_Events_LECreateConnectionStatus_listener(&enqueue_HCISocketProxyImpl_send_Events_LECreateConnectionStatus);
register_HCISocketProxyImpl_send_Events_LECreateConnectionCancelCompleted_listener(&enqueue_HCISocketProxyImpl_send_Events_LECreateConnectionCancelCompleted);
register_HCISocketProxyImpl_send_Events_LEConnectionComplete_listener(&enqueue_HCISocketProxyImpl_send_Events_LEConnectionComplete);
register_HCISocketProxyImpl_send_Events_LEEnhancedConnectionComplete_listener(&enqueue_HCISocketProxyImpl_send_Events_LEEnhancedConnectionComplete);
register_HCISocketProxyImpl_send_Events_LERandCompleted_listener(&enqueue_HCISocketProxyImpl_send_Events_LERandCompleted);
register_HCISocketProxyImpl_send_Events_LEEncryptCompleted_listener(&enqueue_HCISocketProxyImpl_send_Events_LEEncryptCompleted);
register_HCISocketProxyImpl_send_Events_EncryptionChanged_listener(&enqueue_HCISocketProxyImpl_send_Events_EncryptionChanged);
register_HCISocketProxyImpl_send_Events_LEStartEncryptionStatus_listener(&enqueue_HCISocketProxyImpl_send_Events_LEStartEncryptionStatus);
register_HCISocketProxyImpl_send_SMP_SMPPairingRequest_listener(&enqueue_HCISocketProxyImpl_send_SMP_SMPPairingRequest);
register_HCISocketProxyImpl_send_SMP_SMPPairingResponse_listener(&enqueue_HCISocketProxyImpl_send_SMP_SMPPairingResponse);
register_HCISocketProxyImpl_send_SMP_SMPPairingConfirm_listener(&enqueue_HCISocketProxyImpl_send_SMP_SMPPairingConfirm);
register_HCISocketProxyImpl_send_SMP_SMPPairingRandom_listener(&enqueue_HCISocketProxyImpl_send_SMP_SMPPairingRandom);
register_HCISocketProxyImpl_send_SMP_SMPPairingFailed_listener(&enqueue_HCISocketProxyImpl_send_SMP_SMPPairingFailed);
register_HCISocketProxyImpl_send_SMP_SMPPairingPublicKey_listener(&enqueue_HCISocketProxyImpl_send_SMP_SMPPairingPublicKey);
register_HCISocketProxyImpl_send_SMP_SMPPairingDHKeyCheck_listener(&enqueue_HCISocketProxyImpl_send_SMP_SMPPairingDHKeyCheck);
register_HCISocketProxyImpl_send_SMP_SMPKeypressNotification_listener(&enqueue_HCISocketProxyImpl_send_SMP_SMPKeypressNotification);
register_HCISocketProxyImpl_send_SMP_SMPEncryptionInformation_listener(&enqueue_HCISocketProxyImpl_send_SMP_SMPEncryptionInformation);
register_HCISocketProxyImpl_send_SMP_SMPMasterIdentification_listener(&enqueue_HCISocketProxyImpl_send_SMP_SMPMasterIdentification);
register_HCISocketProxyImpl_send_SMP_SMPIdentityInformation_listener(&enqueue_HCISocketProxyImpl_send_SMP_SMPIdentityInformation);
register_HCISocketProxyImpl_send_SMP_SMPIdentityAddressInformation_listener(&enqueue_HCISocketProxyImpl_send_SMP_SMPIdentityAddressInformation);
register_HCISocketProxyImpl_send_SMP_SMPSigningInformation_listener(&enqueue_HCISocketProxyImpl_send_SMP_SMPSigningInformation);
register_HCISocketProxyImpl_send_SMP_SMPSecurityRequest_listener(&enqueue_HCISocketProxyImpl_send_SMP_SMPSecurityRequest);
register_HCISocketProxyImpl_send_ATT_ATTFindInformationRequest_listener(&enqueue_HCISocketProxyImpl_send_ATT_ATTFindInformationRequest);
register_HCISocketProxyImpl_send_ATT_ATTFindInformationResponse_listener(&enqueue_HCISocketProxyImpl_send_ATT_ATTFindInformationResponse);
register_HCISocketProxyImpl_send_ATT_ATTFindInformationError_listener(&enqueue_HCISocketProxyImpl_send_ATT_ATTFindInformationError);
register_HCISocketProxyImpl_send_ATT_ATTReadByTypeRequest_listener(&enqueue_HCISocketProxyImpl_send_ATT_ATTReadByTypeRequest);
register_HCISocketProxyImpl_send_ATT_ATTReadByTypeResponse_listener(&enqueue_HCISocketProxyImpl_send_ATT_ATTReadByTypeResponse);
register_HCISocketProxyImpl_send_ATT_ATTReadByTypeError_listener(&enqueue_HCISocketProxyImpl_send_ATT_ATTReadByTypeError);
register_HCISocketProxyImpl_send_ATT_ATTReadRequest_listener(&enqueue_HCISocketProxyImpl_send_ATT_ATTReadRequest);
register_HCISocketProxyImpl_send_ATT_ATTReadResponse_listener(&enqueue_HCISocketProxyImpl_send_ATT_ATTReadResponse);
register_HCISocketProxyImpl_send_ATT_ATTReadError_listener(&enqueue_HCISocketProxyImpl_send_ATT_ATTReadError);
register_HCISocketProxyImpl_send_ATT_ATTReadByGroupTypeRequest_listener(&enqueue_HCISocketProxyImpl_send_ATT_ATTReadByGroupTypeRequest);
register_HCISocketProxyImpl_send_ATT_ATTReadByGroupTypeResponse_listener(&enqueue_HCISocketProxyImpl_send_ATT_ATTReadByGroupTypeResponse);
register_HCISocketProxyImpl_send_ATT_ATTReadByGroupTypeError_listener(&enqueue_HCISocketProxyImpl_send_ATT_ATTReadByGroupTypeError);
register_HCISocketProxyImpl_send_ATT_ATTWriteRequest_listener(&enqueue_HCISocketProxyImpl_send_ATT_ATTWriteRequest);
register_HCISocketProxyImpl_send_ATT_ATTWriteResponse_listener(&enqueue_HCISocketProxyImpl_send_ATT_ATTWriteResponse);
register_HCISocketProxyImpl_send_ATT_ATTWriteError_listener(&enqueue_HCISocketProxyImpl_send_ATT_ATTWriteError);
register_HCISocketProxyImpl_send_ATT_ATTWriteCommand_listener(&enqueue_HCISocketProxyImpl_send_ATT_ATTWriteCommand);
register_HCISocketProxyImpl_send_ATT_ATTHandleValueNotification_listener(&enqueue_HCISocketProxyImpl_send_ATT_ATTHandleValueNotification);
register_HCISocketProxyImpl_send_ATT_ATTHandleValueIndication_listener(&enqueue_HCISocketProxyImpl_send_ATT_ATTHandleValueIndication);
register_HCISocketProxyImpl_send_ATT_ATTHandleValueConfirmation_listener(&enqueue_HCISocketProxyImpl_send_ATT_ATTHandleValueConfirmation);

// Init the ID, state variables and properties for external connector MQTT2
// Init the ID, state variables and properties for external connector MQTT1

// Network Initialization
// Initialise MQTT1:
MQTT1_instance.listener_id = add_instance(&MQTT1_instance);
MQTT1_setup(&MQTT1_instance);
pthread_t thread_MQTT1;
pthread_create( &thread_MQTT1, NULL, MQTT1_start_receiver_thread, NULL);

// Initialise MQTT2:
MQTT2_instance.listener_id = add_instance(&MQTT2_instance);
MQTT2_setup(&MQTT2_instance);
pthread_t thread_MQTT2;
pthread_create( &thread_MQTT2, NULL, MQTT2_start_receiver_thread, NULL);

// End Network Initialization

// Init the ID, state variables and properties for instance hci
hci_var.active = true;
hci_var.id_Socket = add_instance( (void*) &hci_var);
hci_var.id_Commands = add_instance( (void*) &hci_var);
hci_var.id_Events = add_instance( (void*) &hci_var);
hci_var.id_SMP = add_instance( (void*) &hci_var);
hci_var.id_ATT = add_instance( (void*) &hci_var);
hci_var.HCISocketProxy_Socket_State = HCISOCKETPROXY_SOCKET_CLOSED_STATE;
hci_var.HCISocketProxyImpl_DevHandle_var =  -1;
hci_var.HCISocketProxy_Device_var = "hci0";

HCISocketProxy_Socket_OnEntry(HCISOCKETPROXY_SOCKET_STATE, &hci_var);
// Init the ID, state variables and properties for instance scanner
scanner_var.active = true;
scanner_var.id_Scanner = add_instance( (void*) &scanner_var);
scanner_var.id_Socket = add_instance( (void*) &scanner_var);
scanner_var.id_HCICommands = add_instance( (void*) &scanner_var);
scanner_var.id_HCIEvents = add_instance( (void*) &scanner_var);
scanner_var.id_SMP = add_instance( (void*) &scanner_var);
scanner_var.id_ATT = add_instance( (void*) &scanner_var);
scanner_var.BLEScannerImpl_States_State = BLESCANNERIMPL_STATES_STANDBY_STATE;

BLEScannerImpl_States_OnEntry(BLESCANNERIMPL_STATES_STATE, &scanner_var);
// Init the ID, state variables and properties for instance notifierconnecter
notifierconnecter_var.active = true;
notifierconnecter_var.id_Connecter = add_instance( (void*) &notifierconnecter_var);
notifierconnecter_var.id_Socket = add_instance( (void*) &notifierconnecter_var);
notifierconnecter_var.id_HCICommands = add_instance( (void*) &notifierconnecter_var);
notifierconnecter_var.id_HCIEvents = add_instance( (void*) &notifierconnecter_var);
notifierconnecter_var.id_SMP = add_instance( (void*) &notifierconnecter_var);
notifierconnecter_var.id_ATT = add_instance( (void*) &notifierconnecter_var);
notifierconnecter_var.BLEConnecterImpl_States_State = BLECONNECTERIMPL_STATES_NOTCONNECTED_STATE;

BLEConnecterImpl_States_OnEntry(BLECONNECTERIMPL_STATES_STATE, &notifierconnecter_var);
// Init the ID, state variables and properties for instance notifier
notifier_var.active = true;
notifier_var.id_Notifications = add_instance( (void*) &notifier_var);
notifier_var.id_Connecter = add_instance( (void*) &notifier_var);
notifier_var.id_ATT = add_instance( (void*) &notifier_var);
notifier_var.BLENotifierImpl_States_State = BLENOTIFIERIMPL_STATES_WAITING_STATE;
notifier_var.BLENotifierImpl_States_Connected_State = BLENOTIFIERIMPL_STATES_CONNECTED_SETREADNOTIFICATIONS_STATE;
notifier_var.BLENotifierImpl_ReadByteConfigurationHandle_var = 0x0023;
notifier_var.BLENotifierImpl_ReadByteValueHandle_var = 0x0021;
notifier_var.BLENotifierImpl_WriteByteValueHandle_var = 0x0025;

BLENotifierImpl_States_OnEntry(BLENOTIFIERIMPL_STATES_STATE, &notifier_var);
// Init the ID, state variables and properties for instance connecter
connecter_var.active = true;
connecter_var.id_Connecter = add_instance( (void*) &connecter_var);
connecter_var.id_Socket = add_instance( (void*) &connecter_var);
connecter_var.id_HCICommands = add_instance( (void*) &connecter_var);
connecter_var.id_HCIEvents = add_instance( (void*) &connecter_var);
connecter_var.id_SMP = add_instance( (void*) &connecter_var);
connecter_var.id_ATT = add_instance( (void*) &connecter_var);
connecter_var.BLEConnecterImpl_States_State = BLECONNECTERIMPL_STATES_NOTCONNECTED_STATE;

BLEConnecterImpl_States_OnEntry(BLECONNECTERIMPL_STATES_STATE, &connecter_var);
// Init the ID, state variables and properties for instance bloodpressure
bloodpressure_var.active = true;
bloodpressure_var.id_ANDUA651BLE = add_instance( (void*) &bloodpressure_var);
bloodpressure_var.id_Tellu = add_instance( (void*) &bloodpressure_var);
bloodpressure_var.id_Scanner = add_instance( (void*) &bloodpressure_var);
bloodpressure_var.id_Connecter = add_instance( (void*) &bloodpressure_var);
bloodpressure_var.id_Notifications = add_instance( (void*) &bloodpressure_var);
bloodpressure_var.id_ATT = add_instance( (void*) &bloodpressure_var);
bloodpressure_var.ANDUA651BLEImpl_States_State = ANDUA651BLEIMPL_STATES_STANDBY_STATE;
bloodpressure_var.ANDUA651BLEImpl_States_Sync_State = ANDUA651BLEIMPL_STATES_SYNC_READBATTERY_STATE;
bloodpressure_var.ANDUA651BLEImpl_States_Notify_State = ANDUA651BLEIMPL_STATES_NOTIFY_WAIT_STATE;
bloodpressure_var.ANDUA651BLEImpl_NotifierAddress_var = "F3:48:7F:62:B8:60";
bloodpressure_var.ANDUA651BLEImpl_BloodPressureConfigurationHandle_var = 0x0013;
bloodpressure_var.ANDUA651BLEImpl_Address_var = "5C:31:3E:00:4B:6B";
bloodpressure_var.ANDUA651BLEImpl_BloodPressureValueHandle_var = 0x0012;
bloodpressure_var.ANDUA651BLEImpl_AddressType_var = BLEADDRESSTYPE_PUBLIC;
bloodpressure_var.ANDUA651BLEImpl_BatteryValueHandle_var = 0x002B;
bloodpressure_var.ANDUA651BLEImpl_NotifierAddressType_var = BLEADDRESSTYPE_RANDOM;

ANDUA651BLEImpl_States_OnEntry(ANDUA651BLEIMPL_STATES_STATE, &bloodpressure_var);
// Init the ID, state variables and properties for instance weightscale
weightscale_var.active = true;
weightscale_var.id_ANDUC352BLE = add_instance( (void*) &weightscale_var);
weightscale_var.id_Tellu = add_instance( (void*) &weightscale_var);
weightscale_var.id_Scanner = add_instance( (void*) &weightscale_var);
weightscale_var.id_Connecter = add_instance( (void*) &weightscale_var);
weightscale_var.id_Notifications = add_instance( (void*) &weightscale_var);
weightscale_var.id_ATT = add_instance( (void*) &weightscale_var);
weightscale_var.ANDUC352BLEImpl_States_State = ANDUC352BLEIMPL_STATES_STANDBY_STATE;
weightscale_var.ANDUC352BLEImpl_States_Sync_State = ANDUC352BLEIMPL_STATES_SYNC_READBATTERY_STATE;
weightscale_var.ANDUC352BLEImpl_States_Notify_State = ANDUC352BLEIMPL_STATES_NOTIFY_WAIT_STATE;
weightscale_var.ANDUC352BLEImpl_BatteryValueHandle_var = 0x002B;
weightscale_var.ANDUC352BLEImpl_WeightScaleConfigurationHandle_var = 0x0013;
weightscale_var.ANDUC352BLEImpl_AddressType_var = BLEADDRESSTYPE_PUBLIC;
weightscale_var.ANDUC352BLEImpl_NotifierAddressType_var = BLEADDRESSTYPE_RANDOM;
weightscale_var.ANDUC352BLEImpl_NotifierAddress_var = "CC:AF:6D:65:64:4A";
weightscale_var.ANDUC352BLEImpl_Address_var = "5C:31:3E:5F:00:7A";
weightscale_var.ANDUC352BLEImpl_WeightScaleValueHandle_var = 0x0012;

ANDUC352BLEImpl_States_OnEntry(ANDUC352BLEIMPL_STATES_STATE, &weightscale_var);
// Init the ID, state variables and properties for instance initialiser
initialiser_var.active = true;
initialiser_var.id_Initialiser = add_instance( (void*) &initialiser_var);
initialiser_var.id_Socket = add_instance( (void*) &initialiser_var);
initialiser_var.id_HCICommands = add_instance( (void*) &initialiser_var);
initialiser_var.id_HCIEvents = add_instance( (void*) &initialiser_var);
initialiser_var.id_SMP = add_instance( (void*) &initialiser_var);
initialiser_var.id_ATT = add_instance( (void*) &initialiser_var);
initialiser_var.BLEInitialiserImpl_States_State = BLEINITIALISERIMPL_STATES_CLOSED_STATE;

BLEInitialiserImpl_States_OnEntry(BLEINITIALISERIMPL_STATES_STATE, &initialiser_var);
// Init the ID, state variables and properties for instance handler
handler_var.active = true;
handler_var.id_Signals = add_instance( (void*) &handler_var);
handler_var.ExitHandler_Handler_State = EXITHANDLER_HANDLER_WAITING_STATE;

ExitHandler_Handler_OnEntry(EXITHANDLER_HANDLER_STATE, &handler_var);
// Init the ID, state variables and properties for instance main
main_var.active = true;
main_var.id_Signals = add_instance( (void*) &main_var);
main_var.id_Initialiser = add_instance( (void*) &main_var);
main_var.id_Scanner = add_instance( (void*) &main_var);
main_var.id_ANDUC352BLE = add_instance( (void*) &main_var);
main_var.id_ANDUA651BLE = add_instance( (void*) &main_var);
main_var.Main_States_State = MAIN_STATES_INITIALISE_STATE;
main_var.Main_States_Standby_State = MAIN_STATES_STANDBY_SCAN_STATE;

Main_States_OnEntry(MAIN_STATES_STATE, &main_var);
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

    init_runtime();
    
    initialize_configuration_MedicalGW();

    while (1) {
        
// Network Listener// End Network Listener

int emptyEventConsumed = 1;
while (emptyEventConsumed != 0) {
emptyEventConsumed = 0;
emptyEventConsumed += HCISocketProxyImpl_handle_empty_event(&hci_var);
}

        processMessageQueue();
  }
}