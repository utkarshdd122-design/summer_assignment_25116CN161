#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int freq[256] = {0};  // frequency array for ASCII characters
    int i = 0, isAnagram = 1;

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    // Count frequency for str1
    while(str1[i] != '\0') {
        unsigned char ch = str1[i];
        freq[ch]++;
        i++;
    }

    // Reset index
    i = 0;

    // Subtract frequency for str2
    while(str2[i] != '\0') {
        unsigned char ch = str2[i];
        freq[ch]--;
        i++;
    }

    // Check if all frequencies are zero
    for(int j = 0; j < 256; j++) {
        if(freq[j] != 0) {
            isAnagram = 0;
            break;
        }
    }

    if(isAnagram)
        printf("The strings are anagrams.\n");
    else
        printf("The strings are not anagrams.\n");

    return 0;
}
