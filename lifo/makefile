
CC      = gcc -std=c99
CFLAGS  = -O2 -Wall
DEBUG   = -pg -g -Wall
OBJECTS = node.o lifo.o main.o


test : $(OBJECTS)
	$(CC) $(DEBUG) -o test $(OBJECTS)

exec : $(OBJECTS)
	$(CC) $(CFLAGS) -o exe $(OBJECTS)

main.o : main.c
	$(CC) $(CFLAGS) -c main.c

node.o : ../List/node.c ../List/node.h
	$(CC) $(CFLAGS) -c ../List/node.c

lfo.o : node.o lifo.c lifo.h
	$(CC) $(CFLAGS) -c lifo.c

clean :
	rm -f $(OBJECTS) exe test
