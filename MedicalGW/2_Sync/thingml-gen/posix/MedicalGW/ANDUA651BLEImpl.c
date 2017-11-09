/*****************************************************
 *      THIS IS A GENERATED FILE. DO NOT EDIT.
 *        Implementation for Thing ANDUA651BLEImpl
 *  Generated from ThingML (http://www.thingml.org)
 *****************************************************/

#include "ANDUA651BLEImpl.h"

/*****************************************************************************
 * Implementation for type : ANDUA651BLEImpl
 *****************************************************************************/


// BEGIN: Code from the c_global annotation ANDUA651BLEImpl

  static ble_random_number_t peer_ltk = { 0x3B, 0xA0, 0x6C, 0x91, 0xDD, 0x2E, 0x8A, 0x19, 0xCB, 0xE6, 0x5F, 0xD5, 0x12, 0x3A, 0xF6, 0x4C, };
  static uint16_t peer_ediv = 0x2087;
  static ble_random_part_t peer_random = { 0xE9, 0x9B, 0x95, 0xCE, 0x1E, 0x2F, 0x06, 0x09, };

  float sfloat_to_float(uint8_t *bytes) {
    if (bytes[1] == 0x07 && bytes[0] == 0xFE) return INFINITY;
    else if (bytes[1] == 0x07 && bytes[0] == 0xFF) return NAN;
    else if (bytes[1] == 0x08 && bytes[0] == 0x00) return NAN;
    else if (bytes[1] == 0x08 && bytes[0] == 0x01) return NAN;
    else if (bytes[1] == 0x08 && bytes[0] == 0x02) return -INFINITY;
    else {
      int8_t exponent = ((int8_t)bytes[1]) >> 4;
      int16_t mantissa = ((int16_t)(((uint16_t)bytes[1]) << 12) >> 4) | ((uint16_t)bytes[0]);
      float f_exp = (float)exponent;
      float f_man = (float)mantissa;
      return pow(10,f_exp)*f_man;
    }
  }

// END: Code from the c_global annotation ANDUA651BLEImpl

// Declaration of prototypes:
//Prototypes: State Machine
void ANDUA651BLEImpl_States_OnExit(int state, struct ANDUA651BLEImpl_Instance *_instance);
//Prototypes: Message Sending
void ANDUA651BLEImpl_send_ANDUA651BLE_WantsToConnect(struct ANDUA651BLEImpl_Instance *_instance);
void ANDUA651BLEImpl_send_ANDUA651BLE_FinishedConnection(struct ANDUA651BLEImpl_Instance *_instance);
void ANDUA651BLEImpl_send_Tellu_TelluCloudBloodPressure(struct ANDUA651BLEImpl_Instance *_instance, time_t observationTime, int16_t health_pressure_diastolic, int16_t health_pressure_mean, int16_t health_pressure_systolic, int16_t health_pulseRate);
void ANDUA651BLEImpl_send_Scanner_Start(struct ANDUA651BLEImpl_Instance *_instance);
void ANDUA651BLEImpl_send_Scanner_Stop(struct ANDUA651BLEImpl_Instance *_instance);
void ANDUA651BLEImpl_send_Connecter_Connect(struct ANDUA651BLEImpl_Instance *_instance);
void ANDUA651BLEImpl_send_Connecter_ConnectTo(struct ANDUA651BLEImpl_Instance *_instance, uint8_t AddressType, bdaddr_t Address, ble_random_number_t LongTermKey, uint16_t EncryptedDiversifier, ble_random_part_t RandomNumber);
void ANDUA651BLEImpl_send_Connecter_ConnectToU(struct ANDUA651BLEImpl_Instance *_instance, uint8_t AddressType, bdaddr_t Address);
void ANDUA651BLEImpl_send_Connecter_Stop(struct ANDUA651BLEImpl_Instance *_instance);
void ANDUA651BLEImpl_send_Connecter_Encrypt(struct ANDUA651BLEImpl_Instance *_instance);
void ANDUA651BLEImpl_send_Notifications_NotifierConnect(struct ANDUA651BLEImpl_Instance *_instance, uint8_t AddressType, bdaddr_t Address);
void ANDUA651BLEImpl_send_Notifications_NotifierRequest(struct ANDUA651BLEImpl_Instance *_instance);
void ANDUA651BLEImpl_send_Notifications_NotifierError(struct ANDUA651BLEImpl_Instance *_instance);
void ANDUA651BLEImpl_send_Notifications_NotifierReceived(struct ANDUA651BLEImpl_Instance *_instance);
void ANDUA651BLEImpl_send_Notifications_NotifierStored(struct ANDUA651BLEImpl_Instance *_instance);
void ANDUA651BLEImpl_send_ATT_ATTFindInformationRequest(struct ANDUA651BLEImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t StartingHandle, uint16_t EndingHandle);
void ANDUA651BLEImpl_send_ATT_ATTFindInformationResponse(struct ANDUA651BLEImpl_Instance *_instance, uint16_t ConnectionHandle, uint8_t Format, ble_gatt_data_t InformationData);
void ANDUA651BLEImpl_send_ATT_ATTFindInformationError(struct ANDUA651BLEImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error);
void ANDUA651BLEImpl_send_ATT_ATTReadByTypeRequest(struct ANDUA651BLEImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t StartingHandle, uint16_t EndingHandle, ble_uuid_t AttributeType);
void ANDUA651BLEImpl_send_ATT_ATTReadByTypeResponse(struct ANDUA651BLEImpl_Instance *_instance, uint16_t ConnectionHandle, uint8_t Length, ble_gatt_data_t AttributeDataList);
void ANDUA651BLEImpl_send_ATT_ATTReadByTypeError(struct ANDUA651BLEImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error);
void ANDUA651BLEImpl_send_ATT_ATTReadRequest(struct ANDUA651BLEImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle);
void ANDUA651BLEImpl_send_ATT_ATTReadResponse(struct ANDUA651BLEImpl_Instance *_instance, uint16_t ConnectionHandle, ble_gatt_data_t AttributeValue);
void ANDUA651BLEImpl_send_ATT_ATTReadError(struct ANDUA651BLEImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error);
void ANDUA651BLEImpl_send_ATT_ATTReadByGroupTypeRequest(struct ANDUA651BLEImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t StartingHandle, uint16_t EndingHandle, ble_uuid_t AttributeGroupType);
void ANDUA651BLEImpl_send_ATT_ATTReadByGroupTypeResponse(struct ANDUA651BLEImpl_Instance *_instance, uint16_t ConnectionHandle, uint8_t Length, ble_gatt_data_t AttributeDataList);
void ANDUA651BLEImpl_send_ATT_ATTReadByGroupTypeError(struct ANDUA651BLEImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error);
void ANDUA651BLEImpl_send_ATT_ATTWriteRequest(struct ANDUA651BLEImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, ble_gatt_data_t AttributeValue);
void ANDUA651BLEImpl_send_ATT_ATTWriteResponse(struct ANDUA651BLEImpl_Instance *_instance, uint16_t ConnectionHandle);
void ANDUA651BLEImpl_send_ATT_ATTWriteError(struct ANDUA651BLEImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error);
void ANDUA651BLEImpl_send_ATT_ATTWriteCommand(struct ANDUA651BLEImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, ble_gatt_data_t AttributeValue);
void ANDUA651BLEImpl_send_ATT_ATTHandleValueNotification(struct ANDUA651BLEImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, ble_gatt_data_t AttributeValue);
void ANDUA651BLEImpl_send_ATT_ATTHandleValueIndication(struct ANDUA651BLEImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, ble_gatt_data_t AttributeValue);
void ANDUA651BLEImpl_send_ATT_ATTHandleValueConfirmation(struct ANDUA651BLEImpl_Instance *_instance, uint16_t ConnectionHandle);
//Prototypes: Function
ble_uuid_t f_ANDUA651BLEImpl_ReadUUID(struct ANDUA651BLEImpl_Instance *_instance, uint16_t Length, uint8_t * Data);
ble_uuid_t f_ANDUA651BLEImpl_MakeUUID(struct ANDUA651BLEImpl_Instance *_instance, const char * Text);
void f_ANDUA651BLEImpl_PrintUUID(struct ANDUA651BLEImpl_Instance *_instance, ble_uuid_t ID);
// Declaration of functions:
// Definition of function ReadUUID
ble_uuid_t f_ANDUA651BLEImpl_ReadUUID(struct ANDUA651BLEImpl_Instance *_instance, uint16_t Length, uint8_t * Data) {
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
ble_uuid_t f_ANDUA651BLEImpl_MakeUUID(struct ANDUA651BLEImpl_Instance *_instance, const char * Text) {
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
void f_ANDUA651BLEImpl_PrintUUID(struct ANDUA651BLEImpl_Instance *_instance, ble_uuid_t ID) {

      uint8_t *v = &ID;
      printf("%2.2X%2.2X%2.2X%2.2X-",v[15],v[14],v[13],v[12]);
      printf("%2.2X%2.2X-",v[11],v[10]);
      printf("%2.2X%2.2X-",v[9],v[8]);
      printf("%2.2X%2.2X-",v[7],v[6]);
      printf("%2.2X%2.2X%2.2X%2.2X%2.2X%2.2X\n",v[5],v[4],v[3],v[2],v[1],v[0]);
    
}

// Sessions functionss:


// On Entry Actions:
void ANDUA651BLEImpl_States_OnEntry(int state, struct ANDUA651BLEImpl_Instance *_instance) {
switch(state) {
case ANDUA651BLEIMPL_STATES_SYNC_STATE:{
_instance->ANDUA651BLEImpl_States_Sync_State = ANDUA651BLEIMPL_STATES_SYNC_READBATTERY_STATE;
fprintf(stdout, "[INFO]: Syncing with A&D UA-651BLE...\n");
ANDUA651BLEImpl_States_OnEntry(_instance->ANDUA651BLEImpl_States_Sync_State, _instance);
break;
}
case ANDUA651BLEIMPL_STATES_NOTIFY_STATE:{
_instance->ANDUA651BLEImpl_States_Notify_State = ANDUA651BLEIMPL_STATES_NOTIFY_WAIT_STATE;
ANDUA651BLEImpl_States_OnEntry(_instance->ANDUA651BLEImpl_States_Notify_State, _instance);
break;
}
case ANDUA651BLEIMPL_STATES_STATE:{
_instance->ANDUA651BLEImpl_States_State = ANDUA651BLEIMPL_STATES_STANDBY_STATE;
_instance->ANDUA651BLEImpl_LongTermKey_var = peer_ltk;
_instance->ANDUA651BLEImpl_EncryptedDiversifier_var = peer_ediv;
_instance->ANDUA651BLEImpl_RandomNumber_var = peer_random;
str2ba(_instance->ANDUA651BLEImpl_Address_var, &_instance->ANDUA651BLEImpl_AddressBT_var);
str2ba(_instance->ANDUA651BLEImpl_NotifierAddress_var, &_instance->ANDUA651BLEImpl_NotifierAddressBT_var);
ANDUA651BLEImpl_States_OnEntry(_instance->ANDUA651BLEImpl_States_State, _instance);
break;
}
case ANDUA651BLEIMPL_STATES_STANDBY_STATE:{
_instance->ANDUA651BLEImpl_DoSync_var = 0;
break;
}
case ANDUA651BLEIMPL_STATES_CONNECTING_STATE:{
fprintf(stdout, "[INFO]: Connecting to A&D UA-651BLE...\n");
ANDUA651BLEImpl_send_Connecter_ConnectTo(_instance, _instance->ANDUA651BLEImpl_AddressType_var, _instance->ANDUA651BLEImpl_AddressBT_var, _instance->ANDUA651BLEImpl_LongTermKey_var, _instance->ANDUA651BLEImpl_EncryptedDiversifier_var, _instance->ANDUA651BLEImpl_RandomNumber_var);
break;
}
case ANDUA651BLEIMPL_STATES_SYNC_READBATTERY_STATE:{
fprintf(stdout, "[INFO]: Reading battery percentage...\n");
ANDUA651BLEImpl_send_ATT_ATTReadRequest(_instance, _instance->ANDUA651BLEImpl_ConnectedHandle_var, _instance->ANDUA651BLEImpl_BatteryValueHandle_var);
break;
}
case ANDUA651BLEIMPL_STATES_SYNC_TIMESYNC_STATE:{
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
          
ANDUA651BLEImpl_send_ATT_ATTWriteRequest(_instance, _instance->ANDUA651BLEImpl_ConnectedHandle_var, 0x0017, AttributeValue);
break;
}
case ANDUA651BLEIMPL_STATES_SYNC_GETVALUES_STATE:{
fprintf(stdout, "[INFO]: Requesting indications of Blood Pressure Measurement...\n");
;ble_gatt_data_t AttributeValue;
AttributeValue.length = 2;
AttributeValue.bytes[0] = 0x02;
AttributeValue.bytes[1] = 0x00;
ANDUA651BLEImpl_send_ATT_ATTWriteRequest(_instance, _instance->ANDUA651BLEImpl_ConnectedHandle_var, _instance->ANDUA651BLEImpl_BloodPressureConfigurationHandle_var, AttributeValue);
break;
}
case ANDUA651BLEIMPL_STATES_NOTIFY_WAIT_STATE:{
ANDUA651BLEImpl_send_ANDUA651BLE_WantsToConnect(_instance);
break;
}
case ANDUA651BLEIMPL_STATES_NOTIFY_CONNECTINGNOTIFIER_STATE:{
fprintf(stdout, "[INFO]: Connecting to A&D UA-651BLE notifier...\n");
ANDUA651BLEImpl_send_Notifications_NotifierConnect(_instance, _instance->ANDUA651BLEImpl_NotifierAddressType_var, _instance->ANDUA651BLEImpl_NotifierAddressBT_var);
break;
}
case ANDUA651BLEIMPL_STATES_NOTIFY_CONNECTEDNOTIFIER_STATE:{
if(_instance->ANDUA651BLEImpl_DoSync_var == 1) {
_instance->ANDUA651BLEImpl_DoSync_var = 0;
if(_instance->ANDUA651BLEImpl_GotMeasurement_var == 1) {
ANDUA651BLEImpl_send_Notifications_NotifierReceived(_instance);

} else {
ANDUA651BLEImpl_send_Notifications_NotifierError(_instance);

}

} else {
if(_instance->ANDUA651BLEImpl_GotStored_var == 1) {
_instance->ANDUA651BLEImpl_GotStored_var = 0;
ANDUA651BLEImpl_send_Notifications_NotifierStored(_instance);

} else {
if(_instance->ANDUA651BLEImpl_GotRequest_var == 1) {
_instance->ANDUA651BLEImpl_GotRequest_var = 0;
ANDUA651BLEImpl_send_Notifications_NotifierRequest(_instance);

}

}

}
break;
}
default: break;
}
}

// On Exit Actions:
void ANDUA651BLEImpl_States_OnExit(int state, struct ANDUA651BLEImpl_Instance *_instance) {
switch(state) {
case ANDUA651BLEIMPL_STATES_SYNC_STATE:{
ANDUA651BLEImpl_States_OnExit(_instance->ANDUA651BLEImpl_States_Sync_State, _instance);
break;}
case ANDUA651BLEIMPL_STATES_NOTIFY_STATE:{
ANDUA651BLEImpl_States_OnExit(_instance->ANDUA651BLEImpl_States_Notify_State, _instance);
break;}
case ANDUA651BLEIMPL_STATES_STATE:{
ANDUA651BLEImpl_States_OnExit(_instance->ANDUA651BLEImpl_States_State, _instance);
break;}
case ANDUA651BLEIMPL_STATES_STANDBY_STATE:{
break;}
case ANDUA651BLEIMPL_STATES_CONNECTING_STATE:{
break;}
case ANDUA651BLEIMPL_STATES_SYNC_READBATTERY_STATE:{
break;}
case ANDUA651BLEIMPL_STATES_SYNC_TIMESYNC_STATE:{
break;}
case ANDUA651BLEIMPL_STATES_SYNC_GETVALUES_STATE:{
break;}
case ANDUA651BLEIMPL_STATES_NOTIFY_WAIT_STATE:{
break;}
case ANDUA651BLEIMPL_STATES_NOTIFY_CONNECTINGNOTIFIER_STATE:{
break;}
case ANDUA651BLEIMPL_STATES_NOTIFY_CONNECTEDNOTIFIER_STATE:{
break;}
default: break;
}
}

// Event Handlers for incoming messages:
void ANDUA651BLEImpl_handle_ANDUA651BLE_AllowedToConnect(struct ANDUA651BLEImpl_Instance *_instance) {
if(!(_instance->active)) return;
//Region States
uint8_t ANDUA651BLEImpl_States_State_event_consumed = 0;
if (_instance->ANDUA651BLEImpl_States_State == ANDUA651BLEIMPL_STATES_STANDBY_STATE) {
if (ANDUA651BLEImpl_States_State_event_consumed == 0 && (_instance->ANDUA651BLEImpl_DoSync_var == 1)) {
ANDUA651BLEImpl_States_OnExit(ANDUA651BLEIMPL_STATES_STANDBY_STATE, _instance);
_instance->ANDUA651BLEImpl_States_State = ANDUA651BLEIMPL_STATES_CONNECTING_STATE;
ANDUA651BLEImpl_States_OnEntry(ANDUA651BLEIMPL_STATES_CONNECTING_STATE, _instance);
ANDUA651BLEImpl_States_State_event_consumed = 1;
}
else if (ANDUA651BLEImpl_States_State_event_consumed == 0 && (_instance->ANDUA651BLEImpl_DoSync_var == 0)) {
ANDUA651BLEImpl_States_OnExit(ANDUA651BLEIMPL_STATES_STANDBY_STATE, _instance);
_instance->ANDUA651BLEImpl_States_State = ANDUA651BLEIMPL_STATES_NOTIFY_STATE;
ANDUA651BLEImpl_States_OnEntry(ANDUA651BLEIMPL_STATES_NOTIFY_STATE, _instance);
ANDUA651BLEImpl_States_State_event_consumed = 1;
}
}
else if (_instance->ANDUA651BLEImpl_States_State == ANDUA651BLEIMPL_STATES_NOTIFY_STATE) {
//Region Notify
uint8_t ANDUA651BLEImpl_States_Notify_State_event_consumed = 0;
if (_instance->ANDUA651BLEImpl_States_Notify_State == ANDUA651BLEIMPL_STATES_NOTIFY_WAIT_STATE) {
if (ANDUA651BLEImpl_States_Notify_State_event_consumed == 0 && 1) {
ANDUA651BLEImpl_States_OnExit(ANDUA651BLEIMPL_STATES_NOTIFY_WAIT_STATE, _instance);
_instance->ANDUA651BLEImpl_States_Notify_State = ANDUA651BLEIMPL_STATES_NOTIFY_CONNECTINGNOTIFIER_STATE;
ANDUA651BLEImpl_States_OnEntry(ANDUA651BLEIMPL_STATES_NOTIFY_CONNECTINGNOTIFIER_STATE, _instance);
ANDUA651BLEImpl_States_Notify_State_event_consumed = 1;
}
}
//End Region Notify
//End dsregion Notify
}
//End Region States
//Region Sync
uint8_t ANDUA651BLEImpl_States_Sync_State_event_consumed = 0;
//End Region Sync
//Region Notify
uint8_t ANDUA651BLEImpl_States_Notify_State_event_consumed = 0;
if (_instance->ANDUA651BLEImpl_States_Notify_State == ANDUA651BLEIMPL_STATES_NOTIFY_WAIT_STATE) {
if (ANDUA651BLEImpl_States_Notify_State_event_consumed == 0 && 1) {
ANDUA651BLEImpl_States_OnExit(ANDUA651BLEIMPL_STATES_NOTIFY_WAIT_STATE, _instance);
_instance->ANDUA651BLEImpl_States_Notify_State = ANDUA651BLEIMPL_STATES_NOTIFY_CONNECTINGNOTIFIER_STATE;
ANDUA651BLEImpl_States_OnEntry(ANDUA651BLEIMPL_STATES_NOTIFY_CONNECTINGNOTIFIER_STATE, _instance);
ANDUA651BLEImpl_States_Notify_State_event_consumed = 1;
}
}
//End Region Notify
//End dsregion States
//Session list: 
}
void ANDUA651BLEImpl_handle_Scanner_ConnectableAdvertisement(struct ANDUA651BLEImpl_Instance *_instance, uint8_t AddressType, bdaddr_t Address) {
if(!(_instance->active)) return;
//Region States
uint8_t ANDUA651BLEImpl_States_State_event_consumed = 0;
if (_instance->ANDUA651BLEImpl_States_State == ANDUA651BLEIMPL_STATES_STANDBY_STATE) {
if (ANDUA651BLEImpl_States_State_event_consumed == 0 && 1) {
if(AddressType == _instance->ANDUA651BLEImpl_AddressType_var && bacmp(&Address, &_instance->ANDUA651BLEImpl_AddressBT_var) == 0) {
_instance->ANDUA651BLEImpl_DoSync_var = 1;
_instance->ANDUA651BLEImpl_GotMeasurement_var = 0;
ANDUA651BLEImpl_send_ANDUA651BLE_WantsToConnect(_instance);

}
ANDUA651BLEImpl_States_State_event_consumed = 1;
}
}
//End Region States
//Region Sync
uint8_t ANDUA651BLEImpl_States_Sync_State_event_consumed = 0;
//End Region Sync
//Region Notify
uint8_t ANDUA651BLEImpl_States_Notify_State_event_consumed = 0;
//End Region Notify
//End dsregion States
//Session list: 
}
void ANDUA651BLEImpl_handle_Connecter_Stopped(struct ANDUA651BLEImpl_Instance *_instance) {
if(!(_instance->active)) return;
//Region States
uint8_t ANDUA651BLEImpl_States_State_event_consumed = 0;
if (_instance->ANDUA651BLEImpl_States_State == ANDUA651BLEIMPL_STATES_CONNECTING_STATE) {
if (ANDUA651BLEImpl_States_State_event_consumed == 0 && 1) {
ANDUA651BLEImpl_States_OnExit(ANDUA651BLEIMPL_STATES_CONNECTING_STATE, _instance);
_instance->ANDUA651BLEImpl_States_State = ANDUA651BLEIMPL_STATES_NOTIFY_STATE;
ANDUA651BLEImpl_States_OnEntry(ANDUA651BLEIMPL_STATES_NOTIFY_STATE, _instance);
ANDUA651BLEImpl_States_State_event_consumed = 1;
}
}
else if (_instance->ANDUA651BLEImpl_States_State == ANDUA651BLEIMPL_STATES_SYNC_STATE) {
//Region Sync
uint8_t ANDUA651BLEImpl_States_Sync_State_event_consumed = 0;
//End Region Sync
//End dsregion Sync
if (ANDUA651BLEImpl_States_State_event_consumed == 0 && 1) {
ANDUA651BLEImpl_States_OnExit(ANDUA651BLEIMPL_STATES_SYNC_STATE, _instance);
_instance->ANDUA651BLEImpl_States_State = ANDUA651BLEIMPL_STATES_NOTIFY_STATE;
ANDUA651BLEImpl_States_OnEntry(ANDUA651BLEIMPL_STATES_NOTIFY_STATE, _instance);
ANDUA651BLEImpl_States_State_event_consumed = 1;
}
}
//End Region States
//Region Sync
uint8_t ANDUA651BLEImpl_States_Sync_State_event_consumed = 0;
//End Region Sync
//Region Notify
uint8_t ANDUA651BLEImpl_States_Notify_State_event_consumed = 0;
//End Region Notify
//End dsregion States
//Session list: 
}
void ANDUA651BLEImpl_handle_Connecter_Connected(struct ANDUA651BLEImpl_Instance *_instance, uint16_t Handle, uint8_t AddressType, bdaddr_t Address) {
if(!(_instance->active)) return;
//Region States
uint8_t ANDUA651BLEImpl_States_State_event_consumed = 0;
if (_instance->ANDUA651BLEImpl_States_State == ANDUA651BLEIMPL_STATES_CONNECTING_STATE) {
if (ANDUA651BLEImpl_States_State_event_consumed == 0 && 1) {
_instance->ANDUA651BLEImpl_ConnectedHandle_var = Handle;
ANDUA651BLEImpl_send_Connecter_Encrypt(_instance);
ANDUA651BLEImpl_States_State_event_consumed = 1;
}
}
//End Region States
//Region Sync
uint8_t ANDUA651BLEImpl_States_Sync_State_event_consumed = 0;
//End Region Sync
//Region Notify
uint8_t ANDUA651BLEImpl_States_Notify_State_event_consumed = 0;
//End Region Notify
//End dsregion States
//Session list: 
}
void ANDUA651BLEImpl_handle_Connecter_Failure(struct ANDUA651BLEImpl_Instance *_instance) {
if(!(_instance->active)) return;
//Region States
uint8_t ANDUA651BLEImpl_States_State_event_consumed = 0;
if (_instance->ANDUA651BLEImpl_States_State == ANDUA651BLEIMPL_STATES_CONNECTING_STATE) {
if (ANDUA651BLEImpl_States_State_event_consumed == 0 && 1) {
ANDUA651BLEImpl_States_OnExit(ANDUA651BLEIMPL_STATES_CONNECTING_STATE, _instance);
_instance->ANDUA651BLEImpl_States_State = ANDUA651BLEIMPL_STATES_NOTIFY_STATE;
ANDUA651BLEImpl_States_OnEntry(ANDUA651BLEIMPL_STATES_NOTIFY_STATE, _instance);
ANDUA651BLEImpl_States_State_event_consumed = 1;
}
}
else if (_instance->ANDUA651BLEImpl_States_State == ANDUA651BLEIMPL_STATES_SYNC_STATE) {
//Region Sync
uint8_t ANDUA651BLEImpl_States_Sync_State_event_consumed = 0;
//End Region Sync
//End dsregion Sync
if (ANDUA651BLEImpl_States_State_event_consumed == 0 && 1) {
ANDUA651BLEImpl_States_OnExit(ANDUA651BLEIMPL_STATES_SYNC_STATE, _instance);
_instance->ANDUA651BLEImpl_States_State = ANDUA651BLEIMPL_STATES_NOTIFY_STATE;
ANDUA651BLEImpl_States_OnEntry(ANDUA651BLEIMPL_STATES_NOTIFY_STATE, _instance);
ANDUA651BLEImpl_States_State_event_consumed = 1;
}
}
//End Region States
//Region Sync
uint8_t ANDUA651BLEImpl_States_Sync_State_event_consumed = 0;
//End Region Sync
//Region Notify
uint8_t ANDUA651BLEImpl_States_Notify_State_event_consumed = 0;
//End Region Notify
//End dsregion States
//Session list: 
}
void ANDUA651BLEImpl_handle_Connecter_Encrypted(struct ANDUA651BLEImpl_Instance *_instance) {
if(!(_instance->active)) return;
//Region States
uint8_t ANDUA651BLEImpl_States_State_event_consumed = 0;
if (_instance->ANDUA651BLEImpl_States_State == ANDUA651BLEIMPL_STATES_CONNECTING_STATE) {
if (ANDUA651BLEImpl_States_State_event_consumed == 0 && 1) {
ANDUA651BLEImpl_States_OnExit(ANDUA651BLEIMPL_STATES_CONNECTING_STATE, _instance);
_instance->ANDUA651BLEImpl_States_State = ANDUA651BLEIMPL_STATES_SYNC_STATE;
ANDUA651BLEImpl_States_OnEntry(ANDUA651BLEIMPL_STATES_SYNC_STATE, _instance);
ANDUA651BLEImpl_States_State_event_consumed = 1;
}
}
//End Region States
//Region Sync
uint8_t ANDUA651BLEImpl_States_Sync_State_event_consumed = 0;
//End Region Sync
//Region Notify
uint8_t ANDUA651BLEImpl_States_Notify_State_event_consumed = 0;
//End Region Notify
//End dsregion States
//Session list: 
}
void ANDUA651BLEImpl_handle_Notifications_NotifierReady(struct ANDUA651BLEImpl_Instance *_instance) {
if(!(_instance->active)) return;
//Region States
uint8_t ANDUA651BLEImpl_States_State_event_consumed = 0;
if (_instance->ANDUA651BLEImpl_States_State == ANDUA651BLEIMPL_STATES_NOTIFY_STATE) {
//Region Notify
uint8_t ANDUA651BLEImpl_States_Notify_State_event_consumed = 0;
if (_instance->ANDUA651BLEImpl_States_Notify_State == ANDUA651BLEIMPL_STATES_NOTIFY_CONNECTINGNOTIFIER_STATE) {
if (ANDUA651BLEImpl_States_Notify_State_event_consumed == 0 && 1) {
ANDUA651BLEImpl_States_OnExit(ANDUA651BLEIMPL_STATES_NOTIFY_CONNECTINGNOTIFIER_STATE, _instance);
_instance->ANDUA651BLEImpl_States_Notify_State = ANDUA651BLEIMPL_STATES_NOTIFY_CONNECTEDNOTIFIER_STATE;
ANDUA651BLEImpl_States_OnEntry(ANDUA651BLEIMPL_STATES_NOTIFY_CONNECTEDNOTIFIER_STATE, _instance);
ANDUA651BLEImpl_States_Notify_State_event_consumed = 1;
}
}
//End Region Notify
//End dsregion Notify
}
//End Region States
//Region Sync
uint8_t ANDUA651BLEImpl_States_Sync_State_event_consumed = 0;
//End Region Sync
//Region Notify
uint8_t ANDUA651BLEImpl_States_Notify_State_event_consumed = 0;
if (_instance->ANDUA651BLEImpl_States_Notify_State == ANDUA651BLEIMPL_STATES_NOTIFY_CONNECTINGNOTIFIER_STATE) {
if (ANDUA651BLEImpl_States_Notify_State_event_consumed == 0 && 1) {
ANDUA651BLEImpl_States_OnExit(ANDUA651BLEIMPL_STATES_NOTIFY_CONNECTINGNOTIFIER_STATE, _instance);
_instance->ANDUA651BLEImpl_States_Notify_State = ANDUA651BLEIMPL_STATES_NOTIFY_CONNECTEDNOTIFIER_STATE;
ANDUA651BLEImpl_States_OnEntry(ANDUA651BLEIMPL_STATES_NOTIFY_CONNECTEDNOTIFIER_STATE, _instance);
ANDUA651BLEImpl_States_Notify_State_event_consumed = 1;
}
}
//End Region Notify
//End dsregion States
//Session list: 
}
void ANDUA651BLEImpl_handle_Notifications_NotifierFinished(struct ANDUA651BLEImpl_Instance *_instance) {
if(!(_instance->active)) return;
//Region States
uint8_t ANDUA651BLEImpl_States_State_event_consumed = 0;
if (_instance->ANDUA651BLEImpl_States_State == ANDUA651BLEIMPL_STATES_NOTIFY_STATE) {
//Region Notify
uint8_t ANDUA651BLEImpl_States_Notify_State_event_consumed = 0;
if (_instance->ANDUA651BLEImpl_States_Notify_State == ANDUA651BLEIMPL_STATES_NOTIFY_CONNECTEDNOTIFIER_STATE) {
if (ANDUA651BLEImpl_States_Notify_State_event_consumed == 0 && (_instance->ANDUA651BLEImpl_GotStored_var == 1 || _instance->ANDUA651BLEImpl_GotRequest_var == 1)) {
ANDUA651BLEImpl_States_OnExit(ANDUA651BLEIMPL_STATES_NOTIFY_CONNECTEDNOTIFIER_STATE, _instance);
_instance->ANDUA651BLEImpl_States_Notify_State = ANDUA651BLEIMPL_STATES_NOTIFY_CONNECTINGNOTIFIER_STATE;
ANDUA651BLEImpl_States_OnEntry(ANDUA651BLEIMPL_STATES_NOTIFY_CONNECTINGNOTIFIER_STATE, _instance);
ANDUA651BLEImpl_States_Notify_State_event_consumed = 1;
}
}
//End Region Notify
//End dsregion Notify
if (ANDUA651BLEImpl_States_State_event_consumed == 0 && 1) {
ANDUA651BLEImpl_States_OnExit(ANDUA651BLEIMPL_STATES_NOTIFY_STATE, _instance);
_instance->ANDUA651BLEImpl_States_State = ANDUA651BLEIMPL_STATES_STANDBY_STATE;
ANDUA651BLEImpl_send_ANDUA651BLE_FinishedConnection(_instance);
ANDUA651BLEImpl_States_OnEntry(ANDUA651BLEIMPL_STATES_STANDBY_STATE, _instance);
ANDUA651BLEImpl_States_State_event_consumed = 1;
}
}
//End Region States
//Region Sync
uint8_t ANDUA651BLEImpl_States_Sync_State_event_consumed = 0;
//End Region Sync
//Region Notify
uint8_t ANDUA651BLEImpl_States_Notify_State_event_consumed = 0;
if (_instance->ANDUA651BLEImpl_States_Notify_State == ANDUA651BLEIMPL_STATES_NOTIFY_CONNECTEDNOTIFIER_STATE) {
if (ANDUA651BLEImpl_States_Notify_State_event_consumed == 0 && (_instance->ANDUA651BLEImpl_GotStored_var == 1 || _instance->ANDUA651BLEImpl_GotRequest_var == 1)) {
ANDUA651BLEImpl_States_OnExit(ANDUA651BLEIMPL_STATES_NOTIFY_CONNECTEDNOTIFIER_STATE, _instance);
_instance->ANDUA651BLEImpl_States_Notify_State = ANDUA651BLEIMPL_STATES_NOTIFY_CONNECTINGNOTIFIER_STATE;
ANDUA651BLEImpl_States_OnEntry(ANDUA651BLEIMPL_STATES_NOTIFY_CONNECTINGNOTIFIER_STATE, _instance);
ANDUA651BLEImpl_States_Notify_State_event_consumed = 1;
}
}
//End Region Notify
//End dsregion States
//Session list: 
}
void ANDUA651BLEImpl_handle_Tellu_MqttRequestBloodPressureMeasurement(struct ANDUA651BLEImpl_Instance *_instance) {
if(!(_instance->active)) return;
//Region States
uint8_t ANDUA651BLEImpl_States_State_event_consumed = 0;
if (_instance->ANDUA651BLEImpl_States_State == ANDUA651BLEIMPL_STATES_STANDBY_STATE) {
if (ANDUA651BLEImpl_States_State_event_consumed == 0 && 1) {
_instance->ANDUA651BLEImpl_GotRequest_var = 1;
ANDUA651BLEImpl_send_ANDUA651BLE_WantsToConnect(_instance);
ANDUA651BLEImpl_States_State_event_consumed = 1;
}
}
//End Region States
//Region Sync
uint8_t ANDUA651BLEImpl_States_Sync_State_event_consumed = 0;
//End Region Sync
//Region Notify
uint8_t ANDUA651BLEImpl_States_Notify_State_event_consumed = 0;
//End Region Notify
//End dsregion States
//Session list: 
if (1) {
_instance->ANDUA651BLEImpl_GotRequest_var = 1;
ANDUA651BLEImpl_States_State_event_consumed = 1;
}
}
void ANDUA651BLEImpl_handle_Tellu_MqttConfirmBloodPressureMeasurement(struct ANDUA651BLEImpl_Instance *_instance) {
if(!(_instance->active)) return;
//Region States
uint8_t ANDUA651BLEImpl_States_State_event_consumed = 0;
if (_instance->ANDUA651BLEImpl_States_State == ANDUA651BLEIMPL_STATES_STANDBY_STATE) {
if (ANDUA651BLEImpl_States_State_event_consumed == 0 && 1) {
_instance->ANDUA651BLEImpl_GotStored_var = 1;
ANDUA651BLEImpl_send_ANDUA651BLE_WantsToConnect(_instance);
ANDUA651BLEImpl_States_State_event_consumed = 1;
}
}
//End Region States
//Region Sync
uint8_t ANDUA651BLEImpl_States_Sync_State_event_consumed = 0;
//End Region Sync
//Region Notify
uint8_t ANDUA651BLEImpl_States_Notify_State_event_consumed = 0;
//End Region Notify
//End dsregion States
//Session list: 
if (1) {
_instance->ANDUA651BLEImpl_GotStored_var = 1;
ANDUA651BLEImpl_States_State_event_consumed = 1;
}
}
void ANDUA651BLEImpl_handle_ATT_ATTWriteError(struct ANDUA651BLEImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error) {
if(!(_instance->active)) return;
//Region States
uint8_t ANDUA651BLEImpl_States_State_event_consumed = 0;
if (_instance->ANDUA651BLEImpl_States_State == ANDUA651BLEIMPL_STATES_SYNC_STATE) {
//Region Sync
uint8_t ANDUA651BLEImpl_States_Sync_State_event_consumed = 0;
if (_instance->ANDUA651BLEImpl_States_Sync_State == ANDUA651BLEIMPL_STATES_SYNC_TIMESYNC_STATE) {
if (ANDUA651BLEImpl_States_Sync_State_event_consumed == 0 && 1) {
fprintf(stdout, "[ERROR]: Time synchronization failed. Error code: ");
printf("%2.2X", Error);
fprintf(stdout, "!!\n");
ANDUA651BLEImpl_send_Connecter_Stop(_instance);
ANDUA651BLEImpl_States_Sync_State_event_consumed = 1;
}
}
else if (_instance->ANDUA651BLEImpl_States_Sync_State == ANDUA651BLEIMPL_STATES_SYNC_GETVALUES_STATE) {
if (ANDUA651BLEImpl_States_Sync_State_event_consumed == 0 && (ConnectionHandle == _instance->ANDUA651BLEImpl_ConnectedHandle_var)) {
fprintf(stdout, "[ERROR]: Could not set indications of Blood Pressure Measurement!\n");
ANDUA651BLEImpl_send_Connecter_Stop(_instance);
ANDUA651BLEImpl_States_Sync_State_event_consumed = 1;
}
}
//End Region Sync
//End dsregion Sync
}
//End Region States
//Region Sync
uint8_t ANDUA651BLEImpl_States_Sync_State_event_consumed = 0;
if (_instance->ANDUA651BLEImpl_States_Sync_State == ANDUA651BLEIMPL_STATES_SYNC_TIMESYNC_STATE) {
if (ANDUA651BLEImpl_States_Sync_State_event_consumed == 0 && 1) {
fprintf(stdout, "[ERROR]: Time synchronization failed. Error code: ");
printf("%2.2X", Error);
fprintf(stdout, "!!\n");
ANDUA651BLEImpl_send_Connecter_Stop(_instance);
ANDUA651BLEImpl_States_Sync_State_event_consumed = 1;
}
}
else if (_instance->ANDUA651BLEImpl_States_Sync_State == ANDUA651BLEIMPL_STATES_SYNC_GETVALUES_STATE) {
if (ANDUA651BLEImpl_States_Sync_State_event_consumed == 0 && (ConnectionHandle == _instance->ANDUA651BLEImpl_ConnectedHandle_var)) {
fprintf(stdout, "[ERROR]: Could not set indications of Blood Pressure Measurement!\n");
ANDUA651BLEImpl_send_Connecter_Stop(_instance);
ANDUA651BLEImpl_States_Sync_State_event_consumed = 1;
}
}
//End Region Sync
//Region Notify
uint8_t ANDUA651BLEImpl_States_Notify_State_event_consumed = 0;
//End Region Notify
//End dsregion States
//Session list: 
}
void ANDUA651BLEImpl_handle_ATT_ATTWriteResponse(struct ANDUA651BLEImpl_Instance *_instance, uint16_t ConnectionHandle) {
if(!(_instance->active)) return;
//Region States
uint8_t ANDUA651BLEImpl_States_State_event_consumed = 0;
if (_instance->ANDUA651BLEImpl_States_State == ANDUA651BLEIMPL_STATES_SYNC_STATE) {
//Region Sync
uint8_t ANDUA651BLEImpl_States_Sync_State_event_consumed = 0;
if (_instance->ANDUA651BLEImpl_States_Sync_State == ANDUA651BLEIMPL_STATES_SYNC_TIMESYNC_STATE) {
if (ANDUA651BLEImpl_States_Sync_State_event_consumed == 0 && 1) {
ANDUA651BLEImpl_States_OnExit(ANDUA651BLEIMPL_STATES_SYNC_TIMESYNC_STATE, _instance);
_instance->ANDUA651BLEImpl_States_Sync_State = ANDUA651BLEIMPL_STATES_SYNC_GETVALUES_STATE;
fprintf(stdout, "[INFO]: Time synchronization successfull!\n");
ANDUA651BLEImpl_States_OnEntry(ANDUA651BLEIMPL_STATES_SYNC_GETVALUES_STATE, _instance);
ANDUA651BLEImpl_States_Sync_State_event_consumed = 1;
}
}
//End Region Sync
//End dsregion Sync
}
//End Region States
//Region Sync
uint8_t ANDUA651BLEImpl_States_Sync_State_event_consumed = 0;
if (_instance->ANDUA651BLEImpl_States_Sync_State == ANDUA651BLEIMPL_STATES_SYNC_TIMESYNC_STATE) {
if (ANDUA651BLEImpl_States_Sync_State_event_consumed == 0 && 1) {
ANDUA651BLEImpl_States_OnExit(ANDUA651BLEIMPL_STATES_SYNC_TIMESYNC_STATE, _instance);
_instance->ANDUA651BLEImpl_States_Sync_State = ANDUA651BLEIMPL_STATES_SYNC_GETVALUES_STATE;
fprintf(stdout, "[INFO]: Time synchronization successfull!\n");
ANDUA651BLEImpl_States_OnEntry(ANDUA651BLEIMPL_STATES_SYNC_GETVALUES_STATE, _instance);
ANDUA651BLEImpl_States_Sync_State_event_consumed = 1;
}
}
//End Region Sync
//Region Notify
uint8_t ANDUA651BLEImpl_States_Notify_State_event_consumed = 0;
//End Region Notify
//End dsregion States
//Session list: 
}
void ANDUA651BLEImpl_handle_ATT_ATTReadResponse(struct ANDUA651BLEImpl_Instance *_instance, uint16_t ConnectionHandle, ble_gatt_data_t AttributeValue) {
if(!(_instance->active)) return;
//Region States
uint8_t ANDUA651BLEImpl_States_State_event_consumed = 0;
if (_instance->ANDUA651BLEImpl_States_State == ANDUA651BLEIMPL_STATES_SYNC_STATE) {
//Region Sync
uint8_t ANDUA651BLEImpl_States_Sync_State_event_consumed = 0;
if (_instance->ANDUA651BLEImpl_States_Sync_State == ANDUA651BLEIMPL_STATES_SYNC_READBATTERY_STATE) {
if (ANDUA651BLEImpl_States_Sync_State_event_consumed == 0 && (ConnectionHandle == _instance->ANDUA651BLEImpl_ConnectedHandle_var)) {
ANDUA651BLEImpl_States_OnExit(ANDUA651BLEIMPL_STATES_SYNC_READBATTERY_STATE, _instance);
_instance->ANDUA651BLEImpl_States_Sync_State = ANDUA651BLEIMPL_STATES_SYNC_TIMESYNC_STATE;
;uint8_t Percent = AttributeValue.bytes[0];
printf("[INFO]: Got battery percentage - %u%%\n", Percent);
ANDUA651BLEImpl_States_OnEntry(ANDUA651BLEIMPL_STATES_SYNC_TIMESYNC_STATE, _instance);
ANDUA651BLEImpl_States_Sync_State_event_consumed = 1;
}
}
//End Region Sync
//End dsregion Sync
}
//End Region States
//Region Sync
uint8_t ANDUA651BLEImpl_States_Sync_State_event_consumed = 0;
if (_instance->ANDUA651BLEImpl_States_Sync_State == ANDUA651BLEIMPL_STATES_SYNC_READBATTERY_STATE) {
if (ANDUA651BLEImpl_States_Sync_State_event_consumed == 0 && (ConnectionHandle == _instance->ANDUA651BLEImpl_ConnectedHandle_var)) {
ANDUA651BLEImpl_States_OnExit(ANDUA651BLEIMPL_STATES_SYNC_READBATTERY_STATE, _instance);
_instance->ANDUA651BLEImpl_States_Sync_State = ANDUA651BLEIMPL_STATES_SYNC_TIMESYNC_STATE;
;uint8_t Percent = AttributeValue.bytes[0];
printf("[INFO]: Got battery percentage - %u%%\n", Percent);
ANDUA651BLEImpl_States_OnEntry(ANDUA651BLEIMPL_STATES_SYNC_TIMESYNC_STATE, _instance);
ANDUA651BLEImpl_States_Sync_State_event_consumed = 1;
}
}
//End Region Sync
//Region Notify
uint8_t ANDUA651BLEImpl_States_Notify_State_event_consumed = 0;
//End Region Notify
//End dsregion States
//Session list: 
}
void ANDUA651BLEImpl_handle_ATT_ATTHandleValueIndication(struct ANDUA651BLEImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, ble_gatt_data_t AttributeValue) {
if(!(_instance->active)) return;
//Region States
uint8_t ANDUA651BLEImpl_States_State_event_consumed = 0;
if (_instance->ANDUA651BLEImpl_States_State == ANDUA651BLEIMPL_STATES_SYNC_STATE) {
//Region Sync
uint8_t ANDUA651BLEImpl_States_Sync_State_event_consumed = 0;
if (_instance->ANDUA651BLEImpl_States_Sync_State == ANDUA651BLEIMPL_STATES_SYNC_GETVALUES_STATE) {
if (ANDUA651BLEImpl_States_Sync_State_event_consumed == 0 && (ConnectionHandle == _instance->ANDUA651BLEImpl_ConnectedHandle_var && AttributeHandle == _instance->ANDUA651BLEImpl_BloodPressureValueHandle_var)) {

            uint8_t length = AttributeValue.length;
            uint8_t *data  = AttributeValue.bytes;
            uint8_t index = 7;
          
;uint8_t UnitsKPA = data[0] & 0x01;
;uint8_t HasTimestamp = (data[0] & 0x02) >> 1;
;uint8_t HasPulseRate = (data[0] & 0x04) >> 2;
;uint8_t HasUserID = (data[0] & 0x08) >> 3;
;uint8_t HasMeasurementStatus = (data[0] & 0x10) >> 4;
;float Systolic = sfloat_to_float(&data[1]);
;float Diastolic = sfloat_to_float(&data[3]);
;float MeanArterial = sfloat_to_float(&data[5]);
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
;float Pulse = 0;
if(HasPulseRate) {
Pulse = sfloat_to_float(&data[index]);
index = index+2;

}
;uint8_t UserID = 0;
if(HasUserID) {
UserID = data[index];
index = index+1;

}
;uint8_t BodyMovement = 0;
;uint8_t CuffFit = 0;
;uint8_t IrregularPulse = 0;
;uint8_t PulseRate = 0;
;uint8_t MeasurementPosition = 0;
if(HasMeasurementStatus) {
BodyMovement = data[index] & 0x01;
CuffFit = (data[index] & 0x02) >> 1;
IrregularPulse = (data[index] & 0x04) >> 2;
PulseRate = (data[index] & 0x18) >> 3;
MeasurementPosition = (data[index] & 0x20) >> 5;

}
fprintf(stdout, "[INFO]: Got Blood Pressure measurement - ");
printf("%.0f/%.0f (%.0f) ",Systolic, Diastolic, MeanArterial);
if(UnitsKPA) {
fprintf(stdout, "kPa ");

} else {
fprintf(stdout, "mmHg ");

}
if(HasPulseRate) {
printf("%.0fBPM ",Pulse);

}
if(HasTimestamp) {
printf("%u.%u.%u %u:%u:%u ",Day, Month, Year, Hour, Minute, Second);

}
if(HasMeasurementStatus) {
fprintf(stdout, "- ");
if(IrregularPulse) {
fprintf(stdout, "Irregular pulse detected ");

} else {
fprintf(stdout, "Normal pulse detected ");

}

}
fprintf(stdout, "\n");
ANDUA651BLEImpl_send_ATT_ATTHandleValueConfirmation(_instance, ConnectionHandle);
if(HasTimestamp && !isnan(Systolic)) {
;time_t ObservationTime = 0;

              struct tm timebuf;
              timebuf.tm_year = Year-1900;
              timebuf.tm_mon = Month-1;
              timebuf.tm_mday = Day;
              timebuf.tm_hour = Hour;
              timebuf.tm_min = Minute;
              timebuf.tm_sec = Second;
            
ObservationTime = timegm(&timebuf);
;int16_t HealthPressureDiastolic = Diastolic;
;int16_t HealthPressureMean = MeanArterial;
;int16_t HealthPressureSystolic = Systolic;
;int16_t HealthPulseRate = Pulse;
ANDUA651BLEImpl_send_Tellu_TelluCloudBloodPressure(_instance, ObservationTime, HealthPressureDiastolic, HealthPressureMean, HealthPressureSystolic, HealthPulseRate);
_instance->ANDUA651BLEImpl_GotMeasurement_var = 1;

}
ANDUA651BLEImpl_States_Sync_State_event_consumed = 1;
}
}
//End Region Sync
//End dsregion Sync
}
//End Region States
//Region Sync
uint8_t ANDUA651BLEImpl_States_Sync_State_event_consumed = 0;
if (_instance->ANDUA651BLEImpl_States_Sync_State == ANDUA651BLEIMPL_STATES_SYNC_GETVALUES_STATE) {
if (ANDUA651BLEImpl_States_Sync_State_event_consumed == 0 && (ConnectionHandle == _instance->ANDUA651BLEImpl_ConnectedHandle_var && AttributeHandle == _instance->ANDUA651BLEImpl_BloodPressureValueHandle_var)) {

            uint8_t length = AttributeValue.length;
            uint8_t *data  = AttributeValue.bytes;
            uint8_t index = 7;
          
;uint8_t UnitsKPA = data[0] & 0x01;
;uint8_t HasTimestamp = (data[0] & 0x02) >> 1;
;uint8_t HasPulseRate = (data[0] & 0x04) >> 2;
;uint8_t HasUserID = (data[0] & 0x08) >> 3;
;uint8_t HasMeasurementStatus = (data[0] & 0x10) >> 4;
;float Systolic = sfloat_to_float(&data[1]);
;float Diastolic = sfloat_to_float(&data[3]);
;float MeanArterial = sfloat_to_float(&data[5]);
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
;float Pulse = 0;
if(HasPulseRate) {
Pulse = sfloat_to_float(&data[index]);
index = index+2;

}
;uint8_t UserID = 0;
if(HasUserID) {
UserID = data[index];
index = index+1;

}
;uint8_t BodyMovement = 0;
;uint8_t CuffFit = 0;
;uint8_t IrregularPulse = 0;
;uint8_t PulseRate = 0;
;uint8_t MeasurementPosition = 0;
if(HasMeasurementStatus) {
BodyMovement = data[index] & 0x01;
CuffFit = (data[index] & 0x02) >> 1;
IrregularPulse = (data[index] & 0x04) >> 2;
PulseRate = (data[index] & 0x18) >> 3;
MeasurementPosition = (data[index] & 0x20) >> 5;

}
fprintf(stdout, "[INFO]: Got Blood Pressure measurement - ");
printf("%.0f/%.0f (%.0f) ",Systolic, Diastolic, MeanArterial);
if(UnitsKPA) {
fprintf(stdout, "kPa ");

} else {
fprintf(stdout, "mmHg ");

}
if(HasPulseRate) {
printf("%.0fBPM ",Pulse);

}
if(HasTimestamp) {
printf("%u.%u.%u %u:%u:%u ",Day, Month, Year, Hour, Minute, Second);

}
if(HasMeasurementStatus) {
fprintf(stdout, "- ");
if(IrregularPulse) {
fprintf(stdout, "Irregular pulse detected ");

} else {
fprintf(stdout, "Normal pulse detected ");

}

}
fprintf(stdout, "\n");
ANDUA651BLEImpl_send_ATT_ATTHandleValueConfirmation(_instance, ConnectionHandle);
if(HasTimestamp && !isnan(Systolic)) {
;time_t ObservationTime = 0;

              struct tm timebuf;
              timebuf.tm_year = Year-1900;
              timebuf.tm_mon = Month-1;
              timebuf.tm_mday = Day;
              timebuf.tm_hour = Hour;
              timebuf.tm_min = Minute;
              timebuf.tm_sec = Second;
            
ObservationTime = timegm(&timebuf);
;int16_t HealthPressureDiastolic = Diastolic;
;int16_t HealthPressureMean = MeanArterial;
;int16_t HealthPressureSystolic = Systolic;
;int16_t HealthPulseRate = Pulse;
ANDUA651BLEImpl_send_Tellu_TelluCloudBloodPressure(_instance, ObservationTime, HealthPressureDiastolic, HealthPressureMean, HealthPressureSystolic, HealthPulseRate);
_instance->ANDUA651BLEImpl_GotMeasurement_var = 1;

}
ANDUA651BLEImpl_States_Sync_State_event_consumed = 1;
}
}
//End Region Sync
//Region Notify
uint8_t ANDUA651BLEImpl_States_Notify_State_event_consumed = 0;
//End Region Notify
//End dsregion States
//Session list: 
}
void ANDUA651BLEImpl_handle_ATT_ATTReadError(struct ANDUA651BLEImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error) {
if(!(_instance->active)) return;
//Region States
uint8_t ANDUA651BLEImpl_States_State_event_consumed = 0;
if (_instance->ANDUA651BLEImpl_States_State == ANDUA651BLEIMPL_STATES_SYNC_STATE) {
//Region Sync
uint8_t ANDUA651BLEImpl_States_Sync_State_event_consumed = 0;
if (_instance->ANDUA651BLEImpl_States_Sync_State == ANDUA651BLEIMPL_STATES_SYNC_READBATTERY_STATE) {
if (ANDUA651BLEImpl_States_Sync_State_event_consumed == 0 && (ConnectionHandle == _instance->ANDUA651BLEImpl_ConnectedHandle_var)) {
fprintf(stdout, "[ERROR]: Could not read battery percentage!\n");
ANDUA651BLEImpl_send_Connecter_Stop(_instance);
ANDUA651BLEImpl_States_Sync_State_event_consumed = 1;
}
}
//End Region Sync
//End dsregion Sync
}
//End Region States
//Region Sync
uint8_t ANDUA651BLEImpl_States_Sync_State_event_consumed = 0;
if (_instance->ANDUA651BLEImpl_States_Sync_State == ANDUA651BLEIMPL_STATES_SYNC_READBATTERY_STATE) {
if (ANDUA651BLEImpl_States_Sync_State_event_consumed == 0 && (ConnectionHandle == _instance->ANDUA651BLEImpl_ConnectedHandle_var)) {
fprintf(stdout, "[ERROR]: Could not read battery percentage!\n");
ANDUA651BLEImpl_send_Connecter_Stop(_instance);
ANDUA651BLEImpl_States_Sync_State_event_consumed = 1;
}
}
//End Region Sync
//Region Notify
uint8_t ANDUA651BLEImpl_States_Notify_State_event_consumed = 0;
//End Region Notify
//End dsregion States
//Session list: 
}

// Observers for outgoing messages:
void (*external_ANDUA651BLEImpl_send_ANDUA651BLE_WantsToConnect_listener)(struct ANDUA651BLEImpl_Instance *)= 0x0;
void (*ANDUA651BLEImpl_send_ANDUA651BLE_WantsToConnect_listener)(struct ANDUA651BLEImpl_Instance *)= 0x0;
void register_external_ANDUA651BLEImpl_send_ANDUA651BLE_WantsToConnect_listener(void (*_listener)(struct ANDUA651BLEImpl_Instance *)){
external_ANDUA651BLEImpl_send_ANDUA651BLE_WantsToConnect_listener = _listener;
}
void register_ANDUA651BLEImpl_send_ANDUA651BLE_WantsToConnect_listener(void (*_listener)(struct ANDUA651BLEImpl_Instance *)){
ANDUA651BLEImpl_send_ANDUA651BLE_WantsToConnect_listener = _listener;
}
void ANDUA651BLEImpl_send_ANDUA651BLE_WantsToConnect(struct ANDUA651BLEImpl_Instance *_instance){
if (ANDUA651BLEImpl_send_ANDUA651BLE_WantsToConnect_listener != 0x0) ANDUA651BLEImpl_send_ANDUA651BLE_WantsToConnect_listener(_instance);
if (external_ANDUA651BLEImpl_send_ANDUA651BLE_WantsToConnect_listener != 0x0) external_ANDUA651BLEImpl_send_ANDUA651BLE_WantsToConnect_listener(_instance);
;
}
void (*external_ANDUA651BLEImpl_send_ANDUA651BLE_FinishedConnection_listener)(struct ANDUA651BLEImpl_Instance *)= 0x0;
void (*ANDUA651BLEImpl_send_ANDUA651BLE_FinishedConnection_listener)(struct ANDUA651BLEImpl_Instance *)= 0x0;
void register_external_ANDUA651BLEImpl_send_ANDUA651BLE_FinishedConnection_listener(void (*_listener)(struct ANDUA651BLEImpl_Instance *)){
external_ANDUA651BLEImpl_send_ANDUA651BLE_FinishedConnection_listener = _listener;
}
void register_ANDUA651BLEImpl_send_ANDUA651BLE_FinishedConnection_listener(void (*_listener)(struct ANDUA651BLEImpl_Instance *)){
ANDUA651BLEImpl_send_ANDUA651BLE_FinishedConnection_listener = _listener;
}
void ANDUA651BLEImpl_send_ANDUA651BLE_FinishedConnection(struct ANDUA651BLEImpl_Instance *_instance){
if (ANDUA651BLEImpl_send_ANDUA651BLE_FinishedConnection_listener != 0x0) ANDUA651BLEImpl_send_ANDUA651BLE_FinishedConnection_listener(_instance);
if (external_ANDUA651BLEImpl_send_ANDUA651BLE_FinishedConnection_listener != 0x0) external_ANDUA651BLEImpl_send_ANDUA651BLE_FinishedConnection_listener(_instance);
;
}
void (*external_ANDUA651BLEImpl_send_Tellu_TelluCloudBloodPressure_listener)(struct ANDUA651BLEImpl_Instance *, time_t, int16_t, int16_t, int16_t, int16_t)= 0x0;
void (*ANDUA651BLEImpl_send_Tellu_TelluCloudBloodPressure_listener)(struct ANDUA651BLEImpl_Instance *, time_t, int16_t, int16_t, int16_t, int16_t)= 0x0;
void register_external_ANDUA651BLEImpl_send_Tellu_TelluCloudBloodPressure_listener(void (*_listener)(struct ANDUA651BLEImpl_Instance *, time_t, int16_t, int16_t, int16_t, int16_t)){
external_ANDUA651BLEImpl_send_Tellu_TelluCloudBloodPressure_listener = _listener;
}
void register_ANDUA651BLEImpl_send_Tellu_TelluCloudBloodPressure_listener(void (*_listener)(struct ANDUA651BLEImpl_Instance *, time_t, int16_t, int16_t, int16_t, int16_t)){
ANDUA651BLEImpl_send_Tellu_TelluCloudBloodPressure_listener = _listener;
}
void ANDUA651BLEImpl_send_Tellu_TelluCloudBloodPressure(struct ANDUA651BLEImpl_Instance *_instance, time_t observationTime, int16_t health_pressure_diastolic, int16_t health_pressure_mean, int16_t health_pressure_systolic, int16_t health_pulseRate){
if (ANDUA651BLEImpl_send_Tellu_TelluCloudBloodPressure_listener != 0x0) ANDUA651BLEImpl_send_Tellu_TelluCloudBloodPressure_listener(_instance, observationTime, health_pressure_diastolic, health_pressure_mean, health_pressure_systolic, health_pulseRate);
if (external_ANDUA651BLEImpl_send_Tellu_TelluCloudBloodPressure_listener != 0x0) external_ANDUA651BLEImpl_send_Tellu_TelluCloudBloodPressure_listener(_instance, observationTime, health_pressure_diastolic, health_pressure_mean, health_pressure_systolic, health_pulseRate);
;
}
void (*external_ANDUA651BLEImpl_send_Scanner_Start_listener)(struct ANDUA651BLEImpl_Instance *)= 0x0;
void (*ANDUA651BLEImpl_send_Scanner_Start_listener)(struct ANDUA651BLEImpl_Instance *)= 0x0;
void register_external_ANDUA651BLEImpl_send_Scanner_Start_listener(void (*_listener)(struct ANDUA651BLEImpl_Instance *)){
external_ANDUA651BLEImpl_send_Scanner_Start_listener = _listener;
}
void register_ANDUA651BLEImpl_send_Scanner_Start_listener(void (*_listener)(struct ANDUA651BLEImpl_Instance *)){
ANDUA651BLEImpl_send_Scanner_Start_listener = _listener;
}
void ANDUA651BLEImpl_send_Scanner_Start(struct ANDUA651BLEImpl_Instance *_instance){
if (ANDUA651BLEImpl_send_Scanner_Start_listener != 0x0) ANDUA651BLEImpl_send_Scanner_Start_listener(_instance);
if (external_ANDUA651BLEImpl_send_Scanner_Start_listener != 0x0) external_ANDUA651BLEImpl_send_Scanner_Start_listener(_instance);
;
}
void (*external_ANDUA651BLEImpl_send_Scanner_Stop_listener)(struct ANDUA651BLEImpl_Instance *)= 0x0;
void (*ANDUA651BLEImpl_send_Scanner_Stop_listener)(struct ANDUA651BLEImpl_Instance *)= 0x0;
void register_external_ANDUA651BLEImpl_send_Scanner_Stop_listener(void (*_listener)(struct ANDUA651BLEImpl_Instance *)){
external_ANDUA651BLEImpl_send_Scanner_Stop_listener = _listener;
}
void register_ANDUA651BLEImpl_send_Scanner_Stop_listener(void (*_listener)(struct ANDUA651BLEImpl_Instance *)){
ANDUA651BLEImpl_send_Scanner_Stop_listener = _listener;
}
void ANDUA651BLEImpl_send_Scanner_Stop(struct ANDUA651BLEImpl_Instance *_instance){
if (ANDUA651BLEImpl_send_Scanner_Stop_listener != 0x0) ANDUA651BLEImpl_send_Scanner_Stop_listener(_instance);
if (external_ANDUA651BLEImpl_send_Scanner_Stop_listener != 0x0) external_ANDUA651BLEImpl_send_Scanner_Stop_listener(_instance);
;
}
void (*external_ANDUA651BLEImpl_send_Connecter_Connect_listener)(struct ANDUA651BLEImpl_Instance *)= 0x0;
void (*ANDUA651BLEImpl_send_Connecter_Connect_listener)(struct ANDUA651BLEImpl_Instance *)= 0x0;
void register_external_ANDUA651BLEImpl_send_Connecter_Connect_listener(void (*_listener)(struct ANDUA651BLEImpl_Instance *)){
external_ANDUA651BLEImpl_send_Connecter_Connect_listener = _listener;
}
void register_ANDUA651BLEImpl_send_Connecter_Connect_listener(void (*_listener)(struct ANDUA651BLEImpl_Instance *)){
ANDUA651BLEImpl_send_Connecter_Connect_listener = _listener;
}
void ANDUA651BLEImpl_send_Connecter_Connect(struct ANDUA651BLEImpl_Instance *_instance){
if (ANDUA651BLEImpl_send_Connecter_Connect_listener != 0x0) ANDUA651BLEImpl_send_Connecter_Connect_listener(_instance);
if (external_ANDUA651BLEImpl_send_Connecter_Connect_listener != 0x0) external_ANDUA651BLEImpl_send_Connecter_Connect_listener(_instance);
;
}
void (*external_ANDUA651BLEImpl_send_Connecter_ConnectTo_listener)(struct ANDUA651BLEImpl_Instance *, uint8_t, bdaddr_t, ble_random_number_t, uint16_t, ble_random_part_t)= 0x0;
void (*ANDUA651BLEImpl_send_Connecter_ConnectTo_listener)(struct ANDUA651BLEImpl_Instance *, uint8_t, bdaddr_t, ble_random_number_t, uint16_t, ble_random_part_t)= 0x0;
void register_external_ANDUA651BLEImpl_send_Connecter_ConnectTo_listener(void (*_listener)(struct ANDUA651BLEImpl_Instance *, uint8_t, bdaddr_t, ble_random_number_t, uint16_t, ble_random_part_t)){
external_ANDUA651BLEImpl_send_Connecter_ConnectTo_listener = _listener;
}
void register_ANDUA651BLEImpl_send_Connecter_ConnectTo_listener(void (*_listener)(struct ANDUA651BLEImpl_Instance *, uint8_t, bdaddr_t, ble_random_number_t, uint16_t, ble_random_part_t)){
ANDUA651BLEImpl_send_Connecter_ConnectTo_listener = _listener;
}
void ANDUA651BLEImpl_send_Connecter_ConnectTo(struct ANDUA651BLEImpl_Instance *_instance, uint8_t AddressType, bdaddr_t Address, ble_random_number_t LongTermKey, uint16_t EncryptedDiversifier, ble_random_part_t RandomNumber){
if (ANDUA651BLEImpl_send_Connecter_ConnectTo_listener != 0x0) ANDUA651BLEImpl_send_Connecter_ConnectTo_listener(_instance, AddressType, Address, LongTermKey, EncryptedDiversifier, RandomNumber);
if (external_ANDUA651BLEImpl_send_Connecter_ConnectTo_listener != 0x0) external_ANDUA651BLEImpl_send_Connecter_ConnectTo_listener(_instance, AddressType, Address, LongTermKey, EncryptedDiversifier, RandomNumber);
;
}
void (*external_ANDUA651BLEImpl_send_Connecter_ConnectToU_listener)(struct ANDUA651BLEImpl_Instance *, uint8_t, bdaddr_t)= 0x0;
void (*ANDUA651BLEImpl_send_Connecter_ConnectToU_listener)(struct ANDUA651BLEImpl_Instance *, uint8_t, bdaddr_t)= 0x0;
void register_external_ANDUA651BLEImpl_send_Connecter_ConnectToU_listener(void (*_listener)(struct ANDUA651BLEImpl_Instance *, uint8_t, bdaddr_t)){
external_ANDUA651BLEImpl_send_Connecter_ConnectToU_listener = _listener;
}
void register_ANDUA651BLEImpl_send_Connecter_ConnectToU_listener(void (*_listener)(struct ANDUA651BLEImpl_Instance *, uint8_t, bdaddr_t)){
ANDUA651BLEImpl_send_Connecter_ConnectToU_listener = _listener;
}
void ANDUA651BLEImpl_send_Connecter_ConnectToU(struct ANDUA651BLEImpl_Instance *_instance, uint8_t AddressType, bdaddr_t Address){
if (ANDUA651BLEImpl_send_Connecter_ConnectToU_listener != 0x0) ANDUA651BLEImpl_send_Connecter_ConnectToU_listener(_instance, AddressType, Address);
if (external_ANDUA651BLEImpl_send_Connecter_ConnectToU_listener != 0x0) external_ANDUA651BLEImpl_send_Connecter_ConnectToU_listener(_instance, AddressType, Address);
;
}
void (*external_ANDUA651BLEImpl_send_Connecter_Stop_listener)(struct ANDUA651BLEImpl_Instance *)= 0x0;
void (*ANDUA651BLEImpl_send_Connecter_Stop_listener)(struct ANDUA651BLEImpl_Instance *)= 0x0;
void register_external_ANDUA651BLEImpl_send_Connecter_Stop_listener(void (*_listener)(struct ANDUA651BLEImpl_Instance *)){
external_ANDUA651BLEImpl_send_Connecter_Stop_listener = _listener;
}
void register_ANDUA651BLEImpl_send_Connecter_Stop_listener(void (*_listener)(struct ANDUA651BLEImpl_Instance *)){
ANDUA651BLEImpl_send_Connecter_Stop_listener = _listener;
}
void ANDUA651BLEImpl_send_Connecter_Stop(struct ANDUA651BLEImpl_Instance *_instance){
if (ANDUA651BLEImpl_send_Connecter_Stop_listener != 0x0) ANDUA651BLEImpl_send_Connecter_Stop_listener(_instance);
if (external_ANDUA651BLEImpl_send_Connecter_Stop_listener != 0x0) external_ANDUA651BLEImpl_send_Connecter_Stop_listener(_instance);
;
}
void (*external_ANDUA651BLEImpl_send_Connecter_Encrypt_listener)(struct ANDUA651BLEImpl_Instance *)= 0x0;
void (*ANDUA651BLEImpl_send_Connecter_Encrypt_listener)(struct ANDUA651BLEImpl_Instance *)= 0x0;
void register_external_ANDUA651BLEImpl_send_Connecter_Encrypt_listener(void (*_listener)(struct ANDUA651BLEImpl_Instance *)){
external_ANDUA651BLEImpl_send_Connecter_Encrypt_listener = _listener;
}
void register_ANDUA651BLEImpl_send_Connecter_Encrypt_listener(void (*_listener)(struct ANDUA651BLEImpl_Instance *)){
ANDUA651BLEImpl_send_Connecter_Encrypt_listener = _listener;
}
void ANDUA651BLEImpl_send_Connecter_Encrypt(struct ANDUA651BLEImpl_Instance *_instance){
if (ANDUA651BLEImpl_send_Connecter_Encrypt_listener != 0x0) ANDUA651BLEImpl_send_Connecter_Encrypt_listener(_instance);
if (external_ANDUA651BLEImpl_send_Connecter_Encrypt_listener != 0x0) external_ANDUA651BLEImpl_send_Connecter_Encrypt_listener(_instance);
;
}
void (*external_ANDUA651BLEImpl_send_Notifications_NotifierConnect_listener)(struct ANDUA651BLEImpl_Instance *, uint8_t, bdaddr_t)= 0x0;
void (*ANDUA651BLEImpl_send_Notifications_NotifierConnect_listener)(struct ANDUA651BLEImpl_Instance *, uint8_t, bdaddr_t)= 0x0;
void register_external_ANDUA651BLEImpl_send_Notifications_NotifierConnect_listener(void (*_listener)(struct ANDUA651BLEImpl_Instance *, uint8_t, bdaddr_t)){
external_ANDUA651BLEImpl_send_Notifications_NotifierConnect_listener = _listener;
}
void register_ANDUA651BLEImpl_send_Notifications_NotifierConnect_listener(void (*_listener)(struct ANDUA651BLEImpl_Instance *, uint8_t, bdaddr_t)){
ANDUA651BLEImpl_send_Notifications_NotifierConnect_listener = _listener;
}
void ANDUA651BLEImpl_send_Notifications_NotifierConnect(struct ANDUA651BLEImpl_Instance *_instance, uint8_t AddressType, bdaddr_t Address){
if (ANDUA651BLEImpl_send_Notifications_NotifierConnect_listener != 0x0) ANDUA651BLEImpl_send_Notifications_NotifierConnect_listener(_instance, AddressType, Address);
if (external_ANDUA651BLEImpl_send_Notifications_NotifierConnect_listener != 0x0) external_ANDUA651BLEImpl_send_Notifications_NotifierConnect_listener(_instance, AddressType, Address);
;
}
void (*external_ANDUA651BLEImpl_send_Notifications_NotifierRequest_listener)(struct ANDUA651BLEImpl_Instance *)= 0x0;
void (*ANDUA651BLEImpl_send_Notifications_NotifierRequest_listener)(struct ANDUA651BLEImpl_Instance *)= 0x0;
void register_external_ANDUA651BLEImpl_send_Notifications_NotifierRequest_listener(void (*_listener)(struct ANDUA651BLEImpl_Instance *)){
external_ANDUA651BLEImpl_send_Notifications_NotifierRequest_listener = _listener;
}
void register_ANDUA651BLEImpl_send_Notifications_NotifierRequest_listener(void (*_listener)(struct ANDUA651BLEImpl_Instance *)){
ANDUA651BLEImpl_send_Notifications_NotifierRequest_listener = _listener;
}
void ANDUA651BLEImpl_send_Notifications_NotifierRequest(struct ANDUA651BLEImpl_Instance *_instance){
if (ANDUA651BLEImpl_send_Notifications_NotifierRequest_listener != 0x0) ANDUA651BLEImpl_send_Notifications_NotifierRequest_listener(_instance);
if (external_ANDUA651BLEImpl_send_Notifications_NotifierRequest_listener != 0x0) external_ANDUA651BLEImpl_send_Notifications_NotifierRequest_listener(_instance);
;
}
void (*external_ANDUA651BLEImpl_send_Notifications_NotifierError_listener)(struct ANDUA651BLEImpl_Instance *)= 0x0;
void (*ANDUA651BLEImpl_send_Notifications_NotifierError_listener)(struct ANDUA651BLEImpl_Instance *)= 0x0;
void register_external_ANDUA651BLEImpl_send_Notifications_NotifierError_listener(void (*_listener)(struct ANDUA651BLEImpl_Instance *)){
external_ANDUA651BLEImpl_send_Notifications_NotifierError_listener = _listener;
}
void register_ANDUA651BLEImpl_send_Notifications_NotifierError_listener(void (*_listener)(struct ANDUA651BLEImpl_Instance *)){
ANDUA651BLEImpl_send_Notifications_NotifierError_listener = _listener;
}
void ANDUA651BLEImpl_send_Notifications_NotifierError(struct ANDUA651BLEImpl_Instance *_instance){
if (ANDUA651BLEImpl_send_Notifications_NotifierError_listener != 0x0) ANDUA651BLEImpl_send_Notifications_NotifierError_listener(_instance);
if (external_ANDUA651BLEImpl_send_Notifications_NotifierError_listener != 0x0) external_ANDUA651BLEImpl_send_Notifications_NotifierError_listener(_instance);
;
}
void (*external_ANDUA651BLEImpl_send_Notifications_NotifierReceived_listener)(struct ANDUA651BLEImpl_Instance *)= 0x0;
void (*ANDUA651BLEImpl_send_Notifications_NotifierReceived_listener)(struct ANDUA651BLEImpl_Instance *)= 0x0;
void register_external_ANDUA651BLEImpl_send_Notifications_NotifierReceived_listener(void (*_listener)(struct ANDUA651BLEImpl_Instance *)){
external_ANDUA651BLEImpl_send_Notifications_NotifierReceived_listener = _listener;
}
void register_ANDUA651BLEImpl_send_Notifications_NotifierReceived_listener(void (*_listener)(struct ANDUA651BLEImpl_Instance *)){
ANDUA651BLEImpl_send_Notifications_NotifierReceived_listener = _listener;
}
void ANDUA651BLEImpl_send_Notifications_NotifierReceived(struct ANDUA651BLEImpl_Instance *_instance){
if (ANDUA651BLEImpl_send_Notifications_NotifierReceived_listener != 0x0) ANDUA651BLEImpl_send_Notifications_NotifierReceived_listener(_instance);
if (external_ANDUA651BLEImpl_send_Notifications_NotifierReceived_listener != 0x0) external_ANDUA651BLEImpl_send_Notifications_NotifierReceived_listener(_instance);
;
}
void (*external_ANDUA651BLEImpl_send_Notifications_NotifierStored_listener)(struct ANDUA651BLEImpl_Instance *)= 0x0;
void (*ANDUA651BLEImpl_send_Notifications_NotifierStored_listener)(struct ANDUA651BLEImpl_Instance *)= 0x0;
void register_external_ANDUA651BLEImpl_send_Notifications_NotifierStored_listener(void (*_listener)(struct ANDUA651BLEImpl_Instance *)){
external_ANDUA651BLEImpl_send_Notifications_NotifierStored_listener = _listener;
}
void register_ANDUA651BLEImpl_send_Notifications_NotifierStored_listener(void (*_listener)(struct ANDUA651BLEImpl_Instance *)){
ANDUA651BLEImpl_send_Notifications_NotifierStored_listener = _listener;
}
void ANDUA651BLEImpl_send_Notifications_NotifierStored(struct ANDUA651BLEImpl_Instance *_instance){
if (ANDUA651BLEImpl_send_Notifications_NotifierStored_listener != 0x0) ANDUA651BLEImpl_send_Notifications_NotifierStored_listener(_instance);
if (external_ANDUA651BLEImpl_send_Notifications_NotifierStored_listener != 0x0) external_ANDUA651BLEImpl_send_Notifications_NotifierStored_listener(_instance);
;
}
void (*external_ANDUA651BLEImpl_send_ATT_ATTFindInformationRequest_listener)(struct ANDUA651BLEImpl_Instance *, uint16_t, uint16_t, uint16_t)= 0x0;
void (*ANDUA651BLEImpl_send_ATT_ATTFindInformationRequest_listener)(struct ANDUA651BLEImpl_Instance *, uint16_t, uint16_t, uint16_t)= 0x0;
void register_external_ANDUA651BLEImpl_send_ATT_ATTFindInformationRequest_listener(void (*_listener)(struct ANDUA651BLEImpl_Instance *, uint16_t, uint16_t, uint16_t)){
external_ANDUA651BLEImpl_send_ATT_ATTFindInformationRequest_listener = _listener;
}
void register_ANDUA651BLEImpl_send_ATT_ATTFindInformationRequest_listener(void (*_listener)(struct ANDUA651BLEImpl_Instance *, uint16_t, uint16_t, uint16_t)){
ANDUA651BLEImpl_send_ATT_ATTFindInformationRequest_listener = _listener;
}
void ANDUA651BLEImpl_send_ATT_ATTFindInformationRequest(struct ANDUA651BLEImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t StartingHandle, uint16_t EndingHandle){
if (ANDUA651BLEImpl_send_ATT_ATTFindInformationRequest_listener != 0x0) ANDUA651BLEImpl_send_ATT_ATTFindInformationRequest_listener(_instance, ConnectionHandle, StartingHandle, EndingHandle);
if (external_ANDUA651BLEImpl_send_ATT_ATTFindInformationRequest_listener != 0x0) external_ANDUA651BLEImpl_send_ATT_ATTFindInformationRequest_listener(_instance, ConnectionHandle, StartingHandle, EndingHandle);
;
}
void (*external_ANDUA651BLEImpl_send_ATT_ATTFindInformationResponse_listener)(struct ANDUA651BLEImpl_Instance *, uint16_t, uint8_t, ble_gatt_data_t)= 0x0;
void (*ANDUA651BLEImpl_send_ATT_ATTFindInformationResponse_listener)(struct ANDUA651BLEImpl_Instance *, uint16_t, uint8_t, ble_gatt_data_t)= 0x0;
void register_external_ANDUA651BLEImpl_send_ATT_ATTFindInformationResponse_listener(void (*_listener)(struct ANDUA651BLEImpl_Instance *, uint16_t, uint8_t, ble_gatt_data_t)){
external_ANDUA651BLEImpl_send_ATT_ATTFindInformationResponse_listener = _listener;
}
void register_ANDUA651BLEImpl_send_ATT_ATTFindInformationResponse_listener(void (*_listener)(struct ANDUA651BLEImpl_Instance *, uint16_t, uint8_t, ble_gatt_data_t)){
ANDUA651BLEImpl_send_ATT_ATTFindInformationResponse_listener = _listener;
}
void ANDUA651BLEImpl_send_ATT_ATTFindInformationResponse(struct ANDUA651BLEImpl_Instance *_instance, uint16_t ConnectionHandle, uint8_t Format, ble_gatt_data_t InformationData){
if (ANDUA651BLEImpl_send_ATT_ATTFindInformationResponse_listener != 0x0) ANDUA651BLEImpl_send_ATT_ATTFindInformationResponse_listener(_instance, ConnectionHandle, Format, InformationData);
if (external_ANDUA651BLEImpl_send_ATT_ATTFindInformationResponse_listener != 0x0) external_ANDUA651BLEImpl_send_ATT_ATTFindInformationResponse_listener(_instance, ConnectionHandle, Format, InformationData);
;
}
void (*external_ANDUA651BLEImpl_send_ATT_ATTFindInformationError_listener)(struct ANDUA651BLEImpl_Instance *, uint16_t, uint16_t, uint8_t)= 0x0;
void (*ANDUA651BLEImpl_send_ATT_ATTFindInformationError_listener)(struct ANDUA651BLEImpl_Instance *, uint16_t, uint16_t, uint8_t)= 0x0;
void register_external_ANDUA651BLEImpl_send_ATT_ATTFindInformationError_listener(void (*_listener)(struct ANDUA651BLEImpl_Instance *, uint16_t, uint16_t, uint8_t)){
external_ANDUA651BLEImpl_send_ATT_ATTFindInformationError_listener = _listener;
}
void register_ANDUA651BLEImpl_send_ATT_ATTFindInformationError_listener(void (*_listener)(struct ANDUA651BLEImpl_Instance *, uint16_t, uint16_t, uint8_t)){
ANDUA651BLEImpl_send_ATT_ATTFindInformationError_listener = _listener;
}
void ANDUA651BLEImpl_send_ATT_ATTFindInformationError(struct ANDUA651BLEImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error){
if (ANDUA651BLEImpl_send_ATT_ATTFindInformationError_listener != 0x0) ANDUA651BLEImpl_send_ATT_ATTFindInformationError_listener(_instance, ConnectionHandle, AttributeHandle, Error);
if (external_ANDUA651BLEImpl_send_ATT_ATTFindInformationError_listener != 0x0) external_ANDUA651BLEImpl_send_ATT_ATTFindInformationError_listener(_instance, ConnectionHandle, AttributeHandle, Error);
;
}
void (*external_ANDUA651BLEImpl_send_ATT_ATTReadByTypeRequest_listener)(struct ANDUA651BLEImpl_Instance *, uint16_t, uint16_t, uint16_t, ble_uuid_t)= 0x0;
void (*ANDUA651BLEImpl_send_ATT_ATTReadByTypeRequest_listener)(struct ANDUA651BLEImpl_Instance *, uint16_t, uint16_t, uint16_t, ble_uuid_t)= 0x0;
void register_external_ANDUA651BLEImpl_send_ATT_ATTReadByTypeRequest_listener(void (*_listener)(struct ANDUA651BLEImpl_Instance *, uint16_t, uint16_t, uint16_t, ble_uuid_t)){
external_ANDUA651BLEImpl_send_ATT_ATTReadByTypeRequest_listener = _listener;
}
void register_ANDUA651BLEImpl_send_ATT_ATTReadByTypeRequest_listener(void (*_listener)(struct ANDUA651BLEImpl_Instance *, uint16_t, uint16_t, uint16_t, ble_uuid_t)){
ANDUA651BLEImpl_send_ATT_ATTReadByTypeRequest_listener = _listener;
}
void ANDUA651BLEImpl_send_ATT_ATTReadByTypeRequest(struct ANDUA651BLEImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t StartingHandle, uint16_t EndingHandle, ble_uuid_t AttributeType){
if (ANDUA651BLEImpl_send_ATT_ATTReadByTypeRequest_listener != 0x0) ANDUA651BLEImpl_send_ATT_ATTReadByTypeRequest_listener(_instance, ConnectionHandle, StartingHandle, EndingHandle, AttributeType);
if (external_ANDUA651BLEImpl_send_ATT_ATTReadByTypeRequest_listener != 0x0) external_ANDUA651BLEImpl_send_ATT_ATTReadByTypeRequest_listener(_instance, ConnectionHandle, StartingHandle, EndingHandle, AttributeType);
;
}
void (*external_ANDUA651BLEImpl_send_ATT_ATTReadByTypeResponse_listener)(struct ANDUA651BLEImpl_Instance *, uint16_t, uint8_t, ble_gatt_data_t)= 0x0;
void (*ANDUA651BLEImpl_send_ATT_ATTReadByTypeResponse_listener)(struct ANDUA651BLEImpl_Instance *, uint16_t, uint8_t, ble_gatt_data_t)= 0x0;
void register_external_ANDUA651BLEImpl_send_ATT_ATTReadByTypeResponse_listener(void (*_listener)(struct ANDUA651BLEImpl_Instance *, uint16_t, uint8_t, ble_gatt_data_t)){
external_ANDUA651BLEImpl_send_ATT_ATTReadByTypeResponse_listener = _listener;
}
void register_ANDUA651BLEImpl_send_ATT_ATTReadByTypeResponse_listener(void (*_listener)(struct ANDUA651BLEImpl_Instance *, uint16_t, uint8_t, ble_gatt_data_t)){
ANDUA651BLEImpl_send_ATT_ATTReadByTypeResponse_listener = _listener;
}
void ANDUA651BLEImpl_send_ATT_ATTReadByTypeResponse(struct ANDUA651BLEImpl_Instance *_instance, uint16_t ConnectionHandle, uint8_t Length, ble_gatt_data_t AttributeDataList){
if (ANDUA651BLEImpl_send_ATT_ATTReadByTypeResponse_listener != 0x0) ANDUA651BLEImpl_send_ATT_ATTReadByTypeResponse_listener(_instance, ConnectionHandle, Length, AttributeDataList);
if (external_ANDUA651BLEImpl_send_ATT_ATTReadByTypeResponse_listener != 0x0) external_ANDUA651BLEImpl_send_ATT_ATTReadByTypeResponse_listener(_instance, ConnectionHandle, Length, AttributeDataList);
;
}
void (*external_ANDUA651BLEImpl_send_ATT_ATTReadByTypeError_listener)(struct ANDUA651BLEImpl_Instance *, uint16_t, uint16_t, uint8_t)= 0x0;
void (*ANDUA651BLEImpl_send_ATT_ATTReadByTypeError_listener)(struct ANDUA651BLEImpl_Instance *, uint16_t, uint16_t, uint8_t)= 0x0;
void register_external_ANDUA651BLEImpl_send_ATT_ATTReadByTypeError_listener(void (*_listener)(struct ANDUA651BLEImpl_Instance *, uint16_t, uint16_t, uint8_t)){
external_ANDUA651BLEImpl_send_ATT_ATTReadByTypeError_listener = _listener;
}
void register_ANDUA651BLEImpl_send_ATT_ATTReadByTypeError_listener(void (*_listener)(struct ANDUA651BLEImpl_Instance *, uint16_t, uint16_t, uint8_t)){
ANDUA651BLEImpl_send_ATT_ATTReadByTypeError_listener = _listener;
}
void ANDUA651BLEImpl_send_ATT_ATTReadByTypeError(struct ANDUA651BLEImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error){
if (ANDUA651BLEImpl_send_ATT_ATTReadByTypeError_listener != 0x0) ANDUA651BLEImpl_send_ATT_ATTReadByTypeError_listener(_instance, ConnectionHandle, AttributeHandle, Error);
if (external_ANDUA651BLEImpl_send_ATT_ATTReadByTypeError_listener != 0x0) external_ANDUA651BLEImpl_send_ATT_ATTReadByTypeError_listener(_instance, ConnectionHandle, AttributeHandle, Error);
;
}
void (*external_ANDUA651BLEImpl_send_ATT_ATTReadRequest_listener)(struct ANDUA651BLEImpl_Instance *, uint16_t, uint16_t)= 0x0;
void (*ANDUA651BLEImpl_send_ATT_ATTReadRequest_listener)(struct ANDUA651BLEImpl_Instance *, uint16_t, uint16_t)= 0x0;
void register_external_ANDUA651BLEImpl_send_ATT_ATTReadRequest_listener(void (*_listener)(struct ANDUA651BLEImpl_Instance *, uint16_t, uint16_t)){
external_ANDUA651BLEImpl_send_ATT_ATTReadRequest_listener = _listener;
}
void register_ANDUA651BLEImpl_send_ATT_ATTReadRequest_listener(void (*_listener)(struct ANDUA651BLEImpl_Instance *, uint16_t, uint16_t)){
ANDUA651BLEImpl_send_ATT_ATTReadRequest_listener = _listener;
}
void ANDUA651BLEImpl_send_ATT_ATTReadRequest(struct ANDUA651BLEImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle){
if (ANDUA651BLEImpl_send_ATT_ATTReadRequest_listener != 0x0) ANDUA651BLEImpl_send_ATT_ATTReadRequest_listener(_instance, ConnectionHandle, AttributeHandle);
if (external_ANDUA651BLEImpl_send_ATT_ATTReadRequest_listener != 0x0) external_ANDUA651BLEImpl_send_ATT_ATTReadRequest_listener(_instance, ConnectionHandle, AttributeHandle);
;
}
void (*external_ANDUA651BLEImpl_send_ATT_ATTReadResponse_listener)(struct ANDUA651BLEImpl_Instance *, uint16_t, ble_gatt_data_t)= 0x0;
void (*ANDUA651BLEImpl_send_ATT_ATTReadResponse_listener)(struct ANDUA651BLEImpl_Instance *, uint16_t, ble_gatt_data_t)= 0x0;
void register_external_ANDUA651BLEImpl_send_ATT_ATTReadResponse_listener(void (*_listener)(struct ANDUA651BLEImpl_Instance *, uint16_t, ble_gatt_data_t)){
external_ANDUA651BLEImpl_send_ATT_ATTReadResponse_listener = _listener;
}
void register_ANDUA651BLEImpl_send_ATT_ATTReadResponse_listener(void (*_listener)(struct ANDUA651BLEImpl_Instance *, uint16_t, ble_gatt_data_t)){
ANDUA651BLEImpl_send_ATT_ATTReadResponse_listener = _listener;
}
void ANDUA651BLEImpl_send_ATT_ATTReadResponse(struct ANDUA651BLEImpl_Instance *_instance, uint16_t ConnectionHandle, ble_gatt_data_t AttributeValue){
if (ANDUA651BLEImpl_send_ATT_ATTReadResponse_listener != 0x0) ANDUA651BLEImpl_send_ATT_ATTReadResponse_listener(_instance, ConnectionHandle, AttributeValue);
if (external_ANDUA651BLEImpl_send_ATT_ATTReadResponse_listener != 0x0) external_ANDUA651BLEImpl_send_ATT_ATTReadResponse_listener(_instance, ConnectionHandle, AttributeValue);
;
}
void (*external_ANDUA651BLEImpl_send_ATT_ATTReadError_listener)(struct ANDUA651BLEImpl_Instance *, uint16_t, uint16_t, uint8_t)= 0x0;
void (*ANDUA651BLEImpl_send_ATT_ATTReadError_listener)(struct ANDUA651BLEImpl_Instance *, uint16_t, uint16_t, uint8_t)= 0x0;
void register_external_ANDUA651BLEImpl_send_ATT_ATTReadError_listener(void (*_listener)(struct ANDUA651BLEImpl_Instance *, uint16_t, uint16_t, uint8_t)){
external_ANDUA651BLEImpl_send_ATT_ATTReadError_listener = _listener;
}
void register_ANDUA651BLEImpl_send_ATT_ATTReadError_listener(void (*_listener)(struct ANDUA651BLEImpl_Instance *, uint16_t, uint16_t, uint8_t)){
ANDUA651BLEImpl_send_ATT_ATTReadError_listener = _listener;
}
void ANDUA651BLEImpl_send_ATT_ATTReadError(struct ANDUA651BLEImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error){
if (ANDUA651BLEImpl_send_ATT_ATTReadError_listener != 0x0) ANDUA651BLEImpl_send_ATT_ATTReadError_listener(_instance, ConnectionHandle, AttributeHandle, Error);
if (external_ANDUA651BLEImpl_send_ATT_ATTReadError_listener != 0x0) external_ANDUA651BLEImpl_send_ATT_ATTReadError_listener(_instance, ConnectionHandle, AttributeHandle, Error);
;
}
void (*external_ANDUA651BLEImpl_send_ATT_ATTReadByGroupTypeRequest_listener)(struct ANDUA651BLEImpl_Instance *, uint16_t, uint16_t, uint16_t, ble_uuid_t)= 0x0;
void (*ANDUA651BLEImpl_send_ATT_ATTReadByGroupTypeRequest_listener)(struct ANDUA651BLEImpl_Instance *, uint16_t, uint16_t, uint16_t, ble_uuid_t)= 0x0;
void register_external_ANDUA651BLEImpl_send_ATT_ATTReadByGroupTypeRequest_listener(void (*_listener)(struct ANDUA651BLEImpl_Instance *, uint16_t, uint16_t, uint16_t, ble_uuid_t)){
external_ANDUA651BLEImpl_send_ATT_ATTReadByGroupTypeRequest_listener = _listener;
}
void register_ANDUA651BLEImpl_send_ATT_ATTReadByGroupTypeRequest_listener(void (*_listener)(struct ANDUA651BLEImpl_Instance *, uint16_t, uint16_t, uint16_t, ble_uuid_t)){
ANDUA651BLEImpl_send_ATT_ATTReadByGroupTypeRequest_listener = _listener;
}
void ANDUA651BLEImpl_send_ATT_ATTReadByGroupTypeRequest(struct ANDUA651BLEImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t StartingHandle, uint16_t EndingHandle, ble_uuid_t AttributeGroupType){
if (ANDUA651BLEImpl_send_ATT_ATTReadByGroupTypeRequest_listener != 0x0) ANDUA651BLEImpl_send_ATT_ATTReadByGroupTypeRequest_listener(_instance, ConnectionHandle, StartingHandle, EndingHandle, AttributeGroupType);
if (external_ANDUA651BLEImpl_send_ATT_ATTReadByGroupTypeRequest_listener != 0x0) external_ANDUA651BLEImpl_send_ATT_ATTReadByGroupTypeRequest_listener(_instance, ConnectionHandle, StartingHandle, EndingHandle, AttributeGroupType);
;
}
void (*external_ANDUA651BLEImpl_send_ATT_ATTReadByGroupTypeResponse_listener)(struct ANDUA651BLEImpl_Instance *, uint16_t, uint8_t, ble_gatt_data_t)= 0x0;
void (*ANDUA651BLEImpl_send_ATT_ATTReadByGroupTypeResponse_listener)(struct ANDUA651BLEImpl_Instance *, uint16_t, uint8_t, ble_gatt_data_t)= 0x0;
void register_external_ANDUA651BLEImpl_send_ATT_ATTReadByGroupTypeResponse_listener(void (*_listener)(struct ANDUA651BLEImpl_Instance *, uint16_t, uint8_t, ble_gatt_data_t)){
external_ANDUA651BLEImpl_send_ATT_ATTReadByGroupTypeResponse_listener = _listener;
}
void register_ANDUA651BLEImpl_send_ATT_ATTReadByGroupTypeResponse_listener(void (*_listener)(struct ANDUA651BLEImpl_Instance *, uint16_t, uint8_t, ble_gatt_data_t)){
ANDUA651BLEImpl_send_ATT_ATTReadByGroupTypeResponse_listener = _listener;
}
void ANDUA651BLEImpl_send_ATT_ATTReadByGroupTypeResponse(struct ANDUA651BLEImpl_Instance *_instance, uint16_t ConnectionHandle, uint8_t Length, ble_gatt_data_t AttributeDataList){
if (ANDUA651BLEImpl_send_ATT_ATTReadByGroupTypeResponse_listener != 0x0) ANDUA651BLEImpl_send_ATT_ATTReadByGroupTypeResponse_listener(_instance, ConnectionHandle, Length, AttributeDataList);
if (external_ANDUA651BLEImpl_send_ATT_ATTReadByGroupTypeResponse_listener != 0x0) external_ANDUA651BLEImpl_send_ATT_ATTReadByGroupTypeResponse_listener(_instance, ConnectionHandle, Length, AttributeDataList);
;
}
void (*external_ANDUA651BLEImpl_send_ATT_ATTReadByGroupTypeError_listener)(struct ANDUA651BLEImpl_Instance *, uint16_t, uint16_t, uint8_t)= 0x0;
void (*ANDUA651BLEImpl_send_ATT_ATTReadByGroupTypeError_listener)(struct ANDUA651BLEImpl_Instance *, uint16_t, uint16_t, uint8_t)= 0x0;
void register_external_ANDUA651BLEImpl_send_ATT_ATTReadByGroupTypeError_listener(void (*_listener)(struct ANDUA651BLEImpl_Instance *, uint16_t, uint16_t, uint8_t)){
external_ANDUA651BLEImpl_send_ATT_ATTReadByGroupTypeError_listener = _listener;
}
void register_ANDUA651BLEImpl_send_ATT_ATTReadByGroupTypeError_listener(void (*_listener)(struct ANDUA651BLEImpl_Instance *, uint16_t, uint16_t, uint8_t)){
ANDUA651BLEImpl_send_ATT_ATTReadByGroupTypeError_listener = _listener;
}
void ANDUA651BLEImpl_send_ATT_ATTReadByGroupTypeError(struct ANDUA651BLEImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error){
if (ANDUA651BLEImpl_send_ATT_ATTReadByGroupTypeError_listener != 0x0) ANDUA651BLEImpl_send_ATT_ATTReadByGroupTypeError_listener(_instance, ConnectionHandle, AttributeHandle, Error);
if (external_ANDUA651BLEImpl_send_ATT_ATTReadByGroupTypeError_listener != 0x0) external_ANDUA651BLEImpl_send_ATT_ATTReadByGroupTypeError_listener(_instance, ConnectionHandle, AttributeHandle, Error);
;
}
void (*external_ANDUA651BLEImpl_send_ATT_ATTWriteRequest_listener)(struct ANDUA651BLEImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t)= 0x0;
void (*ANDUA651BLEImpl_send_ATT_ATTWriteRequest_listener)(struct ANDUA651BLEImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t)= 0x0;
void register_external_ANDUA651BLEImpl_send_ATT_ATTWriteRequest_listener(void (*_listener)(struct ANDUA651BLEImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t)){
external_ANDUA651BLEImpl_send_ATT_ATTWriteRequest_listener = _listener;
}
void register_ANDUA651BLEImpl_send_ATT_ATTWriteRequest_listener(void (*_listener)(struct ANDUA651BLEImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t)){
ANDUA651BLEImpl_send_ATT_ATTWriteRequest_listener = _listener;
}
void ANDUA651BLEImpl_send_ATT_ATTWriteRequest(struct ANDUA651BLEImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, ble_gatt_data_t AttributeValue){
if (ANDUA651BLEImpl_send_ATT_ATTWriteRequest_listener != 0x0) ANDUA651BLEImpl_send_ATT_ATTWriteRequest_listener(_instance, ConnectionHandle, AttributeHandle, AttributeValue);
if (external_ANDUA651BLEImpl_send_ATT_ATTWriteRequest_listener != 0x0) external_ANDUA651BLEImpl_send_ATT_ATTWriteRequest_listener(_instance, ConnectionHandle, AttributeHandle, AttributeValue);
;
}
void (*external_ANDUA651BLEImpl_send_ATT_ATTWriteResponse_listener)(struct ANDUA651BLEImpl_Instance *, uint16_t)= 0x0;
void (*ANDUA651BLEImpl_send_ATT_ATTWriteResponse_listener)(struct ANDUA651BLEImpl_Instance *, uint16_t)= 0x0;
void register_external_ANDUA651BLEImpl_send_ATT_ATTWriteResponse_listener(void (*_listener)(struct ANDUA651BLEImpl_Instance *, uint16_t)){
external_ANDUA651BLEImpl_send_ATT_ATTWriteResponse_listener = _listener;
}
void register_ANDUA651BLEImpl_send_ATT_ATTWriteResponse_listener(void (*_listener)(struct ANDUA651BLEImpl_Instance *, uint16_t)){
ANDUA651BLEImpl_send_ATT_ATTWriteResponse_listener = _listener;
}
void ANDUA651BLEImpl_send_ATT_ATTWriteResponse(struct ANDUA651BLEImpl_Instance *_instance, uint16_t ConnectionHandle){
if (ANDUA651BLEImpl_send_ATT_ATTWriteResponse_listener != 0x0) ANDUA651BLEImpl_send_ATT_ATTWriteResponse_listener(_instance, ConnectionHandle);
if (external_ANDUA651BLEImpl_send_ATT_ATTWriteResponse_listener != 0x0) external_ANDUA651BLEImpl_send_ATT_ATTWriteResponse_listener(_instance, ConnectionHandle);
;
}
void (*external_ANDUA651BLEImpl_send_ATT_ATTWriteError_listener)(struct ANDUA651BLEImpl_Instance *, uint16_t, uint16_t, uint8_t)= 0x0;
void (*ANDUA651BLEImpl_send_ATT_ATTWriteError_listener)(struct ANDUA651BLEImpl_Instance *, uint16_t, uint16_t, uint8_t)= 0x0;
void register_external_ANDUA651BLEImpl_send_ATT_ATTWriteError_listener(void (*_listener)(struct ANDUA651BLEImpl_Instance *, uint16_t, uint16_t, uint8_t)){
external_ANDUA651BLEImpl_send_ATT_ATTWriteError_listener = _listener;
}
void register_ANDUA651BLEImpl_send_ATT_ATTWriteError_listener(void (*_listener)(struct ANDUA651BLEImpl_Instance *, uint16_t, uint16_t, uint8_t)){
ANDUA651BLEImpl_send_ATT_ATTWriteError_listener = _listener;
}
void ANDUA651BLEImpl_send_ATT_ATTWriteError(struct ANDUA651BLEImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error){
if (ANDUA651BLEImpl_send_ATT_ATTWriteError_listener != 0x0) ANDUA651BLEImpl_send_ATT_ATTWriteError_listener(_instance, ConnectionHandle, AttributeHandle, Error);
if (external_ANDUA651BLEImpl_send_ATT_ATTWriteError_listener != 0x0) external_ANDUA651BLEImpl_send_ATT_ATTWriteError_listener(_instance, ConnectionHandle, AttributeHandle, Error);
;
}
void (*external_ANDUA651BLEImpl_send_ATT_ATTWriteCommand_listener)(struct ANDUA651BLEImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t)= 0x0;
void (*ANDUA651BLEImpl_send_ATT_ATTWriteCommand_listener)(struct ANDUA651BLEImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t)= 0x0;
void register_external_ANDUA651BLEImpl_send_ATT_ATTWriteCommand_listener(void (*_listener)(struct ANDUA651BLEImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t)){
external_ANDUA651BLEImpl_send_ATT_ATTWriteCommand_listener = _listener;
}
void register_ANDUA651BLEImpl_send_ATT_ATTWriteCommand_listener(void (*_listener)(struct ANDUA651BLEImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t)){
ANDUA651BLEImpl_send_ATT_ATTWriteCommand_listener = _listener;
}
void ANDUA651BLEImpl_send_ATT_ATTWriteCommand(struct ANDUA651BLEImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, ble_gatt_data_t AttributeValue){
if (ANDUA651BLEImpl_send_ATT_ATTWriteCommand_listener != 0x0) ANDUA651BLEImpl_send_ATT_ATTWriteCommand_listener(_instance, ConnectionHandle, AttributeHandle, AttributeValue);
if (external_ANDUA651BLEImpl_send_ATT_ATTWriteCommand_listener != 0x0) external_ANDUA651BLEImpl_send_ATT_ATTWriteCommand_listener(_instance, ConnectionHandle, AttributeHandle, AttributeValue);
;
}
void (*external_ANDUA651BLEImpl_send_ATT_ATTHandleValueNotification_listener)(struct ANDUA651BLEImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t)= 0x0;
void (*ANDUA651BLEImpl_send_ATT_ATTHandleValueNotification_listener)(struct ANDUA651BLEImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t)= 0x0;
void register_external_ANDUA651BLEImpl_send_ATT_ATTHandleValueNotification_listener(void (*_listener)(struct ANDUA651BLEImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t)){
external_ANDUA651BLEImpl_send_ATT_ATTHandleValueNotification_listener = _listener;
}
void register_ANDUA651BLEImpl_send_ATT_ATTHandleValueNotification_listener(void (*_listener)(struct ANDUA651BLEImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t)){
ANDUA651BLEImpl_send_ATT_ATTHandleValueNotification_listener = _listener;
}
void ANDUA651BLEImpl_send_ATT_ATTHandleValueNotification(struct ANDUA651BLEImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, ble_gatt_data_t AttributeValue){
if (ANDUA651BLEImpl_send_ATT_ATTHandleValueNotification_listener != 0x0) ANDUA651BLEImpl_send_ATT_ATTHandleValueNotification_listener(_instance, ConnectionHandle, AttributeHandle, AttributeValue);
if (external_ANDUA651BLEImpl_send_ATT_ATTHandleValueNotification_listener != 0x0) external_ANDUA651BLEImpl_send_ATT_ATTHandleValueNotification_listener(_instance, ConnectionHandle, AttributeHandle, AttributeValue);
;
}
void (*external_ANDUA651BLEImpl_send_ATT_ATTHandleValueIndication_listener)(struct ANDUA651BLEImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t)= 0x0;
void (*ANDUA651BLEImpl_send_ATT_ATTHandleValueIndication_listener)(struct ANDUA651BLEImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t)= 0x0;
void register_external_ANDUA651BLEImpl_send_ATT_ATTHandleValueIndication_listener(void (*_listener)(struct ANDUA651BLEImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t)){
external_ANDUA651BLEImpl_send_ATT_ATTHandleValueIndication_listener = _listener;
}
void register_ANDUA651BLEImpl_send_ATT_ATTHandleValueIndication_listener(void (*_listener)(struct ANDUA651BLEImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t)){
ANDUA651BLEImpl_send_ATT_ATTHandleValueIndication_listener = _listener;
}
void ANDUA651BLEImpl_send_ATT_ATTHandleValueIndication(struct ANDUA651BLEImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, ble_gatt_data_t AttributeValue){
if (ANDUA651BLEImpl_send_ATT_ATTHandleValueIndication_listener != 0x0) ANDUA651BLEImpl_send_ATT_ATTHandleValueIndication_listener(_instance, ConnectionHandle, AttributeHandle, AttributeValue);
if (external_ANDUA651BLEImpl_send_ATT_ATTHandleValueIndication_listener != 0x0) external_ANDUA651BLEImpl_send_ATT_ATTHandleValueIndication_listener(_instance, ConnectionHandle, AttributeHandle, AttributeValue);
;
}
void (*external_ANDUA651BLEImpl_send_ATT_ATTHandleValueConfirmation_listener)(struct ANDUA651BLEImpl_Instance *, uint16_t)= 0x0;
void (*ANDUA651BLEImpl_send_ATT_ATTHandleValueConfirmation_listener)(struct ANDUA651BLEImpl_Instance *, uint16_t)= 0x0;
void register_external_ANDUA651BLEImpl_send_ATT_ATTHandleValueConfirmation_listener(void (*_listener)(struct ANDUA651BLEImpl_Instance *, uint16_t)){
external_ANDUA651BLEImpl_send_ATT_ATTHandleValueConfirmation_listener = _listener;
}
void register_ANDUA651BLEImpl_send_ATT_ATTHandleValueConfirmation_listener(void (*_listener)(struct ANDUA651BLEImpl_Instance *, uint16_t)){
ANDUA651BLEImpl_send_ATT_ATTHandleValueConfirmation_listener = _listener;
}
void ANDUA651BLEImpl_send_ATT_ATTHandleValueConfirmation(struct ANDUA651BLEImpl_Instance *_instance, uint16_t ConnectionHandle){
if (ANDUA651BLEImpl_send_ATT_ATTHandleValueConfirmation_listener != 0x0) ANDUA651BLEImpl_send_ATT_ATTHandleValueConfirmation_listener(_instance, ConnectionHandle);
if (external_ANDUA651BLEImpl_send_ATT_ATTHandleValueConfirmation_listener != 0x0) external_ANDUA651BLEImpl_send_ATT_ATTHandleValueConfirmation_listener(_instance, ConnectionHandle);
;
}



