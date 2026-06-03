// WRITE A PROGRAM TO FIND nTH FIBONACCI TERMS.//
#include <stdio.h>
int main()
{
    int a, first=0, next=0, second=1;
    printf("fabonicci series till no. =");
    scanf("%d", &a);
    printf("FABONACCI series is : ");
    for (int i = 0; i < a; i++)
    {
        next = first + second;
        first = second;
        second = next;

        printf("%d,", next);
    }
}
