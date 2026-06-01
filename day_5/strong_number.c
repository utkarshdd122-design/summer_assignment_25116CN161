#include <stdio.h>

// Function to calculate factorial of a digit
int factorial(int n) {
    int fact = 1;
    for(int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int num, originalNum, remainder, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num;

    // Calculate sum of factorial of digits
    while(num > 0) {
        remainder = num % 10;
        sum += factorial(remainder);
        num /= 10;
    }

    // Check if Strong Number
    if(sum == originalNum) {
        printf("%d is a Strong Number\n", originalNum);
    } else {
        printf("%d is NOT a Strong Number\n", originalNum);
    }

    return 0;
}
