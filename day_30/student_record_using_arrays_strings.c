#include <stdio.h>
#include <string.h>

#define MAX 50

struct Student
{
    int rollNo;
    char name[50];
    char course[50];
    float marks;
};

// Function prototypes
void addStudent(struct Student students[], int *n);
void displayStudents(struct Student students[], int n);
void searchStudent(struct Student students[], int n, int rollNo);
void updateMarks(struct Student students[], int n, int rollNo);

int main()
{
    struct Student students[MAX];
    int n = 0, choice, rollNo;

    do
    {
        printf("\n===== Student Record Menu =====\n");
        printf("1. Add Student\n");
        printf("2. Display All Students\n");
        printf("3. Search Student by Roll No\n");
        printf("4. Update Marks\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            addStudent(students, &n);
            break;
        case 2:
            displayStudents(students, n);
            break;
        case 3:
            printf("Enter Roll No to search: ");
            scanf("%d", &rollNo);
            searchStudent(students, n, rollNo);
            break;
        case 4:
            printf("Enter Roll No to update marks: ");
            scanf("%d", &rollNo);
            updateMarks(students, n, rollNo);
            break;
        case 5:
            printf("Exiting system. Goodbye!\n");
            break;
        default:
            printf("Invalid choice! Try again.\n");
        }
    } while (choice != 5);

    return 0;
}

// Function to add student
void addStudent(struct Student students[], int *n)
{
    if (*n < MAX)
    {
        printf("Enter Roll No: ");
        scanf("%d", &students[*n].rollNo);
        printf("Enter Name: ");
        scanf("%s", students[*n].name);
        printf("Enter Course: ");
        scanf("%s", students[*n].course);
        printf("Enter Marks: ");
        scanf("%f", &students[*n].marks);
        (*n)++;
        printf("Student added successfully!\n");
    }
    else
    {
        printf("Maximum limit reached!\n");
    }
}

// Function to display all students
void displayStudents(struct Student students[], int n)
{
    printf("\n--- Student Records ---\n");
    for (int i = 0; i < n; i++)
    {
        printf("Roll No: %d | Name: %s | Course: %s | Marks: %.2f\n",
               students[i].rollNo, students[i].name, students[i].course, students[i].marks);
    }
}

// Function to search student
void searchStudent(struct Student students[], int n, int rollNo)
{
    int found = 0;
    for (int i = 0; i < n; i++)
    {
        if (students[i].rollNo == rollNo)
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
        printf("Student with Roll No %d not found.\n", rollNo);
    }
}

// Function to update marks
void updateMarks(struct Student students[], int n, int rollNo)
{
    int found = 0;
    for (int i = 0; i < n; i++)
    {
        if (students[i].rollNo == rollNo)
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
        printf("Student with Roll No %d not found.\n", rollNo);
    }
}
