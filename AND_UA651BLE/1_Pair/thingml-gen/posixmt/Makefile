CC = cc
LIBS = -lpthread -l bluetooth
CFLAGS = -O2 -w
SRCS = Main.c ExitHandler.c BLEInitialiserImpl.c BLEEncryptionImpl.c BLEConnecterImpl.c HCISocketProxyImpl.c BLE_PAIR_cfg.c runtime.c
OBJS = Main.o ExitHandler.o BLEInitialiserImpl.o BLEEncryptionImpl.o BLEConnecterImpl.o HCISocketProxyImpl.o BLE_PAIR_cfg.o runtime.o

all : BLE_PAIR

.c.o :
	${CC} ${CFLAGS} -c $< 

.cpp.o :
	${CC} ${CFLAGS} -c $< 

BLE_PAIR : $(OBJS)
	$(CC) -o $@ $(OBJS) $(LIBS) -lm

clean:
	rm -f *.o *~ BLE_PAIR
