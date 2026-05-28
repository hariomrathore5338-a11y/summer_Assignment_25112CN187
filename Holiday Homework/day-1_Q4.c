// write a program to count digits in a number.//
#include <stdio.h>
int main()
{
    int a, b = 0, c = 0;
    printf(" enter the number= ");
    scanf("%d", &a);
    if (a == 0)
    {
        c = 1;
    }
    else
    {
        while (a != 0)
        {
            a = a / 10;
            c++;
        }
    }

    printf("no. of digits in the number is =%d ", c);
}