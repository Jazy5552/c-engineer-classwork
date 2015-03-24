/**
	Made by Jazy Llerena
	Exam 2 Problem 3
**/
#include <stdio.h>

//Fahrenheit -> Celsius
// F = (9/5)C + 32
// C = (5/9)(F - 32)
void convert_temperature(double *t);

int main()
{
	double t;
	//Ask user for temperature, to be converted
	printf("Enter the temperature in Fahrenheit: ");
	scanf("%lf", &t);
	
	//Convert t
	convert_temperature(&t);
	printf("The temperature in Celcius is %lf degrees.\n", t);

	return 0;
}

void convert_temperature(double *t)
{
	*t = (5.0 / 9.0) * (*t - 32);
}

