/*
	Harinder Gakhal
	2/19/19
	CSE 215
	Programming Assignment 1 - setComp
	INPUT: 2 sets to compare and 1 output set
	This function will take in 2 sets and find the complement 
	of the two, then place result in *out.
*/

#include "main.h"

void setComp(char *str1, char *str2, char *out)
{	
	//Init tmp string
	char tmp[120] = {};

	int j = 0;
	for(int i = 0; i < strlen(str1); i++)
	{
		//Place element of str1 in tmp if it does not exist in str2
		if(strchr(str2, str1[i]) == NULL)
			tmp[j++] = str1[i];
	}
	tmp[j] = '\0';
	//Copy result to *out
	strcpy(out, tmp);
}