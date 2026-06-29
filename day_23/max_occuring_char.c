#include <stdio.h>

int main() {
    char str[200];
    int freq[256] = {0};  // frequency array for ASCII characters
    int i = 0, maxFreq = 0;
    char mostChar;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // reads full line including spaces

    // Count frequency of each character
    while(str[i] != '\0') {
        unsigned char ch = str[i];
        if(ch != '\n') {   // ignore newline from fgets
            freq[ch]++;
            if(freq[ch] > maxFreq) {
                maxFreq = freq[ch];
                mostChar = ch;
            }
        }
        i++;
    }

    printf("Most occurring character = '%c'\n", mostChar);
    printf("Frequency = %d\n", maxFreq);

    return 0;
}
