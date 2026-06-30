#include <stdio.h>
#include <string.h>

struct Ticket
{
    int id;
    char name[50];
    char event[50];
    int seats;
};

int main()
{
    struct Ticket tickets[50];
    int n = 0, choice, i, searchId, found;

    do
    {
        printf("\n===== Ticket Booking Menu =====\n");
        printf("1. Book Ticket\n");
        printf("2. Display All Tickets\n");
        printf("3. Search Ticket by ID\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter Ticket ID: ");
            scanf("%d", &tickets[n].id);
            printf("Enter Name: ");
            scanf("%s", tickets[n].name);
            printf("Enter Event: ");
            scanf("%s", tickets[n].event);
            printf("Enter Number of Seats: ");
            scanf("%d", &tickets[n].seats);
            n++;
            printf("Ticket booked successfully!\n");
            break;

        case 2:
            printf("\n--- Ticket Records ---\n");
            for (i = 0; i < n; i++)
            {
                printf("ID: %d | Name: %s | Event: %s | Seats: %d\n",
                       tickets[i].id, tickets[i].name, tickets[i].event, tickets[i].seats);
            }
            break;

        case 3:
            printf("Enter Ticket ID to search: ");
            scanf("%d", &searchId);
            found = 0;
            for (i = 0; i < n; i++)
            {
                if (tickets[i].id == searchId)
                {
                    printf("Ticket Found!\n");
                    printf("ID: %d | Name: %s | Event: %s | Seats: %d\n",
                           tickets[i].id, tickets[i].name, tickets[i].event, tickets[i].seats);
                    found = 1;
                    break;
                }
            }
            if (!found)
            {
                printf("Ticket with ID %d not found.\n", searchId);
            }
            break;

        case 4:
            printf("Exiting Ticket Booking System. Goodbye!\n");
            break;

        default:
            printf("Invalid choice! Try again.\n");
        }
    } while (choice != 4);

    return 0;
}
