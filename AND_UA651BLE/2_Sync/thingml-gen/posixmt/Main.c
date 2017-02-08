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
void Main_send_BloodPressureDevice_Connect(struct Main_Instance *_instance);
void Main_send_BloodPressureDevice_Stop(struct Main_Instance *_instance);
void Main_send_BloodPressureDevice_Encrypt(struct Main_Instance *_instance);
void Main_send_NotifierDevice_Connect(struct Main_Instance *_instance);
void Main_send_NotifierDevice_Stop(struct Main_Instance *_instance);
void Main_send_NotifierDevice_Encrypt(struct Main_Instance *_instance);
void Main_send_BloodPressureCloud_TelluCloudBloodPressure(struct Main_Instance *_instance, time_t observationTime, int16_t health_pressure_diastolic, int16_t health_pressure_mean, int16_t health_pressure_systolic, int16_t health_pulseRate);
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
_instance->Main_States_Standby_State = MAIN_STATES_STANDBY_SYNCBLOODPRESSURE_STATE;
Main_States_OnEntry(_instance->Main_States_Standby_State, _instance);
break;
}
case MAIN_STATES_STANDBY_SYNCBLOODPRESSURE_STATE:{
_instance->Main_States_Standby_SyncBloodPressure_State = MAIN_STATES_STANDBY_SYNCBLOODPRESSURE_CONNECTBP_STATE;
Main_States_OnEntry(_instance->Main_States_Standby_SyncBloodPressure_State, _instance);
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
Main_send_BloodPressureDevice_Stop(_instance);
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
case MAIN_STATES_STANDBY_SYNCBLOODPRESSURE_CONNECTBP_STATE:{
fprintf(stdout, "[INFO]: Connecting to Blood Pressure Monitor...\n");
Main_send_BloodPressureDevice_Connect(_instance);
break;
}
case MAIN_STATES_STANDBY_SYNCBLOODPRESSURE_CONNECTEDBP_STATE:{
_instance->Main_States_Standby_SyncBloodPressure_ConnectedBP_GotMeasurements_var = 0;
_instance->Main_States_Standby_SyncBloodPressure_ConnectedBP_MeasurementOK_var = 0;
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
case MAIN_STATES_STANDBY_SYNCBLOODPRESSURE_STATE:{
Main_States_OnExit(_instance->Main_States_Standby_SyncBloodPressure_State, _instance);
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
case MAIN_STATES_STANDBY_SYNCBLOODPRESSURE_CONNECTBP_STATE:{
break;}
case MAIN_STATES_STANDBY_SYNCBLOODPRESSURE_CONNECTEDBP_STATE:{
break;}
case MAIN_STATES_STANDBY_SENDTONOTIFIER_CONNECTN_STATE:{
break;}
case MAIN_STATES_STANDBY_SENDTONOTIFIER_CONNECTEDN_STATE:{
break;}
default: break;
}
}

// Event Handlers for incoming messages:
void Main_handle_BloodPressureDevice_Failure(struct Main_Instance *_instance) {
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
void Main_handle_BloodPressureDevice_Stopped(struct Main_Instance *_instance) {
//Region States
uint8_t Main_States_State_event_consumed = 0;
if (_instance->Main_States_State == MAIN_STATES_STANDBY_STATE) {
//Region Standby
uint8_t Main_States_Standby_State_event_consumed = 0;
if (_instance->Main_States_Standby_State == MAIN_STATES_STANDBY_SYNCBLOODPRESSURE_STATE) {
//Region SyncBloodPressure
uint8_t Main_States_Standby_SyncBloodPressure_State_event_consumed = 0;
if (_instance->Main_States_Standby_SyncBloodPressure_State == MAIN_STATES_STANDBY_SYNCBLOODPRESSURE_CONNECTEDBP_STATE) {
if (Main_States_Standby_SyncBloodPressure_State_event_consumed == 0 && ( !(_instance->Main_States_Standby_SyncBloodPressure_ConnectedBP_GotMeasurements_var))) {
Main_States_OnExit(MAIN_STATES_STANDBY_SYNCBLOODPRESSURE_CONNECTEDBP_STATE, _instance);
_instance->Main_States_Standby_SyncBloodPressure_State = MAIN_STATES_STANDBY_SYNCBLOODPRESSURE_CONNECTBP_STATE;
fprintf(stdout, "[WARNING]: Finished syncing with Blood Pressure Monitor but got no measurements!\n");
Main_States_OnEntry(MAIN_STATES_STANDBY_SYNCBLOODPRESSURE_CONNECTBP_STATE, _instance);
Main_States_Standby_SyncBloodPressure_State_event_consumed = 1;
}
else if (Main_States_Standby_SyncBloodPressure_State_event_consumed == 0 && (_instance->Main_States_Standby_SyncBloodPressure_ConnectedBP_GotMeasurements_var && !(_instance->Main_SendToNotifier_var & 0x03))) {
fprintf(stdout, "[INFO]: Finished syncing with Blood Pressure Monitor.\n");
if(_instance->Main_States_Standby_SyncBloodPressure_ConnectedBP_MeasurementOK_var) {
_instance->Main_SendToNotifier_var |= 0x02;

} else {
_instance->Main_SendToNotifier_var |= 0x01;

}
Main_send_BloodPressureDevice_Stop(_instance);
Main_States_Standby_SyncBloodPressure_State_event_consumed = 1;
}
}
//End Region SyncBloodPressure
Main_States_Standby_State_event_consumed = 0 | Main_States_Standby_SyncBloodPressure_State_event_consumed ;
//End dsregion SyncBloodPressure
if (Main_States_Standby_State_event_consumed == 0 && (_instance->Main_SendToNotifier_var != 0x00)) {
Main_States_OnExit(MAIN_STATES_STANDBY_SYNCBLOODPRESSURE_STATE, _instance);
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
void Main_handle_BloodPressureDevice_Encrypted(struct Main_Instance *_instance) {
//Region States
uint8_t Main_States_State_event_consumed = 0;
if (_instance->Main_States_State == MAIN_STATES_STANDBY_STATE) {
//Region Standby
uint8_t Main_States_Standby_State_event_consumed = 0;
if (_instance->Main_States_Standby_State == MAIN_STATES_STANDBY_SYNCBLOODPRESSURE_STATE) {
//Region SyncBloodPressure
uint8_t Main_States_Standby_SyncBloodPressure_State_event_consumed = 0;
if (_instance->Main_States_Standby_SyncBloodPressure_State == MAIN_STATES_STANDBY_SYNCBLOODPRESSURE_CONNECTBP_STATE) {
if (Main_States_Standby_SyncBloodPressure_State_event_consumed == 0 && 1) {
Main_States_OnExit(MAIN_STATES_STANDBY_SYNCBLOODPRESSURE_CONNECTBP_STATE, _instance);
_instance->Main_States_Standby_SyncBloodPressure_State = MAIN_STATES_STANDBY_SYNCBLOODPRESSURE_CONNECTEDBP_STATE;
Main_States_OnEntry(MAIN_STATES_STANDBY_SYNCBLOODPRESSURE_CONNECTEDBP_STATE, _instance);
Main_States_Standby_SyncBloodPressure_State_event_consumed = 1;
}
}
//End Region SyncBloodPressure
Main_States_Standby_State_event_consumed = 0 | Main_States_Standby_SyncBloodPressure_State_event_consumed ;
//End dsregion SyncBloodPressure
}
//End Region Standby
Main_States_State_event_consumed = 0 | Main_States_Standby_State_event_consumed ;
//End dsregion Standby
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
_instance->Main_States_Standby_State = MAIN_STATES_STANDBY_SYNCBLOODPRESSURE_STATE;
Main_States_OnEntry(MAIN_STATES_STANDBY_SYNCBLOODPRESSURE_STATE, _instance);
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
_instance->Main_States_Standby_State = MAIN_STATES_STANDBY_SYNCBLOODPRESSURE_STATE;
Main_States_OnEntry(MAIN_STATES_STANDBY_SYNCBLOODPRESSURE_STATE, _instance);
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
void Main_handle_BloodPressureCloud_MqttRequestBloodPressureMeasurement(struct Main_Instance *_instance) {
//Region States
uint8_t Main_States_State_event_consumed = 0;
if (_instance->Main_States_State == MAIN_STATES_STANDBY_STATE) {
//Region Standby
uint8_t Main_States_Standby_State_event_consumed = 0;
if (_instance->Main_States_Standby_State == MAIN_STATES_STANDBY_SYNCBLOODPRESSURE_STATE) {
//Region SyncBloodPressure
uint8_t Main_States_Standby_SyncBloodPressure_State_event_consumed = 0;
if (_instance->Main_States_Standby_SyncBloodPressure_State == MAIN_STATES_STANDBY_SYNCBLOODPRESSURE_CONNECTBP_STATE) {
if (Main_States_Standby_SyncBloodPressure_State_event_consumed == 0 && 1) {
_instance->Main_SendToNotifier_var |= 0x08;
Main_send_BloodPressureDevice_Stop(_instance);
Main_States_Standby_SyncBloodPressure_State_event_consumed = 1;
}
}
//End Region SyncBloodPressure
Main_States_Standby_State_event_consumed = 0 | Main_States_Standby_SyncBloodPressure_State_event_consumed ;
//End dsregion SyncBloodPressure
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
void Main_handle_BloodPressureCloud_MqttConfirmBloodPressureMeasurement(struct Main_Instance *_instance) {
//Region States
uint8_t Main_States_State_event_consumed = 0;
if (_instance->Main_States_State == MAIN_STATES_STANDBY_STATE) {
//Region Standby
uint8_t Main_States_Standby_State_event_consumed = 0;
if (_instance->Main_States_Standby_State == MAIN_STATES_STANDBY_SYNCBLOODPRESSURE_STATE) {
//Region SyncBloodPressure
uint8_t Main_States_Standby_SyncBloodPressure_State_event_consumed = 0;
if (_instance->Main_States_Standby_SyncBloodPressure_State == MAIN_STATES_STANDBY_SYNCBLOODPRESSURE_CONNECTBP_STATE) {
if (Main_States_Standby_SyncBloodPressure_State_event_consumed == 0 && 1) {
_instance->Main_SendToNotifier_var |= 0x04;
Main_send_BloodPressureDevice_Stop(_instance);
Main_States_Standby_SyncBloodPressure_State_event_consumed = 1;
}
}
//End Region SyncBloodPressure
Main_States_Standby_State_event_consumed = 0 | Main_States_Standby_SyncBloodPressure_State_event_consumed ;
//End dsregion SyncBloodPressure
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
void Main_handle_Bloodpressure_BloodPressureMeasurement(struct Main_Instance *_instance, float Systolic, float Diastolic, float MeanArterial, uint8_t UnitKPA, uint16_t Year, uint8_t Month, uint8_t Day, uint8_t Hour, uint8_t Minute, uint8_t Second, float Pulse, uint8_t IrregularPulse) {
//Region States
uint8_t Main_States_State_event_consumed = 0;
if (_instance->Main_States_State == MAIN_STATES_STANDBY_STATE) {
//Region Standby
uint8_t Main_States_Standby_State_event_consumed = 0;
if (_instance->Main_States_Standby_State == MAIN_STATES_STANDBY_SYNCBLOODPRESSURE_STATE) {
//Region SyncBloodPressure
uint8_t Main_States_Standby_SyncBloodPressure_State_event_consumed = 0;
if (_instance->Main_States_Standby_SyncBloodPressure_State == MAIN_STATES_STANDBY_SYNCBLOODPRESSURE_CONNECTEDBP_STATE) {
if (Main_States_Standby_SyncBloodPressure_State_event_consumed == 0 && 1) {
_instance->Main_States_Standby_SyncBloodPressure_ConnectedBP_GotMeasurements_var = 1;
_instance->Main_States_Standby_SyncBloodPressure_ConnectedBP_MeasurementOK_var = !isnan(Systolic);
if(_instance->Main_States_Standby_SyncBloodPressure_ConnectedBP_MeasurementOK_var) {
;time_t ObservationTime = 0;
;int16_t HealthPressureDiastolic = Diastolic;
;int16_t HealthPressureMean = MeanArterial;
;int16_t HealthPressureSystolic = Systolic;
;int16_t HealthPulseRate = Pulse;

                printf("%i.%i.%i ", Year, Month, Day);
                printf("%i:%i:%i\n", Hour, Minute, Second);
              

                struct tm timebuf;
                timebuf.tm_year = Year-1900;
                timebuf.tm_mon = Month-1;
                timebuf.tm_mday = Day;
                timebuf.tm_hour = Hour;
                timebuf.tm_min = Minute;
                timebuf.tm_sec = Second;
              
ObservationTime = timegm(&timebuf);
Main_send_BloodPressureCloud_TelluCloudBloodPressure(_instance, ObservationTime, HealthPressureDiastolic, HealthPressureMean, HealthPressureSystolic, HealthPulseRate);

}
Main_States_Standby_SyncBloodPressure_State_event_consumed = 1;
}
}
//End Region SyncBloodPressure
Main_States_Standby_State_event_consumed = 0 | Main_States_Standby_SyncBloodPressure_State_event_consumed ;
//End dsregion SyncBloodPressure
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
void (*external_Main_send_BloodPressureDevice_Connect_listener)(struct Main_Instance *)= 0x0;
void (*Main_send_BloodPressureDevice_Connect_listener)(struct Main_Instance *)= 0x0;
void register_external_Main_send_BloodPressureDevice_Connect_listener(void (*_listener)(struct Main_Instance *)){
external_Main_send_BloodPressureDevice_Connect_listener = _listener;
}
void register_Main_send_BloodPressureDevice_Connect_listener(void (*_listener)(struct Main_Instance *)){
Main_send_BloodPressureDevice_Connect_listener = _listener;
}
void Main_send_BloodPressureDevice_Connect(struct Main_Instance *_instance){
if (Main_send_BloodPressureDevice_Connect_listener != 0x0) Main_send_BloodPressureDevice_Connect_listener(_instance);
if (external_Main_send_BloodPressureDevice_Connect_listener != 0x0) external_Main_send_BloodPressureDevice_Connect_listener(_instance);
;
}
void (*external_Main_send_BloodPressureDevice_Stop_listener)(struct Main_Instance *)= 0x0;
void (*Main_send_BloodPressureDevice_Stop_listener)(struct Main_Instance *)= 0x0;
void register_external_Main_send_BloodPressureDevice_Stop_listener(void (*_listener)(struct Main_Instance *)){
external_Main_send_BloodPressureDevice_Stop_listener = _listener;
}
void register_Main_send_BloodPressureDevice_Stop_listener(void (*_listener)(struct Main_Instance *)){
Main_send_BloodPressureDevice_Stop_listener = _listener;
}
void Main_send_BloodPressureDevice_Stop(struct Main_Instance *_instance){
if (Main_send_BloodPressureDevice_Stop_listener != 0x0) Main_send_BloodPressureDevice_Stop_listener(_instance);
if (external_Main_send_BloodPressureDevice_Stop_listener != 0x0) external_Main_send_BloodPressureDevice_Stop_listener(_instance);
;
}
void (*external_Main_send_BloodPressureDevice_Encrypt_listener)(struct Main_Instance *)= 0x0;
void (*Main_send_BloodPressureDevice_Encrypt_listener)(struct Main_Instance *)= 0x0;
void register_external_Main_send_BloodPressureDevice_Encrypt_listener(void (*_listener)(struct Main_Instance *)){
external_Main_send_BloodPressureDevice_Encrypt_listener = _listener;
}
void register_Main_send_BloodPressureDevice_Encrypt_listener(void (*_listener)(struct Main_Instance *)){
Main_send_BloodPressureDevice_Encrypt_listener = _listener;
}
void Main_send_BloodPressureDevice_Encrypt(struct Main_Instance *_instance){
if (Main_send_BloodPressureDevice_Encrypt_listener != 0x0) Main_send_BloodPressureDevice_Encrypt_listener(_instance);
if (external_Main_send_BloodPressureDevice_Encrypt_listener != 0x0) external_Main_send_BloodPressureDevice_Encrypt_listener(_instance);
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
void (*external_Main_send_BloodPressureCloud_TelluCloudBloodPressure_listener)(struct Main_Instance *, time_t, int16_t, int16_t, int16_t, int16_t)= 0x0;
void (*Main_send_BloodPressureCloud_TelluCloudBloodPressure_listener)(struct Main_Instance *, time_t, int16_t, int16_t, int16_t, int16_t)= 0x0;
void register_external_Main_send_BloodPressureCloud_TelluCloudBloodPressure_listener(void (*_listener)(struct Main_Instance *, time_t, int16_t, int16_t, int16_t, int16_t)){
external_Main_send_BloodPressureCloud_TelluCloudBloodPressure_listener = _listener;
}
void register_Main_send_BloodPressureCloud_TelluCloudBloodPressure_listener(void (*_listener)(struct Main_Instance *, time_t, int16_t, int16_t, int16_t, int16_t)){
Main_send_BloodPressureCloud_TelluCloudBloodPressure_listener = _listener;
}
void Main_send_BloodPressureCloud_TelluCloudBloodPressure(struct Main_Instance *_instance, time_t observationTime, int16_t health_pressure_diastolic, int16_t health_pressure_mean, int16_t health_pressure_systolic, int16_t health_pulseRate){
if (Main_send_BloodPressureCloud_TelluCloudBloodPressure_listener != 0x0) Main_send_BloodPressureCloud_TelluCloudBloodPressure_listener(_instance, observationTime, health_pressure_diastolic, health_pressure_mean, health_pressure_systolic, health_pulseRate);
if (external_Main_send_BloodPressureCloud_TelluCloudBloodPressure_listener != 0x0) external_Main_send_BloodPressureCloud_TelluCloudBloodPressure_listener(_instance, observationTime, health_pressure_diastolic, health_pressure_mean, health_pressure_systolic, health_pulseRate);
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

        _fifo_enqueue(&(inst->fifo), (62 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 62 & 0xFF );

        // Reception Port
        _fifo_enqueue(&(inst->fifo), (0 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 0 & 0xFF );
    }
    fifo_unlock_and_notify(&(inst->fifo));
}
void enqueue_Main_BloodPressureDevice_Stopped(struct Main_Instance * inst) {
    fifo_lock(&(inst->fifo));
    if ( fifo_byte_available(&(inst->fifo)) > 4 ) {

        _fifo_enqueue(&(inst->fifo), (63 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 63 & 0xFF );

        // Reception Port
        _fifo_enqueue(&(inst->fifo), (1 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 1 & 0xFF );
    }
    fifo_unlock_and_notify(&(inst->fifo));
}
void enqueue_Main_BloodPressureDevice_Failure(struct Main_Instance * inst) {
    fifo_lock(&(inst->fifo));
    if ( fifo_byte_available(&(inst->fifo)) > 4 ) {

        _fifo_enqueue(&(inst->fifo), (64 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 64 & 0xFF );

        // Reception Port
        _fifo_enqueue(&(inst->fifo), (1 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 1 & 0xFF );
    }
    fifo_unlock_and_notify(&(inst->fifo));
}
void enqueue_Main_BloodPressureDevice_Encrypted(struct Main_Instance * inst) {
    fifo_lock(&(inst->fifo));
    if ( fifo_byte_available(&(inst->fifo)) > 4 ) {

        _fifo_enqueue(&(inst->fifo), (65 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 65 & 0xFF );

        // Reception Port
        _fifo_enqueue(&(inst->fifo), (1 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 1 & 0xFF );
    }
    fifo_unlock_and_notify(&(inst->fifo));
}
void enqueue_Main_NotifierDevice_Stopped(struct Main_Instance * inst) {
    fifo_lock(&(inst->fifo));
    if ( fifo_byte_available(&(inst->fifo)) > 4 ) {

        _fifo_enqueue(&(inst->fifo), (63 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 63 & 0xFF );

        // Reception Port
        _fifo_enqueue(&(inst->fifo), (2 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 2 & 0xFF );
    }
    fifo_unlock_and_notify(&(inst->fifo));
}
void enqueue_Main_NotifierDevice_Failure(struct Main_Instance * inst) {
    fifo_lock(&(inst->fifo));
    if ( fifo_byte_available(&(inst->fifo)) > 4 ) {

        _fifo_enqueue(&(inst->fifo), (64 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 64 & 0xFF );

        // Reception Port
        _fifo_enqueue(&(inst->fifo), (2 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 2 & 0xFF );
    }
    fifo_unlock_and_notify(&(inst->fifo));
}
void enqueue_Main_BloodPressureCloud_MqttRequestBloodPressureMeasurement(struct Main_Instance * inst) {
    fifo_lock(&(inst->fifo));
    if ( fifo_byte_available(&(inst->fifo)) > 4 ) {

        _fifo_enqueue(&(inst->fifo), (66 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 66 & 0xFF );

        // Reception Port
        _fifo_enqueue(&(inst->fifo), (3 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 3 & 0xFF );
    }
    fifo_unlock_and_notify(&(inst->fifo));
}
void enqueue_Main_BloodPressureCloud_MqttConfirmBloodPressureMeasurement(struct Main_Instance * inst) {
    fifo_lock(&(inst->fifo));
    if ( fifo_byte_available(&(inst->fifo)) > 4 ) {

        _fifo_enqueue(&(inst->fifo), (67 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 67 & 0xFF );

        // Reception Port
        _fifo_enqueue(&(inst->fifo), (3 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 3 & 0xFF );
    }
    fifo_unlock_and_notify(&(inst->fifo));
}
void enqueue_Main_Initialiser_Stopped(struct Main_Instance * inst) {
    fifo_lock(&(inst->fifo));
    if ( fifo_byte_available(&(inst->fifo)) > 4 ) {

        _fifo_enqueue(&(inst->fifo), (63 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 63 & 0xFF );

        // Reception Port
        _fifo_enqueue(&(inst->fifo), (4 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 4 & 0xFF );
    }
    fifo_unlock_and_notify(&(inst->fifo));
}
void enqueue_Main_Initialiser_Failure(struct Main_Instance * inst) {
    fifo_lock(&(inst->fifo));
    if ( fifo_byte_available(&(inst->fifo)) > 4 ) {

        _fifo_enqueue(&(inst->fifo), (64 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 64 & 0xFF );

        // Reception Port
        _fifo_enqueue(&(inst->fifo), (4 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 4 & 0xFF );
    }
    fifo_unlock_and_notify(&(inst->fifo));
}
void enqueue_Main_Initialiser_DeviceInitialised(struct Main_Instance * inst, bdaddr_t Address) {
    fifo_lock(&(inst->fifo));
    if ( fifo_byte_available(&(inst->fifo)) > 10 ) {

        _fifo_enqueue(&(inst->fifo), (68 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 68 & 0xFF );

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
void enqueue_Main_Bloodpressure_BloodPressureMeasurement(struct Main_Instance * inst, float Systolic, float Diastolic, float MeanArterial, uint8_t UnitKPA, uint16_t Year, uint8_t Month, uint8_t Day, uint8_t Hour, uint8_t Minute, uint8_t Second, float Pulse, uint8_t IrregularPulse) {
    fifo_lock(&(inst->fifo));
    if ( fifo_byte_available(&(inst->fifo)) > 29 ) {

        _fifo_enqueue(&(inst->fifo), (69 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 69 & 0xFF );

        // Reception Port
        _fifo_enqueue(&(inst->fifo), (5 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 5 & 0xFF );

// parameter Systolic
union u_Systolic_t {
float p;
byte bytebuffer[4];
} u_Systolic;
u_Systolic.p = Systolic;
_fifo_enqueue(&(inst->fifo), u_Systolic.bytebuffer[3] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Systolic.bytebuffer[2] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Systolic.bytebuffer[1] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Systolic.bytebuffer[0] & 0xFF );

// parameter Diastolic
union u_Diastolic_t {
float p;
byte bytebuffer[4];
} u_Diastolic;
u_Diastolic.p = Diastolic;
_fifo_enqueue(&(inst->fifo), u_Diastolic.bytebuffer[3] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Diastolic.bytebuffer[2] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Diastolic.bytebuffer[1] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Diastolic.bytebuffer[0] & 0xFF );

// parameter MeanArterial
union u_MeanArterial_t {
float p;
byte bytebuffer[4];
} u_MeanArterial;
u_MeanArterial.p = MeanArterial;
_fifo_enqueue(&(inst->fifo), u_MeanArterial.bytebuffer[3] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_MeanArterial.bytebuffer[2] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_MeanArterial.bytebuffer[1] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_MeanArterial.bytebuffer[0] & 0xFF );

// parameter UnitKPA
union u_UnitKPA_t {
uint8_t p;
byte bytebuffer[1];
} u_UnitKPA;
u_UnitKPA.p = UnitKPA;
_fifo_enqueue(&(inst->fifo), u_UnitKPA.bytebuffer[0] & 0xFF );

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

// parameter Pulse
union u_Pulse_t {
float p;
byte bytebuffer[4];
} u_Pulse;
u_Pulse.p = Pulse;
_fifo_enqueue(&(inst->fifo), u_Pulse.bytebuffer[3] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Pulse.bytebuffer[2] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Pulse.bytebuffer[1] & 0xFF );
_fifo_enqueue(&(inst->fifo), u_Pulse.bytebuffer[0] & 0xFF );

// parameter IrregularPulse
union u_IrregularPulse_t {
uint8_t p;
byte bytebuffer[1];
} u_IrregularPulse;
u_IrregularPulse.p = IrregularPulse;
_fifo_enqueue(&(inst->fifo), u_IrregularPulse.bytebuffer[0] & 0xFF );
    }
    fifo_unlock_and_notify(&(inst->fifo));
}
void enqueue_Main_Notifications_ReadyForNotificationCommand(struct Main_Instance * inst) {
    fifo_lock(&(inst->fifo));
    if ( fifo_byte_available(&(inst->fifo)) > 4 ) {

        _fifo_enqueue(&(inst->fifo), (70 >> 8) & 0xFF );
        _fifo_enqueue(&(inst->fifo), 70 & 0xFF );

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
case 62:{
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
case 71:{
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
case 63:{
byte mbuf[4 - 2];
while (mbufi < (4 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
uint8_t mbufi_Stopped = 2;
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
case 1:{
Main_handle_BloodPressureDevice_Stopped(_instance);
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
case 64:{
byte mbuf[4 - 2];
while (mbufi < (4 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
uint8_t mbufi_Failure = 2;
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
case 1:{
Main_handle_BloodPressureDevice_Failure(_instance);
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
case 65:{
byte mbuf[4 - 2];
while (mbufi < (4 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
uint8_t mbufi_Encrypted = 2;
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
case 1:{
Main_handle_BloodPressureDevice_Encrypted(_instance);
return 1;
break;
}
}
break;
}
case 66:{
byte mbuf[4 - 2];
while (mbufi < (4 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
uint8_t mbufi_MqttRequestBloodPressureMeasurement = 2;
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
case 3:{
Main_handle_BloodPressureCloud_MqttRequestBloodPressureMeasurement(_instance);
return 1;
break;
}
}
break;
}
case 67:{
byte mbuf[4 - 2];
while (mbufi < (4 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
uint8_t mbufi_MqttConfirmBloodPressureMeasurement = 2;
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
case 3:{
Main_handle_BloodPressureCloud_MqttConfirmBloodPressureMeasurement(_instance);
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
uint8_t mbufi_Started = 2;
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
}
break;
}
case 68:{
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
case 73:{
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
case 69:{
byte mbuf[29 - 2];
while (mbufi < (29 - 2)) mbuf[mbufi++] = fifo_dequeue(&(_instance->fifo));
fifo_unlock(&(_instance->fifo));
uint8_t mbufi_BloodPressureMeasurement = 2;
union u_BloodPressureMeasurement_Systolic_t {
float p;
byte bytebuffer[4];
} u_BloodPressureMeasurement_Systolic;
u_BloodPressureMeasurement_Systolic.bytebuffer[3] = mbuf[mbufi_BloodPressureMeasurement + 0];
u_BloodPressureMeasurement_Systolic.bytebuffer[2] = mbuf[mbufi_BloodPressureMeasurement + 1];
u_BloodPressureMeasurement_Systolic.bytebuffer[1] = mbuf[mbufi_BloodPressureMeasurement + 2];
u_BloodPressureMeasurement_Systolic.bytebuffer[0] = mbuf[mbufi_BloodPressureMeasurement + 3];
mbufi_BloodPressureMeasurement += 4;
union u_BloodPressureMeasurement_Diastolic_t {
float p;
byte bytebuffer[4];
} u_BloodPressureMeasurement_Diastolic;
u_BloodPressureMeasurement_Diastolic.bytebuffer[3] = mbuf[mbufi_BloodPressureMeasurement + 0];
u_BloodPressureMeasurement_Diastolic.bytebuffer[2] = mbuf[mbufi_BloodPressureMeasurement + 1];
u_BloodPressureMeasurement_Diastolic.bytebuffer[1] = mbuf[mbufi_BloodPressureMeasurement + 2];
u_BloodPressureMeasurement_Diastolic.bytebuffer[0] = mbuf[mbufi_BloodPressureMeasurement + 3];
mbufi_BloodPressureMeasurement += 4;
union u_BloodPressureMeasurement_MeanArterial_t {
float p;
byte bytebuffer[4];
} u_BloodPressureMeasurement_MeanArterial;
u_BloodPressureMeasurement_MeanArterial.bytebuffer[3] = mbuf[mbufi_BloodPressureMeasurement + 0];
u_BloodPressureMeasurement_MeanArterial.bytebuffer[2] = mbuf[mbufi_BloodPressureMeasurement + 1];
u_BloodPressureMeasurement_MeanArterial.bytebuffer[1] = mbuf[mbufi_BloodPressureMeasurement + 2];
u_BloodPressureMeasurement_MeanArterial.bytebuffer[0] = mbuf[mbufi_BloodPressureMeasurement + 3];
mbufi_BloodPressureMeasurement += 4;
union u_BloodPressureMeasurement_UnitKPA_t {
uint8_t p;
byte bytebuffer[1];
} u_BloodPressureMeasurement_UnitKPA;
u_BloodPressureMeasurement_UnitKPA.bytebuffer[0] = mbuf[mbufi_BloodPressureMeasurement + 0];
mbufi_BloodPressureMeasurement += 1;
union u_BloodPressureMeasurement_Year_t {
uint16_t p;
byte bytebuffer[2];
} u_BloodPressureMeasurement_Year;
u_BloodPressureMeasurement_Year.bytebuffer[1] = mbuf[mbufi_BloodPressureMeasurement + 0];
u_BloodPressureMeasurement_Year.bytebuffer[0] = mbuf[mbufi_BloodPressureMeasurement + 1];
mbufi_BloodPressureMeasurement += 2;
union u_BloodPressureMeasurement_Month_t {
uint8_t p;
byte bytebuffer[1];
} u_BloodPressureMeasurement_Month;
u_BloodPressureMeasurement_Month.bytebuffer[0] = mbuf[mbufi_BloodPressureMeasurement + 0];
mbufi_BloodPressureMeasurement += 1;
union u_BloodPressureMeasurement_Day_t {
uint8_t p;
byte bytebuffer[1];
} u_BloodPressureMeasurement_Day;
u_BloodPressureMeasurement_Day.bytebuffer[0] = mbuf[mbufi_BloodPressureMeasurement + 0];
mbufi_BloodPressureMeasurement += 1;
union u_BloodPressureMeasurement_Hour_t {
uint8_t p;
byte bytebuffer[1];
} u_BloodPressureMeasurement_Hour;
u_BloodPressureMeasurement_Hour.bytebuffer[0] = mbuf[mbufi_BloodPressureMeasurement + 0];
mbufi_BloodPressureMeasurement += 1;
union u_BloodPressureMeasurement_Minute_t {
uint8_t p;
byte bytebuffer[1];
} u_BloodPressureMeasurement_Minute;
u_BloodPressureMeasurement_Minute.bytebuffer[0] = mbuf[mbufi_BloodPressureMeasurement + 0];
mbufi_BloodPressureMeasurement += 1;
union u_BloodPressureMeasurement_Second_t {
uint8_t p;
byte bytebuffer[1];
} u_BloodPressureMeasurement_Second;
u_BloodPressureMeasurement_Second.bytebuffer[0] = mbuf[mbufi_BloodPressureMeasurement + 0];
mbufi_BloodPressureMeasurement += 1;
union u_BloodPressureMeasurement_Pulse_t {
float p;
byte bytebuffer[4];
} u_BloodPressureMeasurement_Pulse;
u_BloodPressureMeasurement_Pulse.bytebuffer[3] = mbuf[mbufi_BloodPressureMeasurement + 0];
u_BloodPressureMeasurement_Pulse.bytebuffer[2] = mbuf[mbufi_BloodPressureMeasurement + 1];
u_BloodPressureMeasurement_Pulse.bytebuffer[1] = mbuf[mbufi_BloodPressureMeasurement + 2];
u_BloodPressureMeasurement_Pulse.bytebuffer[0] = mbuf[mbufi_BloodPressureMeasurement + 3];
mbufi_BloodPressureMeasurement += 4;
union u_BloodPressureMeasurement_IrregularPulse_t {
uint8_t p;
byte bytebuffer[1];
} u_BloodPressureMeasurement_IrregularPulse;
u_BloodPressureMeasurement_IrregularPulse.bytebuffer[0] = mbuf[mbufi_BloodPressureMeasurement + 0];
mbufi_BloodPressureMeasurement += 1;
uint16_t portID = (mbuf[0] << 8) + mbuf[1]; /* instance port*/
switch(portID) {
case 5:{
Main_handle_Bloodpressure_BloodPressureMeasurement(_instance,
 u_BloodPressureMeasurement_Systolic.p /* Systolic */ ,
 u_BloodPressureMeasurement_Diastolic.p /* Diastolic */ ,
 u_BloodPressureMeasurement_MeanArterial.p /* MeanArterial */ ,
 u_BloodPressureMeasurement_UnitKPA.p /* UnitKPA */ ,
 u_BloodPressureMeasurement_Year.p /* Year */ ,
 u_BloodPressureMeasurement_Month.p /* Month */ ,
 u_BloodPressureMeasurement_Day.p /* Day */ ,
 u_BloodPressureMeasurement_Hour.p /* Hour */ ,
 u_BloodPressureMeasurement_Minute.p /* Minute */ ,
 u_BloodPressureMeasurement_Second.p /* Second */ ,
 u_BloodPressureMeasurement_Pulse.p /* Pulse */ ,
 u_BloodPressureMeasurement_IrregularPulse.p /* IrregularPulse */ );
return 1;
break;
}
}
break;
}
case 70:{
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


