CC = cc
LIBS = -lpthread -l bluetooth -l mosquitto
CFLAGS = -O2 -w
SRCS = Main.c BLEScannerImpl.c ExitHandler.c BLEInitialiserImpl.c ANDUC352BLEImpl.c ANDUA651BLEImpl.c HCISocketProxyImpl.c BLEConnecterImpl.c BLENotifierImpl.c MedicalGW_cfg.c MQTT2.c MQTT1.c runtime.c
OBJS = Main.o BLEScannerImpl.o ExitHandler.o BLEInitialiserImpl.o ANDUC352BLEImpl.o ANDUA651BLEImpl.o HCISocketProxyImpl.o BLEConnecterImpl.o BLENotifierImpl.o MedicalGW_cfg.o MQTT2.o MQTT1.o runtime.o

all : MedicalGW

.c.o :
	${CC} ${CFLAGS} -c $< 

.cpp.o :
	${CC} ${CFLAGS} -c $< 

MedicalGW : $(OBJS)
	$(CC) -o $@ $(OBJS) $(LIBS) -lm

clean:
	rm -f *.o *~ MedicalGW
