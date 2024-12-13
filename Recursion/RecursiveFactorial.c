/*
*   Programmer:     Corey Jenkins
*   Date:           December 13, 2024
*   Filename:       RecursiveFactorial.c
*   Purpose:
*/

#include <stdio.h>

int factorial(int n);

int main()
{
    // Local variable to hold a number
    // entered by the user.

    int number;

    // Local variable to hold the
    // factorial of the number.
    int numFactorial;

    // Get a number from the user.
    printf("Enter a non-negative integer: ");
    scanf("%d", &number);

    // Get the factoiral of the number.
    numFactorial = factorial(number);

    // Display the factorial.
    printf("The factorial of %d\n", number);
    printf("is %d\n", numFactorial);

    return 0;
}

// The factorial function uses recursion to
// calculate the factorial of its arguments,
// which is assumed to be non-negative.
int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }

    else
    {
        return n * factorial(n - 1);
    }
}