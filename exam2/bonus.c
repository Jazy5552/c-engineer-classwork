/**
	Made by Jazy Llerena
	Exam 2 Bonus Question
**/
#include <stdio.h>
#include <stdlib.h>
#include <time.h> //To supply srand
int main()
{
	srand(time(NULL)); //Seed the random number generator
	const int ROW = 10; //Constant amount of rows
	const int COL = 20; //Constant amount of columns
	int array[ROW][COL];
	int i, j, rowTotal, total = 0;
	//Loop through the rows
	for (i = 0; i < ROW; i++)
	{
		rowTotal = total; //New row (Use the current total as reference)
		//Nested loop through the columns
		for (j = 0; j < COL; j++)
		{
			array[i][j] = (rand() % 5) + 1; //Random between 1 and 5
			//Add the value to our total
			total += array[i][j];
		}
		//The difference in the total is the row's total
		rowTotal = total - rowTotal;
		//Print out the rowTotal right here and now!
		printf("Row %d total: %d\n", i + 1, rowTotal);
	}
	//PS: Cheeky way to avoid doing another pair of loops :)

	//Calculate and prnt out average (Total cells = ROW * COL)
	printf("The average of the entire array is %lf\n"
		, (double)total / (ROW * COL));

	return 0;
}


