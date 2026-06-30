#include <stdio.h>
#include <string.h>

struct Account
{
    int accNo;
    char name[50];
    float balance;
};

int main()
{
    struct Account accounts[50];
    int n = 0, choice, i, accSearch, found;
    float amount;

    do
    {
        printf("\n===== Bank Account Menu =====\n");
        printf("1. Create Account\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Check Balance\n");
        printf("5. Display All Accounts\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter Account Number: ");
            scanf("%d", &accounts[n].accNo);
            printf("Enter Name: ");
            scanf("%s", accounts[n].name);
            accounts[n].balance = 0;
            n++;
            printf("Account created successfully!\n");
            break;

        case 2:
            printf("Enter Account Number: ");
            scanf("%d", &accSearch);
            found = 0;
            for (i = 0; i < n; i++)
            {
                if (accounts[i].accNo == accSearch)
                {
                    printf("Enter amount to deposit: ");
                    scanf("%f", &amount);
                    accounts[i].balance += amount;
                    printf("Deposited successfully! New Balance: %.2f\n", accounts[i].balance);
                    found = 1;
                    break;
                }
            }
            if (!found)
                printf("Account not found!\n");
            break;

        case 3:
            printf("Enter Account Number: ");
            scanf("%d", &accSearch);
            found = 0;
            for (i = 0; i < n; i++)
            {
                if (accounts[i].accNo == accSearch)
                {
                    printf("Enter amount to withdraw: ");
                    scanf("%f", &amount);
                    if (amount <= accounts[i].balance)
                    {
                        accounts[i].balance -= amount;
                        printf("Withdrawal successful! New Balance: %.2f\n", accounts[i].balance);
                    }
                    else
                    {
                        printf("Insufficient balance!\n");
                    }
                    found = 1;
                    break;
                }
            }
            if (!found)
                printf("Account not found!\n");
            break;

        case 4:
            printf("Enter Account Number: ");
            scanf("%d", &accSearch);
            found = 0;
            for (i = 0; i < n; i++)
            {
                if (accounts[i].accNo == accSearch)
                {
                    printf("Account No: %d | Name: %s | Balance: %.2f\n",
                           accounts[i].accNo, accounts[i].name, accounts[i].balance);
                    found = 1;
                    break;
                }
            }
            if (!found)
                printf("Account not found!\n");
            break;

        case 5:
            printf("\n--- All Accounts ---\n");
            for (i = 0; i < n; i++)
            {
                printf("Account No: %d | Name: %s | Balance: %.2f\n",
                       accounts[i].accNo, accounts[i].name, accounts[i].balance);
            }
            break;

        case 6:
            printf("Exiting Bank Account System. Goodbye!\n");
            break;

        default:
            printf("Invalid choice! Try again.\n");
        }
    } while (choice != 6);

    return 0;
}
