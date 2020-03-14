#include "sieve.h"
#include <stdbool.h>
#include <stdio.h>

void sieveOfErastosthenes(int* sieve, int size){
    printf("%i\n", size);
    printf("These are the primes below %i: \n", size + 1);
    for (int index = 0; index < size; index++){
        if (isPrime(sieve[index])){
            printf("%i ", sieve[index]);
            } 
        }
        printf("\n");
}

_Bool isPrime(int value){
       if (value <= 1) 
        return false; 
  
    for (int index = 2; index < value; index++) 
        if (value % index == 0) 
            return false; 
  
    return true; 
} 
