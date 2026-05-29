#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (int i = 2; i <= n - 1; i++)
    {
        if (n % i != 0)
        {
            printf("%d is  a prime number\n", n);
            break;
        }
        else
            printf("%d is a not prime number\n", n);
        break;
    }
    return 0;
}