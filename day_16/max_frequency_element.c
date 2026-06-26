#include <stdio.h>

int main() {
    int n, i, j, maxCount = 0, element;
    
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    
    for(i = 0; i < n; i++) {
        int count = 1;
        for(j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                count++;
            }
        }
        if(count > maxCount) {
            maxCount = count;
            element = arr[i];
        }
    }

    printf("Element with maximum frequency: %d (occurs %d times)\n", element, maxCount);

    return 0;
}
