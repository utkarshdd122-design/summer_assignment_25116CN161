
#include <stdio.h>
#include <string.h>

#define MAX 50

struct Employee
{
    int id;
    char name[50];
    char department[50];
    float salary;
};

// Function prototypes
void addEmployee(struct Employee emp[], int *n);
void displayEmployees(struct Employee emp[], int n);
void searchEmployee(struct Employee emp[], int n, int id);
void updateSalary(struct Employee emp[], int n, int id);

int main()
{
    struct Employee emp[MAX];
    int n = 0, choice, id;

    do
    {
        printf("\n===== Employee Management Menu =====\n");
        printf("1. Add Employee\n");
        printf("2. Display All Employees\n");
        printf("3. Search Employee by ID\n");
        printf("4. Update Salary\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            addEmployee(emp, &n);
            break;
        case 2:
            displayEmployees(emp, n);
            break;
        case 3:
            printf("Enter Employee ID to search: ");
            scanf("%d", &id);
            searchEmployee(emp, n, id);
            break;
        case 4:
            printf("Enter Employee ID to update salary: ");
            scanf("%d", &id);
            updateSalary(emp, n, id);
            break;
        case 5:
            printf("Exiting Employee Management System. Goodbye!\n");
            break;
        default:
            printf("Invalid choice! Try again.\n");
        }
    } while (choice != 5);

    return 0;
}

// Function to add employee
void addEmployee(struct Employee emp[], int *n)
{
    if (*n < MAX)
    {
        printf("Enter Employee ID: ");
        scanf("%d", &emp[*n].id);
        printf("Enter Name: ");
        scanf("%s", emp[*n].name);
        printf("Enter Department: ");
        scanf("%s", emp[*n].department);
        printf("Enter Salary: ");
        scanf("%f", &emp[*n].salary);
        (*n)++;
        printf("Employee added successfully!\n");
    }
    else
    {
        printf("Maximum limit reached!\n");
    }
}

// Function to display all employees
void displayEmployees(struct Employee emp[], int n)
{
    printf("\n--- Employee Records ---\n");
    for (int i = 0; i < n; i++)
    {
        printf("ID: %d | Name: %s | Dept: %s | Salary: %.2f\n",
               emp[i].id, emp[i].name, emp[i].department, emp[i].salary);
    }
}

// Function to search employee
void searchEmployee(struct Employee emp[], int n, int id)
{
    int found = 0;
    for (int i = 0; i < n; i++)
    {
        if (emp[i].id == id)
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
        printf("Employee with ID %d not found.\n", id);
    }
}

// Function to update salary
void updateSalary(struct Employee emp[], int n, int id)
{
    int found = 0;
    for (int i = 0; i < n; i++)
    {
        if (emp[i].id == id)
        {
            printf("Enter new salary: ");
            scanf("%f", &emp[i].salary);
            printf("Salary updated successfully!\n");
            found = 1;
            break;
        }
    }
    if (!found)
    {
        printf("Employee with ID %d not found.\n", id);
    }
}
