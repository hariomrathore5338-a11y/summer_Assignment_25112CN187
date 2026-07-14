#include <stdio.h>
#include <string.h>

struct Book {
    int id;
    char title[50];
};

int main() {
    struct Book b[20];
    int n, i;

    printf("Enter number of books: ");
    scanf("%d", &n);

    for (i=0; i<n; i++) {
        printf("Enter ID, Title: ");
        scanf("%d %s", &b[i].id, b[i].title);
    }

    printf("\n--- Mini Library ---\n");
    for (i=0; i<n; i++) {
        printf("ID: %d, Title: %s\n", b[i].id, b[i].title);
    }

    return 0;
}
