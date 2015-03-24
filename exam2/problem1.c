/**
	Made by Jazy Llerena
	Exam 2 Problem 1
**/
#include <stdio.h>
#include <math.h>

//Diagonal = sqrt(l ^ 2 + w ^ 2)
double diagonal(double l, double w);

int main()
{
	double length,width;
	printf("Enter the length of the rectangle (m): ");
	scanf("%lf", &length);
	printf("Enter the width of the rectangle (m): ");
	scanf("%lf", &width);

	printf("The length of the diagonal is %lf meters.\n"
		, diagonal(length,width));
	return 0;
}

double diagonal(double l, double w)
{
	//Call formula using math.h functions
	return sqrt(pow(l, 2) + pow(w, 2));
}

