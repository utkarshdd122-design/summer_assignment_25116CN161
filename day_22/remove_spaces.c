#include <stdio.h>

int main() {
    char str[200], result[200];
    int i = 0, j = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // reads full line including spaces

    // Remove spaces
    while(str[i] != '\0') {
        if(str[i] != ' ' && str[i] != '\n') {
            result[j++] = str[i];
        }
        i++;
    }
    result[j] = '\0';  // null terminate

    printf("String without spaces: %s\n", result);

    return 0;
}
