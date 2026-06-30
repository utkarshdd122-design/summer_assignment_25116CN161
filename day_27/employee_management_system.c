#include <stdio.h>
#include <string.h>

struct Employee
{
    int id;
    char name[50];
    char department[50];
    float salary;
};

int main()
{
    struct Employee emp[50];
    int n, i, choice, searchId, found;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    // Input employee details
    for (i = 0; i < n; i++)
    {
        printf("\nEnter details for Employee %d:\n", i + 1);
        printf("ID: ");
        scanf("%d", &emp[i].id);
        printf("Name: ");
        scanf("%s", emp[i].name);
        printf("Department: ");
        scanf("%s", emp[i].department);
        printf("Salary: ");
        scanf("%f", &emp[i].salary);
    }

    // Menu-driven system
    do
    {
        printf("\n===== Employee Management Menu =====\n");
        printf("1. Display All Employees\n");
        printf("2. Search Employee by ID\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("\n--- Employee Records ---\n");
            for (i = 0; i < n; i++)
            {
                printf("ID: %d | Name: %s | Dept: %s | Salary: %.2f\n",
                       emp[i].id, emp[i].name, emp[i].department, emp[i].salary);
            }
            break;

        case 2:
            printf("Enter Employee ID to search: ");
            scanf("%d", &searchId);
            found = 0;
            for (i = 0; i < n; i++)
            {
                if (emp[i].id == searchId)
                {
                    printf("Record Found!\n");
                    printf("ID: %d | Name: %s | Dept: %s | Salary: %.2f\n",
                           emp[i].id, emp[i].name, emp[i].department, emp[i].salary);
                    found = 1;
                    break;
                }
            }
            if (!found)
            {
                printf("Employee with ID %d not found.\n", searchId);
            }
            break;

        case 3:
            printf("Exiting Employee Management System. Goodbye!\n");
            break;

        default:
            printf("Invalid choice! Try again.\n");
        }
    } while (choice != 3);

    return 0;
}
