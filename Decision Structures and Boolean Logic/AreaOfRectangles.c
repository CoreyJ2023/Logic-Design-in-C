/*
 *  Programmer:     Corey Jenkins
 *  Date:           November 23, 2024
 *  Filename:       AreaOfRectangles.c
 *  Purpose:        Calculates the area of two rectangle and using an if/else statement to
 *                  determine, if is greater than, equal to, or less than one of the other.
*/

#include <stdio.h>

int main()
{
    int RectangleLengthOne, RectangleWidthOne;
    int RectangleLengthTwo, RectangleWidthTwo;

    int AreaOfRectangleOne, AreaOfRectangleTwo;

    printf("Enter the length of rectangle one: ");
    scanf("%d", &RectangleLengthOne);
    printf("Enther the width of rectangle one: ");
    scanf("%d", &RectangleWidthOne);

    printf("Enter the length of rectangle two :");
    scanf("%d", &RectangleLengthTwo);
    printf("Enter the width of rectangle two : ");
    scanf("%d", &RectangleWidthTwo);

    AreaOfRectangleOne = RectangleLengthOne * RectangleWidthOne;
    AreaOfRectangleTwo = RectangleLengthTwo * RectangleWidthTwo;

    if(AreaOfRectangleOne == AreaOfRectangleTwo)
    {
         printf("Both have the same dimensions.");
    }
    else if (AreaOfRectangleOne > AreaOfRectangleTwo)
    {
        printf("The area of rectangle one is greater than area of rectangle two.");
    }
    else
    {
        printf("The area of rectangle one is less than the area of rectangle two.");
    }
    
    return 0;
}