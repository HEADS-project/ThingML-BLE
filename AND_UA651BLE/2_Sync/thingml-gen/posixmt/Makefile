CC = cc
LIBS = -lpthread -l bluetooth -l mosquitto
CFLAGS = -O2 -w
SRCS = ExitHandler.c BLEConnecterImpl.c HCISocketProxyImpl.c BLEInitialiserImpl.c Main.c BLEBloodpressureImpl.c BLENotifierImpl.c AND_UA651BLE_SYNC_cfg.c MQTT.c runtime.c
OBJS = ExitHandler.o BLEConnecterImpl.o HCISocketProxyImpl.o BLEInitialiserImpl.o Main.o BLEBloodpressureImpl.o BLENotifierImpl.o AND_UA651BLE_SYNC_cfg.o MQTT.o runtime.o

all : AND_UA651BLE_SYNC

.c.o :
	${CC} ${CFLAGS} -c $< 

.cpp.o :
	${CC} ${CFLAGS} -c $< 

AND_UA651BLE_SYNC : $(OBJS)
	$(CC) -o $@ $(OBJS) $(LIBS) -lm

clean:
	rm -f *.o *~ AND_UA651BLE_SYNC
