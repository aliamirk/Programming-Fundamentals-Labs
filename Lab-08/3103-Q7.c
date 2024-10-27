#include <stdio.h>

int main() {
    int n, i, j;

    // Input size of the matrix
    printf("Enter the size of the matrix (e.g., 3 for a 3x3 matrix): ");
    scanf("%d", &n);

    int matrix[n][n], transpose[n][n];

    // Input elements of the matrix
    printf("Enter elements of the %dx%d matrix:\n", n, n);
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculate transpose
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }

    // Display transpose matrix
    printf("Transpose of the matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}
