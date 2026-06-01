// WRITE A PROGRAM TO FIND THE L.C.M. OF TWO NUMBERS.//
#include <stdio.h>
int main()
{
    int a, b, c;
    printf("enter number 1 = ");
    scanf("%d", &a);
    printf("enter number 2 = ");
    scanf("%d", &b);

    {
        for (int i = 2; i <= a * b; i++)
        {
            if (i % a == 0 && i % b == 0)
            {
                printf("%d is the L.C.M. of %d and %d", i, a, b);
                break;
            }
        }
    }
}