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

    // Calculate column-wise sum
    printf("Column-wise sums:\n");
    for(int j = 0; j < n; j++) {
        int colSum = 0;
        for(int i = 0; i < m; i++) {
            colSum += a[i][j];
        }
        printf("Sum of column %d = %d\n", j + 1, colSum);
    }

    return 0;
}
