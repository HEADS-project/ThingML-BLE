/*****************************************************
 *      THIS IS A GENERATED FILE. DO NOT EDIT.
 *        Implementation for Thing ANDUC352BLEImpl
 *  Generated from ThingML (http://www.thingml.org)
 *****************************************************/

#include "ANDUC352BLEImpl.h"

/*****************************************************************************
 * Implementation for type : ANDUC352BLEImpl
 *****************************************************************************/


// BEGIN: Code from the c_global annotation ANDUC352BLEImpl

  static ble_random_number_t peer_ltk = { 0xAD, 0x6F, 0x72, 0xBE, 0x9B, 0x27, 0x3D, 0xAA, 0xCF, 0x12, 0xAC, 0x95, 0xD2, 0x3D, 0x99, 0xDF, };
  static uint16_t peer_ediv = 0xAD69;
  static ble_random_part_t peer_random = { 0x12, 0x3E, 0xA5, 0x8F, 0xA2, 0x78, 0x12, 0x3B, };

// END: Code from the c_global annotation ANDUC352BLEImpl

// Declaration of prototypes:
//Prototypes: State Machine
void ANDUC352BLEImpl_States_OnExit(int state, struct ANDUC352BLEImpl_Instance *_instance);
//Prototypes: Message Sending
void ANDUC352BLEImpl_send_ANDUC352BLE_WantsToConnect(struct ANDUC352BLEImpl_Instance *_instance);
void ANDUC352BLEImpl_send_ANDUC352BLE_FinishedConnection(struct ANDUC352BLEImpl_Instance *_instance);
void ANDUC352BLEImpl_send_Tellu_TelluCloudWeightScale(struct ANDUC352BLEImpl_Instance *_instance, time_t observationTime, float mass);
void ANDUC352BLEImpl_send_Scanner_Start(struct ANDUC352BLEImpl_Instance *_instance);
void ANDUC352BLEImpl_send_Scanner_Stop(struct ANDUC352BLEImpl_Instance *_instance);
void ANDUC352BLEImpl_send_Connecter_Connect(struct ANDUC352BLEImpl_Instance *_instance);
void ANDUC352BLEImpl_send_Connecter_ConnectTo(struct ANDUC352BLEImpl_Instance *_instance, uint8_t AddressType, bdaddr_t Address, ble_random_number_t LongTermKey, uint16_t EncryptedDiversifier, ble_random_part_t RandomNumber);
void ANDUC352BLEImpl_send_Connecter_ConnectToU(struct ANDUC352BLEImpl_Instance *_instance, uint8_t AddressType, bdaddr_t Address);
void ANDUC352BLEImpl_send_Connecter_Stop(struct ANDUC352BLEImpl_Instance *_instance);
void ANDUC352BLEImpl_send_Connecter_Encrypt(struct ANDUC352BLEImpl_Instance *_instance);
void ANDUC352BLEImpl_send_Notifications_NotifierConnect(struct ANDUC352BLEImpl_Instance *_instance, uint8_t AddressType, bdaddr_t Address);
void ANDUC352BLEImpl_send_Notifications_NotifierRequest(struct ANDUC352BLEImpl_Instance *_instance);
void ANDUC352BLEImpl_send_Notifications_NotifierError(struct ANDUC352BLEImpl_Instance *_instance);
void ANDUC352BLEImpl_send_Notifications_NotifierReceived(struct ANDUC352BLEImpl_Instance *_instance);
void ANDUC352BLEImpl_send_Notifications_NotifierStored(struct ANDUC352BLEImpl_Instance *_instance);
void ANDUC352BLEImpl_send_ATT_ATTFindInformationRequest(struct ANDUC352BLEImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t StartingHandle, uint16_t EndingHandle);
void ANDUC352BLEImpl_send_ATT_ATTFindInformationResponse(struct ANDUC352BLEImpl_Instance *_instance, uint16_t ConnectionHandle, uint8_t Format, ble_gatt_data_t InformationData);
void ANDUC352BLEImpl_send_ATT_ATTFindInformationError(struct ANDUC352BLEImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error);
void ANDUC352BLEImpl_send_ATT_ATTReadByTypeRequest(struct ANDUC352BLEImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t StartingHandle, uint16_t EndingHandle, ble_uuid_t AttributeType);
void ANDUC352BLEImpl_send_ATT_ATTReadByTypeResponse(struct ANDUC352BLEImpl_Instance *_instance, uint16_t ConnectionHandle, uint8_t Length, ble_gatt_data_t AttributeDataList);
void ANDUC352BLEImpl_send_ATT_ATTReadByTypeError(struct ANDUC352BLEImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error);
void ANDUC352BLEImpl_send_ATT_ATTReadRequest(struct ANDUC352BLEImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle);
void ANDUC352BLEImpl_send_ATT_ATTReadResponse(struct ANDUC352BLEImpl_Instance *_instance, uint16_t ConnectionHandle, ble_gatt_data_t AttributeValue);
void ANDUC352BLEImpl_send_ATT_ATTReadError(struct ANDUC352BLEImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error);
void ANDUC352BLEImpl_send_ATT_ATTReadByGroupTypeRequest(struct ANDUC352BLEImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t StartingHandle, uint16_t EndingHandle, ble_uuid_t AttributeGroupType);
void ANDUC352BLEImpl_send_ATT_ATTReadByGroupTypeResponse(struct ANDUC352BLEImpl_Instance *_instance, uint16_t ConnectionHandle, uint8_t Length, ble_gatt_data_t AttributeDataList);
void ANDUC352BLEImpl_send_ATT_ATTReadByGroupTypeError(struct ANDUC352BLEImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error);
void ANDUC352BLEImpl_send_ATT_ATTWriteRequest(struct ANDUC352BLEImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, ble_gatt_data_t AttributeValue);
void ANDUC352BLEImpl_send_ATT_ATTWriteResponse(struct ANDUC352BLEImpl_Instance *_instance, uint16_t ConnectionHandle);
void ANDUC352BLEImpl_send_ATT_ATTWriteError(struct ANDUC352BLEImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error);
void ANDUC352BLEImpl_send_ATT_ATTWriteCommand(struct ANDUC352BLEImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, ble_gatt_data_t AttributeValue);
void ANDUC352BLEImpl_send_ATT_ATTHandleValueNotification(struct ANDUC352BLEImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, ble_gatt_data_t AttributeValue);
void ANDUC352BLEImpl_send_ATT_ATTHandleValueIndication(struct ANDUC352BLEImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, ble_gatt_data_t AttributeValue);
void ANDUC352BLEImpl_send_ATT_ATTHandleValueConfirmation(struct ANDUC352BLEImpl_Instance *_instance, uint16_t ConnectionHandle);
//Prototypes: Function
ble_uuid_t f_ANDUC352BLEImpl_ReadUUID(struct ANDUC352BLEImpl_Instance *_instance, uint16_t Length, uint8_t * Data);
ble_uuid_t f_ANDUC352BLEImpl_MakeUUID(struct ANDUC352BLEImpl_Instance *_instance, const char * Text);
void f_ANDUC352BLEImpl_PrintUUID(struct ANDUC352BLEImpl_Instance *_instance, ble_uuid_t ID);
// Declaration of functions:
// Definition of function ReadUUID
ble_uuid_t f_ANDUC352BLEImpl_ReadUUID(struct ANDUC352BLEImpl_Instance *_instance, uint16_t Length, uint8_t * Data) {
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
ble_uuid_t f_ANDUC352BLEImpl_MakeUUID(struct ANDUC352BLEImpl_Instance *_instance, const char * Text) {
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
void f_ANDUC352BLEImpl_PrintUUID(struct ANDUC352BLEImpl_Instance *_instance, ble_uuid_t ID) {

      uint8_t *v = &ID;
      printf("%2.2X%2.2X%2.2X%2.2X-",v[15],v[14],v[13],v[12]);
      printf("%2.2X%2.2X-",v[11],v[10]);
      printf("%2.2X%2.2X-",v[9],v[8]);
      printf("%2.2X%2.2X-",v[7],v[6]);
      printf("%2.2X%2.2X%2.2X%2.2X%2.2X%2.2X\n",v[5],v[4],v[3],v[2],v[1],v[0]);
    
}

// Sessions functionss:


// On Entry Actions:
void ANDUC352BLEImpl_States_OnEntry(int state, struct ANDUC352BLEImpl_Instance *_instance) {
switch(state) {
case ANDUC352BLEIMPL_STATES_STATE:{
_instance->ANDUC352BLEImpl_States_State = ANDUC352BLEIMPL_STATES_STANDBY_STATE;
_instance->ANDUC352BLEImpl_LongTermKey_var = peer_ltk;
_instance->ANDUC352BLEImpl_EncryptedDiversifier_var = peer_ediv;
_instance->ANDUC352BLEImpl_RandomNumber_var = peer_random;
str2ba(_instance->ANDUC352BLEImpl_Address_var, &_instance->ANDUC352BLEImpl_AddressBT_var);
str2ba(_instance->ANDUC352BLEImpl_NotifierAddress_var, &_instance->ANDUC352BLEImpl_NotifierAddressBT_var);
ANDUC352BLEImpl_States_OnEntry(_instance->ANDUC352BLEImpl_States_State, _instance);
break;
}
case ANDUC352BLEIMPL_STATES_SYNC_STATE:{
_instance->ANDUC352BLEImpl_States_Sync_State = ANDUC352BLEIMPL_STATES_SYNC_READBATTERY_STATE;
fprintf(stdout, "[INFO]: Syncing with A&D UC-352BLE...\n");
ANDUC352BLEImpl_States_OnEntry(_instance->ANDUC352BLEImpl_States_Sync_State, _instance);
break;
}
case ANDUC352BLEIMPL_STATES_NOTIFY_STATE:{
_instance->ANDUC352BLEImpl_States_Notify_State = ANDUC352BLEIMPL_STATES_NOTIFY_WAIT_STATE;
ANDUC352BLEImpl_States_OnEntry(_instance->ANDUC352BLEImpl_States_Notify_State, _instance);
break;
}
case ANDUC352BLEIMPL_STATES_STANDBY_STATE:{
_instance->ANDUC352BLEImpl_DoSync_var = 0;
break;
}
case ANDUC352BLEIMPL_STATES_CONNECTING_STATE:{
fprintf(stdout, "[INFO]: Connecting to A&D UC-352BLE...\n");
ANDUC352BLEImpl_send_Connecter_ConnectTo(_instance, _instance->ANDUC352BLEImpl_AddressType_var, _instance->ANDUC352BLEImpl_AddressBT_var, _instance->ANDUC352BLEImpl_LongTermKey_var, _instance->ANDUC352BLEImpl_EncryptedDiversifier_var, _instance->ANDUC352BLEImpl_RandomNumber_var);
break;
}
case ANDUC352BLEIMPL_STATES_SYNC_READBATTERY_STATE:{
fprintf(stdout, "[INFO]: Reading battery percentage...\n");
ANDUC352BLEImpl_send_ATT_ATTReadRequest(_instance, _instance->ANDUC352BLEImpl_ConnectedHandle_var, _instance->ANDUC352BLEImpl_BatteryValueHandle_var);
break;
}
case ANDUC352BLEIMPL_STATES_SYNC_TIMESYNC_STATE:{
fprintf(stdout, "[INFO]: Synchronizing the time...\n");
;ble_gatt_data_t AttributeValue;

            time_t utc = time(NULL);
            struct tm *ptm = gmtime(&utc);
          

            AttributeValue.length = 7;
            *((uint16_t*)&AttributeValue.bytes[0]) = ptm->tm_year+1900;
            *((uint8_t*)&AttributeValue.bytes[2]) = ptm->tm_mon+1;
            *((uint8_t*)&AttributeValue.bytes[3]) = ptm->tm_mday;
            *((uint8_t*)&AttributeValue.bytes[4]) = ptm->tm_hour;
            *((uint8_t*)&AttributeValue.bytes[5]) = ptm->tm_min;
            *((uint8_t*)&AttributeValue.bytes[6]) = ptm->tm_sec;
          
ANDUC352BLEImpl_send_ATT_ATTWriteRequest(_instance, _instance->ANDUC352BLEImpl_ConnectedHandle_var, 0x0017, AttributeValue);
break;
}
case ANDUC352BLEIMPL_STATES_SYNC_GETVALUES_STATE:{
fprintf(stdout, "[INFO]: Requesting indications of Weight Scale Measurement...\n");
;ble_gatt_data_t AttributeValue;
AttributeValue.length = 2;
AttributeValue.bytes[0] = 0x02;
AttributeValue.bytes[1] = 0x00;
ANDUC352BLEImpl_send_ATT_ATTWriteRequest(_instance, _instance->ANDUC352BLEImpl_ConnectedHandle_var, _instance->ANDUC352BLEImpl_WeightScaleConfigurationHandle_var, AttributeValue);
break;
}
case ANDUC352BLEIMPL_STATES_NOTIFY_WAIT_STATE:{
ANDUC352BLEImpl_send_ANDUC352BLE_WantsToConnect(_instance);
break;
}
case ANDUC352BLEIMPL_STATES_NOTIFY_CONNECTINGNOTIFIER_STATE:{
fprintf(stdout, "[INFO]: Connecting to A&D UC-352BLE notifier...\n");
ANDUC352BLEImpl_send_Notifications_NotifierConnect(_instance, _instance->ANDUC352BLEImpl_NotifierAddressType_var, _instance->ANDUC352BLEImpl_NotifierAddressBT_var);
break;
}
case ANDUC352BLEIMPL_STATES_NOTIFY_CONNECTEDNOTIFIER_STATE:{
if(_instance->ANDUC352BLEImpl_DoSync_var == 1) {
_instance->ANDUC352BLEImpl_DoSync_var = 0;
if(_instance->ANDUC352BLEImpl_GotMeasurement_var == 1) {
ANDUC352BLEImpl_send_Notifications_NotifierReceived(_instance);

} else {
ANDUC352BLEImpl_send_Notifications_NotifierError(_instance);

}

} else {
if(_instance->ANDUC352BLEImpl_GotStored_var == 1) {
_instance->ANDUC352BLEImpl_GotStored_var = 0;
ANDUC352BLEImpl_send_Notifications_NotifierStored(_instance);

} else {
if(_instance->ANDUC352BLEImpl_GotRequest_var == 1) {
_instance->ANDUC352BLEImpl_GotRequest_var = 0;
ANDUC352BLEImpl_send_Notifications_NotifierRequest(_instance);

}

}

}
break;
}
default: break;
}
}

// On Exit Actions:
void ANDUC352BLEImpl_States_OnExit(int state, struct ANDUC352BLEImpl_Instance *_instance) {
switch(state) {
case ANDUC352BLEIMPL_STATES_STATE:{
ANDUC352BLEImpl_States_OnExit(_instance->ANDUC352BLEImpl_States_State, _instance);
break;}
case ANDUC352BLEIMPL_STATES_SYNC_STATE:{
ANDUC352BLEImpl_States_OnExit(_instance->ANDUC352BLEImpl_States_Sync_State, _instance);
break;}
case ANDUC352BLEIMPL_STATES_NOTIFY_STATE:{
ANDUC352BLEImpl_States_OnExit(_instance->ANDUC352BLEImpl_States_Notify_State, _instance);
break;}
case ANDUC352BLEIMPL_STATES_STANDBY_STATE:{
break;}
case ANDUC352BLEIMPL_STATES_CONNECTING_STATE:{
break;}
case ANDUC352BLEIMPL_STATES_SYNC_READBATTERY_STATE:{
break;}
case ANDUC352BLEIMPL_STATES_SYNC_TIMESYNC_STATE:{
break;}
case ANDUC352BLEIMPL_STATES_SYNC_GETVALUES_STATE:{
break;}
case ANDUC352BLEIMPL_STATES_NOTIFY_WAIT_STATE:{
break;}
case ANDUC352BLEIMPL_STATES_NOTIFY_CONNECTINGNOTIFIER_STATE:{
break;}
case ANDUC352BLEIMPL_STATES_NOTIFY_CONNECTEDNOTIFIER_STATE:{
break;}
default: break;
}
}

// Event Handlers for incoming messages:
void ANDUC352BLEImpl_handle_ANDUC352BLE_AllowedToConnect(struct ANDUC352BLEImpl_Instance *_instance) {
if(!(_instance->active)) return;
//Region States
uint8_t ANDUC352BLEImpl_States_State_event_consumed = 0;
if (_instance->ANDUC352BLEImpl_States_State == ANDUC352BLEIMPL_STATES_STANDBY_STATE) {
if (ANDUC352BLEImpl_States_State_event_consumed == 0 && (_instance->ANDUC352BLEImpl_DoSync_var == 1)) {
ANDUC352BLEImpl_States_OnExit(ANDUC352BLEIMPL_STATES_STANDBY_STATE, _instance);
_instance->ANDUC352BLEImpl_States_State = ANDUC352BLEIMPL_STATES_CONNECTING_STATE;
ANDUC352BLEImpl_States_OnEntry(ANDUC352BLEIMPL_STATES_CONNECTING_STATE, _instance);
ANDUC352BLEImpl_States_State_event_consumed = 1;
}
else if (ANDUC352BLEImpl_States_State_event_consumed == 0 && (_instance->ANDUC352BLEImpl_DoSync_var == 0)) {
ANDUC352BLEImpl_States_OnExit(ANDUC352BLEIMPL_STATES_STANDBY_STATE, _instance);
_instance->ANDUC352BLEImpl_States_State = ANDUC352BLEIMPL_STATES_NOTIFY_STATE;
ANDUC352BLEImpl_States_OnEntry(ANDUC352BLEIMPL_STATES_NOTIFY_STATE, _instance);
ANDUC352BLEImpl_States_State_event_consumed = 1;
}
}
else if (_instance->ANDUC352BLEImpl_States_State == ANDUC352BLEIMPL_STATES_NOTIFY_STATE) {
//Region Notify
uint8_t ANDUC352BLEImpl_States_Notify_State_event_consumed = 0;
if (_instance->ANDUC352BLEImpl_States_Notify_State == ANDUC352BLEIMPL_STATES_NOTIFY_WAIT_STATE) {
if (ANDUC352BLEImpl_States_Notify_State_event_consumed == 0 && 1) {
ANDUC352BLEImpl_States_OnExit(ANDUC352BLEIMPL_STATES_NOTIFY_WAIT_STATE, _instance);
_instance->ANDUC352BLEImpl_States_Notify_State = ANDUC352BLEIMPL_STATES_NOTIFY_CONNECTINGNOTIFIER_STATE;
ANDUC352BLEImpl_States_OnEntry(ANDUC352BLEIMPL_STATES_NOTIFY_CONNECTINGNOTIFIER_STATE, _instance);
ANDUC352BLEImpl_States_Notify_State_event_consumed = 1;
}
}
//End Region Notify
//End dsregion Notify
}
//End Region States
//Region Sync
uint8_t ANDUC352BLEImpl_States_Sync_State_event_consumed = 0;
//End Region Sync
//Region Notify
uint8_t ANDUC352BLEImpl_States_Notify_State_event_consumed = 0;
if (_instance->ANDUC352BLEImpl_States_Notify_State == ANDUC352BLEIMPL_STATES_NOTIFY_WAIT_STATE) {
if (ANDUC352BLEImpl_States_Notify_State_event_consumed == 0 && 1) {
ANDUC352BLEImpl_States_OnExit(ANDUC352BLEIMPL_STATES_NOTIFY_WAIT_STATE, _instance);
_instance->ANDUC352BLEImpl_States_Notify_State = ANDUC352BLEIMPL_STATES_NOTIFY_CONNECTINGNOTIFIER_STATE;
ANDUC352BLEImpl_States_OnEntry(ANDUC352BLEIMPL_STATES_NOTIFY_CONNECTINGNOTIFIER_STATE, _instance);
ANDUC352BLEImpl_States_Notify_State_event_consumed = 1;
}
}
//End Region Notify
//End dsregion States
//Session list: 
}
void ANDUC352BLEImpl_handle_Scanner_ConnectableAdvertisement(struct ANDUC352BLEImpl_Instance *_instance, uint8_t AddressType, bdaddr_t Address) {
if(!(_instance->active)) return;
//Region States
uint8_t ANDUC352BLEImpl_States_State_event_consumed = 0;
if (_instance->ANDUC352BLEImpl_States_State == ANDUC352BLEIMPL_STATES_STANDBY_STATE) {
if (ANDUC352BLEImpl_States_State_event_consumed == 0 && 1) {
if(AddressType == _instance->ANDUC352BLEImpl_AddressType_var && bacmp(&Address, &_instance->ANDUC352BLEImpl_AddressBT_var) == 0) {
_instance->ANDUC352BLEImpl_DoSync_var = 1;
_instance->ANDUC352BLEImpl_GotMeasurement_var = 0;
ANDUC352BLEImpl_send_ANDUC352BLE_WantsToConnect(_instance);

}
ANDUC352BLEImpl_States_State_event_consumed = 1;
}
}
//End Region States
//Region Sync
uint8_t ANDUC352BLEImpl_States_Sync_State_event_consumed = 0;
//End Region Sync
//Region Notify
uint8_t ANDUC352BLEImpl_States_Notify_State_event_consumed = 0;
//End Region Notify
//End dsregion States
//Session list: 
}
void ANDUC352BLEImpl_handle_Connecter_Stopped(struct ANDUC352BLEImpl_Instance *_instance) {
if(!(_instance->active)) return;
//Region States
uint8_t ANDUC352BLEImpl_States_State_event_consumed = 0;
if (_instance->ANDUC352BLEImpl_States_State == ANDUC352BLEIMPL_STATES_CONNECTING_STATE) {
if (ANDUC352BLEImpl_States_State_event_consumed == 0 && 1) {
ANDUC352BLEImpl_States_OnExit(ANDUC352BLEIMPL_STATES_CONNECTING_STATE, _instance);
_instance->ANDUC352BLEImpl_States_State = ANDUC352BLEIMPL_STATES_NOTIFY_STATE;
ANDUC352BLEImpl_States_OnEntry(ANDUC352BLEIMPL_STATES_NOTIFY_STATE, _instance);
ANDUC352BLEImpl_States_State_event_consumed = 1;
}
}
else if (_instance->ANDUC352BLEImpl_States_State == ANDUC352BLEIMPL_STATES_SYNC_STATE) {
//Region Sync
uint8_t ANDUC352BLEImpl_States_Sync_State_event_consumed = 0;
//End Region Sync
//End dsregion Sync
if (ANDUC352BLEImpl_States_State_event_consumed == 0 && 1) {
ANDUC352BLEImpl_States_OnExit(ANDUC352BLEIMPL_STATES_SYNC_STATE, _instance);
_instance->ANDUC352BLEImpl_States_State = ANDUC352BLEIMPL_STATES_NOTIFY_STATE;
ANDUC352BLEImpl_States_OnEntry(ANDUC352BLEIMPL_STATES_NOTIFY_STATE, _instance);
ANDUC352BLEImpl_States_State_event_consumed = 1;
}
}
//End Region States
//Region Sync
uint8_t ANDUC352BLEImpl_States_Sync_State_event_consumed = 0;
//End Region Sync
//Region Notify
uint8_t ANDUC352BLEImpl_States_Notify_State_event_consumed = 0;
//End Region Notify
//End dsregion States
//Session list: 
}
void ANDUC352BLEImpl_handle_Connecter_Connected(struct ANDUC352BLEImpl_Instance *_instance, uint16_t Handle, uint8_t AddressType, bdaddr_t Address) {
if(!(_instance->active)) return;
//Region States
uint8_t ANDUC352BLEImpl_States_State_event_consumed = 0;
if (_instance->ANDUC352BLEImpl_States_State == ANDUC352BLEIMPL_STATES_CONNECTING_STATE) {
if (ANDUC352BLEImpl_States_State_event_consumed == 0 && 1) {
_instance->ANDUC352BLEImpl_ConnectedHandle_var = Handle;
ANDUC352BLEImpl_send_Connecter_Encrypt(_instance);
ANDUC352BLEImpl_States_State_event_consumed = 1;
}
}
//End Region States
//Region Sync
uint8_t ANDUC352BLEImpl_States_Sync_State_event_consumed = 0;
//End Region Sync
//Region Notify
uint8_t ANDUC352BLEImpl_States_Notify_State_event_consumed = 0;
//End Region Notify
//End dsregion States
//Session list: 
}
void ANDUC352BLEImpl_handle_Connecter_Failure(struct ANDUC352BLEImpl_Instance *_instance) {
if(!(_instance->active)) return;
//Region States
uint8_t ANDUC352BLEImpl_States_State_event_consumed = 0;
if (_instance->ANDUC352BLEImpl_States_State == ANDUC352BLEIMPL_STATES_CONNECTING_STATE) {
if (ANDUC352BLEImpl_States_State_event_consumed == 0 && 1) {
ANDUC352BLEImpl_States_OnExit(ANDUC352BLEIMPL_STATES_CONNECTING_STATE, _instance);
_instance->ANDUC352BLEImpl_States_State = ANDUC352BLEIMPL_STATES_NOTIFY_STATE;
ANDUC352BLEImpl_States_OnEntry(ANDUC352BLEIMPL_STATES_NOTIFY_STATE, _instance);
ANDUC352BLEImpl_States_State_event_consumed = 1;
}
}
else if (_instance->ANDUC352BLEImpl_States_State == ANDUC352BLEIMPL_STATES_SYNC_STATE) {
//Region Sync
uint8_t ANDUC352BLEImpl_States_Sync_State_event_consumed = 0;
//End Region Sync
//End dsregion Sync
if (ANDUC352BLEImpl_States_State_event_consumed == 0 && 1) {
ANDUC352BLEImpl_States_OnExit(ANDUC352BLEIMPL_STATES_SYNC_STATE, _instance);
_instance->ANDUC352BLEImpl_States_State = ANDUC352BLEIMPL_STATES_NOTIFY_STATE;
ANDUC352BLEImpl_States_OnEntry(ANDUC352BLEIMPL_STATES_NOTIFY_STATE, _instance);
ANDUC352BLEImpl_States_State_event_consumed = 1;
}
}
//End Region States
//Region Sync
uint8_t ANDUC352BLEImpl_States_Sync_State_event_consumed = 0;
//End Region Sync
//Region Notify
uint8_t ANDUC352BLEImpl_States_Notify_State_event_consumed = 0;
//End Region Notify
//End dsregion States
//Session list: 
}
void ANDUC352BLEImpl_handle_Connecter_Encrypted(struct ANDUC352BLEImpl_Instance *_instance) {
if(!(_instance->active)) return;
//Region States
uint8_t ANDUC352BLEImpl_States_State_event_consumed = 0;
if (_instance->ANDUC352BLEImpl_States_State == ANDUC352BLEIMPL_STATES_CONNECTING_STATE) {
if (ANDUC352BLEImpl_States_State_event_consumed == 0 && 1) {
ANDUC352BLEImpl_States_OnExit(ANDUC352BLEIMPL_STATES_CONNECTING_STATE, _instance);
_instance->ANDUC352BLEImpl_States_State = ANDUC352BLEIMPL_STATES_SYNC_STATE;
ANDUC352BLEImpl_States_OnEntry(ANDUC352BLEIMPL_STATES_SYNC_STATE, _instance);
ANDUC352BLEImpl_States_State_event_consumed = 1;
}
}
//End Region States
//Region Sync
uint8_t ANDUC352BLEImpl_States_Sync_State_event_consumed = 0;
//End Region Sync
//Region Notify
uint8_t ANDUC352BLEImpl_States_Notify_State_event_consumed = 0;
//End Region Notify
//End dsregion States
//Session list: 
}
void ANDUC352BLEImpl_handle_Notifications_NotifierReady(struct ANDUC352BLEImpl_Instance *_instance) {
if(!(_instance->active)) return;
//Region States
uint8_t ANDUC352BLEImpl_States_State_event_consumed = 0;
if (_instance->ANDUC352BLEImpl_States_State == ANDUC352BLEIMPL_STATES_NOTIFY_STATE) {
//Region Notify
uint8_t ANDUC352BLEImpl_States_Notify_State_event_consumed = 0;
if (_instance->ANDUC352BLEImpl_States_Notify_State == ANDUC352BLEIMPL_STATES_NOTIFY_CONNECTINGNOTIFIER_STATE) {
if (ANDUC352BLEImpl_States_Notify_State_event_consumed == 0 && 1) {
ANDUC352BLEImpl_States_OnExit(ANDUC352BLEIMPL_STATES_NOTIFY_CONNECTINGNOTIFIER_STATE, _instance);
_instance->ANDUC352BLEImpl_States_Notify_State = ANDUC352BLEIMPL_STATES_NOTIFY_CONNECTEDNOTIFIER_STATE;
ANDUC352BLEImpl_States_OnEntry(ANDUC352BLEIMPL_STATES_NOTIFY_CONNECTEDNOTIFIER_STATE, _instance);
ANDUC352BLEImpl_States_Notify_State_event_consumed = 1;
}
}
//End Region Notify
//End dsregion Notify
}
//End Region States
//Region Sync
uint8_t ANDUC352BLEImpl_States_Sync_State_event_consumed = 0;
//End Region Sync
//Region Notify
uint8_t ANDUC352BLEImpl_States_Notify_State_event_consumed = 0;
if (_instance->ANDUC352BLEImpl_States_Notify_State == ANDUC352BLEIMPL_STATES_NOTIFY_CONNECTINGNOTIFIER_STATE) {
if (ANDUC352BLEImpl_States_Notify_State_event_consumed == 0 && 1) {
ANDUC352BLEImpl_States_OnExit(ANDUC352BLEIMPL_STATES_NOTIFY_CONNECTINGNOTIFIER_STATE, _instance);
_instance->ANDUC352BLEImpl_States_Notify_State = ANDUC352BLEIMPL_STATES_NOTIFY_CONNECTEDNOTIFIER_STATE;
ANDUC352BLEImpl_States_OnEntry(ANDUC352BLEIMPL_STATES_NOTIFY_CONNECTEDNOTIFIER_STATE, _instance);
ANDUC352BLEImpl_States_Notify_State_event_consumed = 1;
}
}
//End Region Notify
//End dsregion States
//Session list: 
}
void ANDUC352BLEImpl_handle_Notifications_NotifierFinished(struct ANDUC352BLEImpl_Instance *_instance) {
if(!(_instance->active)) return;
//Region States
uint8_t ANDUC352BLEImpl_States_State_event_consumed = 0;
if (_instance->ANDUC352BLEImpl_States_State == ANDUC352BLEIMPL_STATES_NOTIFY_STATE) {
//Region Notify
uint8_t ANDUC352BLEImpl_States_Notify_State_event_consumed = 0;
if (_instance->ANDUC352BLEImpl_States_Notify_State == ANDUC352BLEIMPL_STATES_NOTIFY_CONNECTEDNOTIFIER_STATE) {
if (ANDUC352BLEImpl_States_Notify_State_event_consumed == 0 && (_instance->ANDUC352BLEImpl_GotStored_var == 1 || _instance->ANDUC352BLEImpl_GotRequest_var == 1)) {
ANDUC352BLEImpl_States_OnExit(ANDUC352BLEIMPL_STATES_NOTIFY_CONNECTEDNOTIFIER_STATE, _instance);
_instance->ANDUC352BLEImpl_States_Notify_State = ANDUC352BLEIMPL_STATES_NOTIFY_CONNECTINGNOTIFIER_STATE;
ANDUC352BLEImpl_States_OnEntry(ANDUC352BLEIMPL_STATES_NOTIFY_CONNECTINGNOTIFIER_STATE, _instance);
ANDUC352BLEImpl_States_Notify_State_event_consumed = 1;
}
}
//End Region Notify
//End dsregion Notify
if (ANDUC352BLEImpl_States_State_event_consumed == 0 && 1) {
ANDUC352BLEImpl_States_OnExit(ANDUC352BLEIMPL_STATES_NOTIFY_STATE, _instance);
_instance->ANDUC352BLEImpl_States_State = ANDUC352BLEIMPL_STATES_STANDBY_STATE;
ANDUC352BLEImpl_send_ANDUC352BLE_FinishedConnection(_instance);
ANDUC352BLEImpl_States_OnEntry(ANDUC352BLEIMPL_STATES_STANDBY_STATE, _instance);
ANDUC352BLEImpl_States_State_event_consumed = 1;
}
}
//End Region States
//Region Sync
uint8_t ANDUC352BLEImpl_States_Sync_State_event_consumed = 0;
//End Region Sync
//Region Notify
uint8_t ANDUC352BLEImpl_States_Notify_State_event_consumed = 0;
if (_instance->ANDUC352BLEImpl_States_Notify_State == ANDUC352BLEIMPL_STATES_NOTIFY_CONNECTEDNOTIFIER_STATE) {
if (ANDUC352BLEImpl_States_Notify_State_event_consumed == 0 && (_instance->ANDUC352BLEImpl_GotStored_var == 1 || _instance->ANDUC352BLEImpl_GotRequest_var == 1)) {
ANDUC352BLEImpl_States_OnExit(ANDUC352BLEIMPL_STATES_NOTIFY_CONNECTEDNOTIFIER_STATE, _instance);
_instance->ANDUC352BLEImpl_States_Notify_State = ANDUC352BLEIMPL_STATES_NOTIFY_CONNECTINGNOTIFIER_STATE;
ANDUC352BLEImpl_States_OnEntry(ANDUC352BLEIMPL_STATES_NOTIFY_CONNECTINGNOTIFIER_STATE, _instance);
ANDUC352BLEImpl_States_Notify_State_event_consumed = 1;
}
}
//End Region Notify
//End dsregion States
//Session list: 
}
void ANDUC352BLEImpl_handle_Tellu_MqttRequestWeightMeasurement(struct ANDUC352BLEImpl_Instance *_instance) {
if(!(_instance->active)) return;
//Region States
uint8_t ANDUC352BLEImpl_States_State_event_consumed = 0;
if (_instance->ANDUC352BLEImpl_States_State == ANDUC352BLEIMPL_STATES_STANDBY_STATE) {
if (ANDUC352BLEImpl_States_State_event_consumed == 0 && 1) {
_instance->ANDUC352BLEImpl_GotRequest_var = 1;
ANDUC352BLEImpl_send_ANDUC352BLE_WantsToConnect(_instance);
ANDUC352BLEImpl_States_State_event_consumed = 1;
}
}
//End Region States
//Region Sync
uint8_t ANDUC352BLEImpl_States_Sync_State_event_consumed = 0;
//End Region Sync
//Region Notify
uint8_t ANDUC352BLEImpl_States_Notify_State_event_consumed = 0;
//End Region Notify
//End dsregion States
//Session list: 
if (1) {
_instance->ANDUC352BLEImpl_GotRequest_var = 1;
ANDUC352BLEImpl_States_State_event_consumed = 1;
}
}
void ANDUC352BLEImpl_handle_Tellu_MqttConfirmWeightMeasurement(struct ANDUC352BLEImpl_Instance *_instance) {
if(!(_instance->active)) return;
//Region States
uint8_t ANDUC352BLEImpl_States_State_event_consumed = 0;
if (_instance->ANDUC352BLEImpl_States_State == ANDUC352BLEIMPL_STATES_STANDBY_STATE) {
if (ANDUC352BLEImpl_States_State_event_consumed == 0 && 1) {
_instance->ANDUC352BLEImpl_GotStored_var = 1;
ANDUC352BLEImpl_send_ANDUC352BLE_WantsToConnect(_instance);
ANDUC352BLEImpl_States_State_event_consumed = 1;
}
}
//End Region States
//Region Sync
uint8_t ANDUC352BLEImpl_States_Sync_State_event_consumed = 0;
//End Region Sync
//Region Notify
uint8_t ANDUC352BLEImpl_States_Notify_State_event_consumed = 0;
//End Region Notify
//End dsregion States
//Session list: 
if (1) {
_instance->ANDUC352BLEImpl_GotStored_var = 1;
ANDUC352BLEImpl_States_State_event_consumed = 1;
}
}
void ANDUC352BLEImpl_handle_ATT_ATTWriteError(struct ANDUC352BLEImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error) {
if(!(_instance->active)) return;
//Region States
uint8_t ANDUC352BLEImpl_States_State_event_consumed = 0;
if (_instance->ANDUC352BLEImpl_States_State == ANDUC352BLEIMPL_STATES_SYNC_STATE) {
//Region Sync
uint8_t ANDUC352BLEImpl_States_Sync_State_event_consumed = 0;
if (_instance->ANDUC352BLEImpl_States_Sync_State == ANDUC352BLEIMPL_STATES_SYNC_TIMESYNC_STATE) {
if (ANDUC352BLEImpl_States_Sync_State_event_consumed == 0 && 1) {
fprintf(stdout, "[ERROR]: Time synchronization failed. Error code: ");
printf("%2.2X", Error);
fprintf(stdout, "!!\n");
ANDUC352BLEImpl_send_Connecter_Stop(_instance);
ANDUC352BLEImpl_States_Sync_State_event_consumed = 1;
}
}
else if (_instance->ANDUC352BLEImpl_States_Sync_State == ANDUC352BLEIMPL_STATES_SYNC_GETVALUES_STATE) {
if (ANDUC352BLEImpl_States_Sync_State_event_consumed == 0 && (ConnectionHandle == _instance->ANDUC352BLEImpl_ConnectedHandle_var)) {
fprintf(stdout, "[ERROR]: Could not set indications of Weight Scale Measurement!\n");
ANDUC352BLEImpl_send_Connecter_Stop(_instance);
ANDUC352BLEImpl_States_Sync_State_event_consumed = 1;
}
}
//End Region Sync
//End dsregion Sync
}
//End Region States
//Region Sync
uint8_t ANDUC352BLEImpl_States_Sync_State_event_consumed = 0;
if (_instance->ANDUC352BLEImpl_States_Sync_State == ANDUC352BLEIMPL_STATES_SYNC_TIMESYNC_STATE) {
if (ANDUC352BLEImpl_States_Sync_State_event_consumed == 0 && 1) {
fprintf(stdout, "[ERROR]: Time synchronization failed. Error code: ");
printf("%2.2X", Error);
fprintf(stdout, "!!\n");
ANDUC352BLEImpl_send_Connecter_Stop(_instance);
ANDUC352BLEImpl_States_Sync_State_event_consumed = 1;
}
}
else if (_instance->ANDUC352BLEImpl_States_Sync_State == ANDUC352BLEIMPL_STATES_SYNC_GETVALUES_STATE) {
if (ANDUC352BLEImpl_States_Sync_State_event_consumed == 0 && (ConnectionHandle == _instance->ANDUC352BLEImpl_ConnectedHandle_var)) {
fprintf(stdout, "[ERROR]: Could not set indications of Weight Scale Measurement!\n");
ANDUC352BLEImpl_send_Connecter_Stop(_instance);
ANDUC352BLEImpl_States_Sync_State_event_consumed = 1;
}
}
//End Region Sync
//Region Notify
uint8_t ANDUC352BLEImpl_States_Notify_State_event_consumed = 0;
//End Region Notify
//End dsregion States
//Session list: 
}
void ANDUC352BLEImpl_handle_ATT_ATTWriteResponse(struct ANDUC352BLEImpl_Instance *_instance, uint16_t ConnectionHandle) {
if(!(_instance->active)) return;
//Region States
uint8_t ANDUC352BLEImpl_States_State_event_consumed = 0;
if (_instance->ANDUC352BLEImpl_States_State == ANDUC352BLEIMPL_STATES_SYNC_STATE) {
//Region Sync
uint8_t ANDUC352BLEImpl_States_Sync_State_event_consumed = 0;
if (_instance->ANDUC352BLEImpl_States_Sync_State == ANDUC352BLEIMPL_STATES_SYNC_TIMESYNC_STATE) {
if (ANDUC352BLEImpl_States_Sync_State_event_consumed == 0 && 1) {
ANDUC352BLEImpl_States_OnExit(ANDUC352BLEIMPL_STATES_SYNC_TIMESYNC_STATE, _instance);
_instance->ANDUC352BLEImpl_States_Sync_State = ANDUC352BLEIMPL_STATES_SYNC_GETVALUES_STATE;
fprintf(stdout, "[INFO]: Time synchronization successfull!\n");
ANDUC352BLEImpl_States_OnEntry(ANDUC352BLEIMPL_STATES_SYNC_GETVALUES_STATE, _instance);
ANDUC352BLEImpl_States_Sync_State_event_consumed = 1;
}
}
//End Region Sync
//End dsregion Sync
}
//End Region States
//Region Sync
uint8_t ANDUC352BLEImpl_States_Sync_State_event_consumed = 0;
if (_instance->ANDUC352BLEImpl_States_Sync_State == ANDUC352BLEIMPL_STATES_SYNC_TIMESYNC_STATE) {
if (ANDUC352BLEImpl_States_Sync_State_event_consumed == 0 && 1) {
ANDUC352BLEImpl_States_OnExit(ANDUC352BLEIMPL_STATES_SYNC_TIMESYNC_STATE, _instance);
_instance->ANDUC352BLEImpl_States_Sync_State = ANDUC352BLEIMPL_STATES_SYNC_GETVALUES_STATE;
fprintf(stdout, "[INFO]: Time synchronization successfull!\n");
ANDUC352BLEImpl_States_OnEntry(ANDUC352BLEIMPL_STATES_SYNC_GETVALUES_STATE, _instance);
ANDUC352BLEImpl_States_Sync_State_event_consumed = 1;
}
}
//End Region Sync
//Region Notify
uint8_t ANDUC352BLEImpl_States_Notify_State_event_consumed = 0;
//End Region Notify
//End dsregion States
//Session list: 
}
void ANDUC352BLEImpl_handle_ATT_ATTReadResponse(struct ANDUC352BLEImpl_Instance *_instance, uint16_t ConnectionHandle, ble_gatt_data_t AttributeValue) {
if(!(_instance->active)) return;
//Region States
uint8_t ANDUC352BLEImpl_States_State_event_consumed = 0;
if (_instance->ANDUC352BLEImpl_States_State == ANDUC352BLEIMPL_STATES_SYNC_STATE) {
//Region Sync
uint8_t ANDUC352BLEImpl_States_Sync_State_event_consumed = 0;
if (_instance->ANDUC352BLEImpl_States_Sync_State == ANDUC352BLEIMPL_STATES_SYNC_READBATTERY_STATE) {
if (ANDUC352BLEImpl_States_Sync_State_event_consumed == 0 && (ConnectionHandle == _instance->ANDUC352BLEImpl_ConnectedHandle_var)) {
ANDUC352BLEImpl_States_OnExit(ANDUC352BLEIMPL_STATES_SYNC_READBATTERY_STATE, _instance);
_instance->ANDUC352BLEImpl_States_Sync_State = ANDUC352BLEIMPL_STATES_SYNC_TIMESYNC_STATE;
;uint8_t Percent = AttributeValue.bytes[0];
printf("[INFO]: Got battery percentage - %u%%\n", Percent);
ANDUC352BLEImpl_States_OnEntry(ANDUC352BLEIMPL_STATES_SYNC_TIMESYNC_STATE, _instance);
ANDUC352BLEImpl_States_Sync_State_event_consumed = 1;
}
}
//End Region Sync
//End dsregion Sync
}
//End Region States
//Region Sync
uint8_t ANDUC352BLEImpl_States_Sync_State_event_consumed = 0;
if (_instance->ANDUC352BLEImpl_States_Sync_State == ANDUC352BLEIMPL_STATES_SYNC_READBATTERY_STATE) {
if (ANDUC352BLEImpl_States_Sync_State_event_consumed == 0 && (ConnectionHandle == _instance->ANDUC352BLEImpl_ConnectedHandle_var)) {
ANDUC352BLEImpl_States_OnExit(ANDUC352BLEIMPL_STATES_SYNC_READBATTERY_STATE, _instance);
_instance->ANDUC352BLEImpl_States_Sync_State = ANDUC352BLEIMPL_STATES_SYNC_TIMESYNC_STATE;
;uint8_t Percent = AttributeValue.bytes[0];
printf("[INFO]: Got battery percentage - %u%%\n", Percent);
ANDUC352BLEImpl_States_OnEntry(ANDUC352BLEIMPL_STATES_SYNC_TIMESYNC_STATE, _instance);
ANDUC352BLEImpl_States_Sync_State_event_consumed = 1;
}
}
//End Region Sync
//Region Notify
uint8_t ANDUC352BLEImpl_States_Notify_State_event_consumed = 0;
//End Region Notify
//End dsregion States
//Session list: 
}
void ANDUC352BLEImpl_handle_ATT_ATTHandleValueIndication(struct ANDUC352BLEImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, ble_gatt_data_t AttributeValue) {
if(!(_instance->active)) return;
//Region States
uint8_t ANDUC352BLEImpl_States_State_event_consumed = 0;
if (_instance->ANDUC352BLEImpl_States_State == ANDUC352BLEIMPL_STATES_SYNC_STATE) {
//Region Sync
uint8_t ANDUC352BLEImpl_States_Sync_State_event_consumed = 0;
if (_instance->ANDUC352BLEImpl_States_Sync_State == ANDUC352BLEIMPL_STATES_SYNC_GETVALUES_STATE) {
if (ANDUC352BLEImpl_States_Sync_State_event_consumed == 0 && (ConnectionHandle == _instance->ANDUC352BLEImpl_ConnectedHandle_var)) {

            uint8_t length = AttributeValue.length;
            uint8_t *data  = AttributeValue.bytes;
            uint8_t index = 3;
          
;uint8_t UnitImperial = data[0] & 0x01;
;uint8_t HasTimestamp = (data[0] & 0x02) >> 1;
;uint8_t HasUserID = (data[0] & 0x04) >> 3;
;uint8_t HasBMIHeight = (data[0] & 0x08) >> 2;
;uint16_t Weight = *(uint16_t*)&data[1];
;uint16_t Year = 0;
;uint8_t Month = 0;
;uint8_t Day = 0;
;uint8_t Hour = 0;
;uint8_t Minute = 0;
;uint8_t Second = 0;
if(HasTimestamp) {
Year = *(uint16_t*)&data[index+0];
Month = data[index+2];
Day = data[index+3];
Hour = data[index+4];
Minute = data[index+5];
Second = data[index+6];
index = index+7;

}
;uint8_t UserID = 0;
if(HasUserID) {
UserID = data[index];
index = index+1;

}
;uint16_t BMI = 0;
;uint16_t Height = 0;
if(HasBMIHeight) {
Year = *(uint16_t*)&data[index+0];
Year = *(uint16_t*)&data[index+2];
index = index+4;

}
fprintf(stdout, "[INFO]: Got Weight scale measurement - ");
printf("%d ",Weight);
if(UnitImperial) {
fprintf(stdout, "lb ");

} else {
fprintf(stdout, "kg ");

}
if(HasTimestamp) {
printf("%u.%u.%u %u:%u:%u ",Day, Month, Year, Hour, Minute, Second);

}
if(HasBMIHeight) {
printf("%d ",Weight);
if(UnitImperial) {
fprintf(stdout, "in ");

} else {
fprintf(stdout, "m ");

}
printf("(%d) ",BMI);

}
fprintf(stdout, "\n");
ANDUC352BLEImpl_send_ATT_ATTHandleValueConfirmation(_instance, ConnectionHandle);
if(HasTimestamp) {
;time_t ObservationTime = 0;

              struct tm timebuf;
              timebuf.tm_year = Year-1900;
              timebuf.tm_mon = Month-1;
              timebuf.tm_mday = Day;
              timebuf.tm_hour = Hour;
              timebuf.tm_min = Minute;
              timebuf.tm_sec = Second;
            
ObservationTime = timegm(&timebuf);
;float Mass = Weight;
Mass = Mass / 200;
ANDUC352BLEImpl_send_Tellu_TelluCloudWeightScale(_instance, ObservationTime, Mass);
_instance->ANDUC352BLEImpl_GotMeasurement_var = 1;

}
ANDUC352BLEImpl_States_Sync_State_event_consumed = 1;
}
}
//End Region Sync
//End dsregion Sync
}
//End Region States
//Region Sync
uint8_t ANDUC352BLEImpl_States_Sync_State_event_consumed = 0;
if (_instance->ANDUC352BLEImpl_States_Sync_State == ANDUC352BLEIMPL_STATES_SYNC_GETVALUES_STATE) {
if (ANDUC352BLEImpl_States_Sync_State_event_consumed == 0 && (ConnectionHandle == _instance->ANDUC352BLEImpl_ConnectedHandle_var)) {

            uint8_t length = AttributeValue.length;
            uint8_t *data  = AttributeValue.bytes;
            uint8_t index = 3;
          
;uint8_t UnitImperial = data[0] & 0x01;
;uint8_t HasTimestamp = (data[0] & 0x02) >> 1;
;uint8_t HasUserID = (data[0] & 0x04) >> 3;
;uint8_t HasBMIHeight = (data[0] & 0x08) >> 2;
;uint16_t Weight = *(uint16_t*)&data[1];
;uint16_t Year = 0;
;uint8_t Month = 0;
;uint8_t Day = 0;
;uint8_t Hour = 0;
;uint8_t Minute = 0;
;uint8_t Second = 0;
if(HasTimestamp) {
Year = *(uint16_t*)&data[index+0];
Month = data[index+2];
Day = data[index+3];
Hour = data[index+4];
Minute = data[index+5];
Second = data[index+6];
index = index+7;

}
;uint8_t UserID = 0;
if(HasUserID) {
UserID = data[index];
index = index+1;

}
;uint16_t BMI = 0;
;uint16_t Height = 0;
if(HasBMIHeight) {
Year = *(uint16_t*)&data[index+0];
Year = *(uint16_t*)&data[index+2];
index = index+4;

}
fprintf(stdout, "[INFO]: Got Weight scale measurement - ");
printf("%d ",Weight);
if(UnitImperial) {
fprintf(stdout, "lb ");

} else {
fprintf(stdout, "kg ");

}
if(HasTimestamp) {
printf("%u.%u.%u %u:%u:%u ",Day, Month, Year, Hour, Minute, Second);

}
if(HasBMIHeight) {
printf("%d ",Weight);
if(UnitImperial) {
fprintf(stdout, "in ");

} else {
fprintf(stdout, "m ");

}
printf("(%d) ",BMI);

}
fprintf(stdout, "\n");
ANDUC352BLEImpl_send_ATT_ATTHandleValueConfirmation(_instance, ConnectionHandle);
if(HasTimestamp) {
;time_t ObservationTime = 0;

              struct tm timebuf;
              timebuf.tm_year = Year-1900;
              timebuf.tm_mon = Month-1;
              timebuf.tm_mday = Day;
              timebuf.tm_hour = Hour;
              timebuf.tm_min = Minute;
              timebuf.tm_sec = Second;
            
ObservationTime = timegm(&timebuf);
;float Mass = Weight;
Mass = Mass / 200;
ANDUC352BLEImpl_send_Tellu_TelluCloudWeightScale(_instance, ObservationTime, Mass);
_instance->ANDUC352BLEImpl_GotMeasurement_var = 1;

}
ANDUC352BLEImpl_States_Sync_State_event_consumed = 1;
}
}
//End Region Sync
//Region Notify
uint8_t ANDUC352BLEImpl_States_Notify_State_event_consumed = 0;
//End Region Notify
//End dsregion States
//Session list: 
}
void ANDUC352BLEImpl_handle_ATT_ATTReadError(struct ANDUC352BLEImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error) {
if(!(_instance->active)) return;
//Region States
uint8_t ANDUC352BLEImpl_States_State_event_consumed = 0;
if (_instance->ANDUC352BLEImpl_States_State == ANDUC352BLEIMPL_STATES_SYNC_STATE) {
//Region Sync
uint8_t ANDUC352BLEImpl_States_Sync_State_event_consumed = 0;
if (_instance->ANDUC352BLEImpl_States_Sync_State == ANDUC352BLEIMPL_STATES_SYNC_READBATTERY_STATE) {
if (ANDUC352BLEImpl_States_Sync_State_event_consumed == 0 && (ConnectionHandle == _instance->ANDUC352BLEImpl_ConnectedHandle_var)) {
fprintf(stdout, "[ERROR]: Could not read battery percentage!\n");
ANDUC352BLEImpl_send_Connecter_Stop(_instance);
ANDUC352BLEImpl_States_Sync_State_event_consumed = 1;
}
}
//End Region Sync
//End dsregion Sync
}
//End Region States
//Region Sync
uint8_t ANDUC352BLEImpl_States_Sync_State_event_consumed = 0;
if (_instance->ANDUC352BLEImpl_States_Sync_State == ANDUC352BLEIMPL_STATES_SYNC_READBATTERY_STATE) {
if (ANDUC352BLEImpl_States_Sync_State_event_consumed == 0 && (ConnectionHandle == _instance->ANDUC352BLEImpl_ConnectedHandle_var)) {
fprintf(stdout, "[ERROR]: Could not read battery percentage!\n");
ANDUC352BLEImpl_send_Connecter_Stop(_instance);
ANDUC352BLEImpl_States_Sync_State_event_consumed = 1;
}
}
//End Region Sync
//Region Notify
uint8_t ANDUC352BLEImpl_States_Notify_State_event_consumed = 0;
//End Region Notify
//End dsregion States
//Session list: 
}

// Observers for outgoing messages:
void (*external_ANDUC352BLEImpl_send_ANDUC352BLE_WantsToConnect_listener)(struct ANDUC352BLEImpl_Instance *)= 0x0;
void (*ANDUC352BLEImpl_send_ANDUC352BLE_WantsToConnect_listener)(struct ANDUC352BLEImpl_Instance *)= 0x0;
void register_external_ANDUC352BLEImpl_send_ANDUC352BLE_WantsToConnect_listener(void (*_listener)(struct ANDUC352BLEImpl_Instance *)){
external_ANDUC352BLEImpl_send_ANDUC352BLE_WantsToConnect_listener = _listener;
}
void register_ANDUC352BLEImpl_send_ANDUC352BLE_WantsToConnect_listener(void (*_listener)(struct ANDUC352BLEImpl_Instance *)){
ANDUC352BLEImpl_send_ANDUC352BLE_WantsToConnect_listener = _listener;
}
void ANDUC352BLEImpl_send_ANDUC352BLE_WantsToConnect(struct ANDUC352BLEImpl_Instance *_instance){
if (ANDUC352BLEImpl_send_ANDUC352BLE_WantsToConnect_listener != 0x0) ANDUC352BLEImpl_send_ANDUC352BLE_WantsToConnect_listener(_instance);
if (external_ANDUC352BLEImpl_send_ANDUC352BLE_WantsToConnect_listener != 0x0) external_ANDUC352BLEImpl_send_ANDUC352BLE_WantsToConnect_listener(_instance);
;
}
void (*external_ANDUC352BLEImpl_send_ANDUC352BLE_FinishedConnection_listener)(struct ANDUC352BLEImpl_Instance *)= 0x0;
void (*ANDUC352BLEImpl_send_ANDUC352BLE_FinishedConnection_listener)(struct ANDUC352BLEImpl_Instance *)= 0x0;
void register_external_ANDUC352BLEImpl_send_ANDUC352BLE_FinishedConnection_listener(void (*_listener)(struct ANDUC352BLEImpl_Instance *)){
external_ANDUC352BLEImpl_send_ANDUC352BLE_FinishedConnection_listener = _listener;
}
void register_ANDUC352BLEImpl_send_ANDUC352BLE_FinishedConnection_listener(void (*_listener)(struct ANDUC352BLEImpl_Instance *)){
ANDUC352BLEImpl_send_ANDUC352BLE_FinishedConnection_listener = _listener;
}
void ANDUC352BLEImpl_send_ANDUC352BLE_FinishedConnection(struct ANDUC352BLEImpl_Instance *_instance){
if (ANDUC352BLEImpl_send_ANDUC352BLE_FinishedConnection_listener != 0x0) ANDUC352BLEImpl_send_ANDUC352BLE_FinishedConnection_listener(_instance);
if (external_ANDUC352BLEImpl_send_ANDUC352BLE_FinishedConnection_listener != 0x0) external_ANDUC352BLEImpl_send_ANDUC352BLE_FinishedConnection_listener(_instance);
;
}
void (*external_ANDUC352BLEImpl_send_Tellu_TelluCloudWeightScale_listener)(struct ANDUC352BLEImpl_Instance *, time_t, float)= 0x0;
void (*ANDUC352BLEImpl_send_Tellu_TelluCloudWeightScale_listener)(struct ANDUC352BLEImpl_Instance *, time_t, float)= 0x0;
void register_external_ANDUC352BLEImpl_send_Tellu_TelluCloudWeightScale_listener(void (*_listener)(struct ANDUC352BLEImpl_Instance *, time_t, float)){
external_ANDUC352BLEImpl_send_Tellu_TelluCloudWeightScale_listener = _listener;
}
void register_ANDUC352BLEImpl_send_Tellu_TelluCloudWeightScale_listener(void (*_listener)(struct ANDUC352BLEImpl_Instance *, time_t, float)){
ANDUC352BLEImpl_send_Tellu_TelluCloudWeightScale_listener = _listener;
}
void ANDUC352BLEImpl_send_Tellu_TelluCloudWeightScale(struct ANDUC352BLEImpl_Instance *_instance, time_t observationTime, float mass){
if (ANDUC352BLEImpl_send_Tellu_TelluCloudWeightScale_listener != 0x0) ANDUC352BLEImpl_send_Tellu_TelluCloudWeightScale_listener(_instance, observationTime, mass);
if (external_ANDUC352BLEImpl_send_Tellu_TelluCloudWeightScale_listener != 0x0) external_ANDUC352BLEImpl_send_Tellu_TelluCloudWeightScale_listener(_instance, observationTime, mass);
;
}
void (*external_ANDUC352BLEImpl_send_Scanner_Start_listener)(struct ANDUC352BLEImpl_Instance *)= 0x0;
void (*ANDUC352BLEImpl_send_Scanner_Start_listener)(struct ANDUC352BLEImpl_Instance *)= 0x0;
void register_external_ANDUC352BLEImpl_send_Scanner_Start_listener(void (*_listener)(struct ANDUC352BLEImpl_Instance *)){
external_ANDUC352BLEImpl_send_Scanner_Start_listener = _listener;
}
void register_ANDUC352BLEImpl_send_Scanner_Start_listener(void (*_listener)(struct ANDUC352BLEImpl_Instance *)){
ANDUC352BLEImpl_send_Scanner_Start_listener = _listener;
}
void ANDUC352BLEImpl_send_Scanner_Start(struct ANDUC352BLEImpl_Instance *_instance){
if (ANDUC352BLEImpl_send_Scanner_Start_listener != 0x0) ANDUC352BLEImpl_send_Scanner_Start_listener(_instance);
if (external_ANDUC352BLEImpl_send_Scanner_Start_listener != 0x0) external_ANDUC352BLEImpl_send_Scanner_Start_listener(_instance);
;
}
void (*external_ANDUC352BLEImpl_send_Scanner_Stop_listener)(struct ANDUC352BLEImpl_Instance *)= 0x0;
void (*ANDUC352BLEImpl_send_Scanner_Stop_listener)(struct ANDUC352BLEImpl_Instance *)= 0x0;
void register_external_ANDUC352BLEImpl_send_Scanner_Stop_listener(void (*_listener)(struct ANDUC352BLEImpl_Instance *)){
external_ANDUC352BLEImpl_send_Scanner_Stop_listener = _listener;
}
void register_ANDUC352BLEImpl_send_Scanner_Stop_listener(void (*_listener)(struct ANDUC352BLEImpl_Instance *)){
ANDUC352BLEImpl_send_Scanner_Stop_listener = _listener;
}
void ANDUC352BLEImpl_send_Scanner_Stop(struct ANDUC352BLEImpl_Instance *_instance){
if (ANDUC352BLEImpl_send_Scanner_Stop_listener != 0x0) ANDUC352BLEImpl_send_Scanner_Stop_listener(_instance);
if (external_ANDUC352BLEImpl_send_Scanner_Stop_listener != 0x0) external_ANDUC352BLEImpl_send_Scanner_Stop_listener(_instance);
;
}
void (*external_ANDUC352BLEImpl_send_Connecter_Connect_listener)(struct ANDUC352BLEImpl_Instance *)= 0x0;
void (*ANDUC352BLEImpl_send_Connecter_Connect_listener)(struct ANDUC352BLEImpl_Instance *)= 0x0;
void register_external_ANDUC352BLEImpl_send_Connecter_Connect_listener(void (*_listener)(struct ANDUC352BLEImpl_Instance *)){
external_ANDUC352BLEImpl_send_Connecter_Connect_listener = _listener;
}
void register_ANDUC352BLEImpl_send_Connecter_Connect_listener(void (*_listener)(struct ANDUC352BLEImpl_Instance *)){
ANDUC352BLEImpl_send_Connecter_Connect_listener = _listener;
}
void ANDUC352BLEImpl_send_Connecter_Connect(struct ANDUC352BLEImpl_Instance *_instance){
if (ANDUC352BLEImpl_send_Connecter_Connect_listener != 0x0) ANDUC352BLEImpl_send_Connecter_Connect_listener(_instance);
if (external_ANDUC352BLEImpl_send_Connecter_Connect_listener != 0x0) external_ANDUC352BLEImpl_send_Connecter_Connect_listener(_instance);
;
}
void (*external_ANDUC352BLEImpl_send_Connecter_ConnectTo_listener)(struct ANDUC352BLEImpl_Instance *, uint8_t, bdaddr_t, ble_random_number_t, uint16_t, ble_random_part_t)= 0x0;
void (*ANDUC352BLEImpl_send_Connecter_ConnectTo_listener)(struct ANDUC352BLEImpl_Instance *, uint8_t, bdaddr_t, ble_random_number_t, uint16_t, ble_random_part_t)= 0x0;
void register_external_ANDUC352BLEImpl_send_Connecter_ConnectTo_listener(void (*_listener)(struct ANDUC352BLEImpl_Instance *, uint8_t, bdaddr_t, ble_random_number_t, uint16_t, ble_random_part_t)){
external_ANDUC352BLEImpl_send_Connecter_ConnectTo_listener = _listener;
}
void register_ANDUC352BLEImpl_send_Connecter_ConnectTo_listener(void (*_listener)(struct ANDUC352BLEImpl_Instance *, uint8_t, bdaddr_t, ble_random_number_t, uint16_t, ble_random_part_t)){
ANDUC352BLEImpl_send_Connecter_ConnectTo_listener = _listener;
}
void ANDUC352BLEImpl_send_Connecter_ConnectTo(struct ANDUC352BLEImpl_Instance *_instance, uint8_t AddressType, bdaddr_t Address, ble_random_number_t LongTermKey, uint16_t EncryptedDiversifier, ble_random_part_t RandomNumber){
if (ANDUC352BLEImpl_send_Connecter_ConnectTo_listener != 0x0) ANDUC352BLEImpl_send_Connecter_ConnectTo_listener(_instance, AddressType, Address, LongTermKey, EncryptedDiversifier, RandomNumber);
if (external_ANDUC352BLEImpl_send_Connecter_ConnectTo_listener != 0x0) external_ANDUC352BLEImpl_send_Connecter_ConnectTo_listener(_instance, AddressType, Address, LongTermKey, EncryptedDiversifier, RandomNumber);
;
}
void (*external_ANDUC352BLEImpl_send_Connecter_ConnectToU_listener)(struct ANDUC352BLEImpl_Instance *, uint8_t, bdaddr_t)= 0x0;
void (*ANDUC352BLEImpl_send_Connecter_ConnectToU_listener)(struct ANDUC352BLEImpl_Instance *, uint8_t, bdaddr_t)= 0x0;
void register_external_ANDUC352BLEImpl_send_Connecter_ConnectToU_listener(void (*_listener)(struct ANDUC352BLEImpl_Instance *, uint8_t, bdaddr_t)){
external_ANDUC352BLEImpl_send_Connecter_ConnectToU_listener = _listener;
}
void register_ANDUC352BLEImpl_send_Connecter_ConnectToU_listener(void (*_listener)(struct ANDUC352BLEImpl_Instance *, uint8_t, bdaddr_t)){
ANDUC352BLEImpl_send_Connecter_ConnectToU_listener = _listener;
}
void ANDUC352BLEImpl_send_Connecter_ConnectToU(struct ANDUC352BLEImpl_Instance *_instance, uint8_t AddressType, bdaddr_t Address){
if (ANDUC352BLEImpl_send_Connecter_ConnectToU_listener != 0x0) ANDUC352BLEImpl_send_Connecter_ConnectToU_listener(_instance, AddressType, Address);
if (external_ANDUC352BLEImpl_send_Connecter_ConnectToU_listener != 0x0) external_ANDUC352BLEImpl_send_Connecter_ConnectToU_listener(_instance, AddressType, Address);
;
}
void (*external_ANDUC352BLEImpl_send_Connecter_Stop_listener)(struct ANDUC352BLEImpl_Instance *)= 0x0;
void (*ANDUC352BLEImpl_send_Connecter_Stop_listener)(struct ANDUC352BLEImpl_Instance *)= 0x0;
void register_external_ANDUC352BLEImpl_send_Connecter_Stop_listener(void (*_listener)(struct ANDUC352BLEImpl_Instance *)){
external_ANDUC352BLEImpl_send_Connecter_Stop_listener = _listener;
}
void register_ANDUC352BLEImpl_send_Connecter_Stop_listener(void (*_listener)(struct ANDUC352BLEImpl_Instance *)){
ANDUC352BLEImpl_send_Connecter_Stop_listener = _listener;
}
void ANDUC352BLEImpl_send_Connecter_Stop(struct ANDUC352BLEImpl_Instance *_instance){
if (ANDUC352BLEImpl_send_Connecter_Stop_listener != 0x0) ANDUC352BLEImpl_send_Connecter_Stop_listener(_instance);
if (external_ANDUC352BLEImpl_send_Connecter_Stop_listener != 0x0) external_ANDUC352BLEImpl_send_Connecter_Stop_listener(_instance);
;
}
void (*external_ANDUC352BLEImpl_send_Connecter_Encrypt_listener)(struct ANDUC352BLEImpl_Instance *)= 0x0;
void (*ANDUC352BLEImpl_send_Connecter_Encrypt_listener)(struct ANDUC352BLEImpl_Instance *)= 0x0;
void register_external_ANDUC352BLEImpl_send_Connecter_Encrypt_listener(void (*_listener)(struct ANDUC352BLEImpl_Instance *)){
external_ANDUC352BLEImpl_send_Connecter_Encrypt_listener = _listener;
}
void register_ANDUC352BLEImpl_send_Connecter_Encrypt_listener(void (*_listener)(struct ANDUC352BLEImpl_Instance *)){
ANDUC352BLEImpl_send_Connecter_Encrypt_listener = _listener;
}
void ANDUC352BLEImpl_send_Connecter_Encrypt(struct ANDUC352BLEImpl_Instance *_instance){
if (ANDUC352BLEImpl_send_Connecter_Encrypt_listener != 0x0) ANDUC352BLEImpl_send_Connecter_Encrypt_listener(_instance);
if (external_ANDUC352BLEImpl_send_Connecter_Encrypt_listener != 0x0) external_ANDUC352BLEImpl_send_Connecter_Encrypt_listener(_instance);
;
}
void (*external_ANDUC352BLEImpl_send_Notifications_NotifierConnect_listener)(struct ANDUC352BLEImpl_Instance *, uint8_t, bdaddr_t)= 0x0;
void (*ANDUC352BLEImpl_send_Notifications_NotifierConnect_listener)(struct ANDUC352BLEImpl_Instance *, uint8_t, bdaddr_t)= 0x0;
void register_external_ANDUC352BLEImpl_send_Notifications_NotifierConnect_listener(void (*_listener)(struct ANDUC352BLEImpl_Instance *, uint8_t, bdaddr_t)){
external_ANDUC352BLEImpl_send_Notifications_NotifierConnect_listener = _listener;
}
void register_ANDUC352BLEImpl_send_Notifications_NotifierConnect_listener(void (*_listener)(struct ANDUC352BLEImpl_Instance *, uint8_t, bdaddr_t)){
ANDUC352BLEImpl_send_Notifications_NotifierConnect_listener = _listener;
}
void ANDUC352BLEImpl_send_Notifications_NotifierConnect(struct ANDUC352BLEImpl_Instance *_instance, uint8_t AddressType, bdaddr_t Address){
if (ANDUC352BLEImpl_send_Notifications_NotifierConnect_listener != 0x0) ANDUC352BLEImpl_send_Notifications_NotifierConnect_listener(_instance, AddressType, Address);
if (external_ANDUC352BLEImpl_send_Notifications_NotifierConnect_listener != 0x0) external_ANDUC352BLEImpl_send_Notifications_NotifierConnect_listener(_instance, AddressType, Address);
;
}
void (*external_ANDUC352BLEImpl_send_Notifications_NotifierRequest_listener)(struct ANDUC352BLEImpl_Instance *)= 0x0;
void (*ANDUC352BLEImpl_send_Notifications_NotifierRequest_listener)(struct ANDUC352BLEImpl_Instance *)= 0x0;
void register_external_ANDUC352BLEImpl_send_Notifications_NotifierRequest_listener(void (*_listener)(struct ANDUC352BLEImpl_Instance *)){
external_ANDUC352BLEImpl_send_Notifications_NotifierRequest_listener = _listener;
}
void register_ANDUC352BLEImpl_send_Notifications_NotifierRequest_listener(void (*_listener)(struct ANDUC352BLEImpl_Instance *)){
ANDUC352BLEImpl_send_Notifications_NotifierRequest_listener = _listener;
}
void ANDUC352BLEImpl_send_Notifications_NotifierRequest(struct ANDUC352BLEImpl_Instance *_instance){
if (ANDUC352BLEImpl_send_Notifications_NotifierRequest_listener != 0x0) ANDUC352BLEImpl_send_Notifications_NotifierRequest_listener(_instance);
if (external_ANDUC352BLEImpl_send_Notifications_NotifierRequest_listener != 0x0) external_ANDUC352BLEImpl_send_Notifications_NotifierRequest_listener(_instance);
;
}
void (*external_ANDUC352BLEImpl_send_Notifications_NotifierError_listener)(struct ANDUC352BLEImpl_Instance *)= 0x0;
void (*ANDUC352BLEImpl_send_Notifications_NotifierError_listener)(struct ANDUC352BLEImpl_Instance *)= 0x0;
void register_external_ANDUC352BLEImpl_send_Notifications_NotifierError_listener(void (*_listener)(struct ANDUC352BLEImpl_Instance *)){
external_ANDUC352BLEImpl_send_Notifications_NotifierError_listener = _listener;
}
void register_ANDUC352BLEImpl_send_Notifications_NotifierError_listener(void (*_listener)(struct ANDUC352BLEImpl_Instance *)){
ANDUC352BLEImpl_send_Notifications_NotifierError_listener = _listener;
}
void ANDUC352BLEImpl_send_Notifications_NotifierError(struct ANDUC352BLEImpl_Instance *_instance){
if (ANDUC352BLEImpl_send_Notifications_NotifierError_listener != 0x0) ANDUC352BLEImpl_send_Notifications_NotifierError_listener(_instance);
if (external_ANDUC352BLEImpl_send_Notifications_NotifierError_listener != 0x0) external_ANDUC352BLEImpl_send_Notifications_NotifierError_listener(_instance);
;
}
void (*external_ANDUC352BLEImpl_send_Notifications_NotifierReceived_listener)(struct ANDUC352BLEImpl_Instance *)= 0x0;
void (*ANDUC352BLEImpl_send_Notifications_NotifierReceived_listener)(struct ANDUC352BLEImpl_Instance *)= 0x0;
void register_external_ANDUC352BLEImpl_send_Notifications_NotifierReceived_listener(void (*_listener)(struct ANDUC352BLEImpl_Instance *)){
external_ANDUC352BLEImpl_send_Notifications_NotifierReceived_listener = _listener;
}
void register_ANDUC352BLEImpl_send_Notifications_NotifierReceived_listener(void (*_listener)(struct ANDUC352BLEImpl_Instance *)){
ANDUC352BLEImpl_send_Notifications_NotifierReceived_listener = _listener;
}
void ANDUC352BLEImpl_send_Notifications_NotifierReceived(struct ANDUC352BLEImpl_Instance *_instance){
if (ANDUC352BLEImpl_send_Notifications_NotifierReceived_listener != 0x0) ANDUC352BLEImpl_send_Notifications_NotifierReceived_listener(_instance);
if (external_ANDUC352BLEImpl_send_Notifications_NotifierReceived_listener != 0x0) external_ANDUC352BLEImpl_send_Notifications_NotifierReceived_listener(_instance);
;
}
void (*external_ANDUC352BLEImpl_send_Notifications_NotifierStored_listener)(struct ANDUC352BLEImpl_Instance *)= 0x0;
void (*ANDUC352BLEImpl_send_Notifications_NotifierStored_listener)(struct ANDUC352BLEImpl_Instance *)= 0x0;
void register_external_ANDUC352BLEImpl_send_Notifications_NotifierStored_listener(void (*_listener)(struct ANDUC352BLEImpl_Instance *)){
external_ANDUC352BLEImpl_send_Notifications_NotifierStored_listener = _listener;
}
void register_ANDUC352BLEImpl_send_Notifications_NotifierStored_listener(void (*_listener)(struct ANDUC352BLEImpl_Instance *)){
ANDUC352BLEImpl_send_Notifications_NotifierStored_listener = _listener;
}
void ANDUC352BLEImpl_send_Notifications_NotifierStored(struct ANDUC352BLEImpl_Instance *_instance){
if (ANDUC352BLEImpl_send_Notifications_NotifierStored_listener != 0x0) ANDUC352BLEImpl_send_Notifications_NotifierStored_listener(_instance);
if (external_ANDUC352BLEImpl_send_Notifications_NotifierStored_listener != 0x0) external_ANDUC352BLEImpl_send_Notifications_NotifierStored_listener(_instance);
;
}
void (*external_ANDUC352BLEImpl_send_ATT_ATTFindInformationRequest_listener)(struct ANDUC352BLEImpl_Instance *, uint16_t, uint16_t, uint16_t)= 0x0;
void (*ANDUC352BLEImpl_send_ATT_ATTFindInformationRequest_listener)(struct ANDUC352BLEImpl_Instance *, uint16_t, uint16_t, uint16_t)= 0x0;
void register_external_ANDUC352BLEImpl_send_ATT_ATTFindInformationRequest_listener(void (*_listener)(struct ANDUC352BLEImpl_Instance *, uint16_t, uint16_t, uint16_t)){
external_ANDUC352BLEImpl_send_ATT_ATTFindInformationRequest_listener = _listener;
}
void register_ANDUC352BLEImpl_send_ATT_ATTFindInformationRequest_listener(void (*_listener)(struct ANDUC352BLEImpl_Instance *, uint16_t, uint16_t, uint16_t)){
ANDUC352BLEImpl_send_ATT_ATTFindInformationRequest_listener = _listener;
}
void ANDUC352BLEImpl_send_ATT_ATTFindInformationRequest(struct ANDUC352BLEImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t StartingHandle, uint16_t EndingHandle){
if (ANDUC352BLEImpl_send_ATT_ATTFindInformationRequest_listener != 0x0) ANDUC352BLEImpl_send_ATT_ATTFindInformationRequest_listener(_instance, ConnectionHandle, StartingHandle, EndingHandle);
if (external_ANDUC352BLEImpl_send_ATT_ATTFindInformationRequest_listener != 0x0) external_ANDUC352BLEImpl_send_ATT_ATTFindInformationRequest_listener(_instance, ConnectionHandle, StartingHandle, EndingHandle);
;
}
void (*external_ANDUC352BLEImpl_send_ATT_ATTFindInformationResponse_listener)(struct ANDUC352BLEImpl_Instance *, uint16_t, uint8_t, ble_gatt_data_t)= 0x0;
void (*ANDUC352BLEImpl_send_ATT_ATTFindInformationResponse_listener)(struct ANDUC352BLEImpl_Instance *, uint16_t, uint8_t, ble_gatt_data_t)= 0x0;
void register_external_ANDUC352BLEImpl_send_ATT_ATTFindInformationResponse_listener(void (*_listener)(struct ANDUC352BLEImpl_Instance *, uint16_t, uint8_t, ble_gatt_data_t)){
external_ANDUC352BLEImpl_send_ATT_ATTFindInformationResponse_listener = _listener;
}
void register_ANDUC352BLEImpl_send_ATT_ATTFindInformationResponse_listener(void (*_listener)(struct ANDUC352BLEImpl_Instance *, uint16_t, uint8_t, ble_gatt_data_t)){
ANDUC352BLEImpl_send_ATT_ATTFindInformationResponse_listener = _listener;
}
void ANDUC352BLEImpl_send_ATT_ATTFindInformationResponse(struct ANDUC352BLEImpl_Instance *_instance, uint16_t ConnectionHandle, uint8_t Format, ble_gatt_data_t InformationData){
if (ANDUC352BLEImpl_send_ATT_ATTFindInformationResponse_listener != 0x0) ANDUC352BLEImpl_send_ATT_ATTFindInformationResponse_listener(_instance, ConnectionHandle, Format, InformationData);
if (external_ANDUC352BLEImpl_send_ATT_ATTFindInformationResponse_listener != 0x0) external_ANDUC352BLEImpl_send_ATT_ATTFindInformationResponse_listener(_instance, ConnectionHandle, Format, InformationData);
;
}
void (*external_ANDUC352BLEImpl_send_ATT_ATTFindInformationError_listener)(struct ANDUC352BLEImpl_Instance *, uint16_t, uint16_t, uint8_t)= 0x0;
void (*ANDUC352BLEImpl_send_ATT_ATTFindInformationError_listener)(struct ANDUC352BLEImpl_Instance *, uint16_t, uint16_t, uint8_t)= 0x0;
void register_external_ANDUC352BLEImpl_send_ATT_ATTFindInformationError_listener(void (*_listener)(struct ANDUC352BLEImpl_Instance *, uint16_t, uint16_t, uint8_t)){
external_ANDUC352BLEImpl_send_ATT_ATTFindInformationError_listener = _listener;
}
void register_ANDUC352BLEImpl_send_ATT_ATTFindInformationError_listener(void (*_listener)(struct ANDUC352BLEImpl_Instance *, uint16_t, uint16_t, uint8_t)){
ANDUC352BLEImpl_send_ATT_ATTFindInformationError_listener = _listener;
}
void ANDUC352BLEImpl_send_ATT_ATTFindInformationError(struct ANDUC352BLEImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error){
if (ANDUC352BLEImpl_send_ATT_ATTFindInformationError_listener != 0x0) ANDUC352BLEImpl_send_ATT_ATTFindInformationError_listener(_instance, ConnectionHandle, AttributeHandle, Error);
if (external_ANDUC352BLEImpl_send_ATT_ATTFindInformationError_listener != 0x0) external_ANDUC352BLEImpl_send_ATT_ATTFindInformationError_listener(_instance, ConnectionHandle, AttributeHandle, Error);
;
}
void (*external_ANDUC352BLEImpl_send_ATT_ATTReadByTypeRequest_listener)(struct ANDUC352BLEImpl_Instance *, uint16_t, uint16_t, uint16_t, ble_uuid_t)= 0x0;
void (*ANDUC352BLEImpl_send_ATT_ATTReadByTypeRequest_listener)(struct ANDUC352BLEImpl_Instance *, uint16_t, uint16_t, uint16_t, ble_uuid_t)= 0x0;
void register_external_ANDUC352BLEImpl_send_ATT_ATTReadByTypeRequest_listener(void (*_listener)(struct ANDUC352BLEImpl_Instance *, uint16_t, uint16_t, uint16_t, ble_uuid_t)){
external_ANDUC352BLEImpl_send_ATT_ATTReadByTypeRequest_listener = _listener;
}
void register_ANDUC352BLEImpl_send_ATT_ATTReadByTypeRequest_listener(void (*_listener)(struct ANDUC352BLEImpl_Instance *, uint16_t, uint16_t, uint16_t, ble_uuid_t)){
ANDUC352BLEImpl_send_ATT_ATTReadByTypeRequest_listener = _listener;
}
void ANDUC352BLEImpl_send_ATT_ATTReadByTypeRequest(struct ANDUC352BLEImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t StartingHandle, uint16_t EndingHandle, ble_uuid_t AttributeType){
if (ANDUC352BLEImpl_send_ATT_ATTReadByTypeRequest_listener != 0x0) ANDUC352BLEImpl_send_ATT_ATTReadByTypeRequest_listener(_instance, ConnectionHandle, StartingHandle, EndingHandle, AttributeType);
if (external_ANDUC352BLEImpl_send_ATT_ATTReadByTypeRequest_listener != 0x0) external_ANDUC352BLEImpl_send_ATT_ATTReadByTypeRequest_listener(_instance, ConnectionHandle, StartingHandle, EndingHandle, AttributeType);
;
}
void (*external_ANDUC352BLEImpl_send_ATT_ATTReadByTypeResponse_listener)(struct ANDUC352BLEImpl_Instance *, uint16_t, uint8_t, ble_gatt_data_t)= 0x0;
void (*ANDUC352BLEImpl_send_ATT_ATTReadByTypeResponse_listener)(struct ANDUC352BLEImpl_Instance *, uint16_t, uint8_t, ble_gatt_data_t)= 0x0;
void register_external_ANDUC352BLEImpl_send_ATT_ATTReadByTypeResponse_listener(void (*_listener)(struct ANDUC352BLEImpl_Instance *, uint16_t, uint8_t, ble_gatt_data_t)){
external_ANDUC352BLEImpl_send_ATT_ATTReadByTypeResponse_listener = _listener;
}
void register_ANDUC352BLEImpl_send_ATT_ATTReadByTypeResponse_listener(void (*_listener)(struct ANDUC352BLEImpl_Instance *, uint16_t, uint8_t, ble_gatt_data_t)){
ANDUC352BLEImpl_send_ATT_ATTReadByTypeResponse_listener = _listener;
}
void ANDUC352BLEImpl_send_ATT_ATTReadByTypeResponse(struct ANDUC352BLEImpl_Instance *_instance, uint16_t ConnectionHandle, uint8_t Length, ble_gatt_data_t AttributeDataList){
if (ANDUC352BLEImpl_send_ATT_ATTReadByTypeResponse_listener != 0x0) ANDUC352BLEImpl_send_ATT_ATTReadByTypeResponse_listener(_instance, ConnectionHandle, Length, AttributeDataList);
if (external_ANDUC352BLEImpl_send_ATT_ATTReadByTypeResponse_listener != 0x0) external_ANDUC352BLEImpl_send_ATT_ATTReadByTypeResponse_listener(_instance, ConnectionHandle, Length, AttributeDataList);
;
}
void (*external_ANDUC352BLEImpl_send_ATT_ATTReadByTypeError_listener)(struct ANDUC352BLEImpl_Instance *, uint16_t, uint16_t, uint8_t)= 0x0;
void (*ANDUC352BLEImpl_send_ATT_ATTReadByTypeError_listener)(struct ANDUC352BLEImpl_Instance *, uint16_t, uint16_t, uint8_t)= 0x0;
void register_external_ANDUC352BLEImpl_send_ATT_ATTReadByTypeError_listener(void (*_listener)(struct ANDUC352BLEImpl_Instance *, uint16_t, uint16_t, uint8_t)){
external_ANDUC352BLEImpl_send_ATT_ATTReadByTypeError_listener = _listener;
}
void register_ANDUC352BLEImpl_send_ATT_ATTReadByTypeError_listener(void (*_listener)(struct ANDUC352BLEImpl_Instance *, uint16_t, uint16_t, uint8_t)){
ANDUC352BLEImpl_send_ATT_ATTReadByTypeError_listener = _listener;
}
void ANDUC352BLEImpl_send_ATT_ATTReadByTypeError(struct ANDUC352BLEImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error){
if (ANDUC352BLEImpl_send_ATT_ATTReadByTypeError_listener != 0x0) ANDUC352BLEImpl_send_ATT_ATTReadByTypeError_listener(_instance, ConnectionHandle, AttributeHandle, Error);
if (external_ANDUC352BLEImpl_send_ATT_ATTReadByTypeError_listener != 0x0) external_ANDUC352BLEImpl_send_ATT_ATTReadByTypeError_listener(_instance, ConnectionHandle, AttributeHandle, Error);
;
}
void (*external_ANDUC352BLEImpl_send_ATT_ATTReadRequest_listener)(struct ANDUC352BLEImpl_Instance *, uint16_t, uint16_t)= 0x0;
void (*ANDUC352BLEImpl_send_ATT_ATTReadRequest_listener)(struct ANDUC352BLEImpl_Instance *, uint16_t, uint16_t)= 0x0;
void register_external_ANDUC352BLEImpl_send_ATT_ATTReadRequest_listener(void (*_listener)(struct ANDUC352BLEImpl_Instance *, uint16_t, uint16_t)){
external_ANDUC352BLEImpl_send_ATT_ATTReadRequest_listener = _listener;
}
void register_ANDUC352BLEImpl_send_ATT_ATTReadRequest_listener(void (*_listener)(struct ANDUC352BLEImpl_Instance *, uint16_t, uint16_t)){
ANDUC352BLEImpl_send_ATT_ATTReadRequest_listener = _listener;
}
void ANDUC352BLEImpl_send_ATT_ATTReadRequest(struct ANDUC352BLEImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle){
if (ANDUC352BLEImpl_send_ATT_ATTReadRequest_listener != 0x0) ANDUC352BLEImpl_send_ATT_ATTReadRequest_listener(_instance, ConnectionHandle, AttributeHandle);
if (external_ANDUC352BLEImpl_send_ATT_ATTReadRequest_listener != 0x0) external_ANDUC352BLEImpl_send_ATT_ATTReadRequest_listener(_instance, ConnectionHandle, AttributeHandle);
;
}
void (*external_ANDUC352BLEImpl_send_ATT_ATTReadResponse_listener)(struct ANDUC352BLEImpl_Instance *, uint16_t, ble_gatt_data_t)= 0x0;
void (*ANDUC352BLEImpl_send_ATT_ATTReadResponse_listener)(struct ANDUC352BLEImpl_Instance *, uint16_t, ble_gatt_data_t)= 0x0;
void register_external_ANDUC352BLEImpl_send_ATT_ATTReadResponse_listener(void (*_listener)(struct ANDUC352BLEImpl_Instance *, uint16_t, ble_gatt_data_t)){
external_ANDUC352BLEImpl_send_ATT_ATTReadResponse_listener = _listener;
}
void register_ANDUC352BLEImpl_send_ATT_ATTReadResponse_listener(void (*_listener)(struct ANDUC352BLEImpl_Instance *, uint16_t, ble_gatt_data_t)){
ANDUC352BLEImpl_send_ATT_ATTReadResponse_listener = _listener;
}
void ANDUC352BLEImpl_send_ATT_ATTReadResponse(struct ANDUC352BLEImpl_Instance *_instance, uint16_t ConnectionHandle, ble_gatt_data_t AttributeValue){
if (ANDUC352BLEImpl_send_ATT_ATTReadResponse_listener != 0x0) ANDUC352BLEImpl_send_ATT_ATTReadResponse_listener(_instance, ConnectionHandle, AttributeValue);
if (external_ANDUC352BLEImpl_send_ATT_ATTReadResponse_listener != 0x0) external_ANDUC352BLEImpl_send_ATT_ATTReadResponse_listener(_instance, ConnectionHandle, AttributeValue);
;
}
void (*external_ANDUC352BLEImpl_send_ATT_ATTReadError_listener)(struct ANDUC352BLEImpl_Instance *, uint16_t, uint16_t, uint8_t)= 0x0;
void (*ANDUC352BLEImpl_send_ATT_ATTReadError_listener)(struct ANDUC352BLEImpl_Instance *, uint16_t, uint16_t, uint8_t)= 0x0;
void register_external_ANDUC352BLEImpl_send_ATT_ATTReadError_listener(void (*_listener)(struct ANDUC352BLEImpl_Instance *, uint16_t, uint16_t, uint8_t)){
external_ANDUC352BLEImpl_send_ATT_ATTReadError_listener = _listener;
}
void register_ANDUC352BLEImpl_send_ATT_ATTReadError_listener(void (*_listener)(struct ANDUC352BLEImpl_Instance *, uint16_t, uint16_t, uint8_t)){
ANDUC352BLEImpl_send_ATT_ATTReadError_listener = _listener;
}
void ANDUC352BLEImpl_send_ATT_ATTReadError(struct ANDUC352BLEImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error){
if (ANDUC352BLEImpl_send_ATT_ATTReadError_listener != 0x0) ANDUC352BLEImpl_send_ATT_ATTReadError_listener(_instance, ConnectionHandle, AttributeHandle, Error);
if (external_ANDUC352BLEImpl_send_ATT_ATTReadError_listener != 0x0) external_ANDUC352BLEImpl_send_ATT_ATTReadError_listener(_instance, ConnectionHandle, AttributeHandle, Error);
;
}
void (*external_ANDUC352BLEImpl_send_ATT_ATTReadByGroupTypeRequest_listener)(struct ANDUC352BLEImpl_Instance *, uint16_t, uint16_t, uint16_t, ble_uuid_t)= 0x0;
void (*ANDUC352BLEImpl_send_ATT_ATTReadByGroupTypeRequest_listener)(struct ANDUC352BLEImpl_Instance *, uint16_t, uint16_t, uint16_t, ble_uuid_t)= 0x0;
void register_external_ANDUC352BLEImpl_send_ATT_ATTReadByGroupTypeRequest_listener(void (*_listener)(struct ANDUC352BLEImpl_Instance *, uint16_t, uint16_t, uint16_t, ble_uuid_t)){
external_ANDUC352BLEImpl_send_ATT_ATTReadByGroupTypeRequest_listener = _listener;
}
void register_ANDUC352BLEImpl_send_ATT_ATTReadByGroupTypeRequest_listener(void (*_listener)(struct ANDUC352BLEImpl_Instance *, uint16_t, uint16_t, uint16_t, ble_uuid_t)){
ANDUC352BLEImpl_send_ATT_ATTReadByGroupTypeRequest_listener = _listener;
}
void ANDUC352BLEImpl_send_ATT_ATTReadByGroupTypeRequest(struct ANDUC352BLEImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t StartingHandle, uint16_t EndingHandle, ble_uuid_t AttributeGroupType){
if (ANDUC352BLEImpl_send_ATT_ATTReadByGroupTypeRequest_listener != 0x0) ANDUC352BLEImpl_send_ATT_ATTReadByGroupTypeRequest_listener(_instance, ConnectionHandle, StartingHandle, EndingHandle, AttributeGroupType);
if (external_ANDUC352BLEImpl_send_ATT_ATTReadByGroupTypeRequest_listener != 0x0) external_ANDUC352BLEImpl_send_ATT_ATTReadByGroupTypeRequest_listener(_instance, ConnectionHandle, StartingHandle, EndingHandle, AttributeGroupType);
;
}
void (*external_ANDUC352BLEImpl_send_ATT_ATTReadByGroupTypeResponse_listener)(struct ANDUC352BLEImpl_Instance *, uint16_t, uint8_t, ble_gatt_data_t)= 0x0;
void (*ANDUC352BLEImpl_send_ATT_ATTReadByGroupTypeResponse_listener)(struct ANDUC352BLEImpl_Instance *, uint16_t, uint8_t, ble_gatt_data_t)= 0x0;
void register_external_ANDUC352BLEImpl_send_ATT_ATTReadByGroupTypeResponse_listener(void (*_listener)(struct ANDUC352BLEImpl_Instance *, uint16_t, uint8_t, ble_gatt_data_t)){
external_ANDUC352BLEImpl_send_ATT_ATTReadByGroupTypeResponse_listener = _listener;
}
void register_ANDUC352BLEImpl_send_ATT_ATTReadByGroupTypeResponse_listener(void (*_listener)(struct ANDUC352BLEImpl_Instance *, uint16_t, uint8_t, ble_gatt_data_t)){
ANDUC352BLEImpl_send_ATT_ATTReadByGroupTypeResponse_listener = _listener;
}
void ANDUC352BLEImpl_send_ATT_ATTReadByGroupTypeResponse(struct ANDUC352BLEImpl_Instance *_instance, uint16_t ConnectionHandle, uint8_t Length, ble_gatt_data_t AttributeDataList){
if (ANDUC352BLEImpl_send_ATT_ATTReadByGroupTypeResponse_listener != 0x0) ANDUC352BLEImpl_send_ATT_ATTReadByGroupTypeResponse_listener(_instance, ConnectionHandle, Length, AttributeDataList);
if (external_ANDUC352BLEImpl_send_ATT_ATTReadByGroupTypeResponse_listener != 0x0) external_ANDUC352BLEImpl_send_ATT_ATTReadByGroupTypeResponse_listener(_instance, ConnectionHandle, Length, AttributeDataList);
;
}
void (*external_ANDUC352BLEImpl_send_ATT_ATTReadByGroupTypeError_listener)(struct ANDUC352BLEImpl_Instance *, uint16_t, uint16_t, uint8_t)= 0x0;
void (*ANDUC352BLEImpl_send_ATT_ATTReadByGroupTypeError_listener)(struct ANDUC352BLEImpl_Instance *, uint16_t, uint16_t, uint8_t)= 0x0;
void register_external_ANDUC352BLEImpl_send_ATT_ATTReadByGroupTypeError_listener(void (*_listener)(struct ANDUC352BLEImpl_Instance *, uint16_t, uint16_t, uint8_t)){
external_ANDUC352BLEImpl_send_ATT_ATTReadByGroupTypeError_listener = _listener;
}
void register_ANDUC352BLEImpl_send_ATT_ATTReadByGroupTypeError_listener(void (*_listener)(struct ANDUC352BLEImpl_Instance *, uint16_t, uint16_t, uint8_t)){
ANDUC352BLEImpl_send_ATT_ATTReadByGroupTypeError_listener = _listener;
}
void ANDUC352BLEImpl_send_ATT_ATTReadByGroupTypeError(struct ANDUC352BLEImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error){
if (ANDUC352BLEImpl_send_ATT_ATTReadByGroupTypeError_listener != 0x0) ANDUC352BLEImpl_send_ATT_ATTReadByGroupTypeError_listener(_instance, ConnectionHandle, AttributeHandle, Error);
if (external_ANDUC352BLEImpl_send_ATT_ATTReadByGroupTypeError_listener != 0x0) external_ANDUC352BLEImpl_send_ATT_ATTReadByGroupTypeError_listener(_instance, ConnectionHandle, AttributeHandle, Error);
;
}
void (*external_ANDUC352BLEImpl_send_ATT_ATTWriteRequest_listener)(struct ANDUC352BLEImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t)= 0x0;
void (*ANDUC352BLEImpl_send_ATT_ATTWriteRequest_listener)(struct ANDUC352BLEImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t)= 0x0;
void register_external_ANDUC352BLEImpl_send_ATT_ATTWriteRequest_listener(void (*_listener)(struct ANDUC352BLEImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t)){
external_ANDUC352BLEImpl_send_ATT_ATTWriteRequest_listener = _listener;
}
void register_ANDUC352BLEImpl_send_ATT_ATTWriteRequest_listener(void (*_listener)(struct ANDUC352BLEImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t)){
ANDUC352BLEImpl_send_ATT_ATTWriteRequest_listener = _listener;
}
void ANDUC352BLEImpl_send_ATT_ATTWriteRequest(struct ANDUC352BLEImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, ble_gatt_data_t AttributeValue){
if (ANDUC352BLEImpl_send_ATT_ATTWriteRequest_listener != 0x0) ANDUC352BLEImpl_send_ATT_ATTWriteRequest_listener(_instance, ConnectionHandle, AttributeHandle, AttributeValue);
if (external_ANDUC352BLEImpl_send_ATT_ATTWriteRequest_listener != 0x0) external_ANDUC352BLEImpl_send_ATT_ATTWriteRequest_listener(_instance, ConnectionHandle, AttributeHandle, AttributeValue);
;
}
void (*external_ANDUC352BLEImpl_send_ATT_ATTWriteResponse_listener)(struct ANDUC352BLEImpl_Instance *, uint16_t)= 0x0;
void (*ANDUC352BLEImpl_send_ATT_ATTWriteResponse_listener)(struct ANDUC352BLEImpl_Instance *, uint16_t)= 0x0;
void register_external_ANDUC352BLEImpl_send_ATT_ATTWriteResponse_listener(void (*_listener)(struct ANDUC352BLEImpl_Instance *, uint16_t)){
external_ANDUC352BLEImpl_send_ATT_ATTWriteResponse_listener = _listener;
}
void register_ANDUC352BLEImpl_send_ATT_ATTWriteResponse_listener(void (*_listener)(struct ANDUC352BLEImpl_Instance *, uint16_t)){
ANDUC352BLEImpl_send_ATT_ATTWriteResponse_listener = _listener;
}
void ANDUC352BLEImpl_send_ATT_ATTWriteResponse(struct ANDUC352BLEImpl_Instance *_instance, uint16_t ConnectionHandle){
if (ANDUC352BLEImpl_send_ATT_ATTWriteResponse_listener != 0x0) ANDUC352BLEImpl_send_ATT_ATTWriteResponse_listener(_instance, ConnectionHandle);
if (external_ANDUC352BLEImpl_send_ATT_ATTWriteResponse_listener != 0x0) external_ANDUC352BLEImpl_send_ATT_ATTWriteResponse_listener(_instance, ConnectionHandle);
;
}
void (*external_ANDUC352BLEImpl_send_ATT_ATTWriteError_listener)(struct ANDUC352BLEImpl_Instance *, uint16_t, uint16_t, uint8_t)= 0x0;
void (*ANDUC352BLEImpl_send_ATT_ATTWriteError_listener)(struct ANDUC352BLEImpl_Instance *, uint16_t, uint16_t, uint8_t)= 0x0;
void register_external_ANDUC352BLEImpl_send_ATT_ATTWriteError_listener(void (*_listener)(struct ANDUC352BLEImpl_Instance *, uint16_t, uint16_t, uint8_t)){
external_ANDUC352BLEImpl_send_ATT_ATTWriteError_listener = _listener;
}
void register_ANDUC352BLEImpl_send_ATT_ATTWriteError_listener(void (*_listener)(struct ANDUC352BLEImpl_Instance *, uint16_t, uint16_t, uint8_t)){
ANDUC352BLEImpl_send_ATT_ATTWriteError_listener = _listener;
}
void ANDUC352BLEImpl_send_ATT_ATTWriteError(struct ANDUC352BLEImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error){
if (ANDUC352BLEImpl_send_ATT_ATTWriteError_listener != 0x0) ANDUC352BLEImpl_send_ATT_ATTWriteError_listener(_instance, ConnectionHandle, AttributeHandle, Error);
if (external_ANDUC352BLEImpl_send_ATT_ATTWriteError_listener != 0x0) external_ANDUC352BLEImpl_send_ATT_ATTWriteError_listener(_instance, ConnectionHandle, AttributeHandle, Error);
;
}
void (*external_ANDUC352BLEImpl_send_ATT_ATTWriteCommand_listener)(struct ANDUC352BLEImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t)= 0x0;
void (*ANDUC352BLEImpl_send_ATT_ATTWriteCommand_listener)(struct ANDUC352BLEImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t)= 0x0;
void register_external_ANDUC352BLEImpl_send_ATT_ATTWriteCommand_listener(void (*_listener)(struct ANDUC352BLEImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t)){
external_ANDUC352BLEImpl_send_ATT_ATTWriteCommand_listener = _listener;
}
void register_ANDUC352BLEImpl_send_ATT_ATTWriteCommand_listener(void (*_listener)(struct ANDUC352BLEImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t)){
ANDUC352BLEImpl_send_ATT_ATTWriteCommand_listener = _listener;
}
void ANDUC352BLEImpl_send_ATT_ATTWriteCommand(struct ANDUC352BLEImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, ble_gatt_data_t AttributeValue){
if (ANDUC352BLEImpl_send_ATT_ATTWriteCommand_listener != 0x0) ANDUC352BLEImpl_send_ATT_ATTWriteCommand_listener(_instance, ConnectionHandle, AttributeHandle, AttributeValue);
if (external_ANDUC352BLEImpl_send_ATT_ATTWriteCommand_listener != 0x0) external_ANDUC352BLEImpl_send_ATT_ATTWriteCommand_listener(_instance, ConnectionHandle, AttributeHandle, AttributeValue);
;
}
void (*external_ANDUC352BLEImpl_send_ATT_ATTHandleValueNotification_listener)(struct ANDUC352BLEImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t)= 0x0;
void (*ANDUC352BLEImpl_send_ATT_ATTHandleValueNotification_listener)(struct ANDUC352BLEImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t)= 0x0;
void register_external_ANDUC352BLEImpl_send_ATT_ATTHandleValueNotification_listener(void (*_listener)(struct ANDUC352BLEImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t)){
external_ANDUC352BLEImpl_send_ATT_ATTHandleValueNotification_listener = _listener;
}
void register_ANDUC352BLEImpl_send_ATT_ATTHandleValueNotification_listener(void (*_listener)(struct ANDUC352BLEImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t)){
ANDUC352BLEImpl_send_ATT_ATTHandleValueNotification_listener = _listener;
}
void ANDUC352BLEImpl_send_ATT_ATTHandleValueNotification(struct ANDUC352BLEImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, ble_gatt_data_t AttributeValue){
if (ANDUC352BLEImpl_send_ATT_ATTHandleValueNotification_listener != 0x0) ANDUC352BLEImpl_send_ATT_ATTHandleValueNotification_listener(_instance, ConnectionHandle, AttributeHandle, AttributeValue);
if (external_ANDUC352BLEImpl_send_ATT_ATTHandleValueNotification_listener != 0x0) external_ANDUC352BLEImpl_send_ATT_ATTHandleValueNotification_listener(_instance, ConnectionHandle, AttributeHandle, AttributeValue);
;
}
void (*external_ANDUC352BLEImpl_send_ATT_ATTHandleValueIndication_listener)(struct ANDUC352BLEImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t)= 0x0;
void (*ANDUC352BLEImpl_send_ATT_ATTHandleValueIndication_listener)(struct ANDUC352BLEImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t)= 0x0;
void register_external_ANDUC352BLEImpl_send_ATT_ATTHandleValueIndication_listener(void (*_listener)(struct ANDUC352BLEImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t)){
external_ANDUC352BLEImpl_send_ATT_ATTHandleValueIndication_listener = _listener;
}
void register_ANDUC352BLEImpl_send_ATT_ATTHandleValueIndication_listener(void (*_listener)(struct ANDUC352BLEImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t)){
ANDUC352BLEImpl_send_ATT_ATTHandleValueIndication_listener = _listener;
}
void ANDUC352BLEImpl_send_ATT_ATTHandleValueIndication(struct ANDUC352BLEImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, ble_gatt_data_t AttributeValue){
if (ANDUC352BLEImpl_send_ATT_ATTHandleValueIndication_listener != 0x0) ANDUC352BLEImpl_send_ATT_ATTHandleValueIndication_listener(_instance, ConnectionHandle, AttributeHandle, AttributeValue);
if (external_ANDUC352BLEImpl_send_ATT_ATTHandleValueIndication_listener != 0x0) external_ANDUC352BLEImpl_send_ATT_ATTHandleValueIndication_listener(_instance, ConnectionHandle, AttributeHandle, AttributeValue);
;
}
void (*external_ANDUC352BLEImpl_send_ATT_ATTHandleValueConfirmation_listener)(struct ANDUC352BLEImpl_Instance *, uint16_t)= 0x0;
void (*ANDUC352BLEImpl_send_ATT_ATTHandleValueConfirmation_listener)(struct ANDUC352BLEImpl_Instance *, uint16_t)= 0x0;
void register_external_ANDUC352BLEImpl_send_ATT_ATTHandleValueConfirmation_listener(void (*_listener)(struct ANDUC352BLEImpl_Instance *, uint16_t)){
external_ANDUC352BLEImpl_send_ATT_ATTHandleValueConfirmation_listener = _listener;
}
void register_ANDUC352BLEImpl_send_ATT_ATTHandleValueConfirmation_listener(void (*_listener)(struct ANDUC352BLEImpl_Instance *, uint16_t)){
ANDUC352BLEImpl_send_ATT_ATTHandleValueConfirmation_listener = _listener;
}
void ANDUC352BLEImpl_send_ATT_ATTHandleValueConfirmation(struct ANDUC352BLEImpl_Instance *_instance, uint16_t ConnectionHandle){
if (ANDUC352BLEImpl_send_ATT_ATTHandleValueConfirmation_listener != 0x0) ANDUC352BLEImpl_send_ATT_ATTHandleValueConfirmation_listener(_instance, ConnectionHandle);
if (external_ANDUC352BLEImpl_send_ATT_ATTHandleValueConfirmation_listener != 0x0) external_ANDUC352BLEImpl_send_ATT_ATTHandleValueConfirmation_listener(_instance, ConnectionHandle);
;
}



