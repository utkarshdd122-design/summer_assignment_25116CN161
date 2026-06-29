#include <stdio.h>

int main() {
    int m1, n1, m2, n2;
    printf("Enter rows and columns of first matrix: ");
    scanf("%d %d", &m1, &n1);

    printf("Enter rows and columns of second matrix: ");
    scanf("%d %d", &m2, &n2);

    if (n1 != m2) {
        printf("Matrix multiplication not possible!\n");
        return 0;
    }

    int a[m1][n1], b[m2][n2], product[m1][n2];

    // Input first matrix
    printf("Enter elements of first matrix:\n");
    for(int i = 0; i < m1; i++) {
        for(int j = 0; j < n1; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Input second matrix
    printf("Enter elements of second matrix:\n");
    for(int i = 0; i < m2; i++) {
        for(int j = 0; j < n2; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    // Initialize product matrix
    for(int i = 0; i < m1; i++) {
        for(int j = 0; j < n2; j++) {
            product[i][j] = 0;
        }
    }

    // Multiply matrices
    for(int i = 0; i < m1; i++) {
        for(int j = 0; j < n2; j++) {
            for(int k = 0; k < n1; k++) {
                product[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    // Display result
    printf("Product of matrices:\n");
    for(int i = 0; i < m1; i++) {
        for(int j = 0; j < n2; j++) {
            printf("%d\t", product[i][j]);
        }
        printf("\n");
    }

    return 0;
}
