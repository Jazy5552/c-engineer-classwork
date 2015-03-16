/**
	Made by: Jazy Llerena

	Desc: Create a swap function that takes in two integer pointers.
		Within the swap function I will use a temp int variable to hold the
		value of one of the integers and then I will swap the dereferenced values
		of the two pointers accordingly. 
		I will print out the original variable values and then swap values.
**/

#include <stdio.h>

void swap(int*, int*);

int main()
{
	int a = 5, b = 10; //Create the two integers

	printf("Variable a = %d\nVariable b = %d\n", a, b);
	swap(&a,&b); //Swap the values
	printf("Variables swapped!\n");
	printf("Variable a = %d\nVariable b = %d\n", a, b);

	return 0;
}

void swap(int* a, int* b)
{
	int tmp = *a; //Hold value of a for swapping
	*a = *b; 
	*b = tmp; //Get the stored value of a within tmp and store it in b
}
