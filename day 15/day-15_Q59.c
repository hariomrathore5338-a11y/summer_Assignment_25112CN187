#include <stdio.h>

int main() {
    int n, d;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

    printf("Enter number of positions to rotate right: ");
    scanf("%d", &d);

    d = d % n; // handle cases larger than n
    printf("Array after right rotation:\n");
    for (int i = n - d; i < n; i++) printf("%d ", arr[i]);
    for (int i = 0; i < n - d; i++) printf("%d ", arr[i]);

    return 0;
}
