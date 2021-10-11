CC=g++

CFLAGS=-c 

run: PhotoMagic.o LFSR.o
	$(CC) PhotoMagic.o -o done -lsfml-graphics -lsfml-window -lsfml-system LFSR.o

PhotoMagic.o: PhotoMagic.cpp
	$(CC) $(CFLAGS) PhotoMagic.cpp 

LFSR.o: LFSR.cpp
	$(CC) $(CFLAGS) LFSR.cpp

clean:
	rm -rf *o done
