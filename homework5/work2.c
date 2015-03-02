/**
Made by: Jazy Llerena

Description - Create a loop that will prompt the user for a number.
Another loop will then check for the number inside the numberholder array.
If the number is found (The number has already been entered) then the number
will not be saved, the user will be prompted, and the main loop counter will be
decreased by one. If the number is not found in the array then the number
is saved into the array at the corresponding index.

After 20 numbers have been entered a loop will go through the array and
print out all the numbers on the screen.

**/

#include<stdio.h>

typedef enum{false, true} bool; //Make bool type :p

bool isNumberInArray(int num, int* array, int upto); //Will loop through array until 'upto' index

int main()
{
    const int arraySize = 20;
    int array[arraySize];
    int i,in;
    for (i = 0; i < arraySize; i++)
    {
        printf("Enter a number between 1 and 1000: ");
        scanf("%d", &in);
        if (in >=1 && in <= 1000)
        {
            if (! isNumberInArray(in, array, i))
            {
                *(array + i) = in;
            }
            else
            {
                //Number is already in the array
                printf("That number is already in the array!\n");
                i--; //Don't count this loop
            }
        }
        else
        {
            //Number is invalid
            printf("Invalid number!\n");
            i--; //Don't count this loop
        }
    }

    //Now print the numbers back out
    printf("\n\nThe 20 numbers you entered are as follows:\n");
    for (i = 0; i < arraySize; i++)
    {
        printf("%d. %5.d\n", i, *(array + i));
    }
    return 0;
}

bool isNumberInArray(int num, int* array, int upto)
{
    int i;
    for (i = 0; i < upto; i++)
    {
        if (num == *(array + i))
        {
            return true;
        }
    }
    //Number was not found in array
    return false;
}
