CC = g++
CFLAGS = -std=c++11 -g -Og -Wall -Werror -pedantic -lsfml-graphics -lsfml-window -lsfml-system
OBJS = ED.o main.o
DEPS = ED.h
LIBS =
EXE = ED


all: $(OBJS)
	$(CC) $(OBJS) -o $(EXE) $(LIBS) $(CFLAGS)

main.o: main.cpp
	$(CC) -c main.cpp

ED.o: ED.cpp ED.h
	$(CC) -c ED.cpp

clean:
	rm $(OBJS) $(EXE)
