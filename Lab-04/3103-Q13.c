#include <stdio.h>

int main() {
    int creditScore;

    printf("Enter your credit score: ");
    scanf("%d", &creditScore);

    if (creditScore >= 700) {
        printf("You are eligible for the loan.\n");
    } else if (creditScore >= 600 && creditScore < 700) {
        printf("You may need to provide additional documentation for the loan.\n");
    } else {
        printf("You are not eligible for the loan.\n");
    }

    return 0;
}