CC = g++
CFLAGS = -Wall -Werror -ansi --pedantic -g
OBJS = RingBuffer.o test.o
DEPS = RingBuffer.hpp
LIBS = -lboost_unit_test_framework
EXE = RingBuffer


all: $(OBJS)
	$(CC) $(OBJS) -o $(EXE) $(LIBS) $(CFLAGS)

test.o: test.cpp
	$(CC) -c test.cpp 

RingBuffer.o: RingBuffer.cpp RingBuffer.hpp
	$(CC) -c RingBuffer.cpp

clean:
	rm $(OBJS) $(EXE)
