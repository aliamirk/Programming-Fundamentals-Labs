#include <stdio.h>

int main() {
    int rows, i, j;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (i = 0; i < rows; i++) {
        // spaces for formatting
        for (j = 0; j < rows - i - 1; j++) {
            printf(" ");
        }

        int value = 1;  // First value in every row is 1
        for (j = 0; j <= i; j++) {
            printf("%d ", value);
            value = value * (i - j) / (j + 1);  // Update value for the next element in row
        }
        printf("\n");
    }

    return 0;
}
