CC=g++

CFLAGS=-c 

run: main.o Universe.o CelestialBody.o
	$(CC) main.o -o NBody -lsfml-graphics -lsfml-window -lsfml-system Universe.o CelestialBody.o

main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp 

Universe.o: Universe.cpp
	$(CC) $(CFLAGS) Universe.cpp

CelestialBody.o: CelestialBody.cpp
	$(CC) $(CFLAGS) CelestialBody.cpp

clean:
	rm -rf *o done
