// WRITE A PROGRAM TO PRINT A FABONACCI SERIES.//
#include <stdio.h>
int main()
{
    long long int a, first=0, next=0, second=1;    
    printf("FABONACCI series is : ");
    for (int i = 0;i<50; i++)
    {
        next = first + second;
        first = second;
        second = next;

        printf("%lld,", next);
    }
}
