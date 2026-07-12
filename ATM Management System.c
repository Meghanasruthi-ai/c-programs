#include <stdio.h>

int main() {
    int pin = 1234, enteredPin;
    int choice;
    float balance = 5000.0, amount;

    printf("========== ATM MANAGEMENT SYSTEM ==========\n");
    printf("Enter your 4-digit PIN: ");
    scanf("%d", &enteredPin);

    if (enteredPin != pin) {
        printf("Invalid PIN!\n");
        return 0;
    }

    do {
        printf("\n===== ATM MENU =====\n");
        printf("1. Balance Inquiry\n");
        printf("2. Deposit\n");
        printf("3. Withdraw\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Available Balance = Rs. %.2f\n", balance);
                break;

            case 2:
                printf("Enter amount to deposit: ");
                scanf("%f", &amount);

                if (amount > 0) {
                    balance += amount;
                    printf("Deposit Successful!\n");
                    printf("Updated Balance = Rs. %.2f\n", balance);
                } else {
                    printf("Invalid Amount!\n");
                }
                break;

            case 3:
                printf("Enter amount to withdraw: ");
                scanf("%f", &amount);

                if (amount <= balance && amount > 0) {
                    balance -= amount;
                    printf("Withdrawal Successful!\n");
                    printf("Remaining Balance = Rs. %.2f\n", balance);
                } else {
                    printf("Insufficient Balance or Invalid Amount!\n");
                }
                break;

            case 4:
                printf("Thank you for using our ATM!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while (choice != 4);

    return 0;
}
