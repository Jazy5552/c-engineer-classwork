/**
    Made by: Jazy Llerena
    Description - An array of integers will hold the commision rate of the products
    with the matched index number respectively. Another array will count how
    much each employee has earned using the index as the employee number. A loop
    will prompt for input and use the first number as the index for the
    employee array. The second number will then be used as the index to
    extract the product commision rate from the respective array.

    Finally, a loop will go through all the employees and display their number
    and commision amount.
**/
#include <stdio.h>

int main()
{
    const int NUMOFPRODUCTS = 5;
    const int NUMOFEMPLOYEES = 4;
    int productCommision[] = {20, 10, 5, 2, 1};
    int employees[NUMOFEMPLOYEES] = {};
    int i1 = 0, i2 = 0;
    printf("Enter the employee number followed by the product number\n"
        "such as '2 3' (Without quotes)\n");

    while (1) //yuck
    {
        printf(":");
        scanf("%d %d", &i1, &i2);
        if (i1 == -1 && i2 == -1)
        {
            break; //Exit loop here (pretty nasty)
        }
        else if (i1 < 1 || i1 > NUMOFEMPLOYEES)
        {
            printf("Invalid employee number!\n");
        }
        else if (i2 < 1 || i2 > NUMOFPRODUCTS)
        {
            printf("Invalid product number!\n");
        }
        else
        {
            *(employees + (i1 - 1)) += *(productCommision + (i2 - 1)); //Add the commision
            //rate to the employees index value
        }
    }

    //Display employee earnings
    int i;
    for (i = 0; i < NUMOFEMPLOYEES; i++)
    {
        printf("Employee num %d made $%d\n", i + 1, *(employees + i));
    }


    return 0;
}
