#include <stdio.h>

int main()
{
	int numOfTerms = 0;
	printf("Enter the number of terms to estimate for pi: ");
	scanf("%d", &numOfTerms);

	float pi = 0;
	int i;
	for (i = 0; i < numOfTerms; i++)
	{
		if (i % 2 == 0 || i == 0) //Even term (Add)
		{
			pi += (float)(4 / ((2 * i) - 1));
		}
		else //Odd term (Subtract)
		{
			pi -= ((float)4 / ((2 * i) - 1));
		}
	printf("%d %f\n",i,pi);
	}
	if (pi == 0) //That's no where near close to pi
	{
		printf("You entered to use 0 terms, therefore pi is 0.\n");
	}
	else
	{
		printf("PI to %d terms: %f\n", numOfTerms, pi);	
	}

	while (getchar() == '\n') {}
	return 0;
}

