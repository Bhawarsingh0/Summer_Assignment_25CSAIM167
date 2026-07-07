#include <stdio.h>

int main() {
    int accountNo;
    char name[50];
    float balance = 0, amount;
    int choice;

    printf("===== Bank Account System =====\n");

    printf("Enter Account Number: ");
    scanf("%d", &accountNo);

    printf("Enter Account Holder Name: ");
    scanf(" %[^\n]", name);

    do {
        printf("\n===== MENU =====\n");
        printf("1. Deposit Money\n");
        printf("2. Withdraw Money\n");
        printf("3. Check Balance\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter amount to deposit: ");
                scanf("%f", &amount);

                balance += amount;
                printf("Amount deposited successfully.\n");
                break;

            case 2:
                printf("Enter amount to withdraw: ");
                scanf("%f", &amount);

                if (amount <= balance) {
                    balance -= amount;
                    printf("Amount withdrawn successfully.\n");
                } else {
                    printf("Insufficient balance!\n");
                }
                break;

            case 3:
                printf("\n----- Account Details -----\n");
                printf("Account Number : %d\n", accountNo);
                printf("Account Holder : %s\n", name);
                printf("Current Balance: %.2f\n", balance);
                break;

            case 4:
                printf("Thank you for using the Bank Account System.\n");
                break;

            default:
                printf("Invalid choice! Please try again.\n");
        }

    } while (choice != 4);

    return 0;
}