#include <stdio.h>

int main() {
    int n, i, j = 0;
    
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Move non-zero elements forward
    int result[n];
    for(i = 0; i < n; i++) {
        if(arr[i] != 0) {
            result[j++] = arr[i];
        }
    }

    // Fill remaining positions with zero
    while(j < n) {
        result[j++] = 0;
    }

    printf("Array after moving zeroes to end:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", result[i]);
    }

    return 0;
}
