/*****************************************************
 *      THIS IS A GENERATED FILE. DO NOT EDIT.
 *        Implementation for Thing BLEScannerImpl
 *  Generated from ThingML (http://www.thingml.org)
 *****************************************************/

#include "BLEScannerImpl.h"

/*****************************************************************************
 * Implementation for type : BLEScannerImpl
 *****************************************************************************/

// Declaration of prototypes:
//Prototypes: State Machine
void BLEScannerImpl_States_OnExit(int state, struct BLEScannerImpl_Instance *_instance);
//Prototypes: Message Sending
void BLEScannerImpl_send_Scanner_Started(struct BLEScannerImpl_Instance *_instance);
void BLEScannerImpl_send_Scanner_Stopped(struct BLEScannerImpl_Instance *_instance);
void BLEScannerImpl_send_Scanner_Failure(struct BLEScannerImpl_Instance *_instance);
void BLEScannerImpl_send_Scanner_ConnectableAdvertisement(struct BLEScannerImpl_Instance *_instance, uint8_t AddressType, bdaddr_t Address);
void BLEScannerImpl_send_Socket_Open(struct BLEScannerImpl_Instance *_instance);
void BLEScannerImpl_send_Socket_Close(struct BLEScannerImpl_Instance *_instance);
void BLEScannerImpl_send_HCICommands_Reset(struct BLEScannerImpl_Instance *_instance);
void BLEScannerImpl_send_HCICommands_SetEventMask(struct BLEScannerImpl_Instance *_instance, set_event_mask_cp Mask);
void BLEScannerImpl_send_HCICommands_SetEventMaskAll(struct BLEScannerImpl_Instance *_instance);
void BLEScannerImpl_send_HCICommands_SetLocalName(struct BLEScannerImpl_Instance *_instance, change_local_name_cp Name);
void BLEScannerImpl_send_HCICommands_Disconnect(struct BLEScannerImpl_Instance *_instance, uint16_t ConnectionHandle, uint8_t Reason);
void BLEScannerImpl_send_HCICommands_SetLEEventMask(struct BLEScannerImpl_Instance *_instance, set_event_mask_cp Mask);
void BLEScannerImpl_send_HCICommands_SetLEEventMaskAll(struct BLEScannerImpl_Instance *_instance);
void BLEScannerImpl_send_HCICommands_SetLEAdvertisementParameters(struct BLEScannerImpl_Instance *_instance, uint16_t MinInterval, uint16_t MaxInterval, uint8_t Type, uint8_t OwnAddressType, uint8_t PeerAddressType, bdaddr_t PeerAddress, uint8_t Channel, uint8_t FilterPolicy);
void BLEScannerImpl_send_HCICommands_SetLEAdvertiseEnable(struct BLEScannerImpl_Instance *_instance, uint8_t Enable);
void BLEScannerImpl_send_HCICommands_SetLEAdvertisingData(struct BLEScannerImpl_Instance *_instance, uint8_t Length, ble_adv_data_t Data);
void BLEScannerImpl_send_HCICommands_SetLEScanResponseData(struct BLEScannerImpl_Instance *_instance, uint8_t Length, ble_adv_data_t Data);
void BLEScannerImpl_send_HCICommands_SetLEScanParameters(struct BLEScannerImpl_Instance *_instance, uint8_t Type, uint16_t Interval, uint16_t Window, uint8_t OwnAddressType, uint8_t FilterPolicy);
void BLEScannerImpl_send_HCICommands_SetLEScanEnable(struct BLEScannerImpl_Instance *_instance, uint8_t Enable, uint8_t FilterDuplicates);
void BLEScannerImpl_send_HCICommands_LECreateConnection(struct BLEScannerImpl_Instance *_instance, uint16_t Interval, uint16_t Window, uint8_t FilterPolicy, uint8_t PeerAddressType, bdaddr_t PeerAddress, uint8_t OwnAddressType, uint16_t ConnIntervalMin, uint16_t ConnIntervalMax, uint16_t ConnLatency, uint16_t SupervisionTimeout, uint16_t CELengthMin, uint16_t CELengthMax);
void BLEScannerImpl_send_HCICommands_LECreateConnectionCancel(struct BLEScannerImpl_Instance *_instance);
void BLEScannerImpl_send_HCICommands_LERand(struct BLEScannerImpl_Instance *_instance);
void BLEScannerImpl_send_HCICommands_LEEncrypt(struct BLEScannerImpl_Instance *_instance, ble_random_number_t Key, ble_random_number_t Plaintext);
void BLEScannerImpl_send_HCICommands_LEStartEncryption(struct BLEScannerImpl_Instance *_instance, uint16_t ConnectionHandle, ble_random_part_t Random, uint16_t EDIV, ble_random_number_t LTK);
void BLEScannerImpl_send_SMP_SMPPairingRequest(struct BLEScannerImpl_Instance *_instance, uint16_t Handle, uint8_t IOCapability, uint8_t OOBDataPresent, uint8_t Bonding, uint8_t MITM, uint8_t SecureConnection, uint8_t Keypress, uint8_t MaximumEncryptionKeySize, uint8_t InitiatorKeyDistribution, uint8_t ResponderKeyDistribution);
void BLEScannerImpl_send_SMP_SMPPairingResponse(struct BLEScannerImpl_Instance *_instance, uint16_t Handle, uint8_t IOCapability, uint8_t OOBDataPresent, uint8_t Bonding, uint8_t MITM, uint8_t SecureConnection, uint8_t Keypress, uint8_t MaximumEncryptionKeySize, uint8_t InitiatorKeyDistribution, uint8_t ResponderKeyDistribution);
void BLEScannerImpl_send_SMP_SMPPairingConfirm(struct BLEScannerImpl_Instance *_instance, uint16_t Handle, ble_random_number_t ConfirmValue);
void BLEScannerImpl_send_SMP_SMPPairingRandom(struct BLEScannerImpl_Instance *_instance, uint16_t Handle, ble_random_number_t RandomValue);
void BLEScannerImpl_send_SMP_SMPPairingFailed(struct BLEScannerImpl_Instance *_instance, uint16_t Handle, uint8_t Reason);
void BLEScannerImpl_send_SMP_SMPPairingPublicKey(struct BLEScannerImpl_Instance *_instance, uint16_t Handle, smp_public_key_t KeyX, smp_public_key_t KeyY);
void BLEScannerImpl_send_SMP_SMPPairingDHKeyCheck(struct BLEScannerImpl_Instance *_instance, uint16_t Handle, ble_random_number_t DHKeyCheck);
void BLEScannerImpl_send_SMP_SMPKeypressNotification(struct BLEScannerImpl_Instance *_instance, uint16_t Handle, uint8_t Type);
void BLEScannerImpl_send_SMP_SMPEncryptionInformation(struct BLEScannerImpl_Instance *_instance, uint16_t Handle, ble_random_number_t LongTermKey);
void BLEScannerImpl_send_SMP_SMPMasterIdentification(struct BLEScannerImpl_Instance *_instance, uint16_t Handle, uint16_t EDIV, ble_random_part_t Rand);
void BLEScannerImpl_send_SMP_SMPIdentityInformation(struct BLEScannerImpl_Instance *_instance, uint16_t Handle, ble_random_number_t IdentityResolvingKey);
void BLEScannerImpl_send_SMP_SMPIdentityAddressInformation(struct BLEScannerImpl_Instance *_instance, uint16_t Handle, uint8_t AddressType, bdaddr_t Address);
void BLEScannerImpl_send_SMP_SMPSigningInformation(struct BLEScannerImpl_Instance *_instance, uint16_t Handle, ble_random_number_t SignatureKey);
void BLEScannerImpl_send_SMP_SMPSecurityRequest(struct BLEScannerImpl_Instance *_instance, uint16_t Handle, uint8_t Bonding, uint8_t MITM, uint8_t SecureConnection, uint8_t Keypress);
void BLEScannerImpl_send_ATT_ATTFindInformationRequest(struct BLEScannerImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t StartingHandle, uint16_t EndingHandle);
void BLEScannerImpl_send_ATT_ATTFindInformationResponse(struct BLEScannerImpl_Instance *_instance, uint16_t ConnectionHandle, uint8_t Format, ble_gatt_data_t InformationData);
void BLEScannerImpl_send_ATT_ATTFindInformationError(struct BLEScannerImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error);
void BLEScannerImpl_send_ATT_ATTReadByTypeRequest(struct BLEScannerImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t StartingHandle, uint16_t EndingHandle, ble_uuid_t AttributeType);
void BLEScannerImpl_send_ATT_ATTReadByTypeResponse(struct BLEScannerImpl_Instance *_instance, uint16_t ConnectionHandle, uint8_t Length, ble_gatt_data_t AttributeDataList);
void BLEScannerImpl_send_ATT_ATTReadByTypeError(struct BLEScannerImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error);
void BLEScannerImpl_send_ATT_ATTReadRequest(struct BLEScannerImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle);
void BLEScannerImpl_send_ATT_ATTReadResponse(struct BLEScannerImpl_Instance *_instance, uint16_t ConnectionHandle, ble_gatt_data_t AttributeValue);
void BLEScannerImpl_send_ATT_ATTReadError(struct BLEScannerImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error);
void BLEScannerImpl_send_ATT_ATTReadByGroupTypeRequest(struct BLEScannerImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t StartingHandle, uint16_t EndingHandle, ble_uuid_t AttributeGroupType);
void BLEScannerImpl_send_ATT_ATTReadByGroupTypeResponse(struct BLEScannerImpl_Instance *_instance, uint16_t ConnectionHandle, uint8_t Length, ble_gatt_data_t AttributeDataList);
void BLEScannerImpl_send_ATT_ATTReadByGroupTypeError(struct BLEScannerImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error);
void BLEScannerImpl_send_ATT_ATTWriteRequest(struct BLEScannerImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, ble_gatt_data_t AttributeValue);
void BLEScannerImpl_send_ATT_ATTWriteResponse(struct BLEScannerImpl_Instance *_instance, uint16_t ConnectionHandle);
void BLEScannerImpl_send_ATT_ATTWriteError(struct BLEScannerImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error);
void BLEScannerImpl_send_ATT_ATTWriteCommand(struct BLEScannerImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, ble_gatt_data_t AttributeValue);
void BLEScannerImpl_send_ATT_ATTHandleValueNotification(struct BLEScannerImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, ble_gatt_data_t AttributeValue);
void BLEScannerImpl_send_ATT_ATTHandleValueIndication(struct BLEScannerImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, ble_gatt_data_t AttributeValue);
void BLEScannerImpl_send_ATT_ATTHandleValueConfirmation(struct BLEScannerImpl_Instance *_instance, uint16_t ConnectionHandle);
//Prototypes: Function
ble_uuid_t f_BLEScannerImpl_ReadUUID(struct BLEScannerImpl_Instance *_instance, uint16_t Length, uint8_t * Data);
ble_uuid_t f_BLEScannerImpl_MakeUUID(struct BLEScannerImpl_Instance *_instance, const char * Text);
void f_BLEScannerImpl_PrintUUID(struct BLEScannerImpl_Instance *_instance, ble_uuid_t ID);
// Declaration of functions:
// Definition of function ReadUUID
ble_uuid_t f_BLEScannerImpl_ReadUUID(struct BLEScannerImpl_Instance *_instance, uint16_t Length, uint8_t * Data) {
;ble_uuid_t Value = { 0xFB, 0x34, 0x9B, 0x5F, 0x80, 0x00/*-*/, 0x00, 0x80/*-*/, 0x00, 0x10/*-*/, 0x00, 0x00/*-*/, 0x00, 0x00, 0x00, 0x00 };
if(Length == 16) {
memcpy(&Value, Data, 16);

} else {
if(Length == 2 || Length == 4) {
memcpy(&(((uint8_t*)&Value)[12]), Data, Length);

} else {
fprintf(stdout, "[ERROR]: Trying to decode a UUID that was not 16, 32 or 128 bits long!\n");

}

}
return Value;
}
// Definition of function MakeUUID
ble_uuid_t f_BLEScannerImpl_MakeUUID(struct BLEScannerImpl_Instance *_instance, const char * Text) {
;ble_uuid_t Value = { 0xFB, 0x34, 0x9B, 0x5F, 0x80, 0x00/*-*/, 0x00, 0x80/*-*/, 0x00, 0x10/*-*/, 0x00, 0x00/*-*/, 0x00, 0x00, 0x00, 0x00 };

      uint8_t *val = (uint8_t*)&Value;
      const char *str = Text;
      size_t length = strlen(str);
      if (length == 36 && str[8] == '-' && str[13] == '-' && str[18] == '-' && str[23] == '-') {
        // 128-bit UUID
        if (sscanf(str, "%02hhx%02hhx%02hhx%02hhx-%02hhx%02hhx-%02hhx%02hhx-%02hhx%02hhx-%02hhx%02hhx%02hhx%02hhx%02hhx%02hhx"
                      , &val[15], &val[14], &val[13], &val[12], &val[11], &val[10], &val[9], &val[8], &val[7], &val[6], &val[5], &val[4], &val[3], &val[2], &val[1], &val[0] ) == 16 ) {
            // Should be valid, and have stored the values in the Value-memory
        } else {
          printf("[ERROR]: String is not a valid UUID!\n");
        }

      } else if (length == 4 || length == 6 || length == 8 || length == 10) {
        // 16-bit or 32-bit UUID
        uint32_t id;
        char *end = NULL;
        id = strtol(str, &end, 16);

        if (id && end && *end == '\0') {
          // Should be valid
          *(uint32_t*)&val[12] = id;
        } else {
          printf("[ERROR]: String is not a valid UUID!\n");
        }
      } else {
        printf("[ERROR]: String is not a valid UUID!\n");
      }
    
return Value;
}
// Definition of function PrintUUID
void f_BLEScannerImpl_PrintUUID(struct BLEScannerImpl_Instance *_instance, ble_uuid_t ID) {

      uint8_t *v = &ID;
      printf("%2.2X%2.2X%2.2X%2.2X-",v[15],v[14],v[13],v[12]);
      printf("%2.2X%2.2X-",v[11],v[10]);
      printf("%2.2X%2.2X-",v[9],v[8]);
      printf("%2.2X%2.2X-",v[7],v[6]);
      printf("%2.2X%2.2X%2.2X%2.2X%2.2X%2.2X\n",v[5],v[4],v[3],v[2],v[1],v[0]);
    
}

// Sessions functionss:


// On Entry Actions:
void BLEScannerImpl_States_OnEntry(int state, struct BLEScannerImpl_Instance *_instance) {
switch(state) {
case BLESCANNERIMPL_STATES_STATE:{
_instance->BLEScannerImpl_States_State = BLESCANNERIMPL_STATES_STANDBY_STATE;
BLEScannerImpl_States_OnEntry(_instance->BLEScannerImpl_States_State, _instance);
break;
}
case BLESCANNERIMPL_STATES_STANDBY_STATE:{
break;
}
case BLESCANNERIMPL_STATES_INITIATING_STATE:{
fprintf(stdout, "[INFO]: Setting scan parameters...\n");
;uint8_t Type = BLESCANTYPE_PASSIVE;
;int16_t Interval = 0x0010;
;int16_t Window = 0x0010;
;uint8_t OwnAddressType = BLEADDRESSTYPE_PUBLIC;
;uint8_t FilterPolicy = BLESCANFILTERPOLICY_ALL;
BLEScannerImpl_send_HCICommands_SetLEScanParameters(_instance, Type, Interval, Window, OwnAddressType, FilterPolicy);
break;
}
case BLESCANNERIMPL_STATES_SCANNING_STATE:{
fprintf(stdout, "[INFO]: Scanning for incoming connections...\n");
BLEScannerImpl_send_Scanner_Started(_instance);
break;
}
case BLESCANNERIMPL_STATES_STOPPING_STATE:{
fprintf(stdout, "[INFO]: Stopping scan...\n");
BLEScannerImpl_send_HCICommands_SetLEScanEnable(_instance, 0x00, 0x00);
break;
}
case BLESCANNERIMPL_STATES_FAILURE_STATE:{
fprintf(stdout, "[ERROR]: BLE_scanner failed!\n");
BLEScannerImpl_send_Scanner_Failure(_instance);
break;
}
default: break;
}
}

// On Exit Actions:
void BLEScannerImpl_States_OnExit(int state, struct BLEScannerImpl_Instance *_instance) {
switch(state) {
case BLESCANNERIMPL_STATES_STATE:{
BLEScannerImpl_States_OnExit(_instance->BLEScannerImpl_States_State, _instance);
break;}
case BLESCANNERIMPL_STATES_STANDBY_STATE:{
break;}
case BLESCANNERIMPL_STATES_INITIATING_STATE:{
break;}
case BLESCANNERIMPL_STATES_SCANNING_STATE:{
break;}
case BLESCANNERIMPL_STATES_STOPPING_STATE:{
break;}
case BLESCANNERIMPL_STATES_FAILURE_STATE:{
break;}
default: break;
}
}

// Event Handlers for incoming messages:
void BLEScannerImpl_handle_Scanner_Start(struct BLEScannerImpl_Instance *_instance) {
if(!(_instance->active)) return;
//Region States
uint8_t BLEScannerImpl_States_State_event_consumed = 0;
if (_instance->BLEScannerImpl_States_State == BLESCANNERIMPL_STATES_STANDBY_STATE) {
if (BLEScannerImpl_States_State_event_consumed == 0 && 1) {
BLEScannerImpl_States_OnExit(BLESCANNERIMPL_STATES_STANDBY_STATE, _instance);
_instance->BLEScannerImpl_States_State = BLESCANNERIMPL_STATES_INITIATING_STATE;
BLEScannerImpl_States_OnEntry(BLESCANNERIMPL_STATES_INITIATING_STATE, _instance);
BLEScannerImpl_States_State_event_consumed = 1;
}
}
else if (_instance->BLEScannerImpl_States_State == BLESCANNERIMPL_STATES_SCANNING_STATE) {
if (BLEScannerImpl_States_State_event_consumed == 0 && 1) {
BLEScannerImpl_send_Scanner_Started(_instance);
BLEScannerImpl_States_State_event_consumed = 1;
}
}
else if (_instance->BLEScannerImpl_States_State == BLESCANNERIMPL_STATES_FAILURE_STATE) {
if (BLEScannerImpl_States_State_event_consumed == 0 && 1) {
BLEScannerImpl_States_OnExit(BLESCANNERIMPL_STATES_FAILURE_STATE, _instance);
_instance->BLEScannerImpl_States_State = BLESCANNERIMPL_STATES_INITIATING_STATE;
BLEScannerImpl_States_OnEntry(BLESCANNERIMPL_STATES_INITIATING_STATE, _instance);
BLEScannerImpl_States_State_event_consumed = 1;
}
}
//End Region States
//End dsregion States
//Session list: 
}
void BLEScannerImpl_handle_Scanner_Stop(struct BLEScannerImpl_Instance *_instance) {
if(!(_instance->active)) return;
//Region States
uint8_t BLEScannerImpl_States_State_event_consumed = 0;
if (_instance->BLEScannerImpl_States_State == BLESCANNERIMPL_STATES_STANDBY_STATE) {
if (BLEScannerImpl_States_State_event_consumed == 0 && 1) {
BLEScannerImpl_send_Scanner_Stopped(_instance);
BLEScannerImpl_States_State_event_consumed = 1;
}
}
else if (_instance->BLEScannerImpl_States_State == BLESCANNERIMPL_STATES_INITIATING_STATE) {
if (BLEScannerImpl_States_State_event_consumed == 0 && 1) {
BLEScannerImpl_States_OnExit(BLESCANNERIMPL_STATES_INITIATING_STATE, _instance);
_instance->BLEScannerImpl_States_State = BLESCANNERIMPL_STATES_STOPPING_STATE;
BLEScannerImpl_States_OnEntry(BLESCANNERIMPL_STATES_STOPPING_STATE, _instance);
BLEScannerImpl_States_State_event_consumed = 1;
}
}
else if (_instance->BLEScannerImpl_States_State == BLESCANNERIMPL_STATES_SCANNING_STATE) {
if (BLEScannerImpl_States_State_event_consumed == 0 && 1) {
BLEScannerImpl_States_OnExit(BLESCANNERIMPL_STATES_SCANNING_STATE, _instance);
_instance->BLEScannerImpl_States_State = BLESCANNERIMPL_STATES_STOPPING_STATE;
BLEScannerImpl_States_OnEntry(BLESCANNERIMPL_STATES_STOPPING_STATE, _instance);
BLEScannerImpl_States_State_event_consumed = 1;
}
}
else if (_instance->BLEScannerImpl_States_State == BLESCANNERIMPL_STATES_FAILURE_STATE) {
if (BLEScannerImpl_States_State_event_consumed == 0 && 1) {
BLEScannerImpl_send_Scanner_Failure(_instance);
BLEScannerImpl_States_State_event_consumed = 1;
}
}
//End Region States
//End dsregion States
//Session list: 
}
void BLEScannerImpl_handle_HCIEvents_SetLEScanParametersCompleted(struct BLEScannerImpl_Instance *_instance, uint8_t NumberAllowedCommandPackets, uint8_t Status) {
if(!(_instance->active)) return;
//Region States
uint8_t BLEScannerImpl_States_State_event_consumed = 0;
if (_instance->BLEScannerImpl_States_State == BLESCANNERIMPL_STATES_INITIATING_STATE) {
if (BLEScannerImpl_States_State_event_consumed == 0 && (Status > 0)) {
BLEScannerImpl_States_OnExit(BLESCANNERIMPL_STATES_INITIATING_STATE, _instance);
_instance->BLEScannerImpl_States_State = BLESCANNERIMPL_STATES_FAILURE_STATE;
BLEScannerImpl_States_OnEntry(BLESCANNERIMPL_STATES_FAILURE_STATE, _instance);
BLEScannerImpl_States_State_event_consumed = 1;
}
else if (BLEScannerImpl_States_State_event_consumed == 0 && (Status == 0)) {
BLEScannerImpl_send_HCICommands_SetLEScanEnable(_instance, 0x01, 0x00);
BLEScannerImpl_States_State_event_consumed = 1;
}
}
//End Region States
//End dsregion States
//Session list: 
}
void BLEScannerImpl_handle_HCIEvents_SetLEScanEnableCompleted(struct BLEScannerImpl_Instance *_instance, uint8_t NumberAllowedCommandPackets, uint8_t Status) {
if(!(_instance->active)) return;
//Region States
uint8_t BLEScannerImpl_States_State_event_consumed = 0;
if (_instance->BLEScannerImpl_States_State == BLESCANNERIMPL_STATES_INITIATING_STATE) {
if (BLEScannerImpl_States_State_event_consumed == 0 && (Status == 0)) {
BLEScannerImpl_States_OnExit(BLESCANNERIMPL_STATES_INITIATING_STATE, _instance);
_instance->BLEScannerImpl_States_State = BLESCANNERIMPL_STATES_SCANNING_STATE;
BLEScannerImpl_States_OnEntry(BLESCANNERIMPL_STATES_SCANNING_STATE, _instance);
BLEScannerImpl_States_State_event_consumed = 1;
}
else if (BLEScannerImpl_States_State_event_consumed == 0 && (Status > 0)) {
BLEScannerImpl_States_OnExit(BLESCANNERIMPL_STATES_INITIATING_STATE, _instance);
_instance->BLEScannerImpl_States_State = BLESCANNERIMPL_STATES_FAILURE_STATE;
BLEScannerImpl_States_OnEntry(BLESCANNERIMPL_STATES_FAILURE_STATE, _instance);
BLEScannerImpl_States_State_event_consumed = 1;
}
}
else if (_instance->BLEScannerImpl_States_State == BLESCANNERIMPL_STATES_STOPPING_STATE) {
if (BLEScannerImpl_States_State_event_consumed == 0 && (Status == 0)) {
BLEScannerImpl_States_OnExit(BLESCANNERIMPL_STATES_STOPPING_STATE, _instance);
_instance->BLEScannerImpl_States_State = BLESCANNERIMPL_STATES_STANDBY_STATE;
BLEScannerImpl_send_Scanner_Stopped(_instance);
BLEScannerImpl_States_OnEntry(BLESCANNERIMPL_STATES_STANDBY_STATE, _instance);
BLEScannerImpl_States_State_event_consumed = 1;
}
else if (BLEScannerImpl_States_State_event_consumed == 0 && (Status > 0)) {
BLEScannerImpl_States_OnExit(BLESCANNERIMPL_STATES_STOPPING_STATE, _instance);
_instance->BLEScannerImpl_States_State = BLESCANNERIMPL_STATES_FAILURE_STATE;
BLEScannerImpl_States_OnEntry(BLESCANNERIMPL_STATES_FAILURE_STATE, _instance);
BLEScannerImpl_States_State_event_consumed = 1;
}
}
//End Region States
//End dsregion States
//Session list: 
}
void BLEScannerImpl_handle_HCIEvents_LEAdvertisementReport(struct BLEScannerImpl_Instance *_instance, uint8_t Type, uint8_t AddressType, bdaddr_t Address, uint8_t Length, ble_adv_data_t Data) {
if(!(_instance->active)) return;
//Region States
uint8_t BLEScannerImpl_States_State_event_consumed = 0;
if (_instance->BLEScannerImpl_States_State == BLESCANNERIMPL_STATES_SCANNING_STATE) {
if (BLEScannerImpl_States_State_event_consumed == 0 && 1) {
if(Type == BLEADVERTISEMENTREPORTTYPE_ADV_IND || Type == BLEADVERTISEMENTREPORTTYPE_ADV_DIRECT_IND) {
BLEScannerImpl_send_Scanner_ConnectableAdvertisement(_instance, AddressType, Address);

}
BLEScannerImpl_States_State_event_consumed = 1;
}
}
//End Region States
//End dsregion States
//Session list: 
}

// Observers for outgoing messages:
void (*external_BLEScannerImpl_send_Scanner_Started_listener)(struct BLEScannerImpl_Instance *)= 0x0;
void (*BLEScannerImpl_send_Scanner_Started_listener)(struct BLEScannerImpl_Instance *)= 0x0;
void register_external_BLEScannerImpl_send_Scanner_Started_listener(void (*_listener)(struct BLEScannerImpl_Instance *)){
external_BLEScannerImpl_send_Scanner_Started_listener = _listener;
}
void register_BLEScannerImpl_send_Scanner_Started_listener(void (*_listener)(struct BLEScannerImpl_Instance *)){
BLEScannerImpl_send_Scanner_Started_listener = _listener;
}
void BLEScannerImpl_send_Scanner_Started(struct BLEScannerImpl_Instance *_instance){
if (BLEScannerImpl_send_Scanner_Started_listener != 0x0) BLEScannerImpl_send_Scanner_Started_listener(_instance);
if (external_BLEScannerImpl_send_Scanner_Started_listener != 0x0) external_BLEScannerImpl_send_Scanner_Started_listener(_instance);
;
}
void (*external_BLEScannerImpl_send_Scanner_Stopped_listener)(struct BLEScannerImpl_Instance *)= 0x0;
void (*BLEScannerImpl_send_Scanner_Stopped_listener)(struct BLEScannerImpl_Instance *)= 0x0;
void register_external_BLEScannerImpl_send_Scanner_Stopped_listener(void (*_listener)(struct BLEScannerImpl_Instance *)){
external_BLEScannerImpl_send_Scanner_Stopped_listener = _listener;
}
void register_BLEScannerImpl_send_Scanner_Stopped_listener(void (*_listener)(struct BLEScannerImpl_Instance *)){
BLEScannerImpl_send_Scanner_Stopped_listener = _listener;
}
void BLEScannerImpl_send_Scanner_Stopped(struct BLEScannerImpl_Instance *_instance){
if (BLEScannerImpl_send_Scanner_Stopped_listener != 0x0) BLEScannerImpl_send_Scanner_Stopped_listener(_instance);
if (external_BLEScannerImpl_send_Scanner_Stopped_listener != 0x0) external_BLEScannerImpl_send_Scanner_Stopped_listener(_instance);
;
}
void (*external_BLEScannerImpl_send_Scanner_Failure_listener)(struct BLEScannerImpl_Instance *)= 0x0;
void (*BLEScannerImpl_send_Scanner_Failure_listener)(struct BLEScannerImpl_Instance *)= 0x0;
void register_external_BLEScannerImpl_send_Scanner_Failure_listener(void (*_listener)(struct BLEScannerImpl_Instance *)){
external_BLEScannerImpl_send_Scanner_Failure_listener = _listener;
}
void register_BLEScannerImpl_send_Scanner_Failure_listener(void (*_listener)(struct BLEScannerImpl_Instance *)){
BLEScannerImpl_send_Scanner_Failure_listener = _listener;
}
void BLEScannerImpl_send_Scanner_Failure(struct BLEScannerImpl_Instance *_instance){
if (BLEScannerImpl_send_Scanner_Failure_listener != 0x0) BLEScannerImpl_send_Scanner_Failure_listener(_instance);
if (external_BLEScannerImpl_send_Scanner_Failure_listener != 0x0) external_BLEScannerImpl_send_Scanner_Failure_listener(_instance);
;
}
void (*external_BLEScannerImpl_send_Scanner_ConnectableAdvertisement_listener)(struct BLEScannerImpl_Instance *, uint8_t, bdaddr_t)= 0x0;
void (*BLEScannerImpl_send_Scanner_ConnectableAdvertisement_listener)(struct BLEScannerImpl_Instance *, uint8_t, bdaddr_t)= 0x0;
void register_external_BLEScannerImpl_send_Scanner_ConnectableAdvertisement_listener(void (*_listener)(struct BLEScannerImpl_Instance *, uint8_t, bdaddr_t)){
external_BLEScannerImpl_send_Scanner_ConnectableAdvertisement_listener = _listener;
}
void register_BLEScannerImpl_send_Scanner_ConnectableAdvertisement_listener(void (*_listener)(struct BLEScannerImpl_Instance *, uint8_t, bdaddr_t)){
BLEScannerImpl_send_Scanner_ConnectableAdvertisement_listener = _listener;
}
void BLEScannerImpl_send_Scanner_ConnectableAdvertisement(struct BLEScannerImpl_Instance *_instance, uint8_t AddressType, bdaddr_t Address){
if (BLEScannerImpl_send_Scanner_ConnectableAdvertisement_listener != 0x0) BLEScannerImpl_send_Scanner_ConnectableAdvertisement_listener(_instance, AddressType, Address);
if (external_BLEScannerImpl_send_Scanner_ConnectableAdvertisement_listener != 0x0) external_BLEScannerImpl_send_Scanner_ConnectableAdvertisement_listener(_instance, AddressType, Address);
;
}
void (*external_BLEScannerImpl_send_Socket_Open_listener)(struct BLEScannerImpl_Instance *)= 0x0;
void (*BLEScannerImpl_send_Socket_Open_listener)(struct BLEScannerImpl_Instance *)= 0x0;
void register_external_BLEScannerImpl_send_Socket_Open_listener(void (*_listener)(struct BLEScannerImpl_Instance *)){
external_BLEScannerImpl_send_Socket_Open_listener = _listener;
}
void register_BLEScannerImpl_send_Socket_Open_listener(void (*_listener)(struct BLEScannerImpl_Instance *)){
BLEScannerImpl_send_Socket_Open_listener = _listener;
}
void BLEScannerImpl_send_Socket_Open(struct BLEScannerImpl_Instance *_instance){
if (BLEScannerImpl_send_Socket_Open_listener != 0x0) BLEScannerImpl_send_Socket_Open_listener(_instance);
if (external_BLEScannerImpl_send_Socket_Open_listener != 0x0) external_BLEScannerImpl_send_Socket_Open_listener(_instance);
;
}
void (*external_BLEScannerImpl_send_Socket_Close_listener)(struct BLEScannerImpl_Instance *)= 0x0;
void (*BLEScannerImpl_send_Socket_Close_listener)(struct BLEScannerImpl_Instance *)= 0x0;
void register_external_BLEScannerImpl_send_Socket_Close_listener(void (*_listener)(struct BLEScannerImpl_Instance *)){
external_BLEScannerImpl_send_Socket_Close_listener = _listener;
}
void register_BLEScannerImpl_send_Socket_Close_listener(void (*_listener)(struct BLEScannerImpl_Instance *)){
BLEScannerImpl_send_Socket_Close_listener = _listener;
}
void BLEScannerImpl_send_Socket_Close(struct BLEScannerImpl_Instance *_instance){
if (BLEScannerImpl_send_Socket_Close_listener != 0x0) BLEScannerImpl_send_Socket_Close_listener(_instance);
if (external_BLEScannerImpl_send_Socket_Close_listener != 0x0) external_BLEScannerImpl_send_Socket_Close_listener(_instance);
;
}
void (*external_BLEScannerImpl_send_HCICommands_Reset_listener)(struct BLEScannerImpl_Instance *)= 0x0;
void (*BLEScannerImpl_send_HCICommands_Reset_listener)(struct BLEScannerImpl_Instance *)= 0x0;
void register_external_BLEScannerImpl_send_HCICommands_Reset_listener(void (*_listener)(struct BLEScannerImpl_Instance *)){
external_BLEScannerImpl_send_HCICommands_Reset_listener = _listener;
}
void register_BLEScannerImpl_send_HCICommands_Reset_listener(void (*_listener)(struct BLEScannerImpl_Instance *)){
BLEScannerImpl_send_HCICommands_Reset_listener = _listener;
}
void BLEScannerImpl_send_HCICommands_Reset(struct BLEScannerImpl_Instance *_instance){
if (BLEScannerImpl_send_HCICommands_Reset_listener != 0x0) BLEScannerImpl_send_HCICommands_Reset_listener(_instance);
if (external_BLEScannerImpl_send_HCICommands_Reset_listener != 0x0) external_BLEScannerImpl_send_HCICommands_Reset_listener(_instance);
;
}
void (*external_BLEScannerImpl_send_HCICommands_SetEventMask_listener)(struct BLEScannerImpl_Instance *, set_event_mask_cp)= 0x0;
void (*BLEScannerImpl_send_HCICommands_SetEventMask_listener)(struct BLEScannerImpl_Instance *, set_event_mask_cp)= 0x0;
void register_external_BLEScannerImpl_send_HCICommands_SetEventMask_listener(void (*_listener)(struct BLEScannerImpl_Instance *, set_event_mask_cp)){
external_BLEScannerImpl_send_HCICommands_SetEventMask_listener = _listener;
}
void register_BLEScannerImpl_send_HCICommands_SetEventMask_listener(void (*_listener)(struct BLEScannerImpl_Instance *, set_event_mask_cp)){
BLEScannerImpl_send_HCICommands_SetEventMask_listener = _listener;
}
void BLEScannerImpl_send_HCICommands_SetEventMask(struct BLEScannerImpl_Instance *_instance, set_event_mask_cp Mask){
if (BLEScannerImpl_send_HCICommands_SetEventMask_listener != 0x0) BLEScannerImpl_send_HCICommands_SetEventMask_listener(_instance, Mask);
if (external_BLEScannerImpl_send_HCICommands_SetEventMask_listener != 0x0) external_BLEScannerImpl_send_HCICommands_SetEventMask_listener(_instance, Mask);
;
}
void (*external_BLEScannerImpl_send_HCICommands_SetEventMaskAll_listener)(struct BLEScannerImpl_Instance *)= 0x0;
void (*BLEScannerImpl_send_HCICommands_SetEventMaskAll_listener)(struct BLEScannerImpl_Instance *)= 0x0;
void register_external_BLEScannerImpl_send_HCICommands_SetEventMaskAll_listener(void (*_listener)(struct BLEScannerImpl_Instance *)){
external_BLEScannerImpl_send_HCICommands_SetEventMaskAll_listener = _listener;
}
void register_BLEScannerImpl_send_HCICommands_SetEventMaskAll_listener(void (*_listener)(struct BLEScannerImpl_Instance *)){
BLEScannerImpl_send_HCICommands_SetEventMaskAll_listener = _listener;
}
void BLEScannerImpl_send_HCICommands_SetEventMaskAll(struct BLEScannerImpl_Instance *_instance){
if (BLEScannerImpl_send_HCICommands_SetEventMaskAll_listener != 0x0) BLEScannerImpl_send_HCICommands_SetEventMaskAll_listener(_instance);
if (external_BLEScannerImpl_send_HCICommands_SetEventMaskAll_listener != 0x0) external_BLEScannerImpl_send_HCICommands_SetEventMaskAll_listener(_instance);
;
}
void (*external_BLEScannerImpl_send_HCICommands_SetLocalName_listener)(struct BLEScannerImpl_Instance *, change_local_name_cp)= 0x0;
void (*BLEScannerImpl_send_HCICommands_SetLocalName_listener)(struct BLEScannerImpl_Instance *, change_local_name_cp)= 0x0;
void register_external_BLEScannerImpl_send_HCICommands_SetLocalName_listener(void (*_listener)(struct BLEScannerImpl_Instance *, change_local_name_cp)){
external_BLEScannerImpl_send_HCICommands_SetLocalName_listener = _listener;
}
void register_BLEScannerImpl_send_HCICommands_SetLocalName_listener(void (*_listener)(struct BLEScannerImpl_Instance *, change_local_name_cp)){
BLEScannerImpl_send_HCICommands_SetLocalName_listener = _listener;
}
void BLEScannerImpl_send_HCICommands_SetLocalName(struct BLEScannerImpl_Instance *_instance, change_local_name_cp Name){
if (BLEScannerImpl_send_HCICommands_SetLocalName_listener != 0x0) BLEScannerImpl_send_HCICommands_SetLocalName_listener(_instance, Name);
if (external_BLEScannerImpl_send_HCICommands_SetLocalName_listener != 0x0) external_BLEScannerImpl_send_HCICommands_SetLocalName_listener(_instance, Name);
;
}
void (*external_BLEScannerImpl_send_HCICommands_Disconnect_listener)(struct BLEScannerImpl_Instance *, uint16_t, uint8_t)= 0x0;
void (*BLEScannerImpl_send_HCICommands_Disconnect_listener)(struct BLEScannerImpl_Instance *, uint16_t, uint8_t)= 0x0;
void register_external_BLEScannerImpl_send_HCICommands_Disconnect_listener(void (*_listener)(struct BLEScannerImpl_Instance *, uint16_t, uint8_t)){
external_BLEScannerImpl_send_HCICommands_Disconnect_listener = _listener;
}
void register_BLEScannerImpl_send_HCICommands_Disconnect_listener(void (*_listener)(struct BLEScannerImpl_Instance *, uint16_t, uint8_t)){
BLEScannerImpl_send_HCICommands_Disconnect_listener = _listener;
}
void BLEScannerImpl_send_HCICommands_Disconnect(struct BLEScannerImpl_Instance *_instance, uint16_t ConnectionHandle, uint8_t Reason){
if (BLEScannerImpl_send_HCICommands_Disconnect_listener != 0x0) BLEScannerImpl_send_HCICommands_Disconnect_listener(_instance, ConnectionHandle, Reason);
if (external_BLEScannerImpl_send_HCICommands_Disconnect_listener != 0x0) external_BLEScannerImpl_send_HCICommands_Disconnect_listener(_instance, ConnectionHandle, Reason);
;
}
void (*external_BLEScannerImpl_send_HCICommands_SetLEEventMask_listener)(struct BLEScannerImpl_Instance *, set_event_mask_cp)= 0x0;
void (*BLEScannerImpl_send_HCICommands_SetLEEventMask_listener)(struct BLEScannerImpl_Instance *, set_event_mask_cp)= 0x0;
void register_external_BLEScannerImpl_send_HCICommands_SetLEEventMask_listener(void (*_listener)(struct BLEScannerImpl_Instance *, set_event_mask_cp)){
external_BLEScannerImpl_send_HCICommands_SetLEEventMask_listener = _listener;
}
void register_BLEScannerImpl_send_HCICommands_SetLEEventMask_listener(void (*_listener)(struct BLEScannerImpl_Instance *, set_event_mask_cp)){
BLEScannerImpl_send_HCICommands_SetLEEventMask_listener = _listener;
}
void BLEScannerImpl_send_HCICommands_SetLEEventMask(struct BLEScannerImpl_Instance *_instance, set_event_mask_cp Mask){
if (BLEScannerImpl_send_HCICommands_SetLEEventMask_listener != 0x0) BLEScannerImpl_send_HCICommands_SetLEEventMask_listener(_instance, Mask);
if (external_BLEScannerImpl_send_HCICommands_SetLEEventMask_listener != 0x0) external_BLEScannerImpl_send_HCICommands_SetLEEventMask_listener(_instance, Mask);
;
}
void (*external_BLEScannerImpl_send_HCICommands_SetLEEventMaskAll_listener)(struct BLEScannerImpl_Instance *)= 0x0;
void (*BLEScannerImpl_send_HCICommands_SetLEEventMaskAll_listener)(struct BLEScannerImpl_Instance *)= 0x0;
void register_external_BLEScannerImpl_send_HCICommands_SetLEEventMaskAll_listener(void (*_listener)(struct BLEScannerImpl_Instance *)){
external_BLEScannerImpl_send_HCICommands_SetLEEventMaskAll_listener = _listener;
}
void register_BLEScannerImpl_send_HCICommands_SetLEEventMaskAll_listener(void (*_listener)(struct BLEScannerImpl_Instance *)){
BLEScannerImpl_send_HCICommands_SetLEEventMaskAll_listener = _listener;
}
void BLEScannerImpl_send_HCICommands_SetLEEventMaskAll(struct BLEScannerImpl_Instance *_instance){
if (BLEScannerImpl_send_HCICommands_SetLEEventMaskAll_listener != 0x0) BLEScannerImpl_send_HCICommands_SetLEEventMaskAll_listener(_instance);
if (external_BLEScannerImpl_send_HCICommands_SetLEEventMaskAll_listener != 0x0) external_BLEScannerImpl_send_HCICommands_SetLEEventMaskAll_listener(_instance);
;
}
void (*external_BLEScannerImpl_send_HCICommands_SetLEAdvertisementParameters_listener)(struct BLEScannerImpl_Instance *, uint16_t, uint16_t, uint8_t, uint8_t, uint8_t, bdaddr_t, uint8_t, uint8_t)= 0x0;
void (*BLEScannerImpl_send_HCICommands_SetLEAdvertisementParameters_listener)(struct BLEScannerImpl_Instance *, uint16_t, uint16_t, uint8_t, uint8_t, uint8_t, bdaddr_t, uint8_t, uint8_t)= 0x0;
void register_external_BLEScannerImpl_send_HCICommands_SetLEAdvertisementParameters_listener(void (*_listener)(struct BLEScannerImpl_Instance *, uint16_t, uint16_t, uint8_t, uint8_t, uint8_t, bdaddr_t, uint8_t, uint8_t)){
external_BLEScannerImpl_send_HCICommands_SetLEAdvertisementParameters_listener = _listener;
}
void register_BLEScannerImpl_send_HCICommands_SetLEAdvertisementParameters_listener(void (*_listener)(struct BLEScannerImpl_Instance *, uint16_t, uint16_t, uint8_t, uint8_t, uint8_t, bdaddr_t, uint8_t, uint8_t)){
BLEScannerImpl_send_HCICommands_SetLEAdvertisementParameters_listener = _listener;
}
void BLEScannerImpl_send_HCICommands_SetLEAdvertisementParameters(struct BLEScannerImpl_Instance *_instance, uint16_t MinInterval, uint16_t MaxInterval, uint8_t Type, uint8_t OwnAddressType, uint8_t PeerAddressType, bdaddr_t PeerAddress, uint8_t Channel, uint8_t FilterPolicy){
if (BLEScannerImpl_send_HCICommands_SetLEAdvertisementParameters_listener != 0x0) BLEScannerImpl_send_HCICommands_SetLEAdvertisementParameters_listener(_instance, MinInterval, MaxInterval, Type, OwnAddressType, PeerAddressType, PeerAddress, Channel, FilterPolicy);
if (external_BLEScannerImpl_send_HCICommands_SetLEAdvertisementParameters_listener != 0x0) external_BLEScannerImpl_send_HCICommands_SetLEAdvertisementParameters_listener(_instance, MinInterval, MaxInterval, Type, OwnAddressType, PeerAddressType, PeerAddress, Channel, FilterPolicy);
;
}
void (*external_BLEScannerImpl_send_HCICommands_SetLEAdvertiseEnable_listener)(struct BLEScannerImpl_Instance *, uint8_t)= 0x0;
void (*BLEScannerImpl_send_HCICommands_SetLEAdvertiseEnable_listener)(struct BLEScannerImpl_Instance *, uint8_t)= 0x0;
void register_external_BLEScannerImpl_send_HCICommands_SetLEAdvertiseEnable_listener(void (*_listener)(struct BLEScannerImpl_Instance *, uint8_t)){
external_BLEScannerImpl_send_HCICommands_SetLEAdvertiseEnable_listener = _listener;
}
void register_BLEScannerImpl_send_HCICommands_SetLEAdvertiseEnable_listener(void (*_listener)(struct BLEScannerImpl_Instance *, uint8_t)){
BLEScannerImpl_send_HCICommands_SetLEAdvertiseEnable_listener = _listener;
}
void BLEScannerImpl_send_HCICommands_SetLEAdvertiseEnable(struct BLEScannerImpl_Instance *_instance, uint8_t Enable){
if (BLEScannerImpl_send_HCICommands_SetLEAdvertiseEnable_listener != 0x0) BLEScannerImpl_send_HCICommands_SetLEAdvertiseEnable_listener(_instance, Enable);
if (external_BLEScannerImpl_send_HCICommands_SetLEAdvertiseEnable_listener != 0x0) external_BLEScannerImpl_send_HCICommands_SetLEAdvertiseEnable_listener(_instance, Enable);
;
}
void (*external_BLEScannerImpl_send_HCICommands_SetLEAdvertisingData_listener)(struct BLEScannerImpl_Instance *, uint8_t, ble_adv_data_t)= 0x0;
void (*BLEScannerImpl_send_HCICommands_SetLEAdvertisingData_listener)(struct BLEScannerImpl_Instance *, uint8_t, ble_adv_data_t)= 0x0;
void register_external_BLEScannerImpl_send_HCICommands_SetLEAdvertisingData_listener(void (*_listener)(struct BLEScannerImpl_Instance *, uint8_t, ble_adv_data_t)){
external_BLEScannerImpl_send_HCICommands_SetLEAdvertisingData_listener = _listener;
}
void register_BLEScannerImpl_send_HCICommands_SetLEAdvertisingData_listener(void (*_listener)(struct BLEScannerImpl_Instance *, uint8_t, ble_adv_data_t)){
BLEScannerImpl_send_HCICommands_SetLEAdvertisingData_listener = _listener;
}
void BLEScannerImpl_send_HCICommands_SetLEAdvertisingData(struct BLEScannerImpl_Instance *_instance, uint8_t Length, ble_adv_data_t Data){
if (BLEScannerImpl_send_HCICommands_SetLEAdvertisingData_listener != 0x0) BLEScannerImpl_send_HCICommands_SetLEAdvertisingData_listener(_instance, Length, Data);
if (external_BLEScannerImpl_send_HCICommands_SetLEAdvertisingData_listener != 0x0) external_BLEScannerImpl_send_HCICommands_SetLEAdvertisingData_listener(_instance, Length, Data);
;
}
void (*external_BLEScannerImpl_send_HCICommands_SetLEScanResponseData_listener)(struct BLEScannerImpl_Instance *, uint8_t, ble_adv_data_t)= 0x0;
void (*BLEScannerImpl_send_HCICommands_SetLEScanResponseData_listener)(struct BLEScannerImpl_Instance *, uint8_t, ble_adv_data_t)= 0x0;
void register_external_BLEScannerImpl_send_HCICommands_SetLEScanResponseData_listener(void (*_listener)(struct BLEScannerImpl_Instance *, uint8_t, ble_adv_data_t)){
external_BLEScannerImpl_send_HCICommands_SetLEScanResponseData_listener = _listener;
}
void register_BLEScannerImpl_send_HCICommands_SetLEScanResponseData_listener(void (*_listener)(struct BLEScannerImpl_Instance *, uint8_t, ble_adv_data_t)){
BLEScannerImpl_send_HCICommands_SetLEScanResponseData_listener = _listener;
}
void BLEScannerImpl_send_HCICommands_SetLEScanResponseData(struct BLEScannerImpl_Instance *_instance, uint8_t Length, ble_adv_data_t Data){
if (BLEScannerImpl_send_HCICommands_SetLEScanResponseData_listener != 0x0) BLEScannerImpl_send_HCICommands_SetLEScanResponseData_listener(_instance, Length, Data);
if (external_BLEScannerImpl_send_HCICommands_SetLEScanResponseData_listener != 0x0) external_BLEScannerImpl_send_HCICommands_SetLEScanResponseData_listener(_instance, Length, Data);
;
}
void (*external_BLEScannerImpl_send_HCICommands_SetLEScanParameters_listener)(struct BLEScannerImpl_Instance *, uint8_t, uint16_t, uint16_t, uint8_t, uint8_t)= 0x0;
void (*BLEScannerImpl_send_HCICommands_SetLEScanParameters_listener)(struct BLEScannerImpl_Instance *, uint8_t, uint16_t, uint16_t, uint8_t, uint8_t)= 0x0;
void register_external_BLEScannerImpl_send_HCICommands_SetLEScanParameters_listener(void (*_listener)(struct BLEScannerImpl_Instance *, uint8_t, uint16_t, uint16_t, uint8_t, uint8_t)){
external_BLEScannerImpl_send_HCICommands_SetLEScanParameters_listener = _listener;
}
void register_BLEScannerImpl_send_HCICommands_SetLEScanParameters_listener(void (*_listener)(struct BLEScannerImpl_Instance *, uint8_t, uint16_t, uint16_t, uint8_t, uint8_t)){
BLEScannerImpl_send_HCICommands_SetLEScanParameters_listener = _listener;
}
void BLEScannerImpl_send_HCICommands_SetLEScanParameters(struct BLEScannerImpl_Instance *_instance, uint8_t Type, uint16_t Interval, uint16_t Window, uint8_t OwnAddressType, uint8_t FilterPolicy){
if (BLEScannerImpl_send_HCICommands_SetLEScanParameters_listener != 0x0) BLEScannerImpl_send_HCICommands_SetLEScanParameters_listener(_instance, Type, Interval, Window, OwnAddressType, FilterPolicy);
if (external_BLEScannerImpl_send_HCICommands_SetLEScanParameters_listener != 0x0) external_BLEScannerImpl_send_HCICommands_SetLEScanParameters_listener(_instance, Type, Interval, Window, OwnAddressType, FilterPolicy);
;
}
void (*external_BLEScannerImpl_send_HCICommands_SetLEScanEnable_listener)(struct BLEScannerImpl_Instance *, uint8_t, uint8_t)= 0x0;
void (*BLEScannerImpl_send_HCICommands_SetLEScanEnable_listener)(struct BLEScannerImpl_Instance *, uint8_t, uint8_t)= 0x0;
void register_external_BLEScannerImpl_send_HCICommands_SetLEScanEnable_listener(void (*_listener)(struct BLEScannerImpl_Instance *, uint8_t, uint8_t)){
external_BLEScannerImpl_send_HCICommands_SetLEScanEnable_listener = _listener;
}
void register_BLEScannerImpl_send_HCICommands_SetLEScanEnable_listener(void (*_listener)(struct BLEScannerImpl_Instance *, uint8_t, uint8_t)){
BLEScannerImpl_send_HCICommands_SetLEScanEnable_listener = _listener;
}
void BLEScannerImpl_send_HCICommands_SetLEScanEnable(struct BLEScannerImpl_Instance *_instance, uint8_t Enable, uint8_t FilterDuplicates){
if (BLEScannerImpl_send_HCICommands_SetLEScanEnable_listener != 0x0) BLEScannerImpl_send_HCICommands_SetLEScanEnable_listener(_instance, Enable, FilterDuplicates);
if (external_BLEScannerImpl_send_HCICommands_SetLEScanEnable_listener != 0x0) external_BLEScannerImpl_send_HCICommands_SetLEScanEnable_listener(_instance, Enable, FilterDuplicates);
;
}
void (*external_BLEScannerImpl_send_HCICommands_LECreateConnection_listener)(struct BLEScannerImpl_Instance *, uint16_t, uint16_t, uint8_t, uint8_t, bdaddr_t, uint8_t, uint16_t, uint16_t, uint16_t, uint16_t, uint16_t, uint16_t)= 0x0;
void (*BLEScannerImpl_send_HCICommands_LECreateConnection_listener)(struct BLEScannerImpl_Instance *, uint16_t, uint16_t, uint8_t, uint8_t, bdaddr_t, uint8_t, uint16_t, uint16_t, uint16_t, uint16_t, uint16_t, uint16_t)= 0x0;
void register_external_BLEScannerImpl_send_HCICommands_LECreateConnection_listener(void (*_listener)(struct BLEScannerImpl_Instance *, uint16_t, uint16_t, uint8_t, uint8_t, bdaddr_t, uint8_t, uint16_t, uint16_t, uint16_t, uint16_t, uint16_t, uint16_t)){
external_BLEScannerImpl_send_HCICommands_LECreateConnection_listener = _listener;
}
void register_BLEScannerImpl_send_HCICommands_LECreateConnection_listener(void (*_listener)(struct BLEScannerImpl_Instance *, uint16_t, uint16_t, uint8_t, uint8_t, bdaddr_t, uint8_t, uint16_t, uint16_t, uint16_t, uint16_t, uint16_t, uint16_t)){
BLEScannerImpl_send_HCICommands_LECreateConnection_listener = _listener;
}
void BLEScannerImpl_send_HCICommands_LECreateConnection(struct BLEScannerImpl_Instance *_instance, uint16_t Interval, uint16_t Window, uint8_t FilterPolicy, uint8_t PeerAddressType, bdaddr_t PeerAddress, uint8_t OwnAddressType, uint16_t ConnIntervalMin, uint16_t ConnIntervalMax, uint16_t ConnLatency, uint16_t SupervisionTimeout, uint16_t CELengthMin, uint16_t CELengthMax){
if (BLEScannerImpl_send_HCICommands_LECreateConnection_listener != 0x0) BLEScannerImpl_send_HCICommands_LECreateConnection_listener(_instance, Interval, Window, FilterPolicy, PeerAddressType, PeerAddress, OwnAddressType, ConnIntervalMin, ConnIntervalMax, ConnLatency, SupervisionTimeout, CELengthMin, CELengthMax);
if (external_BLEScannerImpl_send_HCICommands_LECreateConnection_listener != 0x0) external_BLEScannerImpl_send_HCICommands_LECreateConnection_listener(_instance, Interval, Window, FilterPolicy, PeerAddressType, PeerAddress, OwnAddressType, ConnIntervalMin, ConnIntervalMax, ConnLatency, SupervisionTimeout, CELengthMin, CELengthMax);
;
}
void (*external_BLEScannerImpl_send_HCICommands_LECreateConnectionCancel_listener)(struct BLEScannerImpl_Instance *)= 0x0;
void (*BLEScannerImpl_send_HCICommands_LECreateConnectionCancel_listener)(struct BLEScannerImpl_Instance *)= 0x0;
void register_external_BLEScannerImpl_send_HCICommands_LECreateConnectionCancel_listener(void (*_listener)(struct BLEScannerImpl_Instance *)){
external_BLEScannerImpl_send_HCICommands_LECreateConnectionCancel_listener = _listener;
}
void register_BLEScannerImpl_send_HCICommands_LECreateConnectionCancel_listener(void (*_listener)(struct BLEScannerImpl_Instance *)){
BLEScannerImpl_send_HCICommands_LECreateConnectionCancel_listener = _listener;
}
void BLEScannerImpl_send_HCICommands_LECreateConnectionCancel(struct BLEScannerImpl_Instance *_instance){
if (BLEScannerImpl_send_HCICommands_LECreateConnectionCancel_listener != 0x0) BLEScannerImpl_send_HCICommands_LECreateConnectionCancel_listener(_instance);
if (external_BLEScannerImpl_send_HCICommands_LECreateConnectionCancel_listener != 0x0) external_BLEScannerImpl_send_HCICommands_LECreateConnectionCancel_listener(_instance);
;
}
void (*external_BLEScannerImpl_send_HCICommands_LERand_listener)(struct BLEScannerImpl_Instance *)= 0x0;
void (*BLEScannerImpl_send_HCICommands_LERand_listener)(struct BLEScannerImpl_Instance *)= 0x0;
void register_external_BLEScannerImpl_send_HCICommands_LERand_listener(void (*_listener)(struct BLEScannerImpl_Instance *)){
external_BLEScannerImpl_send_HCICommands_LERand_listener = _listener;
}
void register_BLEScannerImpl_send_HCICommands_LERand_listener(void (*_listener)(struct BLEScannerImpl_Instance *)){
BLEScannerImpl_send_HCICommands_LERand_listener = _listener;
}
void BLEScannerImpl_send_HCICommands_LERand(struct BLEScannerImpl_Instance *_instance){
if (BLEScannerImpl_send_HCICommands_LERand_listener != 0x0) BLEScannerImpl_send_HCICommands_LERand_listener(_instance);
if (external_BLEScannerImpl_send_HCICommands_LERand_listener != 0x0) external_BLEScannerImpl_send_HCICommands_LERand_listener(_instance);
;
}
void (*external_BLEScannerImpl_send_HCICommands_LEEncrypt_listener)(struct BLEScannerImpl_Instance *, ble_random_number_t, ble_random_number_t)= 0x0;
void (*BLEScannerImpl_send_HCICommands_LEEncrypt_listener)(struct BLEScannerImpl_Instance *, ble_random_number_t, ble_random_number_t)= 0x0;
void register_external_BLEScannerImpl_send_HCICommands_LEEncrypt_listener(void (*_listener)(struct BLEScannerImpl_Instance *, ble_random_number_t, ble_random_number_t)){
external_BLEScannerImpl_send_HCICommands_LEEncrypt_listener = _listener;
}
void register_BLEScannerImpl_send_HCICommands_LEEncrypt_listener(void (*_listener)(struct BLEScannerImpl_Instance *, ble_random_number_t, ble_random_number_t)){
BLEScannerImpl_send_HCICommands_LEEncrypt_listener = _listener;
}
void BLEScannerImpl_send_HCICommands_LEEncrypt(struct BLEScannerImpl_Instance *_instance, ble_random_number_t Key, ble_random_number_t Plaintext){
if (BLEScannerImpl_send_HCICommands_LEEncrypt_listener != 0x0) BLEScannerImpl_send_HCICommands_LEEncrypt_listener(_instance, Key, Plaintext);
if (external_BLEScannerImpl_send_HCICommands_LEEncrypt_listener != 0x0) external_BLEScannerImpl_send_HCICommands_LEEncrypt_listener(_instance, Key, Plaintext);
;
}
void (*external_BLEScannerImpl_send_HCICommands_LEStartEncryption_listener)(struct BLEScannerImpl_Instance *, uint16_t, ble_random_part_t, uint16_t, ble_random_number_t)= 0x0;
void (*BLEScannerImpl_send_HCICommands_LEStartEncryption_listener)(struct BLEScannerImpl_Instance *, uint16_t, ble_random_part_t, uint16_t, ble_random_number_t)= 0x0;
void register_external_BLEScannerImpl_send_HCICommands_LEStartEncryption_listener(void (*_listener)(struct BLEScannerImpl_Instance *, uint16_t, ble_random_part_t, uint16_t, ble_random_number_t)){
external_BLEScannerImpl_send_HCICommands_LEStartEncryption_listener = _listener;
}
void register_BLEScannerImpl_send_HCICommands_LEStartEncryption_listener(void (*_listener)(struct BLEScannerImpl_Instance *, uint16_t, ble_random_part_t, uint16_t, ble_random_number_t)){
BLEScannerImpl_send_HCICommands_LEStartEncryption_listener = _listener;
}
void BLEScannerImpl_send_HCICommands_LEStartEncryption(struct BLEScannerImpl_Instance *_instance, uint16_t ConnectionHandle, ble_random_part_t Random, uint16_t EDIV, ble_random_number_t LTK){
if (BLEScannerImpl_send_HCICommands_LEStartEncryption_listener != 0x0) BLEScannerImpl_send_HCICommands_LEStartEncryption_listener(_instance, ConnectionHandle, Random, EDIV, LTK);
if (external_BLEScannerImpl_send_HCICommands_LEStartEncryption_listener != 0x0) external_BLEScannerImpl_send_HCICommands_LEStartEncryption_listener(_instance, ConnectionHandle, Random, EDIV, LTK);
;
}
void (*external_BLEScannerImpl_send_SMP_SMPPairingRequest_listener)(struct BLEScannerImpl_Instance *, uint16_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t)= 0x0;
void (*BLEScannerImpl_send_SMP_SMPPairingRequest_listener)(struct BLEScannerImpl_Instance *, uint16_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t)= 0x0;
void register_external_BLEScannerImpl_send_SMP_SMPPairingRequest_listener(void (*_listener)(struct BLEScannerImpl_Instance *, uint16_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t)){
external_BLEScannerImpl_send_SMP_SMPPairingRequest_listener = _listener;
}
void register_BLEScannerImpl_send_SMP_SMPPairingRequest_listener(void (*_listener)(struct BLEScannerImpl_Instance *, uint16_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t)){
BLEScannerImpl_send_SMP_SMPPairingRequest_listener = _listener;
}
void BLEScannerImpl_send_SMP_SMPPairingRequest(struct BLEScannerImpl_Instance *_instance, uint16_t Handle, uint8_t IOCapability, uint8_t OOBDataPresent, uint8_t Bonding, uint8_t MITM, uint8_t SecureConnection, uint8_t Keypress, uint8_t MaximumEncryptionKeySize, uint8_t InitiatorKeyDistribution, uint8_t ResponderKeyDistribution){
if (BLEScannerImpl_send_SMP_SMPPairingRequest_listener != 0x0) BLEScannerImpl_send_SMP_SMPPairingRequest_listener(_instance, Handle, IOCapability, OOBDataPresent, Bonding, MITM, SecureConnection, Keypress, MaximumEncryptionKeySize, InitiatorKeyDistribution, ResponderKeyDistribution);
if (external_BLEScannerImpl_send_SMP_SMPPairingRequest_listener != 0x0) external_BLEScannerImpl_send_SMP_SMPPairingRequest_listener(_instance, Handle, IOCapability, OOBDataPresent, Bonding, MITM, SecureConnection, Keypress, MaximumEncryptionKeySize, InitiatorKeyDistribution, ResponderKeyDistribution);
;
}
void (*external_BLEScannerImpl_send_SMP_SMPPairingResponse_listener)(struct BLEScannerImpl_Instance *, uint16_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t)= 0x0;
void (*BLEScannerImpl_send_SMP_SMPPairingResponse_listener)(struct BLEScannerImpl_Instance *, uint16_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t)= 0x0;
void register_external_BLEScannerImpl_send_SMP_SMPPairingResponse_listener(void (*_listener)(struct BLEScannerImpl_Instance *, uint16_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t)){
external_BLEScannerImpl_send_SMP_SMPPairingResponse_listener = _listener;
}
void register_BLEScannerImpl_send_SMP_SMPPairingResponse_listener(void (*_listener)(struct BLEScannerImpl_Instance *, uint16_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t)){
BLEScannerImpl_send_SMP_SMPPairingResponse_listener = _listener;
}
void BLEScannerImpl_send_SMP_SMPPairingResponse(struct BLEScannerImpl_Instance *_instance, uint16_t Handle, uint8_t IOCapability, uint8_t OOBDataPresent, uint8_t Bonding, uint8_t MITM, uint8_t SecureConnection, uint8_t Keypress, uint8_t MaximumEncryptionKeySize, uint8_t InitiatorKeyDistribution, uint8_t ResponderKeyDistribution){
if (BLEScannerImpl_send_SMP_SMPPairingResponse_listener != 0x0) BLEScannerImpl_send_SMP_SMPPairingResponse_listener(_instance, Handle, IOCapability, OOBDataPresent, Bonding, MITM, SecureConnection, Keypress, MaximumEncryptionKeySize, InitiatorKeyDistribution, ResponderKeyDistribution);
if (external_BLEScannerImpl_send_SMP_SMPPairingResponse_listener != 0x0) external_BLEScannerImpl_send_SMP_SMPPairingResponse_listener(_instance, Handle, IOCapability, OOBDataPresent, Bonding, MITM, SecureConnection, Keypress, MaximumEncryptionKeySize, InitiatorKeyDistribution, ResponderKeyDistribution);
;
}
void (*external_BLEScannerImpl_send_SMP_SMPPairingConfirm_listener)(struct BLEScannerImpl_Instance *, uint16_t, ble_random_number_t)= 0x0;
void (*BLEScannerImpl_send_SMP_SMPPairingConfirm_listener)(struct BLEScannerImpl_Instance *, uint16_t, ble_random_number_t)= 0x0;
void register_external_BLEScannerImpl_send_SMP_SMPPairingConfirm_listener(void (*_listener)(struct BLEScannerImpl_Instance *, uint16_t, ble_random_number_t)){
external_BLEScannerImpl_send_SMP_SMPPairingConfirm_listener = _listener;
}
void register_BLEScannerImpl_send_SMP_SMPPairingConfirm_listener(void (*_listener)(struct BLEScannerImpl_Instance *, uint16_t, ble_random_number_t)){
BLEScannerImpl_send_SMP_SMPPairingConfirm_listener = _listener;
}
void BLEScannerImpl_send_SMP_SMPPairingConfirm(struct BLEScannerImpl_Instance *_instance, uint16_t Handle, ble_random_number_t ConfirmValue){
if (BLEScannerImpl_send_SMP_SMPPairingConfirm_listener != 0x0) BLEScannerImpl_send_SMP_SMPPairingConfirm_listener(_instance, Handle, ConfirmValue);
if (external_BLEScannerImpl_send_SMP_SMPPairingConfirm_listener != 0x0) external_BLEScannerImpl_send_SMP_SMPPairingConfirm_listener(_instance, Handle, ConfirmValue);
;
}
void (*external_BLEScannerImpl_send_SMP_SMPPairingRandom_listener)(struct BLEScannerImpl_Instance *, uint16_t, ble_random_number_t)= 0x0;
void (*BLEScannerImpl_send_SMP_SMPPairingRandom_listener)(struct BLEScannerImpl_Instance *, uint16_t, ble_random_number_t)= 0x0;
void register_external_BLEScannerImpl_send_SMP_SMPPairingRandom_listener(void (*_listener)(struct BLEScannerImpl_Instance *, uint16_t, ble_random_number_t)){
external_BLEScannerImpl_send_SMP_SMPPairingRandom_listener = _listener;
}
void register_BLEScannerImpl_send_SMP_SMPPairingRandom_listener(void (*_listener)(struct BLEScannerImpl_Instance *, uint16_t, ble_random_number_t)){
BLEScannerImpl_send_SMP_SMPPairingRandom_listener = _listener;
}
void BLEScannerImpl_send_SMP_SMPPairingRandom(struct BLEScannerImpl_Instance *_instance, uint16_t Handle, ble_random_number_t RandomValue){
if (BLEScannerImpl_send_SMP_SMPPairingRandom_listener != 0x0) BLEScannerImpl_send_SMP_SMPPairingRandom_listener(_instance, Handle, RandomValue);
if (external_BLEScannerImpl_send_SMP_SMPPairingRandom_listener != 0x0) external_BLEScannerImpl_send_SMP_SMPPairingRandom_listener(_instance, Handle, RandomValue);
;
}
void (*external_BLEScannerImpl_send_SMP_SMPPairingFailed_listener)(struct BLEScannerImpl_Instance *, uint16_t, uint8_t)= 0x0;
void (*BLEScannerImpl_send_SMP_SMPPairingFailed_listener)(struct BLEScannerImpl_Instance *, uint16_t, uint8_t)= 0x0;
void register_external_BLEScannerImpl_send_SMP_SMPPairingFailed_listener(void (*_listener)(struct BLEScannerImpl_Instance *, uint16_t, uint8_t)){
external_BLEScannerImpl_send_SMP_SMPPairingFailed_listener = _listener;
}
void register_BLEScannerImpl_send_SMP_SMPPairingFailed_listener(void (*_listener)(struct BLEScannerImpl_Instance *, uint16_t, uint8_t)){
BLEScannerImpl_send_SMP_SMPPairingFailed_listener = _listener;
}
void BLEScannerImpl_send_SMP_SMPPairingFailed(struct BLEScannerImpl_Instance *_instance, uint16_t Handle, uint8_t Reason){
if (BLEScannerImpl_send_SMP_SMPPairingFailed_listener != 0x0) BLEScannerImpl_send_SMP_SMPPairingFailed_listener(_instance, Handle, Reason);
if (external_BLEScannerImpl_send_SMP_SMPPairingFailed_listener != 0x0) external_BLEScannerImpl_send_SMP_SMPPairingFailed_listener(_instance, Handle, Reason);
;
}
void (*external_BLEScannerImpl_send_SMP_SMPPairingPublicKey_listener)(struct BLEScannerImpl_Instance *, uint16_t, smp_public_key_t, smp_public_key_t)= 0x0;
void (*BLEScannerImpl_send_SMP_SMPPairingPublicKey_listener)(struct BLEScannerImpl_Instance *, uint16_t, smp_public_key_t, smp_public_key_t)= 0x0;
void register_external_BLEScannerImpl_send_SMP_SMPPairingPublicKey_listener(void (*_listener)(struct BLEScannerImpl_Instance *, uint16_t, smp_public_key_t, smp_public_key_t)){
external_BLEScannerImpl_send_SMP_SMPPairingPublicKey_listener = _listener;
}
void register_BLEScannerImpl_send_SMP_SMPPairingPublicKey_listener(void (*_listener)(struct BLEScannerImpl_Instance *, uint16_t, smp_public_key_t, smp_public_key_t)){
BLEScannerImpl_send_SMP_SMPPairingPublicKey_listener = _listener;
}
void BLEScannerImpl_send_SMP_SMPPairingPublicKey(struct BLEScannerImpl_Instance *_instance, uint16_t Handle, smp_public_key_t KeyX, smp_public_key_t KeyY){
if (BLEScannerImpl_send_SMP_SMPPairingPublicKey_listener != 0x0) BLEScannerImpl_send_SMP_SMPPairingPublicKey_listener(_instance, Handle, KeyX, KeyY);
if (external_BLEScannerImpl_send_SMP_SMPPairingPublicKey_listener != 0x0) external_BLEScannerImpl_send_SMP_SMPPairingPublicKey_listener(_instance, Handle, KeyX, KeyY);
;
}
void (*external_BLEScannerImpl_send_SMP_SMPPairingDHKeyCheck_listener)(struct BLEScannerImpl_Instance *, uint16_t, ble_random_number_t)= 0x0;
void (*BLEScannerImpl_send_SMP_SMPPairingDHKeyCheck_listener)(struct BLEScannerImpl_Instance *, uint16_t, ble_random_number_t)= 0x0;
void register_external_BLEScannerImpl_send_SMP_SMPPairingDHKeyCheck_listener(void (*_listener)(struct BLEScannerImpl_Instance *, uint16_t, ble_random_number_t)){
external_BLEScannerImpl_send_SMP_SMPPairingDHKeyCheck_listener = _listener;
}
void register_BLEScannerImpl_send_SMP_SMPPairingDHKeyCheck_listener(void (*_listener)(struct BLEScannerImpl_Instance *, uint16_t, ble_random_number_t)){
BLEScannerImpl_send_SMP_SMPPairingDHKeyCheck_listener = _listener;
}
void BLEScannerImpl_send_SMP_SMPPairingDHKeyCheck(struct BLEScannerImpl_Instance *_instance, uint16_t Handle, ble_random_number_t DHKeyCheck){
if (BLEScannerImpl_send_SMP_SMPPairingDHKeyCheck_listener != 0x0) BLEScannerImpl_send_SMP_SMPPairingDHKeyCheck_listener(_instance, Handle, DHKeyCheck);
if (external_BLEScannerImpl_send_SMP_SMPPairingDHKeyCheck_listener != 0x0) external_BLEScannerImpl_send_SMP_SMPPairingDHKeyCheck_listener(_instance, Handle, DHKeyCheck);
;
}
void (*external_BLEScannerImpl_send_SMP_SMPKeypressNotification_listener)(struct BLEScannerImpl_Instance *, uint16_t, uint8_t)= 0x0;
void (*BLEScannerImpl_send_SMP_SMPKeypressNotification_listener)(struct BLEScannerImpl_Instance *, uint16_t, uint8_t)= 0x0;
void register_external_BLEScannerImpl_send_SMP_SMPKeypressNotification_listener(void (*_listener)(struct BLEScannerImpl_Instance *, uint16_t, uint8_t)){
external_BLEScannerImpl_send_SMP_SMPKeypressNotification_listener = _listener;
}
void register_BLEScannerImpl_send_SMP_SMPKeypressNotification_listener(void (*_listener)(struct BLEScannerImpl_Instance *, uint16_t, uint8_t)){
BLEScannerImpl_send_SMP_SMPKeypressNotification_listener = _listener;
}
void BLEScannerImpl_send_SMP_SMPKeypressNotification(struct BLEScannerImpl_Instance *_instance, uint16_t Handle, uint8_t Type){
if (BLEScannerImpl_send_SMP_SMPKeypressNotification_listener != 0x0) BLEScannerImpl_send_SMP_SMPKeypressNotification_listener(_instance, Handle, Type);
if (external_BLEScannerImpl_send_SMP_SMPKeypressNotification_listener != 0x0) external_BLEScannerImpl_send_SMP_SMPKeypressNotification_listener(_instance, Handle, Type);
;
}
void (*external_BLEScannerImpl_send_SMP_SMPEncryptionInformation_listener)(struct BLEScannerImpl_Instance *, uint16_t, ble_random_number_t)= 0x0;
void (*BLEScannerImpl_send_SMP_SMPEncryptionInformation_listener)(struct BLEScannerImpl_Instance *, uint16_t, ble_random_number_t)= 0x0;
void register_external_BLEScannerImpl_send_SMP_SMPEncryptionInformation_listener(void (*_listener)(struct BLEScannerImpl_Instance *, uint16_t, ble_random_number_t)){
external_BLEScannerImpl_send_SMP_SMPEncryptionInformation_listener = _listener;
}
void register_BLEScannerImpl_send_SMP_SMPEncryptionInformation_listener(void (*_listener)(struct BLEScannerImpl_Instance *, uint16_t, ble_random_number_t)){
BLEScannerImpl_send_SMP_SMPEncryptionInformation_listener = _listener;
}
void BLEScannerImpl_send_SMP_SMPEncryptionInformation(struct BLEScannerImpl_Instance *_instance, uint16_t Handle, ble_random_number_t LongTermKey){
if (BLEScannerImpl_send_SMP_SMPEncryptionInformation_listener != 0x0) BLEScannerImpl_send_SMP_SMPEncryptionInformation_listener(_instance, Handle, LongTermKey);
if (external_BLEScannerImpl_send_SMP_SMPEncryptionInformation_listener != 0x0) external_BLEScannerImpl_send_SMP_SMPEncryptionInformation_listener(_instance, Handle, LongTermKey);
;
}
void (*external_BLEScannerImpl_send_SMP_SMPMasterIdentification_listener)(struct BLEScannerImpl_Instance *, uint16_t, uint16_t, ble_random_part_t)= 0x0;
void (*BLEScannerImpl_send_SMP_SMPMasterIdentification_listener)(struct BLEScannerImpl_Instance *, uint16_t, uint16_t, ble_random_part_t)= 0x0;
void register_external_BLEScannerImpl_send_SMP_SMPMasterIdentification_listener(void (*_listener)(struct BLEScannerImpl_Instance *, uint16_t, uint16_t, ble_random_part_t)){
external_BLEScannerImpl_send_SMP_SMPMasterIdentification_listener = _listener;
}
void register_BLEScannerImpl_send_SMP_SMPMasterIdentification_listener(void (*_listener)(struct BLEScannerImpl_Instance *, uint16_t, uint16_t, ble_random_part_t)){
BLEScannerImpl_send_SMP_SMPMasterIdentification_listener = _listener;
}
void BLEScannerImpl_send_SMP_SMPMasterIdentification(struct BLEScannerImpl_Instance *_instance, uint16_t Handle, uint16_t EDIV, ble_random_part_t Rand){
if (BLEScannerImpl_send_SMP_SMPMasterIdentification_listener != 0x0) BLEScannerImpl_send_SMP_SMPMasterIdentification_listener(_instance, Handle, EDIV, Rand);
if (external_BLEScannerImpl_send_SMP_SMPMasterIdentification_listener != 0x0) external_BLEScannerImpl_send_SMP_SMPMasterIdentification_listener(_instance, Handle, EDIV, Rand);
;
}
void (*external_BLEScannerImpl_send_SMP_SMPIdentityInformation_listener)(struct BLEScannerImpl_Instance *, uint16_t, ble_random_number_t)= 0x0;
void (*BLEScannerImpl_send_SMP_SMPIdentityInformation_listener)(struct BLEScannerImpl_Instance *, uint16_t, ble_random_number_t)= 0x0;
void register_external_BLEScannerImpl_send_SMP_SMPIdentityInformation_listener(void (*_listener)(struct BLEScannerImpl_Instance *, uint16_t, ble_random_number_t)){
external_BLEScannerImpl_send_SMP_SMPIdentityInformation_listener = _listener;
}
void register_BLEScannerImpl_send_SMP_SMPIdentityInformation_listener(void (*_listener)(struct BLEScannerImpl_Instance *, uint16_t, ble_random_number_t)){
BLEScannerImpl_send_SMP_SMPIdentityInformation_listener = _listener;
}
void BLEScannerImpl_send_SMP_SMPIdentityInformation(struct BLEScannerImpl_Instance *_instance, uint16_t Handle, ble_random_number_t IdentityResolvingKey){
if (BLEScannerImpl_send_SMP_SMPIdentityInformation_listener != 0x0) BLEScannerImpl_send_SMP_SMPIdentityInformation_listener(_instance, Handle, IdentityResolvingKey);
if (external_BLEScannerImpl_send_SMP_SMPIdentityInformation_listener != 0x0) external_BLEScannerImpl_send_SMP_SMPIdentityInformation_listener(_instance, Handle, IdentityResolvingKey);
;
}
void (*external_BLEScannerImpl_send_SMP_SMPIdentityAddressInformation_listener)(struct BLEScannerImpl_Instance *, uint16_t, uint8_t, bdaddr_t)= 0x0;
void (*BLEScannerImpl_send_SMP_SMPIdentityAddressInformation_listener)(struct BLEScannerImpl_Instance *, uint16_t, uint8_t, bdaddr_t)= 0x0;
void register_external_BLEScannerImpl_send_SMP_SMPIdentityAddressInformation_listener(void (*_listener)(struct BLEScannerImpl_Instance *, uint16_t, uint8_t, bdaddr_t)){
external_BLEScannerImpl_send_SMP_SMPIdentityAddressInformation_listener = _listener;
}
void register_BLEScannerImpl_send_SMP_SMPIdentityAddressInformation_listener(void (*_listener)(struct BLEScannerImpl_Instance *, uint16_t, uint8_t, bdaddr_t)){
BLEScannerImpl_send_SMP_SMPIdentityAddressInformation_listener = _listener;
}
void BLEScannerImpl_send_SMP_SMPIdentityAddressInformation(struct BLEScannerImpl_Instance *_instance, uint16_t Handle, uint8_t AddressType, bdaddr_t Address){
if (BLEScannerImpl_send_SMP_SMPIdentityAddressInformation_listener != 0x0) BLEScannerImpl_send_SMP_SMPIdentityAddressInformation_listener(_instance, Handle, AddressType, Address);
if (external_BLEScannerImpl_send_SMP_SMPIdentityAddressInformation_listener != 0x0) external_BLEScannerImpl_send_SMP_SMPIdentityAddressInformation_listener(_instance, Handle, AddressType, Address);
;
}
void (*external_BLEScannerImpl_send_SMP_SMPSigningInformation_listener)(struct BLEScannerImpl_Instance *, uint16_t, ble_random_number_t)= 0x0;
void (*BLEScannerImpl_send_SMP_SMPSigningInformation_listener)(struct BLEScannerImpl_Instance *, uint16_t, ble_random_number_t)= 0x0;
void register_external_BLEScannerImpl_send_SMP_SMPSigningInformation_listener(void (*_listener)(struct BLEScannerImpl_Instance *, uint16_t, ble_random_number_t)){
external_BLEScannerImpl_send_SMP_SMPSigningInformation_listener = _listener;
}
void register_BLEScannerImpl_send_SMP_SMPSigningInformation_listener(void (*_listener)(struct BLEScannerImpl_Instance *, uint16_t, ble_random_number_t)){
BLEScannerImpl_send_SMP_SMPSigningInformation_listener = _listener;
}
void BLEScannerImpl_send_SMP_SMPSigningInformation(struct BLEScannerImpl_Instance *_instance, uint16_t Handle, ble_random_number_t SignatureKey){
if (BLEScannerImpl_send_SMP_SMPSigningInformation_listener != 0x0) BLEScannerImpl_send_SMP_SMPSigningInformation_listener(_instance, Handle, SignatureKey);
if (external_BLEScannerImpl_send_SMP_SMPSigningInformation_listener != 0x0) external_BLEScannerImpl_send_SMP_SMPSigningInformation_listener(_instance, Handle, SignatureKey);
;
}
void (*external_BLEScannerImpl_send_SMP_SMPSecurityRequest_listener)(struct BLEScannerImpl_Instance *, uint16_t, uint8_t, uint8_t, uint8_t, uint8_t)= 0x0;
void (*BLEScannerImpl_send_SMP_SMPSecurityRequest_listener)(struct BLEScannerImpl_Instance *, uint16_t, uint8_t, uint8_t, uint8_t, uint8_t)= 0x0;
void register_external_BLEScannerImpl_send_SMP_SMPSecurityRequest_listener(void (*_listener)(struct BLEScannerImpl_Instance *, uint16_t, uint8_t, uint8_t, uint8_t, uint8_t)){
external_BLEScannerImpl_send_SMP_SMPSecurityRequest_listener = _listener;
}
void register_BLEScannerImpl_send_SMP_SMPSecurityRequest_listener(void (*_listener)(struct BLEScannerImpl_Instance *, uint16_t, uint8_t, uint8_t, uint8_t, uint8_t)){
BLEScannerImpl_send_SMP_SMPSecurityRequest_listener = _listener;
}
void BLEScannerImpl_send_SMP_SMPSecurityRequest(struct BLEScannerImpl_Instance *_instance, uint16_t Handle, uint8_t Bonding, uint8_t MITM, uint8_t SecureConnection, uint8_t Keypress){
if (BLEScannerImpl_send_SMP_SMPSecurityRequest_listener != 0x0) BLEScannerImpl_send_SMP_SMPSecurityRequest_listener(_instance, Handle, Bonding, MITM, SecureConnection, Keypress);
if (external_BLEScannerImpl_send_SMP_SMPSecurityRequest_listener != 0x0) external_BLEScannerImpl_send_SMP_SMPSecurityRequest_listener(_instance, Handle, Bonding, MITM, SecureConnection, Keypress);
;
}
void (*external_BLEScannerImpl_send_ATT_ATTFindInformationRequest_listener)(struct BLEScannerImpl_Instance *, uint16_t, uint16_t, uint16_t)= 0x0;
void (*BLEScannerImpl_send_ATT_ATTFindInformationRequest_listener)(struct BLEScannerImpl_Instance *, uint16_t, uint16_t, uint16_t)= 0x0;
void register_external_BLEScannerImpl_send_ATT_ATTFindInformationRequest_listener(void (*_listener)(struct BLEScannerImpl_Instance *, uint16_t, uint16_t, uint16_t)){
external_BLEScannerImpl_send_ATT_ATTFindInformationRequest_listener = _listener;
}
void register_BLEScannerImpl_send_ATT_ATTFindInformationRequest_listener(void (*_listener)(struct BLEScannerImpl_Instance *, uint16_t, uint16_t, uint16_t)){
BLEScannerImpl_send_ATT_ATTFindInformationRequest_listener = _listener;
}
void BLEScannerImpl_send_ATT_ATTFindInformationRequest(struct BLEScannerImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t StartingHandle, uint16_t EndingHandle){
if (BLEScannerImpl_send_ATT_ATTFindInformationRequest_listener != 0x0) BLEScannerImpl_send_ATT_ATTFindInformationRequest_listener(_instance, ConnectionHandle, StartingHandle, EndingHandle);
if (external_BLEScannerImpl_send_ATT_ATTFindInformationRequest_listener != 0x0) external_BLEScannerImpl_send_ATT_ATTFindInformationRequest_listener(_instance, ConnectionHandle, StartingHandle, EndingHandle);
;
}
void (*external_BLEScannerImpl_send_ATT_ATTFindInformationResponse_listener)(struct BLEScannerImpl_Instance *, uint16_t, uint8_t, ble_gatt_data_t)= 0x0;
void (*BLEScannerImpl_send_ATT_ATTFindInformationResponse_listener)(struct BLEScannerImpl_Instance *, uint16_t, uint8_t, ble_gatt_data_t)= 0x0;
void register_external_BLEScannerImpl_send_ATT_ATTFindInformationResponse_listener(void (*_listener)(struct BLEScannerImpl_Instance *, uint16_t, uint8_t, ble_gatt_data_t)){
external_BLEScannerImpl_send_ATT_ATTFindInformationResponse_listener = _listener;
}
void register_BLEScannerImpl_send_ATT_ATTFindInformationResponse_listener(void (*_listener)(struct BLEScannerImpl_Instance *, uint16_t, uint8_t, ble_gatt_data_t)){
BLEScannerImpl_send_ATT_ATTFindInformationResponse_listener = _listener;
}
void BLEScannerImpl_send_ATT_ATTFindInformationResponse(struct BLEScannerImpl_Instance *_instance, uint16_t ConnectionHandle, uint8_t Format, ble_gatt_data_t InformationData){
if (BLEScannerImpl_send_ATT_ATTFindInformationResponse_listener != 0x0) BLEScannerImpl_send_ATT_ATTFindInformationResponse_listener(_instance, ConnectionHandle, Format, InformationData);
if (external_BLEScannerImpl_send_ATT_ATTFindInformationResponse_listener != 0x0) external_BLEScannerImpl_send_ATT_ATTFindInformationResponse_listener(_instance, ConnectionHandle, Format, InformationData);
;
}
void (*external_BLEScannerImpl_send_ATT_ATTFindInformationError_listener)(struct BLEScannerImpl_Instance *, uint16_t, uint16_t, uint8_t)= 0x0;
void (*BLEScannerImpl_send_ATT_ATTFindInformationError_listener)(struct BLEScannerImpl_Instance *, uint16_t, uint16_t, uint8_t)= 0x0;
void register_external_BLEScannerImpl_send_ATT_ATTFindInformationError_listener(void (*_listener)(struct BLEScannerImpl_Instance *, uint16_t, uint16_t, uint8_t)){
external_BLEScannerImpl_send_ATT_ATTFindInformationError_listener = _listener;
}
void register_BLEScannerImpl_send_ATT_ATTFindInformationError_listener(void (*_listener)(struct BLEScannerImpl_Instance *, uint16_t, uint16_t, uint8_t)){
BLEScannerImpl_send_ATT_ATTFindInformationError_listener = _listener;
}
void BLEScannerImpl_send_ATT_ATTFindInformationError(struct BLEScannerImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error){
if (BLEScannerImpl_send_ATT_ATTFindInformationError_listener != 0x0) BLEScannerImpl_send_ATT_ATTFindInformationError_listener(_instance, ConnectionHandle, AttributeHandle, Error);
if (external_BLEScannerImpl_send_ATT_ATTFindInformationError_listener != 0x0) external_BLEScannerImpl_send_ATT_ATTFindInformationError_listener(_instance, ConnectionHandle, AttributeHandle, Error);
;
}
void (*external_BLEScannerImpl_send_ATT_ATTReadByTypeRequest_listener)(struct BLEScannerImpl_Instance *, uint16_t, uint16_t, uint16_t, ble_uuid_t)= 0x0;
void (*BLEScannerImpl_send_ATT_ATTReadByTypeRequest_listener)(struct BLEScannerImpl_Instance *, uint16_t, uint16_t, uint16_t, ble_uuid_t)= 0x0;
void register_external_BLEScannerImpl_send_ATT_ATTReadByTypeRequest_listener(void (*_listener)(struct BLEScannerImpl_Instance *, uint16_t, uint16_t, uint16_t, ble_uuid_t)){
external_BLEScannerImpl_send_ATT_ATTReadByTypeRequest_listener = _listener;
}
void register_BLEScannerImpl_send_ATT_ATTReadByTypeRequest_listener(void (*_listener)(struct BLEScannerImpl_Instance *, uint16_t, uint16_t, uint16_t, ble_uuid_t)){
BLEScannerImpl_send_ATT_ATTReadByTypeRequest_listener = _listener;
}
void BLEScannerImpl_send_ATT_ATTReadByTypeRequest(struct BLEScannerImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t StartingHandle, uint16_t EndingHandle, ble_uuid_t AttributeType){
if (BLEScannerImpl_send_ATT_ATTReadByTypeRequest_listener != 0x0) BLEScannerImpl_send_ATT_ATTReadByTypeRequest_listener(_instance, ConnectionHandle, StartingHandle, EndingHandle, AttributeType);
if (external_BLEScannerImpl_send_ATT_ATTReadByTypeRequest_listener != 0x0) external_BLEScannerImpl_send_ATT_ATTReadByTypeRequest_listener(_instance, ConnectionHandle, StartingHandle, EndingHandle, AttributeType);
;
}
void (*external_BLEScannerImpl_send_ATT_ATTReadByTypeResponse_listener)(struct BLEScannerImpl_Instance *, uint16_t, uint8_t, ble_gatt_data_t)= 0x0;
void (*BLEScannerImpl_send_ATT_ATTReadByTypeResponse_listener)(struct BLEScannerImpl_Instance *, uint16_t, uint8_t, ble_gatt_data_t)= 0x0;
void register_external_BLEScannerImpl_send_ATT_ATTReadByTypeResponse_listener(void (*_listener)(struct BLEScannerImpl_Instance *, uint16_t, uint8_t, ble_gatt_data_t)){
external_BLEScannerImpl_send_ATT_ATTReadByTypeResponse_listener = _listener;
}
void register_BLEScannerImpl_send_ATT_ATTReadByTypeResponse_listener(void (*_listener)(struct BLEScannerImpl_Instance *, uint16_t, uint8_t, ble_gatt_data_t)){
BLEScannerImpl_send_ATT_ATTReadByTypeResponse_listener = _listener;
}
void BLEScannerImpl_send_ATT_ATTReadByTypeResponse(struct BLEScannerImpl_Instance *_instance, uint16_t ConnectionHandle, uint8_t Length, ble_gatt_data_t AttributeDataList){
if (BLEScannerImpl_send_ATT_ATTReadByTypeResponse_listener != 0x0) BLEScannerImpl_send_ATT_ATTReadByTypeResponse_listener(_instance, ConnectionHandle, Length, AttributeDataList);
if (external_BLEScannerImpl_send_ATT_ATTReadByTypeResponse_listener != 0x0) external_BLEScannerImpl_send_ATT_ATTReadByTypeResponse_listener(_instance, ConnectionHandle, Length, AttributeDataList);
;
}
void (*external_BLEScannerImpl_send_ATT_ATTReadByTypeError_listener)(struct BLEScannerImpl_Instance *, uint16_t, uint16_t, uint8_t)= 0x0;
void (*BLEScannerImpl_send_ATT_ATTReadByTypeError_listener)(struct BLEScannerImpl_Instance *, uint16_t, uint16_t, uint8_t)= 0x0;
void register_external_BLEScannerImpl_send_ATT_ATTReadByTypeError_listener(void (*_listener)(struct BLEScannerImpl_Instance *, uint16_t, uint16_t, uint8_t)){
external_BLEScannerImpl_send_ATT_ATTReadByTypeError_listener = _listener;
}
void register_BLEScannerImpl_send_ATT_ATTReadByTypeError_listener(void (*_listener)(struct BLEScannerImpl_Instance *, uint16_t, uint16_t, uint8_t)){
BLEScannerImpl_send_ATT_ATTReadByTypeError_listener = _listener;
}
void BLEScannerImpl_send_ATT_ATTReadByTypeError(struct BLEScannerImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error){
if (BLEScannerImpl_send_ATT_ATTReadByTypeError_listener != 0x0) BLEScannerImpl_send_ATT_ATTReadByTypeError_listener(_instance, ConnectionHandle, AttributeHandle, Error);
if (external_BLEScannerImpl_send_ATT_ATTReadByTypeError_listener != 0x0) external_BLEScannerImpl_send_ATT_ATTReadByTypeError_listener(_instance, ConnectionHandle, AttributeHandle, Error);
;
}
void (*external_BLEScannerImpl_send_ATT_ATTReadRequest_listener)(struct BLEScannerImpl_Instance *, uint16_t, uint16_t)= 0x0;
void (*BLEScannerImpl_send_ATT_ATTReadRequest_listener)(struct BLEScannerImpl_Instance *, uint16_t, uint16_t)= 0x0;
void register_external_BLEScannerImpl_send_ATT_ATTReadRequest_listener(void (*_listener)(struct BLEScannerImpl_Instance *, uint16_t, uint16_t)){
external_BLEScannerImpl_send_ATT_ATTReadRequest_listener = _listener;
}
void register_BLEScannerImpl_send_ATT_ATTReadRequest_listener(void (*_listener)(struct BLEScannerImpl_Instance *, uint16_t, uint16_t)){
BLEScannerImpl_send_ATT_ATTReadRequest_listener = _listener;
}
void BLEScannerImpl_send_ATT_ATTReadRequest(struct BLEScannerImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle){
if (BLEScannerImpl_send_ATT_ATTReadRequest_listener != 0x0) BLEScannerImpl_send_ATT_ATTReadRequest_listener(_instance, ConnectionHandle, AttributeHandle);
if (external_BLEScannerImpl_send_ATT_ATTReadRequest_listener != 0x0) external_BLEScannerImpl_send_ATT_ATTReadRequest_listener(_instance, ConnectionHandle, AttributeHandle);
;
}
void (*external_BLEScannerImpl_send_ATT_ATTReadResponse_listener)(struct BLEScannerImpl_Instance *, uint16_t, ble_gatt_data_t)= 0x0;
void (*BLEScannerImpl_send_ATT_ATTReadResponse_listener)(struct BLEScannerImpl_Instance *, uint16_t, ble_gatt_data_t)= 0x0;
void register_external_BLEScannerImpl_send_ATT_ATTReadResponse_listener(void (*_listener)(struct BLEScannerImpl_Instance *, uint16_t, ble_gatt_data_t)){
external_BLEScannerImpl_send_ATT_ATTReadResponse_listener = _listener;
}
void register_BLEScannerImpl_send_ATT_ATTReadResponse_listener(void (*_listener)(struct BLEScannerImpl_Instance *, uint16_t, ble_gatt_data_t)){
BLEScannerImpl_send_ATT_ATTReadResponse_listener = _listener;
}
void BLEScannerImpl_send_ATT_ATTReadResponse(struct BLEScannerImpl_Instance *_instance, uint16_t ConnectionHandle, ble_gatt_data_t AttributeValue){
if (BLEScannerImpl_send_ATT_ATTReadResponse_listener != 0x0) BLEScannerImpl_send_ATT_ATTReadResponse_listener(_instance, ConnectionHandle, AttributeValue);
if (external_BLEScannerImpl_send_ATT_ATTReadResponse_listener != 0x0) external_BLEScannerImpl_send_ATT_ATTReadResponse_listener(_instance, ConnectionHandle, AttributeValue);
;
}
void (*external_BLEScannerImpl_send_ATT_ATTReadError_listener)(struct BLEScannerImpl_Instance *, uint16_t, uint16_t, uint8_t)= 0x0;
void (*BLEScannerImpl_send_ATT_ATTReadError_listener)(struct BLEScannerImpl_Instance *, uint16_t, uint16_t, uint8_t)= 0x0;
void register_external_BLEScannerImpl_send_ATT_ATTReadError_listener(void (*_listener)(struct BLEScannerImpl_Instance *, uint16_t, uint16_t, uint8_t)){
external_BLEScannerImpl_send_ATT_ATTReadError_listener = _listener;
}
void register_BLEScannerImpl_send_ATT_ATTReadError_listener(void (*_listener)(struct BLEScannerImpl_Instance *, uint16_t, uint16_t, uint8_t)){
BLEScannerImpl_send_ATT_ATTReadError_listener = _listener;
}
void BLEScannerImpl_send_ATT_ATTReadError(struct BLEScannerImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error){
if (BLEScannerImpl_send_ATT_ATTReadError_listener != 0x0) BLEScannerImpl_send_ATT_ATTReadError_listener(_instance, ConnectionHandle, AttributeHandle, Error);
if (external_BLEScannerImpl_send_ATT_ATTReadError_listener != 0x0) external_BLEScannerImpl_send_ATT_ATTReadError_listener(_instance, ConnectionHandle, AttributeHandle, Error);
;
}
void (*external_BLEScannerImpl_send_ATT_ATTReadByGroupTypeRequest_listener)(struct BLEScannerImpl_Instance *, uint16_t, uint16_t, uint16_t, ble_uuid_t)= 0x0;
void (*BLEScannerImpl_send_ATT_ATTReadByGroupTypeRequest_listener)(struct BLEScannerImpl_Instance *, uint16_t, uint16_t, uint16_t, ble_uuid_t)= 0x0;
void register_external_BLEScannerImpl_send_ATT_ATTReadByGroupTypeRequest_listener(void (*_listener)(struct BLEScannerImpl_Instance *, uint16_t, uint16_t, uint16_t, ble_uuid_t)){
external_BLEScannerImpl_send_ATT_ATTReadByGroupTypeRequest_listener = _listener;
}
void register_BLEScannerImpl_send_ATT_ATTReadByGroupTypeRequest_listener(void (*_listener)(struct BLEScannerImpl_Instance *, uint16_t, uint16_t, uint16_t, ble_uuid_t)){
BLEScannerImpl_send_ATT_ATTReadByGroupTypeRequest_listener = _listener;
}
void BLEScannerImpl_send_ATT_ATTReadByGroupTypeRequest(struct BLEScannerImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t StartingHandle, uint16_t EndingHandle, ble_uuid_t AttributeGroupType){
if (BLEScannerImpl_send_ATT_ATTReadByGroupTypeRequest_listener != 0x0) BLEScannerImpl_send_ATT_ATTReadByGroupTypeRequest_listener(_instance, ConnectionHandle, StartingHandle, EndingHandle, AttributeGroupType);
if (external_BLEScannerImpl_send_ATT_ATTReadByGroupTypeRequest_listener != 0x0) external_BLEScannerImpl_send_ATT_ATTReadByGroupTypeRequest_listener(_instance, ConnectionHandle, StartingHandle, EndingHandle, AttributeGroupType);
;
}
void (*external_BLEScannerImpl_send_ATT_ATTReadByGroupTypeResponse_listener)(struct BLEScannerImpl_Instance *, uint16_t, uint8_t, ble_gatt_data_t)= 0x0;
void (*BLEScannerImpl_send_ATT_ATTReadByGroupTypeResponse_listener)(struct BLEScannerImpl_Instance *, uint16_t, uint8_t, ble_gatt_data_t)= 0x0;
void register_external_BLEScannerImpl_send_ATT_ATTReadByGroupTypeResponse_listener(void (*_listener)(struct BLEScannerImpl_Instance *, uint16_t, uint8_t, ble_gatt_data_t)){
external_BLEScannerImpl_send_ATT_ATTReadByGroupTypeResponse_listener = _listener;
}
void register_BLEScannerImpl_send_ATT_ATTReadByGroupTypeResponse_listener(void (*_listener)(struct BLEScannerImpl_Instance *, uint16_t, uint8_t, ble_gatt_data_t)){
BLEScannerImpl_send_ATT_ATTReadByGroupTypeResponse_listener = _listener;
}
void BLEScannerImpl_send_ATT_ATTReadByGroupTypeResponse(struct BLEScannerImpl_Instance *_instance, uint16_t ConnectionHandle, uint8_t Length, ble_gatt_data_t AttributeDataList){
if (BLEScannerImpl_send_ATT_ATTReadByGroupTypeResponse_listener != 0x0) BLEScannerImpl_send_ATT_ATTReadByGroupTypeResponse_listener(_instance, ConnectionHandle, Length, AttributeDataList);
if (external_BLEScannerImpl_send_ATT_ATTReadByGroupTypeResponse_listener != 0x0) external_BLEScannerImpl_send_ATT_ATTReadByGroupTypeResponse_listener(_instance, ConnectionHandle, Length, AttributeDataList);
;
}
void (*external_BLEScannerImpl_send_ATT_ATTReadByGroupTypeError_listener)(struct BLEScannerImpl_Instance *, uint16_t, uint16_t, uint8_t)= 0x0;
void (*BLEScannerImpl_send_ATT_ATTReadByGroupTypeError_listener)(struct BLEScannerImpl_Instance *, uint16_t, uint16_t, uint8_t)= 0x0;
void register_external_BLEScannerImpl_send_ATT_ATTReadByGroupTypeError_listener(void (*_listener)(struct BLEScannerImpl_Instance *, uint16_t, uint16_t, uint8_t)){
external_BLEScannerImpl_send_ATT_ATTReadByGroupTypeError_listener = _listener;
}
void register_BLEScannerImpl_send_ATT_ATTReadByGroupTypeError_listener(void (*_listener)(struct BLEScannerImpl_Instance *, uint16_t, uint16_t, uint8_t)){
BLEScannerImpl_send_ATT_ATTReadByGroupTypeError_listener = _listener;
}
void BLEScannerImpl_send_ATT_ATTReadByGroupTypeError(struct BLEScannerImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error){
if (BLEScannerImpl_send_ATT_ATTReadByGroupTypeError_listener != 0x0) BLEScannerImpl_send_ATT_ATTReadByGroupTypeError_listener(_instance, ConnectionHandle, AttributeHandle, Error);
if (external_BLEScannerImpl_send_ATT_ATTReadByGroupTypeError_listener != 0x0) external_BLEScannerImpl_send_ATT_ATTReadByGroupTypeError_listener(_instance, ConnectionHandle, AttributeHandle, Error);
;
}
void (*external_BLEScannerImpl_send_ATT_ATTWriteRequest_listener)(struct BLEScannerImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t)= 0x0;
void (*BLEScannerImpl_send_ATT_ATTWriteRequest_listener)(struct BLEScannerImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t)= 0x0;
void register_external_BLEScannerImpl_send_ATT_ATTWriteRequest_listener(void (*_listener)(struct BLEScannerImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t)){
external_BLEScannerImpl_send_ATT_ATTWriteRequest_listener = _listener;
}
void register_BLEScannerImpl_send_ATT_ATTWriteRequest_listener(void (*_listener)(struct BLEScannerImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t)){
BLEScannerImpl_send_ATT_ATTWriteRequest_listener = _listener;
}
void BLEScannerImpl_send_ATT_ATTWriteRequest(struct BLEScannerImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, ble_gatt_data_t AttributeValue){
if (BLEScannerImpl_send_ATT_ATTWriteRequest_listener != 0x0) BLEScannerImpl_send_ATT_ATTWriteRequest_listener(_instance, ConnectionHandle, AttributeHandle, AttributeValue);
if (external_BLEScannerImpl_send_ATT_ATTWriteRequest_listener != 0x0) external_BLEScannerImpl_send_ATT_ATTWriteRequest_listener(_instance, ConnectionHandle, AttributeHandle, AttributeValue);
;
}
void (*external_BLEScannerImpl_send_ATT_ATTWriteResponse_listener)(struct BLEScannerImpl_Instance *, uint16_t)= 0x0;
void (*BLEScannerImpl_send_ATT_ATTWriteResponse_listener)(struct BLEScannerImpl_Instance *, uint16_t)= 0x0;
void register_external_BLEScannerImpl_send_ATT_ATTWriteResponse_listener(void (*_listener)(struct BLEScannerImpl_Instance *, uint16_t)){
external_BLEScannerImpl_send_ATT_ATTWriteResponse_listener = _listener;
}
void register_BLEScannerImpl_send_ATT_ATTWriteResponse_listener(void (*_listener)(struct BLEScannerImpl_Instance *, uint16_t)){
BLEScannerImpl_send_ATT_ATTWriteResponse_listener = _listener;
}
void BLEScannerImpl_send_ATT_ATTWriteResponse(struct BLEScannerImpl_Instance *_instance, uint16_t ConnectionHandle){
if (BLEScannerImpl_send_ATT_ATTWriteResponse_listener != 0x0) BLEScannerImpl_send_ATT_ATTWriteResponse_listener(_instance, ConnectionHandle);
if (external_BLEScannerImpl_send_ATT_ATTWriteResponse_listener != 0x0) external_BLEScannerImpl_send_ATT_ATTWriteResponse_listener(_instance, ConnectionHandle);
;
}
void (*external_BLEScannerImpl_send_ATT_ATTWriteError_listener)(struct BLEScannerImpl_Instance *, uint16_t, uint16_t, uint8_t)= 0x0;
void (*BLEScannerImpl_send_ATT_ATTWriteError_listener)(struct BLEScannerImpl_Instance *, uint16_t, uint16_t, uint8_t)= 0x0;
void register_external_BLEScannerImpl_send_ATT_ATTWriteError_listener(void (*_listener)(struct BLEScannerImpl_Instance *, uint16_t, uint16_t, uint8_t)){
external_BLEScannerImpl_send_ATT_ATTWriteError_listener = _listener;
}
void register_BLEScannerImpl_send_ATT_ATTWriteError_listener(void (*_listener)(struct BLEScannerImpl_Instance *, uint16_t, uint16_t, uint8_t)){
BLEScannerImpl_send_ATT_ATTWriteError_listener = _listener;
}
void BLEScannerImpl_send_ATT_ATTWriteError(struct BLEScannerImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error){
if (BLEScannerImpl_send_ATT_ATTWriteError_listener != 0x0) BLEScannerImpl_send_ATT_ATTWriteError_listener(_instance, ConnectionHandle, AttributeHandle, Error);
if (external_BLEScannerImpl_send_ATT_ATTWriteError_listener != 0x0) external_BLEScannerImpl_send_ATT_ATTWriteError_listener(_instance, ConnectionHandle, AttributeHandle, Error);
;
}
void (*external_BLEScannerImpl_send_ATT_ATTWriteCommand_listener)(struct BLEScannerImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t)= 0x0;
void (*BLEScannerImpl_send_ATT_ATTWriteCommand_listener)(struct BLEScannerImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t)= 0x0;
void register_external_BLEScannerImpl_send_ATT_ATTWriteCommand_listener(void (*_listener)(struct BLEScannerImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t)){
external_BLEScannerImpl_send_ATT_ATTWriteCommand_listener = _listener;
}
void register_BLEScannerImpl_send_ATT_ATTWriteCommand_listener(void (*_listener)(struct BLEScannerImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t)){
BLEScannerImpl_send_ATT_ATTWriteCommand_listener = _listener;
}
void BLEScannerImpl_send_ATT_ATTWriteCommand(struct BLEScannerImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, ble_gatt_data_t AttributeValue){
if (BLEScannerImpl_send_ATT_ATTWriteCommand_listener != 0x0) BLEScannerImpl_send_ATT_ATTWriteCommand_listener(_instance, ConnectionHandle, AttributeHandle, AttributeValue);
if (external_BLEScannerImpl_send_ATT_ATTWriteCommand_listener != 0x0) external_BLEScannerImpl_send_ATT_ATTWriteCommand_listener(_instance, ConnectionHandle, AttributeHandle, AttributeValue);
;
}
void (*external_BLEScannerImpl_send_ATT_ATTHandleValueNotification_listener)(struct BLEScannerImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t)= 0x0;
void (*BLEScannerImpl_send_ATT_ATTHandleValueNotification_listener)(struct BLEScannerImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t)= 0x0;
void register_external_BLEScannerImpl_send_ATT_ATTHandleValueNotification_listener(void (*_listener)(struct BLEScannerImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t)){
external_BLEScannerImpl_send_ATT_ATTHandleValueNotification_listener = _listener;
}
void register_BLEScannerImpl_send_ATT_ATTHandleValueNotification_listener(void (*_listener)(struct BLEScannerImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t)){
BLEScannerImpl_send_ATT_ATTHandleValueNotification_listener = _listener;
}
void BLEScannerImpl_send_ATT_ATTHandleValueNotification(struct BLEScannerImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, ble_gatt_data_t AttributeValue){
if (BLEScannerImpl_send_ATT_ATTHandleValueNotification_listener != 0x0) BLEScannerImpl_send_ATT_ATTHandleValueNotification_listener(_instance, ConnectionHandle, AttributeHandle, AttributeValue);
if (external_BLEScannerImpl_send_ATT_ATTHandleValueNotification_listener != 0x0) external_BLEScannerImpl_send_ATT_ATTHandleValueNotification_listener(_instance, ConnectionHandle, AttributeHandle, AttributeValue);
;
}
void (*external_BLEScannerImpl_send_ATT_ATTHandleValueIndication_listener)(struct BLEScannerImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t)= 0x0;
void (*BLEScannerImpl_send_ATT_ATTHandleValueIndication_listener)(struct BLEScannerImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t)= 0x0;
void register_external_BLEScannerImpl_send_ATT_ATTHandleValueIndication_listener(void (*_listener)(struct BLEScannerImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t)){
external_BLEScannerImpl_send_ATT_ATTHandleValueIndication_listener = _listener;
}
void register_BLEScannerImpl_send_ATT_ATTHandleValueIndication_listener(void (*_listener)(struct BLEScannerImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t)){
BLEScannerImpl_send_ATT_ATTHandleValueIndication_listener = _listener;
}
void BLEScannerImpl_send_ATT_ATTHandleValueIndication(struct BLEScannerImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, ble_gatt_data_t AttributeValue){
if (BLEScannerImpl_send_ATT_ATTHandleValueIndication_listener != 0x0) BLEScannerImpl_send_ATT_ATTHandleValueIndication_listener(_instance, ConnectionHandle, AttributeHandle, AttributeValue);
if (external_BLEScannerImpl_send_ATT_ATTHandleValueIndication_listener != 0x0) external_BLEScannerImpl_send_ATT_ATTHandleValueIndication_listener(_instance, ConnectionHandle, AttributeHandle, AttributeValue);
;
}
void (*external_BLEScannerImpl_send_ATT_ATTHandleValueConfirmation_listener)(struct BLEScannerImpl_Instance *, uint16_t)= 0x0;
void (*BLEScannerImpl_send_ATT_ATTHandleValueConfirmation_listener)(struct BLEScannerImpl_Instance *, uint16_t)= 0x0;
void register_external_BLEScannerImpl_send_ATT_ATTHandleValueConfirmation_listener(void (*_listener)(struct BLEScannerImpl_Instance *, uint16_t)){
external_BLEScannerImpl_send_ATT_ATTHandleValueConfirmation_listener = _listener;
}
void register_BLEScannerImpl_send_ATT_ATTHandleValueConfirmation_listener(void (*_listener)(struct BLEScannerImpl_Instance *, uint16_t)){
BLEScannerImpl_send_ATT_ATTHandleValueConfirmation_listener = _listener;
}
void BLEScannerImpl_send_ATT_ATTHandleValueConfirmation(struct BLEScannerImpl_Instance *_instance, uint16_t ConnectionHandle){
if (BLEScannerImpl_send_ATT_ATTHandleValueConfirmation_listener != 0x0) BLEScannerImpl_send_ATT_ATTHandleValueConfirmation_listener(_instance, ConnectionHandle);
if (external_BLEScannerImpl_send_ATT_ATTHandleValueConfirmation_listener != 0x0) external_BLEScannerImpl_send_ATT_ATTHandleValueConfirmation_listener(_instance, ConnectionHandle);
;
}



