/*
Program made by Jazy
For C for Engineers class
1/6/2015 (Happy new year!)
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	char* apples = malloc(sizeof(char)*50); //char apples[50];
	printf("Hello World\nEnter some text:");
	scanf("%49s", apples);
	printf("You wrote \"%s\"\n", apples);
	
	free(apples);
	return 0;
}

