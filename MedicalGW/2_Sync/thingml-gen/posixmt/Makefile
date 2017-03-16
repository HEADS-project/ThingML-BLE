CC = cc
LIBS = -lpthread -l bluetooth -l mosquitto
CFLAGS = -O2 -w
SRCS = Main.c BLEConnecterImpl.c ANDUA651BLEImpl.c BLEScannerImpl.c HCISocketProxyImpl.c BLEInitialiserImpl.c ExitHandler.c ANDUC352BLEImpl.c BLENotifierImpl.c MedicalGW_cfg.c MQTT2.c MQTT1.c runtime.c
OBJS = Main.o BLEConnecterImpl.o ANDUA651BLEImpl.o BLEScannerImpl.o HCISocketProxyImpl.o BLEInitialiserImpl.o ExitHandler.o ANDUC352BLEImpl.o BLENotifierImpl.o MedicalGW_cfg.o MQTT2.o MQTT1.o runtime.o

all : MedicalGW

.c.o :
	${CC} ${CFLAGS} -c $< 

.cpp.o :
	${CC} ${CFLAGS} -c $< 

MedicalGW : $(OBJS)
	$(CC) -o $@ $(OBJS) $(LIBS) -lm

clean:
	rm -f *.o *~ MedicalGW
