#include <stdio.h>

int main()
{
	float length = 0.0;
	float width = 0.0;
	float area = 0.0;	
	
	//Ask for and record the length of the room
	printf("Enter the length of the room in feet: ");
	scanf("%f", &length);

	//Ask for and record the width of the room
	printf("Enter the width of the room in feet: ");
	scanf("%f", &width);

	//Calculate the area
	area = length * width;	

	if (area != 0)
	{
		printf("The area of the room is %.2f feet.\n", area);
	} else {
		//If the area is 0 (Width or length was not inputted)
		//display an error
		printf("Incorrect input!\n");
	}	
	
	//char* tmp = "";
	//scanf("%s", tmp); 
	getchar(); getchar();//Pause program
	return 0;
}

