#include <stdio.h>

int main() {
    int n, d;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

    printf("Enter number of positions to rotate left: ");
    scanf("%d", &d);

    d = d % n; // handle cases larger than n
    printf("Array after left rotation:\n");
    for (int i = d; i < n; i++) printf("%d ", arr[i]);
    for (int i = 0; i < d; i++) printf("%d ", arr[i]);

    return 0;
}
