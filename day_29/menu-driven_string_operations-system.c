#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], result[200];
    int choice;

    printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter second string: ");
    scanf("%s", str2);

    do {
        printf("\n===== String Operation Menu =====\n");
        printf("1. Length of Strings\n");
        printf("2. Copy String\n");
        printf("3. Compare Strings\n");
        printf("4. Concatenate Strings\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Length of str1: %lu\n", strlen(str1));
                printf("Length of str2: %lu\n", strlen(str2));
                break;

            case 2:
                strcpy(result, str1);
                printf("Copied str1 into result: %s\n", result);
                strcpy(result, str2);
                printf("Copied str2 into result: %s\n", result);
                break;

            case 3:
                if(strcmp(str1, str2) == 0) {
                    printf("Strings are equal.\n");
                } else {
                    printf("Strings are not equal.\n");
                }
                break;

            case 4:
                strcpy(result, str1);
                strcat(result, str2);
                printf("Concatenated string: %s\n", result);
                break;

            case 5:
                printf("Exiting String Operation System. Goodbye!\n");
                break;

            default:
                printf("Invalid choice! Try again.\n");
        }
    } while(choice != 5);

    return 0;
}
