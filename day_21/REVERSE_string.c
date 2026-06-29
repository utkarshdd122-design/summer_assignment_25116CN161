#include <stdio.h>

int main() {
    char str[100], rev[100];
    int length = 0;

    printf("Enter a string: ");
    scanf("%s", str);  // reads string until space

    // Find length
    while(str[length] != '\0') {
        length++;
    }

    // Reverse string
    for(int i = 0; i < length; i++) {
        rev[i] = str[length - i - 1];
    }
    rev[length] = '\0';  // null terminate

    printf("Reversed string = %s\n", rev);

    return 0;
}
