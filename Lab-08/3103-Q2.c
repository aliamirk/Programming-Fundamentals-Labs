#include <stdio.h>

int main() {
    int start, i, j;

    printf("Enter an odd number to start the pattern: ");
    scanf("%d", &start);

    if (start % 2 == 0) {
        printf("Please enter an odd number.\n");
        return 1; // Exit the program if the number is not odd
    }

    // Generating pattern
    for (i = start; i > 0; i -= 2) {
        
        // Printing each row
        for (j = i; j > 0; j -= 2) {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}
