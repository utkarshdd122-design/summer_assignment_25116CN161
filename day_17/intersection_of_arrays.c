#include <stdio.h>

int main()
{
    int n1, n2, i, j;

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

    // Find intersection
    printf("Intersection of arrays:\n");
    for (i = 0; i < n1; i++)
    {
        for (j = 0; j < n2; j++)
        {
            if (arr1[i] == arr2[j])
            {
                // Check if already printed (to avoid duplicates)
                int alreadyPrinted = 0;
                for (int k = 0; k < i; k++)
                {
                    if (arr1[k] == arr1[i])
                    {
                        alreadyPrinted = 1;
                        break;
                    }
                }
                if (!alreadyPrinted)
                {
                    printf("%d ", arr1[i]);
                }
                break;
            }
        }
    }

    return 0;
}
