#include <stdio.h>

int main() {
    int num;
    
    printf("Enter a number: ");
    scanf("%d", &num);

    // Nested Ternary Operator
    (num > 0) ? printf("%d is positive.\n", num) : (num < 0) ? printf("%d is negative.\n", num) :
                printf("The number is zero.\n");

    return 0;
}
