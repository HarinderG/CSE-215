/*
	Harinder Gakhal
	2/10/19
	CSE 215
	Programming Assignment 2 - main
	This program implements Goldbach's Conjecture
*/

#include "main.h"

void main(int argc, char const *argv[])
{
	//Init variables
	char readIn[120];
	int num, nTest;

	//Ask user for even number
	printf("Enter an even integer, greater than 2.\n");
	fgets(readIn, 120, stdin);
	while ((sscanf(readIn, "%d", &num) != 1) || (num%2 == 1))	//If user input is not valid, ask again
	{
		printf("Please try again.\n");
		fgets(readIn, 120, stdin);
	}

	//Ask user for number greater than 0
	printf("Enter how many numbers to test, greater than 0.\n");	//If user input is not valid, ask again
	fgets(readIn, 120, stdin);
	while ((sscanf(readIn, "%d", &nTest) != 1) || nTest <= 0)
	{
		printf("Please try again.\n");
		fgets(readIn, 120, stdin);
	}

	int primeList[num+1];	//List of prime numbers between 2 and num
	primeGen(num, primeList);
	findSum(primeList, num, nTest); //Find sum of two primes and print out to console
}
