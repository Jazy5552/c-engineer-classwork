/**
*	Problem 2
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
	fgets(buffer, BUFLEN, keyfile);
	removenewline(buffer);
	key = atoi(buffer); //WARNING May cause undefined behavior!

	printf("The decrypted file (%s): \n", DMSGFILE);
	while (1)
	{
		memset(buffer, '\0', BUFLEN); //Clear buffers
		memset(debuffer, '\0', BUFLEN);
		//Get a line from the encrypted message file
		fgets(buffer, BUFLEN, emsg);
		if (feof(emsg))
			break; //eof
		
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


