/*****************************************************
 *      THIS IS A GENERATED FILE. DO NOT EDIT.
 *        Implementation for Thing Main
 *  Generated from ThingML (http://www.thingml.org)
 *****************************************************/

#include "Main.h"

/*****************************************************************************
 * Implementation for type : Main
 *****************************************************************************/

// Declaration of prototypes:
//Prototypes: State Machine
void Main_States_OnExit(int state, struct Main_Instance *_instance);
//Prototypes: Message Sending
void Main_send_Signals_Quit(struct Main_Instance *_instance, int16_t code);
void Main_send_WeightScaleDevice_Connect(struct Main_Instance *_instance);
void Main_send_WeightScaleDevice_Stop(struct Main_Instance *_instance);
void Main_send_WeightScaleDevice_Encrypt(struct Main_Instance *_instance);
void Main_send_NotifierDevice_Connect(struct Main_Instance *_instance);
void Main_send_NotifierDevice_Stop(struct Main_Instance *_instance);
void Main_send_NotifierDevice_Encrypt(struct Main_Instance *_instance);
void Main_send_WeightScaleCloud_TelluCloudWeightScale(struct Main_Instance *_instance, time_t observationTime, float mass);
void Main_send_Initialiser_Start(struct Main_Instance *_instance);
void Main_send_Initialiser_Stop(struct Main_Instance *_instance);
void Main_send_Notifications_RequestBloodPressureMeasurement(struct Main_Instance *_instance);
void Main_send_Notifications_ReceivedBloodPressureMeasurement(struct Main_Instance *_instance);
void Main_send_Notifications_BadBloodPressureMeasurement(struct Main_Instance *_instance);
void Main_send_Notifications_StoredBloodPressureMeasurement(struct Main_Instance *_instance);
//Prototypes: Function
// Declaration of functions:

// On Entry Actions:
void Main_States_OnEntry(int state, struct Main_Instance *_instance) {
switch(state) {
case MAIN_STATES_STATE:{
_instance->Main_States_State = MAIN_STATES_INITIALISE_STATE;
Main_States_OnEntry(_instance->Main_States_State, _instance);
break;
}
case MAIN_STATES_STANDBY_STATE:{
_instance->Main_States_Standby_State = MAIN_STATES_STANDBY_SYNCWEIGHTSCALE_STATE;
Main_States_OnEntry(_instance->Main_States_Standby_State, _instance);
break;
}
case MAIN_STATES_STANDBY_SYNCWEIGHTSCALE_STATE:{
_instance->Main_States_Standby_SyncWeightScale_State = MAIN_STATES_STANDBY_SYNCWEIGHTSCALE_CONNECTWS_STATE;
Main_States_OnEntry(_instance->Main_States_Standby_SyncWeightScale_State, _instance);
break;
}
case MAIN_STATES_STANDBY_SENDTONOTIFIER_STATE:{
_instance->Main_States_Standby_SendToNotifier_State = MAIN_STATES_STANDBY_SENDTONOTIFIER_CONNECTN_STATE;
Main_States_OnEntry(_instance->Main_States_Standby_SendToNotifier_State, _instance);
break;
}
case MAIN_STATES_INITIALISE_STATE:{
Main_send_Initialiser_Start(_instance);
break;
}
case MAIN_STATES_DEINITIALISE_STATE:{
fprintf(stdout, "[INFO]: Stopping...\n");
Main_send_WeightScaleDevice_Stop(_instance);
break;
}
case MAIN_STATES_FAILED_STATE:{
fprintf(stdout, "[ERROR]: Failed, quitting... !!!\n");
Main_send_Signals_Quit(_instance, 1);
break;
}
case MAIN_STATES_QUIT_STATE:{
fprintf(stdout, "[INFO]: Finished, quitting...\n");
Main_send_Signals_Quit(_instance, 0);
break;
}
case MAIN_STATES_STANDBY_SYNCWEIGHTSCALE_CONNECTWS_STATE:{
fprintf(stdout, "[INFO]: Connecting to WeightScale...\n");
Main_send_WeightScaleDevice_Connect(_instance);
break;
}
case MAIN_STATES_STANDBY_SYNCWEIGHTSCALE_CONNECTEDWS_STATE:{
_instance->Main_States_Standby_SyncWeightScale_ConnectedWS_GotMeasurements_var = 0;
_instance->Main_States_Standby_SyncWeightScale_ConnectedWS_MeasurementOK_var = 0;
break;
}
case MAIN_STATES_STANDBY_SENDTONOTIFIER_CONNECTN_STATE:{
fprintf(stdout, "[INFO]: Connecting to Notifier ...\n");
Main_send_NotifierDevice_Connect(_instance);
break;
}
case MAIN_STATES_STANDBY_SENDTONOTIFIER_CONNECTEDN_STATE:{
if(_instance->Main_SendToNotifier_var & 0x01) {
_instance->Main_SendToNotifier_var &= ~0x01;
fprintf(stdout, "[INFO]: NOTIFIER - bad\n");
Main_send_Notifications_BadBloodPressureMeasurement(_instance);

} else {
if(_instance->Main_SendToNotifier_var & 0x02) {
_instance->Main_SendToNotifier_var &= ~0x02;
fprintf(stdout, "[INFO]: NOTIFIER - received\n");
Main_send_Notifications_ReceivedBloodPressureMeasurement(_instance);

} else {
if(_instance->Main_SendToNotifier_var & 0x04) {
_instance->Main_SendToNotifier_var &= ~0x04;
fprintf(stdout, "[INFO]: NOTIFIER - stored\n");
Main_send_Notifications_StoredBloodPressureMeasurement(_instance);

} else {
if(_instance->Main_SendToNotifier_var & 0x08) {
_instance->Main_SendToNotifier_var &= ~0x08;
fprintf(stdout, "[INFO]: NOTIFIER - request\n");
Main_send_Notifications_RequestBloodPressureMeasurement(_instance);

}

}

}

}
break;
}
default: break;
}
}

// On Exit Actions:
void Main_States_OnExit(int state, struct Main_Instance *_instance) {
switch(state) {
case MAIN_STATES_STATE:{
Main_States_OnExit(_instance->Main_States_State, _instance);
break;}
case MAIN_STATES_STANDBY_STATE:{
Main_States_OnExit(_instance->Main_States_Standby_State, _instance);
break;}
case MAIN_STATES_STANDBY_SYNCWEIGHTSCALE_STATE:{
Main_States_OnExit(_instance->Main_States_Standby_SyncWeightScale_State, _instance);
break;}
case MAIN_STATES_STANDBY_SENDTONOTIFIER_STATE:{
Main_States_OnExit(_instance->Main_States_Standby_SendToNotifier_State, _instance);
break;}
case MAIN_STATES_INITIALISE_STATE:{
break;}
case MAIN_STATES_DEINITIALISE_STATE:{
break;}
case MAIN_STATES_FAILED_STATE:{
break;}
case MAIN_STATES_QUIT_STATE:{
break;}
case MAIN_STATES_STANDBY_SYNCWEIGHTSCALE_CONNECTWS_STATE:{
break;}
case MAIN_STATES_STANDBY_SYNCWEIGHTSCALE_CONNECTEDWS_STATE:{
break;}
case MAIN_STATES_STANDBY_SENDTONOTIFIER_CONNECTN_STATE:{
break;}
case MAIN_STATES_STANDBY_SENDTONOTIFIER_CONNECTEDN_STATE:{
break;}
default: break;
}
}

// Event Handlers for incoming messages:
void Main_handle_Initialiser_Failure(struct Main_Instance *_instance) {
//Region States
uint8_t Main_States_State_event_consumed = 0;
if (_instance->Main_States_State == MAIN_STATES_INITIALISE_STATE) {
if (Main_States_State_event_consumed == 0 && 1) {
Main_States_OnExit(MAIN_STATES_INITIALISE_STATE, _instance);
_instance->Main_States_State = MAIN_STATES_FAILED_STATE;
Main_States_OnEntry(MAIN_STATES_FAILED_STATE, _instance);
Main_States_State_event_consumed = 1;
}
}
else if (_instance->Main_States_State == MAIN_STATES_STANDBY_STATE) {
//Region Standby
uint8_t Main_States_Standby_State_event_consumed = 0;
//End Region Standby
Main_States_State_event_consumed = 0 | Main_States_Standby_State_event_consumed ;
//End dsregion Standby
if (Main_States_State_event_consumed == 0 && 1) {
Main_States_OnExit(MAIN_STATES_STANDBY_STATE, _instance);
_instance->Main_States_State = MAIN_STATES_FAILED_STATE;
Main_States_OnEntry(MAIN_STATES_FAILED_STATE, _instance);
Main_States_State_event_consumed = 1;
}
}
else if (_instance->Main_States_State == MAIN_STATES_DEINITIALISE_STATE) {
if (Main_States_State_event_consumed == 0 && 1) {
Main_States_OnExit(MAIN_STATES_DEINITIALISE_STATE, _instance);
_instance->Main_States_State = MAIN_STATES_FAILED_STATE;
Main_States_OnEntry(MAIN_STATES_FAILED_STATE, _instance);
Main_States_State_event_consumed = 1;
}
}
//End Region States
//End dsregion States
//Session list: 
}
void Main_handle_Initialiser_Stopped(struct Main_Instance *_instance) {
//Region States
uint8_t Main_States_State_event_consumed = 0;
if (_instance->Main_States_State == MAIN_STATES_DEINITIALISE_STATE) {
if (Main_States_State_event_consumed == 0 && 1) {
Main_States_OnExit(MAIN_STATES_DEINITIALISE_STATE, _instance);
_instance->Main_States_State = MAIN_STATES_QUIT_STATE;
Main_States_OnEntry(MAIN_STATES_QUIT_STATE, _instance);
Main_States_State_event_consumed = 1;
}
}
//End Region States
//End dsregion States
//Session list: 
}
void Main_handle_Initialiser_DeviceInitialised(struct Main_Instance *_instance, bdaddr_t Address) {
//Region States
uint8_t Main_States_State_event_consumed = 0;
if (_instance->Main_States_State == MAIN_STATES_INITIALISE_STATE) {
if (Main_States_State_event_consumed == 0 && 1) {
Main_States_OnExit(MAIN_STATES_INITIALISE_STATE, _instance);
_instance->Main_States_State = MAIN_STATES_STANDBY_STATE;
Main_States_OnEntry(MAIN_STATES_STANDBY_STATE, _instance);
Main_States_State_event_consumed = 1;
}
}
//End Region States
//End dsregion States
//Session list: 
}
void Main_handle_Notifications_ReadyForNotificationCommand(struct Main_Instance *_instance) {
//Region States
uint8_t Main_States_State_event_consumed = 0;
if (_instance->Main_States_State == MAIN_STATES_STANDBY_STATE) {
//Region Standby
uint8_t Main_States_Standby_State_event_consumed = 0;
if (_instance->Main_States_Standby_State == MAIN_STATES_STANDBY_SENDTONOTIFIER_STATE) {
//Region SendToNotifier
uint8_t Main_States_Standby_SendToNotifier_State_event_consumed = 0;
if (_instance->Main_States_Standby_SendToNotifier_State == MAIN_STATES_STANDBY_SENDTONOTIFIER_CONNECTN_STATE) {
if (Main_States_Standby_SendToNotifier_State_event_consumed == 0 && 1) {
Main_States_OnExit(MAIN_STATES_STANDBY_SENDTONOTIFIER_CONNECTN_STATE, _instance);
_instance->Main_States_Standby_SendToNotifier_State = MAIN_STATES_STANDBY_SENDTONOTIFIER_CONNECTEDN_STATE;
Main_States_OnEntry(MAIN_STATES_STANDBY_SENDTONOTIFIER_CONNECTEDN_STATE, _instance);
Main_States_Standby_SendToNotifier_State_event_consumed = 1;
}
}
//End Region SendToNotifier
Main_States_Standby_State_event_consumed = 0 | Main_States_Standby_SendToNotifier_State_event_consumed ;
//End dsregion SendToNotifier
}
//End Region Standby
Main_States_State_event_consumed = 0 | Main_States_Standby_State_event_consumed ;
//End dsregion Standby
}
//End Region States
//End dsregion States
//Session list: 
}
void Main_handle_WeightScaleCloud_MqttRequestWeightScaleMeasurement(struct Main_Instance *_instance) {
//Region States
uint8_t Main_States_State_event_consumed = 0;
if (_instance->Main_States_State == MAIN_STATES_STANDBY_STATE) {
//Region Standby
uint8_t Main_States_Standby_State_event_consumed = 0;
if (_instance->Main_States_Standby_State == MAIN_STATES_STANDBY_SYNCWEIGHTSCALE_STATE) {
//Region SyncWeightScale
uint8_t Main_States_Standby_SyncWeightScale_State_event_consumed = 0;
if (_instance->Main_States_Standby_SyncWeightScale_State == MAIN_STATES_STANDBY_SYNCWEIGHTSCALE_CONNECTWS_STATE) {
if (Main_States_Standby_SyncWeightScale_State_event_consumed == 0 && 1) {
_instance->Main_SendToNotifier_var |= 0x08;
Main_send_WeightScaleDevice_Stop(_instance);
Main_States_Standby_SyncWeightScale_State_event_consumed = 1;
}
}
//End Region SyncWeightScale
Main_States_Standby_State_event_consumed = 0 | Main_States_Standby_SyncWeightScale_State_event_consumed ;
//End dsregion SyncWeightScale
}
//End Region Standby
Main_States_State_event_consumed = 0 | Main_States_Standby_State_event_consumed ;
//End dsregion Standby
if (Main_States_State_event_consumed == 0 && 1) {
_instance->Main_SendToNotifier_var |= 0x08;
Main_States_State_event_consumed = 1;
}
}
//End Region States
//End dsregion States
//Session list: 
}
void Main_handle_WeightScaleCloud_MqttConfirmWeightScaleMeasurement(struct Main_Instance *_instance) {
//Region States
uint8_t Main_States_State_event_consumed = 0;
if (_instance->Main_States_State == MAIN_STATES_STANDBY_STATE) {
//Region Standby
uint8_t Main_States_Standby_State_event_consumed = 0;
if (_instance->Main_States_Standby_State == MAIN_STATES_STANDBY_SYNCWEIGHTSCALE_STATE) {
//Region SyncWeightScale
uint8_t Main_States_Standby_SyncWeightScale_State_event_consumed = 0;
if (_instance->Main_States_Standby_SyncWeightScale_State == MAIN_STATES_STANDBY_SYNCWEIGHTSCALE_CONNECTWS_STATE) {
if (Main_States_Standby_SyncWeightScale_State_event_consumed == 0 && 1) {
_instance->Main_SendToNotifier_var |= 0x04;
Main_send_WeightScaleDevice_Stop(_instance);
Main_States_Standby_SyncWeightScale_State_event_consumed = 1;
}
}
//End Region SyncWeightScale
Main_States_Standby_State_event_consumed = 0 | Main_States_Standby_SyncWeightScale_State_event_consumed ;
//End dsregion SyncWeightScale
}
//End Region Standby
Main_States_State_event_consumed = 0 | Main_States_Standby_State_event_consumed ;
//End dsregion Standby
if (Main_States_State_event_consumed == 0 && 1) {
_instance->Main_SendToNotifier_var |= 0x04;
Main_States_State_event_consumed = 1;
}
}
//End Region States
//End dsregion States
//Session list: 
}
void Main_handle_Signals_Interrupt(struct Main_Instance *_instance) {
//Region States
uint8_t Main_States_State_event_consumed = 0;
if (_instance->Main_States_State == MAIN_STATES_INITIALISE_STATE) {
if (Main_States_State_event_consumed == 0 && 1) {
Main_States_OnExit(MAIN_STATES_INITIALISE_STATE, _instance);
_instance->Main_States_State = MAIN_STATES_QUIT_STATE;
Main_States_OnEntry(MAIN_STATES_QUIT_STATE, _instance);
Main_States_State_event_consumed = 1;
}
}
else if (_instance->Main_States_State == MAIN_STATES_STANDBY_STATE) {
//Region Standby
uint8_t Main_States_Standby_State_event_consumed = 0;
//End Region Standby
Main_States_State_event_consumed = 0 | Main_States_Standby_State_event_consumed ;
//End dsregion Standby
if (Main_States_State_event_consumed == 0 && 1) {
Main_States_OnExit(MAIN_STATES_STANDBY_STATE, _instance);
_instance->Main_States_State = MAIN_STATES_DEINITIALISE_STATE;
Main_States_OnEntry(MAIN_STATES_DEINITIALISE_STATE, _instance);
Main_States_State_event_consumed = 1;
}
}
else if (_instance->Main_States_State == MAIN_STATES_DEINITIALISE_STATE) {
if (Main_States_State_event_consumed == 0 && 1) {
Main_States_OnExit(MAIN_STATES_DEINITIALISE_STATE, _instance);
_instance->Main_States_State = MAIN_STATES_FAILED_STATE;
Main_States_OnEntry(MAIN_STATES_FAILED_STATE, _instance);
Main_States_State_event_consumed = 1;
}
}
//End Region States
//End dsregion States
//Session list: 
}
void Main_handle_WeightScaleDevice_Failure(struct Main_Instance *_instance) {
//Region States
uint8_t Main_States_State_event_consumed = 0;
if (_instance->Main_States_State == MAIN_STATES_DEINITIALISE_STATE) {
if (Main_States_State_event_consumed == 0 && 1) {
Main_States_OnExit(MAIN_STATES_DEINITIALISE_STATE, _instance);
_instance->Main_States_State = MAIN_STATES_FAILED_STATE;
Main_States_OnEntry(MAIN_STATES_FAILED_STATE, _instance);
Main_States_State_event_consumed = 1;
}
}
//End Region States
//End dsregion States
//Session list: 
}
void Main_handle_WeightScaleDevice_Stopped(struct Main_Instance *_instance) {
//Region States
uint8_t Main_States_State_event_consumed = 0;
if (_instance->Main_States_State == MAIN_STATES_STANDBY_STATE) {
//Region Standby
uint8_t Main_States_Standby_State_event_consumed = 0;
if (_instance->Main_States_Standby_State == MAIN_STATES_STANDBY_SYNCWEIGHTSCALE_STATE) {
//Region SyncWeightScale
uint8_t Main_States_Standby_SyncWeightScale_State_event_consumed = 0;
if (_instance->Main_States_Standby_SyncWeightScale_State == MAIN_STATES_STANDBY_SYNCWEIGHTSCALE_CONNECTEDWS_STATE) {
if (Main_States_Standby_SyncWeightScale_State_event_consumed == 0 && ( !(_instance->Main_States_Standby_SyncWeightScale_ConnectedWS_GotMeasurements_var))) {
Main_States_OnExit(MAIN_STATES_STANDBY_SYNCWEIGHTSCALE_CONNECTEDWS_STATE, _instance);
_instance->Main_States_Standby_SyncWeightScale_State = MAIN_STATES_STANDBY_SYNCWEIGHTSCALE_CONNECTWS_STATE;
fprintf(stdout, "[WARNING]: Finished syncing with Weight Scale Device but got no measurements!\n");
Main_States_OnEntry(MAIN_STATES_STANDBY_SYNCWEIGHTSCALE_CONNECTWS_STATE, _instance);
Main_States_Standby_SyncWeightScale_State_event_consumed = 1;
}
else if (Main_States_Standby_SyncWeightScale_State_event_consumed == 0 && (_instance->Main_States_Standby_SyncWeightScale_ConnectedWS_GotMeasurements_var && !(_instance->Main_SendToNotifier_var & 0x03))) {
fprintf(stdout, "[INFO]: Finished syncing with Weight Scale Device.\n");
if(_instance->Main_States_Standby_SyncWeightScale_ConnectedWS_MeasurementOK_var) {
_instance->Main_SendToNotifier_var |= 0x02;

} else {
_instance->Main_SendToNotifier_var |= 0x01;

}
Main_send_WeightScaleDevice_Stop(_instance);
Main_States_Standby_SyncWeightScale_State_event_consumed = 1;
}
}
//End Region SyncWeightScale
Main_States_Standby_State_event_consumed = 0 | Main_States_Standby_SyncWeightScale_State_event_consumed ;
//End dsregion SyncWeightScale
if (Main_States_Standby_State_event_consumed == 0 && (_instance->Main_SendToNotifier_var != 0x00)) {
Main_States_OnExit(MAIN_STATES_STANDBY_SYNCWEIGHTSCALE_STATE, _instance);
_instance->Main_States_Standby_State = MAIN_STATES_STANDBY_SENDTONOTIFIER_STATE;
Main_States_OnEntry(MAIN_STATES_STANDBY_SENDTONOTIFIER_STATE, _instance);
Main_States_Standby_State_event_consumed = 1;
}
}
//End Region Standby
Main_States_State_event_consumed = 0 | Main_States_Standby_State_event_consumed ;
//End dsregion Standby
}
else if (_instance->Main_States_State == MAIN_STATES_DEINITIALISE_STATE) {
if (Main_States_State_event_consumed == 0 && 1) {
Main_send_NotifierDevice_Stop(_instance);
Main_States_State_event_consumed = 1;
}
}
//End Region States
//End dsregion States
//Session list: 
}
void Main_handle_WeightScaleDevice_Encrypted(struct Main_Instance *_instance) {
//Region States
uint8_t Main_States_State_event_consumed = 0;
if (_instance->Main_States_State == MAIN_STATES_STANDBY_STATE) {
//Region Standby
uint8_t Main_States_Standby_State_event_consumed = 0;
if (_instance->Main_States_Standby_State == MAIN_STATES_STANDBY_SYNCWEIGHTSCALE_STATE) {
//Region SyncWeightScale
uint8_t Main_States_Standby_SyncWeightScale_State_event_consumed = 0;
if (_instance->Main_States_Standby_SyncWeightScale_State == MAIN_STATES_STANDBY_SYNCWEIGHTSCALE_CONNECTWS_STATE) {
if (Main_States_Standby_SyncWeightScale_State_event_consumed == 0 && 1) {
Main_States_OnExit(MAIN_STATES_STANDBY_SYNCWEIGHTSCALE_CONNECTWS_STATE, _instance);
_instance->Main_States_Standby_SyncWeightScale_State = MAIN_STATES_STANDBY_SYNCWEIGHTSCALE_CONNECTEDWS_STATE;
Main_States_OnEntry(MAIN_STATES_STANDBY_SYNCWEIGHTSCALE_CONNECTEDWS_STATE, _instance);
Main_States_Standby_SyncWeightScale_State_event_consumed = 1;
}
}
//End Region SyncWeightScale
Main_States_Standby_State_event_consumed = 0 | Main_States_Standby_SyncWeightScale_State_event_consumed ;
//End dsregion SyncWeightScale
}
//End Region Standby
Main_States_State_event_consumed = 0 | Main_States_Standby_State_event_consumed ;
//End dsregion Standby
}
//End Region States
//End dsregion States
//Session list: 
}
void Main_handle_NotifierDevice_Failure(struct Main_Instance *_instance) {
//Region States
uint8_t Main_States_State_event_consumed = 0;
if (_instance->Main_States_State == MAIN_STATES_STANDBY_STATE) {
//Region Standby
uint8_t Main_States_Standby_State_event_consumed = 0;
if (_instance->Main_States_Standby_State == MAIN_STATES_STANDBY_SENDTONOTIFIER_STATE) {
//Region SendToNotifier
uint8_t Main_States_Standby_SendToNotifier_State_event_consumed = 0;
//End Region SendToNotifier
Main_States_Standby_State_event_consumed = 0 | Main_States_Standby_SendToNotifier_State_event_consumed ;
//End dsregion SendToNotifier
if (Main_States_Standby_State_event_consumed == 0 && 1) {
Main_States_OnExit(MAIN_STATES_STANDBY_SENDTONOTIFIER_STATE, _instance);
_instance->Main_States_Standby_State = MAIN_STATES_STANDBY_SYNCWEIGHTSCALE_STATE;
Main_States_OnEntry(MAIN_STATES_STANDBY_SYNCWEIGHTSCALE_STATE, _instance);
Main_States_Standby_State_event_consumed = 1;
}
}
//End Region Standby
Main_States_State_event_consumed = 0 | Main_States_Standby_State_event_consumed ;
//End dsregion Standby
}
else if (_instance->Main_States_State == MAIN_STATES_DEINITIALISE_STATE) {
if (Main_States_State_event_consumed == 0 && 1) {
Main_States_OnExit(MAIN_STATES_DEINITIALISE_STATE, _instance);
_instance->Main_States_State = MAIN_STATES_FAILED_STATE;
Main_States_OnEntry(MAIN_STATES_FAILED_STATE, _instance);
Main_States_State_event_consumed = 1;
}
}
//End Region States
//End dsregion States
//Session list: 
}
void Main_handle_NotifierDevice_Stopped(struct Main_Instance *_instance) {
//Region States
uint8_t Main_States_State_event_consumed = 0;
if (_instance->Main_States_State == MAIN_STATES_STANDBY_STATE) {
//Region Standby
uint8_t Main_States_Standby_State_event_consumed = 0;
if (_instance->Main_States_Standby_State == MAIN_STATES_STANDBY_SENDTONOTIFIER_STATE) {
//Region SendToNotifier
uint8_t Main_States_Standby_SendToNotifier_State_event_consumed = 0;
if (_instance->Main_States_Standby_SendToNotifier_State == MAIN_STATES_STANDBY_SENDTONOTIFIER_CONNECTEDN_STATE) {
if (Main_States_Standby_SendToNotifier_State_event_consumed == 0 && (_instance->Main_SendToNotifier_var != 0x00)) {
Main_States_OnExit(MAIN_STATES_STANDBY_SENDTONOTIFIER_CONNECTEDN_STATE, _instance);
_instance->Main_States_Standby_SendToNotifier_State = MAIN_STATES_STANDBY_SENDTONOTIFIER_CONNECTN_STATE;
Main_States_OnEntry(MAIN_STATES_STANDBY_SENDTONOTIFIER_CONNECTN_STATE, _instance);
Main_States_Standby_SendToNotifier_State_event_consumed = 1;
}
}
//End Region SendToNotifier
Main_States_Standby_State_event_consumed = 0 | Main_States_Standby_SendToNotifier_State_event_consumed ;
//End dsregion SendToNotifier
if (Main_States_Standby_State_event_consumed == 0 && (_instance->Main_SendToNotifier_var == 0x00)) {
Main_States_OnExit(MAIN_STATES_STANDBY_SENDTONOTIFIER_STATE, _instance);
_instance->Main_States_Standby_State = MAIN_STATES_STANDBY_SYNCWEIGHTSCALE_STATE;
Main_States_OnEntry(MAIN_STATES_STANDBY_SYNCWEIGHTSCALE_STATE, _instance);
Main_States_Standby_State_event_consumed = 1;
}
}
//End Region Standby
Main_States_State_event_consumed = 0 | Main_States_Standby_State_event_consumed ;
//End dsregion Standby
}
else if (_instance->Main_States_State == MAIN_STATES_DEINITIALISE_STATE) {
if (Main_States_State_event_consumed == 0 && 1) {
Main_send_Initialiser_Stop(_instance);
Main_States_State_event_consumed = 1;
}
}
//End Region States
//End dsregion States
//Session list: 
}
void Main_handle_Weightscale_WeightscaleMeasurement(struct Main_Instance *_instance, uint16_t Weight, uint8_t UnitImperial, uint16_t Year, uint8_t Month, uint8_t Day, uint8_t Hour, uint8_t Minute, uint8_t Second) {
//Region States
uint8_t Main_States_State_event_consumed = 0;
if (_instance->Main_States_State == MAIN_STATES_STANDBY_STATE) {
//Region Standby
uint8_t Main_States_Standby_State_event_consumed = 0;
if (_instance->Main_States_Standby_State == MAIN_STATES_STANDBY_SYNCWEIGHTSCALE_STATE) {
//Region SyncWeightScale
uint8_t Main_States_Standby_SyncWeightScale_State_event_consumed = 0;
if (_instance->Main_States_Standby_SyncWeightScale_State == MAIN_STATES_STANDBY_SYNCWEIGHTSCALE_CONNECTEDWS_STATE) {
if (Main_States_Standby_SyncWeightScale_State_event_consumed == 0 && 1) {
_instance->Main_States_Standby_SyncWeightScale_ConnectedWS_GotMeasurements_var = 1;
_instance->Main_States_Standby_SyncWeightScale_ConnectedWS_MeasurementOK_var = 1;
if(_instance->Main_States_Standby_SyncWeightScale_ConnectedWS_MeasurementOK_var) {
;time_t ObservationTime = 0;
;float Mass = Weight;

                struct tm timebuf;
                timebuf.tm_year = Year-1900;
                timebuf.tm_mon = Month-1;
                timebuf.tm_mday = Day;
                timebuf.tm_hour = Hour;
                timebuf.tm_min = Minute;
                timebuf.tm_sec = Second;
              
ObservationTime = timegm(&timebuf);
Main_send_WeightScaleCloud_TelluCloudWeightScale(_instance, ObservationTime, Mass);

}
Main_States_Standby_SyncWeightScale_State_event_consumed = 1;
}
}
//End Region SyncWeightScale
Main_States_Standby_State_event_consumed = 0 | Main_States_Standby_SyncWeightScale_State_event_consumed ;
//End dsregion SyncWeightScale
}
//End Region Standby
Main_States_State_event_consumed = 0 | Main_States_Standby_State_event_consumed ;
//End dsregion Standby
}
//End Region States
//End dsregion States
//Session list: 
}

// Observers for outgoing messages:
void (*external_Main_send_Signals_Quit_listener)(struct Main_Instance *, int16_t)= 0x0;
void (*Main_send_Signals_Quit_listener)(struct Main_Instance *, int16_t)= 0x0;
void register_external_Main_send_Signals_Quit_listener(void (*_listener)(struct Main_Instance *, int16_t)){
external_Main_send_Signals_Quit_listener = _listener;
}
void register_Main_send_Signals_Quit_listener(void (*_listener)(struct Main_Instance *, int16_t)){
Main_send_Signals_Quit_listener = _listener;
}
void Main_send_Signals_Quit(struct Main_Instance *_instance, int16_t code){
if (Main_send_Signals_Quit_listener != 0x0) Main_send_Signals_Quit_listener(_instance, code);
if (external_Main_send_Signals_Quit_listener != 0x0) external_Main_send_Signals_Quit_listener(_instance, code);
;
}
void (*external_Main_send_WeightScaleDevice_Connect_listener)(struct Main_Instance *)= 0x0;
void (*Main_send_WeightScaleDevice_Connect_listener)(struct Main_Instance *)= 0x0;
void register_external_Main_send_WeightScaleDevice_Connect_listener(void (*_listener)(struct Main_Instance *)){
external_Main_send_WeightScaleDevice_Connect_listener = _listener;
}
void register_Main_send_WeightScaleDevice_Connect_listener(void (*_listener)(struct Main_Instance *)){
Main_send_WeightScaleDevice_Connect_listener = _listener;
}
void Main_send_WeightScaleDevice_Connect(struct Main_Instance *_instance){
if (Main_send_WeightScaleDevice_Connect_listener != 0x0) Main_send_WeightScaleDevice_Connect_listener(_instance);
if (external_Main_send_WeightScaleDevice_Connect_listener != 0x0) external_Main_send_WeightScaleDevice_Connect_listener(_instance);
;
}
void (*external_Main_send_WeightScaleDevice_Stop_listener)(struct Main_Instance *)= 0x0;
void (*Main_send_WeightScaleDevice_Stop_listener)(struct Main_Instance *)= 0x0;
void register_external_Main_send_WeightScaleDevice_Stop_listener(void (*_listener)(struct Main_Instance *)){
external_Main_send_WeightScaleDevice_Stop_listener = _listener;
}
void register_Main_send_WeightScaleDevice_Stop_listener(void (*_listener)(struct Main_Instance *)){
Main_send_WeightScaleDevice_Stop_listener = _listener;
}
void Main_send_WeightScaleDevice_Stop(struct Main_Instance *_instance){
if (Main_send_WeightScaleDevice_Stop_listener != 0x0) Main_send_WeightScaleDevice_Stop_listener(_instance);
if (external_Main_send_WeightScaleDevice_Stop_listener != 0x0) external_Main_send_WeightScaleDevice_Stop_listener(_instance);
;
}
void (*external_Main_send_WeightScaleDevice_Encrypt_listener)(struct Main_Instance *)= 0x0;
void (*Main_send_WeightScaleDevice_Encrypt_listener)(struct Main_Instance *)= 0x0;
void register_external_Main_send_WeightScaleDevice_Encrypt_listener(void (*_listener)(struct Main_Instance *)){
external_Main_send_WeightScaleDevice_Encrypt_listener = _listener;
}
void register_Main_send_WeightScaleDevice_Encrypt_listener(void (*_listener)(struct Main_Instance *)){
Main_send_WeightScaleDevice_Encrypt_listener = _listener;
}
void Main_send_WeightScaleDevice_Encrypt(struct Main_Instance *_instance){
if (Main_send_WeightScaleDevice_Encrypt_listener != 0x0) Main_send_WeightScaleDevice_Encrypt_listener(_instance);
if (external_Main_send_WeightScaleDevice_Encrypt_listener != 0x0) external_Main_send_WeightScaleDevice_Encrypt_listener(_instance);
;
}
void (*external_Main_send_NotifierDevice_Connect_listener)(struct Main_Instance *)= 0x0;
void (*Main_send_NotifierDevice_Connect_listener)(struct Main_Instance *)= 0x0;
void register_external_Main_send_NotifierDevice_Connect_listener(void (*_listener)(struct Main_Instance *)){
external_Main_send_NotifierDevice_Connect_listener = _listener;
}
void register_Main_send_NotifierDevice_Connect_listener(void (*_listener)(struct Main_Instance *)){
Main_send_NotifierDevice_Connect_listener = _listener;
}
void Main_send_NotifierDevice_Connect(struct Main_Instance *_instance){
if (Main_send_NotifierDevice_Connect_listener != 0x0) Main_send_NotifierDevice_Connect_listener(_instance);
if (external_Main_send_NotifierDevice_Connect_listener != 0x0) external_Main_send_NotifierDevice_Connect_listener(_instance);
;
}
void (*external_Main_send_NotifierDevice_Stop_listener)(struct Main_Instance *)= 0x0;
void (*Main_send_NotifierDevice_Stop_listener)(struct Main_Instance *)= 0x0;
void register_external_Main_send_NotifierDevice_Stop_listener(void (*_listener)(struct Main_Instance *)){
external_Main_send_NotifierDevice_Stop_listener = _listener;
}
void register_Main_send_NotifierDevice_Stop_listener(void (*_listener)(struct Main_Instance *)){
Main_send_NotifierDevice_Stop_listener = _listener;
}
void Main_send_NotifierDevice_Stop(struct Main_Instance *_instance){
if (Main_send_NotifierDevice_Stop_listener != 0x0) Main_send_NotifierDevice_Stop_listener(_instance);
if (external_Main_send_NotifierDevice_Stop_listener != 0x0) external_Main_send_NotifierDevice_Stop_listener(_instance);
;
}
void (*external_Main_send_NotifierDevice_Encrypt_listener)(struct Main_Instance *)= 0x0;
void (*Main_send_NotifierDevice_Encrypt_listener)(struct Main_Instance *)= 0x0;
void register_external_Main_send_NotifierDevice_Encrypt_listener(void (*_listener)(struct Main_Instance *)){
external_Main_send_NotifierDevice_Encrypt_listener = _listener;
}
void register_Main_send_NotifierDevice_Encrypt_listener(void (*_listener)(struct Main_Instance *)){
Main_send_NotifierDevice_Encrypt_listener = _listener;
}
void Main_send_NotifierDevice_Encrypt(struct Main_Instance *_instance){
if (Main_send_NotifierDevice_Encrypt_listener != 0x0) Main_send_NotifierDevice_Encrypt_listener(_instance);
if (external_Main_send_NotifierDevice_Encrypt_listener != 0x0) external_Main_send_NotifierDevice_Encrypt_listener(_instance);
;
}
void (*external_Main_send_WeightScaleCloud_TelluCloudWeightScale_listener)(struct Main_Instance *, time_t, float)= 0x0;
void (*Main_send_WeightScaleCloud_TelluCloudWeightScale_listener)(struct Main_Instance *, time_t, float)= 0x0;
void register_external_Main_send_WeightScaleCloud_TelluCloudWeightScale_listener(void (*_listener)(struct Main_Instance *, time_t, float)){
external_Main_send_WeightScaleCloud_TelluCloudWeightScale_listener = _listener;
}
void register_Main_send_WeightScaleCloud_TelluCloudWeightScale_listener(void (*_listener)(struct Main_Instance *, time_t, float)){
Main_send_WeightScaleCloud_TelluCloudWeightScale_listener = _listener;
}
void Main_send_WeightScaleCloud_TelluCloudWeightScale(struct Main_Instance *_instance, time_t observationTime, float mass){
if (Main_send_WeightScaleCloud_TelluCloudWeightScale_listener != 0x0) Main_send_WeightScaleCloud_TelluCloudWeightScale_listener(_instance, observationTime, mass);
if (external_Main_send_WeightScaleCloud_TelluCloudWeightScale_listener != 0x0) external_Main_send_WeightScaleCloud_TelluCloudWeightScale_listener(_instance, observationTime, mass);
;
}
void (*external_Main_send_Initialiser_Start_listener)(struct Main_Instance *)= 0x0;
void (*Main_send_Initialiser_Start_listener)(struct Main_Instance *)= 0x0;
void register_external_Main_send_Initialiser_Start_listener(void (*_listener)(struct Main_Instance *)){
external_Main_send_Initialiser_Start_listener = _listener;
}
void register_Main_send_Initialiser_Start_listener(void (*_listener)(struct Main_Instance *)){
Main_send_Initialiser_Start_listener = _listener;
}
void Main_send_Initialiser_Start(struct Main_Instance *_instance){
if (Main_send_Initialiser_Start_listener != 0x0) Main_send_Initialiser_Start_listener(_instance);
if (external_Main_send_Initialiser_Start_listener != 0x0) external_Main_send_Initialiser_Start_listener(_instance);
;
}
void (*external_Main_send_Initialiser_Stop_listener)(struct Main_Instance *)= 0x0;
void (*Main_send_Initialiser_Stop_listener)(struct Main_Instance *)= 0x0;
void register_external_Main_send_Initialiser_Stop_listener(void (*_listener)(struct Main_Instance *)){
external_Main_send_Initialiser_Stop_listener = _listener;
}
void register_Main_send_Initialiser_Stop_listener(void (*_listener)(struct Main_Instance *)){
Main_send_Initialiser_Stop_listener = _listener;
}
void Main_send_Initialiser_Stop(struct Main_Instance *_instance){
if (Main_send_Initialiser_Stop_listener != 0x0) Main_send_Initialiser_Stop_listener(_instance);
if (external_Main_send_Initialiser_Stop_listener != 0x0) external_Main_send_Initialiser_Stop_listener(_instance);
;
}
void (*external_Main_send_Notifications_RequestBloodPressureMeasurement_listener)(struct Main_Instance *)= 0x0;
void (*Main_send_Notifications_RequestBloodPressureMeasurement_listener)(struct Main_Instance *)= 0x0;
void register_external_Main_send_Notifications_RequestBloodPressureMeasurement_listener(void (*_listener)(struct Main_Instance *)){
external_Main_send_Notifications_RequestBloodPressureMeasurement_listener = _listener;
}
void register_Main_send_Notifications_RequestBloodPressureMeasurement_listener(void (*_listener)(struct Main_Instance *)){
Main_send_Notifications_RequestBloodPressureMeasurement_listener = _listener;
}
void Main_send_Notifications_RequestBloodPressureMeasurement(struct Main_Instance *_instance){
if (Main_send_Notifications_RequestBloodPressureMeasurement_listener != 0x0) Main_send_Notifications_RequestBloodPressureMeasurement_listener(_instance);
if (external_Main_send_Notifications_RequestBloodPressureMeasurement_listener != 0x0) external_Main_send_Notifications_RequestBloodPressureMeasurement_listener(_instance);
;
}
void (*external_Main_send_Notifications_ReceivedBloodPressureMeasurement_listener)(struct Main_Instance *)= 0x0;
void (*Main_send_Notifications_ReceivedBloodPressureMeasurement_listener)(struct Main_Instance *)= 0x0;
void register_external_Main_send_Notifications_ReceivedBloodPressureMeasurement_listener(void (*_listener)(struct Main_Instance *)){
external_Main_send_Notifications_ReceivedBloodPressureMeasurement_listener = _listener;
}
void register_Main_send_Notifications_ReceivedBloodPressureMeasurement_listener(void (*_listener)(struct Main_Instance *)){
Main_send_Notifications_ReceivedBloodPressureMeasurement_listener = _listener;
}
void Main_send_Notifications_ReceivedBloodPressureMeasurement(struct Main_Instance *_instance){
if (Main_send_Notifications_ReceivedBloodPressureMeasurement_listener != 0x0) Main_send_Notifications_ReceivedBloodPressureMeasurement_listener(_instance);
if (external_Main_send_Notifications_ReceivedBloodPressureMeasurement_listener != 0x0) external_Main_send_Notifications_ReceivedBloodPressureMeasurement_listener(_instance);
;
}
void (*external_Main_send_Notifications_BadBloodPressureMeasurement_listener)(struct Main_Instance *)= 0x0;
void (*Main_send_Notifications_BadBloodPressureMeasurement_listener)(struct Main_Instance *)= 0x0;
void register_external_Main_send_Notifications_BadBloodPressureMeasurement_listener(void (*_listener)(struct Main_Instance *)){
external_Main_send_Notifications_BadBloodPressureMeasurement_listener = _listener;
}
void register_Main_send_Notifications_BadBloodPressureMeasurement_listener(void (*_listener)(struct Main_Instance *)){
Main_send_Notifications_BadBloodPressureMeasurement_listener = _listener;
}
void Main_send_Notifications_BadBloodPressureMeasurement(struct Main_Instance *_instance){
if (Main_send_Notifications_BadBloodPressureMeasurement_listener != 0x0) Main_send_Notifications_BadBloodPressureMeasurement_listener(_instance);
if (external_Main_send_Notifications_BadBloodPressureMeasurement_listener != 0x0) external_Main_send_Notifications_BadBloodPressureMeasurement_listener(_instance);
;
}
void (*external_Main_send_Notifications_StoredBloodPressureMeasurement_listener)(struct Main_Instance *)= 0x0;
void (*Main_send_Notifications_StoredBloodPressureMeasurement_listener)(struct Main_Instance *)= 0x0;
void register_external_Main_send_Notifications_StoredBloodPressureMeasurement_listener(void (*_listener)(struct Main_Instance *)){
external_Main_send_Notifications_StoredBloodPressureMeasurement_listener = _listener;
}
void register_Main_send_Notifications_StoredBloodPressureMeasurement_listener(void (*_listener)(struct Main_Instance *)){
Main_send_Notifications_StoredBloodPressureMeasurement_listener = _listener;
}
void Main_send_Notifications_StoredBloodPressureMeasurement(struct Main_Instance *_instance){
if (Main_send_Notifications_StoredBloodPressureMeasurement_listener != 0x0) Main_send_Notifications_StoredBloodPressureMeasurement_listener(_instance);
if (external_Main_send_Notifications_StoredBloodPressureMeasurement_listener != 0x0) external_Main_send_Notifications_StoredBloodPressureMeasurement_listener(_instance);
;
}


// Enqueue incoming messages:
// Message enqueue
void enqueue_Main_Signals_Interrupt(struct Main_Instance * inst) {
    fifo_lock(&(inst->fifo));
    if ( fifo_byte_available(&(inst->fifo)) > 4 ) {

        _fifo_enqueue(&(inst->fifo), (67 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 67 & 0xFF );

        // Reception Port
        _fifo_enqueue(&(inst->fifo), (0 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 0 & 0xFF );
    }
    fifo_unlock_and_notify(&(inst->fifo));
}
void enqueue_Main_WeightScaleDevice_Stopped(struct Main_Instance * inst) {
    fifo_lock(&(inst->fifo));
    if ( fifo_byte_available(&(inst->fifo)) > 4 ) {

        _fifo_enqueue(&(inst->fifo), (60 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 60 & 0xFF );

        // Reception Port
        _fifo_enqueue(&(inst->fifo), (1 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 1 & 0xFF );
    }
    fifo_unlock_and_notify(&(inst->fifo));
}
void enqueue_Main_WeightScaleDevice_Failure(struct Main_Instance * inst) {
    fifo_lock(&(inst->fifo));
    if ( fifo_byte_available(&(inst->fifo)) > 4 ) {

        _fifo_enqueue(&(inst->fifo), (61 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 61 & 0xFF );

        // Reception Port
        _fifo_enqueue(&(inst->fifo), (1 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 1 & 0xFF );
    }
    fifo_unlock_and_notify(&(inst->fifo));
}
void enqueue_Main_WeightScaleDevice_Encrypted(struct Main_Instance * inst) {
    fifo_lock(&(inst->fifo));
    if ( fifo_byte_available(&(inst->fifo)) > 4 ) {

        _fifo_enqueue(&(inst->fifo), (62 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 62 & 0xFF );

        // Reception Port
        _fifo_enqueue(&(inst->fifo), (1 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 1 & 0xFF );
    }
    fifo_unlock_and_notify(&(inst->fifo));
}
void enqueue_Main_NotifierDevice_Stopped(struct Main_Instance * inst) {
    fifo_lock(&(inst->fifo));
    if ( fifo_byte_available(&(inst->fifo)) > 4 ) {

        _fifo_enqueue(&(inst->fifo), (60 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 60 & 0xFF );

        // Reception Port
        _fifo_enqueue(&(inst->fifo), (2 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 2 & 0xFF );
    }
    fifo_unlock_and_notify(&(inst->fifo));
}
void enqueue_Main_NotifierDevice_Failure(struct Main_Instance * inst) {
    fifo_lock(&(inst->fifo));
    if ( fifo_byte_available(&(inst->fifo)) > 4 ) {

        _fifo_enqueue(&(inst->fifo), (61 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 61 & 0xFF );

        // Reception Port
        _fifo_enqueue(&(inst->fifo), (2 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 2 & 0xFF );
    }
    fifo_unlock_and_notify(&(inst->fifo));
}
void enqueue_Main_WeightScaleCloud_MqttRequestWeightScaleMeasurement(struct Main_Instance * inst) {
    fifo_lock(&(inst->fifo));
    if ( fifo_byte_available(&(inst->fifo)) > 4 ) {

        _fifo_enqueue(&(inst->fifo), (68 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 68 & 0xFF );

        // Reception Port
        _fifo_enqueue(&(inst->fifo), (3 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 3 & 0xFF );
    }
    fifo_unlock_and_notify(&(inst->fifo));
}
void enqueue_Main_WeightScaleCloud_MqttConfirmWeightScaleMeasurement(struct Main_Instance * inst) {
    fifo_lock(&(inst->fifo));
    if ( fifo_byte_available(&(inst->fifo)) > 4 ) {

        _fifo_enqueue(&(inst->fifo), (69 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 69 & 0xFF );

        // Reception Port
        _fifo_enqueue(&(inst->fifo), (3 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 3 & 0xFF );
    }
    fifo_unlock_and_notify(&(inst->fifo));
}
void enqueue_Main_Initialiser_Stopped(struct Main_Instance * inst) {
    fifo_lock(&(inst->fifo));
    if ( fifo_byte_available(&(inst->fifo)) > 4 ) {

        _fifo_enqueue(&(inst->fifo), (60 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 60 & 0xFF );

        // Reception Port
        _fifo_enqueue(&(inst->fifo), (4 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 4 & 0xFF );
    }
    fifo_unlock_and_notify(&(inst->fifo));
}
void enqueue_Main_Initialiser_Failure(struct Main_Instance * inst) {
    fifo_lock(&(inst->fifo));
    if ( fifo_byte_available(&(inst->fifo)) > 4 ) {

        _fifo_enqueue(&(inst->fifo), (61 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 61 & 0xFF );

        // Reception Port
        _fifo_enqueue(&(inst->fifo), (4 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 4 & 0xFF );
    }
    fifo_unlock_and_notify(&(inst->fifo));
}
void enqueue_Main_Initialiser_DeviceInitialised(struct Main_Instance * inst, bdaddr_t Address) {
    fifo_lock(&(inst->fifo));
    if ( fifo_byte_available(&(inst->fifo)) > 10 ) {

        _fifo_enqueue(&(inst->fifo), (70 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 70 & 0xFF );

        // Reception Port
        _fifo_enqueue(&(inst->fifo), (4 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 4 & 0xFF );

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
void enqueue_Main_Weightscale_WeightscaleMeasurement(struct Main_Instance * inst, uint16_t Weight, uint8_t UnitImperial, uint16_t Year, uint8_t Month, uint8_t Day, uint8_t Hour, uint8_t Minute, uint8_t Second) {
    fifo_lock(&(inst->fifo));
    if ( fifo_byte_available(&(inst->fifo)) > 14 ) {

        _fifo_enqueue(&(inst->fifo), (71 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 71 & 0xFF );

        // Reception Port
        _fifo_enqueue(&(inst->fifo), (5 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 5 & 0xFF );

// parameter Weight
union u_Weight_t {
uint16_t p;
byte bytebuffer[2];
} u_Weight;
u_Weight.p = Weight;
_fifo_enqueue(&(inst->fifo), u_Weight.bytebuffer[1] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Weight.bytebuffer[0] & 0xFF );

// parameter UnitImperial
union u_UnitImperial_t {
uint8_t p;
byte bytebuffer[1];
} u_UnitImperial;
u_UnitImperial.p = UnitImperial;
_fifo_enqueue(&(inst->fifo), u_UnitImperial.bytebuffer[0] & 0xFF );

// parameter Year
union u_Year_t {
uint16_t p;
byte bytebuffer[2];
} u_Year;
u_Year.p = Year;
_fifo_enqueue(&(inst->fifo), u_Year.bytebuffer[1] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Year.bytebuffer[0] & 0xFF );

// parameter Month
union u_Month_t {
uint8_t p;
byte bytebuffer[1];
} u_Month;
u_Month.p = Month;
_fifo_enqueue(&(inst->fifo), u_Month.bytebuffer[0] & 0xFF );

// parameter Day
union u_Day_t {
uint8_t p;
byte bytebuffer[1];
} u_Day;
u_Day.p = Day;
_fifo_enqueue(&(inst->fifo), u_Day.bytebuffer[0] & 0xFF );

// parameter Hour
union u_Hour_t {
uint8_t p;
byte bytebuffer[1];
} u_Hour;
u_Hour.p = Hour;
_fifo_enqueue(&(inst->fifo), u_Hour.bytebuffer[0] & 0xFF );

// parameter Minute
union u_Minute_t {
uint8_t p;
byte bytebuffer[1];
} u_Minute;
u_Minute.p = Minute;
_fifo_enqueue(&(inst->fifo), u_Minute.bytebuffer[0] & 0xFF );

// parameter Second
union u_Second_t {
uint8_t p;
byte bytebuffer[1];
} u_Second;
u_Second.p = Second;
_fifo_enqueue(&(inst->fifo), u_Second.bytebuffer[0] & 0xFF );
    }
    fifo_unlock_and_notify(&(inst->fifo));
}
void enqueue_Main_Notifications_ReadyForNotificationCommand(struct Main_Instance * inst) {
    fifo_lock(&(inst->fifo));
    if ( fifo_byte_available(&(inst->fifo)) > 4 ) {

        _fifo_enqueue(&(inst->fifo), (72 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 72 & 0xFF );

        // Reception Port
        _fifo_enqueue(&(inst->fifo), (6 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 6 & 0xFF );
    }
    fifo_unlock_and_notify(&(inst->fifo));
}

// Session functions:

// Message Process Queue:
int Main_processMessageQueue(struct Main_Instance * _instance) {
fifo_lock(&(_instance->fifo));
if (fifo_empty(&(_instance->fifo))) fifo_wait(&(_instance->fifo));
uint8_t mbufi = 0;

// Read the code of the next port/message in the queue
uint16_t code = fifo_dequeue(&(_instance->fifo)) << 8;

code += fifo_dequeue(&(_instance->fifo));

// Switch to call the appropriate handler
switch(code) {
case 67:{
byte mbuf[4 - 2];
while (mbufi < (4 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
uint8_t mbufi_Interrupt = 2;
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
case 0:{
Main_handle_Signals_Interrupt(_instance);
return 1;
break;
}
}
break;
}
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
case 1:{
Main_handle_WeightScaleDevice_Stopped(_instance);
return 1;
break;
}
case 2:{
Main_handle_NotifierDevice_Stopped(_instance);
return 1;
break;
}
case 4:{
Main_handle_Initialiser_Stopped(_instance);
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
case 1:{
Main_handle_WeightScaleDevice_Failure(_instance);
return 1;
break;
}
case 2:{
Main_handle_NotifierDevice_Failure(_instance);
return 1;
break;
}
case 4:{
Main_handle_Initialiser_Failure(_instance);
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
case 1:{
Main_handle_WeightScaleDevice_Encrypted(_instance);
return 1;
break;
}
}
break;
}
case 68:{
byte mbuf[4 - 2];
while (mbufi < (4 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
uint8_t mbufi_MqttRequestWeightScaleMeasurement = 2;
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
case 3:{
Main_handle_WeightScaleCloud_MqttRequestWeightScaleMeasurement(_instance);
return 1;
break;
}
}
break;
}
case 69:{
byte mbuf[4 - 2];
while (mbufi < (4 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
uint8_t mbufi_MqttConfirmWeightScaleMeasurement = 2;
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
case 3:{
Main_handle_WeightScaleCloud_MqttConfirmWeightScaleMeasurement(_instance);
return 1;
break;
}
}
break;
}
case 73:{
byte mbuf[4 - 2];
while (mbufi < (4 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
uint8_t mbufi_Started = 2;
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
}
break;
}
case 70:{
byte mbuf[10 - 2];
while (mbufi < (10 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
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
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
case 4:{
Main_handle_Initialiser_DeviceInitialised(_instance,
 u_DeviceInitialised_Address.p /* Address */ );
return 1;
break;
}
}
break;
}
case 74:{
byte mbuf[5 - 2];
while (mbufi < (5 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
uint8_t mbufi_BatteryPercentage = 2;
union u_BatteryPercentage_Percent_t {
uint8_t p;
byte bytebuffer[1];
} u_BatteryPercentage_Percent;
u_BatteryPercentage_Percent.bytebuffer[0] = mbuf[mbufi_BatteryPercentage + 0];
mbufi_BatteryPercentage += 1;
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
}
break;
}
case 71:{
byte mbuf[14 - 2];
while (mbufi < (14 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
uint8_t mbufi_WeightscaleMeasurement = 2;
union u_WeightscaleMeasurement_Weight_t {
uint16_t p;
byte bytebuffer[2];
} u_WeightscaleMeasurement_Weight;
u_WeightscaleMeasurement_Weight.bytebuffer[1] = mbuf[mbufi_WeightscaleMeasurement + 0];
u_WeightscaleMeasurement_Weight.bytebuffer[0] = mbuf[mbufi_WeightscaleMeasurement + 1];
mbufi_WeightscaleMeasurement += 2;
union u_WeightscaleMeasurement_UnitImperial_t {
uint8_t p;
byte bytebuffer[1];
} u_WeightscaleMeasurement_UnitImperial;
u_WeightscaleMeasurement_UnitImperial.bytebuffer[0] = mbuf[mbufi_WeightscaleMeasurement + 0];
mbufi_WeightscaleMeasurement += 1;
union u_WeightscaleMeasurement_Year_t {
uint16_t p;
byte bytebuffer[2];
} u_WeightscaleMeasurement_Year;
u_WeightscaleMeasurement_Year.bytebuffer[1] = mbuf[mbufi_WeightscaleMeasurement + 0];
u_WeightscaleMeasurement_Year.bytebuffer[0] = mbuf[mbufi_WeightscaleMeasurement + 1];
mbufi_WeightscaleMeasurement += 2;
union u_WeightscaleMeasurement_Month_t {
uint8_t p;
byte bytebuffer[1];
} u_WeightscaleMeasurement_Month;
u_WeightscaleMeasurement_Month.bytebuffer[0] = mbuf[mbufi_WeightscaleMeasurement + 0];
mbufi_WeightscaleMeasurement += 1;
union u_WeightscaleMeasurement_Day_t {
uint8_t p;
byte bytebuffer[1];
} u_WeightscaleMeasurement_Day;
u_WeightscaleMeasurement_Day.bytebuffer[0] = mbuf[mbufi_WeightscaleMeasurement + 0];
mbufi_WeightscaleMeasurement += 1;
union u_WeightscaleMeasurement_Hour_t {
uint8_t p;
byte bytebuffer[1];
} u_WeightscaleMeasurement_Hour;
u_WeightscaleMeasurement_Hour.bytebuffer[0] = mbuf[mbufi_WeightscaleMeasurement + 0];
mbufi_WeightscaleMeasurement += 1;
union u_WeightscaleMeasurement_Minute_t {
uint8_t p;
byte bytebuffer[1];
} u_WeightscaleMeasurement_Minute;
u_WeightscaleMeasurement_Minute.bytebuffer[0] = mbuf[mbufi_WeightscaleMeasurement + 0];
mbufi_WeightscaleMeasurement += 1;
union u_WeightscaleMeasurement_Second_t {
uint8_t p;
byte bytebuffer[1];
} u_WeightscaleMeasurement_Second;
u_WeightscaleMeasurement_Second.bytebuffer[0] = mbuf[mbufi_WeightscaleMeasurement + 0];
mbufi_WeightscaleMeasurement += 1;
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
case 5:{
Main_handle_Weightscale_WeightscaleMeasurement(_instance,
 u_WeightscaleMeasurement_Weight.p /* Weight */ ,
 u_WeightscaleMeasurement_UnitImperial.p /* UnitImperial */ ,
 u_WeightscaleMeasurement_Year.p /* Year */ ,
 u_WeightscaleMeasurement_Month.p /* Month */ ,
 u_WeightscaleMeasurement_Day.p /* Day */ ,
 u_WeightscaleMeasurement_Hour.p /* Hour */ ,
 u_WeightscaleMeasurement_Minute.p /* Minute */ ,
 u_WeightscaleMeasurement_Second.p /* Second */ );
return 1;
break;
}
}
break;
}
case 72:{
byte mbuf[4 - 2];
while (mbufi < (4 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
uint8_t mbufi_ReadyForNotificationCommand = 2;
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
case 6:{
Main_handle_Notifications_ReadyForNotificationCommand(_instance);
return 1;
break;
}
}
break;
}
}
return 1;
}

// Thing main:
void Main_run(struct Main_Instance * _instance) {
if(_instance->initState != -1) {
Main_States_OnEntry(_instance->initState, _instance);
}
    while(1){
        Main_processMessageQueue(_instance);
    }
}


