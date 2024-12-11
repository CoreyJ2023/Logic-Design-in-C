/*
 *  Programmer:     Corey Jenkins
 *  Date:           November 24, 2024
 *  Filename:       AreaOfRectanges2.c
 *  Purpose:        Calculates the area of two rectangle and using an if/else statement to
 *                  determine, if is greater than, equal to, or less than one of the other.
 *                  Uses Pass by Value.
*/

#include <stdio.h>

// Prototype function.
int TwoRectangles(int num1, int num2);

int main()
{
   int RectangleLengthOne, RectangleWidthOne;
   int RectangleLengthTwo, RectangleWidthTwo;

   int AreaRectangleOne, AreaRectangleTwo;

   printf("Enter the length of the first rectangle: ");
   scanf("%d", &RectangleLengthOne);
   printf("Enter the width of the first rectangle: ");
   scanf("%d", &RectangleWidthOne);

   printf("Etner the length of the second rectangle: ");
   scanf("%d", &RectangleLengthTwo);
   printf("Enter the width of the second rectangle: ");
   scanf("%d", &RectangleWidthTwo);

   AreaRectangleOne = RectangleLengthOne * RectangleWidthOne;
   AreaRectangleTwo = RectangleLengthTwo * RectangleWidthTwo;

   int result = TwoRectangles(AreaRectangleOne, AreaRectangleTwo);
   printf("%d", result);

   return 0;
}

int TwoRectangles(int num1, int num2)
{
    int result;

    if(num1 == num2)
    {
        printf("They're the same dimensions.");
        return result;
    }
    else if (num1 > num2)
    {
        printf("Rectangle one is greater than rectangle two.");
        return result;
    }
    else
    {
        printf("Rectangle one is less than rectangle two.");
        return result;
    }
    
}