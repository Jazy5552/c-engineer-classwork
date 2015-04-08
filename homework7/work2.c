/**
*	Made by: Jazy Llerena
*	This got really messy...
**/
#include <stdio.h>
#include <string.h> //strcmp
#include <stdlib.h> //malloc

int IsPalindrome(char* str);
//Will create a reversed copy of upper str and compare str with it
//The return will be the result of strcmp
void strtoupper(char* str);
//Function that upper cases a string
char* strreverse(char* str);
//My own implementaion of strrev()
//posix doesn't seem to have strrev() :(

int main()
{
	const int LENGTH = 20;
	char input[LENGTH];
	
	printf("Enter a string: ");
	//Get the user input (NOTE: A trailing newline is imminent)
	fgets(input, LENGTH, stdin);
	//Run the function that does the checks
	if (IsPalidrome(input) == 0)
		printf("The string is a palidrome!\n");
	else
		printf("The string is not a palidrome!\n");

	return 0;
}

int IsPalidrome(char* str)
{
	if (strchr(str, '\n') != NULL)
		*strchr(str, '\n') = '\0'; //remove trailing newline
	strtoupper(str); //Make str all upper case
	char* revStr = strreverse(str); //Reverse the string and set to revStr
	//printf("%s :: %s", str, revStr); //Debug info
	int x = strcmp(revStr, str); //Compare the two strings
	free(revStr); //Free the memory from the reverse function
	return x; //Return the difference of the strings
}

void strtoupper(char* str)
{
	//Loop through char array and uppercase every character
	int i = 0;
	while (*(str+i) != '\0')
	{
		*(str+i) = toupper(*(str+i)); //Run over newline and spaces
		i++;
	}
}

char* strreverse(char* str)
{
	char* newStr = malloc(sizeof(str)/sizeof(*(str))); 
	//Allocate needed memory for string to be placed on the heap
	//WARNING Potential memory leak! Must free() later!
	int i, j;
	for (i = 0, j = strlen(str)-1; j >= 0; i++, j--)
	{
		//Move i forward and j backwards, i will follow the newStr and j will
		//be following the original str backwards swriting to the newStr i pos
		*(newStr+i) = *(str+j);
	}
	*(newStr+i+1) = '\0'; //Add null character
	return newStr;
}

