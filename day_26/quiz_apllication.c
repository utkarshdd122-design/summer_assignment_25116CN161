#include <stdio.h>

int main() {
    int choice, score = 0;

    printf("===== Quiz Application =====\n");

    // Question 1
    printf("\nQ1. Which language is used for system programming?\n");
    printf("1. Python\n2. C\n3. Java\n4. HTML\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    if(choice == 2) {
        printf("Correct!\n");
        score++;
    } else {
        printf("Wrong! Correct answer is C.\n");
    }

    // Question 2
    printf("\nQ2. What is the capital of India?\n");
    printf("1. Mumbai\n2. Delhi\n3. Kolkata\n4. Chennai\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    if(choice == 2) {
        printf("Correct!\n");
        score++;
    } else {
        printf("Wrong! Correct answer is Delhi.\n");
    }

    // Question 3
    printf("\nQ3. Which data structure uses FIFO principle?\n");
    printf("1. Stack\n2. Queue\n3. Linked List\n4. Tree\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    if(choice == 2) {
        printf("Correct!\n");
        score++;
    } else {
        printf("Wrong! Correct answer is Queue.\n");
    }

    // Final Score
    printf("\n===== Quiz Finished =====\n");
    printf("Your total score: %d/3\n", score);

    return 0;
}
