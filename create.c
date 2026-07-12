#include<stdio.h>
#include"bank.h"

int main()
{
    int choice;

    loadAccounts();

    while(1)
    {
        printf("\n===== BANK MANAGEMENT SYSTEM =====\n");
        printf("1. Create Account\n");
        printf("2. Display Accounts\n");
        printf("3. Deposit\n");
        printf("4. Withdraw\n");
        printf("5. Search Account\n");
        printf("6. Save & Exit\n");

        printf("Enter Choice : ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                createAccount();
                break;

            case 2:
                displayAccounts();
                break;

            case 3:
                deposit();
                break;

            case 4:
                withdraw();
                break;

            case 5:
                searchAccount();
                break;

            case 6:
                saveAccounts();
                printf("Thank You!\n");
                return 0;

            default:
                printf("Invalid Choice\n");
        }
    }
}
