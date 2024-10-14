#include <stdio.h>

int main() {
    int arr1[5], arr2[5];
    int i;

    printf("Enter 5 integers for the first array:\n");
    for(i = 0; i < 5; i++) {
        scanf("%d", &arr1[i]);
    }

    for(i = 0; i < 5; i++) {
        arr2[i] = arr1[i];
    }

    printf("First array: ");
    for(i = 0; i < 5; i++) {
        printf("%d ", arr1[i]);
    }

    printf("\nSecond array: ");
    for(i = 0; i < 5; i++) {
        printf("%d ", arr2[i]);
    }

    return 0;
}
