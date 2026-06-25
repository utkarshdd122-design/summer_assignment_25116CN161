#include <stdio.h>
int palindrome(int n)
{
    int rev = 0, rem, temp;
    temp = n;

    while (temp != 0)
    {
        rem = temp % 10;
        rev = rev * 10 + rem;
        temp = temp / 10;
    }
    if (temp == rev)
    {
        return 1;
    }
    else
    {
        return 0;
    } }
    int main()
    {
        int num;
        printf("Enter a number: ");
        scanf("%d", &num);
        if (palindrome(num))
        {
            printf("The number is a palindrome.\n");
        }
        else
        {
            printf("The number is not a palindrome.\n");
        }
        return 0;
    }
