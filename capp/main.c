#include <stdio.h>
#include "isOdd.h"
#include "isEven.h"

int main()
{
    int num;

    printf("Please enter an integer: ");
    scanf("%d", &num);
    isOdd(num);
    isEven(num);
    return 0;
}