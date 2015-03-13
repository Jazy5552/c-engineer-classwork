/**
	Basic Pointers and Poiner Aithmetic
	Made by: Jazy Llerena

**/

#include <stdio.h>

int main()
{
	//Step 1 - 3
	int x = 5, y = 10, z[5] = {1,2,4,8,16};
	//Step 4
	printf("Address of x: %p\n"
		"Address of y: %p\n"
		"Address of z: %p\n", &x, &y, z);
	//Step 5
	int* testPtr = &x;
	//Step 6
	printf("Value of *testPtr: %d\n", *testPtr);
	//Step 7
	*testPtr = *testPtr + 6;
	//Step 8
	printf("New value of *testPtr: %d\n", *testPtr);
	//Step 9
	if (*testPtr > y)
		printf("x > y\n");
	else if (*testPtr < y)
		printf("x < y\n");
	//Step 10
	testPtr = z;
	//Step 11
	printf("Values in z[]:\n");
	int i;
	for (i = 0; i < 5; i++)
	{
		printf("%d\n", *(testPtr + i));
	}

	return 0;
}

