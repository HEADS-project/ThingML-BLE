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
void BLEConnecterImpl_send_Connecter_Encrypted(struct BLEConnecterImpl_Instance *_instance);
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

// Sessions functionss:


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
;uint8_t PeerAddressType = _instance->BLEConnecterImpl_ConnectAddressType_var;
;bdaddr_t PeerAddress = _instance->BLEConnecterImpl_ConnectAddressBT_var;
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
case BLECONNECTERIMPL_STATES_CANCELCONNECTION_STATE:{
BLEConnecterImpl_send_HCICommands_LECreateConnectionCancel(_instance);
break;
}
case BLECONNECTERIMPL_STATES_CONNECTED_STATE:{
fprintf(stdout, "[INFO]: Connected!\n");
BLEConnecterImpl_send_Connecter_Connected(_instance, _instance->BLEConnecterImpl_ConnectedHandle_var, _instance->BLEConnecterImpl_ConnectedAddressType_var, _instance->BLEConnecterImpl_ConnectedAddress_var);
break;
}
case BLECONNECTERIMPL_STATES_ENCRYPTED_STATE:{
fprintf(stdout, "[INFO]: Connection encrypted!\n");
BLEConnecterImpl_send_Connecter_Encrypted(_instance);
break;
}
case BLECONNECTERIMPL_STATES_DISCONNECTING_STATE:{
BLEConnecterImpl_send_HCICommands_Disconnect(_instance, _instance->BLEConnecterImpl_ConnectedHandle_var, BTDISCONNECTREASON_REMOTE_USER);
break;
}
case BLECONNECTERIMPL_STATES_FAILURE_STATE:{
fprintf(stdout, "[ERROR]: BLE_connecter failed :(\n");
BLEConnecterImpl_send_Connecter_Failure(_instance);
BLEConnecterImpl_send_Connecter_Stopped(_instance);
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
case BLECONNECTERIMPL_STATES_CANCELCONNECTION_STATE:{
break;}
case BLECONNECTERIMPL_STATES_CONNECTED_STATE:{
break;}
case BLECONNECTERIMPL_STATES_ENCRYPTED_STATE:{
break;}
case BLECONNECTERIMPL_STATES_DISCONNECTING_STATE:{
break;}
case BLECONNECTERIMPL_STATES_FAILURE_STATE:{
break;}
default: break;
}
}

// Event Handlers for incoming messages:
void BLEConnecterImpl_handle_Connecter_Encrypt(struct BLEConnecterImpl_Instance *_instance) {
if(!(_instance->active)) return;
//Region States
uint8_t BLEConnecterImpl_States_State_event_consumed = 0;
if (_instance->BLEConnecterImpl_States_State == BLECONNECTERIMPL_STATES_CONNECTED_STATE) {
if (BLEConnecterImpl_States_State_event_consumed == 0 && 1) {
BLEConnecterImpl_send_HCICommands_LEStartEncryption(_instance, _instance->BLEConnecterImpl_ConnectedHandle_var, _instance->BLEConnecterImpl_RandomNumber_var, _instance->BLEConnecterImpl_EncryptedDiversifier_var, _instance->BLEConnecterImpl_LongTermKey_var);
BLEConnecterImpl_States_State_event_consumed = 1;
}
}
else if (_instance->BLEConnecterImpl_States_State == BLECONNECTERIMPL_STATES_ENCRYPTED_STATE) {
if (BLEConnecterImpl_States_State_event_consumed == 0 && 1) {
BLEConnecterImpl_send_Connecter_Encrypted(_instance);
BLEConnecterImpl_States_State_event_consumed = 1;
}
}
//End Region States
//End dsregion States
//Session list: 
}
void BLEConnecterImpl_handle_Connecter_Connect(struct BLEConnecterImpl_Instance *_instance) {
if(!(_instance->active)) return;
//Region States
uint8_t BLEConnecterImpl_States_State_event_consumed = 0;
if (_instance->BLEConnecterImpl_States_State == BLECONNECTERIMPL_STATES_NOTCONNECTED_STATE) {
if (BLEConnecterImpl_States_State_event_consumed == 0 && 1) {
BLEConnecterImpl_States_OnExit(BLECONNECTERIMPL_STATES_NOTCONNECTED_STATE, _instance);
_instance->BLEConnecterImpl_States_State = BLECONNECTERIMPL_STATES_CONNECTING_STATE;
str2ba(_instance->BLEConnecterImpl_ConnectAddress_var,&_instance->BLEConnecterImpl_ConnectAddressBT_var);
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
else if (_instance->BLEConnecterImpl_States_State == BLECONNECTERIMPL_STATES_ENCRYPTED_STATE) {
if (BLEConnecterImpl_States_State_event_consumed == 0 && 1) {
BLEConnecterImpl_send_Connecter_Connected(_instance, _instance->BLEConnecterImpl_ConnectedHandle_var, _instance->BLEConnecterImpl_ConnectedAddressType_var, _instance->BLEConnecterImpl_ConnectedAddress_var);
BLEConnecterImpl_States_State_event_consumed = 1;
}
}
else if (_instance->BLEConnecterImpl_States_State == BLECONNECTERIMPL_STATES_FAILURE_STATE) {
if (BLEConnecterImpl_States_State_event_consumed == 0 && 1) {
BLEConnecterImpl_States_OnExit(BLECONNECTERIMPL_STATES_FAILURE_STATE, _instance);
_instance->BLEConnecterImpl_States_State = BLECONNECTERIMPL_STATES_CONNECTING_STATE;
BLEConnecterImpl_States_OnEntry(BLECONNECTERIMPL_STATES_CONNECTING_STATE, _instance);
BLEConnecterImpl_States_State_event_consumed = 1;
}
}
//End Region States
//End dsregion States
//Session list: 
}
void BLEConnecterImpl_handle_Connecter_Stop(struct BLEConnecterImpl_Instance *_instance) {
if(!(_instance->active)) return;
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
BLEConnecterImpl_States_OnExit(BLECONNECTERIMPL_STATES_CONNECTING_STATE, _instance);
_instance->BLEConnecterImpl_States_State = BLECONNECTERIMPL_STATES_CANCELCONNECTION_STATE;
BLEConnecterImpl_States_OnEntry(BLECONNECTERIMPL_STATES_CANCELCONNECTION_STATE, _instance);
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
else if (_instance->BLEConnecterImpl_States_State == BLECONNECTERIMPL_STATES_ENCRYPTED_STATE) {
if (BLEConnecterImpl_States_State_event_consumed == 0 && 1) {
BLEConnecterImpl_States_OnExit(BLECONNECTERIMPL_STATES_ENCRYPTED_STATE, _instance);
_instance->BLEConnecterImpl_States_State = BLECONNECTERIMPL_STATES_DISCONNECTING_STATE;
BLEConnecterImpl_States_OnEntry(BLECONNECTERIMPL_STATES_DISCONNECTING_STATE, _instance);
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
void BLEConnecterImpl_handle_Connecter_ConnectToU(struct BLEConnecterImpl_Instance *_instance, uint8_t AddressType, bdaddr_t Address) {
if(!(_instance->active)) return;
//Region States
uint8_t BLEConnecterImpl_States_State_event_consumed = 0;
if (_instance->BLEConnecterImpl_States_State == BLECONNECTERIMPL_STATES_NOTCONNECTED_STATE) {
if (BLEConnecterImpl_States_State_event_consumed == 0 && 1) {
BLEConnecterImpl_States_OnExit(BLECONNECTERIMPL_STATES_NOTCONNECTED_STATE, _instance);
_instance->BLEConnecterImpl_States_State = BLECONNECTERIMPL_STATES_CONNECTING_STATE;
_instance->BLEConnecterImpl_ConnectAddressType_var = AddressType;
_instance->BLEConnecterImpl_ConnectAddressBT_var = Address;
BLEConnecterImpl_States_OnEntry(BLECONNECTERIMPL_STATES_CONNECTING_STATE, _instance);
BLEConnecterImpl_States_State_event_consumed = 1;
}
}
//End Region States
//End dsregion States
//Session list: 
}
void BLEConnecterImpl_handle_Connecter_ConnectTo(struct BLEConnecterImpl_Instance *_instance, uint8_t AddressType, bdaddr_t Address, ble_random_number_t LongTermKey, uint16_t EncryptedDiversifier, ble_random_part_t RandomNumber) {
if(!(_instance->active)) return;
//Region States
uint8_t BLEConnecterImpl_States_State_event_consumed = 0;
if (_instance->BLEConnecterImpl_States_State == BLECONNECTERIMPL_STATES_NOTCONNECTED_STATE) {
if (BLEConnecterImpl_States_State_event_consumed == 0 && 1) {
BLEConnecterImpl_States_OnExit(BLECONNECTERIMPL_STATES_NOTCONNECTED_STATE, _instance);
_instance->BLEConnecterImpl_States_State = BLECONNECTERIMPL_STATES_CONNECTING_STATE;
_instance->BLEConnecterImpl_ConnectAddressType_var = AddressType;
_instance->BLEConnecterImpl_ConnectAddressBT_var = Address;
_instance->BLEConnecterImpl_LongTermKey_var = LongTermKey;
_instance->BLEConnecterImpl_EncryptedDiversifier_var = EncryptedDiversifier;
_instance->BLEConnecterImpl_RandomNumber_var = RandomNumber;
BLEConnecterImpl_States_OnEntry(BLECONNECTERIMPL_STATES_CONNECTING_STATE, _instance);
BLEConnecterImpl_States_State_event_consumed = 1;
}
}
//End Region States
//End dsregion States
//Session list: 
}
void BLEConnecterImpl_handle_HCIEvents_DisconnectStatus(struct BLEConnecterImpl_Instance *_instance, uint8_t NumberAllowedCommandPackets, uint8_t Status) {
if(!(_instance->active)) return;
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
if(!(_instance->active)) return;
//Region States
uint8_t BLEConnecterImpl_States_State_event_consumed = 0;
if (_instance->BLEConnecterImpl_States_State == BLECONNECTERIMPL_STATES_CANCELCONNECTION_STATE) {
if (BLEConnecterImpl_States_State_event_consumed == 0 && (Status > 0)) {
BLEConnecterImpl_States_OnExit(BLECONNECTERIMPL_STATES_CANCELCONNECTION_STATE, _instance);
_instance->BLEConnecterImpl_States_State = BLECONNECTERIMPL_STATES_FAILURE_STATE;
BLEConnecterImpl_States_OnEntry(BLECONNECTERIMPL_STATES_FAILURE_STATE, _instance);
BLEConnecterImpl_States_State_event_consumed = 1;
}
}
//End Region States
//End dsregion States
//Session list: 
}
void BLEConnecterImpl_handle_HCIEvents_LEStartEncryptionStatus(struct BLEConnecterImpl_Instance *_instance, uint8_t NumberAllowedCommandPackets, uint8_t Status) {
if(!(_instance->active)) return;
//Region States
uint8_t BLEConnecterImpl_States_State_event_consumed = 0;
if (_instance->BLEConnecterImpl_States_State == BLECONNECTERIMPL_STATES_CONNECTED_STATE) {
if (BLEConnecterImpl_States_State_event_consumed == 0 && (Status > 0)) {
BLEConnecterImpl_States_OnExit(BLECONNECTERIMPL_STATES_CONNECTED_STATE, _instance);
_instance->BLEConnecterImpl_States_State = BLECONNECTERIMPL_STATES_FAILURE_STATE;
fprintf(stdout, "[ERROR]: Start encryption failed!\n");
BLEConnecterImpl_States_OnEntry(BLECONNECTERIMPL_STATES_FAILURE_STATE, _instance);
BLEConnecterImpl_States_State_event_consumed = 1;
}
else if (BLEConnecterImpl_States_State_event_consumed == 0 && (Status == 0)) {
fprintf(stdout, "[INFO]: Requested encryption...\n");
BLEConnecterImpl_States_State_event_consumed = 1;
}
}
//End Region States
//End dsregion States
//Session list: 
}
void BLEConnecterImpl_handle_HCIEvents_LEEnhancedConnectionComplete(struct BLEConnecterImpl_Instance *_instance, uint8_t Status, uint16_t ConnectionHandle, uint8_t Role, uint8_t PeerAddressType, bdaddr_t PeerAddress, bdaddr_t LocalResolvablePrivateAddress, bdaddr_t PeerResolvablePrivateAddress, uint16_t ConnInterval, uint16_t ConnLatency, uint16_t SupervisionTimeout, uint8_t MasterClockAccuracy) {
if(!(_instance->active)) return;
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
else if (_instance->BLEConnecterImpl_States_State == BLECONNECTERIMPL_STATES_CANCELCONNECTION_STATE) {
if (BLEConnecterImpl_States_State_event_consumed == 0 && (Status == 0x02)) {
BLEConnecterImpl_States_OnExit(BLECONNECTERIMPL_STATES_CANCELCONNECTION_STATE, _instance);
_instance->BLEConnecterImpl_States_State = BLECONNECTERIMPL_STATES_NOTCONNECTED_STATE;
BLEConnecterImpl_send_Connecter_Stopped(_instance);
BLEConnecterImpl_States_OnEntry(BLECONNECTERIMPL_STATES_NOTCONNECTED_STATE, _instance);
BLEConnecterImpl_States_State_event_consumed = 1;
}
}
//End Region States
//End dsregion States
//Session list: 
}
void BLEConnecterImpl_handle_HCIEvents_LEConnectionComplete(struct BLEConnecterImpl_Instance *_instance, uint8_t Status, uint16_t ConnectionHandle, uint8_t Role, uint8_t PeerAddressType, bdaddr_t PeerAddress, uint16_t ConnInterval, uint16_t ConnLatency, uint16_t SupervisionTimeout, uint8_t MasterClockAccuracy) {
if(!(_instance->active)) return;
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
else if (_instance->BLEConnecterImpl_States_State == BLECONNECTERIMPL_STATES_CANCELCONNECTION_STATE) {
if (BLEConnecterImpl_States_State_event_consumed == 0 && (Status == 0x02)) {
BLEConnecterImpl_States_OnExit(BLECONNECTERIMPL_STATES_CANCELCONNECTION_STATE, _instance);
_instance->BLEConnecterImpl_States_State = BLECONNECTERIMPL_STATES_NOTCONNECTED_STATE;
BLEConnecterImpl_send_Connecter_Stopped(_instance);
BLEConnecterImpl_States_OnEntry(BLECONNECTERIMPL_STATES_NOTCONNECTED_STATE, _instance);
BLEConnecterImpl_States_State_event_consumed = 1;
}
}
//End Region States
//End dsregion States
//Session list: 
}
void BLEConnecterImpl_handle_HCIEvents_LECreateConnectionStatus(struct BLEConnecterImpl_Instance *_instance, uint8_t NumberAllowedCommandPackets, uint8_t Status) {
if(!(_instance->active)) return;
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

          char address[18];
          bzero(address, 18);
          ba2str(&_instance->BLEConnecterImpl_ConnectAddressBT_var, address);
          printf("%s", address);
        
fprintf(stdout, "...\n");
BLEConnecterImpl_States_State_event_consumed = 1;
}
}
//End Region States
//End dsregion States
//Session list: 
}
void BLEConnecterImpl_handle_HCIEvents_EncryptionChanged(struct BLEConnecterImpl_Instance *_instance, uint8_t Status, uint16_t ConnectionHandle, uint8_t Enabled) {
if(!(_instance->active)) return;
//Region States
uint8_t BLEConnecterImpl_States_State_event_consumed = 0;
if (_instance->BLEConnecterImpl_States_State == BLECONNECTERIMPL_STATES_CONNECTED_STATE) {
if (BLEConnecterImpl_States_State_event_consumed == 0 && (Status == 0 && Enabled)) {
BLEConnecterImpl_States_OnExit(BLECONNECTERIMPL_STATES_CONNECTED_STATE, _instance);
_instance->BLEConnecterImpl_States_State = BLECONNECTERIMPL_STATES_ENCRYPTED_STATE;
BLEConnecterImpl_States_OnEntry(BLECONNECTERIMPL_STATES_ENCRYPTED_STATE, _instance);
BLEConnecterImpl_States_State_event_consumed = 1;
}
else if (BLEConnecterImpl_States_State_event_consumed == 0 && (Status > 0)) {
BLEConnecterImpl_States_OnExit(BLECONNECTERIMPL_STATES_CONNECTED_STATE, _instance);
_instance->BLEConnecterImpl_States_State = BLECONNECTERIMPL_STATES_FAILURE_STATE;
fprintf(stdout, "[ERROR]: Encryption failed!\n");
BLEConnecterImpl_States_OnEntry(BLECONNECTERIMPL_STATES_FAILURE_STATE, _instance);
BLEConnecterImpl_States_State_event_consumed = 1;
}
}
else if (_instance->BLEConnecterImpl_States_State == BLECONNECTERIMPL_STATES_ENCRYPTED_STATE) {
if (BLEConnecterImpl_States_State_event_consumed == 0 && (Status == 0 &&  !(Enabled))) {
BLEConnecterImpl_States_OnExit(BLECONNECTERIMPL_STATES_ENCRYPTED_STATE, _instance);
_instance->BLEConnecterImpl_States_State = BLECONNECTERIMPL_STATES_CONNECTED_STATE;
BLEConnecterImpl_States_OnEntry(BLECONNECTERIMPL_STATES_CONNECTED_STATE, _instance);
BLEConnecterImpl_States_State_event_consumed = 1;
}
else if (BLEConnecterImpl_States_State_event_consumed == 0 && (Status > 0)) {
BLEConnecterImpl_States_OnExit(BLECONNECTERIMPL_STATES_ENCRYPTED_STATE, _instance);
_instance->BLEConnecterImpl_States_State = BLECONNECTERIMPL_STATES_FAILURE_STATE;
fprintf(stdout, "[ERROR]: Encryption failed!\n");
BLEConnecterImpl_States_OnEntry(BLECONNECTERIMPL_STATES_FAILURE_STATE, _instance);
BLEConnecterImpl_States_State_event_consumed = 1;
}
}
//End Region States
//End dsregion States
//Session list: 
}
void BLEConnecterImpl_handle_HCIEvents_DisconnectionCompleted(struct BLEConnecterImpl_Instance *_instance, uint8_t Status, uint16_t ConnectionHandle, uint8_t Reason) {
if(!(_instance->active)) return;
//Region States
uint8_t BLEConnecterImpl_States_State_event_consumed = 0;
if (_instance->BLEConnecterImpl_States_State == BLECONNECTERIMPL_STATES_CONNECTED_STATE) {
if (BLEConnecterImpl_States_State_event_consumed == 0 && (Status == 0)) {
BLEConnecterImpl_States_OnExit(BLECONNECTERIMPL_STATES_CONNECTED_STATE, _instance);
_instance->BLEConnecterImpl_States_State = BLECONNECTERIMPL_STATES_NOTCONNECTED_STATE;
fprintf(stdout, "[INFO]: Connection closed by remote.\n");
BLEConnecterImpl_send_Connecter_Stopped(_instance);
BLEConnecterImpl_States_OnEntry(BLECONNECTERIMPL_STATES_NOTCONNECTED_STATE, _instance);
BLEConnecterImpl_States_State_event_consumed = 1;
}
else if (BLEConnecterImpl_States_State_event_consumed == 0 && (Status > 0)) {
BLEConnecterImpl_States_OnExit(BLECONNECTERIMPL_STATES_CONNECTED_STATE, _instance);
_instance->BLEConnecterImpl_States_State = BLECONNECTERIMPL_STATES_FAILURE_STATE;
BLEConnecterImpl_States_OnEntry(BLECONNECTERIMPL_STATES_FAILURE_STATE, _instance);
BLEConnecterImpl_States_State_event_consumed = 1;
}
}
else if (_instance->BLEConnecterImpl_States_State == BLECONNECTERIMPL_STATES_ENCRYPTED_STATE) {
if (BLEConnecterImpl_States_State_event_consumed == 0 && (Status == 0)) {
BLEConnecterImpl_States_OnExit(BLECONNECTERIMPL_STATES_ENCRYPTED_STATE, _instance);
_instance->BLEConnecterImpl_States_State = BLECONNECTERIMPL_STATES_NOTCONNECTED_STATE;
fprintf(stdout, "[INFO]: Connection closed by remote.\n");
BLEConnecterImpl_send_Connecter_Stopped(_instance);
BLEConnecterImpl_States_OnEntry(BLECONNECTERIMPL_STATES_NOTCONNECTED_STATE, _instance);
BLEConnecterImpl_States_State_event_consumed = 1;
}
else if (BLEConnecterImpl_States_State_event_consumed == 0 && (Status > 0)) {
BLEConnecterImpl_States_OnExit(BLECONNECTERIMPL_STATES_ENCRYPTED_STATE, _instance);
_instance->BLEConnecterImpl_States_State = BLECONNECTERIMPL_STATES_FAILURE_STATE;
BLEConnecterImpl_States_OnEntry(BLECONNECTERIMPL_STATES_FAILURE_STATE, _instance);
BLEConnecterImpl_States_State_event_consumed = 1;
}
}
else if (_instance->BLEConnecterImpl_States_State == BLECONNECTERIMPL_STATES_DISCONNECTING_STATE) {
if (BLEConnecterImpl_States_State_event_consumed == 0 && (Status == 0)) {
BLEConnecterImpl_States_OnExit(BLECONNECTERIMPL_STATES_DISCONNECTING_STATE, _instance);
_instance->BLEConnecterImpl_States_State = BLECONNECTERIMPL_STATES_NOTCONNECTED_STATE;
BLEConnecterImpl_send_Connecter_Stopped(_instance);
BLEConnecterImpl_States_OnEntry(BLECONNECTERIMPL_STATES_NOTCONNECTED_STATE, _instance);
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
void (*external_BLEConnecterImpl_send_Connecter_Encrypted_listener)(struct BLEConnecterImpl_Instance *)= 0x0;
void (*BLEConnecterImpl_send_Connecter_Encrypted_listener)(struct BLEConnecterImpl_Instance *)= 0x0;
void register_external_BLEConnecterImpl_send_Connecter_Encrypted_listener(void (*_listener)(struct BLEConnecterImpl_Instance *)){
external_BLEConnecterImpl_send_Connecter_Encrypted_listener = _listener;
}
void register_BLEConnecterImpl_send_Connecter_Encrypted_listener(void (*_listener)(struct BLEConnecterImpl_Instance *)){
BLEConnecterImpl_send_Connecter_Encrypted_listener = _listener;
}
void BLEConnecterImpl_send_Connecter_Encrypted(struct BLEConnecterImpl_Instance *_instance){
if (BLEConnecterImpl_send_Connecter_Encrypted_listener != 0x0) BLEConnecterImpl_send_Connecter_Encrypted_listener(_instance);
if (external_BLEConnecterImpl_send_Connecter_Encrypted_listener != 0x0) external_BLEConnecterImpl_send_Connecter_Encrypted_listener(_instance);
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



