/* 
 *  Programmer:     Corey Jenkins
 *  Date:           November 25, 2024
 *  Filename:       BugCollector.c
 *  Purpose:        A program that uses a for loop to count the amount of days and bugs collected within the day
 *                  and total amount each day leading to the total amount on the 7th day.
*/

#include <stdio.h>

int main()
{
    int total = 0;
    int bugs, days;

    for(days = 1; days < 8; days++)
    {
        printf("Enter the amount of bugs collected: ");
        scanf("%d", &bugs);

        total = (total + bugs);
        printf("Day %d: ", days);
        printf("Bugs collected: %d\n", bugs);
        printf("Total amount as of day %d", days);
        printf(": %d\n", total);
    }

    printf("The total amount within a week are: %d", total);

    return 0;
}