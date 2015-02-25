#include <stdlib.h>
#include <stdio.h>
#define false 0
#define true 1

int checkContinuePlaying(int*); //Ask to continue and change answer

int main()
{
	int randomAnswer = (rand() % 1000) + 1; //Between 1 and 1000
	int input = 0; //Hold user input
	int continuePlaying = true;

	while (continuePlaying)	
	{
		printf("Guess a number between 1 and 1000: ");
		input = 0; //reset input
		scanf("%d", &input);
		//First check for incorrect input
		if (input < 1 || input > 1000)
		{
			printf("Incorrect input!\n");
		}
		else if (input == randomAnswer)
		{
			//They won!!
			printf("Yay! You won!\nHave a cookie!");
			continuePlaying = checkContinuePlaying(&randomAnswer);
		}
		else
		{
			//They lost so tell them how close they are
			printf("Errr! ");
			if (input < randomAnswer)
			{
				printf("Too low. Try again.\n");
			}
			else
			{
				printf("Too high. Try again.\n");
			}
		}
	}
}

int checkContinuePlaying(int* answer)
{
	printf("\nWould you like to play again? (y/n) ");
	char i = ' ';
	scanf("\n%c", &i); //Ask for user character and remove the new line left behind
	if (tolower(i) == 'y')
	{
		//Continue playing, generate new answer
		*answer = (rand() % 1000) + 1;
		return true;
	}
	else
	{
		//Anything but y will exit
		return false;
	}
}

