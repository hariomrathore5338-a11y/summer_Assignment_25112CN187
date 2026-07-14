#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int choice;

    printf("Enter a string: ");
    scanf("%s", str);

    while (1) {
        printf("\n--- String Menu ---\n");
        printf("1. Length\n2. Reverse\n3. Uppercase\n4. Exit\n");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Length = %lu\n", strlen(str));
                break;
            case 2: {
                int i;
                printf("Reversed: ");
                for (i=strlen(str)-1; i>=0; i--) printf("%c", str[i]);
                printf("\n");
                break;
            }
            case 3: {
                int i;
                printf("Uppercase: ");
                for (i=0; i<strlen(str); i++) 
                    printf("%c", str[i] >= 'a' && str[i] <= 'z' ? str[i]-32 : str[i]);
                printf("\n");
                break;
            }
            case 4: return 0;
            default: printf("Invalid choice!\n");
        }
    }
}
