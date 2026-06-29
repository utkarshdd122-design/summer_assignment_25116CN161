#include <stdio.h>

int main() {
    char str[100];
    int length = 0, flag = 1;

    printf("Enter a string: ");
    scanf("%s", str);  // reads until space; use fgets for full line

    // Find length
    while(str[length] != '\0') {
        length++;
    }

    // Check palindrome
    for(int i = 0; i < length / 2; i++) {
        if(str[i] != str[length - i - 1]) {
            flag = 0;
            break;
        }
    }

    if(flag)
        printf("The string is a palindrome.\n");
    else
        printf("The string is not a palindrome.\n");

    return 0;
}
