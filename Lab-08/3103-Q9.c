#include <stdio.h>

int main() {
    int arr[5] = {2, 3, 1, 2, 3}; // Input array
    int size = 5;
    int count[size]; // Array to keep track of occurrences
    int index;

    // Initialize the count array to 0
    for (int i = 0; i < size; i++) {
        count[i] = 0;
    }

    // Count occurrences of each element
    for (int i = 0; i < size; i++) {
        index = arr[i];
        count[index] = count[index] + 1; // Increment the count for that element
    }

    printf("Elements occurring more than once: ");

    int found = 0; // check if any element is found

    for (int i = 0; i < size; i++) {
        if (count[i] > 1) { 
            printf("%d ", i);
            found = 1; // Set flag to indicate an element was found
        }
    }

    if (!found) {
        printf("No elements occur more than once.");
    }
    
    printf("\n");
    return 0;
}
