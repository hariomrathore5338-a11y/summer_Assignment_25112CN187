// WRITE A PROGRAM TO CHECK A STRONG NUMBER.//
#include <stdio.h>
int main()
{
    int a, b, c, sum = 0, product;
    printf("enter number = ");
    scanf("%d", &a);
    b = a;
    while (a != 0)
    {
        product=1;
        c = a % 10;
        for (int j = 1; j <= c; j++)
        {
            product = product * j;
        }
        sum = product + sum;
        a = a / 10;
    }
    if (b == sum)
    {
        printf("%d is a strong number", sum);
    }
    else
    {
        printf("%d is NOT a strong number", sum);
    }
}
