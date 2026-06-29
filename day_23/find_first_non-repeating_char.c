#include <stdio.h>

int main() {
    char str[100];
    int freq[256] = {0};  // frequency array for ASCII characters
    char firstNonRepeat = '\0';

    printf("Enter a string: ");
    scanf("%s", str);  // reads until space; use fgets for full line

    // Count frequency of each character
    for(int i = 0; str[i] != '\0'; i++) {
        unsigned char ch = str[i];
        freq[ch]++;
    }

    // Find first non-repeating character
    for(int i = 0; str[i] != '\0'; i++) {
        unsigned char ch = str[i];
        if(freq[ch] == 1) {
            firstNonRepeat = ch;
            break;
        }
    }

    if(firstNonRepeat != '\0')
        printf("First non-repeating character = '%c'\n", firstNonRepeat);
    else
        printf("No non-repeating character found.\n");

    return 0;
}
