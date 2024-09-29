#include <stdio.h>

int main() {
    int withdrawalAmount;
    int maxLimit = 500;

    printf("Enter the amount to withdraw: ");
    scanf("%d", &withdrawalAmount);

    if (withdrawalAmount <= maxLimit && withdrawalAmount % 20 == 0) {
        printf("Withdrawal approved.\n");
    } else {
        printf("Withdrawal denied.\n");
    }

    return 0;
}
