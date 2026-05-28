// WRITE A PROGRAM TO CALCULATE SUUM OF FIRST N NATURAL NUMBERS. //
#include <stdio.h>
int main()
{
    int a, sum = 0;
    printf("enter no. of terms= ");
    scanf("%d", &a);
    for (int i = 1; i <= a; i++)
    {
        sum = sum + i;
    }
    printf("the sum of %d term is = %d", a, sum);

    return 0;
}