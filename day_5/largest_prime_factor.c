#include <stdio.h>
#include <math.h>

int main() {
    long long num;
    printf("Enter a number: ");
    scanf("%lld", &num);

    long long largestPrime = -1;

    // Divide by 2 until odd
    while (num % 2 == 0) {
        largestPrime = 2;
        num /= 2;
    }

    // Check odd factors
    for (long long i = 3; i <= sqrt(num); i += 2) {
        while (num % i == 0) {
            largestPrime = i;
            num /= i;
        }
    }

    // If num is still > 2, it is prime
    if (num > 2) {
        largestPrime = num;
    }

    printf("Largest prime factor is: %lld\n", largestPrime);

    return 0;
}
