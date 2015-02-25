#include <stdio.h>
#define false 0
#define true 1

int isPrime(int x); //The int will be 0 = false, 1 = true

int main()
{
	printf("Prime numbers between 1 and 100\n");
	int i = 1;
	for (; i <= 1000; i++)
	{
		if (isPrime(i))
		{
			printf("%d ", i);
		}
	}
	printf("\n");
	return 0;
}

int isPrime(int x)
{
	//Loop through every number and try to divide
	int divisible = true;
	int i = x;
	for (i--; i > 1; i--)
	{
		//Divid every number less than x except 1 and itself
		if (x % i == 0)
		{
			//x is divisible by something other than 1 or itself
			divisible = false;
			break; //Exit the loop (no need to continue)
		}
	}
	return divisible;
}

