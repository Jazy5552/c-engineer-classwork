/**
*	Made by: Jazy Llerena
*	
**/
#include <stdio.h>
#include <ctype.h>

int GetUpperLetters(char* str); 
//string and length of string to find capitals of
int GetLowerLetters(char* str);
//string and length of string to find lowers of

void ToUpper(char* oStr, char* newStr, int newStrLen);
//modify string and turn all chars to upper case into newStr
void ToLower(char* oStr, char* newStr, int newStrLen);
//modify string and turn all chars to lower case into newStr

int main()
{
	const int LENGTH = 100;
	char input[LENGTH];
	char upper[LENGTH];
	char lower[LENGTH];

	printf("Enter a string: ");

	fgets(input, LENGTH, stdin); //Get the sentence

	printf("The sentence has %d capital letters and\n"
		"%d lower case letters.\n\n", 
		GetUpperLetters(input), GetLowerLetters(input));
	
	ToUpper(input, upper, LENGTH); //Store the upper sentence to upper
	ToLower(input, lower, LENGTH); //Store the lower sentence to lower
	printf("The lower case sentence is: %s\n"
		"The upper case sentence is: %s\n", 
		upper, lower);
	return 0;
}

void ToUpper(char* oStr, char* newStr, int newStrLen)
{
	int i;
	for (i = 0; i < newStrLen-1; i++) //Save last spot of newStr for null
	{
		if (*(oStr+i) == '\0') //If at end of original string
			break;
		//Save the toupper result to the newStr
		*(newStr+i) = toupper(*(oStr+i));
	}
	//Add the null char
	*(newStr+i) = '\0';
}

void ToLower(char* oStr, char* newStr, int newStrLen)
{
	int i;
	for (i = 0; i < newStrLen-1; i++) //Save last spot of newStr for null
	{
		if (*(oStr+i) == '\0') //If at end of original string
			break;
		//Save the tolower result to the newStr
		*(newStr+i) = tolower(*(oStr+i));
	}
	//Add the null char
	*(newStr+i) = '\0';
}

int GetUpperLetters(char* str)
{
	int counter = 0;
	int i = 0;
	while (*(str+i) != '\0')
	{
		if (isupper(*(str+i)))
			counter++;
		i++;
	}
	return counter;
}

int GetLowerLetters(char* str)
{
	int counter = 0;
	int i = 0;
	while (*(str+i) != '\0')
	{
		if (islower(*(str+i)))
			counter++;
		i++;
	}
	return counter;
}

