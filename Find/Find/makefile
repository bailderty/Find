CC = g++

all: main.o
	$(CC) -o runMain $?

main.o: main.cpp
	$(CC) -c $?

clean:
	rm -f *.o runMain
