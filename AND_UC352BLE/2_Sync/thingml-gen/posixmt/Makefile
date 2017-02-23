CC = cc
LIBS = -lpthread -l bluetooth -l mosquitto
CFLAGS = -O2 -w
SRCS = Main.c ExitHandler.c BLEConnecterImpl.c BLEWeightscaleImpl.c BLENotifierImpl.c BLEInitialiserImpl.c HCISocketProxyImpl.c AND_UC352BLE_SYNC_cfg.c MQTT1.c runtime.c
OBJS = Main.o ExitHandler.o BLEConnecterImpl.o BLEWeightscaleImpl.o BLENotifierImpl.o BLEInitialiserImpl.o HCISocketProxyImpl.o AND_UC352BLE_SYNC_cfg.o MQTT1.o runtime.o

all : AND_UC352BLE_SYNC

.c.o :
	${CC} ${CFLAGS} -c $< 

.cpp.o :
	${CC} ${CFLAGS} -c $< 

AND_UC352BLE_SYNC : $(OBJS)
	$(CC) -o $@ $(OBJS) $(LIBS) -lm

clean:
	rm -f *.o *~ AND_UC352BLE_SYNC
