/*
	Harinder Gakhal
	2/19/19
	CSE 215
	Programming Assignment 1 - main
	This program will allow the user to input two strings. Then the 
	program will find the cardinality, union, intersection and complement of the 
	two strings after removing any repeating elements, whitespace or newlines.
*/

#include "main.h"

void main(int argc, char const *argv[])
{
	//Strings used to hold sets and reults
	char setA[120], setB[120], out[120];

	//Bring in strings
	printf("Please enter the elements of set A.\n");
	fgets(setA, 120, stdin);
	printf("Please enter the elements of set B.\n");
	fgets(setB, 120, stdin);

	//Remove repeating elements, whitespace or newlines
	filter(setA);
	filter(setB);

	//Print sets
	printf("\nA = ");
	print(setA);
	printf("B = ");
	print(setB);

	//Print cardinality
	int cardA = strlen(setA);
	int cardB = strlen(setB);
	printf("|A| = %d\n", cardA);
	printf("|B| = %d\n", cardB);

	//Print union
	setUnion(setA, setB, out);
	printf("AuB = ");
	print(out);

	//Print intersection
	setIntersect(setA, setB, out);
	printf("A∩B = ");
	print(out);

	//Print complement
	setComp(setA, setB, out);
	printf("A\\B = ");
	print(out);
}