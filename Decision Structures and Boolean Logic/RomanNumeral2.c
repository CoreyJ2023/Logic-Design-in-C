/* 
 *  Programmer:     Corey Jenkins
 *  Date:           November 25, 2024
 *  Filename:       RomanNumeral.c
 *  Purpose:        A Switch is used to select which Roman Numeral will be displayed.
 *                  Modules are used.
*/

#include <stdio.h> 

// Prototype Function
void RomanNumerals();

int main()
{
    printf("Please enter a number between 1 and 10: ");
    RomanNumerals();
    return 0;
}

void RomanNumerals()
{
    int number;
    scanf("%d", &number);

    switch (number)
    {
        case 1:
            printf("I");
            break;

        case 2:
            printf("II");
            break;
    
        case 3:
            printf("III");
            break;

        case 4:
            printf("IV");
            break;

        case 5:
            printf("V");
            break;

        case 6:
            printf("VI");
            break;

        case 7:
            printf("VII");
            break;

        case 8:
            printf("VIII");
            break;

        case 9:
            printf("IX");
            break;

        case 10:
            printf("X");
            break;

        default:
            printf("An error has occurred.");
            printf("Please enter a number between 1 and 10: ");
            scanf("%d", &number);
    }
}