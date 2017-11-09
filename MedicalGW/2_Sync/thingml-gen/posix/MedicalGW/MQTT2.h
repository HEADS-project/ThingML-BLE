#ifndef MQTT2_PosixMQTT_Client_h
#define  MQTT2_PosixMQTT_Client_h

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


struct MQTT2_Instance {
    uint16_t listener_id;
    /*INSTANCE_INFORMATION*/
};

void MQTT2_setup(struct MQTT2_Instance *_instance);

void MQTT2_start_receiver_thread();
void MQTT2_loop_poll();

// Forwarding of messages MQTT2::ANDUC352BLEImpl::Tellu::TelluCloudWeightScale
void forward_MQTT2_ANDUC352BLEImpl_send_Tellu_TelluCloudWeightScale(struct ANDUC352BLEImpl_Instance *_instance, time_t observationTime, float mass);


#endif
