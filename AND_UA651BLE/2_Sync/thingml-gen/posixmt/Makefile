CC = cc
LIBS = -lpthread -l bluetooth -l mosquitto
CFLAGS = -O2 -w
SRCS = BLEConnecterImpl.c BLEBloodpressureImpl.c ExitHandler.c BLENotifierImpl.c HCISocketProxyImpl.c BLEInitialiserImpl.c Main.c AND_UA651BLE_SYNC_cfg.c MQTT1.c runtime.c
OBJS = BLEConnecterImpl.o BLEBloodpressureImpl.o ExitHandler.o BLENotifierImpl.o HCISocketProxyImpl.o BLEInitialiserImpl.o Main.o AND_UA651BLE_SYNC_cfg.o MQTT1.o runtime.o

all : AND_UA651BLE_SYNC

.c.o :
	${CC} ${CFLAGS} -c $< 

.cpp.o :
	${CC} ${CFLAGS} -c $< 

AND_UA651BLE_SYNC : $(OBJS)
	$(CC) -o $@ $(OBJS) $(LIBS) -lm

clean:
	rm -f *.o *~ AND_UA651BLE_SYNC
