/*
    Programmer:     Corey Jenkins 
    Date:           December 13, 2024
    Filename:       RecursionDemo.c
    Purpose:   
*/

#include <stdio.h>

int message(int times);

int main()
{
    message(5);
    return 0;
}

int message(int times)
{
    if(times > 0)
    {
        printf("This is a recurive module.\n");
        message(times - 1);
    }
}