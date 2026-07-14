#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    int marks[5];
    int total;
    float percentage;
};

int main() {
    struct Student s;
    int i;

    printf("Enter Roll and Name: ");
    scanf("%d %s", &s.roll, s.name);

    s.total = 0;
    printf("Enter marks of 5 subjects: ");
    for (i = 0; i < 5; i++) {
        scanf("%d", &s.marks[i]);
        s.total += s.marks[i];
    }

    s.percentage = s.total / 5.0;

    printf("\n--- Marksheet ---\n");
    printf("Roll: %d\nName: %s\nTotal: %d\nPercentage: %.2f%%\n", 
           s.roll, s.name, s.total, s.percentage);

    if (s.percentage >= 60)
        printf("Result: First Division\n");
    else if (s.percentage >= 45)
        printf("Result: Second Division\n");
    else if (s.percentage >= 33)
        printf("Result: Third Division\n");
    else
        printf("Result: Fail\n");

    return 0;
}
#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    int marks[5];
    int total;
    float percentage;
};

int main() {
    struct Student s;
    int i;

    printf("Enter Roll and Name: ");
    scanf("%d %s", &s.roll, s.name);

    s.total = 0;
    printf("Enter marks of 5 subjects: ");
    for (i = 0; i < 5; i++) {
        scanf("%d", &s.marks[i]);
        s.total += s.marks[i];
    }

    s.percentage = s.total / 5.0;

    printf("\n--- Marksheet ---\n");
    printf("Roll: %d\nName: %s\nTotal: %d\nPercentage: %.2f%%\n", 
           s.roll, s.name, s.total, s.percentage);

    if (s.percentage >= 60)
        printf("Result: First Division\n");
    else if (s.percentage >= 45)
        printf("Result: Second Division\n");
    else if (s.percentage >= 33)
        printf("Result: Third Division\n");
    else
        printf("Result: Fail\n");

    return 0;
}
