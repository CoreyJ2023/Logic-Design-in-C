#include <stdio.h>

int myNumber(int num);
int myNumber2(int num);

const int BIG_NUMBER = 10;

int main()
{
    int number = 3;
    int result, result2;
    result = myNumber(number);
    result2 = myNumber2(number);
    printf("%d\n", result);
    printf("%d\n", result2);

    return 0;
}

int myNumber(int num)
{
    int result, anotherNumber;
    anotherNumber = BIG_NUMBER * num;
    result = anotherNumber * num;
    return result;
}

int myNumber2(int num)
{
    int result, anotherNumber;
    anotherNumber = BIG_NUMBER - num;
    result = anotherNumber * num;
    return result;
}