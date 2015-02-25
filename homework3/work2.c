#include <stdio.h>

int main()
{
	int num1,num2,num3;
	int sum,product,smallest,largest;
	float average;
	printf("Enter three different integers: ");
	scanf("%d %d %d", &num1, &num2, &num3);
	
	sum = num1 + num2 + num3;
	product = num1 * num2 * num3;
	average = (float)sum / 3;

	smallest = num1;
	if (smallest > num2)
		smallest = num2;
	if (smallest > num3)
		smallest = num3;
	
	largest = num1;
	if (largest < num2)
		largest = num2;
	if (largest < num3)
		largest = num3;

	printf("Results:\n"
	"Sum - %d\n"
	"Average - %f\n"
	"Product - %d\n"
	"Smallest - %d\n"
	"Largest - %d\n"
	, sum, average, product, smallest, largest);
	
	while (getchar() == '\n') {}
	return 0;
}

