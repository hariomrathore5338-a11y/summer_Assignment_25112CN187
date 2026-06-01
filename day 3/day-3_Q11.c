// WRITE A PROGRAM TO FIND G.C.D. OF TWO NUMBER.//
#include <stdio.h>
int main()
{
    int a, b, c, d;
    printf("Enter number 1 = ");
    scanf("%d", &a);
    printf("Enter number 2 = ");
    scanf("%d", &b);
    if (a < b)
    {
        for (int i = 1; i <= a; i++)
        {
            if (a % i == 0 && b % i == 0)
            {
                c = i;
            }
        }
        printf("%d is the GCD of %d and %d", c, a, b);
    }
    if (b < a)
    {
        for (int i = 1; i <= b; i++)
        {
            if (a % i == 0 && b % i == 0)
            {
                c = i;
            }
        }
        printf("%d is the GCD of %d and %d", c, a, b);
    }
}