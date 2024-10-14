#include <stdio.h>

int main() {
    int arr1[5], arr2[5], merged[10];
    int i, j = 0;

    printf("Enter 5 integers for the first array:\n");
    for(i = 0; i < 5; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter 5 integers for the second array:\n");
    for(i = 0; i < 5; i++) {
        scanf("%d", &arr2[i]);
    }

    for(i = 0; i < 5; i++) {
        merged[j] = arr1[i]; // Add elements from the first array
        j++;
    }
    for(i = 0; i < 5; i++) {
        merged[j] = arr2[i]; // Add elements from the second array
        j++;
    }

    printf("Merged array: ");
    for(i = 0; i < 10; i++) {
        printf("%d ", merged[i]);
    }

    return 0;
}
