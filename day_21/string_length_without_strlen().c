#include <stdio.h>

int main() {
    char str[100];
    int length = 0;

    printf("Enter a string: ");
    scanf("%s", str);  // reads string until space

    // Count characters until null terminator '\0'
    for(int i = 0; str[i] != '\0'; i++) {
        length++;
    }

    printf("Length of the string = %d\n", length);

    return 0;
}
