#include <stdio.h>

int main() {
    int balance = 10000, choice, amount;

    while (1) {
        printf("\n--- ATM Menu ---\n");
        printf("1. Check Balance\n2. Deposit\n3. Withdraw\n4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Current Balance: %d\n", balance);
                break;
            case 2:
                printf("Enter deposit amount: ");
                scanf("%d", &amount);
                balance += amount;
                printf("Deposited successfully! New Balance: %d\n", balance);
                break;
            case 3:
                printf("Enter withdraw amount: ");
                scanf("%d", &amount);
                if (amount <= balance) {
                    balance -= amount;
                    printf("Withdrawn successfully! New Balance: %d\n", balance);
                } else {
                    printf("Insufficient balance!\n");
                }
                break;
            case 4:
                printf("Thank you for using ATM.\n");
                return 0;
            default:
                printf("Invalid choice!\n");
        }
    }
}
