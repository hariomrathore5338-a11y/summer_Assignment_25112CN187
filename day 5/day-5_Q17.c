// WRITE A PROGRAM TO CHECH PERFECT NUMBER .//
#include <stdio.h>
int main()

{
    int a, b, sum = 0;
    printf("enter number= ");
    scanf("%d", &a);
    b = a;
    for (int i = 1; i < a; i++)
    {
        if (b % i == 0)
        {
            sum = sum + i;
        }
    }

    if (b == sum)
    {
        printf("%d is a perfect number", b);
    }
    else
    {
        printf("%d is a NOT perfect number", b);
    }
}