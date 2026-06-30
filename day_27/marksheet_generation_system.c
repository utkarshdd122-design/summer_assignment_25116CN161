#include <stdio.h>

int main() {
    int n, i;
    float marks[10], total = 0, average;
    char name[50];

    printf("Enter student name: ");
    scanf("%s", name);

    printf("Enter number of subjects: ");
    scanf("%d", &n);

    printf("Enter marks for %d subjects:\n", n);
    for(i = 0; i < n; i++) {
        printf("Subject %d: ", i+1);
        scanf("%f", &marks[i]);
        total += marks[i];
    }

    average = total / n;

    printf("\n===== Marksheet =====\n");
    printf("Name: %s\n", name);
    printf("Total Marks: %.2f\n", total);
    printf("Average Marks: %.2f\n", average);

    // Grade system
    if(average >= 90) {
        printf("Grade: A+\n");
    } else if(average >= 75) {
        printf("Grade: A\n");
    } else if(average >= 60) {
        printf("Grade: B\n");
    } else if(average >= 50) {
        printf("Grade: C\n");
    } else {
        printf("Grade: Fail\n");
    }

    return 0;
}
