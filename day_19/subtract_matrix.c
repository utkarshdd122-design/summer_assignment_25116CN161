#include <stdio.h>

int main() {
    int m, n;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &m, &n);

    int a[m][n], b[m][n], diff[m][n];

    // Input first matrix
    printf("Enter elements of first matrix:\n");
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Input second matrix
    printf("Enter elements of second matrix:\n");
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    // Subtract matrices
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            diff[i][j] = a[i][j] - b[i][j];
        }
    }

    // Display result
    printf("Difference of matrices:\n");
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            printf("%d\t", diff[i][j]);
        }
        printf("\n");
    }

    return 0;
}
