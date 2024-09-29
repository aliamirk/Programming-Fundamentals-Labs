#include <stdio.h>

int main() {
    int num1, num2, max;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    if (num1 == num2) {
        printf("Both numbers are equal: %d.\n", num1);
    } else {
        max = (num1 > num2) ? num1 : num2;
        printf("The maximum number is %d.\n", max);
    }

    return 0;
}
