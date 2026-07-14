#include <stdio.h>

int main() {
    int score = 0, ans;

    printf("Welcome to Quiz!\n");

    printf("Q1: Capital of India?\n1. Delhi\n2. Mumbai\n3. Kolkata\n");
    scanf("%d", &ans);
    if (ans == 1) score++;

    printf("Q2: 2 + 2 = ?\n1. 3\n2. 4\n3. 5\n");
    scanf("%d", &ans);
    if (ans == 2) score++;

    printf("Q3: Who developed C language?\n1. Dennis Ritchie\n2. James Gosling\n3. Bjarne Stroustrup\n");
    scanf("%d", &ans);
    if (ans == 1) score++;

    printf("\nYour final score: %d/3\n", score);
    return 0;
}
