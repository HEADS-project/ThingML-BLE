/*****************************************************
 *      THIS IS A GENERATED FILE. DO NOT EDIT.
 *        Implementation for Thing BLENotifierImpl
 *  Generated from ThingML (http://www.thingml.org)
 *****************************************************/

#include "BLENotifierImpl.h"

/*****************************************************************************
 * Implementation for type : BLENotifierImpl
 *****************************************************************************/


// BEGIN: Code from the c_global annotation BLENotifierImpl

  notifier_cmd_t request_cmd  = { 2, '!', 'R' };
  notifier_cmd_t received_cmd = { 2, '!', 'G' };
  notifier_cmd_t error_cmd    = { 2, '!', 'E' };
  notifier_cmd_t stored_cmd   = { 2, '!', 'S' };

// END: Code from the c_global annotation BLENotifierImpl

// Declaration of prototypes:
//Prototypes: State Machine
void BLENotifierImpl_States_OnExit(int state, struct BLENotifierImpl_Instance *_instance);
//Prototypes: Message Sending
void BLENotifierImpl_send_Notifications_NotifierReady(struct BLENotifierImpl_Instance *_instance);
void BLENotifierImpl_send_Notifications_NotifierFinished(struct BLENotifierImpl_Instance *_instance);
void BLENotifierImpl_send_Connecter_Connect(struct BLENotifierImpl_Instance *_instance);
void BLENotifierImpl_send_Connecter_ConnectTo(struct BLENotifierImpl_Instance *_instance, uint8_t AddressType, bdaddr_t Address, ble_random_number_t LongTermKey, uint16_t EncryptedDiversifier, ble_random_part_t RandomNumber);
void BLENotifierImpl_send_Connecter_ConnectToU(struct BLENotifierImpl_Instance *_instance, uint8_t AddressType, bdaddr_t Address);
void BLENotifierImpl_send_Connecter_Stop(struct BLENotifierImpl_Instance *_instance);
void BLENotifierImpl_send_Connecter_Encrypt(struct BLENotifierImpl_Instance *_instance);
void BLENotifierImpl_send_ATT_ATTFindInformationRequest(struct BLENotifierImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t StartingHandle, uint16_t EndingHandle);
void BLENotifierImpl_send_ATT_ATTFindInformationResponse(struct BLENotifierImpl_Instance *_instance, uint16_t ConnectionHandle, uint8_t Format, ble_gatt_data_t InformationData);
void BLENotifierImpl_send_ATT_ATTFindInformationError(struct BLENotifierImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error);
void BLENotifierImpl_send_ATT_ATTReadByTypeRequest(struct BLENotifierImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t StartingHandle, uint16_t EndingHandle, ble_uuid_t AttributeType);
void BLENotifierImpl_send_ATT_ATTReadByTypeResponse(struct BLENotifierImpl_Instance *_instance, uint16_t ConnectionHandle, uint8_t Length, ble_gatt_data_t AttributeDataList);
void BLENotifierImpl_send_ATT_ATTReadByTypeError(struct BLENotifierImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error);
void BLENotifierImpl_send_ATT_ATTReadRequest(struct BLENotifierImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle);
void BLENotifierImpl_send_ATT_ATTReadResponse(struct BLENotifierImpl_Instance *_instance, uint16_t ConnectionHandle, ble_gatt_data_t AttributeValue);
void BLENotifierImpl_send_ATT_ATTReadError(struct BLENotifierImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error);
void BLENotifierImpl_send_ATT_ATTReadByGroupTypeRequest(struct BLENotifierImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t StartingHandle, uint16_t EndingHandle, ble_uuid_t AttributeGroupType);
void BLENotifierImpl_send_ATT_ATTReadByGroupTypeResponse(struct BLENotifierImpl_Instance *_instance, uint16_t ConnectionHandle, uint8_t Length, ble_gatt_data_t AttributeDataList);
void BLENotifierImpl_send_ATT_ATTReadByGroupTypeError(struct BLENotifierImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error);
void BLENotifierImpl_send_ATT_ATTWriteRequest(struct BLENotifierImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, ble_gatt_data_t AttributeValue);
void BLENotifierImpl_send_ATT_ATTWriteResponse(struct BLENotifierImpl_Instance *_instance, uint16_t ConnectionHandle);
void BLENotifierImpl_send_ATT_ATTWriteError(struct BLENotifierImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error);
void BLENotifierImpl_send_ATT_ATTWriteCommand(struct BLENotifierImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, ble_gatt_data_t AttributeValue);
void BLENotifierImpl_send_ATT_ATTHandleValueNotification(struct BLENotifierImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, ble_gatt_data_t AttributeValue);
void BLENotifierImpl_send_ATT_ATTHandleValueIndication(struct BLENotifierImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, ble_gatt_data_t AttributeValue);
void BLENotifierImpl_send_ATT_ATTHandleValueConfirmation(struct BLENotifierImpl_Instance *_instance, uint16_t ConnectionHandle);
//Prototypes: Function
ble_uuid_t f_BLENotifierImpl_ReadUUID(struct BLENotifierImpl_Instance *_instance, uint16_t Length, uint8_t * Data);
ble_uuid_t f_BLENotifierImpl_MakeUUID(struct BLENotifierImpl_Instance *_instance, const char * Text);
void f_BLENotifierImpl_PrintUUID(struct BLENotifierImpl_Instance *_instance, ble_uuid_t ID);
// Declaration of functions:
// Definition of function ReadUUID
ble_uuid_t f_BLENotifierImpl_ReadUUID(struct BLENotifierImpl_Instance *_instance, uint16_t Length, uint8_t * Data) {
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
ble_uuid_t f_BLENotifierImpl_MakeUUID(struct BLENotifierImpl_Instance *_instance, const char * Text) {
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
void f_BLENotifierImpl_PrintUUID(struct BLENotifierImpl_Instance *_instance, ble_uuid_t ID) {

      uint8_t *v = &ID;
      printf("%2.2X%2.2X%2.2X%2.2X-",v[15],v[14],v[13],v[12]);
      printf("%2.2X%2.2X-",v[11],v[10]);
      printf("%2.2X%2.2X-",v[9],v[8]);
      printf("%2.2X%2.2X-",v[7],v[6]);
      printf("%2.2X%2.2X%2.2X%2.2X%2.2X%2.2X\n",v[5],v[4],v[3],v[2],v[1],v[0]);
    
}

// Sessions functionss:


// On Entry Actions:
void BLENotifierImpl_States_OnEntry(int state, struct BLENotifierImpl_Instance *_instance) {
switch(state) {
case BLENOTIFIERIMPL_STATES_CONNECTED_STATE:{
_instance->BLENotifierImpl_States_Connected_State = BLENOTIFIERIMPL_STATES_CONNECTED_SETREADNOTIFICATIONS_STATE;
BLENotifierImpl_States_OnEntry(_instance->BLENotifierImpl_States_Connected_State, _instance);
break;
}
case BLENOTIFIERIMPL_STATES_STATE:{
_instance->BLENotifierImpl_States_State = BLENOTIFIERIMPL_STATES_WAITING_STATE;
_instance->BLENotifierImpl_RequestCommand_var = request_cmd;
_instance->BLENotifierImpl_ReceivedCommand_var = received_cmd;
_instance->BLENotifierImpl_ErrorCommand_var = error_cmd;
_instance->BLENotifierImpl_StoredCommand_var = stored_cmd;
BLENotifierImpl_States_OnEntry(_instance->BLENotifierImpl_States_State, _instance);
break;
}
case BLENOTIFIERIMPL_STATES_WAITING_STATE:{
break;
}
case BLENOTIFIERIMPL_STATES_CONNECTED_SETREADNOTIFICATIONS_STATE:{
;ble_gatt_data_t AttributeValue;
AttributeValue.length = 2;
AttributeValue.bytes[0] = 0x01;
AttributeValue.bytes[1] = 0x00;
BLENotifierImpl_send_ATT_ATTWriteRequest(_instance, _instance->BLENotifierImpl_ConnectedHandle_var, _instance->BLENotifierImpl_ReadByteConfigurationHandle_var, AttributeValue);
break;
}
case BLENOTIFIERIMPL_STATES_CONNECTED_WAITFORCOMMAND_STATE:{
BLENotifierImpl_send_Notifications_NotifierReady(_instance);
break;
}
case BLENOTIFIERIMPL_STATES_CONNECTED_SENDCOMMAND_STATE:{
_instance->BLENotifierImpl_BytesToSend_var = _instance->BLENotifierImpl_CommandToSend_var.bytes[0];
_instance->BLENotifierImpl_SendtBytes_var = 0;
if(_instance->BLENotifierImpl_BytesToSend_var > 0) {
;ble_gatt_data_t AttributeValue;
AttributeValue.length = 1;
AttributeValue.bytes[0] = _instance->BLENotifierImpl_CommandToSend_var.bytes[_instance->BLENotifierImpl_SendtBytes_var+1];
BLENotifierImpl_send_ATT_ATTWriteRequest(_instance, _instance->BLENotifierImpl_ConnectedHandle_var, _instance->BLENotifierImpl_WriteByteValueHandle_var, AttributeValue);

} else {
BLENotifierImpl_send_Connecter_Stop(_instance);

}
break;
}
default: break;
}
}

// On Exit Actions:
void BLENotifierImpl_States_OnExit(int state, struct BLENotifierImpl_Instance *_instance) {
switch(state) {
case BLENOTIFIERIMPL_STATES_CONNECTED_STATE:{
BLENotifierImpl_States_OnExit(_instance->BLENotifierImpl_States_Connected_State, _instance);
break;}
case BLENOTIFIERIMPL_STATES_STATE:{
BLENotifierImpl_States_OnExit(_instance->BLENotifierImpl_States_State, _instance);
break;}
case BLENOTIFIERIMPL_STATES_WAITING_STATE:{
break;}
case BLENOTIFIERIMPL_STATES_CONNECTED_SETREADNOTIFICATIONS_STATE:{
break;}
case BLENOTIFIERIMPL_STATES_CONNECTED_WAITFORCOMMAND_STATE:{
break;}
case BLENOTIFIERIMPL_STATES_CONNECTED_SENDCOMMAND_STATE:{
break;}
default: break;
}
}

// Event Handlers for incoming messages:
void BLENotifierImpl_handle_Connecter_Stopped(struct BLENotifierImpl_Instance *_instance) {
if(!(_instance->active)) return;
//Region States
uint8_t BLENotifierImpl_States_State_event_consumed = 0;
if (_instance->BLENotifierImpl_States_State == BLENOTIFIERIMPL_STATES_CONNECTED_STATE) {
//Region Connected
uint8_t BLENotifierImpl_States_Connected_State_event_consumed = 0;
//End Region Connected
//End dsregion Connected
if (BLENotifierImpl_States_State_event_consumed == 0 && 1) {
BLENotifierImpl_States_OnExit(BLENOTIFIERIMPL_STATES_CONNECTED_STATE, _instance);
_instance->BLENotifierImpl_States_State = BLENOTIFIERIMPL_STATES_WAITING_STATE;
BLENotifierImpl_send_Notifications_NotifierFinished(_instance);
BLENotifierImpl_States_OnEntry(BLENOTIFIERIMPL_STATES_WAITING_STATE, _instance);
BLENotifierImpl_States_State_event_consumed = 1;
}
}
//End Region States
//Region Connected
uint8_t BLENotifierImpl_States_Connected_State_event_consumed = 0;
//End Region Connected
//End dsregion States
//Session list: 
}
void BLENotifierImpl_handle_Connecter_Connected(struct BLENotifierImpl_Instance *_instance, uint16_t Handle, uint8_t AddressType, bdaddr_t Address) {
if(!(_instance->active)) return;
//Region States
uint8_t BLENotifierImpl_States_State_event_consumed = 0;
if (_instance->BLENotifierImpl_States_State == BLENOTIFIERIMPL_STATES_WAITING_STATE) {
if (BLENotifierImpl_States_State_event_consumed == 0 && 1) {
BLENotifierImpl_States_OnExit(BLENOTIFIERIMPL_STATES_WAITING_STATE, _instance);
_instance->BLENotifierImpl_States_State = BLENOTIFIERIMPL_STATES_CONNECTED_STATE;
_instance->BLENotifierImpl_ConnectedHandle_var = Handle;
BLENotifierImpl_States_OnEntry(BLENOTIFIERIMPL_STATES_CONNECTED_STATE, _instance);
BLENotifierImpl_States_State_event_consumed = 1;
}
}
//End Region States
//Region Connected
uint8_t BLENotifierImpl_States_Connected_State_event_consumed = 0;
//End Region Connected
//End dsregion States
//Session list: 
}
void BLENotifierImpl_handle_Connecter_Failure(struct BLENotifierImpl_Instance *_instance) {
if(!(_instance->active)) return;
//Region States
uint8_t BLENotifierImpl_States_State_event_consumed = 0;
if (_instance->BLENotifierImpl_States_State == BLENOTIFIERIMPL_STATES_CONNECTED_STATE) {
//Region Connected
uint8_t BLENotifierImpl_States_Connected_State_event_consumed = 0;
//End Region Connected
//End dsregion Connected
if (BLENotifierImpl_States_State_event_consumed == 0 && 1) {
BLENotifierImpl_States_OnExit(BLENOTIFIERIMPL_STATES_CONNECTED_STATE, _instance);
_instance->BLENotifierImpl_States_State = BLENOTIFIERIMPL_STATES_WAITING_STATE;
BLENotifierImpl_send_Notifications_NotifierFinished(_instance);
BLENotifierImpl_States_OnEntry(BLENOTIFIERIMPL_STATES_WAITING_STATE, _instance);
BLENotifierImpl_States_State_event_consumed = 1;
}
}
//End Region States
//Region Connected
uint8_t BLENotifierImpl_States_Connected_State_event_consumed = 0;
//End Region Connected
//End dsregion States
//Session list: 
}
void BLENotifierImpl_handle_Notifications_NotifierReceived(struct BLENotifierImpl_Instance *_instance) {
if(!(_instance->active)) return;
//Region States
uint8_t BLENotifierImpl_States_State_event_consumed = 0;
if (_instance->BLENotifierImpl_States_State == BLENOTIFIERIMPL_STATES_CONNECTED_STATE) {
//Region Connected
uint8_t BLENotifierImpl_States_Connected_State_event_consumed = 0;
if (_instance->BLENotifierImpl_States_Connected_State == BLENOTIFIERIMPL_STATES_CONNECTED_WAITFORCOMMAND_STATE) {
if (BLENotifierImpl_States_Connected_State_event_consumed == 0 && 1) {
BLENotifierImpl_States_OnExit(BLENOTIFIERIMPL_STATES_CONNECTED_WAITFORCOMMAND_STATE, _instance);
_instance->BLENotifierImpl_States_Connected_State = BLENOTIFIERIMPL_STATES_CONNECTED_SENDCOMMAND_STATE;
fprintf(stdout, "[INFO]: Sending notifier received...\n");
_instance->BLENotifierImpl_CommandToSend_var = _instance->BLENotifierImpl_ReceivedCommand_var;
BLENotifierImpl_States_OnEntry(BLENOTIFIERIMPL_STATES_CONNECTED_SENDCOMMAND_STATE, _instance);
BLENotifierImpl_States_Connected_State_event_consumed = 1;
}
}
//End Region Connected
//End dsregion Connected
}
//End Region States
//Region Connected
uint8_t BLENotifierImpl_States_Connected_State_event_consumed = 0;
if (_instance->BLENotifierImpl_States_Connected_State == BLENOTIFIERIMPL_STATES_CONNECTED_WAITFORCOMMAND_STATE) {
if (BLENotifierImpl_States_Connected_State_event_consumed == 0 && 1) {
BLENotifierImpl_States_OnExit(BLENOTIFIERIMPL_STATES_CONNECTED_WAITFORCOMMAND_STATE, _instance);
_instance->BLENotifierImpl_States_Connected_State = BLENOTIFIERIMPL_STATES_CONNECTED_SENDCOMMAND_STATE;
fprintf(stdout, "[INFO]: Sending notifier received...\n");
_instance->BLENotifierImpl_CommandToSend_var = _instance->BLENotifierImpl_ReceivedCommand_var;
BLENotifierImpl_States_OnEntry(BLENOTIFIERIMPL_STATES_CONNECTED_SENDCOMMAND_STATE, _instance);
BLENotifierImpl_States_Connected_State_event_consumed = 1;
}
}
//End Region Connected
//End dsregion States
//Session list: 
}
void BLENotifierImpl_handle_Notifications_NotifierError(struct BLENotifierImpl_Instance *_instance) {
if(!(_instance->active)) return;
//Region States
uint8_t BLENotifierImpl_States_State_event_consumed = 0;
if (_instance->BLENotifierImpl_States_State == BLENOTIFIERIMPL_STATES_CONNECTED_STATE) {
//Region Connected
uint8_t BLENotifierImpl_States_Connected_State_event_consumed = 0;
if (_instance->BLENotifierImpl_States_Connected_State == BLENOTIFIERIMPL_STATES_CONNECTED_WAITFORCOMMAND_STATE) {
if (BLENotifierImpl_States_Connected_State_event_consumed == 0 && 1) {
BLENotifierImpl_States_OnExit(BLENOTIFIERIMPL_STATES_CONNECTED_WAITFORCOMMAND_STATE, _instance);
_instance->BLENotifierImpl_States_Connected_State = BLENOTIFIERIMPL_STATES_CONNECTED_SENDCOMMAND_STATE;
fprintf(stdout, "[INFO]: Sending notifier error...\n");
_instance->BLENotifierImpl_CommandToSend_var = _instance->BLENotifierImpl_ErrorCommand_var;
BLENotifierImpl_States_OnEntry(BLENOTIFIERIMPL_STATES_CONNECTED_SENDCOMMAND_STATE, _instance);
BLENotifierImpl_States_Connected_State_event_consumed = 1;
}
}
//End Region Connected
//End dsregion Connected
}
//End Region States
//Region Connected
uint8_t BLENotifierImpl_States_Connected_State_event_consumed = 0;
if (_instance->BLENotifierImpl_States_Connected_State == BLENOTIFIERIMPL_STATES_CONNECTED_WAITFORCOMMAND_STATE) {
if (BLENotifierImpl_States_Connected_State_event_consumed == 0 && 1) {
BLENotifierImpl_States_OnExit(BLENOTIFIERIMPL_STATES_CONNECTED_WAITFORCOMMAND_STATE, _instance);
_instance->BLENotifierImpl_States_Connected_State = BLENOTIFIERIMPL_STATES_CONNECTED_SENDCOMMAND_STATE;
fprintf(stdout, "[INFO]: Sending notifier error...\n");
_instance->BLENotifierImpl_CommandToSend_var = _instance->BLENotifierImpl_ErrorCommand_var;
BLENotifierImpl_States_OnEntry(BLENOTIFIERIMPL_STATES_CONNECTED_SENDCOMMAND_STATE, _instance);
BLENotifierImpl_States_Connected_State_event_consumed = 1;
}
}
//End Region Connected
//End dsregion States
//Session list: 
}
void BLENotifierImpl_handle_Notifications_NotifierRequest(struct BLENotifierImpl_Instance *_instance) {
if(!(_instance->active)) return;
//Region States
uint8_t BLENotifierImpl_States_State_event_consumed = 0;
if (_instance->BLENotifierImpl_States_State == BLENOTIFIERIMPL_STATES_CONNECTED_STATE) {
//Region Connected
uint8_t BLENotifierImpl_States_Connected_State_event_consumed = 0;
if (_instance->BLENotifierImpl_States_Connected_State == BLENOTIFIERIMPL_STATES_CONNECTED_WAITFORCOMMAND_STATE) {
if (BLENotifierImpl_States_Connected_State_event_consumed == 0 && 1) {
BLENotifierImpl_States_OnExit(BLENOTIFIERIMPL_STATES_CONNECTED_WAITFORCOMMAND_STATE, _instance);
_instance->BLENotifierImpl_States_Connected_State = BLENOTIFIERIMPL_STATES_CONNECTED_SENDCOMMAND_STATE;
fprintf(stdout, "[INFO]: Sending notifier request...\n");
_instance->BLENotifierImpl_CommandToSend_var = _instance->BLENotifierImpl_RequestCommand_var;
BLENotifierImpl_States_OnEntry(BLENOTIFIERIMPL_STATES_CONNECTED_SENDCOMMAND_STATE, _instance);
BLENotifierImpl_States_Connected_State_event_consumed = 1;
}
}
//End Region Connected
//End dsregion Connected
}
//End Region States
//Region Connected
uint8_t BLENotifierImpl_States_Connected_State_event_consumed = 0;
if (_instance->BLENotifierImpl_States_Connected_State == BLENOTIFIERIMPL_STATES_CONNECTED_WAITFORCOMMAND_STATE) {
if (BLENotifierImpl_States_Connected_State_event_consumed == 0 && 1) {
BLENotifierImpl_States_OnExit(BLENOTIFIERIMPL_STATES_CONNECTED_WAITFORCOMMAND_STATE, _instance);
_instance->BLENotifierImpl_States_Connected_State = BLENOTIFIERIMPL_STATES_CONNECTED_SENDCOMMAND_STATE;
fprintf(stdout, "[INFO]: Sending notifier request...\n");
_instance->BLENotifierImpl_CommandToSend_var = _instance->BLENotifierImpl_RequestCommand_var;
BLENotifierImpl_States_OnEntry(BLENOTIFIERIMPL_STATES_CONNECTED_SENDCOMMAND_STATE, _instance);
BLENotifierImpl_States_Connected_State_event_consumed = 1;
}
}
//End Region Connected
//End dsregion States
//Session list: 
}
void BLENotifierImpl_handle_Notifications_NotifierConnect(struct BLENotifierImpl_Instance *_instance, uint8_t AddressType, bdaddr_t Address) {
if(!(_instance->active)) return;
//Region States
uint8_t BLENotifierImpl_States_State_event_consumed = 0;
if (_instance->BLENotifierImpl_States_State == BLENOTIFIERIMPL_STATES_WAITING_STATE) {
if (BLENotifierImpl_States_State_event_consumed == 0 && 1) {
BLENotifierImpl_send_Connecter_ConnectToU(_instance, AddressType, Address);
BLENotifierImpl_States_State_event_consumed = 1;
}
}
//End Region States
//Region Connected
uint8_t BLENotifierImpl_States_Connected_State_event_consumed = 0;
//End Region Connected
//End dsregion States
//Session list: 
}
void BLENotifierImpl_handle_Notifications_NotifierStored(struct BLENotifierImpl_Instance *_instance) {
if(!(_instance->active)) return;
//Region States
uint8_t BLENotifierImpl_States_State_event_consumed = 0;
if (_instance->BLENotifierImpl_States_State == BLENOTIFIERIMPL_STATES_CONNECTED_STATE) {
//Region Connected
uint8_t BLENotifierImpl_States_Connected_State_event_consumed = 0;
if (_instance->BLENotifierImpl_States_Connected_State == BLENOTIFIERIMPL_STATES_CONNECTED_WAITFORCOMMAND_STATE) {
if (BLENotifierImpl_States_Connected_State_event_consumed == 0 && 1) {
BLENotifierImpl_States_OnExit(BLENOTIFIERIMPL_STATES_CONNECTED_WAITFORCOMMAND_STATE, _instance);
_instance->BLENotifierImpl_States_Connected_State = BLENOTIFIERIMPL_STATES_CONNECTED_SENDCOMMAND_STATE;
fprintf(stdout, "[INFO]: Sending notifier stored...\n");
_instance->BLENotifierImpl_CommandToSend_var = _instance->BLENotifierImpl_StoredCommand_var;
BLENotifierImpl_States_OnEntry(BLENOTIFIERIMPL_STATES_CONNECTED_SENDCOMMAND_STATE, _instance);
BLENotifierImpl_States_Connected_State_event_consumed = 1;
}
}
//End Region Connected
//End dsregion Connected
}
//End Region States
//Region Connected
uint8_t BLENotifierImpl_States_Connected_State_event_consumed = 0;
if (_instance->BLENotifierImpl_States_Connected_State == BLENOTIFIERIMPL_STATES_CONNECTED_WAITFORCOMMAND_STATE) {
if (BLENotifierImpl_States_Connected_State_event_consumed == 0 && 1) {
BLENotifierImpl_States_OnExit(BLENOTIFIERIMPL_STATES_CONNECTED_WAITFORCOMMAND_STATE, _instance);
_instance->BLENotifierImpl_States_Connected_State = BLENOTIFIERIMPL_STATES_CONNECTED_SENDCOMMAND_STATE;
fprintf(stdout, "[INFO]: Sending notifier stored...\n");
_instance->BLENotifierImpl_CommandToSend_var = _instance->BLENotifierImpl_StoredCommand_var;
BLENotifierImpl_States_OnEntry(BLENOTIFIERIMPL_STATES_CONNECTED_SENDCOMMAND_STATE, _instance);
BLENotifierImpl_States_Connected_State_event_consumed = 1;
}
}
//End Region Connected
//End dsregion States
//Session list: 
}
void BLENotifierImpl_handle_ATT_ATTWriteError(struct BLENotifierImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error) {
if(!(_instance->active)) return;
//Region States
uint8_t BLENotifierImpl_States_State_event_consumed = 0;
if (_instance->BLENotifierImpl_States_State == BLENOTIFIERIMPL_STATES_CONNECTED_STATE) {
//Region Connected
uint8_t BLENotifierImpl_States_Connected_State_event_consumed = 0;
//End Region Connected
//End dsregion Connected
if (BLENotifierImpl_States_State_event_consumed == 0 && (ConnectionHandle == _instance->BLENotifierImpl_ConnectedHandle_var)) {
fprintf(stdout, "[ERROR]: Error while writing!\n");
BLENotifierImpl_send_Connecter_Stop(_instance);
BLENotifierImpl_States_State_event_consumed = 1;
}
}
//End Region States
//Region Connected
uint8_t BLENotifierImpl_States_Connected_State_event_consumed = 0;
//End Region Connected
//End dsregion States
//Session list: 
}
void BLENotifierImpl_handle_ATT_ATTHandleValueNotification(struct BLENotifierImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, ble_gatt_data_t AttributeValue) {
if(!(_instance->active)) return;
//Region States
uint8_t BLENotifierImpl_States_State_event_consumed = 0;
if (_instance->BLENotifierImpl_States_State == BLENOTIFIERIMPL_STATES_CONNECTED_STATE) {
//Region Connected
uint8_t BLENotifierImpl_States_Connected_State_event_consumed = 0;
//End Region Connected
//End dsregion Connected
if (BLENotifierImpl_States_State_event_consumed == 0 && (ConnectionHandle == _instance->BLENotifierImpl_ConnectedHandle_var && AttributeHandle == _instance->BLENotifierImpl_ReadByteValueHandle_var)) {
BLENotifierImpl_States_State_event_consumed = 1;
}
}
//End Region States
//Region Connected
uint8_t BLENotifierImpl_States_Connected_State_event_consumed = 0;
//End Region Connected
//End dsregion States
//Session list: 
}
void BLENotifierImpl_handle_ATT_ATTWriteResponse(struct BLENotifierImpl_Instance *_instance, uint16_t ConnectionHandle) {
if(!(_instance->active)) return;
//Region States
uint8_t BLENotifierImpl_States_State_event_consumed = 0;
if (_instance->BLENotifierImpl_States_State == BLENOTIFIERIMPL_STATES_CONNECTED_STATE) {
//Region Connected
uint8_t BLENotifierImpl_States_Connected_State_event_consumed = 0;
if (_instance->BLENotifierImpl_States_Connected_State == BLENOTIFIERIMPL_STATES_CONNECTED_SETREADNOTIFICATIONS_STATE) {
if (BLENotifierImpl_States_Connected_State_event_consumed == 0 && (ConnectionHandle == _instance->BLENotifierImpl_ConnectedHandle_var)) {
BLENotifierImpl_States_OnExit(BLENOTIFIERIMPL_STATES_CONNECTED_SETREADNOTIFICATIONS_STATE, _instance);
_instance->BLENotifierImpl_States_Connected_State = BLENOTIFIERIMPL_STATES_CONNECTED_WAITFORCOMMAND_STATE;
BLENotifierImpl_States_OnEntry(BLENOTIFIERIMPL_STATES_CONNECTED_WAITFORCOMMAND_STATE, _instance);
BLENotifierImpl_States_Connected_State_event_consumed = 1;
}
}
else if (_instance->BLENotifierImpl_States_Connected_State == BLENOTIFIERIMPL_STATES_CONNECTED_SENDCOMMAND_STATE) {
if (BLENotifierImpl_States_Connected_State_event_consumed == 0 && (ConnectionHandle == _instance->BLENotifierImpl_ConnectedHandle_var)) {
_instance->BLENotifierImpl_SendtBytes_var = _instance->BLENotifierImpl_SendtBytes_var + 1;
if(_instance->BLENotifierImpl_SendtBytes_var <= _instance->BLENotifierImpl_BytesToSend_var) {
;ble_gatt_data_t AttributeValue;
AttributeValue.length = 1;
AttributeValue.bytes[0] = _instance->BLENotifierImpl_CommandToSend_var.bytes[_instance->BLENotifierImpl_SendtBytes_var+1];
BLENotifierImpl_send_ATT_ATTWriteRequest(_instance, _instance->BLENotifierImpl_ConnectedHandle_var, _instance->BLENotifierImpl_WriteByteValueHandle_var, AttributeValue);

} else {
BLENotifierImpl_send_Connecter_Stop(_instance);

}
BLENotifierImpl_States_Connected_State_event_consumed = 1;
}
}
//End Region Connected
//End dsregion Connected
}
//End Region States
//Region Connected
uint8_t BLENotifierImpl_States_Connected_State_event_consumed = 0;
if (_instance->BLENotifierImpl_States_Connected_State == BLENOTIFIERIMPL_STATES_CONNECTED_SETREADNOTIFICATIONS_STATE) {
if (BLENotifierImpl_States_Connected_State_event_consumed == 0 && (ConnectionHandle == _instance->BLENotifierImpl_ConnectedHandle_var)) {
BLENotifierImpl_States_OnExit(BLENOTIFIERIMPL_STATES_CONNECTED_SETREADNOTIFICATIONS_STATE, _instance);
_instance->BLENotifierImpl_States_Connected_State = BLENOTIFIERIMPL_STATES_CONNECTED_WAITFORCOMMAND_STATE;
BLENotifierImpl_States_OnEntry(BLENOTIFIERIMPL_STATES_CONNECTED_WAITFORCOMMAND_STATE, _instance);
BLENotifierImpl_States_Connected_State_event_consumed = 1;
}
}
else if (_instance->BLENotifierImpl_States_Connected_State == BLENOTIFIERIMPL_STATES_CONNECTED_SENDCOMMAND_STATE) {
if (BLENotifierImpl_States_Connected_State_event_consumed == 0 && (ConnectionHandle == _instance->BLENotifierImpl_ConnectedHandle_var)) {
_instance->BLENotifierImpl_SendtBytes_var = _instance->BLENotifierImpl_SendtBytes_var + 1;
if(_instance->BLENotifierImpl_SendtBytes_var <= _instance->BLENotifierImpl_BytesToSend_var) {
;ble_gatt_data_t AttributeValue;
AttributeValue.length = 1;
AttributeValue.bytes[0] = _instance->BLENotifierImpl_CommandToSend_var.bytes[_instance->BLENotifierImpl_SendtBytes_var+1];
BLENotifierImpl_send_ATT_ATTWriteRequest(_instance, _instance->BLENotifierImpl_ConnectedHandle_var, _instance->BLENotifierImpl_WriteByteValueHandle_var, AttributeValue);

} else {
BLENotifierImpl_send_Connecter_Stop(_instance);

}
BLENotifierImpl_States_Connected_State_event_consumed = 1;
}
}
//End Region Connected
//End dsregion States
//Session list: 
}

// Observers for outgoing messages:
void (*external_BLENotifierImpl_send_Notifications_NotifierReady_listener)(struct BLENotifierImpl_Instance *)= 0x0;
void (*BLENotifierImpl_send_Notifications_NotifierReady_listener)(struct BLENotifierImpl_Instance *)= 0x0;
void register_external_BLENotifierImpl_send_Notifications_NotifierReady_listener(void (*_listener)(struct BLENotifierImpl_Instance *)){
external_BLENotifierImpl_send_Notifications_NotifierReady_listener = _listener;
}
void register_BLENotifierImpl_send_Notifications_NotifierReady_listener(void (*_listener)(struct BLENotifierImpl_Instance *)){
BLENotifierImpl_send_Notifications_NotifierReady_listener = _listener;
}
void BLENotifierImpl_send_Notifications_NotifierReady(struct BLENotifierImpl_Instance *_instance){
if (BLENotifierImpl_send_Notifications_NotifierReady_listener != 0x0) BLENotifierImpl_send_Notifications_NotifierReady_listener(_instance);
if (external_BLENotifierImpl_send_Notifications_NotifierReady_listener != 0x0) external_BLENotifierImpl_send_Notifications_NotifierReady_listener(_instance);
;
}
void (*external_BLENotifierImpl_send_Notifications_NotifierFinished_listener)(struct BLENotifierImpl_Instance *)= 0x0;
void (*BLENotifierImpl_send_Notifications_NotifierFinished_listener)(struct BLENotifierImpl_Instance *)= 0x0;
void register_external_BLENotifierImpl_send_Notifications_NotifierFinished_listener(void (*_listener)(struct BLENotifierImpl_Instance *)){
external_BLENotifierImpl_send_Notifications_NotifierFinished_listener = _listener;
}
void register_BLENotifierImpl_send_Notifications_NotifierFinished_listener(void (*_listener)(struct BLENotifierImpl_Instance *)){
BLENotifierImpl_send_Notifications_NotifierFinished_listener = _listener;
}
void BLENotifierImpl_send_Notifications_NotifierFinished(struct BLENotifierImpl_Instance *_instance){
if (BLENotifierImpl_send_Notifications_NotifierFinished_listener != 0x0) BLENotifierImpl_send_Notifications_NotifierFinished_listener(_instance);
if (external_BLENotifierImpl_send_Notifications_NotifierFinished_listener != 0x0) external_BLENotifierImpl_send_Notifications_NotifierFinished_listener(_instance);
;
}
void (*external_BLENotifierImpl_send_Connecter_Connect_listener)(struct BLENotifierImpl_Instance *)= 0x0;
void (*BLENotifierImpl_send_Connecter_Connect_listener)(struct BLENotifierImpl_Instance *)= 0x0;
void register_external_BLENotifierImpl_send_Connecter_Connect_listener(void (*_listener)(struct BLENotifierImpl_Instance *)){
external_BLENotifierImpl_send_Connecter_Connect_listener = _listener;
}
void register_BLENotifierImpl_send_Connecter_Connect_listener(void (*_listener)(struct BLENotifierImpl_Instance *)){
BLENotifierImpl_send_Connecter_Connect_listener = _listener;
}
void BLENotifierImpl_send_Connecter_Connect(struct BLENotifierImpl_Instance *_instance){
if (BLENotifierImpl_send_Connecter_Connect_listener != 0x0) BLENotifierImpl_send_Connecter_Connect_listener(_instance);
if (external_BLENotifierImpl_send_Connecter_Connect_listener != 0x0) external_BLENotifierImpl_send_Connecter_Connect_listener(_instance);
;
}
void (*external_BLENotifierImpl_send_Connecter_ConnectTo_listener)(struct BLENotifierImpl_Instance *, uint8_t, bdaddr_t, ble_random_number_t, uint16_t, ble_random_part_t)= 0x0;
void (*BLENotifierImpl_send_Connecter_ConnectTo_listener)(struct BLENotifierImpl_Instance *, uint8_t, bdaddr_t, ble_random_number_t, uint16_t, ble_random_part_t)= 0x0;
void register_external_BLENotifierImpl_send_Connecter_ConnectTo_listener(void (*_listener)(struct BLENotifierImpl_Instance *, uint8_t, bdaddr_t, ble_random_number_t, uint16_t, ble_random_part_t)){
external_BLENotifierImpl_send_Connecter_ConnectTo_listener = _listener;
}
void register_BLENotifierImpl_send_Connecter_ConnectTo_listener(void (*_listener)(struct BLENotifierImpl_Instance *, uint8_t, bdaddr_t, ble_random_number_t, uint16_t, ble_random_part_t)){
BLENotifierImpl_send_Connecter_ConnectTo_listener = _listener;
}
void BLENotifierImpl_send_Connecter_ConnectTo(struct BLENotifierImpl_Instance *_instance, uint8_t AddressType, bdaddr_t Address, ble_random_number_t LongTermKey, uint16_t EncryptedDiversifier, ble_random_part_t RandomNumber){
if (BLENotifierImpl_send_Connecter_ConnectTo_listener != 0x0) BLENotifierImpl_send_Connecter_ConnectTo_listener(_instance, AddressType, Address, LongTermKey, EncryptedDiversifier, RandomNumber);
if (external_BLENotifierImpl_send_Connecter_ConnectTo_listener != 0x0) external_BLENotifierImpl_send_Connecter_ConnectTo_listener(_instance, AddressType, Address, LongTermKey, EncryptedDiversifier, RandomNumber);
;
}
void (*external_BLENotifierImpl_send_Connecter_ConnectToU_listener)(struct BLENotifierImpl_Instance *, uint8_t, bdaddr_t)= 0x0;
void (*BLENotifierImpl_send_Connecter_ConnectToU_listener)(struct BLENotifierImpl_Instance *, uint8_t, bdaddr_t)= 0x0;
void register_external_BLENotifierImpl_send_Connecter_ConnectToU_listener(void (*_listener)(struct BLENotifierImpl_Instance *, uint8_t, bdaddr_t)){
external_BLENotifierImpl_send_Connecter_ConnectToU_listener = _listener;
}
void register_BLENotifierImpl_send_Connecter_ConnectToU_listener(void (*_listener)(struct BLENotifierImpl_Instance *, uint8_t, bdaddr_t)){
BLENotifierImpl_send_Connecter_ConnectToU_listener = _listener;
}
void BLENotifierImpl_send_Connecter_ConnectToU(struct BLENotifierImpl_Instance *_instance, uint8_t AddressType, bdaddr_t Address){
if (BLENotifierImpl_send_Connecter_ConnectToU_listener != 0x0) BLENotifierImpl_send_Connecter_ConnectToU_listener(_instance, AddressType, Address);
if (external_BLENotifierImpl_send_Connecter_ConnectToU_listener != 0x0) external_BLENotifierImpl_send_Connecter_ConnectToU_listener(_instance, AddressType, Address);
;
}
void (*external_BLENotifierImpl_send_Connecter_Stop_listener)(struct BLENotifierImpl_Instance *)= 0x0;
void (*BLENotifierImpl_send_Connecter_Stop_listener)(struct BLENotifierImpl_Instance *)= 0x0;
void register_external_BLENotifierImpl_send_Connecter_Stop_listener(void (*_listener)(struct BLENotifierImpl_Instance *)){
external_BLENotifierImpl_send_Connecter_Stop_listener = _listener;
}
void register_BLENotifierImpl_send_Connecter_Stop_listener(void (*_listener)(struct BLENotifierImpl_Instance *)){
BLENotifierImpl_send_Connecter_Stop_listener = _listener;
}
void BLENotifierImpl_send_Connecter_Stop(struct BLENotifierImpl_Instance *_instance){
if (BLENotifierImpl_send_Connecter_Stop_listener != 0x0) BLENotifierImpl_send_Connecter_Stop_listener(_instance);
if (external_BLENotifierImpl_send_Connecter_Stop_listener != 0x0) external_BLENotifierImpl_send_Connecter_Stop_listener(_instance);
;
}
void (*external_BLENotifierImpl_send_Connecter_Encrypt_listener)(struct BLENotifierImpl_Instance *)= 0x0;
void (*BLENotifierImpl_send_Connecter_Encrypt_listener)(struct BLENotifierImpl_Instance *)= 0x0;
void register_external_BLENotifierImpl_send_Connecter_Encrypt_listener(void (*_listener)(struct BLENotifierImpl_Instance *)){
external_BLENotifierImpl_send_Connecter_Encrypt_listener = _listener;
}
void register_BLENotifierImpl_send_Connecter_Encrypt_listener(void (*_listener)(struct BLENotifierImpl_Instance *)){
BLENotifierImpl_send_Connecter_Encrypt_listener = _listener;
}
void BLENotifierImpl_send_Connecter_Encrypt(struct BLENotifierImpl_Instance *_instance){
if (BLENotifierImpl_send_Connecter_Encrypt_listener != 0x0) BLENotifierImpl_send_Connecter_Encrypt_listener(_instance);
if (external_BLENotifierImpl_send_Connecter_Encrypt_listener != 0x0) external_BLENotifierImpl_send_Connecter_Encrypt_listener(_instance);
;
}
void (*external_BLENotifierImpl_send_ATT_ATTFindInformationRequest_listener)(struct BLENotifierImpl_Instance *, uint16_t, uint16_t, uint16_t)= 0x0;
void (*BLENotifierImpl_send_ATT_ATTFindInformationRequest_listener)(struct BLENotifierImpl_Instance *, uint16_t, uint16_t, uint16_t)= 0x0;
void register_external_BLENotifierImpl_send_ATT_ATTFindInformationRequest_listener(void (*_listener)(struct BLENotifierImpl_Instance *, uint16_t, uint16_t, uint16_t)){
external_BLENotifierImpl_send_ATT_ATTFindInformationRequest_listener = _listener;
}
void register_BLENotifierImpl_send_ATT_ATTFindInformationRequest_listener(void (*_listener)(struct BLENotifierImpl_Instance *, uint16_t, uint16_t, uint16_t)){
BLENotifierImpl_send_ATT_ATTFindInformationRequest_listener = _listener;
}
void BLENotifierImpl_send_ATT_ATTFindInformationRequest(struct BLENotifierImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t StartingHandle, uint16_t EndingHandle){
if (BLENotifierImpl_send_ATT_ATTFindInformationRequest_listener != 0x0) BLENotifierImpl_send_ATT_ATTFindInformationRequest_listener(_instance, ConnectionHandle, StartingHandle, EndingHandle);
if (external_BLENotifierImpl_send_ATT_ATTFindInformationRequest_listener != 0x0) external_BLENotifierImpl_send_ATT_ATTFindInformationRequest_listener(_instance, ConnectionHandle, StartingHandle, EndingHandle);
;
}
void (*external_BLENotifierImpl_send_ATT_ATTFindInformationResponse_listener)(struct BLENotifierImpl_Instance *, uint16_t, uint8_t, ble_gatt_data_t)= 0x0;
void (*BLENotifierImpl_send_ATT_ATTFindInformationResponse_listener)(struct BLENotifierImpl_Instance *, uint16_t, uint8_t, ble_gatt_data_t)= 0x0;
void register_external_BLENotifierImpl_send_ATT_ATTFindInformationResponse_listener(void (*_listener)(struct BLENotifierImpl_Instance *, uint16_t, uint8_t, ble_gatt_data_t)){
external_BLENotifierImpl_send_ATT_ATTFindInformationResponse_listener = _listener;
}
void register_BLENotifierImpl_send_ATT_ATTFindInformationResponse_listener(void (*_listener)(struct BLENotifierImpl_Instance *, uint16_t, uint8_t, ble_gatt_data_t)){
BLENotifierImpl_send_ATT_ATTFindInformationResponse_listener = _listener;
}
void BLENotifierImpl_send_ATT_ATTFindInformationResponse(struct BLENotifierImpl_Instance *_instance, uint16_t ConnectionHandle, uint8_t Format, ble_gatt_data_t InformationData){
if (BLENotifierImpl_send_ATT_ATTFindInformationResponse_listener != 0x0) BLENotifierImpl_send_ATT_ATTFindInformationResponse_listener(_instance, ConnectionHandle, Format, InformationData);
if (external_BLENotifierImpl_send_ATT_ATTFindInformationResponse_listener != 0x0) external_BLENotifierImpl_send_ATT_ATTFindInformationResponse_listener(_instance, ConnectionHandle, Format, InformationData);
;
}
void (*external_BLENotifierImpl_send_ATT_ATTFindInformationError_listener)(struct BLENotifierImpl_Instance *, uint16_t, uint16_t, uint8_t)= 0x0;
void (*BLENotifierImpl_send_ATT_ATTFindInformationError_listener)(struct BLENotifierImpl_Instance *, uint16_t, uint16_t, uint8_t)= 0x0;
void register_external_BLENotifierImpl_send_ATT_ATTFindInformationError_listener(void (*_listener)(struct BLENotifierImpl_Instance *, uint16_t, uint16_t, uint8_t)){
external_BLENotifierImpl_send_ATT_ATTFindInformationError_listener = _listener;
}
void register_BLENotifierImpl_send_ATT_ATTFindInformationError_listener(void (*_listener)(struct BLENotifierImpl_Instance *, uint16_t, uint16_t, uint8_t)){
BLENotifierImpl_send_ATT_ATTFindInformationError_listener = _listener;
}
void BLENotifierImpl_send_ATT_ATTFindInformationError(struct BLENotifierImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error){
if (BLENotifierImpl_send_ATT_ATTFindInformationError_listener != 0x0) BLENotifierImpl_send_ATT_ATTFindInformationError_listener(_instance, ConnectionHandle, AttributeHandle, Error);
if (external_BLENotifierImpl_send_ATT_ATTFindInformationError_listener != 0x0) external_BLENotifierImpl_send_ATT_ATTFindInformationError_listener(_instance, ConnectionHandle, AttributeHandle, Error);
;
}
void (*external_BLENotifierImpl_send_ATT_ATTReadByTypeRequest_listener)(struct BLENotifierImpl_Instance *, uint16_t, uint16_t, uint16_t, ble_uuid_t)= 0x0;
void (*BLENotifierImpl_send_ATT_ATTReadByTypeRequest_listener)(struct BLENotifierImpl_Instance *, uint16_t, uint16_t, uint16_t, ble_uuid_t)= 0x0;
void register_external_BLENotifierImpl_send_ATT_ATTReadByTypeRequest_listener(void (*_listener)(struct BLENotifierImpl_Instance *, uint16_t, uint16_t, uint16_t, ble_uuid_t)){
external_BLENotifierImpl_send_ATT_ATTReadByTypeRequest_listener = _listener;
}
void register_BLENotifierImpl_send_ATT_ATTReadByTypeRequest_listener(void (*_listener)(struct BLENotifierImpl_Instance *, uint16_t, uint16_t, uint16_t, ble_uuid_t)){
BLENotifierImpl_send_ATT_ATTReadByTypeRequest_listener = _listener;
}
void BLENotifierImpl_send_ATT_ATTReadByTypeRequest(struct BLENotifierImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t StartingHandle, uint16_t EndingHandle, ble_uuid_t AttributeType){
if (BLENotifierImpl_send_ATT_ATTReadByTypeRequest_listener != 0x0) BLENotifierImpl_send_ATT_ATTReadByTypeRequest_listener(_instance, ConnectionHandle, StartingHandle, EndingHandle, AttributeType);
if (external_BLENotifierImpl_send_ATT_ATTReadByTypeRequest_listener != 0x0) external_BLENotifierImpl_send_ATT_ATTReadByTypeRequest_listener(_instance, ConnectionHandle, StartingHandle, EndingHandle, AttributeType);
;
}
void (*external_BLENotifierImpl_send_ATT_ATTReadByTypeResponse_listener)(struct BLENotifierImpl_Instance *, uint16_t, uint8_t, ble_gatt_data_t)= 0x0;
void (*BLENotifierImpl_send_ATT_ATTReadByTypeResponse_listener)(struct BLENotifierImpl_Instance *, uint16_t, uint8_t, ble_gatt_data_t)= 0x0;
void register_external_BLENotifierImpl_send_ATT_ATTReadByTypeResponse_listener(void (*_listener)(struct BLENotifierImpl_Instance *, uint16_t, uint8_t, ble_gatt_data_t)){
external_BLENotifierImpl_send_ATT_ATTReadByTypeResponse_listener = _listener;
}
void register_BLENotifierImpl_send_ATT_ATTReadByTypeResponse_listener(void (*_listener)(struct BLENotifierImpl_Instance *, uint16_t, uint8_t, ble_gatt_data_t)){
BLENotifierImpl_send_ATT_ATTReadByTypeResponse_listener = _listener;
}
void BLENotifierImpl_send_ATT_ATTReadByTypeResponse(struct BLENotifierImpl_Instance *_instance, uint16_t ConnectionHandle, uint8_t Length, ble_gatt_data_t AttributeDataList){
if (BLENotifierImpl_send_ATT_ATTReadByTypeResponse_listener != 0x0) BLENotifierImpl_send_ATT_ATTReadByTypeResponse_listener(_instance, ConnectionHandle, Length, AttributeDataList);
if (external_BLENotifierImpl_send_ATT_ATTReadByTypeResponse_listener != 0x0) external_BLENotifierImpl_send_ATT_ATTReadByTypeResponse_listener(_instance, ConnectionHandle, Length, AttributeDataList);
;
}
void (*external_BLENotifierImpl_send_ATT_ATTReadByTypeError_listener)(struct BLENotifierImpl_Instance *, uint16_t, uint16_t, uint8_t)= 0x0;
void (*BLENotifierImpl_send_ATT_ATTReadByTypeError_listener)(struct BLENotifierImpl_Instance *, uint16_t, uint16_t, uint8_t)= 0x0;
void register_external_BLENotifierImpl_send_ATT_ATTReadByTypeError_listener(void (*_listener)(struct BLENotifierImpl_Instance *, uint16_t, uint16_t, uint8_t)){
external_BLENotifierImpl_send_ATT_ATTReadByTypeError_listener = _listener;
}
void register_BLENotifierImpl_send_ATT_ATTReadByTypeError_listener(void (*_listener)(struct BLENotifierImpl_Instance *, uint16_t, uint16_t, uint8_t)){
BLENotifierImpl_send_ATT_ATTReadByTypeError_listener = _listener;
}
void BLENotifierImpl_send_ATT_ATTReadByTypeError(struct BLENotifierImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error){
if (BLENotifierImpl_send_ATT_ATTReadByTypeError_listener != 0x0) BLENotifierImpl_send_ATT_ATTReadByTypeError_listener(_instance, ConnectionHandle, AttributeHandle, Error);
if (external_BLENotifierImpl_send_ATT_ATTReadByTypeError_listener != 0x0) external_BLENotifierImpl_send_ATT_ATTReadByTypeError_listener(_instance, ConnectionHandle, AttributeHandle, Error);
;
}
void (*external_BLENotifierImpl_send_ATT_ATTReadRequest_listener)(struct BLENotifierImpl_Instance *, uint16_t, uint16_t)= 0x0;
void (*BLENotifierImpl_send_ATT_ATTReadRequest_listener)(struct BLENotifierImpl_Instance *, uint16_t, uint16_t)= 0x0;
void register_external_BLENotifierImpl_send_ATT_ATTReadRequest_listener(void (*_listener)(struct BLENotifierImpl_Instance *, uint16_t, uint16_t)){
external_BLENotifierImpl_send_ATT_ATTReadRequest_listener = _listener;
}
void register_BLENotifierImpl_send_ATT_ATTReadRequest_listener(void (*_listener)(struct BLENotifierImpl_Instance *, uint16_t, uint16_t)){
BLENotifierImpl_send_ATT_ATTReadRequest_listener = _listener;
}
void BLENotifierImpl_send_ATT_ATTReadRequest(struct BLENotifierImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle){
if (BLENotifierImpl_send_ATT_ATTReadRequest_listener != 0x0) BLENotifierImpl_send_ATT_ATTReadRequest_listener(_instance, ConnectionHandle, AttributeHandle);
if (external_BLENotifierImpl_send_ATT_ATTReadRequest_listener != 0x0) external_BLENotifierImpl_send_ATT_ATTReadRequest_listener(_instance, ConnectionHandle, AttributeHandle);
;
}
void (*external_BLENotifierImpl_send_ATT_ATTReadResponse_listener)(struct BLENotifierImpl_Instance *, uint16_t, ble_gatt_data_t)= 0x0;
void (*BLENotifierImpl_send_ATT_ATTReadResponse_listener)(struct BLENotifierImpl_Instance *, uint16_t, ble_gatt_data_t)= 0x0;
void register_external_BLENotifierImpl_send_ATT_ATTReadResponse_listener(void (*_listener)(struct BLENotifierImpl_Instance *, uint16_t, ble_gatt_data_t)){
external_BLENotifierImpl_send_ATT_ATTReadResponse_listener = _listener;
}
void register_BLENotifierImpl_send_ATT_ATTReadResponse_listener(void (*_listener)(struct BLENotifierImpl_Instance *, uint16_t, ble_gatt_data_t)){
BLENotifierImpl_send_ATT_ATTReadResponse_listener = _listener;
}
void BLENotifierImpl_send_ATT_ATTReadResponse(struct BLENotifierImpl_Instance *_instance, uint16_t ConnectionHandle, ble_gatt_data_t AttributeValue){
if (BLENotifierImpl_send_ATT_ATTReadResponse_listener != 0x0) BLENotifierImpl_send_ATT_ATTReadResponse_listener(_instance, ConnectionHandle, AttributeValue);
if (external_BLENotifierImpl_send_ATT_ATTReadResponse_listener != 0x0) external_BLENotifierImpl_send_ATT_ATTReadResponse_listener(_instance, ConnectionHandle, AttributeValue);
;
}
void (*external_BLENotifierImpl_send_ATT_ATTReadError_listener)(struct BLENotifierImpl_Instance *, uint16_t, uint16_t, uint8_t)= 0x0;
void (*BLENotifierImpl_send_ATT_ATTReadError_listener)(struct BLENotifierImpl_Instance *, uint16_t, uint16_t, uint8_t)= 0x0;
void register_external_BLENotifierImpl_send_ATT_ATTReadError_listener(void (*_listener)(struct BLENotifierImpl_Instance *, uint16_t, uint16_t, uint8_t)){
external_BLENotifierImpl_send_ATT_ATTReadError_listener = _listener;
}
void register_BLENotifierImpl_send_ATT_ATTReadError_listener(void (*_listener)(struct BLENotifierImpl_Instance *, uint16_t, uint16_t, uint8_t)){
BLENotifierImpl_send_ATT_ATTReadError_listener = _listener;
}
void BLENotifierImpl_send_ATT_ATTReadError(struct BLENotifierImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error){
if (BLENotifierImpl_send_ATT_ATTReadError_listener != 0x0) BLENotifierImpl_send_ATT_ATTReadError_listener(_instance, ConnectionHandle, AttributeHandle, Error);
if (external_BLENotifierImpl_send_ATT_ATTReadError_listener != 0x0) external_BLENotifierImpl_send_ATT_ATTReadError_listener(_instance, ConnectionHandle, AttributeHandle, Error);
;
}
void (*external_BLENotifierImpl_send_ATT_ATTReadByGroupTypeRequest_listener)(struct BLENotifierImpl_Instance *, uint16_t, uint16_t, uint16_t, ble_uuid_t)= 0x0;
void (*BLENotifierImpl_send_ATT_ATTReadByGroupTypeRequest_listener)(struct BLENotifierImpl_Instance *, uint16_t, uint16_t, uint16_t, ble_uuid_t)= 0x0;
void register_external_BLENotifierImpl_send_ATT_ATTReadByGroupTypeRequest_listener(void (*_listener)(struct BLENotifierImpl_Instance *, uint16_t, uint16_t, uint16_t, ble_uuid_t)){
external_BLENotifierImpl_send_ATT_ATTReadByGroupTypeRequest_listener = _listener;
}
void register_BLENotifierImpl_send_ATT_ATTReadByGroupTypeRequest_listener(void (*_listener)(struct BLENotifierImpl_Instance *, uint16_t, uint16_t, uint16_t, ble_uuid_t)){
BLENotifierImpl_send_ATT_ATTReadByGroupTypeRequest_listener = _listener;
}
void BLENotifierImpl_send_ATT_ATTReadByGroupTypeRequest(struct BLENotifierImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t StartingHandle, uint16_t EndingHandle, ble_uuid_t AttributeGroupType){
if (BLENotifierImpl_send_ATT_ATTReadByGroupTypeRequest_listener != 0x0) BLENotifierImpl_send_ATT_ATTReadByGroupTypeRequest_listener(_instance, ConnectionHandle, StartingHandle, EndingHandle, AttributeGroupType);
if (external_BLENotifierImpl_send_ATT_ATTReadByGroupTypeRequest_listener != 0x0) external_BLENotifierImpl_send_ATT_ATTReadByGroupTypeRequest_listener(_instance, ConnectionHandle, StartingHandle, EndingHandle, AttributeGroupType);
;
}
void (*external_BLENotifierImpl_send_ATT_ATTReadByGroupTypeResponse_listener)(struct BLENotifierImpl_Instance *, uint16_t, uint8_t, ble_gatt_data_t)= 0x0;
void (*BLENotifierImpl_send_ATT_ATTReadByGroupTypeResponse_listener)(struct BLENotifierImpl_Instance *, uint16_t, uint8_t, ble_gatt_data_t)= 0x0;
void register_external_BLENotifierImpl_send_ATT_ATTReadByGroupTypeResponse_listener(void (*_listener)(struct BLENotifierImpl_Instance *, uint16_t, uint8_t, ble_gatt_data_t)){
external_BLENotifierImpl_send_ATT_ATTReadByGroupTypeResponse_listener = _listener;
}
void register_BLENotifierImpl_send_ATT_ATTReadByGroupTypeResponse_listener(void (*_listener)(struct BLENotifierImpl_Instance *, uint16_t, uint8_t, ble_gatt_data_t)){
BLENotifierImpl_send_ATT_ATTReadByGroupTypeResponse_listener = _listener;
}
void BLENotifierImpl_send_ATT_ATTReadByGroupTypeResponse(struct BLENotifierImpl_Instance *_instance, uint16_t ConnectionHandle, uint8_t Length, ble_gatt_data_t AttributeDataList){
if (BLENotifierImpl_send_ATT_ATTReadByGroupTypeResponse_listener != 0x0) BLENotifierImpl_send_ATT_ATTReadByGroupTypeResponse_listener(_instance, ConnectionHandle, Length, AttributeDataList);
if (external_BLENotifierImpl_send_ATT_ATTReadByGroupTypeResponse_listener != 0x0) external_BLENotifierImpl_send_ATT_ATTReadByGroupTypeResponse_listener(_instance, ConnectionHandle, Length, AttributeDataList);
;
}
void (*external_BLENotifierImpl_send_ATT_ATTReadByGroupTypeError_listener)(struct BLENotifierImpl_Instance *, uint16_t, uint16_t, uint8_t)= 0x0;
void (*BLENotifierImpl_send_ATT_ATTReadByGroupTypeError_listener)(struct BLENotifierImpl_Instance *, uint16_t, uint16_t, uint8_t)= 0x0;
void register_external_BLENotifierImpl_send_ATT_ATTReadByGroupTypeError_listener(void (*_listener)(struct BLENotifierImpl_Instance *, uint16_t, uint16_t, uint8_t)){
external_BLENotifierImpl_send_ATT_ATTReadByGroupTypeError_listener = _listener;
}
void register_BLENotifierImpl_send_ATT_ATTReadByGroupTypeError_listener(void (*_listener)(struct BLENotifierImpl_Instance *, uint16_t, uint16_t, uint8_t)){
BLENotifierImpl_send_ATT_ATTReadByGroupTypeError_listener = _listener;
}
void BLENotifierImpl_send_ATT_ATTReadByGroupTypeError(struct BLENotifierImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error){
if (BLENotifierImpl_send_ATT_ATTReadByGroupTypeError_listener != 0x0) BLENotifierImpl_send_ATT_ATTReadByGroupTypeError_listener(_instance, ConnectionHandle, AttributeHandle, Error);
if (external_BLENotifierImpl_send_ATT_ATTReadByGroupTypeError_listener != 0x0) external_BLENotifierImpl_send_ATT_ATTReadByGroupTypeError_listener(_instance, ConnectionHandle, AttributeHandle, Error);
;
}
void (*external_BLENotifierImpl_send_ATT_ATTWriteRequest_listener)(struct BLENotifierImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t)= 0x0;
void (*BLENotifierImpl_send_ATT_ATTWriteRequest_listener)(struct BLENotifierImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t)= 0x0;
void register_external_BLENotifierImpl_send_ATT_ATTWriteRequest_listener(void (*_listener)(struct BLENotifierImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t)){
external_BLENotifierImpl_send_ATT_ATTWriteRequest_listener = _listener;
}
void register_BLENotifierImpl_send_ATT_ATTWriteRequest_listener(void (*_listener)(struct BLENotifierImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t)){
BLENotifierImpl_send_ATT_ATTWriteRequest_listener = _listener;
}
void BLENotifierImpl_send_ATT_ATTWriteRequest(struct BLENotifierImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, ble_gatt_data_t AttributeValue){
if (BLENotifierImpl_send_ATT_ATTWriteRequest_listener != 0x0) BLENotifierImpl_send_ATT_ATTWriteRequest_listener(_instance, ConnectionHandle, AttributeHandle, AttributeValue);
if (external_BLENotifierImpl_send_ATT_ATTWriteRequest_listener != 0x0) external_BLENotifierImpl_send_ATT_ATTWriteRequest_listener(_instance, ConnectionHandle, AttributeHandle, AttributeValue);
;
}
void (*external_BLENotifierImpl_send_ATT_ATTWriteResponse_listener)(struct BLENotifierImpl_Instance *, uint16_t)= 0x0;
void (*BLENotifierImpl_send_ATT_ATTWriteResponse_listener)(struct BLENotifierImpl_Instance *, uint16_t)= 0x0;
void register_external_BLENotifierImpl_send_ATT_ATTWriteResponse_listener(void (*_listener)(struct BLENotifierImpl_Instance *, uint16_t)){
external_BLENotifierImpl_send_ATT_ATTWriteResponse_listener = _listener;
}
void register_BLENotifierImpl_send_ATT_ATTWriteResponse_listener(void (*_listener)(struct BLENotifierImpl_Instance *, uint16_t)){
BLENotifierImpl_send_ATT_ATTWriteResponse_listener = _listener;
}
void BLENotifierImpl_send_ATT_ATTWriteResponse(struct BLENotifierImpl_Instance *_instance, uint16_t ConnectionHandle){
if (BLENotifierImpl_send_ATT_ATTWriteResponse_listener != 0x0) BLENotifierImpl_send_ATT_ATTWriteResponse_listener(_instance, ConnectionHandle);
if (external_BLENotifierImpl_send_ATT_ATTWriteResponse_listener != 0x0) external_BLENotifierImpl_send_ATT_ATTWriteResponse_listener(_instance, ConnectionHandle);
;
}
void (*external_BLENotifierImpl_send_ATT_ATTWriteError_listener)(struct BLENotifierImpl_Instance *, uint16_t, uint16_t, uint8_t)= 0x0;
void (*BLENotifierImpl_send_ATT_ATTWriteError_listener)(struct BLENotifierImpl_Instance *, uint16_t, uint16_t, uint8_t)= 0x0;
void register_external_BLENotifierImpl_send_ATT_ATTWriteError_listener(void (*_listener)(struct BLENotifierImpl_Instance *, uint16_t, uint16_t, uint8_t)){
external_BLENotifierImpl_send_ATT_ATTWriteError_listener = _listener;
}
void register_BLENotifierImpl_send_ATT_ATTWriteError_listener(void (*_listener)(struct BLENotifierImpl_Instance *, uint16_t, uint16_t, uint8_t)){
BLENotifierImpl_send_ATT_ATTWriteError_listener = _listener;
}
void BLENotifierImpl_send_ATT_ATTWriteError(struct BLENotifierImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, uint8_t Error){
if (BLENotifierImpl_send_ATT_ATTWriteError_listener != 0x0) BLENotifierImpl_send_ATT_ATTWriteError_listener(_instance, ConnectionHandle, AttributeHandle, Error);
if (external_BLENotifierImpl_send_ATT_ATTWriteError_listener != 0x0) external_BLENotifierImpl_send_ATT_ATTWriteError_listener(_instance, ConnectionHandle, AttributeHandle, Error);
;
}
void (*external_BLENotifierImpl_send_ATT_ATTWriteCommand_listener)(struct BLENotifierImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t)= 0x0;
void (*BLENotifierImpl_send_ATT_ATTWriteCommand_listener)(struct BLENotifierImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t)= 0x0;
void register_external_BLENotifierImpl_send_ATT_ATTWriteCommand_listener(void (*_listener)(struct BLENotifierImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t)){
external_BLENotifierImpl_send_ATT_ATTWriteCommand_listener = _listener;
}
void register_BLENotifierImpl_send_ATT_ATTWriteCommand_listener(void (*_listener)(struct BLENotifierImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t)){
BLENotifierImpl_send_ATT_ATTWriteCommand_listener = _listener;
}
void BLENotifierImpl_send_ATT_ATTWriteCommand(struct BLENotifierImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, ble_gatt_data_t AttributeValue){
if (BLENotifierImpl_send_ATT_ATTWriteCommand_listener != 0x0) BLENotifierImpl_send_ATT_ATTWriteCommand_listener(_instance, ConnectionHandle, AttributeHandle, AttributeValue);
if (external_BLENotifierImpl_send_ATT_ATTWriteCommand_listener != 0x0) external_BLENotifierImpl_send_ATT_ATTWriteCommand_listener(_instance, ConnectionHandle, AttributeHandle, AttributeValue);
;
}
void (*external_BLENotifierImpl_send_ATT_ATTHandleValueNotification_listener)(struct BLENotifierImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t)= 0x0;
void (*BLENotifierImpl_send_ATT_ATTHandleValueNotification_listener)(struct BLENotifierImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t)= 0x0;
void register_external_BLENotifierImpl_send_ATT_ATTHandleValueNotification_listener(void (*_listener)(struct BLENotifierImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t)){
external_BLENotifierImpl_send_ATT_ATTHandleValueNotification_listener = _listener;
}
void register_BLENotifierImpl_send_ATT_ATTHandleValueNotification_listener(void (*_listener)(struct BLENotifierImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t)){
BLENotifierImpl_send_ATT_ATTHandleValueNotification_listener = _listener;
}
void BLENotifierImpl_send_ATT_ATTHandleValueNotification(struct BLENotifierImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, ble_gatt_data_t AttributeValue){
if (BLENotifierImpl_send_ATT_ATTHandleValueNotification_listener != 0x0) BLENotifierImpl_send_ATT_ATTHandleValueNotification_listener(_instance, ConnectionHandle, AttributeHandle, AttributeValue);
if (external_BLENotifierImpl_send_ATT_ATTHandleValueNotification_listener != 0x0) external_BLENotifierImpl_send_ATT_ATTHandleValueNotification_listener(_instance, ConnectionHandle, AttributeHandle, AttributeValue);
;
}
void (*external_BLENotifierImpl_send_ATT_ATTHandleValueIndication_listener)(struct BLENotifierImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t)= 0x0;
void (*BLENotifierImpl_send_ATT_ATTHandleValueIndication_listener)(struct BLENotifierImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t)= 0x0;
void register_external_BLENotifierImpl_send_ATT_ATTHandleValueIndication_listener(void (*_listener)(struct BLENotifierImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t)){
external_BLENotifierImpl_send_ATT_ATTHandleValueIndication_listener = _listener;
}
void register_BLENotifierImpl_send_ATT_ATTHandleValueIndication_listener(void (*_listener)(struct BLENotifierImpl_Instance *, uint16_t, uint16_t, ble_gatt_data_t)){
BLENotifierImpl_send_ATT_ATTHandleValueIndication_listener = _listener;
}
void BLENotifierImpl_send_ATT_ATTHandleValueIndication(struct BLENotifierImpl_Instance *_instance, uint16_t ConnectionHandle, uint16_t AttributeHandle, ble_gatt_data_t AttributeValue){
if (BLENotifierImpl_send_ATT_ATTHandleValueIndication_listener != 0x0) BLENotifierImpl_send_ATT_ATTHandleValueIndication_listener(_instance, ConnectionHandle, AttributeHandle, AttributeValue);
if (external_BLENotifierImpl_send_ATT_ATTHandleValueIndication_listener != 0x0) external_BLENotifierImpl_send_ATT_ATTHandleValueIndication_listener(_instance, ConnectionHandle, AttributeHandle, AttributeValue);
;
}
void (*external_BLENotifierImpl_send_ATT_ATTHandleValueConfirmation_listener)(struct BLENotifierImpl_Instance *, uint16_t)= 0x0;
void (*BLENotifierImpl_send_ATT_ATTHandleValueConfirmation_listener)(struct BLENotifierImpl_Instance *, uint16_t)= 0x0;
void register_external_BLENotifierImpl_send_ATT_ATTHandleValueConfirmation_listener(void (*_listener)(struct BLENotifierImpl_Instance *, uint16_t)){
external_BLENotifierImpl_send_ATT_ATTHandleValueConfirmation_listener = _listener;
}
void register_BLENotifierImpl_send_ATT_ATTHandleValueConfirmation_listener(void (*_listener)(struct BLENotifierImpl_Instance *, uint16_t)){
BLENotifierImpl_send_ATT_ATTHandleValueConfirmation_listener = _listener;
}
void BLENotifierImpl_send_ATT_ATTHandleValueConfirmation(struct BLENotifierImpl_Instance *_instance, uint16_t ConnectionHandle){
if (BLENotifierImpl_send_ATT_ATTHandleValueConfirmation_listener != 0x0) BLENotifierImpl_send_ATT_ATTHandleValueConfirmation_listener(_instance, ConnectionHandle);
if (external_BLENotifierImpl_send_ATT_ATTHandleValueConfirmation_listener != 0x0) external_BLENotifierImpl_send_ATT_ATTHandleValueConfirmation_listener(_instance, ConnectionHandle);
;
}



