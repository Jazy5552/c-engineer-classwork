/**
*	Made by: Jazy Llerena
*	Program will create and write to a file named sales.txt
*	if the file exists then the program will append to it
*  type quit for the name and quit for the item to exit
**/
#include <stdio.h>
#include <string.h> //strlen

void removenewline(char *str); //Will replace newline with null
int strequ(char *str1, char *str2); //My own compare function
//Will return 1 (true) when the strings are equal
//Will return 0 (false) when the strings are not equal

int main()
{
	const int NAMELEN = 20;
	const int SALELEN = 60;
	const char *FILENAME = "sales.txt";
	char name[NAMELEN];
	char sale[SALELEN];

	//While
	while (1) //Can't stop, won't stop ^.^
	{
		printf("Enter the employees name: ");
		fgets(name, NAMELEN, stdin);
		removenewline(name);

		printf("Enter the item name that was sold: ");
		fgets(sale, SALELEN, stdin);
		removenewline(sale);
		//printf("%s ", name); //debug
		//printf("%s", sale); //debug
		//Check for quit quit
		if (strequ(name, "quit") && strequ(sale, "quit"))
			break; //Exit loop

		//Open, write, and close the file
		FILE *file = fopen(FILENAME, "a");
		int countwritten = 0;
		//Write the name
		countwritten += fwrite(name, sizeof(name[0]), strlen(name), file);
		//Write delimiter
		countwritten += fwrite(": ", sizeof(char), 2, file);
		//Write the sale name
		countwritten += fwrite(sale, sizeof(sale[0]), strlen(sale), file);
		//Write the newline
		countwritten += fwrite("\n", sizeof(char), 1, file);
		//Close the file
		fclose(file);

		//Check if everything was written
		if (countwritten == (strlen(name) + strlen(sale) + 3))
			printf("Write successful\n");
		else
			printf("Write failed\n");
	}
	//END While
	
}

void removenewline(char *str)
{
	int i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '\n')
			str[i] = '\0';
		i++;
	}
}

int strequ(char *str1, char *str2)
{
	int i = 0;
	while (str1[i] != '\0')
	{
		if (str1[i] != str2[i])
			return 0; //They are not equal
		i++; //Increment counter (I always forget this...)
	}
	if (str1[i] != str2[i]) //Make sure str2 also has the null at i
		return 0; //str1 is a substring of str2?
	return 1; //They must be equal (80% sure)
}

