#include <stdio.h>

int main()
{
    int n1, n2, i, j, k = 0;

    // Input size of first array
    printf("Enter size of first array: ");
    scanf("%d", &n1);
    int arr1[n1];
    printf("Enter %d elements of first array:\n", n1);
    for (i = 0; i < n1; i++)
    {
        scanf("%d", &arr1[i]);
    }

    // Input size of second array
    printf("Enter size of second array: ");
    scanf("%d", &n2);
    int arr2[n2];
    printf("Enter %d elements of second array:\n", n2);
    for (i = 0; i < n2; i++)
    {
        scanf("%d", &arr2[i]);
    }

    // Union array
    int unionArr[n1 + n2];

    // Copy first array
    for (i = 0; i < n1; i++)
    {
        unionArr[k++] = arr1[i];
    }

    // Copy second array but avoid duplicates
    for (i = 0; i < n2; i++)
    {
        int found = 0;
        for (j = 0; j < k; j++)
        {
            if (arr2[i] == unionArr[j])
            {
                found = 1;
                break;
            }
        }
        if (!found)
        {
            unionArr[k++] = arr2[i];
        }
    }

    // Print union
    printf("Union of arrays:\n");
    for (i = 0; i < k; i++)
    {
        printf("%d ", unionArr[i]);
    }

    return 0;
}
