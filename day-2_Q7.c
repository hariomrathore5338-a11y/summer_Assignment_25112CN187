// WRITE A PROGRAM TO FIND PRODUCT OF DIGITS. //
#include <stdio.h>
int main()
{
    int a, b, c = 1, d;
    printf("enter th number = ");
    scanf("%d", &a);
    d = a;
    while (a != 0)
    {
        b = a % 10;
        c = b * c;
        a = a / 10;
    }
    printf("the product of all the digits of %d is = %d", d, c);
}