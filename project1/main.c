/**
    Project 1 for C for Engineers
    Made by: Ana Uribepuentes
             Jassiel Llerena
    Spring 2015
**/
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> //For the tolower function

//Constants
const double PI = 3.14159265;

//Menu functions
int getCalculateMenu();
/* Show and get the user input for the first menu
    by showing perimeter, area, volume */
int getFigureMenu(int);
/* Show and get the user input for the second menu depending on menu 1 choice
    with 1 (perimeter), 2 (area), 3 (volume) as an argument */

//Calculating Functions (Will ask for user input in function and display answer)
void getPerSquare();
void getPerRectangle();
void getPerParallelogram();
void getPerTriangle();
void getPerTrapezoid();
void getPerCircle();

void getAreaSquare();
void getAreaRectangle();
void getAreaParallelogram();
void getAreaTriangle();
void getAreaTrapezoid();
void getAreaCircle();
void getAreaCylinder();

void getVolCube();
void getVolRectangularprism();
void getVolTriangularpyramid();
void getVolSphere();
void getVolCylinder();
void getVolCone();

char processYNInput(char*); //Will process the final y or n to remove the newline

int main()
{
    printf("Ana and Jazy's multi-geometry calculator!\n");
    char userIn[80];

    //TODO Put in loop
    do
    {
        int i = getCalculateMenu();
        switch (i)
        {
        case 1: //Perimeter
            switch (getFigureMenu(i))
            {
            case 1:
                getPerSquare();
                break;

            case 2:
                getPerRectangle();
                break;

            case 3:
                getPerParallelogram();
                break;

            case 4:
                getPerTriangle();
                break;

            case 5:
                getPerTrapezoid();
                break;

            case 6:
                getPerCircle();
                break;

            default:
                printf("Invalid figure selection!");
                break;
            }
            break;

        case 2: //Area
            switch (getFigureMenu(i))
            {
            case 1:
                getAreaSquare();
                break;

            case 2:
                getAreaRectangle();
                break;

            case 3:
                getAreaParallelogram();
                break;

            case 4:
                getAreaTriangle();
                break;

            case 5:
                getAreaTrapezoid();
                break;

            case 6:
                getAreaCircle();
                break;

            case 7:
                getAreaCylinder();
                break;

            default:
                printf("Invalid figure selection!");
                break;
            }

        case 3: //Volume
            switch (getFigureMenu(i))
            {
            case 1:
                getVolCube();
                break;

            case 2:
                getVolRectangularprism();
                break;

            case 3:
                getVolTriangularpyramid();
                break;

            case 4:
                getVolSphere();
                break;

            case 5:
                getVolCylinder();
                break;

            case 6:
                getVolCone();
                break;

            default:
                printf("Invalid figure selection!");
                break;
            }

        default:
            printf("Invalid selection!");
            break;
        }
    printf("\nWould you like to make another calculation? (y/n): ");
    scanf("%s", userIn);
    } while (processYNInput(userIn) == 'y');
    return 0;
}

//Menu function definitions
int getCalculateMenu()
{
    int i = 0;
    printf("\n"
           "Choose the calculation to perform\n"
           "\t1) Perimeter\n"
           "\t2) Area\n"
           "\t3) Volume\n"
           "\nUser choice: ");
    scanf("%d", &i);
    return i;
}

int getFigureMenu(int firstMenu)
{
    int i = 0;
    printf("\n"
           "Choose a geometrical figure\n");
    switch (firstMenu)
    {
    case 1: //Perimeter figures menu
        printf("\t1) Square\n\t2) Rectangle\n\t3) Parallelogram\n"
               "\t4) Triangle\n\t5) Trapezoid\n\t6) Circle\n"
               "\nUser choice: ");
        break;

    case 2: //Area figures menu
        printf("\t1) Square\n\t2) Rectangle\n\t3) Parallelogram\n"
               "\t4) Triangle\n\t5) Trapezoid\n\t6) Circle\n\t7) Cylinder\n"
               "\nUser choice: ");
        break;

    case 3: //Volume figures menu
        printf("\t1) Cube\n\t2) Rectangular Prism\n\t3) Triangular Pyramid\n"
               "\t4) Sphere\n\t5) Cylinder\n\t6) Cone\n"
               "\nUser choice: ");
        break;

    default: //How did this happen?
        return firstMenu; //Do nothing...
    }

    scanf("%d", &i);
    return i;
}

//Calculating function definitions
/*Perimeters*/
void getPerSquare() // l * 4
{
    double l = 0, x;
    printf("\nEnter the length of a side (m): ");
    scanf("%lf", &l);

    x = l * 4;
    if (x == 0) //Error
        printf("Invalid input detected...");
    else
        printf("The permimeter of the square is %.2lf meters.\n", x);
}
void getPerRectangle() // 2 * (l + w)
{
    double l = 0, w = 0, x;
    printf("\nEnter the length (m): ");
    scanf("%lf", &l);
    printf("Enter the width (m): ");
    scanf("%lf", &w);

    x = 2 * ( l + w );
    if (x == 0) //Error
        printf("Invalid input detected...");
    else
        printf("The permimeter of the rectangle is %.2lf meters.\n", x);
}
void getPerParallelogram() // 2 * (l + w) (Same as above)
{
    double l = 0, w = 0, x;
    printf("\nEnter the length (m): ");
    scanf("%lf", &l);
    printf("Enter the width (m): ");
    scanf("%lf", &w);

    x = 2 * ( l + w );
    if (x == 0) //Error
        printf("Invalid input detected...");
    else
        printf("The permimeter of the parallelogram is %.2lf meters.\n", x);
}
void getPerTriangle() // l1 + l2 + l3
{
    double s1 = 0, s2 = 0, s3 = 0, x;
    printf("\nEnter the length of side 1 (m): ");
    scanf("%lf", &s1);
    printf("Enter the length of side 2 (m): ");
    scanf("%lf", &s2);
    printf("Enter the length of side 3 (m): ");
    scanf("%lf", &s3);

    x = s1 + s2 + s3;
    if (x == 0) //Error
        printf("Invalid input detected...");
    else
        printf("The permimeter of the triangle is %.2lf meters.\n", x);
}
void getPerTrapezoid() // a + b + c + d
{
    double a = 0, b = 0, c = 0, d = 0, x;
    printf("\nEnter the length of side A (m): ");
    scanf("%lf", &a);
    printf("Enter the length of side B (m): ");
    scanf("%lf", &b);
    printf("Enter the length of side C (m): ");
    scanf("%lf", &c);
    printf("Enter the length of side D (m): ");
    scanf("%lf", &d);

    x = a + b + c + d;
    if (x == 0) //Error
        printf("Invalid input detected...");
    else
        printf("The permimeter of the trapezoid is %.2lf meters.\n", x);
}
void getPerCircle() // 2 * pi * r
{
    double r = 0, x;
    printf("\nEnter the radius (m): ");
    scanf("%lf", &r);

    x = 2 * PI * r;
    if (x == 0) //Error
        printf("Invalid input detected...");
    else
        printf("The permimeter of the circle is %.2lf meters.\n", x);
}

/*Areas*/
void getAreaSquare() // l^2
{
    double l = 0, x;
    printf("\nEnter the length (m): ");
    scanf("%lf", &l);

    x = l * l;
    if (x == 0) //Error
        printf("Invalid input detected...");
    else
        printf("The area of the square is %.2lf square meters.\n", x);
}
void getAreaRectangle() // l w
{
    double l = 0, w = 0, x;
    printf("\nEnter the length (m): ");
    scanf("%lf", &l);
    printf("Enter the width (m): ");
    scanf("%lf", &w);

    x = l * w;
    if (x == 0) //Error
        printf("Invalid input detected...");
    else
        printf("The area of the rectangle is %.2lf square meters.\n", x);
}
void getAreaParallelogram() // b h
{
    double b = 0, h = 0, x;
    printf("\nEnter the base length (m): ");
    scanf("%lf", &b);
    printf("Enter the height (m): ");
    scanf("%lf", &h);

    x = b * h;
    if (x == 0) //Error
        printf("Invalid input detected...");
    else
        printf("The area of the parallelogram is %.2lf square meters.\n", x);
}
void getAreaTriangle() // l h / 2
{
    double l = 0, h = 0, x;
    printf("\nEnter the length (m): ");
    scanf("%lf", &l);
    printf("Enter the height (m): ");
    scanf("%lf", &h);

    x = l * h / 2;
    if (x == 0) //Error
        printf("Invalid input detected...");
    else
        printf("The area of the triangle is %.2lf square meters.\n", x);
}
void getAreaTrapezoid() // ( a + b ) h / 2
{
    double a = 0, b = 0, h = 0, x;
    printf("\nEnter the base length (m): ");
    scanf("%lf", &a);
    printf("Enter the top side length (m): ");
    scanf("%lf", &b);
    printf("Enter the height (m): ");
    scanf("%lf", &h);

    x = ( a + b ) * h / 2;
    if (x == 0) //Error
        printf("Invalid input detected...");
    else
        printf("The area of the trapezoid is %.2lf square meters.\n", x);
}
void getAreaCircle() // pi r^2
{
    double r = 0, x;
    printf("\nEnter the radius (m): ");
    scanf("%lf", &r);

    x = PI * r * r;
    if (x == 0) //Error
        printf("Invalid input detected...");
    else
        printf("The area of the circle is %.2lf square meters.\n", x);
}
void getAreaCylinder() // 2 pi r h
{
    double r = 0, h = 0, x;
    printf("\nEnter the radius (m): ");
    scanf("%lf", &r);
    printf("Enter the height (m): ");
    scanf("%lf", &h);

    x = 2 * PI * r * h;
    if (x == 0) //Error
        printf("Invalid input detected...");
    else
        printf("The area of the cylinder is %.2lf square meters.\n", x);
}

/*Volumes*/
void getVolCube() // l^3
{
    double l = 0, x;
    printf("\nEnter the length (m): ");
    scanf("%lf", &l);

    x = l * l * l; //cute
    if (x == 0) //Error
        printf("Invalid input detected...");
    else
        printf("The volume of the cube is %.2lf cubic meters.\n", x);
}
void getVolRectangularprism() // w h l
{
    double w = 0, h = 0, l = 0, x;
    printf("\nEnter the width (m): ");
    scanf("%lf", &w);
    printf("Enter the height (m): ");
    scanf("%lf", &h);
    printf("Enter the length (m): ");
    scanf("%lf", &l);

    x = w * h * l;
    if (x == 0) //Error
        printf("Invalid input detected...");
    else
        printf("The volume of the rectangular prism is %.2lf cubic meters.\n", x);
}
void getVolTriangularpyramid() // 1/3 B h (B = b h / 2
{
    double b = 0, h1 = 0, h2 = 0, x; // h1-Base height h2-pyramid height
    printf("\nEnter the length of the base triangle (m): ");
    scanf("%lf", &b);
    printf("Enter the height of the base triangle (m): ");
    scanf("%lf", &h1);
    printf("Enter the height of the pyramid (m): ");
    scanf("%lf", &h2);

    x = (b * h1 / 2) * h2 / 3; //messy...
    if (x == 0) //Error
        printf("Invalid input detected...");
    else
        printf("The volume of the triangular pyramid is %.2lf cubic meters.\n", x);
}
void getVolSphere() // 4/3 pi r^3
{
    double r = 0, x;
    printf("\nEnter the radius (m): ");
    scanf("%lf", &r);

    x = (4 * PI * r * r * r) / 3; //Gotta love those exponents...
    if (x == 0) //Error
        printf("Invalid input detected...");
    else
        printf("The volume of the sphere is %.2lf cubic meters.\n", x);
}
void getVolCylinder() // pi r^2 h
{
    double r = 0, h = 0, x;
    printf("\nEnter the radius (m): ");
    scanf("%lf", &r);
    printf("Enter the height (m): ");
    scanf("%lf", &h);

    x = PI * r * r * h;
    if (x == 0) //Error
        printf("Invalid input detected...");
    else
        printf("The volume of the cylinder is %.2lf cubic meters.\n", x);
}
void getVolCone() // pi r^2 h/3
{
    double r = 0, h = 0, x;
    printf("\nEnter the radius (m): ");
    scanf("%lf", &r);
    printf("Enter the height (m): ");
    scanf("%lf", &h);

    x = (PI * r * r * h) / 3;
    if (x == 0) //Error
        printf("Invalid input detected...");
    else
        printf("The volume of the cone is %.2lf cubic meters.\n", x);
}

char processYNInput(char* input)
{
    char x;
    int i = 0;
    /*
        Loop through the character array (input) until a char that
        is not the newline is found or the end is reached
    */
    while (( x = *(input + i)) != '\0' ) //\0 is null character
    {
        if ( x != '\n' )
        {
            return tolower(x);
        }
        i++;
    }
    //No valid characters were found;
    return '\0';
}
