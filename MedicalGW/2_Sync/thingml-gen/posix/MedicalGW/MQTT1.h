#ifndef MQTT1_PosixMQTT_Client_h
#define  MQTT1_PosixMQTT_Client_h

#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <ctype.h>
#include <stdint.h>
#include <math.h>
#include <time.h>
#include <mosquitto.h>

#include "BLEScannerImpl.h"
#include "ANDUA651BLEImpl.h"
#include "ANDUC352BLEImpl.h"
#include "BLEInitialiserImpl.h"
#include "BLEConnecterImpl.h"
#include "BLENotifierImpl.h"
#include "Main.h"
#include "ExitHandler.h"
#include "HCISocketProxyImpl.h"


struct MQTT1_Instance {
    uint16_t listener_id;
    /*INSTANCE_INFORMATION*/
};

void MQTT1_setup(struct MQTT1_Instance *_instance);

void MQTT1_start_receiver_thread();
void MQTT1_loop_poll();

// Forwarding of messages MQTT1::ANDUA651BLEImpl::Tellu::TelluCloudBloodPressure
void forward_MQTT1_ANDUA651BLEImpl_send_Tellu_TelluCloudBloodPressure(struct ANDUA651BLEImpl_Instance *_instance, time_t observationTime, int16_t health_pressure_diastolic, int16_t health_pressure_mean, int16_t health_pressure_systolic, int16_t health_pulseRate);


#endif
