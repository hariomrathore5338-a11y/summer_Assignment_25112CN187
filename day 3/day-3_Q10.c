//WRITE A PROGRAM TO print prime numbers in a range .//
#include<stdio.h>
int main()
{
    int a,b,c=0;
    printf("enter the range from ");
    scanf("%d",&a);
    printf("to");
    scanf("%d",&b);
    for(int i=a;i<b;i++)
    {
        if(a%i==0)
        {
            c++;
            if(c==0)
            {
                printf("%d is a prime number\n",i);

            }
        }
    }
return 0;
}