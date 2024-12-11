/*
 *  Programmer:     Corey Jenkins
 *  Date:           November 24, 2024
 *  Filename:       AreaofRectangles3.c
 *  Purpose:        
*/

#include  <stdio.h>

// Prototype function.
void TwoRectangles();

int main()
{
    TwoRectangles();
    return 0;
}

void TwoRectangles()
{
    int RectangleLengthOne, RectangleWidthOne;
    int RectangleLengthTwo, RectangleWidthTwo;

    int AreaRectangleOne, AreaRectangleTwo;

    printf("Enter the length of the first rectangle: ");
    scanf("%d", &RectangleLengthOne);
    printf("Enter the width of the first rectangle: ");
    scanf("%d", &RectangleWidthOne);

    printf("Enter the length of the second rectangle: ");
    scanf("%d", &RectangleLengthTwo);
    printf("Enter the width of the second rectangle: ");
    scanf("%d", &RectangleWidthTwo);

    AreaRectangleOne = RectangleLengthOne * RectangleWidthOne;
    AreaRectangleTwo = RectangleLengthTwo * RectangleWidthTwo;

    if(AreaRectangleOne > AreaRectangleTwo)
    {
        printf("The area of the first rectangle is greater than the second rectangle");
    }
    else if (AreaRectangleOne < AreaRectangleTwo)
    {
        printf("The area of the first rectangle is less than the second rectangle.");
    }
    else
    {
        printf("The area of the two rectangles are the same.");
    }
    
}