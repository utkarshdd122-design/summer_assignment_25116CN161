
#include <stdio.h>

int main()
{
    int a, b, i, j;

    printf("Enter lower bound of the interval: ");

    scanf("%d", &a);

    printf("Enter upper bound of the interval: ");

    scanf("%d", &b);

    printf("Prime numbers between %d and %d are:\n", a, b);

    for (i = a; i <= b; i++)
    {
        if (i < 2)
            continue;

        int temp = 1;
        for (j = 2; j <= i-1; ++j)
        {
            if (i % j == 0)
            {
                temp = 0;
                break;
            }
        }

        if (temp)
            printf("%d ", i);
    }
    return 0;
}