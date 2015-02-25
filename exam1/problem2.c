#include <stdio.h>

int main()
{
	//Ask for the two numbers
	double num1 = 0, num2 = 0;
	printf("Please enter two numbers to compare: ");
	scanf("%lf %lf", &num1, &num2);

	if (num1 < num2) //num1 is smaller than num2
	{
		printf("The smaller value is %lf The larger value is %lf\n", num1, num2);
	}
	else if (num2 < num1) //num2 is smaller than num1
	{
		printf("The smaller value is %lf The larger value is %lf\n", num2, num1);
	}
	else if (num1 == num2) //The two numbers are the same
	{
		printf("The values %lf and %lf are the same\n", num1, num2);
	}

	return 0;
}

