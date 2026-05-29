// WRITE A PROGRAM TO CHECK WHEATHER A NUMBER IS PALINDROME.//
#include <stdio.h>
int main()
{
    int a, b, c = 0, d;
    printf("enter number = ");
    scanf("%d", &a);
    d = a;
    while (a != 0)
    {
        b = a % 10;
        c = c * 10 + b;
        a = a / 10;
    }
    if (c == d)
    {
        printf("THE NUMBER IS PALINDROME");
    }
    else
    {
        printf("THE NUMBER IS NOT PALINDROME");
    }
}
