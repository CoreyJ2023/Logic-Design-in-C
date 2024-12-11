#include <stdio.h> 

// Constant global variables.
const double SALES_TAX = 0.10; // 10%
const double PRICE = 3.99;

// Prototype Function. 
double PriceAndSalesTax(double num1, double num2);

int main()
{
  double result = PriceAndSalesTax(SALES_TAX, PRICE);
  printf("%.2f", result); // %.2f rounds by two decimal places.
  return 0; 
} 

double PriceAndSalesTax(double num1, double num2)
{
  double salesTaxMultiplier, result;
  salesTaxMultiplier = num1 * num2;
  result = salesTaxMultiplier + num2;
  return result;
}