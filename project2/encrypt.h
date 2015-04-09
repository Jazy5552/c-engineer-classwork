/**
Header file for encrypt.c to be used in project
**/
#ifndef encrypt_h
#define encrypt_h

//Will encrypt original and store into encryholder using the key
void encrypt(char *original, char *encryholder, int key);
//Will unencrypt by running the encrypt with the key * -1
void decrypt(char *encrypted, char *oriholder, int key);
//Remove that pesky newline at the end of fgets
void removenewline(char *str);

#endif
