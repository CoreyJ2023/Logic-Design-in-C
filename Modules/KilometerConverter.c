/*  
 * Programmer:  Corey Jenkins
 * Date:        November 14, 2024
 * Filename:    KilometerConverter.c
 * Purpose:     A program that converts kilometers into miles. Pass by Value is used in this exercise.
*/

#include <stdio.h>
const double CONVERTER = 0.6214;

double kiloToMilesConverter(double num1)
{
    double miles, kilometers;
    printf("Enter the amount of kilometers: "); 
    scanf("%lf", &kilometers);
    miles = kilometers * num1;
    return miles;
}

int main()
{
    double results; 
    results = kiloToMilesConverter(CONVERTER);
    printf("%.2lf", results);
    printf(" miles");

    return 0;
}
