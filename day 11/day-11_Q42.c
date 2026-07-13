#include <stdio.h>

int maximum(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    int x = 10, y = 20;
    printf("Maximum = %d\n", maximum(x, y));
    return 0;
}
