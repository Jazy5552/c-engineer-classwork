#include <stdio.h>

int main()
{
	int grade = 0;
	char letter_grade;
	printf("Input a grade: ");
	scanf("%d", &grade);
	//Only grades between 0 and 100 will be lettered
	if (grade <= 100 && grade >= 0)
	{
		if (grade <= 100 && grade >= 90) //between 90 and 100
			letter_grade = 'A';
		else if (grade >= 80) //between 80 and 89
			letter_grade = 'B';
		else if (grade >= 70) //between 70 and 79
			letter_grade = 'C';
		else if (grade >= 60) //between 60 and 69
			letter_grade = 'D';
		else if (grade >= 0) // between 0 and 59
			letter_grade = 'F'; 
		printf("Letter grade is a(n) %c\n", letter_grade);
	}
	else
	{
		printf("Invalid input\n");
	}

	while (getchar() == '\n')
	{}

	return 0;
}


