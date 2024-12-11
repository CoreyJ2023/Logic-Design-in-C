/*
*   Programmer:     Corey Jenkins
*   Date:           November 16, 2024
*   Filename:       SalesTaxModule.c
*   Purpose:        Calculating price with county tax and sales taxes separately and then adding the grand total.
*                   Constants are used as well as modules for the constants to be called or declared locally to calculate.
*/
#include <stdio.h>

const double COUNTY_TAX = 0.02;
const double SALES_TAX = 0.04;
const double PRICE = 39.99;

void PriceAndCountyTax()
{
    double CountyMultiplier, CountyAndPrice;

    CountyMultiplier = COUNTY_TAX * PRICE;
    CountyAndPrice = CountyMultiplier + PRICE;

    printf("The county tax with the price multiplied: ");
    printf("%.2f\n", CountyMultiplier);

    printf("The total is: ");
    printf("%.2f\n", CountyAndPrice);
}

void PriceAndSalesTax()
{
    double SalesMultiplier, SalesAndPrice;

    SalesMultiplier = SALES_TAX * PRICE;
    SalesAndPrice = SalesMultiplier + PRICE;

    printf("The sales tax with the price multiplied: ");
    printf("%.2f\n", SalesMultiplier);

    printf("The total is: ");
    printf("%.2f\n", SalesAndPrice);
}

void GrandTotal()
{
    double CountyMultiplier, SalesMultipier;
    CountyMultiplier = COUNTY_TAX * PRICE;
    SalesMultipier = SALES_TAX * PRICE;

    double GrandTotal = CountyMultiplier + SalesMultipier + PRICE;

    printf("The grand total is: ");
    printf("%.2f\n", GrandTotal);
}

int main()
{
    PriceAndCountyTax();
    PriceAndSalesTax();
    GrandTotal();
    return 0;
}