#include <stdio.h>

int main() {
    int n1, n2, i, j, k;

    // Input size of first array
    printf("Enter size of first sorted array: ");
    scanf("%d", &n1);
    int arr1[n1];
    printf("Enter %d elements (sorted):\n", n1);
    for(i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    // Input size of second array
    printf("Enter size of second sorted array: ");
    scanf("%d", &n2);
    int arr2[n2];
    printf("Enter %d elements (sorted):\n", n2);
    for(i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    // Merge arrays
    int merged[n1 + n2];
    i = j = k = 0;

    while(i < n1 && j < n2) {
        if(arr1[i] <= arr2[j]) {
            merged[k++] = arr1[i++];
        } else {
            merged[k++] = arr2[j++];
        }
    }

    // Copy remaining elements
    while(i < n1) {
        merged[k++] = arr1[i++];
    }
    while(j < n2) {
        merged[k++] = arr2[j++];
    }

    // Print merged array
    printf("Merged sorted array:\n");
    for(i = 0; i < n1 + n2; i++) {
        printf("%d ", merged[i]);
    }

    return 0;
}
