#include <stdio.h>

int main(){
    int balance, amount, stop;
    balance = 50000;
    stop = 0;
    do {
        printf("Enter amount to withdraw: ");
        scanf("%d", &amount);

        if (amount <= balance){
            balance = balance - amount;
            printf("You have withdrawed $%d\n", amount);
            printf("Your remaining balance is %d\n", balance);
        } else{
            printf("You have insufficient balance for this transaction\n");
            return 0;
        }

        printf("Do you want to withdraw more amount? (1: Yes | 0: No) : ");
        scanf("%d", &stop);
        printf("\n");

        } while (stop != 0);

    }