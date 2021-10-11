CC=g++

CFLAGS=-c 

run: main.o FibLFSR.o test.o
	$(CC) main.o -o done -lboost_unit_test_framework -lsfml-graphics -lsfml-window -lsfml-system FibLFSR.o

main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp 

FibLFSR.o: FibLFSR.cpp
	$(CC) $(CFLAGS) FibLFSR.cpp

test.o: test.cpp
	$(CC) $(CFLAGS) test.cpp

clean:
	rm -rf *o done
