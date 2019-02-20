/*
	Harinder Gakhal
	2/19/19
	CSE 215
	Programming Assignment 1 - filter
	INPUT: Pointer to string
	The function will remove any repeating elements, whitespace or newlines.
*/

#include "main.h"

void filter(char *str)
{	
	//Init temp string
	char tmp[120] = {};

	int j = 0;
	for(int i = 0; i<strlen(str); i++)
	{	
		//Place element in tmp if its not white space, newline or already in tmp
		if(isspace(str[i]) == 0 && str[i] != '\n' && strchr(tmp, str[i]) == NULL)
			tmp[j++] = str[i];
	}
	tmp[j] = '\0';
	//Copy result to tmp
	strcpy(str, tmp);
}