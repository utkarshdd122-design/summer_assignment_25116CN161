#include <stdio.h>

int main() {
    char str[200];
    int i = 0, words = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);  // reads full line including spaces

    // Traverse string
    while(str[i] != '\0') {
        // Check for start of a word
        if((str[i] != ' ' && str[i] != '\n') &&
           (i == 0 || str[i-1] == ' ' || str[i-1] == '\n')) {
            words++;
        }
        i++;
    }

    printf("Number of words = %d\n", words);

    return 0;
}
