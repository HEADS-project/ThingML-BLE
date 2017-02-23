/*****************************************************
 *      THIS IS A GENERATED FILE. DO NOT EDIT.
 *        Implementation for Thing BLEWeightscaleImpl
 *  Generated from ThingML (http://www.thingml.org)
 *****************************************************/

#include "BLEWeightscaleImpl.h"

/*****************************************************************************
 * Implementation for type : BLEWeightscaleImpl
 *****************************************************************************/

// Declaration of prototypes:
//Prototypes: State Machine
void BLEWeightscaleImpl_States_OnExit(int state, struct BLEWeightscaleImpl_Instance *_instance);
//Prototypes: Message Sending
void BLEWeightscaleImpl_send_Weightscale_BatteryPercentage(struct BLEWeightscaleImpl_Instance *_instance, uint8_t Percent);
void BLEWeightscaleImpl_send_Weightscale_WeightscaleMeasurement(struct BLEWeightscaleImpl_Instance *_instance, uint16_t Weight, uint8_t UnitImperial, uint16_t Year, uint8_t Month, uint8_t Day, uint8_t Hour, uint8_t Minute, uint8_t Second);
void BLEWeightscaleImpl_send_Connecter_Connect(struct BLEWeightscaleImpl_Instance *_instance);
void BLEWeightscaleImpl_send_Connecter_Stop(struct BLEWeightscaleImpl_Instance *_instance);
void BLEWeightscaleImpl_send_Connecter_Encrypt(struct BLEWeightscaleImpl_Instance *_instance);
void BLEWeightscaleImpl_send_ATT_ATTFindInformationRequest(struct BLEWeightscaleImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t StartingHandle, uint16_t EndingHandle);
void BLEWeightscaleImpl_send_ATT_ATTFindInformationResponse(struct BLEWeightscaleImpl_Instance *_instance, uint16_t ConnectionHandle, uint8_t Format, ble_gatt_data_t InformationData);
void BLEWeightscaleImpl_send_ATT_ATTFindInformationError(struct BLEWeightscaleImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error);
void BLEWeightscaleImpl_send_ATT_ATTReadByTypeRequest(struct BLEWeightscaleImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t StartingHandle, uint16_t EndingHandle, ble_uuid_t AttributeType);
void BLEWeightscaleImpl_send_ATT_ATTReadByTypeResponse(struct BLEWeightscaleImpl_Instance *_instance, uint16_t ConnectionHandle, uint8_t Length, ble_gatt_data_t AttributeDataList);
void BLEWeightscaleImpl_send_ATT_ATTReadByTypeError(struct BLEWeightscaleImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error);
void BLEWeightscaleImpl_send_ATT_ATTReadRequest(struct BLEWeightscaleImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle);
void BLEWeightscaleImpl_send_ATT_ATTReadResponse(struct BLEWeightscaleImpl_Instance *_instance, uint16_t ConnectionHandle, ble_gatt_data_t AttributeValue);
void BLEWeightscaleImpl_send_ATT_ATTReadError(struct BLEWeightscaleImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error);
void BLEWeightscaleImpl_send_ATT_ATTReadByGroupTypeRequest(struct BLEWeightscaleImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t StartingHandle, uint16_t EndingHandle, ble_uuid_t AttributeGroupType);
void BLEWeightscaleImpl_send_ATT_ATTReadByGroupTypeResponse(struct BLEWeightscaleImpl_Instance *_instance, uint16_t ConnectionHandle, uint8_t Length, ble_gatt_data_t AttributeDataList);
void BLEWeightscaleImpl_send_ATT_ATTReadByGroupTypeError(struct BLEWeightscaleImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error);
void BLEWeightscaleImpl_send_ATT_ATTWriteRequest(struct BLEWeightscaleImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, ble_gatt_data_t AttributeValue);
void BLEWeightscaleImpl_send_ATT_ATTWriteResponse(struct BLEWeightscaleImpl_Instance *_instance, uint16_t ConnectionHandle);
void BLEWeightscaleImpl_send_ATT_ATTWriteError(struct BLEWeightscaleImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error);
void BLEWeightscaleImpl_send_ATT_ATTWriteCommand(struct BLEWeightscaleImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, ble_gatt_data_t AttributeValue);
void BLEWeightscaleImpl_send_ATT_ATTHandleValueNotification(struct BLEWeightscaleImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, ble_gatt_data_t AttributeValue);
void BLEWeightscaleImpl_send_ATT_ATTHandleValueIndication(struct BLEWeightscaleImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, ble_gatt_data_t AttributeValue);
void BLEWeightscaleImpl_send_ATT_ATTHandleValueConfirmation(struct BLEWeightscaleImpl_Instance *_instance, uint16_t ConnectionHandle);
//Prototypes: Function
ble_uuid_t f_BLEWeightscaleImpl_ReadUUID(struct BLEWeightscaleImpl_Instance *_instance, uint16_t Length, uint8_t * Data);
ble_uuid_t f_BLEWeightscaleImpl_MakeUUID(struct BLEWeightscaleImpl_Instance *_instance, const char * Text);
void f_BLEWeightscaleImpl_PrintUUID(struct BLEWeightscaleImpl_Instance *_instance, ble_uuid_t ID);
// Declaration of functions:
// Definition of function ReadUUID
ble_uuid_t f_BLEWeightscaleImpl_ReadUUID(struct BLEWeightscaleImpl_Instance *_instance, uint16_t Length, uint8_t * Data) {
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
ble_uuid_t f_BLEWeightscaleImpl_MakeUUID(struct BLEWeightscaleImpl_Instance *_instance, const char * Text) {
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
void f_BLEWeightscaleImpl_PrintUUID(struct BLEWeightscaleImpl_Instance *_instance, ble_uuid_t ID) {

      uint8_t *v = &ID;
      printf("%2.2X%2.2X%2.2X%2.2X-",v[15],v[14],v[13],v[12]);
      printf("%2.2X%2.2X-",v[11],v[10]);
      printf("%2.2X%2.2X-",v[9],v[8]);
      printf("%2.2X%2.2X-",v[7],v[6]);
      printf("%2.2X%2.2X%2.2X%2.2X%2.2X%2.2X\n",v[5],v[4],v[3],v[2],v[1],v[0]);
    
}

// On Entry Actions:
void BLEWeightscaleImpl_States_OnEntry(int state, struct BLEWeightscaleImpl_Instance *_instance) {
switch(state) {
case BLEWEIGHTSCALEIMPL_STATES_STATE:{
_instance->BLEWeightscaleImpl_States_State = BLEWEIGHTSCALEIMPL_STATES_WAITING_STATE;
BLEWeightscaleImpl_States_OnEntry(_instance->BLEWeightscaleImpl_States_State, _instance);
break;
}
case BLEWEIGHTSCALEIMPL_STATES_WAITING_STATE:{
break;
}
case BLEWEIGHTSCALEIMPL_STATES_READBATTERY_STATE:{
fprintf(stdout, "[INFO]: Reading battery percentage...\n");
BLEWeightscaleImpl_send_ATT_ATTReadRequest(_instance, _instance->BLEWeightscaleImpl_ConnectedHandle_var, _instance->BLEWeightscaleImpl_BatteryValueHandle_var);
break;
}
case BLEWEIGHTSCALEIMPL_STATES_TIMESYNC_STATE:{
fprintf(stdout, "[INFO]: Synchronizing the time...\n");
;ble_gatt_data_t AttributeValue;

          time_t utc = time(NULL);
          struct tm *ptm = gmtime(&utc);
        

          AttributeValue.length = 7;
          *((uint16_t*)&AttributeValue.bytes[0]) = ptm->tm_year+1900;
          *((uint8_t*)&AttributeValue.bytes[2]) = ptm->tm_mon+1;
          *((uint8_t*)&AttributeValue.bytes[3]) = ptm->tm_mday;
          *((uint8_t*)&AttributeValue.bytes[4]) = ptm->tm_hour+1;
          *((uint8_t*)&AttributeValue.bytes[5]) = ptm->tm_min;
          *((uint8_t*)&AttributeValue.bytes[6]) = ptm->tm_sec;
        
BLEWeightscaleImpl_send_ATT_ATTWriteRequest(_instance, _instance->BLEWeightscaleImpl_ConnectedHandle_var, 0x0017, AttributeValue);
break;
}
case BLEWEIGHTSCALEIMPL_STATES_GETVALUES_STATE:{
fprintf(stdout, "[INFO]: Requesting indications of Weight Scale Measurement...\n");
;ble_gatt_data_t AttributeValue;
AttributeValue.length = 2;
AttributeValue.bytes[0] = 0x02;
AttributeValue.bytes[1] = 0x00;
BLEWeightscaleImpl_send_ATT_ATTWriteRequest(_instance, _instance->BLEWeightscaleImpl_ConnectedHandle_var, _instance->BLEWeightscaleImpl_WeightScaleConfigurationHandle_var, AttributeValue);
break;
}
default: break;
}
}

// On Exit Actions:
void BLEWeightscaleImpl_States_OnExit(int state, struct BLEWeightscaleImpl_Instance *_instance) {
switch(state) {
case BLEWEIGHTSCALEIMPL_STATES_STATE:{
BLEWeightscaleImpl_States_OnExit(_instance->BLEWeightscaleImpl_States_State, _instance);
break;}
case BLEWEIGHTSCALEIMPL_STATES_WAITING_STATE:{
break;}
case BLEWEIGHTSCALEIMPL_STATES_READBATTERY_STATE:{
break;}
case BLEWEIGHTSCALEIMPL_STATES_TIMESYNC_STATE:{
break;}
case BLEWEIGHTSCALEIMPL_STATES_GETVALUES_STATE:{
break;}
default: break;
}
}

// Event Handlers for incoming messages:
void BLEWeightscaleImpl_handle_ATT_ATTWriteError(struct BLEWeightscaleImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error) {
//Region States
uint8_t BLEWeightscaleImpl_States_State_event_consumed = 0;
if (_instance->BLEWeightscaleImpl_States_State == BLEWEIGHTSCALEIMPL_STATES_TIMESYNC_STATE) {
if (BLEWeightscaleImpl_States_State_event_consumed == 0 && 1) {
fprintf(stdout, "[ERROR]: Time synchronization failed. Error code: ");
printf("%2.2X", Error);
fprintf(stdout, "!!\n");
BLEWeightscaleImpl_send_Connecter_Stop(_instance);
BLEWeightscaleImpl_States_State_event_consumed = 1;
}
}
else if (_instance->BLEWeightscaleImpl_States_State == BLEWEIGHTSCALEIMPL_STATES_GETVALUES_STATE) {
if (BLEWeightscaleImpl_States_State_event_consumed == 0 && (ConnectionHandle == _instance->BLEWeightscaleImpl_ConnectedHandle_var)) {
fprintf(stdout, "[ERROR]: Could not set indications of Weight Scale Measurement!\n");
BLEWeightscaleImpl_send_Connecter_Stop(_instance);
BLEWeightscaleImpl_States_State_event_consumed = 1;
}
}
//End Region States
//End dsregion States
//Session list: 
}
void BLEWeightscaleImpl_handle_ATT_ATTReadError(struct BLEWeightscaleImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error) {
//Region States
uint8_t BLEWeightscaleImpl_States_State_event_consumed = 0;
if (_instance->BLEWeightscaleImpl_States_State == BLEWEIGHTSCALEIMPL_STATES_READBATTERY_STATE) {
if (BLEWeightscaleImpl_States_State_event_consumed == 0 && (ConnectionHandle == _instance->BLEWeightscaleImpl_ConnectedHandle_var)) {
fprintf(stdout, "[ERROR]: Could not read battery percentage!\n");
BLEWeightscaleImpl_send_Connecter_Stop(_instance);
BLEWeightscaleImpl_States_State_event_consumed = 1;
}
}
//End Region States
//End dsregion States
//Session list: 
}
void BLEWeightscaleImpl_handle_ATT_ATTReadResponse(struct BLEWeightscaleImpl_Instance *_instance, uint16_t ConnectionHandle, ble_gatt_data_t AttributeValue) {
//Region States
uint8_t BLEWeightscaleImpl_States_State_event_consumed = 0;
if (_instance->BLEWeightscaleImpl_States_State == BLEWEIGHTSCALEIMPL_STATES_READBATTERY_STATE) {
if (BLEWeightscaleImpl_States_State_event_consumed == 0 && (ConnectionHandle == _instance->BLEWeightscaleImpl_ConnectedHandle_var)) {
BLEWeightscaleImpl_States_OnExit(BLEWEIGHTSCALEIMPL_STATES_READBATTERY_STATE, _instance);
_instance->BLEWeightscaleImpl_States_State = BLEWEIGHTSCALEIMPL_STATES_TIMESYNC_STATE;
;uint8_t Percent = AttributeValue.bytes[0];
printf("[INFO]: Got battery percentage - %u%%\n", Percent);
BLEWeightscaleImpl_send_Weightscale_BatteryPercentage(_instance, Percent);
BLEWeightscaleImpl_States_OnEntry(BLEWEIGHTSCALEIMPL_STATES_TIMESYNC_STATE, _instance);
BLEWeightscaleImpl_States_State_event_consumed = 1;
}
}
//End Region States
//End dsregion States
//Session list: 
}
void BLEWeightscaleImpl_handle_ATT_ATTWriteResponse(struct BLEWeightscaleImpl_Instance *_instance, uint16_t ConnectionHandle) {
//Region States
uint8_t BLEWeightscaleImpl_States_State_event_consumed = 0;
if (_instance->BLEWeightscaleImpl_States_State == BLEWEIGHTSCALEIMPL_STATES_TIMESYNC_STATE) {
if (BLEWeightscaleImpl_States_State_event_consumed == 0 && 1) {
BLEWeightscaleImpl_States_OnExit(BLEWEIGHTSCALEIMPL_STATES_TIMESYNC_STATE, _instance);
_instance->BLEWeightscaleImpl_States_State = BLEWEIGHTSCALEIMPL_STATES_GETVALUES_STATE;
fprintf(stdout, "[INFO]: Time synchronization successfull!\n");
BLEWeightscaleImpl_States_OnEntry(BLEWEIGHTSCALEIMPL_STATES_GETVALUES_STATE, _instance);
BLEWeightscaleImpl_States_State_event_consumed = 1;
}
}
//End Region States
//End dsregion States
//Session list: 
}
void BLEWeightscaleImpl_handle_ATT_ATTHandleValueIndication(struct BLEWeightscaleImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, ble_gatt_data_t AttributeValue) {
//Region States
uint8_t BLEWeightscaleImpl_States_State_event_consumed = 0;
if (_instance->BLEWeightscaleImpl_States_State == BLEWEIGHTSCALEIMPL_STATES_GETVALUES_STATE) {
if (BLEWeightscaleImpl_States_State_event_consumed == 0 && (ConnectionHandle == _instance->BLEWeightscaleImpl_ConnectedHandle_var)) {

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
BLEWeightscaleImpl_send_ATT_ATTHandleValueConfirmation(_instance, ConnectionHandle);
BLEWeightscaleImpl_send_Weightscale_WeightscaleMeasurement(_instance, Weight, UnitImperial, Year, Month, Day, Hour, Minute, Second);
BLEWeightscaleImpl_States_State_event_consumed = 1;
}
}
//End Region States
//End dsregion States
//Session list: 
}
void BLEWeightscaleImpl_handle_Connecter_Failure(struct BLEWeightscaleImpl_Instance *_instance) {
//Region States
uint8_t BLEWeightscaleImpl_States_State_event_consumed = 0;
if (_instance->BLEWeightscaleImpl_States_State == BLEWEIGHTSCALEIMPL_STATES_READBATTERY_STATE) {
if (BLEWeightscaleImpl_States_State_event_consumed == 0 && 1) {
BLEWeightscaleImpl_States_OnExit(BLEWEIGHTSCALEIMPL_STATES_READBATTERY_STATE, _instance);
_instance->BLEWeightscaleImpl_States_State = BLEWEIGHTSCALEIMPL_STATES_WAITING_STATE;
BLEWeightscaleImpl_States_OnEntry(BLEWEIGHTSCALEIMPL_STATES_WAITING_STATE, _instance);
BLEWeightscaleImpl_States_State_event_consumed = 1;
}
}
else if (_instance->BLEWeightscaleImpl_States_State == BLEWEIGHTSCALEIMPL_STATES_TIMESYNC_STATE) {
if (BLEWeightscaleImpl_States_State_event_consumed == 0 && 1) {
BLEWeightscaleImpl_States_OnExit(BLEWEIGHTSCALEIMPL_STATES_TIMESYNC_STATE, _instance);
_instance->BLEWeightscaleImpl_States_State = BLEWEIGHTSCALEIMPL_STATES_WAITING_STATE;
BLEWeightscaleImpl_States_OnEntry(BLEWEIGHTSCALEIMPL_STATES_WAITING_STATE, _instance);
BLEWeightscaleImpl_States_State_event_consumed = 1;
}
}
else if (_instance->BLEWeightscaleImpl_States_State == BLEWEIGHTSCALEIMPL_STATES_GETVALUES_STATE) {
if (BLEWeightscaleImpl_States_State_event_consumed == 0 && 1) {
BLEWeightscaleImpl_States_OnExit(BLEWEIGHTSCALEIMPL_STATES_GETVALUES_STATE, _instance);
_instance->BLEWeightscaleImpl_States_State = BLEWEIGHTSCALEIMPL_STATES_WAITING_STATE;
BLEWeightscaleImpl_States_OnEntry(BLEWEIGHTSCALEIMPL_STATES_WAITING_STATE, _instance);
BLEWeightscaleImpl_States_State_event_consumed = 1;
}
}
//End Region States
//End dsregion States
//Session list: 
}
void BLEWeightscaleImpl_handle_Connecter_Stopped(struct BLEWeightscaleImpl_Instance *_instance) {
//Region States
uint8_t BLEWeightscaleImpl_States_State_event_consumed = 0;
if (_instance->BLEWeightscaleImpl_States_State == BLEWEIGHTSCALEIMPL_STATES_READBATTERY_STATE) {
if (BLEWeightscaleImpl_States_State_event_consumed == 0 && 1) {
BLEWeightscaleImpl_States_OnExit(BLEWEIGHTSCALEIMPL_STATES_READBATTERY_STATE, _instance);
_instance->BLEWeightscaleImpl_States_State = BLEWEIGHTSCALEIMPL_STATES_WAITING_STATE;
BLEWeightscaleImpl_States_OnEntry(BLEWEIGHTSCALEIMPL_STATES_WAITING_STATE, _instance);
BLEWeightscaleImpl_States_State_event_consumed = 1;
}
}
else if (_instance->BLEWeightscaleImpl_States_State == BLEWEIGHTSCALEIMPL_STATES_TIMESYNC_STATE) {
if (BLEWeightscaleImpl_States_State_event_consumed == 0 && 1) {
BLEWeightscaleImpl_States_OnExit(BLEWEIGHTSCALEIMPL_STATES_TIMESYNC_STATE, _instance);
_instance->BLEWeightscaleImpl_States_State = BLEWEIGHTSCALEIMPL_STATES_WAITING_STATE;
BLEWeightscaleImpl_States_OnEntry(BLEWEIGHTSCALEIMPL_STATES_WAITING_STATE, _instance);
BLEWeightscaleImpl_States_State_event_consumed = 1;
}
}
else if (_instance->BLEWeightscaleImpl_States_State == BLEWEIGHTSCALEIMPL_STATES_GETVALUES_STATE) {
if (BLEWeightscaleImpl_States_State_event_consumed == 0 && 1) {
BLEWeightscaleImpl_States_OnExit(BLEWEIGHTSCALEIMPL_STATES_GETVALUES_STATE, _instance);
_instance->BLEWeightscaleImpl_States_State = BLEWEIGHTSCALEIMPL_STATES_WAITING_STATE;
BLEWeightscaleImpl_States_OnEntry(BLEWEIGHTSCALEIMPL_STATES_WAITING_STATE, _instance);
BLEWeightscaleImpl_States_State_event_consumed = 1;
}
}
//End Region States
//End dsregion States
//Session list: 
}
void BLEWeightscaleImpl_handle_Connecter_Connected(struct BLEWeightscaleImpl_Instance *_instance, uint16_t Handle, uint8_t AddressType, bdaddr_t Address) {
//Region States
uint8_t BLEWeightscaleImpl_States_State_event_consumed = 0;
if (_instance->BLEWeightscaleImpl_States_State == BLEWEIGHTSCALEIMPL_STATES_WAITING_STATE) {
if (BLEWeightscaleImpl_States_State_event_consumed == 0 && 1) {
_instance->BLEWeightscaleImpl_ConnectedHandle_var = Handle;
BLEWeightscaleImpl_send_Connecter_Encrypt(_instance);
BLEWeightscaleImpl_States_State_event_consumed = 1;
}
}
//End Region States
//End dsregion States
//Session list: 
}
void BLEWeightscaleImpl_handle_Connecter_Encrypted(struct BLEWeightscaleImpl_Instance *_instance) {
//Region States
uint8_t BLEWeightscaleImpl_States_State_event_consumed = 0;
if (_instance->BLEWeightscaleImpl_States_State == BLEWEIGHTSCALEIMPL_STATES_WAITING_STATE) {
if (BLEWeightscaleImpl_States_State_event_consumed == 0 && 1) {
BLEWeightscaleImpl_States_OnExit(BLEWEIGHTSCALEIMPL_STATES_WAITING_STATE, _instance);
_instance->BLEWeightscaleImpl_States_State = BLEWEIGHTSCALEIMPL_STATES_READBATTERY_STATE;
BLEWeightscaleImpl_States_OnEntry(BLEWEIGHTSCALEIMPL_STATES_READBATTERY_STATE, _instance);
BLEWeightscaleImpl_States_State_event_consumed = 1;
}
}
//End Region States
//End dsregion States
//Session list: 
}

// Observers for outgoing messages:
void (*external_BLEWeightscaleImpl_send_Weightscale_BatteryPercentage_listener)(struct BLEWeightscaleImpl_Instance *, uint8_t)= 0x0;
void (*BLEWeightscaleImpl_send_Weightscale_BatteryPercentage_listener)(struct BLEWeightscaleImpl_Instance *, uint8_t)= 0x0;
void register_external_BLEWeightscaleImpl_send_Weightscale_BatteryPercentage_listener(void (*_listener)(struct BLEWeightscaleImpl_Instance *, uint8_t)){
external_BLEWeightscaleImpl_send_Weightscale_BatteryPercentage_listener = _listener;
}
void register_BLEWeightscaleImpl_send_Weightscale_BatteryPercentage_listener(void (*_listener)(struct BLEWeightscaleImpl_Instance *, uint8_t)){
BLEWeightscaleImpl_send_Weightscale_BatteryPercentage_listener = _listener;
}
void BLEWeightscaleImpl_send_Weightscale_BatteryPercentage(struct BLEWeightscaleImpl_Instance *_instance, uint8_t Percent){
if (BLEWeightscaleImpl_send_Weightscale_BatteryPercentage_listener != 0x0) BLEWeightscaleImpl_send_Weightscale_BatteryPercentage_listener(_instance, Percent);
if (external_BLEWeightscaleImpl_send_Weightscale_BatteryPercentage_listener != 0x0) external_BLEWeightscaleImpl_send_Weightscale_BatteryPercentage_listener(_instance, Percent);
;
}
void (*external_BLEWeightscaleImpl_send_Weightscale_WeightscaleMeasurement_listener)(struct BLEWeightscaleImpl_Instance *, uint16_t, uint8_t, uint16_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t)= 0x0;
void (*BLEWeightscaleImpl_send_Weightscale_WeightscaleMeasurement_listener)(struct BLEWeightscaleImpl_Instance *, uint16_t, uint8_t, uint16_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t)= 0x0;
void register_external_BLEWeightscaleImpl_send_Weightscale_WeightscaleMeasurement_listener(void (*_listener)(struct BLEWeightscaleImpl_Instance *, uint16_t, uint8_t, uint16_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t)){
external_BLEWeightscaleImpl_send_Weightscale_WeightscaleMeasurement_listener = _listener;
}
void register_BLEWeightscaleImpl_send_Weightscale_WeightscaleMeasurement_listener(void (*_listener)(struct BLEWeightscaleImpl_Instance *, uint16_t, uint8_t, uint16_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t)){
BLEWeightscaleImpl_send_Weightscale_WeightscaleMeasurement_listener = _listener;
}
void BLEWeightscaleImpl_send_Weightscale_WeightscaleMeasurement(struct BLEWeightscaleImpl_Instance *_instance, uint16_t Weight, uint8_t UnitImperial, uint16_t Year, uint8_t Month, uint8_t Day, uint8_t Hour, uint8_t Minute, uint8_t Second){
if (BLEWeightscaleImpl_send_Weightscale_WeightscaleMeasurement_listener != 0x0) BLEWeightscaleImpl_send_Weightscale_WeightscaleMeasurement_listener(_instance, Weight, UnitImperial, Year, Month, Day, Hour, Minute, Second);
if (external_BLEWeightscaleImpl_send_Weightscale_WeightscaleMeasurement_listener != 0x0) external_BLEWeightscaleImpl_send_Weightscale_WeightscaleMeasurement_listener(_instance, Weight, UnitImperial, Year, Month, Day, Hour, Minute, Second);
;
}
void (*external_BLEWeightscaleImpl_send_Connecter_Connect_listener)(struct BLEWeightscaleImpl_Instance *)= 0x0;
void (*BLEWeightscaleImpl_send_Connecter_Connect_listener)(struct BLEWeightscaleImpl_Instance *)= 0x0;
void register_external_BLEWeightscaleImpl_send_Connecter_Connect_listener(void (*_listener)(struct BLEWeightscaleImpl_Instance *)){
external_BLEWeightscaleImpl_send_Connecter_Connect_listener = _listener;
}
void register_BLEWeightscaleImpl_send_Connecter_Connect_listener(void (*_listener)(struct BLEWeightscaleImpl_Instance *)){
BLEWeightscaleImpl_send_Connecter_Connect_listener = _listener;
}
void BLEWeightscaleImpl_send_Connecter_Connect(struct BLEWeightscaleImpl_Instance *_instance){
if (BLEWeightscaleImpl_send_Connecter_Connect_listener != 0x0) BLEWeightscaleImpl_send_Connecter_Connect_listener(_instance);
if (external_BLEWeightscaleImpl_send_Connecter_Connect_listener != 0x0) external_BLEWeightscaleImpl_send_Connecter_Connect_listener(_instance);
;
}
void (*external_BLEWeightscaleImpl_send_Connecter_Stop_listener)(struct BLEWeightscaleImpl_Instance *)= 0x0;
void (*BLEWeightscaleImpl_send_Connecter_Stop_listener)(struct BLEWeightscaleImpl_Instance *)= 0x0;
void register_external_BLEWeightscaleImpl_send_Connecter_Stop_listener(void (*_listener)(struct BLEWeightscaleImpl_Instance *)){
external_BLEWeightscaleImpl_send_Connecter_Stop_listener = _listener;
}
void register_BLEWeightscaleImpl_send_Connecter_Stop_listener(void (*_listener)(struct BLEWeightscaleImpl_Instance *)){
BLEWeightscaleImpl_send_Connecter_Stop_listener = _listener;
}
void BLEWeightscaleImpl_send_Connecter_Stop(struct BLEWeightscaleImpl_Instance *_instance){
if (BLEWeightscaleImpl_send_Connecter_Stop_listener != 0x0) BLEWeightscaleImpl_send_Connecter_Stop_listener(_instance);
if (external_BLEWeightscaleImpl_send_Connecter_Stop_listener != 0x0) external_BLEWeightscaleImpl_send_Connecter_Stop_listener(_instance);
;
}
void (*external_BLEWeightscaleImpl_send_Connecter_Encrypt_listener)(struct BLEWeightscaleImpl_Instance *)= 0x0;
void (*BLEWeightscaleImpl_send_Connecter_Encrypt_listener)(struct BLEWeightscaleImpl_Instance *)= 0x0;
void register_external_BLEWeightscaleImpl_send_Connecter_Encrypt_listener(void (*_listener)(struct BLEWeightscaleImpl_Instance *)){
external_BLEWeightscaleImpl_send_Connecter_Encrypt_listener = _listener;
}
void register_BLEWeightscaleImpl_send_Connecter_Encrypt_listener(void (*_listener)(struct BLEWeightscaleImpl_Instance *)){
BLEWeightscaleImpl_send_Connecter_Encrypt_listener = _listener;
}
void BLEWeightscaleImpl_send_Connecter_Encrypt(struct BLEWeightscaleImpl_Instance *_instance){
if (BLEWeightscaleImpl_send_Connecter_Encrypt_listener != 0x0) BLEWeightscaleImpl_send_Connecter_Encrypt_listener(_instance);
if (external_BLEWeightscaleImpl_send_Connecter_Encrypt_listener != 0x0) external_BLEWeightscaleImpl_send_Connecter_Encrypt_listener(_instance);
;
}
void (*external_BLEWeightscaleImpl_send_ATT_ATTFindInformationRequest_listener)(struct BLEWeightscaleImpl_Instance *, uint16_t, uint16_t, uint16_t)= 0x0;
void (*BLEWeightscaleImpl_send_ATT_ATTFindInformationRequest_listener)(struct BLEWeightscaleImpl_Instance *, uint16_t, uint16_t, uint16_t)= 0x0;
void register_external_BLEWeightscaleImpl_send_ATT_ATTFindInformationRequest_listener(void (*_listener)(struct BLEWeightscaleImpl_Instance *, uint16_t, uint16_t, uint16_t)){
external_BLEWeightscaleImpl_send_ATT_ATTFindInformationRequest_listener = _listener;
}
void register_BLEWeightscaleImpl_send_ATT_ATTFindInformationRequest_listener(void (*_listener)(struct BLEWeightscaleImpl_Instance *, uint16_t, uint16_t, uint16_t)){
BLEWeightscaleImpl_send_ATT_ATTFindInformationRequest_listener = _listener;
}
void BLEWeightscaleImpl_send_ATT_ATTFindInformationRequest(struct BLEWeightscaleImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t StartingHandle, uint16_t EndingHandle){
if (BLEWeightscaleImpl_send_ATT_ATTFindInformationRequest_listener != 0x0) BLEWeightscaleImpl_send_ATT_ATTFindInformationRequest_listener(_instance, ConnectionHandle, StartingHandle, EndingHandle);
if (external_BLEWeightscaleImpl_send_ATT_ATTFindInformationRequest_listener != 0x0) external_BLEWeightscaleImpl_send_ATT_ATTFindInformationRequest_listener(_instance, ConnectionHandle, StartingHandle, EndingHandle);
;
}
void (*external_BLEWeightscaleImpl_send_ATT_ATTFindInformationResponse_listener)(struct BLEWeightscaleImpl_Instance *, uint16_t, uint8_t, ble_gatt_data_t)= 0x0;
void (*BLEWeightscaleImpl_send_ATT_ATTFindInformationResponse_listener)(struct BLEWeightscaleImpl_Instance *, uint16_t, uint8_t, ble_gatt_data_t)= 0x0;
void register_external_BLEWeightscaleImpl_send_ATT_ATTFindInformationResponse_listener(void (*_listener)(struct BLEWeightscaleImpl_Instance *, uint16_t, uint8_t, ble_gatt_data_t)){
external_BLEWeightscaleImpl_send_ATT_ATTFindInformationResponse_listener = _listener;
}
void register_BLEWeightscaleImpl_send_ATT_ATTFindInformationResponse_listener(void (*_listener)(struct BLEWeightscaleImpl_Instance *, uint16_t, uint8_t, ble_gatt_data_t)){
BLEWeightscaleImpl_send_ATT_ATTFindInformationResponse_listener = _listener;
}
void BLEWeightscaleImpl_send_ATT_ATTFindInformationResponse(struct BLEWeightscaleImpl_Instance *_instance, uint16_t ConnectionHandle, uint8_t Format, ble_gatt_data_t InformationData){
if (BLEWeightscaleImpl_send_ATT_ATTFindInformationResponse_listener != 0x0) BLEWeightscaleImpl_send_ATT_ATTFindInformationResponse_listener(_instance, ConnectionHandle, Format, InformationData);
if (external_BLEWeightscaleImpl_send_ATT_ATTFindInformationResponse_listener != 0x0) external_BLEWeightscaleImpl_send_ATT_ATTFindInformationResponse_listener(_instance, ConnectionHandle, Format, InformationData);
;
}
void (*external_BLEWeightscaleImpl_send_ATT_ATTFindInformationError_listener)(struct BLEWeightscaleImpl_Instance *, uint16_t, uint16_t, uint8_t)= 0x0;
void (*BLEWeightscaleImpl_send_ATT_ATTFindInformationError_listener)(struct BLEWeightscaleImpl_Instance *, uint16_t, uint16_t, uint8_t)= 0x0;
void register_external_BLEWeightscaleImpl_send_ATT_ATTFindInformationError_listener(void (*_listener)(struct BLEWeightscaleImpl_Instance *, uint16_t, uint16_t, uint8_t)){
external_BLEWeightscaleImpl_send_ATT_ATTFindInformationError_listener = _listener;
}
void register_BLEWeightscaleImpl_send_ATT_ATTFindInformationError_listener(void (*_listener)(struct BLEWeightscaleImpl_Instance *, uint16_t, uint16_t, uint8_t)){
BLEWeightscaleImpl_send_ATT_ATTFindInformationError_listener = _listener;
}
void BLEWeightscaleImpl_send_ATT_ATTFindInformationError(struct BLEWeightscaleImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error){
if (BLEWeightscaleImpl_send_ATT_ATTFindInformationError_listener != 0x0) BLEWeightscaleImpl_send_ATT_ATTFindInformationError_listener(_instance, ConnectionHandle, AttributeHandle, Error);
if (external_BLEWeightscaleImpl_send_ATT_ATTFindInformationError_listener != 0x0) external_BLEWeightscaleImpl_send_ATT_ATTFindInformationError_listener(_instance, ConnectionHandle, AttributeHandle, Error);
;
}
void (*external_BLEWeightscaleImpl_send_ATT_ATTReadByTypeRequest_listener)(struct BLEWeightscaleImpl_Instance *, uint16_t, uint16_t, uint16_t, ble_uuid_t)= 0x0;
void (*BLEWeightscaleImpl_send_ATT_ATTReadByTypeRequest_listener)(struct BLEWeightscaleImpl_Instance *, uint16_t, uint16_t, uint16_t, ble_uuid_t)= 0x0;
void register_external_BLEWeightscaleImpl_send_ATT_ATTReadByTypeRequest_listener(void (*_listener)(struct BLEWeightscaleImpl_Instance *, uint16_t, uint16_t, uint16_t, ble_uuid_t)){
external_BLEWeightscaleImpl_send_ATT_ATTReadByTypeRequest_listener = _listener;
}
void register_BLEWeightscaleImpl_send_ATT_ATTReadByTypeRequest_listener(void (*_listener)(struct BLEWeightscaleImpl_Instance *, uint16_t, uint16_t, uint16_t, ble_uuid_t)){
BLEWeightscaleImpl_send_ATT_ATTReadByTypeRequest_listener = _listener;
}
void BLEWeightscaleImpl_send_ATT_ATTReadByTypeRequest(struct BLEWeightscaleImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t StartingHandle, uint16_t EndingHandle, ble_uuid_t AttributeType){
if (BLEWeightscaleImpl_send_ATT_ATTReadByTypeRequest_listener != 0x0) BLEWeightscaleImpl_send_ATT_ATTReadByTypeRequest_listener(_instance, ConnectionHandle, StartingHandle, EndingHandle, AttributeType);
if (external_BLEWeightscaleImpl_send_ATT_ATTReadByTypeRequest_listener != 0x0) external_BLEWeightscaleImpl_send_ATT_ATTReadByTypeRequest_listener(_instance, ConnectionHandle, StartingHandle, EndingHandle, AttributeType);
;
}
void (*external_BLEWeightscaleImpl_send_ATT_ATTReadByTypeResponse_listener)(struct BLEWeightscaleImpl_Instance *, uint16_t, uint8_t, ble_gatt_data_t)= 0x0;
void (*BLEWeightscaleImpl_send_ATT_ATTReadByTypeResponse_listener)(struct BLEWeightscaleImpl_Instance *, uint16_t, uint8_t, ble_gatt_data_t)= 0x0;
void register_external_BLEWeightscaleImpl_send_ATT_ATTReadByTypeResponse_listener(void (*_listener)(struct BLEWeightscaleImpl_Instance *, uint16_t, uint8_t, ble_gatt_data_t)){
external_BLEWeightscaleImpl_send_ATT_ATTReadByTypeResponse_listener = _listener;
}
void register_BLEWeightscaleImpl_send_ATT_ATTReadByTypeResponse_listener(void (*_listener)(struct BLEWeightscaleImpl_Instance *, uint16_t, uint8_t, ble_gatt_data_t)){
BLEWeightscaleImpl_send_ATT_ATTReadByTypeResponse_listener = _listener;
}
void BLEWeightscaleImpl_send_ATT_ATTReadByTypeResponse(struct BLEWeightscaleImpl_Instance *_instance, uint16_t ConnectionHandle, uint8_t Length, ble_gatt_data_t AttributeDataList){
if (BLEWeightscaleImpl_send_ATT_ATTReadByTypeResponse_listener != 0x0) BLEWeightscaleImpl_send_ATT_ATTReadByTypeResponse_listener(_instance, ConnectionHandle, Length, AttributeDataList);
if (external_BLEWeightscaleImpl_send_ATT_ATTReadByTypeResponse_listener != 0x0) external_BLEWeightscaleImpl_send_ATT_ATTReadByTypeResponse_listener(_instance, ConnectionHandle, Length, AttributeDataList);
;
}
void (*external_BLEWeightscaleImpl_send_ATT_ATTReadByTypeError_listener)(struct BLEWeightscaleImpl_Instance *, uint16_t, uint16_t, uint8_t)= 0x0;
void (*BLEWeightscaleImpl_send_ATT_ATTReadByTypeError_listener)(struct BLEWeightscaleImpl_Instance *, uint16_t, uint16_t, uint8_t)= 0x0;
void register_external_BLEWeightscaleImpl_send_ATT_ATTReadByTypeError_listener(void (*_listener)(struct BLEWeightscaleImpl_Instance *, uint16_t, uint16_t, uint8_t)){
external_BLEWeightscaleImpl_send_ATT_ATTReadByTypeError_listener = _listener;
}
void register_BLEWeightscaleImpl_send_ATT_ATTReadByTypeError_listener(void (*_listener)(struct BLEWeightscaleImpl_Instance *, uint16_t, uint16_t, uint8_t)){
BLEWeightscaleImpl_send_ATT_ATTReadByTypeError_listener = _listener;
}
void BLEWeightscaleImpl_send_ATT_ATTReadByTypeError(struct BLEWeightscaleImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error){
if (BLEWeightscaleImpl_send_ATT_ATTReadByTypeError_listener != 0x0) BLEWeightscaleImpl_send_ATT_ATTReadByTypeError_listener(_instance, ConnectionHandle, AttributeHandle, Error);
if (external_BLEWeightscaleImpl_send_ATT_ATTReadByTypeError_listener != 0x0) external_BLEWeightscaleImpl_send_ATT_ATTReadByTypeError_listener(_instance, ConnectionHandle, AttributeHandle, Error);
;
}
void (*external_BLEWeightscaleImpl_send_ATT_ATTReadRequest_listener)(struct BLEWeightscaleImpl_Instance *, uint16_t, uint16_t)= 0x0;
void (*BLEWeightscaleImpl_send_ATT_ATTReadRequest_listener)(struct BLEWeightscaleImpl_Instance *, uint16_t, uint16_t)= 0x0;
void register_external_BLEWeightscaleImpl_send_ATT_ATTReadRequest_listener(void (*_listener)(struct BLEWeightscaleImpl_Instance *, uint16_t, uint16_t)){
external_BLEWeightscaleImpl_send_ATT_ATTReadRequest_listener = _listener;
}
void register_BLEWeightscaleImpl_send_ATT_ATTReadRequest_listener(void (*_listener)(struct BLEWeightscaleImpl_Instance *, uint16_t, uint16_t)){
BLEWeightscaleImpl_send_ATT_ATTReadRequest_listener = _listener;
}
void BLEWeightscaleImpl_send_ATT_ATTReadRequest(struct BLEWeightscaleImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle){
if (BLEWeightscaleImpl_send_ATT_ATTReadRequest_listener != 0x0) BLEWeightscaleImpl_send_ATT_ATTReadRequest_listener(_instance, ConnectionHandle, AttributeHandle);
if (external_BLEWeightscaleImpl_send_ATT_ATTReadRequest_listener != 0x0) external_BLEWeightscaleImpl_send_ATT_ATTReadRequest_listener(_instance, ConnectionHandle, AttributeHandle);
;
}
void (*external_BLEWeightscaleImpl_send_ATT_ATTReadResponse_listener)(struct BLEWeightscaleImpl_Instance *, uint16_t, ble_gatt_data_t)= 0x0;
void (*BLEWeightscaleImpl_send_ATT_ATTReadResponse_listener)(struct BLEWeightscaleImpl_Instance *, uint16_t, ble_gatt_data_t)= 0x0;
void register_external_BLEWeightscaleImpl_send_ATT_ATTReadResponse_listener(void (*_listener)(struct BLEWeightscaleImpl_Instance *, uint16_t, ble_gatt_data_t)){
external_BLEWeightscaleImpl_send_ATT_ATTReadResponse_listener = _listener;
}
void register_BLEWeightscaleImpl_send_ATT_ATTReadResponse_listener(void (*_listener)(struct BLEWeightscaleImpl_Instance *, uint16_t, ble_gatt_data_t)){
BLEWeightscaleImpl_send_ATT_ATTReadResponse_listener = _listener;
}
void BLEWeightscaleImpl_send_ATT_ATTReadResponse(struct BLEWeightscaleImpl_Instance *_instance, uint16_t ConnectionHandle, ble_gatt_data_t AttributeValue){
if (BLEWeightscaleImpl_send_ATT_ATTReadResponse_listener != 0x0) BLEWeightscaleImpl_send_ATT_ATTReadResponse_listener(_instance, ConnectionHandle, AttributeValue);
if (external_BLEWeightscaleImpl_send_ATT_ATTReadResponse_listener != 0x0) external_BLEWeightscaleImpl_send_ATT_ATTReadResponse_listener(_instance, ConnectionHandle, AttributeValue);
;
}
void (*external_BLEWeightscaleImpl_send_ATT_ATTReadError_listener)(struct BLEWeightscaleImpl_Instance *, uint16_t, uint16_t, uint8_t)= 0x0;
void (*BLEWeightscaleImpl_send_ATT_ATTReadError_listener)(struct BLEWeightscaleImpl_Instance *, uint16_t, uint16_t, uint8_t)= 0x0;
void register_external_BLEWeightscaleImpl_send_ATT_ATTReadError_listener(void (*_listener)(struct BLEWeightscaleImpl_Instance *, uint16_t, uint16_t, uint8_t)){
external_BLEWeightscaleImpl_send_ATT_ATTReadError_listener = _listener;
}
void register_BLEWeightscaleImpl_send_ATT_ATTReadError_listener(void (*_listener)(struct BLEWeightscaleImpl_Instance *, uint16_t, uint16_t, uint8_t)){
BLEWeightscaleImpl_send_ATT_ATTReadError_listener = _listener;
}
void BLEWeightscaleImpl_send_ATT_ATTReadError(struct BLEWeightscaleImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error){
if (BLEWeightscaleImpl_send_ATT_ATTReadError_listener != 0x0) BLEWeightscaleImpl_send_ATT_ATTReadError_listener(_instance, ConnectionHandle, AttributeHandle, Error);
if (external_BLEWeightscaleImpl_send_ATT_ATTReadError_listener != 0x0) external_BLEWeightscaleImpl_send_ATT_ATTReadError_listener(_instance, ConnectionHandle, AttributeHandle, Error);
;
}
void (*external_BLEWeightscaleImpl_send_ATT_ATTReadByGroupTypeRequest_listener)(struct BLEWeightscaleImpl_Instance *, uint16_t, uint16_t, uint16_t, ble_uuid_t)= 0x0;
void (*BLEWeightscaleImpl_send_ATT_ATTReadByGroupTypeRequest_listener)(struct BLEWeightscaleImpl_Instance *, uint16_t, uint16_t, uint16_t, ble_uuid_t)= 0x0;
void register_external_BLEWeightscaleImpl_send_ATT_ATTReadByGroupTypeRequest_listener(void (*_listener)(struct BLEWeightscaleImpl_Instance *, uint16_t, uint16_t, uint16_t, ble_uuid_t)){
external_BLEWeightscaleImpl_send_ATT_ATTReadByGroupTypeRequest_listener = _listener;
}
void register_BLEWeightscaleImpl_send_ATT_ATTReadByGroupTypeRequest_listener(void (*_listener)(struct BLEWeightscaleImpl_Instance *, uint16_t, uint16_t, uint16_t, ble_uuid_t)){
BLEWeightscaleImpl_send_ATT_ATTReadByGroupTypeRequest_listener = _listener;
}
void BLEWeightscaleImpl_send_ATT_ATTReadByGroupTypeRequest(struct BLEWeightscaleImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t StartingHandle, uint16_t EndingHandle, ble_uuid_t AttributeGroupType){
if (BLEWeightscaleImpl_send_ATT_ATTReadByGroupTypeRequest_listener != 0x0) BLEWeightscaleImpl_send_ATT_ATTReadByGroupTypeRequest_listener(_instance, ConnectionHandle, StartingHandle, EndingHandle, AttributeGroupType);
if (external_BLEWeightscaleImpl_send_ATT_ATTReadByGroupTypeRequest_listener != 0x0) external_BLEWeightscaleImpl_send_ATT_ATTReadByGroupTypeRequest_listener(_instance, ConnectionHandle, StartingHandle, EndingHandle, AttributeGroupType);
;
}
void (*external_BLEWeightscaleImpl_send_ATT_ATTReadByGroupTypeResponse_listener)(struct BLEWeightscaleImpl_Instance *, uint16_t, uint8_t, ble_gatt_data_t)= 0x0;
void (*BLEWeightscaleImpl_send_ATT_ATTReadByGroupTypeResponse_listener)(struct BLEWeightscaleImpl_Instance *, uint16_t, uint8_t, ble_gatt_data_t)= 0x0;
void register_external_BLEWeightscaleImpl_send_ATT_ATTReadByGroupTypeResponse_listener(void (*_listener)(struct BLEWeightscaleImpl_Instance *, uint16_t, uint8_t, ble_gatt_data_t)){
external_BLEWeightscaleImpl_send_ATT_ATTReadByGroupTypeResponse_listener = _listener;
}
void register_BLEWeightscaleImpl_send_ATT_ATTReadByGroupTypeResponse_listener(void (*_listener)(struct BLEWeightscaleImpl_Instance *, uint16_t, uint8_t, ble_gatt_data_t)){
BLEWeightscaleImpl_send_ATT_ATTReadByGroupTypeResponse_listener = _listener;
}
void BLEWeightscaleImpl_send_ATT_ATTReadByGroupTypeResponse(struct BLEWeightscaleImpl_Instance *_instance, uint16_t ConnectionHandle, uint8_t Length, ble_gatt_data_t AttributeDataList){
if (BLEWeightscaleImpl_send_ATT_ATTReadByGroupTypeResponse_listener != 0x0) BLEWeightscaleImpl_send_ATT_ATTReadByGroupTypeResponse_listener(_instance, ConnectionHandle, Length, AttributeDataList);
if (external_BLEWeightscaleImpl_send_ATT_ATTReadByGroupTypeResponse_listener != 0x0) external_BLEWeightscaleImpl_send_ATT_ATTReadByGroupTypeResponse_listener(_instance, ConnectionHandle, Length, AttributeDataList);
;
}
void (*external_BLEWeightscaleImpl_send_ATT_ATTReadByGroupTypeError_listener)(struct BLEWeightscaleImpl_Instance *, uint16_t, uint16_t, uint8_t)= 0x0;
void (*BLEWeightscaleImpl_send_ATT_ATTReadByGroupTypeError_listener)(struct BLEWeightscaleImpl_Instance *, uint16_t, uint16_t, uint8_t)= 0x0;
void register_external_BLEWeightscaleImpl_send_ATT_ATTReadByGroupTypeError_listener(void (*_listener)(struct BLEWeightscaleImpl_Instance *, uint16_t, uint16_t, uint8_t)){
external_BLEWeightscaleImpl_send_ATT_ATTReadByGroupTypeError_listener = _listener;
}
void register_BLEWeightscaleImpl_send_ATT_ATTReadByGroupTypeError_listener(void (*_listener)(struct BLEWeightscaleImpl_Instance *, uint16_t, uint16_t, uint8_t)){
BLEWeightscaleImpl_send_ATT_ATTReadByGroupTypeError_listener = _listener;
}
void BLEWeightscaleImpl_send_ATT_ATTReadByGroupTypeError(struct BLEWeightscaleImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error){
if (BLEWeightscaleImpl_send_ATT_ATTReadByGroupTypeError_listener != 0x0) BLEWeightscaleImpl_send_ATT_ATTReadByGroupTypeError_listener(_instance, ConnectionHandle, AttributeHandle, Error);
if (external_BLEWeightscaleImpl_send_ATT_ATTReadByGroupTypeError_listener != 0x0) external_BLEWeightscaleImpl_send_ATT_ATTReadByGroupTypeError_listener(_instance, ConnectionHandle, AttributeHandle, Error);
;
}
void (*external_BLEWeightscaleImpl_send_ATT_ATTWriteRequest_listener)(struct BLEWeightscaleImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t)= 0x0;
void (*BLEWeightscaleImpl_send_ATT_ATTWriteRequest_listener)(struct BLEWeightscaleImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t)= 0x0;
void register_external_BLEWeightscaleImpl_send_ATT_ATTWriteRequest_listener(void (*_listener)(struct BLEWeightscaleImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t)){
external_BLEWeightscaleImpl_send_ATT_ATTWriteRequest_listener = _listener;
}
void register_BLEWeightscaleImpl_send_ATT_ATTWriteRequest_listener(void (*_listener)(struct BLEWeightscaleImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t)){
BLEWeightscaleImpl_send_ATT_ATTWriteRequest_listener = _listener;
}
void BLEWeightscaleImpl_send_ATT_ATTWriteRequest(struct BLEWeightscaleImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, ble_gatt_data_t AttributeValue){
if (BLEWeightscaleImpl_send_ATT_ATTWriteRequest_listener != 0x0) BLEWeightscaleImpl_send_ATT_ATTWriteRequest_listener(_instance, ConnectionHandle, AttributeHandle, AttributeValue);
if (external_BLEWeightscaleImpl_send_ATT_ATTWriteRequest_listener != 0x0) external_BLEWeightscaleImpl_send_ATT_ATTWriteRequest_listener(_instance, ConnectionHandle, AttributeHandle, AttributeValue);
;
}
void (*external_BLEWeightscaleImpl_send_ATT_ATTWriteResponse_listener)(struct BLEWeightscaleImpl_Instance *, uint16_t)= 0x0;
void (*BLEWeightscaleImpl_send_ATT_ATTWriteResponse_listener)(struct BLEWeightscaleImpl_Instance *, uint16_t)= 0x0;
void register_external_BLEWeightscaleImpl_send_ATT_ATTWriteResponse_listener(void (*_listener)(struct BLEWeightscaleImpl_Instance *, uint16_t)){
external_BLEWeightscaleImpl_send_ATT_ATTWriteResponse_listener = _listener;
}
void register_BLEWeightscaleImpl_send_ATT_ATTWriteResponse_listener(void (*_listener)(struct BLEWeightscaleImpl_Instance *, uint16_t)){
BLEWeightscaleImpl_send_ATT_ATTWriteResponse_listener = _listener;
}
void BLEWeightscaleImpl_send_ATT_ATTWriteResponse(struct BLEWeightscaleImpl_Instance *_instance, uint16_t ConnectionHandle){
if (BLEWeightscaleImpl_send_ATT_ATTWriteResponse_listener != 0x0) BLEWeightscaleImpl_send_ATT_ATTWriteResponse_listener(_instance, ConnectionHandle);
if (external_BLEWeightscaleImpl_send_ATT_ATTWriteResponse_listener != 0x0) external_BLEWeightscaleImpl_send_ATT_ATTWriteResponse_listener(_instance, ConnectionHandle);
;
}
void (*external_BLEWeightscaleImpl_send_ATT_ATTWriteError_listener)(struct BLEWeightscaleImpl_Instance *, uint16_t, uint16_t, uint8_t)= 0x0;
void (*BLEWeightscaleImpl_send_ATT_ATTWriteError_listener)(struct BLEWeightscaleImpl_Instance *, uint16_t, uint16_t, uint8_t)= 0x0;
void register_external_BLEWeightscaleImpl_send_ATT_ATTWriteError_listener(void (*_listener)(struct BLEWeightscaleImpl_Instance *, uint16_t, uint16_t, uint8_t)){
external_BLEWeightscaleImpl_send_ATT_ATTWriteError_listener = _listener;
}
void register_BLEWeightscaleImpl_send_ATT_ATTWriteError_listener(void (*_listener)(struct BLEWeightscaleImpl_Instance *, uint16_t, uint16_t, uint8_t)){
BLEWeightscaleImpl_send_ATT_ATTWriteError_listener = _listener;
}
void BLEWeightscaleImpl_send_ATT_ATTWriteError(struct BLEWeightscaleImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error){
if (BLEWeightscaleImpl_send_ATT_ATTWriteError_listener != 0x0) BLEWeightscaleImpl_send_ATT_ATTWriteError_listener(_instance, ConnectionHandle, AttributeHandle, Error);
if (external_BLEWeightscaleImpl_send_ATT_ATTWriteError_listener != 0x0) external_BLEWeightscaleImpl_send_ATT_ATTWriteError_listener(_instance, ConnectionHandle, AttributeHandle, Error);
;
}
void (*external_BLEWeightscaleImpl_send_ATT_ATTWriteCommand_listener)(struct BLEWeightscaleImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t)= 0x0;
void (*BLEWeightscaleImpl_send_ATT_ATTWriteCommand_listener)(struct BLEWeightscaleImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t)= 0x0;
void register_external_BLEWeightscaleImpl_send_ATT_ATTWriteCommand_listener(void (*_listener)(struct BLEWeightscaleImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t)){
external_BLEWeightscaleImpl_send_ATT_ATTWriteCommand_listener = _listener;
}
void register_BLEWeightscaleImpl_send_ATT_ATTWriteCommand_listener(void (*_listener)(struct BLEWeightscaleImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t)){
BLEWeightscaleImpl_send_ATT_ATTWriteCommand_listener = _listener;
}
void BLEWeightscaleImpl_send_ATT_ATTWriteCommand(struct BLEWeightscaleImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, ble_gatt_data_t AttributeValue){
if (BLEWeightscaleImpl_send_ATT_ATTWriteCommand_listener != 0x0) BLEWeightscaleImpl_send_ATT_ATTWriteCommand_listener(_instance, ConnectionHandle, AttributeHandle, AttributeValue);
if (external_BLEWeightscaleImpl_send_ATT_ATTWriteCommand_listener != 0x0) external_BLEWeightscaleImpl_send_ATT_ATTWriteCommand_listener(_instance, ConnectionHandle, AttributeHandle, AttributeValue);
;
}
void (*external_BLEWeightscaleImpl_send_ATT_ATTHandleValueNotification_listener)(struct BLEWeightscaleImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t)= 0x0;
void (*BLEWeightscaleImpl_send_ATT_ATTHandleValueNotification_listener)(struct BLEWeightscaleImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t)= 0x0;
void register_external_BLEWeightscaleImpl_send_ATT_ATTHandleValueNotification_listener(void (*_listener)(struct BLEWeightscaleImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t)){
external_BLEWeightscaleImpl_send_ATT_ATTHandleValueNotification_listener = _listener;
}
void register_BLEWeightscaleImpl_send_ATT_ATTHandleValueNotification_listener(void (*_listener)(struct BLEWeightscaleImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t)){
BLEWeightscaleImpl_send_ATT_ATTHandleValueNotification_listener = _listener;
}
void BLEWeightscaleImpl_send_ATT_ATTHandleValueNotification(struct BLEWeightscaleImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, ble_gatt_data_t AttributeValue){
if (BLEWeightscaleImpl_send_ATT_ATTHandleValueNotification_listener != 0x0) BLEWeightscaleImpl_send_ATT_ATTHandleValueNotification_listener(_instance, ConnectionHandle, AttributeHandle, AttributeValue);
if (external_BLEWeightscaleImpl_send_ATT_ATTHandleValueNotification_listener != 0x0) external_BLEWeightscaleImpl_send_ATT_ATTHandleValueNotification_listener(_instance, ConnectionHandle, AttributeHandle, AttributeValue);
;
}
void (*external_BLEWeightscaleImpl_send_ATT_ATTHandleValueIndication_listener)(struct BLEWeightscaleImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t)= 0x0;
void (*BLEWeightscaleImpl_send_ATT_ATTHandleValueIndication_listener)(struct BLEWeightscaleImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t)= 0x0;
void register_external_BLEWeightscaleImpl_send_ATT_ATTHandleValueIndication_listener(void (*_listener)(struct BLEWeightscaleImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t)){
external_BLEWeightscaleImpl_send_ATT_ATTHandleValueIndication_listener = _listener;
}
void register_BLEWeightscaleImpl_send_ATT_ATTHandleValueIndication_listener(void (*_listener)(struct BLEWeightscaleImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t)){
BLEWeightscaleImpl_send_ATT_ATTHandleValueIndication_listener = _listener;
}
void BLEWeightscaleImpl_send_ATT_ATTHandleValueIndication(struct BLEWeightscaleImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, ble_gatt_data_t AttributeValue){
if (BLEWeightscaleImpl_send_ATT_ATTHandleValueIndication_listener != 0x0) BLEWeightscaleImpl_send_ATT_ATTHandleValueIndication_listener(_instance, ConnectionHandle, AttributeHandle, AttributeValue);
if (external_BLEWeightscaleImpl_send_ATT_ATTHandleValueIndication_listener != 0x0) external_BLEWeightscaleImpl_send_ATT_ATTHandleValueIndication_listener(_instance, ConnectionHandle, AttributeHandle, AttributeValue);
;
}
void (*external_BLEWeightscaleImpl_send_ATT_ATTHandleValueConfirmation_listener)(struct BLEWeightscaleImpl_Instance *, uint16_t)= 0x0;
void (*BLEWeightscaleImpl_send_ATT_ATTHandleValueConfirmation_listener)(struct BLEWeightscaleImpl_Instance *, uint16_t)= 0x0;
void register_external_BLEWeightscaleImpl_send_ATT_ATTHandleValueConfirmation_listener(void (*_listener)(struct BLEWeightscaleImpl_Instance *, uint16_t)){
external_BLEWeightscaleImpl_send_ATT_ATTHandleValueConfirmation_listener = _listener;
}
void register_BLEWeightscaleImpl_send_ATT_ATTHandleValueConfirmation_listener(void (*_listener)(struct BLEWeightscaleImpl_Instance *, uint16_t)){
BLEWeightscaleImpl_send_ATT_ATTHandleValueConfirmation_listener = _listener;
}
void BLEWeightscaleImpl_send_ATT_ATTHandleValueConfirmation(struct BLEWeightscaleImpl_Instance *_instance, uint16_t ConnectionHandle){
if (BLEWeightscaleImpl_send_ATT_ATTHandleValueConfirmation_listener != 0x0) BLEWeightscaleImpl_send_ATT_ATTHandleValueConfirmation_listener(_instance, ConnectionHandle);
if (external_BLEWeightscaleImpl_send_ATT_ATTHandleValueConfirmation_listener != 0x0) external_BLEWeightscaleImpl_send_ATT_ATTHandleValueConfirmation_listener(_instance, ConnectionHandle);
;
}


// Enqueue incoming messages:
// Message enqueue
void enqueue_BLEWeightscaleImpl_Connecter_Connected(struct BLEWeightscaleImpl_Instance * inst, uint16_t Handle, uint8_t AddressType, bdaddr_t Address) {
    fifo_lock(&(inst->fifo));
    if ( fifo_byte_available(&(inst->fifo)) > 13 ) {

        _fifo_enqueue(&(inst->fifo), (59 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 59 & 0xFF );

        // Reception Port
        _fifo_enqueue(&(inst->fifo), (0 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 0 & 0xFF );

// parameter Handle
union u_Handle_t {
uint16_t p;
byte bytebuffer[2];
} u_Handle;
u_Handle.p = Handle;
_fifo_enqueue(&(inst->fifo), u_Handle.bytebuffer[1] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Handle.bytebuffer[0] & 0xFF );

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
void enqueue_BLEWeightscaleImpl_Connecter_Stopped(struct BLEWeightscaleImpl_Instance * inst) {
    fifo_lock(&(inst->fifo));
    if ( fifo_byte_available(&(inst->fifo)) > 4 ) {

        _fifo_enqueue(&(inst->fifo), (60 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 60 & 0xFF );

        // Reception Port
        _fifo_enqueue(&(inst->fifo), (0 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 0 & 0xFF );
    }
    fifo_unlock_and_notify(&(inst->fifo));
}
void enqueue_BLEWeightscaleImpl_Connecter_Failure(struct BLEWeightscaleImpl_Instance * inst) {
    fifo_lock(&(inst->fifo));
    if ( fifo_byte_available(&(inst->fifo)) > 4 ) {

        _fifo_enqueue(&(inst->fifo), (61 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 61 & 0xFF );

        // Reception Port
        _fifo_enqueue(&(inst->fifo), (0 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 0 & 0xFF );
    }
    fifo_unlock_and_notify(&(inst->fifo));
}
void enqueue_BLEWeightscaleImpl_Connecter_Encrypted(struct BLEWeightscaleImpl_Instance * inst) {
    fifo_lock(&(inst->fifo));
    if ( fifo_byte_available(&(inst->fifo)) > 4 ) {

        _fifo_enqueue(&(inst->fifo), (62 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 62 & 0xFF );

        // Reception Port
        _fifo_enqueue(&(inst->fifo), (0 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 0 & 0xFF );
    }
    fifo_unlock_and_notify(&(inst->fifo));
}
void enqueue_BLEWeightscaleImpl_ATT_ATTReadResponse(struct BLEWeightscaleImpl_Instance * inst, uint16_t ConnectionHandle, ble_gatt_data_t AttributeValue) {
    fifo_lock(&(inst->fifo));
    if ( fifo_byte_available(&(inst->fifo)) > 30 ) {

        _fifo_enqueue(&(inst->fifo), (47 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 47 & 0xFF );

        // Reception Port
        _fifo_enqueue(&(inst->fifo), (1 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 1 & 0xFF );

// parameter ConnectionHandle
union u_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ConnectionHandle;
u_ConnectionHandle.p = ConnectionHandle;
_fifo_enqueue(&(inst->fifo), u_ConnectionHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_ConnectionHandle.bytebuffer[0] & 0xFF );

// parameter AttributeValue
union u_AttributeValue_t {
ble_gatt_data_t p;
byte bytebuffer[24];
} u_AttributeValue;
u_AttributeValue.p = AttributeValue;
_fifo_enqueue(&(inst->fifo), u_AttributeValue.bytebuffer[23] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeValue.bytebuffer[22] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeValue.bytebuffer[21] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeValue.bytebuffer[20] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeValue.bytebuffer[19] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeValue.bytebuffer[18] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeValue.bytebuffer[17] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeValue.bytebuffer[16] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeValue.bytebuffer[15] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeValue.bytebuffer[14] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeValue.bytebuffer[13] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeValue.bytebuffer[12] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeValue.bytebuffer[11] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeValue.bytebuffer[10] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeValue.bytebuffer[9] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeValue.bytebuffer[8] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeValue.bytebuffer[7] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeValue.bytebuffer[6] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeValue.bytebuffer[5] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeValue.bytebuffer[4] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeValue.bytebuffer[3] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeValue.bytebuffer[2] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeValue.bytebuffer[1] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeValue.bytebuffer[0] & 0xFF );
    }
    fifo_unlock_and_notify(&(inst->fifo));
}
void enqueue_BLEWeightscaleImpl_ATT_ATTReadError(struct BLEWeightscaleImpl_Instance * inst, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error) {
    fifo_lock(&(inst->fifo));
    if ( fifo_byte_available(&(inst->fifo)) > 9 ) {

        _fifo_enqueue(&(inst->fifo), (48 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 48 & 0xFF );

        // Reception Port
        _fifo_enqueue(&(inst->fifo), (1 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 1 & 0xFF );

// parameter ConnectionHandle
union u_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ConnectionHandle;
u_ConnectionHandle.p = ConnectionHandle;
_fifo_enqueue(&(inst->fifo), u_ConnectionHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_ConnectionHandle.bytebuffer[0] & 0xFF );

// parameter AttributeHandle
union u_AttributeHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_AttributeHandle;
u_AttributeHandle.p = AttributeHandle;
_fifo_enqueue(&(inst->fifo), u_AttributeHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeHandle.bytebuffer[0] & 0xFF );

// parameter Error
union u_Error_t {
uint8_t p;
byte bytebuffer[1];
} u_Error;
u_Error.p = Error;
_fifo_enqueue(&(inst->fifo), u_Error.bytebuffer[0] & 0xFF );
    }
    fifo_unlock_and_notify(&(inst->fifo));
}
void enqueue_BLEWeightscaleImpl_ATT_ATTWriteResponse(struct BLEWeightscaleImpl_Instance * inst, uint16_t ConnectionHandle) {
    fifo_lock(&(inst->fifo));
    if ( fifo_byte_available(&(inst->fifo)) > 6 ) {

        _fifo_enqueue(&(inst->fifo), (53 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 53 & 0xFF );

        // Reception Port
        _fifo_enqueue(&(inst->fifo), (1 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 1 & 0xFF );

// parameter ConnectionHandle
union u_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ConnectionHandle;
u_ConnectionHandle.p = ConnectionHandle;
_fifo_enqueue(&(inst->fifo), u_ConnectionHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_ConnectionHandle.bytebuffer[0] & 0xFF );
    }
    fifo_unlock_and_notify(&(inst->fifo));
}
void enqueue_BLEWeightscaleImpl_ATT_ATTWriteError(struct BLEWeightscaleImpl_Instance * inst, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error) {
    fifo_lock(&(inst->fifo));
    if ( fifo_byte_available(&(inst->fifo)) > 9 ) {

        _fifo_enqueue(&(inst->fifo), (54 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 54 & 0xFF );

        // Reception Port
        _fifo_enqueue(&(inst->fifo), (1 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 1 & 0xFF );

// parameter ConnectionHandle
union u_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ConnectionHandle;
u_ConnectionHandle.p = ConnectionHandle;
_fifo_enqueue(&(inst->fifo), u_ConnectionHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_ConnectionHandle.bytebuffer[0] & 0xFF );

// parameter AttributeHandle
union u_AttributeHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_AttributeHandle;
u_AttributeHandle.p = AttributeHandle;
_fifo_enqueue(&(inst->fifo), u_AttributeHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeHandle.bytebuffer[0] & 0xFF );

// parameter Error
union u_Error_t {
uint8_t p;
byte bytebuffer[1];
} u_Error;
u_Error.p = Error;
_fifo_enqueue(&(inst->fifo), u_Error.bytebuffer[0] & 0xFF );
    }
    fifo_unlock_and_notify(&(inst->fifo));
}
void enqueue_BLEWeightscaleImpl_ATT_ATTHandleValueIndication(struct BLEWeightscaleImpl_Instance * inst, uint16_t ConnectionHandle, uint16_t AttributeHandle, ble_gatt_data_t AttributeValue) {
    fifo_lock(&(inst->fifo));
    if ( fifo_byte_available(&(inst->fifo)) > 32 ) {

        _fifo_enqueue(&(inst->fifo), (57 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 57 & 0xFF );

        // Reception Port
        _fifo_enqueue(&(inst->fifo), (1 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 1 & 0xFF );

// parameter ConnectionHandle
union u_ConnectionHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_ConnectionHandle;
u_ConnectionHandle.p = ConnectionHandle;
_fifo_enqueue(&(inst->fifo), u_ConnectionHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_ConnectionHandle.bytebuffer[0] & 0xFF );

// parameter AttributeHandle
union u_AttributeHandle_t {
uint16_t p;
byte bytebuffer[2];
} u_AttributeHandle;
u_AttributeHandle.p = AttributeHandle;
_fifo_enqueue(&(inst->fifo), u_AttributeHandle.bytebuffer[1] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeHandle.bytebuffer[0] & 0xFF );

// parameter AttributeValue
union u_AttributeValue_t {
ble_gatt_data_t p;
byte bytebuffer[24];
} u_AttributeValue;
u_AttributeValue.p = AttributeValue;
_fifo_enqueue(&(inst->fifo), u_AttributeValue.bytebuffer[23] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeValue.bytebuffer[22] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeValue.bytebuffer[21] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeValue.bytebuffer[20] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeValue.bytebuffer[19] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeValue.bytebuffer[18] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeValue.bytebuffer[17] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeValue.bytebuffer[16] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeValue.bytebuffer[15] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeValue.bytebuffer[14] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeValue.bytebuffer[13] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeValue.bytebuffer[12] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeValue.bytebuffer[11] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeValue.bytebuffer[10] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeValue.bytebuffer[9] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeValue.bytebuffer[8] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeValue.bytebuffer[7] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeValue.bytebuffer[6] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeValue.bytebuffer[5] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeValue.bytebuffer[4] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeValue.bytebuffer[3] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeValue.bytebuffer[2] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeValue.bytebuffer[1] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_AttributeValue.bytebuffer[0] & 0xFF );
    }
    fifo_unlock_and_notify(&(inst->fifo));
}

// Session functions:

// Message Process Queue:
int BLEWeightscaleImpl_processMessageQueue(struct BLEWeightscaleImpl_Instance * _instance) {
fifo_lock(&(_instance->fifo));
if (fifo_empty(&(_instance->fifo))) fifo_wait(&(_instance->fifo));
uint8_t mbufi = 0;

// Read the code of the next port/message in the queue
uint16_t code = fifo_dequeue(&(_instance->fifo)) << 8;

code += fifo_dequeue(&(_instance->fifo));

// Switch to call the appropriate handler
switch(code) {
case 59:{
byte mbuf[13 - 2];
while (mbufi < (13 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
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
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
case 0:{
BLEWeightscaleImpl_handle_Connecter_Connected(_instance,
 u_Connected_Handle.p /* Handle */ ,
 u_Connected_AddressType.p /* AddressType */ ,
 u_Connected_Address.p /* Address */ );
return 1;
break;
}
}
break;
}
case 60:{
byte mbuf[4 - 2];
while (mbufi < (4 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
uint8_t mbufi_Stopped = 2;
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
case 0:{
BLEWeightscaleImpl_handle_Connecter_Stopped(_instance);
return 1;
break;
}
}
break;
}
case 61:{
byte mbuf[4 - 2];
while (mbufi < (4 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
uint8_t mbufi_Failure = 2;
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
case 0:{
BLEWeightscaleImpl_handle_Connecter_Failure(_instance);
return 1;
break;
}
}
break;
}
case 62:{
byte mbuf[4 - 2];
while (mbufi < (4 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
uint8_t mbufi_Encrypted = 2;
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
case 0:{
BLEWeightscaleImpl_handle_Connecter_Encrypted(_instance);
return 1;
break;
}
}
break;
}
case 40:{
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
case 41:{
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
case 42:{
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
case 43:{
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
case 44:{
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
case 45:{
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
case 46:{
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
case 47:{
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
case 1:{
BLEWeightscaleImpl_handle_ATT_ATTReadResponse(_instance,
 u_ATTReadResponse_ConnectionHandle.p /* ConnectionHandle */ ,
 u_ATTReadResponse_AttributeValue.p /* AttributeValue */ );
return 1;
break;
}
}
break;
}
case 48:{
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
case 1:{
BLEWeightscaleImpl_handle_ATT_ATTReadError(_instance,
 u_ATTReadError_ConnectionHandle.p /* ConnectionHandle */ ,
 u_ATTReadError_AttributeHandle.p /* AttributeHandle */ ,
 u_ATTReadError_Error.p /* Error */ );
return 1;
break;
}
}
break;
}
case 49:{
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
case 50:{
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
case 51:{
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
case 52:{
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
case 53:{
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
case 1:{
BLEWeightscaleImpl_handle_ATT_ATTWriteResponse(_instance,
 u_ATTWriteResponse_ConnectionHandle.p /* ConnectionHandle */ );
return 1;
break;
}
}
break;
}
case 54:{
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
case 1:{
BLEWeightscaleImpl_handle_ATT_ATTWriteError(_instance,
 u_ATTWriteError_ConnectionHandle.p /* ConnectionHandle */ ,
 u_ATTWriteError_AttributeHandle.p /* AttributeHandle */ ,
 u_ATTWriteError_Error.p /* Error */ );
return 1;
break;
}
}
break;
}
case 55:{
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
case 56:{
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
case 57:{
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
case 1:{
BLEWeightscaleImpl_handle_ATT_ATTHandleValueIndication(_instance,
 u_ATTHandleValueIndication_ConnectionHandle.p /* ConnectionHandle */ ,
 u_ATTHandleValueIndication_AttributeHandle.p /* AttributeHandle */ ,
 u_ATTHandleValueIndication_AttributeValue.p /* AttributeValue */ );
return 1;
break;
}
}
break;
}
case 58:{
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
void BLEWeightscaleImpl_run(struct BLEWeightscaleImpl_Instance * _instance) {
if(_instance->initState != -1) {
BLEWeightscaleImpl_States_OnEntry(_instance->initState, _instance);
}
    while(1){
        BLEWeightscaleImpl_processMessageQueue(_instance);
    }
}


