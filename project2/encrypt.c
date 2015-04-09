/**
Definition file encrypt.c for the header file encrypt.h
**/
#include "encrypt.h"

//NOTE: char(65) = 'A'	char(97) = 'a'
//		  char(90) = 'Z'	char(122) = 'z'
//		Difference: 26

//Encrypt the originalstring and store it into encrptstring
void encrypt(char *ostr, char *estr, int key)
{
	//Make sure the key is below 26
	key = key % 26;
	int i;
	//WARNING: ostr MUST have a null at the end!
	for (i = 0; ostr[i] != '\0'; i++)
	{
		//Capital Letter
		if (ostr[i] > 64 && ostr[i] < 91)
		{
			//Make sure it's a letter
			//Perform the encryption
			estr[i] = (char)((int)ostr[i] + key);
			if (estr[i] > 90) //Went over 'Z', nono
				estr[i] = estr[i] - 26;
			else if (estr[i] < 65) //Went below 'A', nope
				estr[i] = estr[i] + 26;
		}
		//Lowercase letter
		else if (ostr[i] > 96 && ostr[i] < 122)
		{
			//Perform encryption
			estr[i] = (char)((int)ostr[i] + key);
			if (estr[i] > 122) //Went over 'z', nono
				estr[i] = estr[i] - 26;
			else if (estr[i] < 97) //Went below 'a', nope
				estr[i] = estr[i] + 26;
		}
		else
		{
			//Just copy the character to the encrypted message
			estr[i] = ostr[i];
		}
	}
	//Add null character
	estr[i] = '\0';
}

//Decrypt uses the same key as used for encryption
void decrypt(char *estr, char *ostr, int key)
{
	key = key * -1;
	encrypt(estr, ostr, key);
}

//Remove the silly newline for the fgets function
//WARNING: str MUST contain a null character!
void removenewline(char *str)
{
	int i;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == '\n')
		{
			str[i] = '\0'; //Replace with null (Cut the string here)
			return;
		}
	}
}

