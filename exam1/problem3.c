#include <stdio.h>

int main()
{
	int n = 0; //Number of inputs
	int sum = 0; //Sum of all inputs
	const int exit = -2; //Exit value
	int input = 0; //input placeholder	
	
	printf("Enter an integer (%d to exit): ", exit);
	scanf("%d", &input); //Get user input
	while (input != exit) //Break loop  if input is the exit value
	{
		n++; //Add one to the counter
		sum = sum + input; //Add input to sum
		printf("Enter another integer (%d to exit): ", exit);
		scanf("%d", &input); //Get user input
	}
	//Display the number of inputs and their sum
	printf("\nThe sum of all %d input(s) is %d\n", n, sum);

	return 0;
}

