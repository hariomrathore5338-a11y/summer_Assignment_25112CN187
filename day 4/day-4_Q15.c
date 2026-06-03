// WRITE A PROGRAM TO CHECK ARMSTRONG NUMBER.//
#include <stdio.h>
#include <math.h>
int main()
{
    int a, b, c, n = 0, d = 0, e, f;
    printf("enter the number= ");
    scanf("%d", &a);
    b = a;
    e = a;
    while (a != 0)
    {
        n++;
        a = a / 10;
    }
    for (int i = 0; b != 0; i++)
    {
        f = b % 10;
        c = (int)round(pow(f, n));
        d = d + c;
        b = b / 10;
    }
    if (d == e)
    {
        printf("the nummber is ARMSTRONG NUMBER\n");
    }
    else
    {
        printf("the nummber is NOT ARMSTRONG NUMBER\n");
    }
    printf("d=%d", d);
}