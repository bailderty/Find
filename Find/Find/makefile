CC = g++

all: findWord.o
	$(CC) -o findWord $?

main.o: findWord.cpp
	$(CC) -c $?

clean:
	rm -f *.o findWord
