// write a program to print multiplication table of a given //
#include <stdio.h>
int main()
{
    int a, b, product = 1;
    printf("write a table of = ");
    scanf("%d", &a);
    for (int i = 1; i <= 10; i++)
    {
        product = a * i;
        printf("%d*%d=%d\n", a, i, product);
    }
}