/* 
 *  Programmer:     Corey Jenkins
 *  Date:           November 23, 2024
 *  Filename:       RomanNumeral.c
 *  Purpose:        A Switch is used to select which Roman Numeral will be displayed.
*/

#include <stdio.h>

int main()
{
    int number;
    printf("Enter a number between 1 to 10: ");
    scanf("%d", &number);

    switch(number)
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

        case 10:
            printf("X");

        default:
            printf("An error has occurred.");
            printf("Enter a number between 1 to 10: ");
            scanf("%d", &number);
    }
    
    return 0;
}