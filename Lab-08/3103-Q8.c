#include <stdio.h>

int main() {

    // Defining a 3D array as 2 pages of 3x3 matrix
    int array[2][3][3] = {
        { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} },  // Page 0
        { {9, 8, 7}, {6, 5, 4}, {3, 2, 1} }   // Page 1
    };

    int sumPage0 = 0;
    int sumPage1 = 0;

    // Calculate the sum of elements on each page

    for (int i = 0; i < 2; i++) {          // Loop through pages
        for (int j = 0; j < 3; j++) {      // Loop through rows
            for (int k = 0; k < 3; k++) {  // Loop through columns
                if (i == 0) {
                    sumPage0 += array[i][j][k];
                } else {
                    sumPage1 += array[i][j][k];
                }
            }
        }
    }

    printf("Sum of elements on Page 0: %d\n", sumPage0);
    printf("Sum of elements on Page 1: %d\n", sumPage1);

    return 0;
}
