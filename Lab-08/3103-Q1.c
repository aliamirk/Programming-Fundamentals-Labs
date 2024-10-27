#include <stdio.h>

int main() {
    int start, end, i, j, isPrime;

    printf("Enter the start of the range: ");
    scanf("%d", &start);
    printf("Enter the end of the range: ");
    scanf("%d", &end);

    printf("Prime numbers between %d and %d are:\n", start, end);
    for (i = start; i <= end; i++) {
        if (i < 2) {
            continue; // Numbers less than 2 are not prime
        }
        isPrime = 1; // Assuming number is prime

        // Checking if 'i' has any divisors other than 1 and itself
        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                isPrime = 0;
                break; // Not a prime number
            }
        }

        if (isPrime == 1) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}
