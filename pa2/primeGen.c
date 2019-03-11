/*
	Harinder Gakhal
	2/10/19
	CSE 215
	Programming Assignment 2 - primeGen
	This program implements the Sieve of Eratosthenes algorithm 
	to generate prime numbers from 2 to N.
*/

#include "main.h"

int * primeGen(int n, int primeList[])
{
	//Set primeList to 1
	for (int i = 0; i < n+1; ++i)
		primeList[i] = 1;

	//Use the Sieve of Eratosthenes algorithm to find each prime
	for (int p=2; p*p <= n; p++) 
	{
	    if (primeList[p] == 1) 
	    {
	        for (int i=p*p; i <= n; i += p) 
	            primeList[i] = 0; 
	    } 
	} 

	return primeList;
}
