#include <stdio.h>

int main() {
    char str[100];
    int freq[256] = {0};  // frequency array for ASCII characters
    char firstRepeat = '\0';

    printf("Enter a string: ");
    scanf("%s", str);  // reads until space; use fgets for full line

    // Traverse string
    for(int i = 0; str[i] != '\0'; i++) {
        unsigned char ch = str[i];
        freq[ch]++;

        if(freq[ch] == 2) {   // found repeating character
            firstRepeat = ch;
            break;
        }
    }

    if(firstRepeat != '\0')
        printf("First repeating character = '%c'\n", firstRepeat);
    else
        printf("No repeating character found.\n");

    return 0;
}
