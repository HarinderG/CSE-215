/*
	Harinder Gakhal
	2/19/19
	CSE 215
	Programming Assignment 1 - setIntersect
	INPUT: 2 sets to compare and 1 output set
	This function will take in 2 sets and find the intersection 
	of the two, then place result in *out.
*/

#include "main.h"

void setIntersect(char *str1, char *str2, char *str3)
{
	//Init temp string and set lengths
	char tmp[120] = {};
	int len1 = strlen(str1);
	int len2 = strlen(str2);

	int j = 0;
	for(int i = 0; i < len1; i++)
	{	
		//Place element from str1 in tmp if it exists in str2s
		if(strchr(str2, str1[i]) != NULL)
			tmp[j++] = str1[i];
	}
	tmp[j] = '\0';
	//Copy result to tmp
	strcpy(str3, tmp);
}