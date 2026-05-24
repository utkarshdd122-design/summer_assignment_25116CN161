#include<stdio.h>
int main()
{
    int n, count = 0;
    printf("enter a number:");
    scanf("%d", &n);

    while (n != 0) {
        n /= 10; // Remove the last digit
        count++;   // Increment the count of digits
    }

    printf("number of digits: %d\n", count);
    return 0;
}