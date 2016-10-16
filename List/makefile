
CC      = gcc -std=c99
CFLAGS  = -O2 -Wall
DEBUG   = -pg -g -Wall
OBJECTS = node.o list.o main.o


test : $(OBJECTS)
	$(CC) $(DEBUG) -o test $(OBJECTS)

exec : $(OBJECTS)
	$(CC) $(CFLAGS) -o exe $(OBJECTS)

main.o : main.c
	$(CC) $(CFLAGS) -c main.c

node.o : node.c node.h
	$(CC) $(CFLAGS) -c node.c

list.o : node.o list.c list.h
	$(CC) $(CFLAGS) -c list.c

clean :
	rm -f $(OBJECTS) test exe
