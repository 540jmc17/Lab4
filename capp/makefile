CC=g++
CFLAGS=-c -Wall
#all: prog


main: main.o isOdd.o isEven.o
	$(CC) main.o isOdd.o isEven.o -o main

main.o: main.c
	$(CC) $(CFLAGS) main.c

isOdd.o: isOdd.c
	$(CC) $(CFLAGS) isOdd.c

isEven.o: isEven.c
	$(CC) $(CFLAGS) isEven.c

clean:
	rm -rf *.o prog







