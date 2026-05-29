// WRITE A PROGRAM TO REVERSE A NUMBER. //
#include <stdio.h>
int main()
{
    int a, b, c = 0, sum = 0, d;
    printf("enter the number= ");
    scanf("%d", &a);
    d = a;
    while (a != 0)
    {
        b = a % 10;
        c = c * 10 + b;
        a = a / 10;
    }
    printf("reverse of a number %d is = %d", d, c);
}
