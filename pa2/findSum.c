/*
	Harinder Gakhal
	2/10/19
	CSE 215
	Programming Assignment 2 - finsSum
	This function will take in the list of prime, and find a sum
	that equals num. Then it will repeat that for the next even number 
	loop times.
*/

#include "main.h"

void findSum(int primeList[], int num, int loop)
{	
	for(int i = 0; i < loop; i++)
	{
		for (int j = 2; j < num+1; j++)
		{
			//Find next prime number in primeList, and check if num-(index) is prime as well.
			if((primeList[j] == 1) && (isPrime(num-j) == 1))
			{
				printf("%d + %d = %d\n", j, num-j, num);
				break;
			}
		}
		num+=2; //Repeat for next even number
	}
}
