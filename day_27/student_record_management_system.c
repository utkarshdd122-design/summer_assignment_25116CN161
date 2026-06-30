#include <stdio.h>
#include <string.h>

struct Student
{
    int rollNo;
    char name[50];
    char course[50];
    float marks;
};

int main()
{
    struct Student students[50];
    int n, i, choice, searchRoll, found;

    printf("Enter number of students: ");
    scanf("%d", &n);

    // Input student details
    for (i = 0; i < n; i++)
    {
        printf("\nEnter details for Student %d:\n", i + 1);
        printf("Roll No: ");
        scanf("%d", &students[i].rollNo);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Course: ");
        scanf("%s", students[i].course);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }

    // Menu-driven system
    do
    {
        printf("\n===== Student Record Management Menu =====\n");
        printf("1. Display All Students\n");
        printf("2. Search Student by Roll No\n");
        printf("3. Update Student Marks\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("\n--- Student Records ---\n");
            for (i = 0; i < n; i++)
            {
                printf("Roll No: %d | Name: %s | Course: %s | Marks: %.2f\n",
                       students[i].rollNo, students[i].name, students[i].course, students[i].marks);
            }
            break;

        case 2:
            printf("Enter Roll No to search: ");
            scanf("%d", &searchRoll);
            found = 0;
            for (i = 0; i < n; i++)
            {
                if (students[i].rollNo == searchRoll)
                {
                    printf("Record Found!\n");
                    printf("Roll No: %d | Name: %s | Course: %s | Marks: %.2f\n",
                           students[i].rollNo, students[i].name, students[i].course, students[i].marks);
                    found = 1;
                    break;
                }
            }
            if (!found)
            {
                printf("Student with Roll No %d not found.\n", searchRoll);
            }
            break;

        case 3:
            printf("Enter Roll No to update marks: ");
            scanf("%d", &searchRoll);
            found = 0;
            for (i = 0; i < n; i++)
            {
                if (students[i].rollNo == searchRoll)
                {
                    printf("Enter new marks: ");
                    scanf("%f", &students[i].marks);
                    printf("Marks updated successfully!\n");
                    found = 1;
                    break;
                }
            }
            if (!found)
            {
                printf("Student with Roll No %d not found.\n", searchRoll);
            }
            break;

        case 4:
            printf("Exiting Student Record Management System. Goodbye!\n");
            break;

        default:
            printf("Invalid choice! Try again.\n");
        }
    } while (choice != 4);

    return 0;
}
