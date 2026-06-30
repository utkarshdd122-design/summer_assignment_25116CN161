#include <stdio.h>
#include <string.h>

#define MAX 50

struct Book
{
    int id;
    char title[50];
    char author[50];
    int available; // 1 = available, 0 = issued
};

// Function prototypes
void addBook(struct Book library[], int *n);
void displayBooks(struct Book library[], int n);
void searchBook(struct Book library[], int n, int id);
void issueBook(struct Book library[], int n, int id);

int main()
{
    struct Book library[MAX];
    int n = 0, choice, id;

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
            addBook(library, &n);
            break;
        case 2:
            displayBooks(library, n);
            break;
        case 3:
            printf("Enter Book ID to search: ");
            scanf("%d", &id);
            searchBook(library, n, id);
            break;
        case 4:
            printf("Enter Book ID to issue: ");
            scanf("%d", &id);
            issueBook(library, n, id);
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

// Function to add book
void addBook(struct Book library[], int *n)
{
    if (*n < MAX)
    {
        printf("Enter Book ID: ");
        scanf("%d", &library[*n].id);
        printf("Enter Title: ");
        scanf("%s", library[*n].title);
        printf("Enter Author: ");
        scanf("%s", library[*n].author);
        library[*n].available = 1;
        (*n)++;
        printf("Book added successfully!\n");
    }
    else
    {
        printf("Library is full!\n");
    }
}

// Function to display all books
void displayBooks(struct Book library[], int n)
{
    printf("\n--- Library Books ---\n");
    for (int i = 0; i < n; i++)
    {
        printf("ID: %d | Title: %s | Author: %s | Status: %s\n",
               library[i].id, library[i].title, library[i].author,
               library[i].available ? "Available" : "Issued");
    }
}

// Function to search book
void searchBook(struct Book library[], int n, int id)
{
    int found = 0;
    for (int i = 0; i < n; i++)
    {
        if (library[i].id == id)
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
        printf("Book with ID %d not found.\n", id);
    }
}

// Function to issue book
void issueBook(struct Book library[], int n, int id)
{
    int found = 0;
    for (int i = 0; i < n; i++)
    {
        if (library[i].id == id)
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
        printf("Book with ID %d not found.\n", id);
    }
}
