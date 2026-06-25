#include <stdio.h>
int armstrong(int n)
{
    int sum = 0, rem, temp;
    temp = n;

    while (temp != 0)
    {
        rem = temp % 10;
        sum = sum + (rem * rem * rem);
        temp = temp / 10;
    }
    if (sum == n)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (armstrong(num))
    {
        printf("The number is an Armstrong number.\n");
    }
    else
    {
        printf("The number is not an Armstrong number.\n");
    }
    return 0;
}