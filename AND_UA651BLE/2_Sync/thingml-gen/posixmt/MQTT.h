#ifndef MQTT_PosixMQTT_Client_h
#define  MQTT_PosixMQTT_Client_h

#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <ctype.h>
#include <stdint.h>
#include <math.h>
#include <mosquitto.h>

#include "HCISocketProxyImpl.h"
#include "BLEConnecterImpl.h"
#include "Main.h"
#include "ExitHandler.h"
#include "BLENotifierImpl.h"
#include "BLEInitialiserImpl.h"
#include "BLEBloodpressureImpl.h"


struct MQTT_Instance {
    uint16_t listener_id;
    /*INSTANCE_INFORMATION*/
};

void MQTT_setup(struct MQTT_Instance *_instance);

void MQTT_start_receiver_thread();
void MQTT_loop_poll();

// Forwarding of messages MQTT::Main::Gateway::MqttBloodPressureMeasurement
void forward_MQTT_Main_send_Gateway_MqttBloodPressureMeasurement(struct Main_Instance *_instance, float Systolic, float Diastolic, float MeanArterial, uint8_t UnitKPA, uint16_t Year, uint8_t Month, uint8_t Day, uint8_t Hour, uint8_t Minute, uint8_t Second, float Pulse, uint8_t IrregularPulse);


#endif
