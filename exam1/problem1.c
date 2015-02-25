#include <stdio.h>

int main()
{
	float answer = 0;
	//Calculate (5+3*12/4)%4/3
	answer = ((((3*12)/4)+5)%4)/3.0;
	//3.0 is used to cast to float
	printf("The answer is: %f\n", answer);
	
	return 0;
}

