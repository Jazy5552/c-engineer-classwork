/*********************************************
* Description -
* Author - Jazy Llerena
* Date - Feb 23 2015
* *******************************************/

/*
	Create an int array of size 1000
	Loop through the array setting a random int between 1 and 10
	To get sum
		Loop through array and add each value to a temp variable
		Temp will hold total at the end of the loop
	To get the average
		Get the sum from above and divide by the size of the array (1000)
	The number of times each appear
		Make outer loop that will run from 1 to 10.  Within this loop, loop
		through the array and match the value from outer loop. Essentially
		the first loop will find for and count all the 1s in the array.
		Then print out the number of times it appears.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h> //To seed the random generator

const int ARRAY_SIZE = 1000;
const int RANDOM_MIN = 1;
const int RANDOM_MAX = 10;

int getSum(int*);
double getAverage(int*);
void displayConcurrences(int*); //Function will print out (Kindof inconsistent...)

int main()
{
	srand(time(NULL)); //Seed random
	//Declare and initialize array
	int randArray[ARRAY_SIZE];
	int i;
	for (i = 0; i < ARRAY_SIZE; i++)
	{
		*(randArray + i) = (rand() % RANDOM_MAX) + RANDOM_MIN;
	}

	printf("The sum of the array is %d\n", getSum(randArray));
	printf("The average of the array is %.2lf\n", getAverage(randArray));
	displayConcurrences(randArray);
}

void displayConcurrences(int* array)
{
	int i,j,count;
	for (i = RANDOM_MIN; i <= RANDOM_MAX; i++)
	{
		count = 0; //Reset the count
		for (j = 0; j < ARRAY_SIZE; j++)
		{
			if (*(array + j) == i) //If the array value is equal to the upper loop value
			{
				count++; //Add to the count variable
			}
		}
		printf("The numer %2.d appeared %4.d times.\n", i, count);
	}
}

int getSum(int* array)
{
	int sum = 0;
	int i;
	for (i = 0; i < ARRAY_SIZE; i++)
	{
		sum += *(array + i); //Add the value at the address to the sum
	}
	return sum;
}

double getAverage(int* array)
{
	return (getSum(array) / (double)ARRAY_SIZE);
}
