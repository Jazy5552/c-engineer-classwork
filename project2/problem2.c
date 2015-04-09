/**
*	Made by: Rose Jean Louis
*				Jazy Llerena
*		Problem 2
**/
#include <stdio.h>
#include <stdlib.h> //atoi
#include <string.h> //strlen
#include "encrypt.h" //My encryption functions

int main()
{
	const char *EMSGFILE = "encryptMessage.txt";
	const char *DMSGFILE = "decryptMessage.txt";
	const char *KEYFILE = "key.txt";
	const int BUFLEN = 80;
	int key;
	char buffer[BUFLEN];
	char debuffer[BUFLEN];
	
	FILE *emsg = fopen(EMSGFILE, "r");
	FILE *demsg = fopen(DMSGFILE, "w");
	FILE *keyfile = fopen(KEYFILE, "r");

	//Make sure all files opened
	if (emsg == NULL || demsg == NULL || keyfile == NULL)
	{
		printf("Error openning a file...\n");
		return 1;
	}

	//Get key from key.txt
	if (fgets(buffer, BUFLEN, keyfile) == NULL)
	{
		printf("Error: Key file is empty!\n");
		return 1; //Key file is empty!
	}
	removenewline(buffer);
	key = atoi(buffer); //WARNING May cause undefined behavior!

	printf("The decrypted file (%s): \n", DMSGFILE);
	while (1)
	{
		memset(buffer, '\0', BUFLEN); //Clear buffers
		memset(debuffer, '\0', BUFLEN);
		//Get a line from the encrypted message file
		if (fgets(buffer, BUFLEN, emsg) == NULL)
			break; //Nothing left in file
		
		//Run the decrypt function
		decrypt(buffer, debuffer, key);
		printf("%s", debuffer);
		//Write to the file
		fprintf(demsg, "%s", debuffer);
	}

	fclose(emsg);
	fclose(demsg);
	fclose(keyfile);
	return 0;
}


