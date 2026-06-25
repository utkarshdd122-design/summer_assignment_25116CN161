#include <stdio.h>
int main()
{
    int arr[100], n, i, __even = 0, __odd = 0;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            __even++ ;
        }
        else
        {
            __odd++;
        }
    }
    printf("The number of even elements in the array is: %d\n", __even);
    printf("The number of odd elements in the array is: %d\n", __odd);
    return 0;
}