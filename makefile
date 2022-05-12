CC = gcc
CFLAGS = -W -Wall
TARGET = worker
DTARGET = worker_debug
OBJECTS = main.c workerCRUD.o workerManager.o
all = $(TARGET)
$(TARGET) : $(OBJECTS)
	$(CC) $(CFLAGS) -o $@ $^

$(DTARGET) : $(OBJECTS)
	$(CC) $(CFLAGS) -DDEBUG -o $@ $^

clean:
	rm *.o
	rm worker worker_debug
