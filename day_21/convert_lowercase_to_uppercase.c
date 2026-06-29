#include <stdio.h>

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);  // reads until space; use fgets for full line

    // Convert lowercase to uppercase
    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;  // ASCII difference between lowercase and uppercase
        }
    }

    printf("Uppercase string = %s\n", str);

    return 0;
}
