/**
	Made by Jazy Llerena
	Exam 2 Problem 2
**/
#include <stdio.h>

void printSmallest(int array[], int size);

int main()
{
	const int SIZE = 6;
	int array[SIZE];
	int i;
	//Ask the user for the 6 numbers and store them to the array
	for (i = 0; i < SIZE; i++)
	{
		printf("Enter a number: ");
		scanf("%d", &array[i]);
	}
	printf("\n"); //New line for asthetics
	//Loop through the array and print out the 6 numbers onto the screen
	for (i = 0; i < SIZE; i++)
	{
		printf("%d ", array[i]);
	}
	printf("\n"); //New line for asthetics
	//Run printSmallest function
	printSmallest(array, SIZE);

	return 0;
}

void printSmallest(int array[], int size)
{
	int smallest = array[0];
	int i;
	for (i = 0; i < size; i++)
	{
		if (array[i] < smallest)
		{
			//array[i] is the new smallest
			smallest = array[i];
		}
	}
	//Print out the smallest int
	printf("The smallest integer in the array is %d\n", smallest);
}

