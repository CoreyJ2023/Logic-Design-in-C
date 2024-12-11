/*
* Programmer:       Corey Jenkins
* Date:             November 16, 2024
* Filename:         SalesTaxStruct.c
* Purpose:          
*/

#include <stdio.h>

struct MyTaxPlans
{
    double countyTax;
    double salesTax;
};

int main()
{
    struct MyTaxPlans MyTax;
    MyTax.countyTax = 0.02;
    MyTax.salesTax = 0.04;
    
    double price;

    double countyTaxMultiplier, salesTaxMultiplier;

    double grandTotal;
    double countyTaxTotal;
    double salesTaxTotal;

    printf("Enter a purchase price: ");
    scanf("%lf", &price);

    countyTaxMultiplier = price * MyTax.countyTax;
    countyTaxTotal = countyTaxMultiplier + price;

    salesTaxMultiplier = price * MyTax.salesTax;
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