/**
*	Made by: Jazy Llerena
*
**/
#include <stdio.h>
#include <string.h>

//Finds employee and prings all their sales, returns number of items
int printemployeesales(char *name, const char* filename);
void removenewline(char *str);

int main()
{
	const int NAMELEN = 20;
	const char *filename = "sales.txt";
	char name[20];
	while (1) //Choo Choo
	{
		printf("Enter the name of the employee to search: ");
		fgets(name, NAMELEN, stdin);
		removenewline(name); //Remove that annoying newline at the end

		//Check if user entered quit
		if (strcmp(name, "quit") == 0)
			break; //exit

		printf("%s items sold:\n", name);
		printemployeesales(name, filename);
		printf("\n");
	}
	
	return 0;
}

int printemployeesales(char *name, const char* filename)
{
	char buffer[80]; //File line contents will be stored here
	char *n, *s, *delimiter; //Name, Salename, Delimiter (:)
	FILE *file = fopen(filename, "r");
	int items = 0; //Keep count of items... for reasons
	do
	{
		//File line format (NAME: SALENAME)
		fgets(buffer, 80, file);
		n = strstr(buffer, name); //Locate name in buffer and n SHOULD point
		//to the start of the buffer (If it indeed found the name)
		//Make sure the name was found and that the : is present
		if (n != NULL && buffer == n && (delimiter = strchr(buffer, ':')) != NULL)
		{
			//Set s (Salename) to 2 spaces after the delimiter
			s = delimiter + (sizeof(delimiter[0]) * 2);
			*delimiter = '\0'; //Now n is just a string with the name :D
			if (strcmp(name, n) == 0) //Check that the names are identical
			{
				printf("\t%s", s);
				items++;
			}
		}
	} while (feof(file) == 0); //eof is not flipped, continue
	fclose(file);
	if (items == 0)
		printf("\tN/A\n");
	return items;
}

void removenewline(char *str) //Primitive function (Needs str to have null)
{
	int i;
	for (i = 0; str[i] != '\0'; i++) //Hijacked for loop >:D
	{
		if (str[i] == '\n')
		{
			str[i] = '\0';
			return;
		}
	}
}

