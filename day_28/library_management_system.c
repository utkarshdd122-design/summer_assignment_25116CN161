#include <stdio.h>
#include <string.h>

struct Book
{
    int id;
    char title[50];
    char author[50];
    int available; // 1 = available, 0 = issued
};

int main()
{
    struct Book library[50];
    int n = 0, choice, i, searchId, found;

    do
    {
        printf("\n===== Library Management Menu =====\n");
        printf("1. Add Book\n");
        printf("2. Display All Books\n");
        printf("3. Search Book by ID\n");
        printf("4. Issue Book\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter Book ID: ");
            scanf("%d", &library[n].id);
            printf("Enter Title: ");
            scanf("%s", library[n].title);
            printf("Enter Author: ");
            scanf("%s", library[n].author);
            library[n].available = 1;
            n++;
            printf("Book added successfully!\n");
            break;

        case 2:
            printf("\n--- Library Books ---\n");
            for (i = 0; i < n; i++)
            {
                printf("ID: %d | Title: %s | Author: %s | Status: %s\n",
                       library[i].id, library[i].title, library[i].author,
                       library[i].available ? "Available" : "Issued");
            }
            break;

        case 3:
            printf("Enter Book ID to search: ");
            scanf("%d", &searchId);
            found = 0;
            for (i = 0; i < n; i++)
            {
                if (library[i].id == searchId)
                {
                    printf("Book Found!\n");
                    printf("ID: %d | Title: %s | Author: %s | Status: %s\n",
                           library[i].id, library[i].title, library[i].author,
                           library[i].available ? "Available" : "Issued");
                    found = 1;
                    break;
                }
            }
            if (!found)
            {
                printf("Book with ID %d not found.\n", searchId);
            }
            break;

        case 4:
            printf("Enter Book ID to issue: ");
            scanf("%d", &searchId);
            found = 0;
            for (i = 0; i < n; i++)
            {
                if (library[i].id == searchId)
                {
                    if (library[i].available)
                    {
                        library[i].available = 0;
                        printf("Book issued successfully!\n");
                    }
                    else
                    {
                        printf("Book is already issued.\n");
                    }
                    found = 1;
                    break;
                }
            }
            if (!found)
            {
                printf("Book with ID %d not found.\n", searchId);
            }
            break;

        case 5:
            printf("Exiting Library Management System. Goodbye!\n");
            break;

        default:
            printf("Invalid choice! Try again.\n");
        }
    } while (choice != 5);

    return 0;
}
