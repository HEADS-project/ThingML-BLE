/*****************************************************
 *      THIS IS A GENERATED FILE. DO NOT EDIT.
 *        Implementation for Thing BLEConnecterImpl
 *  Generated from ThingML (http://www.thingml.org)
 *****************************************************/

#include "BLEConnecterImpl.h"

/*****************************************************************************
 * Implementation for type : BLEConnecterImpl
 *****************************************************************************/

// Declaration of prototypes:
//Prototypes: State Machine
void BLEConnecterImpl_States_OnExit(int state, struct BLEConnecterImpl_Instance *_instance);
//Prototypes: Message Sending
void BLEConnecterImpl_send_Connecter_Connected(struct BLEConnecterImpl_Instance *_instance, uint16_t Handle, uint8_t AddressType, bdaddr_t Address);
void BLEConnecterImpl_send_Connecter_Stopped(struct BLEConnecterImpl_Instance *_instance);
void BLEConnecterImpl_send_Connecter_Failure(struct BLEConnecterImpl_Instance *_instance);
void BLEConnecterImpl_send_Socket_Open(struct BLEConnecterImpl_Instance *_instance);
void BLEConnecterImpl_send_Socket_Close(struct BLEConnecterImpl_Instance *_instance);
void BLEConnecterImpl_send_HCICommands_Reset(struct BLEConnecterImpl_Instance *_instance);
void BLEConnecterImpl_send_HCICommands_SetEventMask(struct BLEConnecterImpl_Instance *_instance, set_event_mask_cp Mask);
void BLEConnecterImpl_send_HCICommands_SetEventMaskAll(struct BLEConnecterImpl_Instance *_instance);
void BLEConnecterImpl_send_HCICommands_SetLocalName(struct BLEConnecterImpl_Instance *_instance, change_local_name_cp Name);
void BLEConnecterImpl_send_HCICommands_Disconnect(struct BLEConnecterImpl_Instance *_instance, uint16_t ConnectionHandle, uint8_t Reason);
void BLEConnecterImpl_send_HCICommands_SetLEEventMask(struct BLEConnecterImpl_Instance *_instance, set_event_mask_cp Mask);
void BLEConnecterImpl_send_HCICommands_SetLEEventMaskAll(struct BLEConnecterImpl_Instance *_instance);
void BLEConnecterImpl_send_HCICommands_SetLEAdvertisementParameters(struct BLEConnecterImpl_Instance *_instance, uint16_t MinInterval, uint16_t MaxInterval, uint8_t Type, uint8_t OwnAddressType, uint8_t PeerAddressType, bdaddr_t PeerAddress, uint8_t Channel, uint8_t FilterPolicy);
void BLEConnecterImpl_send_HCICommands_SetLEAdvertiseEnable(struct BLEConnecterImpl_Instance *_instance, uint8_t Enable);
void BLEConnecterImpl_send_HCICommands_SetLEAdvertisingData(struct BLEConnecterImpl_Instance *_instance, uint8_t Length, ble_adv_data_t Data);
void BLEConnecterImpl_send_HCICommands_SetLEScanResponseData(struct BLEConnecterImpl_Instance *_instance, uint8_t Length, ble_adv_data_t Data);
void BLEConnecterImpl_send_HCICommands_SetLEScanParameters(struct BLEConnecterImpl_Instance *_instance, uint8_t Type, uint16_t Interval, uint16_t Window, uint8_t OwnAddressType, uint8_t FilterPolicy);
void BLEConnecterImpl_send_HCICommands_SetLEScanEnable(struct BLEConnecterImpl_Instance *_instance, uint8_t Enable, uint8_t FilterDuplicates);
void BLEConnecterImpl_send_HCICommands_LECreateConnection(struct BLEConnecterImpl_Instance *_instance, uint16_t Interval, uint16_t Window, uint8_t FilterPolicy, uint8_t PeerAddressType, bdaddr_t PeerAddress, uint8_t OwnAddressType, uint16_t ConnIntervalMin, uint16_t ConnIntervalMax, uint16_t ConnLatency, uint16_t SupervisionTimeout, uint16_t CELengthMin, uint16_t CELengthMax);
void BLEConnecterImpl_send_HCICommands_LECreateConnectionCancel(struct BLEConnecterImpl_Instance *_instance);
void BLEConnecterImpl_send_HCICommands_LERand(struct BLEConnecterImpl_Instance *_instance);
void BLEConnecterImpl_send_HCICommands_LEEncrypt(struct BLEConnecterImpl_Instance *_instance, ble_random_number_t Key, ble_random_number_t Plaintext);
void BLEConnecterImpl_send_HCICommands_LEStartEncryption(struct BLEConnecterImpl_Instance *_instance, uint16_t ConnectionHandle, ble_random_part_t Random, uint16_t EDIV, ble_random_number_t LTK);
void BLEConnecterImpl_send_SMP_SMPPairingRequest(struct BLEConnecterImpl_Instance *_instance, uint16_t Handle, uint8_t IOCapability, uint8_t OOBDataPresent, uint8_t Bonding, uint8_t MITM, uint8_t SecureConnection, uint8_t Keypress, uint8_t MaximumEncryptionKeySize, uint8_t InitiatorKeyDistribution, uint8_t ResponderKeyDistribution);
void BLEConnecterImpl_send_SMP_SMPPairingResponse(struct BLEConnecterImpl_Instance *_instance, uint16_t Handle, uint8_t IOCapability, uint8_t OOBDataPresent, uint8_t Bonding, uint8_t MITM, uint8_t SecureConnection, uint8_t Keypress, uint8_t MaximumEncryptionKeySize, uint8_t InitiatorKeyDistribution, uint8_t ResponderKeyDistribution);
void BLEConnecterImpl_send_SMP_SMPPairingConfirm(struct BLEConnecterImpl_Instance *_instance, uint16_t Handle, ble_random_number_t ConfirmValue);
void BLEConnecterImpl_send_SMP_SMPPairingRandom(struct BLEConnecterImpl_Instance *_instance, uint16_t Handle, ble_random_number_t RandomValue);
void BLEConnecterImpl_send_SMP_SMPPairingFailed(struct BLEConnecterImpl_Instance *_instance, uint16_t Handle, uint8_t Reason);
void BLEConnecterImpl_send_SMP_SMPPairingPublicKey(struct BLEConnecterImpl_Instance *_instance, uint16_t Handle, smp_public_key_t KeyX, smp_public_key_t KeyY);
void BLEConnecterImpl_send_SMP_SMPPairingDHKeyCheck(struct BLEConnecterImpl_Instance *_instance, uint16_t Handle, ble_random_number_t DHKeyCheck);
void BLEConnecterImpl_send_SMP_SMPKeypressNotification(struct BLEConnecterImpl_Instance *_instance, uint16_t Handle, uint8_t Type);
void BLEConnecterImpl_send_SMP_SMPEncryptionInformation(struct BLEConnecterImpl_Instance *_instance, uint16_t Handle, ble_random_number_t LongTermKey);
void BLEConnecterImpl_send_SMP_SMPMasterIdentification(struct BLEConnecterImpl_Instance *_instance, uint16_t Handle, uint16_t EDIV, ble_random_part_t Rand);
void BLEConnecterImpl_send_SMP_SMPIdentityInformation(struct BLEConnecterImpl_Instance *_instance, uint16_t Handle, ble_random_number_t IdentityResolvingKey);
void BLEConnecterImpl_send_SMP_SMPIdentityAddressInformation(struct BLEConnecterImpl_Instance *_instance, uint16_t Handle, uint8_t AddressType, bdaddr_t Address);
void BLEConnecterImpl_send_SMP_SMPSigningInformation(struct BLEConnecterImpl_Instance *_instance, uint16_t Handle, ble_random_number_t SignatureKey);
void BLEConnecterImpl_send_SMP_SMPSecurityRequest(struct BLEConnecterImpl_Instance *_instance, uint16_t Handle, uint8_t Bonding, uint8_t MITM, uint8_t SecureConnection, uint8_t Keypress);
void BLEConnecterImpl_send_ATT_ATTFindInformationRequest(struct BLEConnecterImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t StartingHandle, uint16_t EndingHandle);
void BLEConnecterImpl_send_ATT_ATTFindInformationResponse(struct BLEConnecterImpl_Instance *_instance, uint16_t ConnectionHandle, uint8_t Format, ble_gatt_data_t InformationData);
void BLEConnecterImpl_send_ATT_ATTFindInformationError(struct BLEConnecterImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error);
void BLEConnecterImpl_send_ATT_ATTReadByTypeRequest(struct BLEConnecterImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t StartingHandle, uint16_t EndingHandle, ble_uuid_t AttributeType);
void BLEConnecterImpl_send_ATT_ATTReadByTypeResponse(struct BLEConnecterImpl_Instance *_instance, uint16_t ConnectionHandle, uint8_t Length, ble_gatt_data_t AttributeDataList);
void BLEConnecterImpl_send_ATT_ATTReadByTypeError(struct BLEConnecterImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error);
void BLEConnecterImpl_send_ATT_ATTReadRequest(struct BLEConnecterImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle);
void BLEConnecterImpl_send_ATT_ATTReadResponse(struct BLEConnecterImpl_Instance *_instance, uint16_t ConnectionHandle, ble_gatt_data_t AttributeValue);
void BLEConnecterImpl_send_ATT_ATTReadError(struct BLEConnecterImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error);
void BLEConnecterImpl_send_ATT_ATTReadByGroupTypeRequest(struct BLEConnecterImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t StartingHandle, uint16_t EndingHandle, ble_uuid_t AttributeGroupType);
void BLEConnecterImpl_send_ATT_ATTReadByGroupTypeResponse(struct BLEConnecterImpl_Instance *_instance, uint16_t ConnectionHandle, uint8_t Length, ble_gatt_data_t AttributeDataList);
void BLEConnecterImpl_send_ATT_ATTReadByGroupTypeError(struct BLEConnecterImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error);
void BLEConnecterImpl_send_ATT_ATTWriteRequest(struct BLEConnecterImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, ble_gatt_data_t AttributeValue);
void BLEConnecterImpl_send_ATT_ATTWriteResponse(struct BLEConnecterImpl_Instance *_instance, uint16_t ConnectionHandle);
void BLEConnecterImpl_send_ATT_ATTWriteError(struct BLEConnecterImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error);
void BLEConnecterImpl_send_ATT_ATTWriteCommand(struct BLEConnecterImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, ble_gatt_data_t AttributeValue);
void BLEConnecterImpl_send_ATT_ATTHandleValueNotification(struct BLEConnecterImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, ble_gatt_data_t AttributeValue);
void BLEConnecterImpl_send_ATT_ATTHandleValueIndication(struct BLEConnecterImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, ble_gatt_data_t AttributeValue);
void BLEConnecterImpl_send_ATT_ATTHandleValueConfirmation(struct BLEConnecterImpl_Instance *_instance, uint16_t ConnectionHandle);
//Prototypes: Function
ble_uuid_t f_BLEConnecterImpl_ReadUUID(struct BLEConnecterImpl_Instance *_instance, uint16_t Length, uint8_t * Data);
ble_uuid_t f_BLEConnecterImpl_MakeUUID(struct BLEConnecterImpl_Instance *_instance, const char * Text);
void f_BLEConnecterImpl_PrintUUID(struct BLEConnecterImpl_Instance *_instance, ble_uuid_t ID);
// Declaration of functions:
// Definition of function ReadUUID
ble_uuid_t f_BLEConnecterImpl_ReadUUID(struct BLEConnecterImpl_Instance *_instance, uint16_t Length, uint8_t * Data) {
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
ble_uuid_t f_BLEConnecterImpl_MakeUUID(struct BLEConnecterImpl_Instance *_instance, const char * Text) {
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
void f_BLEConnecterImpl_PrintUUID(struct BLEConnecterImpl_Instance *_instance, ble_uuid_t ID) {

      uint8_t *v = &ID;
      printf("%2.2X%2.2X%2.2X%2.2X-",v[15],v[14],v[13],v[12]);
      printf("%2.2X%2.2X-",v[11],v[10]);
      printf("%2.2X%2.2X-",v[9],v[8]);
      printf("%2.2X%2.2X-",v[7],v[6]);
      printf("%2.2X%2.2X%2.2X%2.2X%2.2X%2.2X\n",v[5],v[4],v[3],v[2],v[1],v[0]);
    
}

// On Entry Actions:
void BLEConnecterImpl_States_OnEntry(int state, struct BLEConnecterImpl_Instance *_instance) {
switch(state) {
case BLECONNECTERIMPL_STATES_STATE:{
_instance->BLEConnecterImpl_States_State = BLECONNECTERIMPL_STATES_NOTCONNECTED_STATE;
BLEConnecterImpl_States_OnEntry(_instance->BLEConnecterImpl_States_State, _instance);
break;
}
case BLECONNECTERIMPL_STATES_NOTCONNECTED_STATE:{
break;
}
case BLECONNECTERIMPL_STATES_CONNECTING_STATE:{
;int16_t Interval = 0x0010;
;int16_t Window = 0x0010;
;uint8_t FilterPolicy = BLEINITIATORFILTERPOLICY_WHITELIST_NOT_USED;
;uint8_t PeerAddressType = _instance->BLEConnecterImpl_ConnectToAddressType_var;
;bdaddr_t PeerAddress = _instance->BLEConnecterImpl_ConnectToAddress_var;
;uint8_t OwnAddressType = BLEADDRESSTYPE_PUBLIC;
;int16_t ConnIntervalMin = 0x0006;
;int16_t ConnIntervalMax = 0x000C;
;int16_t ConnLatency = 0x0000;
;int16_t SupervisionTimeout = 0x00c8;
;int16_t CELengthMin = 0x0004;
;int16_t CELengthMax = 0x0006;
BLEConnecterImpl_send_HCICommands_LECreateConnection(_instance, Interval, Window, FilterPolicy, PeerAddressType, PeerAddress, OwnAddressType, ConnIntervalMin, ConnIntervalMax, ConnLatency, SupervisionTimeout, CELengthMin, CELengthMax);
break;
}
case BLECONNECTERIMPL_STATES_CONNECTED_STATE:{
fprintf(stdout, "[INFO]: CONNECTED :D\n");
BLEConnecterImpl_send_Connecter_Connected(_instance, _instance->BLEConnecterImpl_ConnectedHandle_var, _instance->BLEConnecterImpl_ConnectedAddressType_var, _instance->BLEConnecterImpl_ConnectedAddress_var);
break;
}
case BLECONNECTERIMPL_STATES_DISCONNECTING_STATE:{
BLEConnecterImpl_send_HCICommands_Disconnect(_instance, _instance->BLEConnecterImpl_ConnectedHandle_var, BTDISCONNECTREASON_REMOTE_USER);
break;
}
case BLECONNECTERIMPL_STATES_CLOSED_STATE:{
break;
}
case BLECONNECTERIMPL_STATES_FAILURE_STATE:{
fprintf(stdout, "[ERROR]: BLE_connecter failed :(\n");
BLEConnecterImpl_send_Socket_Close(_instance);
BLEConnecterImpl_send_Connecter_Failure(_instance);
break;
}
default: break;
}
}

// On Exit Actions:
void BLEConnecterImpl_States_OnExit(int state, struct BLEConnecterImpl_Instance *_instance) {
switch(state) {
case BLECONNECTERIMPL_STATES_STATE:{
BLEConnecterImpl_States_OnExit(_instance->BLEConnecterImpl_States_State, _instance);
break;}
case BLECONNECTERIMPL_STATES_NOTCONNECTED_STATE:{
break;}
case BLECONNECTERIMPL_STATES_CONNECTING_STATE:{
break;}
case BLECONNECTERIMPL_STATES_CONNECTED_STATE:{
break;}
case BLECONNECTERIMPL_STATES_DISCONNECTING_STATE:{
break;}
case BLECONNECTERIMPL_STATES_CLOSED_STATE:{
break;}
case BLECONNECTERIMPL_STATES_FAILURE_STATE:{
break;}
default: break;
}
}

// Event Handlers for incoming messages:
void BLEConnecterImpl_handle_Connecter_ConnectTo(struct BLEConnecterImpl_Instance *_instance, uint8_t AddressType, bdaddr_t Address) {
//Region States
uint8_t BLEConnecterImpl_States_State_event_consumed = 0;
if (_instance->BLEConnecterImpl_States_State == BLECONNECTERIMPL_STATES_NOTCONNECTED_STATE) {
if (BLEConnecterImpl_States_State_event_consumed == 0 && 1) {
BLEConnecterImpl_States_OnExit(BLECONNECTERIMPL_STATES_NOTCONNECTED_STATE, _instance);
_instance->BLEConnecterImpl_States_State = BLECONNECTERIMPL_STATES_CONNECTING_STATE;
_instance->BLEConnecterImpl_ConnectToAddressType_var = AddressType;
_instance->BLEConnecterImpl_ConnectToAddress_var = Address;
BLEConnecterImpl_States_OnEntry(BLECONNECTERIMPL_STATES_CONNECTING_STATE, _instance);
BLEConnecterImpl_States_State_event_consumed = 1;
}
}
//End Region States
//End dsregion States
//Session list: 
}
void BLEConnecterImpl_handle_Connecter_Connect(struct BLEConnecterImpl_Instance *_instance) {
//Region States
uint8_t BLEConnecterImpl_States_State_event_consumed = 0;
if (_instance->BLEConnecterImpl_States_State == BLECONNECTERIMPL_STATES_NOTCONNECTED_STATE) {
if (BLEConnecterImpl_States_State_event_consumed == 0 && 1) {
BLEConnecterImpl_States_OnExit(BLECONNECTERIMPL_STATES_NOTCONNECTED_STATE, _instance);
_instance->BLEConnecterImpl_States_State = BLECONNECTERIMPL_STATES_CONNECTING_STATE;
_instance->BLEConnecterImpl_ConnectToAddressType_var = _instance->BLEConnecterImpl_ConnectAddressType_var;
str2ba(_instance->BLEConnecterImpl_ConnectAddress_var,&_instance->BLEConnecterImpl_ConnectToAddress_var);
BLEConnecterImpl_States_OnEntry(BLECONNECTERIMPL_STATES_CONNECTING_STATE, _instance);
BLEConnecterImpl_States_State_event_consumed = 1;
}
}
else if (_instance->BLEConnecterImpl_States_State == BLECONNECTERIMPL_STATES_CONNECTED_STATE) {
if (BLEConnecterImpl_States_State_event_consumed == 0 && 1) {
BLEConnecterImpl_send_Connecter_Connected(_instance, _instance->BLEConnecterImpl_ConnectedHandle_var, _instance->BLEConnecterImpl_ConnectedAddressType_var, _instance->BLEConnecterImpl_ConnectedAddress_var);
BLEConnecterImpl_States_State_event_consumed = 1;
}
}
else if (_instance->BLEConnecterImpl_States_State == BLECONNECTERIMPL_STATES_CLOSED_STATE) {
if (BLEConnecterImpl_States_State_event_consumed == 0 && 1) {
BLEConnecterImpl_send_Connecter_Failure(_instance);
BLEConnecterImpl_States_State_event_consumed = 1;
}
}
else if (_instance->BLEConnecterImpl_States_State == BLECONNECTERIMPL_STATES_FAILURE_STATE) {
if (BLEConnecterImpl_States_State_event_consumed == 0 && 1) {
BLEConnecterImpl_send_Connecter_Failure(_instance);
BLEConnecterImpl_States_State_event_consumed = 1;
}
}
//End Region States
//End dsregion States
//Session list: 
}
void BLEConnecterImpl_handle_Connecter_Stop(struct BLEConnecterImpl_Instance *_instance) {
//Region States
uint8_t BLEConnecterImpl_States_State_event_consumed = 0;
if (_instance->BLEConnecterImpl_States_State == BLECONNECTERIMPL_STATES_NOTCONNECTED_STATE) {
if (BLEConnecterImpl_States_State_event_consumed == 0 && 1) {
BLEConnecterImpl_send_Connecter_Stopped(_instance);
BLEConnecterImpl_States_State_event_consumed = 1;
}
}
else if (_instance->BLEConnecterImpl_States_State == BLECONNECTERIMPL_STATES_CONNECTING_STATE) {
if (BLEConnecterImpl_States_State_event_consumed == 0 && 1) {
BLEConnecterImpl_send_HCICommands_LECreateConnectionCancel(_instance);
BLEConnecterImpl_States_State_event_consumed = 1;
}
}
else if (_instance->BLEConnecterImpl_States_State == BLECONNECTERIMPL_STATES_CONNECTED_STATE) {
if (BLEConnecterImpl_States_State_event_consumed == 0 && 1) {
BLEConnecterImpl_States_OnExit(BLECONNECTERIMPL_STATES_CONNECTED_STATE, _instance);
_instance->BLEConnecterImpl_States_State = BLECONNECTERIMPL_STATES_DISCONNECTING_STATE;
BLEConnecterImpl_States_OnEntry(BLECONNECTERIMPL_STATES_DISCONNECTING_STATE, _instance);
BLEConnecterImpl_States_State_event_consumed = 1;
}
}
else if (_instance->BLEConnecterImpl_States_State == BLECONNECTERIMPL_STATES_DISCONNECTING_STATE) {
if (BLEConnecterImpl_States_State_event_consumed == 0 && 1) {
BLEConnecterImpl_States_OnExit(BLECONNECTERIMPL_STATES_DISCONNECTING_STATE, _instance);
_instance->BLEConnecterImpl_States_State = BLECONNECTERIMPL_STATES_FAILURE_STATE;
BLEConnecterImpl_States_OnEntry(BLECONNECTERIMPL_STATES_FAILURE_STATE, _instance);
BLEConnecterImpl_States_State_event_consumed = 1;
}
}
else if (_instance->BLEConnecterImpl_States_State == BLECONNECTERIMPL_STATES_CLOSED_STATE) {
if (BLEConnecterImpl_States_State_event_consumed == 0 && 1) {
BLEConnecterImpl_send_Connecter_Stopped(_instance);
BLEConnecterImpl_States_State_event_consumed = 1;
}
}
else if (_instance->BLEConnecterImpl_States_State == BLECONNECTERIMPL_STATES_FAILURE_STATE) {
if (BLEConnecterImpl_States_State_event_consumed == 0 && 1) {
BLEConnecterImpl_send_Connecter_Failure(_instance);
BLEConnecterImpl_States_State_event_consumed = 1;
}
}
//End Region States
//End dsregion States
//Session list: 
}
void BLEConnecterImpl_handle_Socket_Closed(struct BLEConnecterImpl_Instance *_instance) {
//Region States
uint8_t BLEConnecterImpl_States_State_event_consumed = 0;
if (_instance->BLEConnecterImpl_States_State == BLECONNECTERIMPL_STATES_NOTCONNECTED_STATE) {
if (BLEConnecterImpl_States_State_event_consumed == 0 && 1) {
BLEConnecterImpl_States_OnExit(BLECONNECTERIMPL_STATES_NOTCONNECTED_STATE, _instance);
_instance->BLEConnecterImpl_States_State = BLECONNECTERIMPL_STATES_FAILURE_STATE;
BLEConnecterImpl_States_OnEntry(BLECONNECTERIMPL_STATES_FAILURE_STATE, _instance);
BLEConnecterImpl_States_State_event_consumed = 1;
}
}
else if (_instance->BLEConnecterImpl_States_State == BLECONNECTERIMPL_STATES_CONNECTING_STATE) {
if (BLEConnecterImpl_States_State_event_consumed == 0 && 1) {
BLEConnecterImpl_States_OnExit(BLECONNECTERIMPL_STATES_CONNECTING_STATE, _instance);
_instance->BLEConnecterImpl_States_State = BLECONNECTERIMPL_STATES_FAILURE_STATE;
BLEConnecterImpl_States_OnEntry(BLECONNECTERIMPL_STATES_FAILURE_STATE, _instance);
BLEConnecterImpl_States_State_event_consumed = 1;
}
}
else if (_instance->BLEConnecterImpl_States_State == BLECONNECTERIMPL_STATES_CONNECTED_STATE) {
if (BLEConnecterImpl_States_State_event_consumed == 0 && 1) {
BLEConnecterImpl_States_OnExit(BLECONNECTERIMPL_STATES_CONNECTED_STATE, _instance);
_instance->BLEConnecterImpl_States_State = BLECONNECTERIMPL_STATES_FAILURE_STATE;
BLEConnecterImpl_States_OnEntry(BLECONNECTERIMPL_STATES_FAILURE_STATE, _instance);
BLEConnecterImpl_States_State_event_consumed = 1;
}
}
else if (_instance->BLEConnecterImpl_States_State == BLECONNECTERIMPL_STATES_DISCONNECTING_STATE) {
if (BLEConnecterImpl_States_State_event_consumed == 0 && 1) {
BLEConnecterImpl_States_OnExit(BLECONNECTERIMPL_STATES_DISCONNECTING_STATE, _instance);
_instance->BLEConnecterImpl_States_State = BLECONNECTERIMPL_STATES_FAILURE_STATE;
BLEConnecterImpl_States_OnEntry(BLECONNECTERIMPL_STATES_FAILURE_STATE, _instance);
BLEConnecterImpl_States_State_event_consumed = 1;
}
}
//End Region States
//End dsregion States
//Session list: 
}
void BLEConnecterImpl_handle_HCIEvents_DisconnectionCompleted(struct BLEConnecterImpl_Instance *_instance, uint8_t Status, uint16_t ConnectionHandle, uint8_t Reason) {
//Region States
uint8_t BLEConnecterImpl_States_State_event_consumed = 0;
if (_instance->BLEConnecterImpl_States_State == BLECONNECTERIMPL_STATES_CONNECTED_STATE) {
if (BLEConnecterImpl_States_State_event_consumed == 0 && (Status == 0)) {
BLEConnecterImpl_States_OnExit(BLECONNECTERIMPL_STATES_CONNECTED_STATE, _instance);
_instance->BLEConnecterImpl_States_State = BLECONNECTERIMPL_STATES_CLOSED_STATE;
fprintf(stdout, "[INFO]: Connection closed by remote.\n");
BLEConnecterImpl_send_Connecter_Stopped(_instance);
BLEConnecterImpl_States_OnEntry(BLECONNECTERIMPL_STATES_CLOSED_STATE, _instance);
BLEConnecterImpl_States_State_event_consumed = 1;
}
else if (BLEConnecterImpl_States_State_event_consumed == 0 && (Status > 0)) {
BLEConnecterImpl_States_OnExit(BLECONNECTERIMPL_STATES_CONNECTED_STATE, _instance);
_instance->BLEConnecterImpl_States_State = BLECONNECTERIMPL_STATES_FAILURE_STATE;
BLEConnecterImpl_States_OnEntry(BLECONNECTERIMPL_STATES_FAILURE_STATE, _instance);
BLEConnecterImpl_States_State_event_consumed = 1;
}
}
else if (_instance->BLEConnecterImpl_States_State == BLECONNECTERIMPL_STATES_DISCONNECTING_STATE) {
if (BLEConnecterImpl_States_State_event_consumed == 0 && (Status == 0)) {
BLEConnecterImpl_States_OnExit(BLECONNECTERIMPL_STATES_DISCONNECTING_STATE, _instance);
_instance->BLEConnecterImpl_States_State = BLECONNECTERIMPL_STATES_CLOSED_STATE;
BLEConnecterImpl_send_Connecter_Stopped(_instance);
BLEConnecterImpl_States_OnEntry(BLECONNECTERIMPL_STATES_CLOSED_STATE, _instance);
BLEConnecterImpl_States_State_event_consumed = 1;
}
else if (BLEConnecterImpl_States_State_event_consumed == 0 && (Status > 0)) {
BLEConnecterImpl_States_OnExit(BLECONNECTERIMPL_STATES_DISCONNECTING_STATE, _instance);
_instance->BLEConnecterImpl_States_State = BLECONNECTERIMPL_STATES_FAILURE_STATE;
BLEConnecterImpl_States_OnEntry(BLECONNECTERIMPL_STATES_FAILURE_STATE, _instance);
BLEConnecterImpl_States_State_event_consumed = 1;
}
}
//End Region States
//End dsregion States
//Session list: 
}
void BLEConnecterImpl_handle_HCIEvents_LEEnhancedConnectionComplete(struct BLEConnecterImpl_Instance *_instance, uint8_t Status, uint16_t ConnectionHandle, uint8_t Role, uint8_t PeerAddressType, bdaddr_t PeerAddress, bdaddr_t LocalResolvablePrivateAddress, bdaddr_t PeerResolvablePrivateAddress, uint16_t ConnInterval, uint16_t ConnLatency, uint16_t SupervisionTimeout, uint8_t MasterClockAccuracy) {
//Region States
uint8_t BLEConnecterImpl_States_State_event_consumed = 0;
if (_instance->BLEConnecterImpl_States_State == BLECONNECTERIMPL_STATES_CONNECTING_STATE) {
if (BLEConnecterImpl_States_State_event_consumed == 0 && (Status == 0)) {
BLEConnecterImpl_States_OnExit(BLECONNECTERIMPL_STATES_CONNECTING_STATE, _instance);
_instance->BLEConnecterImpl_States_State = BLECONNECTERIMPL_STATES_CONNECTED_STATE;
_instance->BLEConnecterImpl_ConnectedHandle_var = ConnectionHandle;
fprintf(stdout, "[INFO]: Enhanced connection complete\n");
BLEConnecterImpl_States_OnEntry(BLECONNECTERIMPL_STATES_CONNECTED_STATE, _instance);
BLEConnecterImpl_States_State_event_consumed = 1;
}
else if (BLEConnecterImpl_States_State_event_consumed == 0 && (Status > 0)) {
BLEConnecterImpl_States_OnExit(BLECONNECTERIMPL_STATES_CONNECTING_STATE, _instance);
_instance->BLEConnecterImpl_States_State = BLECONNECTERIMPL_STATES_FAILURE_STATE;
BLEConnecterImpl_States_OnEntry(BLECONNECTERIMPL_STATES_FAILURE_STATE, _instance);
BLEConnecterImpl_States_State_event_consumed = 1;
}
}
//End Region States
//End dsregion States
//Session list: 
}
void BLEConnecterImpl_handle_HCIEvents_DisconnectStatus(struct BLEConnecterImpl_Instance *_instance, uint8_t NumberAllowedCommandPackets, uint8_t Status) {
//Region States
uint8_t BLEConnecterImpl_States_State_event_consumed = 0;
if (_instance->BLEConnecterImpl_States_State == BLECONNECTERIMPL_STATES_DISCONNECTING_STATE) {
if (BLEConnecterImpl_States_State_event_consumed == 0 && (Status > 0)) {
BLEConnecterImpl_States_OnExit(BLECONNECTERIMPL_STATES_DISCONNECTING_STATE, _instance);
_instance->BLEConnecterImpl_States_State = BLECONNECTERIMPL_STATES_FAILURE_STATE;
BLEConnecterImpl_States_OnEntry(BLECONNECTERIMPL_STATES_FAILURE_STATE, _instance);
BLEConnecterImpl_States_State_event_consumed = 1;
}
else if (BLEConnecterImpl_States_State_event_consumed == 0 && (Status == 0)) {
fprintf(stdout, "[INFO]: Closing connection...\n");
BLEConnecterImpl_States_State_event_consumed = 1;
}
}
//End Region States
//End dsregion States
//Session list: 
}
void BLEConnecterImpl_handle_HCIEvents_LECreateConnectionCancelCompleted(struct BLEConnecterImpl_Instance *_instance, uint8_t NumberAllowedCommandPackets, uint8_t Status) {
//Region States
uint8_t BLEConnecterImpl_States_State_event_consumed = 0;
if (_instance->BLEConnecterImpl_States_State == BLECONNECTERIMPL_STATES_CONNECTING_STATE) {
if (BLEConnecterImpl_States_State_event_consumed == 0 && (Status == 0)) {
BLEConnecterImpl_States_OnExit(BLECONNECTERIMPL_STATES_CONNECTING_STATE, _instance);
_instance->BLEConnecterImpl_States_State = BLECONNECTERIMPL_STATES_NOTCONNECTED_STATE;
BLEConnecterImpl_send_Connecter_Stopped(_instance);
BLEConnecterImpl_States_OnEntry(BLECONNECTERIMPL_STATES_NOTCONNECTED_STATE, _instance);
BLEConnecterImpl_States_State_event_consumed = 1;
}
else if (BLEConnecterImpl_States_State_event_consumed == 0 && (Status > 0)) {
BLEConnecterImpl_States_OnExit(BLECONNECTERIMPL_STATES_CONNECTING_STATE, _instance);
_instance->BLEConnecterImpl_States_State = BLECONNECTERIMPL_STATES_FAILURE_STATE;
BLEConnecterImpl_States_OnEntry(BLECONNECTERIMPL_STATES_FAILURE_STATE, _instance);
BLEConnecterImpl_States_State_event_consumed = 1;
}
}
//End Region States
//End dsregion States
//Session list: 
}
void BLEConnecterImpl_handle_HCIEvents_LEConnectionComplete(struct BLEConnecterImpl_Instance *_instance, uint8_t Status, uint16_t ConnectionHandle, uint8_t Role, uint8_t PeerAddressType, bdaddr_t PeerAddress, uint16_t ConnInterval, uint16_t ConnLatency, uint16_t SupervisionTimeout, uint8_t MasterClockAccuracy) {
//Region States
uint8_t BLEConnecterImpl_States_State_event_consumed = 0;
if (_instance->BLEConnecterImpl_States_State == BLECONNECTERIMPL_STATES_CONNECTING_STATE) {
if (BLEConnecterImpl_States_State_event_consumed == 0 && (Status == 0)) {
BLEConnecterImpl_States_OnExit(BLECONNECTERIMPL_STATES_CONNECTING_STATE, _instance);
_instance->BLEConnecterImpl_States_State = BLECONNECTERIMPL_STATES_CONNECTED_STATE;
_instance->BLEConnecterImpl_ConnectedHandle_var = ConnectionHandle;
_instance->BLEConnecterImpl_ConnectedAddressType_var = PeerAddressType;
_instance->BLEConnecterImpl_ConnectedAddress_var = PeerAddress;
fprintf(stdout, "[INFO]: Normal connection complete\n");
BLEConnecterImpl_States_OnEntry(BLECONNECTERIMPL_STATES_CONNECTED_STATE, _instance);
BLEConnecterImpl_States_State_event_consumed = 1;
}
else if (BLEConnecterImpl_States_State_event_consumed == 0 && (Status > 0)) {
BLEConnecterImpl_States_OnExit(BLECONNECTERIMPL_STATES_CONNECTING_STATE, _instance);
_instance->BLEConnecterImpl_States_State = BLECONNECTERIMPL_STATES_FAILURE_STATE;
BLEConnecterImpl_States_OnEntry(BLECONNECTERIMPL_STATES_FAILURE_STATE, _instance);
BLEConnecterImpl_States_State_event_consumed = 1;
}
}
//End Region States
//End dsregion States
//Session list: 
}
void BLEConnecterImpl_handle_HCIEvents_LECreateConnectionStatus(struct BLEConnecterImpl_Instance *_instance, uint8_t NumberAllowedCommandPackets, uint8_t Status) {
//Region States
uint8_t BLEConnecterImpl_States_State_event_consumed = 0;
if (_instance->BLEConnecterImpl_States_State == BLECONNECTERIMPL_STATES_CONNECTING_STATE) {
if (BLEConnecterImpl_States_State_event_consumed == 0 && (Status > 0)) {
BLEConnecterImpl_States_OnExit(BLECONNECTERIMPL_STATES_CONNECTING_STATE, _instance);
_instance->BLEConnecterImpl_States_State = BLECONNECTERIMPL_STATES_FAILURE_STATE;
BLEConnecterImpl_States_OnEntry(BLECONNECTERIMPL_STATES_FAILURE_STATE, _instance);
BLEConnecterImpl_States_State_event_consumed = 1;
}
else if (BLEConnecterImpl_States_State_event_consumed == 0 && (Status == 0)) {
fprintf(stdout, "[INFO]: Requested connection to ");
//Type Object is not handled in print action
fprintf(stdout, "...\n");
BLEConnecterImpl_States_State_event_consumed = 1;
}
}
//End Region States
//End dsregion States
//Session list: 
}

// Observers for outgoing messages:
void (*external_BLEConnecterImpl_send_Connecter_Connected_listener)(struct BLEConnecterImpl_Instance *, uint16_t, uint8_t, bdaddr_t)= 0x0;
void (*BLEConnecterImpl_send_Connecter_Connected_listener)(struct BLEConnecterImpl_Instance *, uint16_t, uint8_t, bdaddr_t)= 0x0;
void register_external_BLEConnecterImpl_send_Connecter_Connected_listener(void (*_listener)(struct BLEConnecterImpl_Instance *, uint16_t, uint8_t, bdaddr_t)){
external_BLEConnecterImpl_send_Connecter_Connected_listener = _listener;
}
void register_BLEConnecterImpl_send_Connecter_Connected_listener(void (*_listener)(struct BLEConnecterImpl_Instance *, uint16_t, uint8_t, bdaddr_t)){
BLEConnecterImpl_send_Connecter_Connected_listener = _listener;
}
void BLEConnecterImpl_send_Connecter_Connected(struct BLEConnecterImpl_Instance *_instance, uint16_t Handle, uint8_t AddressType, bdaddr_t Address){
if (BLEConnecterImpl_send_Connecter_Connected_listener != 0x0) BLEConnecterImpl_send_Connecter_Connected_listener(_instance, Handle, AddressType, Address);
if (external_BLEConnecterImpl_send_Connecter_Connected_listener != 0x0) external_BLEConnecterImpl_send_Connecter_Connected_listener(_instance, Handle, AddressType, Address);
;
}
void (*external_BLEConnecterImpl_send_Connecter_Stopped_listener)(struct BLEConnecterImpl_Instance *)= 0x0;
void (*BLEConnecterImpl_send_Connecter_Stopped_listener)(struct BLEConnecterImpl_Instance *)= 0x0;
void register_external_BLEConnecterImpl_send_Connecter_Stopped_listener(void (*_listener)(struct BLEConnecterImpl_Instance *)){
external_BLEConnecterImpl_send_Connecter_Stopped_listener = _listener;
}
void register_BLEConnecterImpl_send_Connecter_Stopped_listener(void (*_listener)(struct BLEConnecterImpl_Instance *)){
BLEConnecterImpl_send_Connecter_Stopped_listener = _listener;
}
void BLEConnecterImpl_send_Connecter_Stopped(struct BLEConnecterImpl_Instance *_instance){
if (BLEConnecterImpl_send_Connecter_Stopped_listener != 0x0) BLEConnecterImpl_send_Connecter_Stopped_listener(_instance);
if (external_BLEConnecterImpl_send_Connecter_Stopped_listener != 0x0) external_BLEConnecterImpl_send_Connecter_Stopped_listener(_instance);
;
}
void (*external_BLEConnecterImpl_send_Connecter_Failure_listener)(struct BLEConnecterImpl_Instance *)= 0x0;
void (*BLEConnecterImpl_send_Connecter_Failure_listener)(struct BLEConnecterImpl_Instance *)= 0x0;
void register_external_BLEConnecterImpl_send_Connecter_Failure_listener(void (*_listener)(struct BLEConnecterImpl_Instance *)){
external_BLEConnecterImpl_send_Connecter_Failure_listener = _listener;
}
void register_BLEConnecterImpl_send_Connecter_Failure_listener(void (*_listener)(struct BLEConnecterImpl_Instance *)){
BLEConnecterImpl_send_Connecter_Failure_listener = _listener;
}
void BLEConnecterImpl_send_Connecter_Failure(struct BLEConnecterImpl_Instance *_instance){
if (BLEConnecterImpl_send_Connecter_Failure_listener != 0x0) BLEConnecterImpl_send_Connecter_Failure_listener(_instance);
if (external_BLEConnecterImpl_send_Connecter_Failure_listener != 0x0) external_BLEConnecterImpl_send_Connecter_Failure_listener(_instance);
;
}
void (*external_BLEConnecterImpl_send_Socket_Open_listener)(struct BLEConnecterImpl_Instance *)= 0x0;
void (*BLEConnecterImpl_send_Socket_Open_listener)(struct BLEConnecterImpl_Instance *)= 0x0;
void register_external_BLEConnecterImpl_send_Socket_Open_listener(void (*_listener)(struct BLEConnecterImpl_Instance *)){
external_BLEConnecterImpl_send_Socket_Open_listener = _listener;
}
void register_BLEConnecterImpl_send_Socket_Open_listener(void (*_listener)(struct BLEConnecterImpl_Instance *)){
BLEConnecterImpl_send_Socket_Open_listener = _listener;
}
void BLEConnecterImpl_send_Socket_Open(struct BLEConnecterImpl_Instance *_instance){
if (BLEConnecterImpl_send_Socket_Open_listener != 0x0) BLEConnecterImpl_send_Socket_Open_listener(_instance);
if (external_BLEConnecterImpl_send_Socket_Open_listener != 0x0) external_BLEConnecterImpl_send_Socket_Open_listener(_instance);
;
}
void (*external_BLEConnecterImpl_send_Socket_Close_listener)(struct BLEConnecterImpl_Instance *)= 0x0;
void (*BLEConnecterImpl_send_Socket_Close_listener)(struct BLEConnecterImpl_Instance *)= 0x0;
void register_external_BLEConnecterImpl_send_Socket_Close_listener(void (*_listener)(struct BLEConnecterImpl_Instance *)){
external_BLEConnecterImpl_send_Socket_Close_listener = _listener;
}
void register_BLEConnecterImpl_send_Socket_Close_listener(void (*_listener)(struct BLEConnecterImpl_Instance *)){
BLEConnecterImpl_send_Socket_Close_listener = _listener;
}
void BLEConnecterImpl_send_Socket_Close(struct BLEConnecterImpl_Instance *_instance){
if (BLEConnecterImpl_send_Socket_Close_listener != 0x0) BLEConnecterImpl_send_Socket_Close_listener(_instance);
if (external_BLEConnecterImpl_send_Socket_Close_listener != 0x0) external_BLEConnecterImpl_send_Socket_Close_listener(_instance);
;
}
void (*external_BLEConnecterImpl_send_HCICommands_Reset_listener)(struct BLEConnecterImpl_Instance *)= 0x0;
void (*BLEConnecterImpl_send_HCICommands_Reset_listener)(struct BLEConnecterImpl_Instance *)= 0x0;
void register_external_BLEConnecterImpl_send_HCICommands_Reset_listener(void (*_listener)(struct BLEConnecterImpl_Instance *)){
external_BLEConnecterImpl_send_HCICommands_Reset_listener = _listener;
}
void register_BLEConnecterImpl_send_HCICommands_Reset_listener(void (*_listener)(struct BLEConnecterImpl_Instance *)){
BLEConnecterImpl_send_HCICommands_Reset_listener = _listener;
}
void BLEConnecterImpl_send_HCICommands_Reset(struct BLEConnecterImpl_Instance *_instance){
if (BLEConnecterImpl_send_HCICommands_Reset_listener != 0x0) BLEConnecterImpl_send_HCICommands_Reset_listener(_instance);
if (external_BLEConnecterImpl_send_HCICommands_Reset_listener != 0x0) external_BLEConnecterImpl_send_HCICommands_Reset_listener(_instance);
;
}
void (*external_BLEConnecterImpl_send_HCICommands_SetEventMask_listener)(struct BLEConnecterImpl_Instance *, set_event_mask_cp)= 0x0;
void (*BLEConnecterImpl_send_HCICommands_SetEventMask_listener)(struct BLEConnecterImpl_Instance *, set_event_mask_cp)= 0x0;
void register_external_BLEConnecterImpl_send_HCICommands_SetEventMask_listener(void (*_listener)(struct BLEConnecterImpl_Instance *, set_event_mask_cp)){
external_BLEConnecterImpl_send_HCICommands_SetEventMask_listener = _listener;
}
void register_BLEConnecterImpl_send_HCICommands_SetEventMask_listener(void (*_listener)(struct BLEConnecterImpl_Instance *, set_event_mask_cp)){
BLEConnecterImpl_send_HCICommands_SetEventMask_listener = _listener;
}
void BLEConnecterImpl_send_HCICommands_SetEventMask(struct BLEConnecterImpl_Instance *_instance, set_event_mask_cp Mask){
if (BLEConnecterImpl_send_HCICommands_SetEventMask_listener != 0x0) BLEConnecterImpl_send_HCICommands_SetEventMask_listener(_instance, Mask);
if (external_BLEConnecterImpl_send_HCICommands_SetEventMask_listener != 0x0) external_BLEConnecterImpl_send_HCICommands_SetEventMask_listener(_instance, Mask);
;
}
void (*external_BLEConnecterImpl_send_HCICommands_SetEventMaskAll_listener)(struct BLEConnecterImpl_Instance *)= 0x0;
void (*BLEConnecterImpl_send_HCICommands_SetEventMaskAll_listener)(struct BLEConnecterImpl_Instance *)= 0x0;
void register_external_BLEConnecterImpl_send_HCICommands_SetEventMaskAll_listener(void (*_listener)(struct BLEConnecterImpl_Instance *)){
external_BLEConnecterImpl_send_HCICommands_SetEventMaskAll_listener = _listener;
}
void register_BLEConnecterImpl_send_HCICommands_SetEventMaskAll_listener(void (*_listener)(struct BLEConnecterImpl_Instance *)){
BLEConnecterImpl_send_HCICommands_SetEventMaskAll_listener = _listener;
}
void BLEConnecterImpl_send_HCICommands_SetEventMaskAll(struct BLEConnecterImpl_Instance *_instance){
if (BLEConnecterImpl_send_HCICommands_SetEventMaskAll_listener != 0x0) BLEConnecterImpl_send_HCICommands_SetEventMaskAll_listener(_instance);
if (external_BLEConnecterImpl_send_HCICommands_SetEventMaskAll_listener != 0x0) external_BLEConnecterImpl_send_HCICommands_SetEventMaskAll_listener(_instance);
;
}
void (*external_BLEConnecterImpl_send_HCICommands_SetLocalName_listener)(struct BLEConnecterImpl_Instance *, change_local_name_cp)= 0x0;
void (*BLEConnecterImpl_send_HCICommands_SetLocalName_listener)(struct BLEConnecterImpl_Instance *, change_local_name_cp)= 0x0;
void register_external_BLEConnecterImpl_send_HCICommands_SetLocalName_listener(void (*_listener)(struct BLEConnecterImpl_Instance *, change_local_name_cp)){
external_BLEConnecterImpl_send_HCICommands_SetLocalName_listener = _listener;
}
void register_BLEConnecterImpl_send_HCICommands_SetLocalName_listener(void (*_listener)(struct BLEConnecterImpl_Instance *, change_local_name_cp)){
BLEConnecterImpl_send_HCICommands_SetLocalName_listener = _listener;
}
void BLEConnecterImpl_send_HCICommands_SetLocalName(struct BLEConnecterImpl_Instance *_instance, change_local_name_cp Name){
if (BLEConnecterImpl_send_HCICommands_SetLocalName_listener != 0x0) BLEConnecterImpl_send_HCICommands_SetLocalName_listener(_instance, Name);
if (external_BLEConnecterImpl_send_HCICommands_SetLocalName_listener != 0x0) external_BLEConnecterImpl_send_HCICommands_SetLocalName_listener(_instance, Name);
;
}
void (*external_BLEConnecterImpl_send_HCICommands_Disconnect_listener)(struct BLEConnecterImpl_Instance *, uint16_t, uint8_t)= 0x0;
void (*BLEConnecterImpl_send_HCICommands_Disconnect_listener)(struct BLEConnecterImpl_Instance *, uint16_t, uint8_t)= 0x0;
void register_external_BLEConnecterImpl_send_HCICommands_Disconnect_listener(void (*_listener)(struct BLEConnecterImpl_Instance *, uint16_t, uint8_t)){
external_BLEConnecterImpl_send_HCICommands_Disconnect_listener = _listener;
}
void register_BLEConnecterImpl_send_HCICommands_Disconnect_listener(void (*_listener)(struct BLEConnecterImpl_Instance *, uint16_t, uint8_t)){
BLEConnecterImpl_send_HCICommands_Disconnect_listener = _listener;
}
void BLEConnecterImpl_send_HCICommands_Disconnect(struct BLEConnecterImpl_Instance *_instance, uint16_t ConnectionHandle, uint8_t Reason){
if (BLEConnecterImpl_send_HCICommands_Disconnect_listener != 0x0) BLEConnecterImpl_send_HCICommands_Disconnect_listener(_instance, ConnectionHandle, Reason);
if (external_BLEConnecterImpl_send_HCICommands_Disconnect_listener != 0x0) external_BLEConnecterImpl_send_HCICommands_Disconnect_listener(_instance, ConnectionHandle, Reason);
;
}
void (*external_BLEConnecterImpl_send_HCICommands_SetLEEventMask_listener)(struct BLEConnecterImpl_Instance *, set_event_mask_cp)= 0x0;
void (*BLEConnecterImpl_send_HCICommands_SetLEEventMask_listener)(struct BLEConnecterImpl_Instance *, set_event_mask_cp)= 0x0;
void register_external_BLEConnecterImpl_send_HCICommands_SetLEEventMask_listener(void (*_listener)(struct BLEConnecterImpl_Instance *, set_event_mask_cp)){
external_BLEConnecterImpl_send_HCICommands_SetLEEventMask_listener = _listener;
}
void register_BLEConnecterImpl_send_HCICommands_SetLEEventMask_listener(void (*_listener)(struct BLEConnecterImpl_Instance *, set_event_mask_cp)){
BLEConnecterImpl_send_HCICommands_SetLEEventMask_listener = _listener;
}
void BLEConnecterImpl_send_HCICommands_SetLEEventMask(struct BLEConnecterImpl_Instance *_instance, set_event_mask_cp Mask){
if (BLEConnecterImpl_send_HCICommands_SetLEEventMask_listener != 0x0) BLEConnecterImpl_send_HCICommands_SetLEEventMask_listener(_instance, Mask);
if (external_BLEConnecterImpl_send_HCICommands_SetLEEventMask_listener != 0x0) external_BLEConnecterImpl_send_HCICommands_SetLEEventMask_listener(_instance, Mask);
;
}
void (*external_BLEConnecterImpl_send_HCICommands_SetLEEventMaskAll_listener)(struct BLEConnecterImpl_Instance *)= 0x0;
void (*BLEConnecterImpl_send_HCICommands_SetLEEventMaskAll_listener)(struct BLEConnecterImpl_Instance *)= 0x0;
void register_external_BLEConnecterImpl_send_HCICommands_SetLEEventMaskAll_listener(void (*_listener)(struct BLEConnecterImpl_Instance *)){
external_BLEConnecterImpl_send_HCICommands_SetLEEventMaskAll_listener = _listener;
}
void register_BLEConnecterImpl_send_HCICommands_SetLEEventMaskAll_listener(void (*_listener)(struct BLEConnecterImpl_Instance *)){
BLEConnecterImpl_send_HCICommands_SetLEEventMaskAll_listener = _listener;
}
void BLEConnecterImpl_send_HCICommands_SetLEEventMaskAll(struct BLEConnecterImpl_Instance *_instance){
if (BLEConnecterImpl_send_HCICommands_SetLEEventMaskAll_listener != 0x0) BLEConnecterImpl_send_HCICommands_SetLEEventMaskAll_listener(_instance);
if (external_BLEConnecterImpl_send_HCICommands_SetLEEventMaskAll_listener != 0x0) external_BLEConnecterImpl_send_HCICommands_SetLEEventMaskAll_listener(_instance);
;
}
void (*external_BLEConnecterImpl_send_HCICommands_SetLEAdvertisementParameters_listener)(struct BLEConnecterImpl_Instance *, uint16_t, uint16_t, uint8_t, uint8_t, uint8_t, bdaddr_t, uint8_t, uint8_t)= 0x0;
void (*BLEConnecterImpl_send_HCICommands_SetLEAdvertisementParameters_listener)(struct BLEConnecterImpl_Instance *, uint16_t, uint16_t, uint8_t, uint8_t, uint8_t, bdaddr_t, uint8_t, uint8_t)= 0x0;
void register_external_BLEConnecterImpl_send_HCICommands_SetLEAdvertisementParameters_listener(void (*_listener)(struct BLEConnecterImpl_Instance *, uint16_t, uint16_t, uint8_t, uint8_t, uint8_t, bdaddr_t, uint8_t, uint8_t)){
external_BLEConnecterImpl_send_HCICommands_SetLEAdvertisementParameters_listener = _listener;
}
void register_BLEConnecterImpl_send_HCICommands_SetLEAdvertisementParameters_listener(void (*_listener)(struct BLEConnecterImpl_Instance *, uint16_t, uint16_t, uint8_t, uint8_t, uint8_t, bdaddr_t, uint8_t, uint8_t)){
BLEConnecterImpl_send_HCICommands_SetLEAdvertisementParameters_listener = _listener;
}
void BLEConnecterImpl_send_HCICommands_SetLEAdvertisementParameters(struct BLEConnecterImpl_Instance *_instance, uint16_t MinInterval, uint16_t MaxInterval, uint8_t Type, uint8_t OwnAddressType, uint8_t PeerAddressType, bdaddr_t PeerAddress, uint8_t Channel, uint8_t FilterPolicy){
if (BLEConnecterImpl_send_HCICommands_SetLEAdvertisementParameters_listener != 0x0) BLEConnecterImpl_send_HCICommands_SetLEAdvertisementParameters_listener(_instance, MinInterval, MaxInterval, Type, OwnAddressType, PeerAddressType, PeerAddress, Channel, FilterPolicy);
if (external_BLEConnecterImpl_send_HCICommands_SetLEAdvertisementParameters_listener != 0x0) external_BLEConnecterImpl_send_HCICommands_SetLEAdvertisementParameters_listener(_instance, MinInterval, MaxInterval, Type, OwnAddressType, PeerAddressType, PeerAddress, Channel, FilterPolicy);
;
}
void (*external_BLEConnecterImpl_send_HCICommands_SetLEAdvertiseEnable_listener)(struct BLEConnecterImpl_Instance *, uint8_t)= 0x0;
void (*BLEConnecterImpl_send_HCICommands_SetLEAdvertiseEnable_listener)(struct BLEConnecterImpl_Instance *, uint8_t)= 0x0;
void register_external_BLEConnecterImpl_send_HCICommands_SetLEAdvertiseEnable_listener(void (*_listener)(struct BLEConnecterImpl_Instance *, uint8_t)){
external_BLEConnecterImpl_send_HCICommands_SetLEAdvertiseEnable_listener = _listener;
}
void register_BLEConnecterImpl_send_HCICommands_SetLEAdvertiseEnable_listener(void (*_listener)(struct BLEConnecterImpl_Instance *, uint8_t)){
BLEConnecterImpl_send_HCICommands_SetLEAdvertiseEnable_listener = _listener;
}
void BLEConnecterImpl_send_HCICommands_SetLEAdvertiseEnable(struct BLEConnecterImpl_Instance *_instance, uint8_t Enable){
if (BLEConnecterImpl_send_HCICommands_SetLEAdvertiseEnable_listener != 0x0) BLEConnecterImpl_send_HCICommands_SetLEAdvertiseEnable_listener(_instance, Enable);
if (external_BLEConnecterImpl_send_HCICommands_SetLEAdvertiseEnable_listener != 0x0) external_BLEConnecterImpl_send_HCICommands_SetLEAdvertiseEnable_listener(_instance, Enable);
;
}
void (*external_BLEConnecterImpl_send_HCICommands_SetLEAdvertisingData_listener)(struct BLEConnecterImpl_Instance *, uint8_t, ble_adv_data_t)= 0x0;
void (*BLEConnecterImpl_send_HCICommands_SetLEAdvertisingData_listener)(struct BLEConnecterImpl_Instance *, uint8_t, ble_adv_data_t)= 0x0;
void register_external_BLEConnecterImpl_send_HCICommands_SetLEAdvertisingData_listener(void (*_listener)(struct BLEConnecterImpl_Instance *, uint8_t, ble_adv_data_t)){
external_BLEConnecterImpl_send_HCICommands_SetLEAdvertisingData_listener = _listener;
}
void register_BLEConnecterImpl_send_HCICommands_SetLEAdvertisingData_listener(void (*_listener)(struct BLEConnecterImpl_Instance *, uint8_t, ble_adv_data_t)){
BLEConnecterImpl_send_HCICommands_SetLEAdvertisingData_listener = _listener;
}
void BLEConnecterImpl_send_HCICommands_SetLEAdvertisingData(struct BLEConnecterImpl_Instance *_instance, uint8_t Length, ble_adv_data_t Data){
if (BLEConnecterImpl_send_HCICommands_SetLEAdvertisingData_listener != 0x0) BLEConnecterImpl_send_HCICommands_SetLEAdvertisingData_listener(_instance, Length, Data);
if (external_BLEConnecterImpl_send_HCICommands_SetLEAdvertisingData_listener != 0x0) external_BLEConnecterImpl_send_HCICommands_SetLEAdvertisingData_listener(_instance, Length, Data);
;
}
void (*external_BLEConnecterImpl_send_HCICommands_SetLEScanResponseData_listener)(struct BLEConnecterImpl_Instance *, uint8_t, ble_adv_data_t)= 0x0;
void (*BLEConnecterImpl_send_HCICommands_SetLEScanResponseData_listener)(struct BLEConnecterImpl_Instance *, uint8_t, ble_adv_data_t)= 0x0;
void register_external_BLEConnecterImpl_send_HCICommands_SetLEScanResponseData_listener(void (*_listener)(struct BLEConnecterImpl_Instance *, uint8_t, ble_adv_data_t)){
external_BLEConnecterImpl_send_HCICommands_SetLEScanResponseData_listener = _listener;
}
void register_BLEConnecterImpl_send_HCICommands_SetLEScanResponseData_listener(void (*_listener)(struct BLEConnecterImpl_Instance *, uint8_t, ble_adv_data_t)){
BLEConnecterImpl_send_HCICommands_SetLEScanResponseData_listener = _listener;
}
void BLEConnecterImpl_send_HCICommands_SetLEScanResponseData(struct BLEConnecterImpl_Instance *_instance, uint8_t Length, ble_adv_data_t Data){
if (BLEConnecterImpl_send_HCICommands_SetLEScanResponseData_listener != 0x0) BLEConnecterImpl_send_HCICommands_SetLEScanResponseData_listener(_instance, Length, Data);
if (external_BLEConnecterImpl_send_HCICommands_SetLEScanResponseData_listener != 0x0) external_BLEConnecterImpl_send_HCICommands_SetLEScanResponseData_listener(_instance, Length, Data);
;
}
void (*external_BLEConnecterImpl_send_HCICommands_SetLEScanParameters_listener)(struct BLEConnecterImpl_Instance *, uint8_t, uint16_t, uint16_t, uint8_t, uint8_t)= 0x0;
void (*BLEConnecterImpl_send_HCICommands_SetLEScanParameters_listener)(struct BLEConnecterImpl_Instance *, uint8_t, uint16_t, uint16_t, uint8_t, uint8_t)= 0x0;
void register_external_BLEConnecterImpl_send_HCICommands_SetLEScanParameters_listener(void (*_listener)(struct BLEConnecterImpl_Instance *, uint8_t, uint16_t, uint16_t, uint8_t, uint8_t)){
external_BLEConnecterImpl_send_HCICommands_SetLEScanParameters_listener = _listener;
}
void register_BLEConnecterImpl_send_HCICommands_SetLEScanParameters_listener(void (*_listener)(struct BLEConnecterImpl_Instance *, uint8_t, uint16_t, uint16_t, uint8_t, uint8_t)){
BLEConnecterImpl_send_HCICommands_SetLEScanParameters_listener = _listener;
}
void BLEConnecterImpl_send_HCICommands_SetLEScanParameters(struct BLEConnecterImpl_Instance *_instance, uint8_t Type, uint16_t Interval, uint16_t Window, uint8_t OwnAddressType, uint8_t FilterPolicy){
if (BLEConnecterImpl_send_HCICommands_SetLEScanParameters_listener != 0x0) BLEConnecterImpl_send_HCICommands_SetLEScanParameters_listener(_instance, Type, Interval, Window, OwnAddressType, FilterPolicy);
if (external_BLEConnecterImpl_send_HCICommands_SetLEScanParameters_listener != 0x0) external_BLEConnecterImpl_send_HCICommands_SetLEScanParameters_listener(_instance, Type, Interval, Window, OwnAddressType, FilterPolicy);
;
}
void (*external_BLEConnecterImpl_send_HCICommands_SetLEScanEnable_listener)(struct BLEConnecterImpl_Instance *, uint8_t, uint8_t)= 0x0;
void (*BLEConnecterImpl_send_HCICommands_SetLEScanEnable_listener)(struct BLEConnecterImpl_Instance *, uint8_t, uint8_t)= 0x0;
void register_external_BLEConnecterImpl_send_HCICommands_SetLEScanEnable_listener(void (*_listener)(struct BLEConnecterImpl_Instance *, uint8_t, uint8_t)){
external_BLEConnecterImpl_send_HCICommands_SetLEScanEnable_listener = _listener;
}
void register_BLEConnecterImpl_send_HCICommands_SetLEScanEnable_listener(void (*_listener)(struct BLEConnecterImpl_Instance *, uint8_t, uint8_t)){
BLEConnecterImpl_send_HCICommands_SetLEScanEnable_listener = _listener;
}
void BLEConnecterImpl_send_HCICommands_SetLEScanEnable(struct BLEConnecterImpl_Instance *_instance, uint8_t Enable, uint8_t FilterDuplicates){
if (BLEConnecterImpl_send_HCICommands_SetLEScanEnable_listener != 0x0) BLEConnecterImpl_send_HCICommands_SetLEScanEnable_listener(_instance, Enable, FilterDuplicates);
if (external_BLEConnecterImpl_send_HCICommands_SetLEScanEnable_listener != 0x0) external_BLEConnecterImpl_send_HCICommands_SetLEScanEnable_listener(_instance, Enable, FilterDuplicates);
;
}
void (*external_BLEConnecterImpl_send_HCICommands_LECreateConnection_listener)(struct BLEConnecterImpl_Instance *, uint16_t, uint16_t, uint8_t, uint8_t, bdaddr_t, uint8_t, uint16_t, uint16_t, uint16_t, uint16_t, uint16_t, uint16_t)= 0x0;
void (*BLEConnecterImpl_send_HCICommands_LECreateConnection_listener)(struct BLEConnecterImpl_Instance *, uint16_t, uint16_t, uint8_t, uint8_t, bdaddr_t, uint8_t, uint16_t, uint16_t, uint16_t, uint16_t, uint16_t, uint16_t)= 0x0;
void register_external_BLEConnecterImpl_send_HCICommands_LECreateConnection_listener(void (*_listener)(struct BLEConnecterImpl_Instance *, uint16_t, uint16_t, uint8_t, uint8_t, bdaddr_t, uint8_t, uint16_t, uint16_t, uint16_t, uint16_t, uint16_t, uint16_t)){
external_BLEConnecterImpl_send_HCICommands_LECreateConnection_listener = _listener;
}
void register_BLEConnecterImpl_send_HCICommands_LECreateConnection_listener(void (*_listener)(struct BLEConnecterImpl_Instance *, uint16_t, uint16_t, uint8_t, uint8_t, bdaddr_t, uint8_t, uint16_t, uint16_t, uint16_t, uint16_t, uint16_t, uint16_t)){
BLEConnecterImpl_send_HCICommands_LECreateConnection_listener = _listener;
}
void BLEConnecterImpl_send_HCICommands_LECreateConnection(struct BLEConnecterImpl_Instance *_instance, uint16_t Interval, uint16_t Window, uint8_t FilterPolicy, uint8_t PeerAddressType, bdaddr_t PeerAddress, uint8_t OwnAddressType, uint16_t ConnIntervalMin, uint16_t ConnIntervalMax, uint16_t ConnLatency, uint16_t SupervisionTimeout, uint16_t CELengthMin, uint16_t CELengthMax){
if (BLEConnecterImpl_send_HCICommands_LECreateConnection_listener != 0x0) BLEConnecterImpl_send_HCICommands_LECreateConnection_listener(_instance, Interval, Window, FilterPolicy, PeerAddressType, PeerAddress, OwnAddressType, ConnIntervalMin, ConnIntervalMax, ConnLatency, SupervisionTimeout, CELengthMin, CELengthMax);
if (external_BLEConnecterImpl_send_HCICommands_LECreateConnection_listener != 0x0) external_BLEConnecterImpl_send_HCICommands_LECreateConnection_listener(_instance, Interval, Window, FilterPolicy, PeerAddressType, PeerAddress, OwnAddressType, ConnIntervalMin, ConnIntervalMax, ConnLatency, SupervisionTimeout, CELengthMin, CELengthMax);
;
}
void (*external_BLEConnecterImpl_send_HCICommands_LECreateConnectionCancel_listener)(struct BLEConnecterImpl_Instance *)= 0x0;
void (*BLEConnecterImpl_send_HCICommands_LECreateConnectionCancel_listener)(struct BLEConnecterImpl_Instance *)= 0x0;
void register_external_BLEConnecterImpl_send_HCICommands_LECreateConnectionCancel_listener(void (*_listener)(struct BLEConnecterImpl_Instance *)){
external_BLEConnecterImpl_send_HCICommands_LECreateConnectionCancel_listener = _listener;
}
void register_BLEConnecterImpl_send_HCICommands_LECreateConnectionCancel_listener(void (*_listener)(struct BLEConnecterImpl_Instance *)){
BLEConnecterImpl_send_HCICommands_LECreateConnectionCancel_listener = _listener;
}
void BLEConnecterImpl_send_HCICommands_LECreateConnectionCancel(struct BLEConnecterImpl_Instance *_instance){
if (BLEConnecterImpl_send_HCICommands_LECreateConnectionCancel_listener != 0x0) BLEConnecterImpl_send_HCICommands_LECreateConnectionCancel_listener(_instance);
if (external_BLEConnecterImpl_send_HCICommands_LECreateConnectionCancel_listener != 0x0) external_BLEConnecterImpl_send_HCICommands_LECreateConnectionCancel_listener(_instance);
;
}
void (*external_BLEConnecterImpl_send_HCICommands_LERand_listener)(struct BLEConnecterImpl_Instance *)= 0x0;
void (*BLEConnecterImpl_send_HCICommands_LERand_listener)(struct BLEConnecterImpl_Instance *)= 0x0;
void register_external_BLEConnecterImpl_send_HCICommands_LERand_listener(void (*_listener)(struct BLEConnecterImpl_Instance *)){
external_BLEConnecterImpl_send_HCICommands_LERand_listener = _listener;
}
void register_BLEConnecterImpl_send_HCICommands_LERand_listener(void (*_listener)(struct BLEConnecterImpl_Instance *)){
BLEConnecterImpl_send_HCICommands_LERand_listener = _listener;
}
void BLEConnecterImpl_send_HCICommands_LERand(struct BLEConnecterImpl_Instance *_instance){
if (BLEConnecterImpl_send_HCICommands_LERand_listener != 0x0) BLEConnecterImpl_send_HCICommands_LERand_listener(_instance);
if (external_BLEConnecterImpl_send_HCICommands_LERand_listener != 0x0) external_BLEConnecterImpl_send_HCICommands_LERand_listener(_instance);
;
}
void (*external_BLEConnecterImpl_send_HCICommands_LEEncrypt_listener)(struct BLEConnecterImpl_Instance *, ble_random_number_t, ble_random_number_t)= 0x0;
void (*BLEConnecterImpl_send_HCICommands_LEEncrypt_listener)(struct BLEConnecterImpl_Instance *, ble_random_number_t, ble_random_number_t)= 0x0;
void register_external_BLEConnecterImpl_send_HCICommands_LEEncrypt_listener(void (*_listener)(struct BLEConnecterImpl_Instance *, ble_random_number_t, ble_random_number_t)){
external_BLEConnecterImpl_send_HCICommands_LEEncrypt_listener = _listener;
}
void register_BLEConnecterImpl_send_HCICommands_LEEncrypt_listener(void (*_listener)(struct BLEConnecterImpl_Instance *, ble_random_number_t, ble_random_number_t)){
BLEConnecterImpl_send_HCICommands_LEEncrypt_listener = _listener;
}
void BLEConnecterImpl_send_HCICommands_LEEncrypt(struct BLEConnecterImpl_Instance *_instance, ble_random_number_t Key, ble_random_number_t Plaintext){
if (BLEConnecterImpl_send_HCICommands_LEEncrypt_listener != 0x0) BLEConnecterImpl_send_HCICommands_LEEncrypt_listener(_instance, Key, Plaintext);
if (external_BLEConnecterImpl_send_HCICommands_LEEncrypt_listener != 0x0) external_BLEConnecterImpl_send_HCICommands_LEEncrypt_listener(_instance, Key, Plaintext);
;
}
void (*external_BLEConnecterImpl_send_HCICommands_LEStartEncryption_listener)(struct BLEConnecterImpl_Instance *, uint16_t, ble_random_part_t, uint16_t, ble_random_number_t)= 0x0;
void (*BLEConnecterImpl_send_HCICommands_LEStartEncryption_listener)(struct BLEConnecterImpl_Instance *, uint16_t, ble_random_part_t, uint16_t, ble_random_number_t)= 0x0;
void register_external_BLEConnecterImpl_send_HCICommands_LEStartEncryption_listener(void (*_listener)(struct BLEConnecterImpl_Instance *, uint16_t, ble_random_part_t, uint16_t, ble_random_number_t)){
external_BLEConnecterImpl_send_HCICommands_LEStartEncryption_listener = _listener;
}
void register_BLEConnecterImpl_send_HCICommands_LEStartEncryption_listener(void (*_listener)(struct BLEConnecterImpl_Instance *, uint16_t, ble_random_part_t, uint16_t, ble_random_number_t)){
BLEConnecterImpl_send_HCICommands_LEStartEncryption_listener = _listener;
}
void BLEConnecterImpl_send_HCICommands_LEStartEncryption(struct BLEConnecterImpl_Instance *_instance, uint16_t ConnectionHandle, ble_random_part_t Random, uint16_t EDIV, ble_random_number_t LTK){
if (BLEConnecterImpl_send_HCICommands_LEStartEncryption_listener != 0x0) BLEConnecterImpl_send_HCICommands_LEStartEncryption_listener(_instance, ConnectionHandle, Random, EDIV, LTK);
if (external_BLEConnecterImpl_send_HCICommands_LEStartEncryption_listener != 0x0) external_BLEConnecterImpl_send_HCICommands_LEStartEncryption_listener(_instance, ConnectionHandle, Random, EDIV, LTK);
;
}
void (*external_BLEConnecterImpl_send_SMP_SMPPairingRequest_listener)(struct BLEConnecterImpl_Instance *, uint16_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t)= 0x0;
void (*BLEConnecterImpl_send_SMP_SMPPairingRequest_listener)(struct BLEConnecterImpl_Instance *, uint16_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t)= 0x0;
void register_external_BLEConnecterImpl_send_SMP_SMPPairingRequest_listener(void (*_listener)(struct BLEConnecterImpl_Instance *, uint16_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t)){
external_BLEConnecterImpl_send_SMP_SMPPairingRequest_listener = _listener;
}
void register_BLEConnecterImpl_send_SMP_SMPPairingRequest_listener(void (*_listener)(struct BLEConnecterImpl_Instance *, uint16_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t)){
BLEConnecterImpl_send_SMP_SMPPairingRequest_listener = _listener;
}
void BLEConnecterImpl_send_SMP_SMPPairingRequest(struct BLEConnecterImpl_Instance *_instance, uint16_t Handle, uint8_t IOCapability, uint8_t OOBDataPresent, uint8_t Bonding, uint8_t MITM, uint8_t SecureConnection, uint8_t Keypress, uint8_t MaximumEncryptionKeySize, uint8_t InitiatorKeyDistribution, uint8_t ResponderKeyDistribution){
if (BLEConnecterImpl_send_SMP_SMPPairingRequest_listener != 0x0) BLEConnecterImpl_send_SMP_SMPPairingRequest_listener(_instance, Handle, IOCapability, OOBDataPresent, Bonding, MITM, SecureConnection, Keypress, MaximumEncryptionKeySize, InitiatorKeyDistribution, ResponderKeyDistribution);
if (external_BLEConnecterImpl_send_SMP_SMPPairingRequest_listener != 0x0) external_BLEConnecterImpl_send_SMP_SMPPairingRequest_listener(_instance, Handle, IOCapability, OOBDataPresent, Bonding, MITM, SecureConnection, Keypress, MaximumEncryptionKeySize, InitiatorKeyDistribution, ResponderKeyDistribution);
;
}
void (*external_BLEConnecterImpl_send_SMP_SMPPairingResponse_listener)(struct BLEConnecterImpl_Instance *, uint16_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t)= 0x0;
void (*BLEConnecterImpl_send_SMP_SMPPairingResponse_listener)(struct BLEConnecterImpl_Instance *, uint16_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t)= 0x0;
void register_external_BLEConnecterImpl_send_SMP_SMPPairingResponse_listener(void (*_listener)(struct BLEConnecterImpl_Instance *, uint16_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t)){
external_BLEConnecterImpl_send_SMP_SMPPairingResponse_listener = _listener;
}
void register_BLEConnecterImpl_send_SMP_SMPPairingResponse_listener(void (*_listener)(struct BLEConnecterImpl_Instance *, uint16_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t)){
BLEConnecterImpl_send_SMP_SMPPairingResponse_listener = _listener;
}
void BLEConnecterImpl_send_SMP_SMPPairingResponse(struct BLEConnecterImpl_Instance *_instance, uint16_t Handle, uint8_t IOCapability, uint8_t OOBDataPresent, uint8_t Bonding, uint8_t MITM, uint8_t SecureConnection, uint8_t Keypress, uint8_t MaximumEncryptionKeySize, uint8_t InitiatorKeyDistribution, uint8_t ResponderKeyDistribution){
if (BLEConnecterImpl_send_SMP_SMPPairingResponse_listener != 0x0) BLEConnecterImpl_send_SMP_SMPPairingResponse_listener(_instance, Handle, IOCapability, OOBDataPresent, Bonding, MITM, SecureConnection, Keypress, MaximumEncryptionKeySize, InitiatorKeyDistribution, ResponderKeyDistribution);
if (external_BLEConnecterImpl_send_SMP_SMPPairingResponse_listener != 0x0) external_BLEConnecterImpl_send_SMP_SMPPairingResponse_listener(_instance, Handle, IOCapability, OOBDataPresent, Bonding, MITM, SecureConnection, Keypress, MaximumEncryptionKeySize, InitiatorKeyDistribution, ResponderKeyDistribution);
;
}
void (*external_BLEConnecterImpl_send_SMP_SMPPairingConfirm_listener)(struct BLEConnecterImpl_Instance *, uint16_t, ble_random_number_t)= 0x0;
void (*BLEConnecterImpl_send_SMP_SMPPairingConfirm_listener)(struct BLEConnecterImpl_Instance *, uint16_t, ble_random_number_t)= 0x0;
void register_external_BLEConnecterImpl_send_SMP_SMPPairingConfirm_listener(void (*_listener)(struct BLEConnecterImpl_Instance *, uint16_t, ble_random_number_t)){
external_BLEConnecterImpl_send_SMP_SMPPairingConfirm_listener = _listener;
}
void register_BLEConnecterImpl_send_SMP_SMPPairingConfirm_listener(void (*_listener)(struct BLEConnecterImpl_Instance *, uint16_t, ble_random_number_t)){
BLEConnecterImpl_send_SMP_SMPPairingConfirm_listener = _listener;
}
void BLEConnecterImpl_send_SMP_SMPPairingConfirm(struct BLEConnecterImpl_Instance *_instance, uint16_t Handle, ble_random_number_t ConfirmValue){
if (BLEConnecterImpl_send_SMP_SMPPairingConfirm_listener != 0x0) BLEConnecterImpl_send_SMP_SMPPairingConfirm_listener(_instance, Handle, ConfirmValue);
if (external_BLEConnecterImpl_send_SMP_SMPPairingConfirm_listener != 0x0) external_BLEConnecterImpl_send_SMP_SMPPairingConfirm_listener(_instance, Handle, ConfirmValue);
;
}
void (*external_BLEConnecterImpl_send_SMP_SMPPairingRandom_listener)(struct BLEConnecterImpl_Instance *, uint16_t, ble_random_number_t)= 0x0;
void (*BLEConnecterImpl_send_SMP_SMPPairingRandom_listener)(struct BLEConnecterImpl_Instance *, uint16_t, ble_random_number_t)= 0x0;
void register_external_BLEConnecterImpl_send_SMP_SMPPairingRandom_listener(void (*_listener)(struct BLEConnecterImpl_Instance *, uint16_t, ble_random_number_t)){
external_BLEConnecterImpl_send_SMP_SMPPairingRandom_listener = _listener;
}
void register_BLEConnecterImpl_send_SMP_SMPPairingRandom_listener(void (*_listener)(struct BLEConnecterImpl_Instance *, uint16_t, ble_random_number_t)){
BLEConnecterImpl_send_SMP_SMPPairingRandom_listener = _listener;
}
void BLEConnecterImpl_send_SMP_SMPPairingRandom(struct BLEConnecterImpl_Instance *_instance, uint16_t Handle, ble_random_number_t RandomValue){
if (BLEConnecterImpl_send_SMP_SMPPairingRandom_listener != 0x0) BLEConnecterImpl_send_SMP_SMPPairingRandom_listener(_instance, Handle, RandomValue);
if (external_BLEConnecterImpl_send_SMP_SMPPairingRandom_listener != 0x0) external_BLEConnecterImpl_send_SMP_SMPPairingRandom_listener(_instance, Handle, RandomValue);
;
}
void (*external_BLEConnecterImpl_send_SMP_SMPPairingFailed_listener)(struct BLEConnecterImpl_Instance *, uint16_t, uint8_t)= 0x0;
void (*BLEConnecterImpl_send_SMP_SMPPairingFailed_listener)(struct BLEConnecterImpl_Instance *, uint16_t, uint8_t)= 0x0;
void register_external_BLEConnecterImpl_send_SMP_SMPPairingFailed_listener(void (*_listener)(struct BLEConnecterImpl_Instance *, uint16_t, uint8_t)){
external_BLEConnecterImpl_send_SMP_SMPPairingFailed_listener = _listener;
}
void register_BLEConnecterImpl_send_SMP_SMPPairingFailed_listener(void (*_listener)(struct BLEConnecterImpl_Instance *, uint16_t, uint8_t)){
BLEConnecterImpl_send_SMP_SMPPairingFailed_listener = _listener;
}
void BLEConnecterImpl_send_SMP_SMPPairingFailed(struct BLEConnecterImpl_Instance *_instance, uint16_t Handle, uint8_t Reason){
if (BLEConnecterImpl_send_SMP_SMPPairingFailed_listener != 0x0) BLEConnecterImpl_send_SMP_SMPPairingFailed_listener(_instance, Handle, Reason);
if (external_BLEConnecterImpl_send_SMP_SMPPairingFailed_listener != 0x0) external_BLEConnecterImpl_send_SMP_SMPPairingFailed_listener(_instance, Handle, Reason);
;
}
void (*external_BLEConnecterImpl_send_SMP_SMPPairingPublicKey_listener)(struct BLEConnecterImpl_Instance *, uint16_t, smp_public_key_t, smp_public_key_t)= 0x0;
void (*BLEConnecterImpl_send_SMP_SMPPairingPublicKey_listener)(struct BLEConnecterImpl_Instance *, uint16_t, smp_public_key_t, smp_public_key_t)= 0x0;
void register_external_BLEConnecterImpl_send_SMP_SMPPairingPublicKey_listener(void (*_listener)(struct BLEConnecterImpl_Instance *, uint16_t, smp_public_key_t, smp_public_key_t)){
external_BLEConnecterImpl_send_SMP_SMPPairingPublicKey_listener = _listener;
}
void register_BLEConnecterImpl_send_SMP_SMPPairingPublicKey_listener(void (*_listener)(struct BLEConnecterImpl_Instance *, uint16_t, smp_public_key_t, smp_public_key_t)){
BLEConnecterImpl_send_SMP_SMPPairingPublicKey_listener = _listener;
}
void BLEConnecterImpl_send_SMP_SMPPairingPublicKey(struct BLEConnecterImpl_Instance *_instance, uint16_t Handle, smp_public_key_t KeyX, smp_public_key_t KeyY){
if (BLEConnecterImpl_send_SMP_SMPPairingPublicKey_listener != 0x0) BLEConnecterImpl_send_SMP_SMPPairingPublicKey_listener(_instance, Handle, KeyX, KeyY);
if (external_BLEConnecterImpl_send_SMP_SMPPairingPublicKey_listener != 0x0) external_BLEConnecterImpl_send_SMP_SMPPairingPublicKey_listener(_instance, Handle, KeyX, KeyY);
;
}
void (*external_BLEConnecterImpl_send_SMP_SMPPairingDHKeyCheck_listener)(struct BLEConnecterImpl_Instance *, uint16_t, ble_random_number_t)= 0x0;
void (*BLEConnecterImpl_send_SMP_SMPPairingDHKeyCheck_listener)(struct BLEConnecterImpl_Instance *, uint16_t, ble_random_number_t)= 0x0;
void register_external_BLEConnecterImpl_send_SMP_SMPPairingDHKeyCheck_listener(void (*_listener)(struct BLEConnecterImpl_Instance *, uint16_t, ble_random_number_t)){
external_BLEConnecterImpl_send_SMP_SMPPairingDHKeyCheck_listener = _listener;
}
void register_BLEConnecterImpl_send_SMP_SMPPairingDHKeyCheck_listener(void (*_listener)(struct BLEConnecterImpl_Instance *, uint16_t, ble_random_number_t)){
BLEConnecterImpl_send_SMP_SMPPairingDHKeyCheck_listener = _listener;
}
void BLEConnecterImpl_send_SMP_SMPPairingDHKeyCheck(struct BLEConnecterImpl_Instance *_instance, uint16_t Handle, ble_random_number_t DHKeyCheck){
if (BLEConnecterImpl_send_SMP_SMPPairingDHKeyCheck_listener != 0x0) BLEConnecterImpl_send_SMP_SMPPairingDHKeyCheck_listener(_instance, Handle, DHKeyCheck);
if (external_BLEConnecterImpl_send_SMP_SMPPairingDHKeyCheck_listener != 0x0) external_BLEConnecterImpl_send_SMP_SMPPairingDHKeyCheck_listener(_instance, Handle, DHKeyCheck);
;
}
void (*external_BLEConnecterImpl_send_SMP_SMPKeypressNotification_listener)(struct BLEConnecterImpl_Instance *, uint16_t, uint8_t)= 0x0;
void (*BLEConnecterImpl_send_SMP_SMPKeypressNotification_listener)(struct BLEConnecterImpl_Instance *, uint16_t, uint8_t)= 0x0;
void register_external_BLEConnecterImpl_send_SMP_SMPKeypressNotification_listener(void (*_listener)(struct BLEConnecterImpl_Instance *, uint16_t, uint8_t)){
external_BLEConnecterImpl_send_SMP_SMPKeypressNotification_listener = _listener;
}
void register_BLEConnecterImpl_send_SMP_SMPKeypressNotification_listener(void (*_listener)(struct BLEConnecterImpl_Instance *, uint16_t, uint8_t)){
BLEConnecterImpl_send_SMP_SMPKeypressNotification_listener = _listener;
}
void BLEConnecterImpl_send_SMP_SMPKeypressNotification(struct BLEConnecterImpl_Instance *_instance, uint16_t Handle, uint8_t Type){
if (BLEConnecterImpl_send_SMP_SMPKeypressNotification_listener != 0x0) BLEConnecterImpl_send_SMP_SMPKeypressNotification_listener(_instance, Handle, Type);
if (external_BLEConnecterImpl_send_SMP_SMPKeypressNotification_listener != 0x0) external_BLEConnecterImpl_send_SMP_SMPKeypressNotification_listener(_instance, Handle, Type);
;
}
void (*external_BLEConnecterImpl_send_SMP_SMPEncryptionInformation_listener)(struct BLEConnecterImpl_Instance *, uint16_t, ble_random_number_t)= 0x0;
void (*BLEConnecterImpl_send_SMP_SMPEncryptionInformation_listener)(struct BLEConnecterImpl_Instance *, uint16_t, ble_random_number_t)= 0x0;
void register_external_BLEConnecterImpl_send_SMP_SMPEncryptionInformation_listener(void (*_listener)(struct BLEConnecterImpl_Instance *, uint16_t, ble_random_number_t)){
external_BLEConnecterImpl_send_SMP_SMPEncryptionInformation_listener = _listener;
}
void register_BLEConnecterImpl_send_SMP_SMPEncryptionInformation_listener(void (*_listener)(struct BLEConnecterImpl_Instance *, uint16_t, ble_random_number_t)){
BLEConnecterImpl_send_SMP_SMPEncryptionInformation_listener = _listener;
}
void BLEConnecterImpl_send_SMP_SMPEncryptionInformation(struct BLEConnecterImpl_Instance *_instance, uint16_t Handle, ble_random_number_t LongTermKey){
if (BLEConnecterImpl_send_SMP_SMPEncryptionInformation_listener != 0x0) BLEConnecterImpl_send_SMP_SMPEncryptionInformation_listener(_instance, Handle, LongTermKey);
if (external_BLEConnecterImpl_send_SMP_SMPEncryptionInformation_listener != 0x0) external_BLEConnecterImpl_send_SMP_SMPEncryptionInformation_listener(_instance, Handle, LongTermKey);
;
}
void (*external_BLEConnecterImpl_send_SMP_SMPMasterIdentification_listener)(struct BLEConnecterImpl_Instance *, uint16_t, uint16_t, ble_random_part_t)= 0x0;
void (*BLEConnecterImpl_send_SMP_SMPMasterIdentification_listener)(struct BLEConnecterImpl_Instance *, uint16_t, uint16_t, ble_random_part_t)= 0x0;
void register_external_BLEConnecterImpl_send_SMP_SMPMasterIdentification_listener(void (*_listener)(struct BLEConnecterImpl_Instance *, uint16_t, uint16_t, ble_random_part_t)){
external_BLEConnecterImpl_send_SMP_SMPMasterIdentification_listener = _listener;
}
void register_BLEConnecterImpl_send_SMP_SMPMasterIdentification_listener(void (*_listener)(struct BLEConnecterImpl_Instance *, uint16_t, uint16_t, ble_random_part_t)){
BLEConnecterImpl_send_SMP_SMPMasterIdentification_listener = _listener;
}
void BLEConnecterImpl_send_SMP_SMPMasterIdentification(struct BLEConnecterImpl_Instance *_instance, uint16_t Handle, uint16_t EDIV, ble_random_part_t Rand){
if (BLEConnecterImpl_send_SMP_SMPMasterIdentification_listener != 0x0) BLEConnecterImpl_send_SMP_SMPMasterIdentification_listener(_instance, Handle, EDIV, Rand);
if (external_BLEConnecterImpl_send_SMP_SMPMasterIdentification_listener != 0x0) external_BLEConnecterImpl_send_SMP_SMPMasterIdentification_listener(_instance, Handle, EDIV, Rand);
;
}
void (*external_BLEConnecterImpl_send_SMP_SMPIdentityInformation_listener)(struct BLEConnecterImpl_Instance *, uint16_t, ble_random_number_t)= 0x0;
void (*BLEConnecterImpl_send_SMP_SMPIdentityInformation_listener)(struct BLEConnecterImpl_Instance *, uint16_t, ble_random_number_t)= 0x0;
void register_external_BLEConnecterImpl_send_SMP_SMPIdentityInformation_listener(void (*_listener)(struct BLEConnecterImpl_Instance *, uint16_t, ble_random_number_t)){
external_BLEConnecterImpl_send_SMP_SMPIdentityInformation_listener = _listener;
}
void register_BLEConnecterImpl_send_SMP_SMPIdentityInformation_listener(void (*_listener)(struct BLEConnecterImpl_Instance *, uint16_t, ble_random_number_t)){
BLEConnecterImpl_send_SMP_SMPIdentityInformation_listener = _listener;
}
void BLEConnecterImpl_send_SMP_SMPIdentityInformation(struct BLEConnecterImpl_Instance *_instance, uint16_t Handle, ble_random_number_t IdentityResolvingKey){
if (BLEConnecterImpl_send_SMP_SMPIdentityInformation_listener != 0x0) BLEConnecterImpl_send_SMP_SMPIdentityInformation_listener(_instance, Handle, IdentityResolvingKey);
if (external_BLEConnecterImpl_send_SMP_SMPIdentityInformation_listener != 0x0) external_BLEConnecterImpl_send_SMP_SMPIdentityInformation_listener(_instance, Handle, IdentityResolvingKey);
;
}
void (*external_BLEConnecterImpl_send_SMP_SMPIdentityAddressInformation_listener)(struct BLEConnecterImpl_Instance *, uint16_t, uint8_t, bdaddr_t)= 0x0;
void (*BLEConnecterImpl_send_SMP_SMPIdentityAddressInformation_listener)(struct BLEConnecterImpl_Instance *, uint16_t, uint8_t, bdaddr_t)= 0x0;
void register_external_BLEConnecterImpl_send_SMP_SMPIdentityAddressInformation_listener(void (*_listener)(struct BLEConnecterImpl_Instance *, uint16_t, uint8_t, bdaddr_t)){
external_BLEConnecterImpl_send_SMP_SMPIdentityAddressInformation_listener = _listener;
}
void register_BLEConnecterImpl_send_SMP_SMPIdentityAddressInformation_listener(void (*_listener)(struct BLEConnecterImpl_Instance *, uint16_t, uint8_t, bdaddr_t)){
BLEConnecterImpl_send_SMP_SMPIdentityAddressInformation_listener = _listener;
}
void BLEConnecterImpl_send_SMP_SMPIdentityAddressInformation(struct BLEConnecterImpl_Instance *_instance, uint16_t Handle, uint8_t AddressType, bdaddr_t Address){
if (BLEConnecterImpl_send_SMP_SMPIdentityAddressInformation_listener != 0x0) BLEConnecterImpl_send_SMP_SMPIdentityAddressInformation_listener(_instance, Handle, AddressType, Address);
if (external_BLEConnecterImpl_send_SMP_SMPIdentityAddressInformation_listener != 0x0) external_BLEConnecterImpl_send_SMP_SMPIdentityAddressInformation_listener(_instance, Handle, AddressType, Address);
;
}
void (*external_BLEConnecterImpl_send_SMP_SMPSigningInformation_listener)(struct BLEConnecterImpl_Instance *, uint16_t, ble_random_number_t)= 0x0;
void (*BLEConnecterImpl_send_SMP_SMPSigningInformation_listener)(struct BLEConnecterImpl_Instance *, uint16_t, ble_random_number_t)= 0x0;
void register_external_BLEConnecterImpl_send_SMP_SMPSigningInformation_listener(void (*_listener)(struct BLEConnecterImpl_Instance *, uint16_t, ble_random_number_t)){
external_BLEConnecterImpl_send_SMP_SMPSigningInformation_listener = _listener;
}
void register_BLEConnecterImpl_send_SMP_SMPSigningInformation_listener(void (*_listener)(struct BLEConnecterImpl_Instance *, uint16_t, ble_random_number_t)){
BLEConnecterImpl_send_SMP_SMPSigningInformation_listener = _listener;
}
void BLEConnecterImpl_send_SMP_SMPSigningInformation(struct BLEConnecterImpl_Instance *_instance, uint16_t Handle, ble_random_number_t SignatureKey){
if (BLEConnecterImpl_send_SMP_SMPSigningInformation_listener != 0x0) BLEConnecterImpl_send_SMP_SMPSigningInformation_listener(_instance, Handle, SignatureKey);
if (external_BLEConnecterImpl_send_SMP_SMPSigningInformation_listener != 0x0) external_BLEConnecterImpl_send_SMP_SMPSigningInformation_listener(_instance, Handle, SignatureKey);
;
}
void (*external_BLEConnecterImpl_send_SMP_SMPSecurityRequest_listener)(struct BLEConnecterImpl_Instance *, uint16_t, uint8_t, uint8_t, uint8_t, uint8_t)= 0x0;
void (*BLEConnecterImpl_send_SMP_SMPSecurityRequest_listener)(struct BLEConnecterImpl_Instance *, uint16_t, uint8_t, uint8_t, uint8_t, uint8_t)= 0x0;
void register_external_BLEConnecterImpl_send_SMP_SMPSecurityRequest_listener(void (*_listener)(struct BLEConnecterImpl_Instance *, uint16_t, uint8_t, uint8_t, uint8_t, uint8_t)){
external_BLEConnecterImpl_send_SMP_SMPSecurityRequest_listener = _listener;
}
void register_BLEConnecterImpl_send_SMP_SMPSecurityRequest_listener(void (*_listener)(struct BLEConnecterImpl_Instance *, uint16_t, uint8_t, uint8_t, uint8_t, uint8_t)){
BLEConnecterImpl_send_SMP_SMPSecurityRequest_listener = _listener;
}
void BLEConnecterImpl_send_SMP_SMPSecurityRequest(struct BLEConnecterImpl_Instance *_instance, uint16_t Handle, uint8_t Bonding, uint8_t MITM, uint8_t SecureConnection, uint8_t Keypress){
if (BLEConnecterImpl_send_SMP_SMPSecurityRequest_listener != 0x0) BLEConnecterImpl_send_SMP_SMPSecurityRequest_listener(_instance, Handle, Bonding, MITM, SecureConnection, Keypress);
if (external_BLEConnecterImpl_send_SMP_SMPSecurityRequest_listener != 0x0) external_BLEConnecterImpl_send_SMP_SMPSecurityRequest_listener(_instance, Handle, Bonding, MITM, SecureConnection, Keypress);
;
}
void (*external_BLEConnecterImpl_send_ATT_ATTFindInformationRequest_listener)(struct BLEConnecterImpl_Instance *, uint16_t, uint16_t, uint16_t)= 0x0;
void (*BLEConnecterImpl_send_ATT_ATTFindInformationRequest_listener)(struct BLEConnecterImpl_Instance *, uint16_t, uint16_t, uint16_t)= 0x0;
void register_external_BLEConnecterImpl_send_ATT_ATTFindInformationRequest_listener(void (*_listener)(struct BLEConnecterImpl_Instance *, uint16_t, uint16_t, uint16_t)){
external_BLEConnecterImpl_send_ATT_ATTFindInformationRequest_listener = _listener;
}
void register_BLEConnecterImpl_send_ATT_ATTFindInformationRequest_listener(void (*_listener)(struct BLEConnecterImpl_Instance *, uint16_t, uint16_t, uint16_t)){
BLEConnecterImpl_send_ATT_ATTFindInformationRequest_listener = _listener;
}
void BLEConnecterImpl_send_ATT_ATTFindInformationRequest(struct BLEConnecterImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t StartingHandle, uint16_t EndingHandle){
if (BLEConnecterImpl_send_ATT_ATTFindInformationRequest_listener != 0x0) BLEConnecterImpl_send_ATT_ATTFindInformationRequest_listener(_instance, ConnectionHandle, StartingHandle, EndingHandle);
if (external_BLEConnecterImpl_send_ATT_ATTFindInformationRequest_listener != 0x0) external_BLEConnecterImpl_send_ATT_ATTFindInformationRequest_listener(_instance, ConnectionHandle, StartingHandle, EndingHandle);
;
}
void (*external_BLEConnecterImpl_send_ATT_ATTFindInformationResponse_listener)(struct BLEConnecterImpl_Instance *, uint16_t, uint8_t, ble_gatt_data_t)= 0x0;
void (*BLEConnecterImpl_send_ATT_ATTFindInformationResponse_listener)(struct BLEConnecterImpl_Instance *, uint16_t, uint8_t, ble_gatt_data_t)= 0x0;
void register_external_BLEConnecterImpl_send_ATT_ATTFindInformationResponse_listener(void (*_listener)(struct BLEConnecterImpl_Instance *, uint16_t, uint8_t, ble_gatt_data_t)){
external_BLEConnecterImpl_send_ATT_ATTFindInformationResponse_listener = _listener;
}
void register_BLEConnecterImpl_send_ATT_ATTFindInformationResponse_listener(void (*_listener)(struct BLEConnecterImpl_Instance *, uint16_t, uint8_t, ble_gatt_data_t)){
BLEConnecterImpl_send_ATT_ATTFindInformationResponse_listener = _listener;
}
void BLEConnecterImpl_send_ATT_ATTFindInformationResponse(struct BLEConnecterImpl_Instance *_instance, uint16_t ConnectionHandle, uint8_t Format, ble_gatt_data_t InformationData){
if (BLEConnecterImpl_send_ATT_ATTFindInformationResponse_listener != 0x0) BLEConnecterImpl_send_ATT_ATTFindInformationResponse_listener(_instance, ConnectionHandle, Format, InformationData);
if (external_BLEConnecterImpl_send_ATT_ATTFindInformationResponse_listener != 0x0) external_BLEConnecterImpl_send_ATT_ATTFindInformationResponse_listener(_instance, ConnectionHandle, Format, InformationData);
;
}
void (*external_BLEConnecterImpl_send_ATT_ATTFindInformationError_listener)(struct BLEConnecterImpl_Instance *, uint16_t, uint16_t, uint8_t)= 0x0;
void (*BLEConnecterImpl_send_ATT_ATTFindInformationError_listener)(struct BLEConnecterImpl_Instance *, uint16_t, uint16_t, uint8_t)= 0x0;
void register_external_BLEConnecterImpl_send_ATT_ATTFindInformationError_listener(void (*_listener)(struct BLEConnecterImpl_Instance *, uint16_t, uint16_t, uint8_t)){
external_BLEConnecterImpl_send_ATT_ATTFindInformationError_listener = _listener;
}
void register_BLEConnecterImpl_send_ATT_ATTFindInformationError_listener(void (*_listener)(struct BLEConnecterImpl_Instance *, uint16_t, uint16_t, uint8_t)){
BLEConnecterImpl_send_ATT_ATTFindInformationError_listener = _listener;
}
void BLEConnecterImpl_send_ATT_ATTFindInformationError(struct BLEConnecterImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error){
if (BLEConnecterImpl_send_ATT_ATTFindInformationError_listener != 0x0) BLEConnecterImpl_send_ATT_ATTFindInformationError_listener(_instance, ConnectionHandle, AttributeHandle, Error);
if (external_BLEConnecterImpl_send_ATT_ATTFindInformationError_listener != 0x0) external_BLEConnecterImpl_send_ATT_ATTFindInformationError_listener(_instance, ConnectionHandle, AttributeHandle, Error);
;
}
void (*external_BLEConnecterImpl_send_ATT_ATTReadByTypeRequest_listener)(struct BLEConnecterImpl_Instance *, uint16_t, uint16_t, uint16_t, ble_uuid_t)= 0x0;
void (*BLEConnecterImpl_send_ATT_ATTReadByTypeRequest_listener)(struct BLEConnecterImpl_Instance *, uint16_t, uint16_t, uint16_t, ble_uuid_t)= 0x0;
void register_external_BLEConnecterImpl_send_ATT_ATTReadByTypeRequest_listener(void (*_listener)(struct BLEConnecterImpl_Instance *, uint16_t, uint16_t, uint16_t, ble_uuid_t)){
external_BLEConnecterImpl_send_ATT_ATTReadByTypeRequest_listener = _listener;
}
void register_BLEConnecterImpl_send_ATT_ATTReadByTypeRequest_listener(void (*_listener)(struct BLEConnecterImpl_Instance *, uint16_t, uint16_t, uint16_t, ble_uuid_t)){
BLEConnecterImpl_send_ATT_ATTReadByTypeRequest_listener = _listener;
}
void BLEConnecterImpl_send_ATT_ATTReadByTypeRequest(struct BLEConnecterImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t StartingHandle, uint16_t EndingHandle, ble_uuid_t AttributeType){
if (BLEConnecterImpl_send_ATT_ATTReadByTypeRequest_listener != 0x0) BLEConnecterImpl_send_ATT_ATTReadByTypeRequest_listener(_instance, ConnectionHandle, StartingHandle, EndingHandle, AttributeType);
if (external_BLEConnecterImpl_send_ATT_ATTReadByTypeRequest_listener != 0x0) external_BLEConnecterImpl_send_ATT_ATTReadByTypeRequest_listener(_instance, ConnectionHandle, StartingHandle, EndingHandle, AttributeType);
;
}
void (*external_BLEConnecterImpl_send_ATT_ATTReadByTypeResponse_listener)(struct BLEConnecterImpl_Instance *, uint16_t, uint8_t, ble_gatt_data_t)= 0x0;
void (*BLEConnecterImpl_send_ATT_ATTReadByTypeResponse_listener)(struct BLEConnecterImpl_Instance *, uint16_t, uint8_t, ble_gatt_data_t)= 0x0;
void register_external_BLEConnecterImpl_send_ATT_ATTReadByTypeResponse_listener(void (*_listener)(struct BLEConnecterImpl_Instance *, uint16_t, uint8_t, ble_gatt_data_t)){
external_BLEConnecterImpl_send_ATT_ATTReadByTypeResponse_listener = _listener;
}
void register_BLEConnecterImpl_send_ATT_ATTReadByTypeResponse_listener(void (*_listener)(struct BLEConnecterImpl_Instance *, uint16_t, uint8_t, ble_gatt_data_t)){
BLEConnecterImpl_send_ATT_ATTReadByTypeResponse_listener = _listener;
}
void BLEConnecterImpl_send_ATT_ATTReadByTypeResponse(struct BLEConnecterImpl_Instance *_instance, uint16_t ConnectionHandle, uint8_t Length, ble_gatt_data_t AttributeDataList){
if (BLEConnecterImpl_send_ATT_ATTReadByTypeResponse_listener != 0x0) BLEConnecterImpl_send_ATT_ATTReadByTypeResponse_listener(_instance, ConnectionHandle, Length, AttributeDataList);
if (external_BLEConnecterImpl_send_ATT_ATTReadByTypeResponse_listener != 0x0) external_BLEConnecterImpl_send_ATT_ATTReadByTypeResponse_listener(_instance, ConnectionHandle, Length, AttributeDataList);
;
}
void (*external_BLEConnecterImpl_send_ATT_ATTReadByTypeError_listener)(struct BLEConnecterImpl_Instance *, uint16_t, uint16_t, uint8_t)= 0x0;
void (*BLEConnecterImpl_send_ATT_ATTReadByTypeError_listener)(struct BLEConnecterImpl_Instance *, uint16_t, uint16_t, uint8_t)= 0x0;
void register_external_BLEConnecterImpl_send_ATT_ATTReadByTypeError_listener(void (*_listener)(struct BLEConnecterImpl_Instance *, uint16_t, uint16_t, uint8_t)){
external_BLEConnecterImpl_send_ATT_ATTReadByTypeError_listener = _listener;
}
void register_BLEConnecterImpl_send_ATT_ATTReadByTypeError_listener(void (*_listener)(struct BLEConnecterImpl_Instance *, uint16_t, uint16_t, uint8_t)){
BLEConnecterImpl_send_ATT_ATTReadByTypeError_listener = _listener;
}
void BLEConnecterImpl_send_ATT_ATTReadByTypeError(struct BLEConnecterImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error){
if (BLEConnecterImpl_send_ATT_ATTReadByTypeError_listener != 0x0) BLEConnecterImpl_send_ATT_ATTReadByTypeError_listener(_instance, ConnectionHandle, AttributeHandle, Error);
if (external_BLEConnecterImpl_send_ATT_ATTReadByTypeError_listener != 0x0) external_BLEConnecterImpl_send_ATT_ATTReadByTypeError_listener(_instance, ConnectionHandle, AttributeHandle, Error);
;
}
void (*external_BLEConnecterImpl_send_ATT_ATTReadRequest_listener)(struct BLEConnecterImpl_Instance *, uint16_t, uint16_t)= 0x0;
void (*BLEConnecterImpl_send_ATT_ATTReadRequest_listener)(struct BLEConnecterImpl_Instance *, uint16_t, uint16_t)= 0x0;
void register_external_BLEConnecterImpl_send_ATT_ATTReadRequest_listener(void (*_listener)(struct BLEConnecterImpl_Instance *, uint16_t, uint16_t)){
external_BLEConnecterImpl_send_ATT_ATTReadRequest_listener = _listener;
}
void register_BLEConnecterImpl_send_ATT_ATTReadRequest_listener(void (*_listener)(struct BLEConnecterImpl_Instance *, uint16_t, uint16_t)){
BLEConnecterImpl_send_ATT_ATTReadRequest_listener = _listener;
}
void BLEConnecterImpl_send_ATT_ATTReadRequest(struct BLEConnecterImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle){
if (BLEConnecterImpl_send_ATT_ATTReadRequest_listener != 0x0) BLEConnecterImpl_send_ATT_ATTReadRequest_listener(_instance, ConnectionHandle, AttributeHandle);
if (external_BLEConnecterImpl_send_ATT_ATTReadRequest_listener != 0x0) external_BLEConnecterImpl_send_ATT_ATTReadRequest_listener(_instance, ConnectionHandle, AttributeHandle);
;
}
void (*external_BLEConnecterImpl_send_ATT_ATTReadResponse_listener)(struct BLEConnecterImpl_Instance *, uint16_t, ble_gatt_data_t)= 0x0;
void (*BLEConnecterImpl_send_ATT_ATTReadResponse_listener)(struct BLEConnecterImpl_Instance *, uint16_t, ble_gatt_data_t)= 0x0;
void register_external_BLEConnecterImpl_send_ATT_ATTReadResponse_listener(void (*_listener)(struct BLEConnecterImpl_Instance *, uint16_t, ble_gatt_data_t)){
external_BLEConnecterImpl_send_ATT_ATTReadResponse_listener = _listener;
}
void register_BLEConnecterImpl_send_ATT_ATTReadResponse_listener(void (*_listener)(struct BLEConnecterImpl_Instance *, uint16_t, ble_gatt_data_t)){
BLEConnecterImpl_send_ATT_ATTReadResponse_listener = _listener;
}
void BLEConnecterImpl_send_ATT_ATTReadResponse(struct BLEConnecterImpl_Instance *_instance, uint16_t ConnectionHandle, ble_gatt_data_t AttributeValue){
if (BLEConnecterImpl_send_ATT_ATTReadResponse_listener != 0x0) BLEConnecterImpl_send_ATT_ATTReadResponse_listener(_instance, ConnectionHandle, AttributeValue);
if (external_BLEConnecterImpl_send_ATT_ATTReadResponse_listener != 0x0) external_BLEConnecterImpl_send_ATT_ATTReadResponse_listener(_instance, ConnectionHandle, AttributeValue);
;
}
void (*external_BLEConnecterImpl_send_ATT_ATTReadError_listener)(struct BLEConnecterImpl_Instance *, uint16_t, uint16_t, uint8_t)= 0x0;
void (*BLEConnecterImpl_send_ATT_ATTReadError_listener)(struct BLEConnecterImpl_Instance *, uint16_t, uint16_t, uint8_t)= 0x0;
void register_external_BLEConnecterImpl_send_ATT_ATTReadError_listener(void (*_listener)(struct BLEConnecterImpl_Instance *, uint16_t, uint16_t, uint8_t)){
external_BLEConnecterImpl_send_ATT_ATTReadError_listener = _listener;
}
void register_BLEConnecterImpl_send_ATT_ATTReadError_listener(void (*_listener)(struct BLEConnecterImpl_Instance *, uint16_t, uint16_t, uint8_t)){
BLEConnecterImpl_send_ATT_ATTReadError_listener = _listener;
}
void BLEConnecterImpl_send_ATT_ATTReadError(struct BLEConnecterImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error){
if (BLEConnecterImpl_send_ATT_ATTReadError_listener != 0x0) BLEConnecterImpl_send_ATT_ATTReadError_listener(_instance, ConnectionHandle, AttributeHandle, Error);
if (external_BLEConnecterImpl_send_ATT_ATTReadError_listener != 0x0) external_BLEConnecterImpl_send_ATT_ATTReadError_listener(_instance, ConnectionHandle, AttributeHandle, Error);
;
}
void (*external_BLEConnecterImpl_send_ATT_ATTReadByGroupTypeRequest_listener)(struct BLEConnecterImpl_Instance *, uint16_t, uint16_t, uint16_t, ble_uuid_t)= 0x0;
void (*BLEConnecterImpl_send_ATT_ATTReadByGroupTypeRequest_listener)(struct BLEConnecterImpl_Instance *, uint16_t, uint16_t, uint16_t, ble_uuid_t)= 0x0;
void register_external_BLEConnecterImpl_send_ATT_ATTReadByGroupTypeRequest_listener(void (*_listener)(struct BLEConnecterImpl_Instance *, uint16_t, uint16_t, uint16_t, ble_uuid_t)){
external_BLEConnecterImpl_send_ATT_ATTReadByGroupTypeRequest_listener = _listener;
}
void register_BLEConnecterImpl_send_ATT_ATTReadByGroupTypeRequest_listener(void (*_listener)(struct BLEConnecterImpl_Instance *, uint16_t, uint16_t, uint16_t, ble_uuid_t)){
BLEConnecterImpl_send_ATT_ATTReadByGroupTypeRequest_listener = _listener;
}
void BLEConnecterImpl_send_ATT_ATTReadByGroupTypeRequest(struct BLEConnecterImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t StartingHandle, uint16_t EndingHandle, ble_uuid_t AttributeGroupType){
if (BLEConnecterImpl_send_ATT_ATTReadByGroupTypeRequest_listener != 0x0) BLEConnecterImpl_send_ATT_ATTReadByGroupTypeRequest_listener(_instance, ConnectionHandle, StartingHandle, EndingHandle, AttributeGroupType);
if (external_BLEConnecterImpl_send_ATT_ATTReadByGroupTypeRequest_listener != 0x0) external_BLEConnecterImpl_send_ATT_ATTReadByGroupTypeRequest_listener(_instance, ConnectionHandle, StartingHandle, EndingHandle, AttributeGroupType);
;
}
void (*external_BLEConnecterImpl_send_ATT_ATTReadByGroupTypeResponse_listener)(struct BLEConnecterImpl_Instance *, uint16_t, uint8_t, ble_gatt_data_t)= 0x0;
void (*BLEConnecterImpl_send_ATT_ATTReadByGroupTypeResponse_listener)(struct BLEConnecterImpl_Instance *, uint16_t, uint8_t, ble_gatt_data_t)= 0x0;
void register_external_BLEConnecterImpl_send_ATT_ATTReadByGroupTypeResponse_listener(void (*_listener)(struct BLEConnecterImpl_Instance *, uint16_t, uint8_t, ble_gatt_data_t)){
external_BLEConnecterImpl_send_ATT_ATTReadByGroupTypeResponse_listener = _listener;
}
void register_BLEConnecterImpl_send_ATT_ATTReadByGroupTypeResponse_listener(void (*_listener)(struct BLEConnecterImpl_Instance *, uint16_t, uint8_t, ble_gatt_data_t)){
BLEConnecterImpl_send_ATT_ATTReadByGroupTypeResponse_listener = _listener;
}
void BLEConnecterImpl_send_ATT_ATTReadByGroupTypeResponse(struct BLEConnecterImpl_Instance *_instance, uint16_t ConnectionHandle, uint8_t Length, ble_gatt_data_t AttributeDataList){
if (BLEConnecterImpl_send_ATT_ATTReadByGroupTypeResponse_listener != 0x0) BLEConnecterImpl_send_ATT_ATTReadByGroupTypeResponse_listener(_instance, ConnectionHandle, Length, AttributeDataList);
if (external_BLEConnecterImpl_send_ATT_ATTReadByGroupTypeResponse_listener != 0x0) external_BLEConnecterImpl_send_ATT_ATTReadByGroupTypeResponse_listener(_instance, ConnectionHandle, Length, AttributeDataList);
;
}
void (*external_BLEConnecterImpl_send_ATT_ATTReadByGroupTypeError_listener)(struct BLEConnecterImpl_Instance *, uint16_t, uint16_t, uint8_t)= 0x0;
void (*BLEConnecterImpl_send_ATT_ATTReadByGroupTypeError_listener)(struct BLEConnecterImpl_Instance *, uint16_t, uint16_t, uint8_t)= 0x0;
void register_external_BLEConnecterImpl_send_ATT_ATTReadByGroupTypeError_listener(void (*_listener)(struct BLEConnecterImpl_Instance *, uint16_t, uint16_t, uint8_t)){
external_BLEConnecterImpl_send_ATT_ATTReadByGroupTypeError_listener = _listener;
}
void register_BLEConnecterImpl_send_ATT_ATTReadByGroupTypeError_listener(void (*_listener)(struct BLEConnecterImpl_Instance *, uint16_t, uint16_t, uint8_t)){
BLEConnecterImpl_send_ATT_ATTReadByGroupTypeError_listener = _listener;
}
void BLEConnecterImpl_send_ATT_ATTReadByGroupTypeError(struct BLEConnecterImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error){
if (BLEConnecterImpl_send_ATT_ATTReadByGroupTypeError_listener != 0x0) BLEConnecterImpl_send_ATT_ATTReadByGroupTypeError_listener(_instance, ConnectionHandle, AttributeHandle, Error);
if (external_BLEConnecterImpl_send_ATT_ATTReadByGroupTypeError_listener != 0x0) external_BLEConnecterImpl_send_ATT_ATTReadByGroupTypeError_listener(_instance, ConnectionHandle, AttributeHandle, Error);
;
}
void (*external_BLEConnecterImpl_send_ATT_ATTWriteRequest_listener)(struct BLEConnecterImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t)= 0x0;
void (*BLEConnecterImpl_send_ATT_ATTWriteRequest_listener)(struct BLEConnecterImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t)= 0x0;
void register_external_BLEConnecterImpl_send_ATT_ATTWriteRequest_listener(void (*_listener)(struct BLEConnecterImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t)){
external_BLEConnecterImpl_send_ATT_ATTWriteRequest_listener = _listener;
}
void register_BLEConnecterImpl_send_ATT_ATTWriteRequest_listener(void (*_listener)(struct BLEConnecterImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t)){
BLEConnecterImpl_send_ATT_ATTWriteRequest_listener = _listener;
}
void BLEConnecterImpl_send_ATT_ATTWriteRequest(struct BLEConnecterImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, ble_gatt_data_t AttributeValue){
if (BLEConnecterImpl_send_ATT_ATTWriteRequest_listener != 0x0) BLEConnecterImpl_send_ATT_ATTWriteRequest_listener(_instance, ConnectionHandle, AttributeHandle, AttributeValue);
if (external_BLEConnecterImpl_send_ATT_ATTWriteRequest_listener != 0x0) external_BLEConnecterImpl_send_ATT_ATTWriteRequest_listener(_instance, ConnectionHandle, AttributeHandle, AttributeValue);
;
}
void (*external_BLEConnecterImpl_send_ATT_ATTWriteResponse_listener)(struct BLEConnecterImpl_Instance *, uint16_t)= 0x0;
void (*BLEConnecterImpl_send_ATT_ATTWriteResponse_listener)(struct BLEConnecterImpl_Instance *, uint16_t)= 0x0;
void register_external_BLEConnecterImpl_send_ATT_ATTWriteResponse_listener(void (*_listener)(struct BLEConnecterImpl_Instance *, uint16_t)){
external_BLEConnecterImpl_send_ATT_ATTWriteResponse_listener = _listener;
}
void register_BLEConnecterImpl_send_ATT_ATTWriteResponse_listener(void (*_listener)(struct BLEConnecterImpl_Instance *, uint16_t)){
BLEConnecterImpl_send_ATT_ATTWriteResponse_listener = _listener;
}
void BLEConnecterImpl_send_ATT_ATTWriteResponse(struct BLEConnecterImpl_Instance *_instance, uint16_t ConnectionHandle){
if (BLEConnecterImpl_send_ATT_ATTWriteResponse_listener != 0x0) BLEConnecterImpl_send_ATT_ATTWriteResponse_listener(_instance, ConnectionHandle);
if (external_BLEConnecterImpl_send_ATT_ATTWriteResponse_listener != 0x0) external_BLEConnecterImpl_send_ATT_ATTWriteResponse_listener(_instance, ConnectionHandle);
;
}
void (*external_BLEConnecterImpl_send_ATT_ATTWriteError_listener)(struct BLEConnecterImpl_Instance *, uint16_t, uint16_t, uint8_t)= 0x0;
void (*BLEConnecterImpl_send_ATT_ATTWriteError_listener)(struct BLEConnecterImpl_Instance *, uint16_t, uint16_t, uint8_t)= 0x0;
void register_external_BLEConnecterImpl_send_ATT_ATTWriteError_listener(void (*_listener)(struct BLEConnecterImpl_Instance *, uint16_t, uint16_t, uint8_t)){
external_BLEConnecterImpl_send_ATT_ATTWriteError_listener = _listener;
}
void register_BLEConnecterImpl_send_ATT_ATTWriteError_listener(void (*_listener)(struct BLEConnecterImpl_Instance *, uint16_t, uint16_t, uint8_t)){
BLEConnecterImpl_send_ATT_ATTWriteError_listener = _listener;
}
void BLEConnecterImpl_send_ATT_ATTWriteError(struct BLEConnecterImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error){
if (BLEConnecterImpl_send_ATT_ATTWriteError_listener != 0x0) BLEConnecterImpl_send_ATT_ATTWriteError_listener(_instance, ConnectionHandle, AttributeHandle, Error);
if (external_BLEConnecterImpl_send_ATT_ATTWriteError_listener != 0x0) external_BLEConnecterImpl_send_ATT_ATTWriteError_listener(_instance, ConnectionHandle, AttributeHandle, Error);
;
}
void (*external_BLEConnecterImpl_send_ATT_ATTWriteCommand_listener)(struct BLEConnecterImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t)= 0x0;
void (*BLEConnecterImpl_send_ATT_ATTWriteCommand_listener)(struct BLEConnecterImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t)= 0x0;
void register_external_BLEConnecterImpl_send_ATT_ATTWriteCommand_listener(void (*_listener)(struct BLEConnecterImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t)){
external_BLEConnecterImpl_send_ATT_ATTWriteCommand_listener = _listener;
}
void register_BLEConnecterImpl_send_ATT_ATTWriteCommand_listener(void (*_listener)(struct BLEConnecterImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t)){
BLEConnecterImpl_send_ATT_ATTWriteCommand_listener = _listener;
}
void BLEConnecterImpl_send_ATT_ATTWriteCommand(struct BLEConnecterImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, ble_gatt_data_t AttributeValue){
if (BLEConnecterImpl_send_ATT_ATTWriteCommand_listener != 0x0) BLEConnecterImpl_send_ATT_ATTWriteCommand_listener(_instance, ConnectionHandle, AttributeHandle, AttributeValue);
if (external_BLEConnecterImpl_send_ATT_ATTWriteCommand_listener != 0x0) external_BLEConnecterImpl_send_ATT_ATTWriteCommand_listener(_instance, ConnectionHandle, AttributeHandle, AttributeValue);
;
}
void (*external_BLEConnecterImpl_send_ATT_ATTHandleValueNotification_listener)(struct BLEConnecterImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t)= 0x0;
void (*BLEConnecterImpl_send_ATT_ATTHandleValueNotification_listener)(struct BLEConnecterImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t)= 0x0;
void register_external_BLEConnecterImpl_send_ATT_ATTHandleValueNotification_listener(void (*_listener)(struct BLEConnecterImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t)){
external_BLEConnecterImpl_send_ATT_ATTHandleValueNotification_listener = _listener;
}
void register_BLEConnecterImpl_send_ATT_ATTHandleValueNotification_listener(void (*_listener)(struct BLEConnecterImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t)){
BLEConnecterImpl_send_ATT_ATTHandleValueNotification_listener = _listener;
}
void BLEConnecterImpl_send_ATT_ATTHandleValueNotification(struct BLEConnecterImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, ble_gatt_data_t AttributeValue){
if (BLEConnecterImpl_send_ATT_ATTHandleValueNotification_listener != 0x0) BLEConnecterImpl_send_ATT_ATTHandleValueNotification_listener(_instance, ConnectionHandle, AttributeHandle, AttributeValue);
if (external_BLEConnecterImpl_send_ATT_ATTHandleValueNotification_listener != 0x0) external_BLEConnecterImpl_send_ATT_ATTHandleValueNotification_listener(_instance, ConnectionHandle, AttributeHandle, AttributeValue);
;
}
void (*external_BLEConnecterImpl_send_ATT_ATTHandleValueIndication_listener)(struct BLEConnecterImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t)= 0x0;
void (*BLEConnecterImpl_send_ATT_ATTHandleValueIndication_listener)(struct BLEConnecterImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t)= 0x0;
void register_external_BLEConnecterImpl_send_ATT_ATTHandleValueIndication_listener(void (*_listener)(struct BLEConnecterImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t)){
external_BLEConnecterImpl_send_ATT_ATTHandleValueIndication_listener = _listener;
}
void register_BLEConnecterImpl_send_ATT_ATTHandleValueIndication_listener(void (*_listener)(struct BLEConnecterImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t)){
BLEConnecterImpl_send_ATT_ATTHandleValueIndication_listener = _listener;
}
void BLEConnecterImpl_send_ATT_ATTHandleValueIndication(struct BLEConnecterImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, ble_gatt_data_t AttributeValue){
if (BLEConnecterImpl_send_ATT_ATTHandleValueIndication_listener != 0x0) BLEConnecterImpl_send_ATT_ATTHandleValueIndication_listener(_instance, ConnectionHandle, AttributeHandle, AttributeValue);
if (external_BLEConnecterImpl_send_ATT_ATTHandleValueIndication_listener != 0x0) external_BLEConnecterImpl_send_ATT_ATTHandleValueIndication_listener(_instance, ConnectionHandle, AttributeHandle, AttributeValue);
;
}
void (*external_BLEConnecterImpl_send_ATT_ATTHandleValueConfirmation_listener)(struct BLEConnecterImpl_Instance *, uint16_t)= 0x0;
void (*BLEConnecterImpl_send_ATT_ATTHandleValueConfirmation_listener)(struct BLEConnecterImpl_Instance *, uint16_t)= 0x0;
void register_external_BLEConnecterImpl_send_ATT_ATTHandleValueConfirmation_listener(void (*_listener)(struct BLEConnecterImpl_Instance *, uint16_t)){
external_BLEConnecterImpl_send_ATT_ATTHandleValueConfirmation_listener = _listener;
}
void register_BLEConnecterImpl_send_ATT_ATTHandleValueConfirmation_listener(void (*_listener)(struct BLEConnecterImpl_Instance *, uint16_t)){
BLEConnecterImpl_send_ATT_ATTHandleValueConfirmation_listener = _listener;
}
void BLEConnecterImpl_send_ATT_ATTHandleValueConfirmation(struct BLEConnecterImpl_Instance *_instance, uint16_t ConnectionHandle){
if (BLEConnecterImpl_send_ATT_ATTHandleValueConfirmation_listener != 0x0) BLEConnecterImpl_send_ATT_ATTHandleValueConfirmation_listener(_instance, ConnectionHandle);
if (external_BLEConnecterImpl_send_ATT_ATTHandleValueConfirmation_listener != 0x0) external_BLEConnecterImpl_send_ATT_ATTHandleValueConfirmation_listener(_instance, ConnectionHandle);
;
}


// Enqueue incoming messages:
// Message enqueue
void enqueue_BLEConnecterImpl_Connecter_Connect(struct BLEConnecterImpl_Instance * inst) {
    fifo_lock(&(inst->fifo));
    if ( fifo_byte_available(&(inst->fifo)) > 4 ) {

        _fifo_enqueue(&(inst->fifo), (72 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 72 & 0xFF );

        // Reception Port
        _fifo_enqueue(&(inst->fifo), (0 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 0 & 0xFF );
    }
    fifo_unlock_and_notify(&(inst->fifo));
}
void enqueue_BLEConnecterImpl_Connecter_ConnectTo(struct BLEConnecterImpl_Instance * inst, uint8_t AddressType, bdaddr_t Address) {
    fifo_lock(&(inst->fifo));
    if ( fifo_byte_available(&(inst->fifo)) > 11 ) {

        _fifo_enqueue(&(inst->fifo), (73 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 73 & 0xFF );

        // Reception Port
        _fifo_enqueue(&(inst->fifo), (0 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 0 & 0xFF );

// parameter AddressType
union u_AddressType_t {
uint8_t p;
byte bytebuffer[1];
} u_AddressType;
u_AddressType.p = AddressType;
_fifo_enqueue(&(inst->fifo), u_AddressType.bytebuffer[0] & 0xFF );

// parameter Address
union u_Address_t {
bdaddr_t p;
byte bytebuffer[6];
} u_Address;
u_Address.p = Address;
_fifo_enqueue(&(inst->fifo), u_Address.bytebuffer[5] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Address.bytebuffer[4] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Address.bytebuffer[3] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Address.bytebuffer[2] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Address.bytebuffer[1] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Address.bytebuffer[0] & 0xFF );
    }
    fifo_unlock_and_notify(&(inst->fifo));
}
void enqueue_BLEConnecterImpl_Connecter_Stop(struct BLEConnecterImpl_Instance * inst) {
    fifo_lock(&(inst->fifo));
    if ( fifo_byte_available(&(inst->fifo)) > 4 ) {

        _fifo_enqueue(&(inst->fifo), (74 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 74 & 0xFF );

        // Reception Port
        _fifo_enqueue(&(inst->fifo), (0 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 0 & 0xFF );
    }
    fifo_unlock_and_notify(&(inst->fifo));
}
void enqueue_BLEConnecterImpl_Socket_Closed(struct BLEConnecterImpl_Instance * inst) {
    fifo_lock(&(inst->fifo));
    if ( fifo_byte_available(&(inst->fifo)) > 4 ) {

        _fifo_enqueue(&(inst->fifo), (50 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 50 & 0xFF );

        // Reception Port
        _fifo_enqueue(&(inst->fifo), (1 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 1 & 0xFF );
    }
    fifo_unlock_and_notify(&(inst->fifo));
}
void enqueue_BLEConnecterImpl_HCIEvents_DisconnectStatus(struct BLEConnecterImpl_Instance * inst, uint8_t NumberAllowedCommandPackets, uint8_t Status) {
    fifo_lock(&(inst->fifo));
    if ( fifo_byte_available(&(inst->fifo)) > 6 ) {

        _fifo_enqueue(&(inst->fifo), (54 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 54 & 0xFF );

        // Reception Port
        _fifo_enqueue(&(inst->fifo), (2 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 2 & 0xFF );

// parameter NumberAllowedCommandPackets
union u_NumberAllowedCommandPackets_t {
uint8_t p;
byte bytebuffer[1];
} u_NumberAllowedCommandPackets;
u_NumberAllowedCommandPackets.p = NumberAllowedCommandPackets;
_fifo_enqueue(&(inst->fifo), u_NumberAllowedCommandPackets.bytebuffer[0] & 0xFF );

// parameter Status
union u_Status_t {
uint8_t p;
byte bytebuffer[1];
} u_Status;
u_Status.p = Status;
_fifo_enqueue(&(inst->fifo), u_Status.bytebuffer[0] & 0xFF );
    }
    fifo_unlock_and_notify(&(inst->fifo));
}
void enqueue_BLEConnecterImpl_HCIEvents_DisconnectionCompleted(struct BLEConnecterImpl_Instance * inst, uint8_t Status, uint16_t ConnectionHandle, uint8_t Reason) {
    fifo_lock(&(inst->fifo));
    if ( fifo_byte_available(&(inst->fifo)) > 8 ) {

        _fifo_enqueue(&(inst->fifo), (55 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 55 & 0xFF );

        // Reception Port
        _fifo_enqueue(&(inst->fifo), (2 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 2 & 0xFF );

// parameter Status
union u_Status_t {
uint8_t p;
byte bytebuffer[1];
} u_Status;
u_Status.p = Status;
_fifo_enqueue(&(inst->fifo), u_Status.bytebuffer[0] & 0xFF );

// parameter ConnectionHandle
union u_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ConnectionHandle;
u_ConnectionHandle.p = ConnectionHandle;
_fifo_enqueue(&(inst->fifo), u_ConnectionHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_ConnectionHandle.bytebuffer[0] & 0xFF );

// parameter Reason
union u_Reason_t {
uint8_t p;
byte bytebuffer[1];
} u_Reason;
u_Reason.p = Reason;
_fifo_enqueue(&(inst->fifo), u_Reason.bytebuffer[0] & 0xFF );
    }
    fifo_unlock_and_notify(&(inst->fifo));
}
void enqueue_BLEConnecterImpl_HCIEvents_LECreateConnectionStatus(struct BLEConnecterImpl_Instance * inst, uint8_t NumberAllowedCommandPackets, uint8_t Status) {
    fifo_lock(&(inst->fifo));
    if ( fifo_byte_available(&(inst->fifo)) > 6 ) {

        _fifo_enqueue(&(inst->fifo), (61 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 61 & 0xFF );

        // Reception Port
        _fifo_enqueue(&(inst->fifo), (2 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 2 & 0xFF );

// parameter NumberAllowedCommandPackets
union u_NumberAllowedCommandPackets_t {
uint8_t p;
byte bytebuffer[1];
} u_NumberAllowedCommandPackets;
u_NumberAllowedCommandPackets.p = NumberAllowedCommandPackets;
_fifo_enqueue(&(inst->fifo), u_NumberAllowedCommandPackets.bytebuffer[0] & 0xFF );

// parameter Status
union u_Status_t {
uint8_t p;
byte bytebuffer[1];
} u_Status;
u_Status.p = Status;
_fifo_enqueue(&(inst->fifo), u_Status.bytebuffer[0] & 0xFF );
    }
    fifo_unlock_and_notify(&(inst->fifo));
}
void enqueue_BLEConnecterImpl_HCIEvents_LECreateConnectionCancelCompleted(struct BLEConnecterImpl_Instance * inst, uint8_t NumberAllowedCommandPackets, uint8_t Status) {
    fifo_lock(&(inst->fifo));
    if ( fifo_byte_available(&(inst->fifo)) > 6 ) {

        _fifo_enqueue(&(inst->fifo), (62 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 62 & 0xFF );

        // Reception Port
        _fifo_enqueue(&(inst->fifo), (2 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 2 & 0xFF );

// parameter NumberAllowedCommandPackets
union u_NumberAllowedCommandPackets_t {
uint8_t p;
byte bytebuffer[1];
} u_NumberAllowedCommandPackets;
u_NumberAllowedCommandPackets.p = NumberAllowedCommandPackets;
_fifo_enqueue(&(inst->fifo), u_NumberAllowedCommandPackets.bytebuffer[0] & 0xFF );

// parameter Status
union u_Status_t {
uint8_t p;
byte bytebuffer[1];
} u_Status;
u_Status.p = Status;
_fifo_enqueue(&(inst->fifo), u_Status.bytebuffer[0] & 0xFF );
    }
    fifo_unlock_and_notify(&(inst->fifo));
}
void enqueue_BLEConnecterImpl_HCIEvents_LEConnectionComplete(struct BLEConnecterImpl_Instance * inst, uint8_t Status, uint16_t ConnectionHandle, uint8_t Role, uint8_t PeerAddressType, bdaddr_t PeerAddress, uint16_t ConnInterval, uint16_t ConnLatency, uint16_t SupervisionTimeout, uint8_t MasterClockAccuracy) {
    fifo_lock(&(inst->fifo));
    if ( fifo_byte_available(&(inst->fifo)) > 22 ) {

        _fifo_enqueue(&(inst->fifo), (63 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 63 & 0xFF );

        // Reception Port
        _fifo_enqueue(&(inst->fifo), (2 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 2 & 0xFF );

// parameter Status
union u_Status_t {
uint8_t p;
byte bytebuffer[1];
} u_Status;
u_Status.p = Status;
_fifo_enqueue(&(inst->fifo), u_Status.bytebuffer[0] & 0xFF );

// parameter ConnectionHandle
union u_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ConnectionHandle;
u_ConnectionHandle.p = ConnectionHandle;
_fifo_enqueue(&(inst->fifo), u_ConnectionHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_ConnectionHandle.bytebuffer[0] & 0xFF );

// parameter Role
union u_Role_t {
uint8_t p;
byte bytebuffer[1];
} u_Role;
u_Role.p = Role;
_fifo_enqueue(&(inst->fifo), u_Role.bytebuffer[0] & 0xFF );

// parameter PeerAddressType
union u_PeerAddressType_t {
uint8_t p;
byte bytebuffer[1];
} u_PeerAddressType;
u_PeerAddressType.p = PeerAddressType;
_fifo_enqueue(&(inst->fifo), u_PeerAddressType.bytebuffer[0] & 0xFF );

// parameter PeerAddress
union u_PeerAddress_t {
bdaddr_t p;
byte bytebuffer[6];
} u_PeerAddress;
u_PeerAddress.p = PeerAddress;
_fifo_enqueue(&(inst->fifo), u_PeerAddress.bytebuffer[5] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_PeerAddress.bytebuffer[4] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_PeerAddress.bytebuffer[3] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_PeerAddress.bytebuffer[2] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_PeerAddress.bytebuffer[1] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_PeerAddress.bytebuffer[0] & 0xFF );

// parameter ConnInterval
union u_ConnInterval_t {
uint16_t p;
byte bytebuffer[2];
} u_ConnInterval;
u_ConnInterval.p = ConnInterval;
_fifo_enqueue(&(inst->fifo), u_ConnInterval.bytebuffer[1] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_ConnInterval.bytebuffer[0] & 0xFF );

// parameter ConnLatency
union u_ConnLatency_t {
uint16_t p;
byte bytebuffer[2];
} u_ConnLatency;
u_ConnLatency.p = ConnLatency;
_fifo_enqueue(&(inst->fifo), u_ConnLatency.bytebuffer[1] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_ConnLatency.bytebuffer[0] & 0xFF );

// parameter SupervisionTimeout
union u_SupervisionTimeout_t {
uint16_t p;
byte bytebuffer[2];
} u_SupervisionTimeout;
u_SupervisionTimeout.p = SupervisionTimeout;
_fifo_enqueue(&(inst->fifo), u_SupervisionTimeout.bytebuffer[1] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_SupervisionTimeout.bytebuffer[0] & 0xFF );

// parameter MasterClockAccuracy
union u_MasterClockAccuracy_t {
uint8_t p;
byte bytebuffer[1];
} u_MasterClockAccuracy;
u_MasterClockAccuracy.p = MasterClockAccuracy;
_fifo_enqueue(&(inst->fifo), u_MasterClockAccuracy.bytebuffer[0] & 0xFF );
    }
    fifo_unlock_and_notify(&(inst->fifo));
}
void enqueue_BLEConnecterImpl_HCIEvents_LEEnhancedConnectionComplete(struct BLEConnecterImpl_Instance * inst, uint8_t Status, uint16_t ConnectionHandle, uint8_t Role, uint8_t PeerAddressType, bdaddr_t PeerAddress, bdaddr_t LocalResolvablePrivateAddress, bdaddr_t PeerResolvablePrivateAddress, uint16_t ConnInterval, uint16_t ConnLatency, uint16_t SupervisionTimeout, uint8_t MasterClockAccuracy) {
    fifo_lock(&(inst->fifo));
    if ( fifo_byte_available(&(inst->fifo)) > 34 ) {

        _fifo_enqueue(&(inst->fifo), (64 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 64 & 0xFF );

        // Reception Port
        _fifo_enqueue(&(inst->fifo), (2 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 2 & 0xFF );

// parameter Status
union u_Status_t {
uint8_t p;
byte bytebuffer[1];
} u_Status;
u_Status.p = Status;
_fifo_enqueue(&(inst->fifo), u_Status.bytebuffer[0] & 0xFF );

// parameter ConnectionHandle
union u_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ConnectionHandle;
u_ConnectionHandle.p = ConnectionHandle;
_fifo_enqueue(&(inst->fifo), u_ConnectionHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_ConnectionHandle.bytebuffer[0] & 0xFF );

// parameter Role
union u_Role_t {
uint8_t p;
byte bytebuffer[1];
} u_Role;
u_Role.p = Role;
_fifo_enqueue(&(inst->fifo), u_Role.bytebuffer[0] & 0xFF );

// parameter PeerAddressType
union u_PeerAddressType_t {
uint8_t p;
byte bytebuffer[1];
} u_PeerAddressType;
u_PeerAddressType.p = PeerAddressType;
_fifo_enqueue(&(inst->fifo), u_PeerAddressType.bytebuffer[0] & 0xFF );

// parameter PeerAddress
union u_PeerAddress_t {
bdaddr_t p;
byte bytebuffer[6];
} u_PeerAddress;
u_PeerAddress.p = PeerAddress;
_fifo_enqueue(&(inst->fifo), u_PeerAddress.bytebuffer[5] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_PeerAddress.bytebuffer[4] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_PeerAddress.bytebuffer[3] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_PeerAddress.bytebuffer[2] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_PeerAddress.bytebuffer[1] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_PeerAddress.bytebuffer[0] & 0xFF );

// parameter LocalResolvablePrivateAddress
union u_LocalResolvablePrivateAddress_t {
bdaddr_t p;
byte bytebuffer[6];
} u_LocalResolvablePrivateAddress;
u_LocalResolvablePrivateAddress.p = LocalResolvablePrivateAddress;
_fifo_enqueue(&(inst->fifo), u_LocalResolvablePrivateAddress.bytebuffer[5] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_LocalResolvablePrivateAddress.bytebuffer[4] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_LocalResolvablePrivateAddress.bytebuffer[3] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_LocalResolvablePrivateAddress.bytebuffer[2] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_LocalResolvablePrivateAddress.bytebuffer[1] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_LocalResolvablePrivateAddress.bytebuffer[0] & 0xFF );

// parameter PeerResolvablePrivateAddress
union u_PeerResolvablePrivateAddress_t {
bdaddr_t p;
byte bytebuffer[6];
} u_PeerResolvablePrivateAddress;
u_PeerResolvablePrivateAddress.p = PeerResolvablePrivateAddress;
_fifo_enqueue(&(inst->fifo), u_PeerResolvablePrivateAddress.bytebuffer[5] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_PeerResolvablePrivateAddress.bytebuffer[4] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_PeerResolvablePrivateAddress.bytebuffer[3] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_PeerResolvablePrivateAddress.bytebuffer[2] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_PeerResolvablePrivateAddress.bytebuffer[1] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_PeerResolvablePrivateAddress.bytebuffer[0] & 0xFF );

// parameter ConnInterval
union u_ConnInterval_t {
uint16_t p;
byte bytebuffer[2];
} u_ConnInterval;
u_ConnInterval.p = ConnInterval;
_fifo_enqueue(&(inst->fifo), u_ConnInterval.bytebuffer[1] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_ConnInterval.bytebuffer[0] & 0xFF );

// parameter ConnLatency
union u_ConnLatency_t {
uint16_t p;
byte bytebuffer[2];
} u_ConnLatency;
u_ConnLatency.p = ConnLatency;
_fifo_enqueue(&(inst->fifo), u_ConnLatency.bytebuffer[1] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_ConnLatency.bytebuffer[0] & 0xFF );

// parameter SupervisionTimeout
union u_SupervisionTimeout_t {
uint16_t p;
byte bytebuffer[2];
} u_SupervisionTimeout;
u_SupervisionTimeout.p = SupervisionTimeout;
_fifo_enqueue(&(inst->fifo), u_SupervisionTimeout.bytebuffer[1] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_SupervisionTimeout.bytebuffer[0] & 0xFF );

// parameter MasterClockAccuracy
union u_MasterClockAccuracy_t {
uint8_t p;
byte bytebuffer[1];
} u_MasterClockAccuracy;
u_MasterClockAccuracy.p = MasterClockAccuracy;
_fifo_enqueue(&(inst->fifo), u_MasterClockAccuracy.bytebuffer[0] & 0xFF );
    }
    fifo_unlock_and_notify(&(inst->fifo));
}

// Session functions:

// Message Process Queue:
int BLEConnecterImpl_processMessageQueue(struct BLEConnecterImpl_Instance * _instance) {
fifo_lock(&(_instance->fifo));
if (fifo_empty(&(_instance->fifo))) fifo_wait(&(_instance->fifo));
uint8_t mbufi = 0;

// Read the code of the next port/message in the queue
uint16_t code = fifo_dequeue(&(_instance->fifo)) << 8;

code += fifo_dequeue(&(_instance->fifo));

// Switch to call the appropriate handler
switch(code) {
case 72:{
byte mbuf[4 - 2];
while (mbufi < (4 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
uint8_t mbufi_Connect = 2;
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
case 0:{
BLEConnecterImpl_handle_Connecter_Connect(_instance);
return 1;
break;
}
}
break;
}
case 73:{
byte mbuf[11 - 2];
while (mbufi < (11 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
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
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
case 0:{
BLEConnecterImpl_handle_Connecter_ConnectTo(_instance,
 u_ConnectTo_AddressType.p /* AddressType */ ,
 u_ConnectTo_Address.p /* Address */ );
return 1;
break;
}
}
break;
}
case 74:{
byte mbuf[4 - 2];
while (mbufi < (4 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
uint8_t mbufi_Stop = 2;
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
case 0:{
BLEConnecterImpl_handle_Connecter_Stop(_instance);
return 1;
break;
}
}
break;
}
case 49:{
byte mbuf[10 - 2];
while (mbufi < (10 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
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
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
}
break;
}
case 50:{
byte mbuf[4 - 2];
while (mbufi < (4 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
uint8_t mbufi_Closed = 2;
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
case 1:{
BLEConnecterImpl_handle_Socket_Closed(_instance);
return 1;
break;
}
}
break;
}
case 51:{
byte mbuf[6 - 2];
while (mbufi < (6 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
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
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
}
break;
}
case 52:{
byte mbuf[6 - 2];
while (mbufi < (6 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
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
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
}
break;
}
case 53:{
byte mbuf[6 - 2];
while (mbufi < (6 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
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
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
}
break;
}
case 54:{
byte mbuf[6 - 2];
while (mbufi < (6 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
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
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
case 2:{
BLEConnecterImpl_handle_HCIEvents_DisconnectStatus(_instance,
 u_DisconnectStatus_NumberAllowedCommandPackets.p /* NumberAllowedCommandPackets */ ,
 u_DisconnectStatus_Status.p /* Status */ );
return 1;
break;
}
}
break;
}
case 55:{
byte mbuf[8 - 2];
while (mbufi < (8 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
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
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
case 2:{
BLEConnecterImpl_handle_HCIEvents_DisconnectionCompleted(_instance,
 u_DisconnectionCompleted_Status.p /* Status */ ,
 u_DisconnectionCompleted_ConnectionHandle.p /* ConnectionHandle */ ,
 u_DisconnectionCompleted_Reason.p /* Reason */ );
return 1;
break;
}
}
break;
}
case 56:{
byte mbuf[6 - 2];
while (mbufi < (6 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
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
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
}
break;
}
case 57:{
byte mbuf[6 - 2];
while (mbufi < (6 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
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
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
}
break;
}
case 58:{
byte mbuf[6 - 2];
while (mbufi < (6 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
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
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
}
break;
}
case 59:{
byte mbuf[6 - 2];
while (mbufi < (6 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
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
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
}
break;
}
case 60:{
byte mbuf[6 - 2];
while (mbufi < (6 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
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
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
}
break;
}
case 21:{
byte mbuf[6 - 2];
while (mbufi < (6 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
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
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
}
break;
}
case 22:{
byte mbuf[6 - 2];
while (mbufi < (6 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
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
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
}
break;
}
case 23:{
byte mbuf[44 - 2];
while (mbufi < (44 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
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
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
}
break;
}
case 61:{
byte mbuf[6 - 2];
while (mbufi < (6 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
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
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
case 2:{
BLEConnecterImpl_handle_HCIEvents_LECreateConnectionStatus(_instance,
 u_LECreateConnectionStatus_NumberAllowedCommandPackets.p /* NumberAllowedCommandPackets */ ,
 u_LECreateConnectionStatus_Status.p /* Status */ );
return 1;
break;
}
}
break;
}
case 62:{
byte mbuf[6 - 2];
while (mbufi < (6 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
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
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
case 2:{
BLEConnecterImpl_handle_HCIEvents_LECreateConnectionCancelCompleted(_instance,
 u_LECreateConnectionCancelCompleted_NumberAllowedCommandPackets.p /* NumberAllowedCommandPackets */ ,
 u_LECreateConnectionCancelCompleted_Status.p /* Status */ );
return 1;
break;
}
}
break;
}
case 63:{
byte mbuf[22 - 2];
while (mbufi < (22 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
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
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
case 2:{
BLEConnecterImpl_handle_HCIEvents_LEConnectionComplete(_instance,
 u_LEConnectionComplete_Status.p /* Status */ ,
 u_LEConnectionComplete_ConnectionHandle.p /* ConnectionHandle */ ,
 u_LEConnectionComplete_Role.p /* Role */ ,
 u_LEConnectionComplete_PeerAddressType.p /* PeerAddressType */ ,
 u_LEConnectionComplete_PeerAddress.p /* PeerAddress */ ,
 u_LEConnectionComplete_ConnInterval.p /* ConnInterval */ ,
 u_LEConnectionComplete_ConnLatency.p /* ConnLatency */ ,
 u_LEConnectionComplete_SupervisionTimeout.p /* SupervisionTimeout */ ,
 u_LEConnectionComplete_MasterClockAccuracy.p /* MasterClockAccuracy */ );
return 1;
break;
}
}
break;
}
case 64:{
byte mbuf[34 - 2];
while (mbufi < (34 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
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
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
case 2:{
BLEConnecterImpl_handle_HCIEvents_LEEnhancedConnectionComplete(_instance,
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
return 1;
break;
}
}
break;
}
case 65:{
byte mbuf[14 - 2];
while (mbufi < (14 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
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
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
}
break;
}
case 66:{
byte mbuf[22 - 2];
while (mbufi < (22 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
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
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
}
break;
}
case 24:{
byte mbuf[8 - 2];
while (mbufi < (8 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
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
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
}
break;
}
case 25:{
byte mbuf[6 - 2];
while (mbufi < (6 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
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
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
}
break;
}
case 27:{
byte mbuf[15 - 2];
while (mbufi < (15 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
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
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
}
break;
}
case 6:{
byte mbuf[15 - 2];
while (mbufi < (15 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
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
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
}
break;
}
case 7:{
byte mbuf[22 - 2];
while (mbufi < (22 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
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
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
}
break;
}
case 8:{
byte mbuf[22 - 2];
while (mbufi < (22 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
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
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
}
break;
}
case 9:{
byte mbuf[7 - 2];
while (mbufi < (7 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
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
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
}
break;
}
case 28:{
byte mbuf[70 - 2];
while (mbufi < (70 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
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
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
}
break;
}
case 29:{
byte mbuf[22 - 2];
while (mbufi < (22 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
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
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
}
break;
}
case 30:{
byte mbuf[7 - 2];
while (mbufi < (7 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
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
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
}
break;
}
case 10:{
byte mbuf[22 - 2];
while (mbufi < (22 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
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
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
}
break;
}
case 11:{
byte mbuf[16 - 2];
while (mbufi < (16 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
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
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
}
break;
}
case 12:{
byte mbuf[22 - 2];
while (mbufi < (22 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
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
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
}
break;
}
case 13:{
byte mbuf[13 - 2];
while (mbufi < (13 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
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
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
}
break;
}
case 31:{
byte mbuf[22 - 2];
while (mbufi < (22 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
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
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
}
break;
}
case 14:{
byte mbuf[10 - 2];
while (mbufi < (10 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
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
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
}
break;
}
case 32:{
byte mbuf[10 - 2];
while (mbufi < (10 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
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
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
}
break;
}
case 33:{
byte mbuf[31 - 2];
while (mbufi < (31 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
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
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
}
break;
}
case 34:{
byte mbuf[9 - 2];
while (mbufi < (9 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
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
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
}
break;
}
case 35:{
byte mbuf[26 - 2];
while (mbufi < (26 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
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
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
}
break;
}
case 36:{
byte mbuf[31 - 2];
while (mbufi < (31 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
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
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
}
break;
}
case 37:{
byte mbuf[9 - 2];
while (mbufi < (9 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
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
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
}
break;
}
case 38:{
byte mbuf[8 - 2];
while (mbufi < (8 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
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
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
}
break;
}
case 39:{
byte mbuf[30 - 2];
while (mbufi < (30 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
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
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
}
break;
}
case 40:{
byte mbuf[9 - 2];
while (mbufi < (9 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
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
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
}
break;
}
case 41:{
byte mbuf[26 - 2];
while (mbufi < (26 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
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
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
}
break;
}
case 42:{
byte mbuf[31 - 2];
while (mbufi < (31 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
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
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
}
break;
}
case 43:{
byte mbuf[9 - 2];
while (mbufi < (9 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
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
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
}
break;
}
case 44:{
byte mbuf[32 - 2];
while (mbufi < (32 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
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
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
}
break;
}
case 15:{
byte mbuf[6 - 2];
while (mbufi < (6 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
uint8_t mbufi_ATTWriteResponse = 2;
union u_ATTWriteResponse_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ATTWriteResponse_ConnectionHandle;
u_ATTWriteResponse_ConnectionHandle.bytebuffer[1] = mbuf[mbufi_ATTWriteResponse + 0];
u_ATTWriteResponse_ConnectionHandle.bytebuffer[0] = mbuf[mbufi_ATTWriteResponse + 1];
mbufi_ATTWriteResponse += 2;
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
}
break;
}
case 16:{
byte mbuf[9 - 2];
while (mbufi < (9 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
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
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
}
break;
}
case 45:{
byte mbuf[32 - 2];
while (mbufi < (32 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
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
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
}
break;
}
case 46:{
byte mbuf[32 - 2];
while (mbufi < (32 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
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
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
}
break;
}
case 47:{
byte mbuf[32 - 2];
while (mbufi < (32 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
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
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
}
break;
}
case 48:{
byte mbuf[6 - 2];
while (mbufi < (6 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
uint8_t mbufi_ATTHandleValueConfirmation = 2;
union u_ATTHandleValueConfirmation_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ATTHandleValueConfirmation_ConnectionHandle;
u_ATTHandleValueConfirmation_ConnectionHandle.bytebuffer[1] = mbuf[mbufi_ATTHandleValueConfirmation + 0];
u_ATTHandleValueConfirmation_ConnectionHandle.bytebuffer[0] = mbuf[mbufi_ATTHandleValueConfirmation + 1];
mbufi_ATTHandleValueConfirmation += 2;
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
}
break;
}
}
return 1;
}

// Thing main:
void BLEConnecterImpl_run(struct BLEConnecterImpl_Instance * _instance) {
if(_instance->initState != -1) {
BLEConnecterImpl_States_OnEntry(_instance->initState, _instance);
}
    while(1){
        BLEConnecterImpl_processMessageQueue(_instance);
    }
}


