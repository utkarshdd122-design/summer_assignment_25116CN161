#include <stdio.h>

int main() {
    int choice;
    float balance = 1000.0, deposit, withdraw;

    while(1) {
        printf("\n===== ATM Menu =====\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Your balance is: %.2f\n", balance);
                break;

            case 2:
                printf("Enter amount to deposit: ");
                scanf("%f", &deposit);
                if(deposit > 0) {
                    balance += deposit;
                    printf("Deposited successfully! New balance: %.2f\n", balance);
                } else {
                    printf("Invalid deposit amount!\n");
                }
                break;

            case 3:
                printf("Enter amount to withdraw: ");
                scanf("%f", &withdraw);
                if(withdraw > 0 && withdraw <= balance) {
                    balance -= withdraw;
                    printf("Withdrawal successful! New balance: %.2f\n", balance);
                } else {
                    printf("Invalid withdrawal amount or insufficient balance!\n");
                }
                break;

            case 4:
                printf("Thank you for using the ATM. Goodbye!\n");
                return 0;

            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
}
