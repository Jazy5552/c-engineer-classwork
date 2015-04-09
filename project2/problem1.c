/**
*	Made by: Rose
*				Jazy Llerena
**/
#include <stdio.h>
#include <stdlib.h> //atoi
#include <string.h> //memset
#include "encrypt.h" //Holds the encryption functions

int main()
{
	const char *MSGFILE = "message.txt";
	const char *EMSGFILE = "encryptMessage.txt";
	const char *KEYFILE = "key.txt";
	const int BLEN = 80; //Buffer length
	const int EBLEN = 80; //Encrypted buffer length
	char input[10]; //Hold the user key input
	int key;

	printf("Enter the key to encrypt messages.txt: ");
	fgets(input, 10, stdin);
	removenewline(input);

	key = atoi(input); //WARNING No safety! May cause undefined behavior!
	
	FILE *msg = fopen(MSGFILE, "r");
	FILE *emsg = fopen(EMSGFILE, "w");
	FILE *keyfile = fopen(KEYFILE, "w");
	char buffer[BLEN];
	char ebuffer[EBLEN];
	
	if (msg == NULL || emsg == NULL || keyfile == NULL)
	{
		//Failed to open a file
		printf("Error opening one of the files...\n");
		return 1;
	}

	printf("Encrypted message (%s): \n", EMSGFILE);
	while (1) //Aint stopping for no one!
	{
		memset(buffer, '\0', BLEN); //Clear buffer
		memset(ebuffer, '\0', EBLEN); //Clear buffer
		fgets(buffer, 80, msg);
		if (feof(msg))
			break; //Reached eof
		//Encrypt buffer into ebuffer
		encrypt(buffer, ebuffer, key);
		//Write the ebuffer to the encrypted message file
		fprintf(emsg, "%s", ebuffer);
		//Print to console
		printf("%s", ebuffer);
	}
	//Write to key file
	fprintf(keyfile, "%d", key);
	
	fclose(keyfile);
	fclose(msg);
	fclose(emsg);
	
	printf("Encryption Complete\n");
	/*
	char str[] = "Hello World";
	char estr[20];
	encrypt(str, estr, 5);
	printf("%s\n%s\n", str, estr);
	decrypt(estr, str, 5);
	printf("%s\n%s\n", estr, str);
	*/
	return 0;
}


