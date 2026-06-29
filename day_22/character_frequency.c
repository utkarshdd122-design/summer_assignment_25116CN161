#include <stdio.h>

int main() {
    char str[100];
    int freq[256] = {0};  // ASCII size

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // reads full line including spaces

    // Count frequency
    for(int i = 0; str[i] != '\0'; i++) {
        unsigned char ch = str[i];
        if(ch != '\n') {   // ignore newline from fgets
            freq[ch]++;
        }
    }

    // Display frequencies
    printf("Character frequencies:\n");
    for(int i = 0; i < 256; i++) {
        if(freq[i] > 0) {
            printf("'%c' : %d\n", i, freq[i]);
        }
    }

    return 0;
}
