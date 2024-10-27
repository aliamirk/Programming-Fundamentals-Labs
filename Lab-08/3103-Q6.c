#include <stdio.h>

int main() {
    int i, j, rows = 4;

    // Generate the number pattern
    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}
