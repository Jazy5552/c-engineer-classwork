/**
*	Made by: Jazy Llerena
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
//My own implementaion of strrev 
//linux doesn't seem to have strrev :(

int main()
{
	const int LENGTH = 20;
	char input[LENGTH];
	
	printf("Enter a string: ");
	
	fgets(input, LENGTH, stdin);
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
	char* revStr = strreverse(str);
	strtoupper(str);
	strtoupper(revStr);
	printf("%s :: %s", str, revStr);
	int x = strcmp(revStr, str);
	free(revStr);
	return x;
}

void strtoupper(char* str)
{
	int i = 0;
	while (*(str+i) != '\0')
	{
		*(str+i) = toupper(*(str+i));
		i++;
	}
}

char* strreverse(char* str)
{
	char* newStr = malloc(sizeof(str)/sizeof(*(str))); //Allocate memory string
	//WARNING Potential memory leak! Must free() later!
	int i, j;
	for (i = 0, j = strlen(str)-1; j >= 0; i++, j--)
	{
		*(newStr+i) = *(str+j);
	}
	*(newStr+i+1) = '\0'; //Add null character
	return newStr;
}

