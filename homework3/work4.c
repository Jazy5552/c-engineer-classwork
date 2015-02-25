#include <stdio.h>

int main()
{
	int i;
	for (i = 0; i< 255; i++)
	{
		//Loop through and print out all 255 characters of the ascii code
		printf("DECIMAL: %3d \t CHARACTER: %c\n", i, (char)i);
	}

	while (getchar() == '\n') {}
	return 0;
}

