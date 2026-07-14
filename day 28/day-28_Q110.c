#include <stdio.h>

struct Account {
    int accNo;
    char name[50];
    float balance;
};

int main() {
    struct Account a;
    int choice;
    float amount;

    printf("Enter Account No, Name, Initial Balance: ");
    scanf("%d %s %f", &a.accNo, a.name, &a.balance);

    while (1) {
        printf("\n--- Bank Menu ---\n");
        printf("1. Check Balance\n2. Deposit\n3. Withdraw\n4. Exit\n");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Balance: %.2f\n", a.balance);
                break;
            case 2:
                printf("Enter deposit amount: ");
                scanf("%f", &amount);
                a.balance += amount;
                printf("Deposited! New Balance: %.2f\n", a.balance);
                break;
            case 3:
                printf("Enter withdraw amount: ");
                scanf("%f", &amount);
                if (amount <= a.balance) {
                    a.balance -= amount;
                    printf("Withdrawn! New Balance: %.2f\n", a.balance);
                } else {
                    printf("Insufficient balance!\n");
                }
                break;
            case 4:
                return 0;
            default:
                printf("Invalid choice!\n");
        }
    }
}
