#include <stdio.h>

int main()
{
	int sum = 0;
	int numOfGrades = 0;
	float average;
	int inNum = 0;

	printf("Enter the students grades and hit enter after each grade. \n"
	"When done enter a negative number to end and calculate average.\n#");	

	scanf("%d", &inNum);
	while(inNum >= 0)
	{
		numOfGrades++;
		sum += inNum;
		printf("#");
		scanf("%d", &inNum);
	}

	if (numOfGrades == 0)
	{
		printf("No grades were entered!\n");
	}
	else
	{
		average = (float)sum / numOfGrades;
		printf("The average grade of the student is a %.1f.\n", average);

		//Get student letter grade
		char letter_grade;
		if (average <= 100 && average >= 90)
			letter_grade = 'A';
		else if (average < 90 && average >= 80)
			letter_grade = 'B';
		else if (average < 80 && average >= 70)
			letter_grade = 'C';
		else if (average < 70 && average >= 60)
			letter_grade = 'D';
		else if (average < 60 && average >= 0)
			letter_grade = 'F';
	
		printf("The letter grade of the student is a(n) %c\n", letter_grade);
	}

	
	while (getchar() == '\n') {}
	return 0;
}

