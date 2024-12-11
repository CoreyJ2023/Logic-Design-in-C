/*
*   Programmer:     Corey Jenkins
*   Date:           November 16, 2024
*   Filename:       SalesTaxModule2.c
*   Purpose:        A module that calculates county tax, sales tax, and the total amount. 
*                   This uses: global variables, and pass by values.
*/
#include <stdio.h>

const double COUNTY_TAX = 0.02;
const double SALES_TAX = 0.04;

// Prototype functions.
double countyTax(double num1);
double salesTax(double num1);
double grandTotal(double num1);

int main()
{
    double price;
    double result1, result2, result3;
    printf("Enter a price: ");
    scanf("%lf", &price);

    result1 = countyTax(price);
    printf("The total amount added with county tax is: ");
    printf("%.2lf\n", result1);

    result2 = salesTax(price);
    printf("The total amount added with sales tax: ");
    printf("%.2lf\n", result2);

    result3 = grandTotal(price);
    printf("The total amount is: ");
    printf("%.2lf\n", result3);

    return 0;
}

double countyTax(double num1)
{
    double CountyMultiplier, results1;
    CountyMultiplier = num1 * COUNTY_TAX;
    results1 = CountyMultiplier + num1;
    printf("County tax multipied by the price: ");
    printf("%.2lf\n", CountyMultiplier);
    return results1;
}

double salesTax(double num1)
{
    double SalesMultiplier, results2;
    SalesMultiplier = num1 * SALES_TAX;
    results2 = SalesMultiplier + num1;
    printf("Sales taxes multiplied by the price: ");
    printf("%.2lf\n", SalesMultiplier);
    return results2;
}

double grandTotal(double num1)
{
    double SalesMultiplier, CountyMultiplier, results3;
    SalesMultiplier = SALES_TAX * num1;
    CountyMultiplier = COUNTY_TAX * num1;
    results3 = SalesMultiplier + CountyMultiplier + num1;
    return results3;
}
