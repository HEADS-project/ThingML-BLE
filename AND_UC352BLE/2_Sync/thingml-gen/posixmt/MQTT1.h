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

#include "BLEConnecterImpl.h"
#include "BLEInitialiserImpl.h"
#include "BLENotifierImpl.h"
#include "HCISocketProxyImpl.h"
#include "ExitHandler.h"
#include "BLEWeightscaleImpl.h"
#include "Main.h"


struct MQTT1_Instance {
    uint16_t listener_id;
    /*INSTANCE_INFORMATION*/
};

void MQTT1_setup(struct MQTT1_Instance *_instance);

void MQTT1_start_receiver_thread();
void MQTT1_loop_poll();

// Forwarding of messages MQTT1::Main::WeightScaleCloud::TelluCloudWeightScale
void forward_MQTT1_Main_send_WeightScaleCloud_TelluCloudWeightScale(struct Main_Instance *_instance, time_t observationTime, float mass);


#endif
