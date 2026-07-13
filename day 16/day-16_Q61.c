#include <stdio.h>

int main() {
    int n, sum = 0;
    printf("Enter n (last number in sequence): ");
    scanf("%d", &n);

    int arr[n-1];
    printf("Enter %d elements (from 1 to %d with one missing):\n", n-1, n);
    for (int i = 0; i < n-1; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    int total = n * (n + 1) / 2;
    int missing = total - sum;
    printf("Missing number = %d\n", missing);
    return 0;
}
