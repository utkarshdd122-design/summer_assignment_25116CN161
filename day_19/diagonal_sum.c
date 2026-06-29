#include <stdio.h>

int main() {
    int n;
    printf("Enter the order of the square matrix: ");
    scanf("%d", &n);

    int a[n][n];
    int primarySum = 0, secondarySum = 0;

    // Input matrix
    printf("Enter elements of the matrix:\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Calculate diagonal sums
    for(int i = 0; i < n; i++) {
        primarySum += a[i][i];           // Primary diagonal (top-left to bottom-right)
        secondarySum += a[i][n - i - 1]; // Secondary diagonal (top-right to bottom-left)
    }

    // Display matrix
    printf("Matrix:\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    // Display results
    printf("Sum of primary diagonal = %d\n", primarySum);
    printf("Sum of secondary diagonal = %d\n", secondarySum);

    return 0;
}
