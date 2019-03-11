/*
	Harinder Gakhal
	2/10/19
	CSE 215
	Programming Assignment 2 - isPrime
	This program will check if the given number is prime.
*/

#include "main.h"

int isPrime(int num)
{
	//If num isn't within range	
    if(num < 2 || (!(num&1) && num!=2))
        return 0;
    for(int i = 3; i*i <= num; i += 2)
    {
        if(!(num%i)) //If num is not divisible by i
            return 0;
    }
    return 1;
}
