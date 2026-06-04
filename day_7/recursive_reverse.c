#include<stdio.h>
int reverse(int);
int main() {
    int n, result;
    printf("Enter a number: ");
    scanf("%d", &n);
    result = reverse(n);
    printf("Reverse of %d is %d", n, result);
    return 0;
}
int reverse(int n) {
    static int rev = 0;
    if (n == 0)
        return rev;
    else {
        rev = rev * 10 + n % 10;
        return reverse(n / 10);
    }
}