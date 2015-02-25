#include <stdio.h>

int main()
{
	//A
	int a = 3 * 5;
	a += 7;
	a -= 2;
	printf("The result for a is %d\n", a);

	//B
	//Make b a float to correctly divide
	float b = 7.0 / 3.0;
	b += 4;
	//Print b with 2 decimal places only
	printf("The result for b is %.2f\n", b);

	//C
	int c = 8 % 3;
	c *= 6;
	printf("The result for c is %d\n", c);

	//D
	int d = 7 + 3;
	d *= 5;
	d -= 2;
	printf("The result for d is %d\n", d);

	getchar(); //Pause program
	return 0;
}

