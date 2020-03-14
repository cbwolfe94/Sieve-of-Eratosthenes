sieve: main.o sieve.o
	gcc -o sieve main.o sieve.o

main.o: main.c sieve.h
	gcc -c main.c sieve.c sieve.h

sieve.o: sieve.c sieve.h
	gcc -c sieve.c sieve.h