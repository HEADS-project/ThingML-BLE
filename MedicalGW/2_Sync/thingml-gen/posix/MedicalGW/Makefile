CC = cc
LIBS = -lpthread -l bluetooth -l mosquitto
CFLAGS = -O2 -w
SRCS = BLEScannerImpl.c ANDUA651BLEImpl.c ANDUC352BLEImpl.c BLEInitialiserImpl.c BLEConnecterImpl.c BLENotifierImpl.c Main.c ExitHandler.c HCISocketProxyImpl.c MedicalGW_cfg.c MQTT2.c MQTT1.c runtime.c
OBJS = BLEScannerImpl.o ANDUA651BLEImpl.o ANDUC352BLEImpl.o BLEInitialiserImpl.o BLEConnecterImpl.o BLENotifierImpl.o Main.o ExitHandler.o HCISocketProxyImpl.o MedicalGW_cfg.o MQTT2.o MQTT1.o runtime.o

all : MedicalGW

.c.o :
	${CC} ${CFLAGS} -c $< 

.cpp.o :
	${CC} ${CFLAGS} -c $< 

MedicalGW : $(OBJS)
	$(CC) -o $@ $(OBJS) $(LIBS) -lm

clean:
	rm -f *.o *~ MedicalGW
