/*
	Harinder Gakhal
	2/19/19
	CSE 215
	Programming Assignment 1 - print
	INPUT: string/set to print
	This function will print the string as a set in the proper format.
*/

#include "main.h"

void print (char *str)
{	
	//Init output string
	char out[300] = {};
	out[0] = '{';
	int oCount = 1;

	//Add ',' after each element into out
	for (int i = 0; i < strlen(str); ++i)
	{
		out[oCount] = str[i];
		out[++oCount] = ',';
		oCount++;
	}

	//In case an empty set is given
	if(oCount == 1)
		oCount++;

	//makes sure the last ',' is removed
	out[--oCount] = '}';
	out[++oCount] = '\0';
	printf("%s\n", out);
}
/*
NOTE: I didn't use printf to display each element because it left a 
trailing ',' at the end. So this is my complicated solution. :)
*/