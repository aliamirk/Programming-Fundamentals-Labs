#include <stdio.h>
int main() {
    int num, originalNum, remainder, result = 0;
    printf("Enter a three-digit integer: ");
    scanf("%d", &num);
    originalNum = num;

    while (originalNum != 0) {
        remainder = originalNum % 10; // Extract Last Digit
        result += remainder * remainder * remainder; // sum = sum + num^3
        originalNum /= 10; // Remove last digit
    }

    if (result == num)
        printf("%d is an Armstrong number.", num);
    else
        printf("%d is not an Armstrong number.", num);

    return 0;
}