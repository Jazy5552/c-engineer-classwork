#include <stdio.h>

//prototypes
int integerPower(int base, int exponent);

int main()
{
	int x,y,z;
	printf("Enter the base and exponent seperated by a space: ");
	scanf("%d %d", &x, &y);

	z = integerPower(x, y);
	printf("The answer is %d\n", z);
	return 0;
}

int integerPower(int base, int exponent)
{
	//Using loops
	int answer = 1; //Will hold the answer value
	int i = 1;
	for (; i <= exponent; i++)
	{
		answer *= base; //Multiply the answer by the base
		//exponent number of times
	}
	return answer;
}

/*
int integerPower(int base, int exponent)
{
	//Using recursion (Breaks with negative exponents!)
	if (exponent == 0)
	{
		return 1;
	}
	//Subtract one from exponent and call the function again multipling
	//the base to what ever is returned. (Go deep into the rabbit hole)
	exponent--;
	return (integerPower(base, exponent) * base);
}
*/
