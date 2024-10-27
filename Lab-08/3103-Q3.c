#include <stdio.h>

int main() {
    int matrix[3][3];
    int i, j, k;
    int isSaddlePoint, saddlePointFound = 0;

    printf("Enter elements of the 3x3 matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Finding saddle points
    for (i = 0; i < 3; i++) {
        int minRow = matrix[i][0];
        int minColIndex = 0;

        // Finding the minimum element in the current row
        for (j = 1; j < 3; j++) {
            if (matrix[i][j] < minRow) {
                minRow = matrix[i][j];
                minColIndex = j;
            }
        }

        // Checking if the found minimum element is the largest in its column
        isSaddlePoint = 1; // Assuming it is largest
        for (k = 0; k < 3; k++) {
            if (matrix[k][minColIndex] > minRow) {
                isSaddlePoint = 0;
                break;
            }
        }

        // If a saddle point is found, print it
        if (isSaddlePoint) {
            printf("Saddle point found at [%d][%d]: %d\n", i, minColIndex, minRow);
            saddlePointFound = 1;
        }
    }

    if (!saddlePointFound) {
        printf("No saddle points found in the matrix.\n");
    }

    return 0;
}
