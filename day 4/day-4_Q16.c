#include <stdio.h>
#include <math.h>

int main()
{
    int a, g;
    printf("enter the number from= ");
    scanf("%d", &a);
    printf("to= ");
    scanf("%d", &g);

    for (int j = a; j <= g; j++)
    {
        int temp = j, n = 0, d = 0;

        while (temp != 0)
        {
            n++;
            temp = temp / 10;
        }

        temp = j;

        while (temp != 0)
        {
            int f = temp % 10;
            d = d + pow(f, n);
            temp = temp / 10;
        }

        
        if (d == j && n > 1)
        {
            printf("%d ", j);
        }
    }
    return 0;
}
