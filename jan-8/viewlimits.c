#include <stdio.h>
#include <limits.h>
#include <float.h>

int main()
{
	printf("Max int is: %d\n", INT_MAX);
	printf("Min int is: %d\n", INT_MIN);

	printf("Max float is: %e\n", FLT_MAX);
	printf("Min float is: %e\n", FLT_MIN);
	
	double pi = 3.14;
	printf("Pi is %f",pi);
	
	return 0;
}

