#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    char word[50], longest[50];
    int i = 0, j = 0, maxLen = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);  // read full line including spaces

    while(str[i] != '\0') {
        if(str[i] != ' ' && str[i] != '\n') {
            word[j++] = str[i];  // build current word
        } else {
            word[j] = '\0';      // end current word
            if(strlen(word) > maxLen) {
                maxLen = strlen(word);
                strcpy(longest, word);
            }
            j = 0;  // reset for next word
        }
        i++;
    }

    // Handle last word if sentence doesn't end with space
    word[j] = '\0';
    if(strlen(word) > maxLen) {
        maxLen = strlen(word);
        strcpy(longest, word);
    }

    printf("Longest word = %s\n", longest);
    printf("Length = %d\n", maxLen);

    return 0;
}
