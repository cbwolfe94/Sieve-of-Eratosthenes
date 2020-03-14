
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "sieve.h"


int main(int argc, char* argv[]){
    if (argc < 2){
        fprintf(stderr, "Error. Not enough arguments.\n");
        exit(1);
    }
    if (argc > 2){
        fprintf(stderr, "Error. Too many arguments.\n");
        exit(1);
    }
    int sieveSize = atoi(argv[1]) - 1;
    int sieve[sieveSize];
    for (int index = 0; index < sieveSize; index++){
        sieve[index] = index + 2;
    }
    sieveOfErastosthenes(sieve, sieveSize);
}