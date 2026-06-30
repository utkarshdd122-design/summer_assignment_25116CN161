#include <stdio.h>
#include <string.h>

struct Contact
{
    char name[50];
    char phone[15];
    char email[50];
};

int main()
{
    struct Contact contacts[50];
    int n, i, choice;
    char searchPhone[15];
    int found;

    printf("Enter number of contacts: ");
    scanf("%d", &n);

    // Input contact details
    for (i = 0; i < n; i++)
    {
        printf("\nEnter details for Contact %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", contacts[i].name);
        printf("Phone: ");
        scanf("%s", contacts[i].phone);
        printf("Email: ");
        scanf("%s", contacts[i].email);
    }

    // Menu-driven system
    do
    {
        printf("\n===== Contact Management Menu =====\n");
        printf("1. Display All Contacts\n");
        printf("2. Search Contact by Phone\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("\n--- Contact List ---\n");
            for (i = 0; i < n; i++)
            {
                printf("Name: %s | Phone: %s | Email: %s\n",
                       contacts[i].name, contacts[i].phone, contacts[i].email);
            }
            break;

        case 2:
            printf("Enter phone number to search: ");
            scanf("%s", searchPhone);
            found = 0;
            for (i = 0; i < n; i++)
            {
                if (strcmp(contacts[i].phone, searchPhone) == 0)
                {
                    printf("Contact Found!\n");
                    printf("Name: %s | Phone: %s | Email: %s\n",
                           contacts[i].name, contacts[i].phone, contacts[i].email);
                    found = 1;
                    break;
                }
            }
            if (!found)
            {
                printf("Contact with phone %s not found.\n", searchPhone);
            }
            break;

        case 3:
            printf("Exiting Contact Management System. Goodbye!\n");
            break;

        default:
            printf("Invalid choice! Try again.\n");
        }
    } while (choice != 3);

    return 0;
}
