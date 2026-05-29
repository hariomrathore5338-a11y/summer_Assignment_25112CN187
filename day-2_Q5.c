// WRITE A PROGRAM TO FIND SUM OF DIGITS OF A NUMBER. //
#include <stdio.h>
int main()
{
    int a, b, sum = 0, c;
    printf("enter number= ");
    scanf("%d", &a);
    c = a;
    while (a != 0)
    {
        b = a % 10;
        sum = sum + b;
        a = a / 10;
    }
    printf("The sum of all the digits of a number %d is = %d", c, sum);
}