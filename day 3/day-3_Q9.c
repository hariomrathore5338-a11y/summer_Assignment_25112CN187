// WRITE A PROGRAM TO CHECK WHEATHER A NUMBER IS PRIME.//
#include <stdio.h>
int main()
{
    int a, c = 0, i = 1;
    printf("enter number = ");
    scanf("%d", &a);
    while (i <= a)
    {
        if (a % i == 0)
        {
            c++;
        }
        i++;
    }
    if (c == 2)
    {
        printf("%d is a prime number", a);
    }
    else
    {
        printf("%d is not a prime number", a);
    }
}