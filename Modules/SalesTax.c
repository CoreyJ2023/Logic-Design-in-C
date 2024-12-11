/*
* Programmer:       Corey Jenkins
* Date:             November 15, 2024
* Filename:         SalesTax.c
* Purpose:
*/

#include <stdio.h>

int main()
{
    double countyTax, salesTax;
    double price;

    double countyTaxMultiplier, salesTaxMultiplier;

    double grandTotal;
    double countyTaxTotal;
    double salesTaxTotal;

    countyTax = 0.02;
    salesTax = 0.04;

    printf("Enter a purchase price: ");
    scanf("%lf", &price);

    countyTaxMultiplier = price * countyTax;
    countyTaxTotal = countyTaxMultiplier + price;

    salesTaxMultiplier = price * salesTax;
    salesTaxTotal = salesTaxMultiplier + price;
    
    grandTotal = countyTaxMultiplier + salesTaxMultiplier + price;

    printf("The total county tax price is: ");
    printf("%.2lf\n", countyTaxTotal);

    printf("The sales tax total is: ");
    printf("%.2lf\n", salesTaxTotal);

    printf("The total, including sales and county taxes, is: ");
    printf("%.2lf\n", grandTotal);

    return 0;
}