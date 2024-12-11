/*
 * Programmer:     Corey Jenkins
 * Date:           November 14, 2024
 * Filename:       kilometersStruct
 * Purpose:        To convert kilometers to miles while assigning a struct.
*/

#include <stdio.h>

struct KilometerFormula
{
    double kilometerConverter;
};

double KilometersToMiles(double num)
{
    double miles, kilometers;
    printf("Enter kilometers:");
    scanf("%lf", &kilometers);
    miles = kilometers * num;
    return miles;
}

int main()
{
    struct KilometerFormula MyKilometerFormula;
    MyKilometerFormula.kilometerConverter = 0.6214;

    double results;
    results = KilometersToMiles(MyKilometerFormula.kilometerConverter);
    printf("%lf", results);
    return 0;
}