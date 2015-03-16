/**
	Basic Pointers and Poiner Aithmetic
	Made by: Jazy Llerena

	Create the two integer variables and the integer array. Create a test pointer variable to hold x.
	Rest is commented.
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
	*testPtr = *testPtr + 6; //Dereference the testptr and add 6 to it's value (Which is actually x)
	//Step 8
	printf("New value of *testPtr: %d\n", *testPtr);
	//Step 9
	if (*testPtr > y) //Compare the dereferenced value of testptr with y (The value is actually x)
		printf("x > y\n");
	else if (*testPtr < y)
		printf("x < y\n");
	//Step 10
	testPtr = z; //Set the test pointer to point to the array z which is a pointer as well.
	//Step 11
	printf("Values in z[]:\n");
	int i;
	for (i = 0; i < 5; i++)
	{
		//Print out the dereferenced value at the address of testptr and +5
		printf("%d\n", *(testPtr + i));
	}

	return 0;
}

