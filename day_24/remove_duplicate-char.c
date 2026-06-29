#include <stdio.h>

int main() {
    char str[100];
    int freq[256] = {0};  // frequency array for ASCII characters
    char result[100];
    int i = 0, j = 0;

    printf("Enter a string: ");
    scanf("%s", str);  // reads until space; use fgets for full line

    // Traverse string
    while(str[i] != '\0') {
        unsigned char ch = str[i];
        if(freq[ch] == 0) {   // first occurrence
            result[j++] = ch;
            freq[ch] = 1;
        }
        i++;
    }

    result[j] = '\0';  // null terminate

    printf("String after removing duplicates: %s\n", result);

    return 0;
}
