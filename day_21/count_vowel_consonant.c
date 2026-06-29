#include <stdio.h>

int main() {
    char str[100];
    int vowels = 0, consonants = 0;

    printf("Enter a string: ");
    scanf("%s", str);  // reads until space; use fgets for full line

    // Traverse string
    for(int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];

        // Convert to lowercase for easy checking
        if(ch >= 'A' && ch <= 'Z') {
            ch = ch + 32;
        }

        // Check if alphabet
        if(ch >= 'a' && ch <= 'z') {
            if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }
    }

    printf("Number of vowels = %d\n", vowels);
    printf("Number of consonants = %d\n", consonants);

    return 0;
}
