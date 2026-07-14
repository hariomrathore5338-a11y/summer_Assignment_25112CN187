#include <stdio.h>
#include <string.h>

struct Employee {
    int id;
    char name[50];
};

int main() {
    struct Employee e[20];
    int n, i;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    for (i=0; i<n; i++) {
        printf("Enter ID, Name: ");
        scanf("%d %s", &e[i].id, e[i].name);
    }

    printf("\n--- Mini Employee Records ---\n");
    for (i=0; i<n; i++) {
        printf("ID: %d, Name: %s\n", e[i].id, e[i].name);
    }

    return 0;
}
