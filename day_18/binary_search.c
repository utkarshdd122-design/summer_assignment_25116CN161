#include <stdio.h>
int main()
{
    int a[100], n, i, key, low, high, mid;
    printf("ENTER THE SIZE OF ARRAY: ");
    scanf("%d", &n);
    printf("ENTER THE ELEMENTS OF ARRAY IN SORTED ORDER: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("ENTER THE KEY TO BE SEARCHED: ");
    scanf("%d", &key);
    low = 0;
    high = n - 1;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (a[mid] == key)
        {
            printf("ELEMENT FOUND AT INDEX %d", mid);
            break;
        }
        else if (a[mid] < key)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    if (low > high)
    {
        printf("ELEMENT NOT FOUND");
    }
    return 0;
}