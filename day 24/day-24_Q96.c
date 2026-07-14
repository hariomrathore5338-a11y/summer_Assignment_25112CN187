#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int freq[256] = {0};
    printf("Enter a string: ");
    gets(str);

    printf("String after removing duplicates: ");
    for (int i = 0; str[i]; i++) {
        if (!freq[(unsigned char)str[i]]) {
            printf("%c", str[i]);
            freq[(unsigned char)str[i]] = 1;
        }
    }
    printf("\n");
    return 0;
}
