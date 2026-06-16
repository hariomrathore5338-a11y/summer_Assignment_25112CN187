// WRITE A PROGRAM TO CONVERT DECIMAL TO BINARY.//
#include <stdio.h>

int main()
{
    int a, binary[32], i = 0;

    printf("Enter a decimal number: ");
    scanf("%d", &a);

    if (a == 0)
    {
        printf("Binary: 0\n");
        return 0;
    }

    while (a > 0)
    {
        binary[i] = a % 2;
        a = a / 2;
        i++;
    }

    printf("Binary: ");
    for (int j = i - 1; j >= 0; j--)
    {
        printf("%d", binary[j]);
    }
    printf("\n");

    return 0;
}
