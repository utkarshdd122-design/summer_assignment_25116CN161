#include <stdio.h>

int main() {
    char str[100];
    int i = 0, count;

    printf("Enter a string: ");
    scanf("%s", str);  // reads until space; use fgets for full line

    printf("Compressed string: ");
    while(str[i] != '\0') {
        count = 1;

        // Count consecutive repeating characters
        while(str[i] == str[i+1]) {
            count++;
            i++;
        }

        // Print character and its count
        printf("%c%d", str[i], count);

        i++;
    }

    printf("\n");
    return 0;
}
