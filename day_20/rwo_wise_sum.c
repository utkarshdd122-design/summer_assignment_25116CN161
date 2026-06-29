#include <stdio.h>

int main() {
    int m, n;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &m, &n);

    int a[m][n];

    // Input matrix
    printf("Enter elements of the matrix:\n");
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Display matrix
    printf("Matrix:\n");
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    // Calculate row-wise sum
    printf("Row-wise sums:\n");
    for(int i = 0; i < m; i++) {
        int rowSum = 0;
        for(int j = 0; j < n; j++) {
            rowSum += a[i][j];
        }
        printf("Sum of row %d = %d\n", i + 1, rowSum);
    }

    return 0;
}
