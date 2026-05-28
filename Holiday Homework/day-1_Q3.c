// write a program to find factorial of a number//
#include <stdio.h>
int main()
{
    int a, product = 1;
    printf("enter the number= ");
    scanf("%d", &a);
    for (int i = 1; i <= a; i++)
    {
        product = product * i;
    }
    printf("factorial of %d = %d", a, product);
}