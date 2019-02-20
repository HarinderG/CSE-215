/*
	Harinder Gakhal
	2/19/19
	CSE 215
	Programming Assignment 1 - setUnion
	INPUT: 2 sets to compare and 1 output set
	This function will take in 2 sets and find the union 
	of the two, then place result in *out.
*/

#include "main.h"

void setUnion(char *str1, char *str2, char *out)
{	
	//Place set1 in tmp
	char tmp[120] = {};
	strcpy(tmp, str1);
	int tmpLen = strlen(tmp);

	for(int i = 0; i < strlen(str2); i++)
	{	
		//place element in tmp if it does not exist in tmp already
		if(strchr(tmp, str2[i]) == NULL)
			tmp[tmpLen++] = str2[i];
	}
	tmp[tmpLen] = '\0';
	//copy result to *out
	strcpy(out, tmp);
}