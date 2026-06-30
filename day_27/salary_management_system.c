#include<stdio.h>
struct Employee
{
    int id;
    char name[50];
    float basic, hra, da, deductions, netSalary;
};

int main()
{
    int n, i;
    printf("Enter number of employees: ");
    scanf("%d", &n);

    struct Employee emp[n];

    for (i = 0; i < n; i++)
    {
        printf("\nEnter details for Employee %d:\n", i + 1);
        printf("ID: ");
        scanf("%d", &emp[i].id);
        printf("Name: ");
        scanf("%s", emp[i].name);
        printf("Basic Salary: ");
        scanf("%f", &emp[i].basic);
        printf("HRA: ");
        scanf("%f", &emp[i].hra);
        printf("DA: ");
        scanf("%f", &emp[i].da);
        printf("Deductions: ");
        scanf("%f", &emp[i].deductions);

        emp[i].netSalary = emp[i].basic + emp[i].hra + emp[i].da - emp[i].deductions;
    }

    printf("\n===== Salary Slips =====\n");
    for (i = 0; i < n; i++)
    {
        printf("\nEmployee ID: %d\n", emp[i].id);
        printf("Name: %s\n", emp[i].name);
        printf("Basic: %.2f\n", emp[i].basic);
        printf("HRA: %.2f\n", emp[i].hra);
        printf("DA: %.2f\n", emp[i].da);
        printf("Deductions: %.2f\n", emp[i].deductions);
        printf("Net Salary: %.2f\n", emp[i].netSalary);
    }

    return 0;
}
