CC = cc
LIBS = -lpthread -l bluetooth -l mosquitto
CFLAGS = -O2 -w
SRCS = ExitHandler.c BLEInitialiserImpl.c BLEConnecterImpl.c BLENotifierImpl.c Main.c BLEBloodpressureImpl.c HCISocketProxyImpl.c AND_UA651BLE_SYNC_cfg.c MQTT1.c runtime.c
OBJS = ExitHandler.o BLEInitialiserImpl.o BLEConnecterImpl.o BLENotifierImpl.o Main.o BLEBloodpressureImpl.o HCISocketProxyImpl.o AND_UA651BLE_SYNC_cfg.o MQTT1.o runtime.o

all : AND_UA651BLE_SYNC

.c.o :
	${CC} ${CFLAGS} -c $< 

.cpp.o :
	${CC} ${CFLAGS} -c $< 

AND_UA651BLE_SYNC : $(OBJS)
	$(CC) -o $@ $(OBJS) $(LIBS) -lm

clean:
	rm -f *.o *~ AND_UA651BLE_SYNC
