CC = cc
LIBS = -lpthread -l bluetooth -l mosquitto
CFLAGS = -O2 -w
SRCS = BLEScannerImpl.c BLEConnecterImpl.c ANDUA651BLEImpl.c ExitHandler.c BLENotifierImpl.c HCISocketProxyImpl.c Main.c BLEInitialiserImpl.c ANDUC352BLEImpl.c MedicalGW_cfg.c MQTT2.c MQTT1.c runtime.c
OBJS = BLEScannerImpl.o BLEConnecterImpl.o ANDUA651BLEImpl.o ExitHandler.o BLENotifierImpl.o HCISocketProxyImpl.o Main.o BLEInitialiserImpl.o ANDUC352BLEImpl.o MedicalGW_cfg.o MQTT2.o MQTT1.o runtime.o

all : MedicalGW

.c.o :
	${CC} ${CFLAGS} -c $< 

.cpp.o :
	${CC} ${CFLAGS} -c $< 

MedicalGW : $(OBJS)
	$(CC) -o $@ $(OBJS) $(LIBS) -lm

clean:
	rm -f *.o *~ MedicalGW
