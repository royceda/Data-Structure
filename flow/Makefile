CC = g++
CPPFLAGS = -Wall -Wextra -std=c++0x

all: Flow.o test
Flow.o: Flow.h Flow.cpp

test: Flow.o prog.cpp
	$(CC) $^ -o $@


clean:
	rm *.o test 
