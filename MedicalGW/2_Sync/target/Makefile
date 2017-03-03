CC = cc
LIBS = -lpthread -l bluetooth -l mosquitto
CFLAGS = -O2 -w
SRCS = BLENotifierImpl.c ExitHandler.c BLEConnecterImpl.c Main.c ANDUA651BLEImpl.c BLEScannerImpl.c HCISocketProxyImpl.c BLEInitialiserImpl.c ANDUC352BLEImpl.c MedicalGW_cfg.c MQTT2.c MQTT1.c runtime.c
OBJS = BLENotifierImpl.o ExitHandler.o BLEConnecterImpl.o Main.o ANDUA651BLEImpl.o BLEScannerImpl.o HCISocketProxyImpl.o BLEInitialiserImpl.o ANDUC352BLEImpl.o MedicalGW_cfg.o MQTT2.o MQTT1.o runtime.o

all : MedicalGW

.c.o :
	${CC} ${CFLAGS} -c $< 

.cpp.o :
	${CC} ${CFLAGS} -c $< 

MedicalGW : $(OBJS)
	$(CC) -o $@ $(OBJS) $(LIBS) -lm

clean:
	rm -f *.o *~ MedicalGW
