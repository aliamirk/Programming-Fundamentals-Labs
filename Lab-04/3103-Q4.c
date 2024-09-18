#include<stdio.h>

int main(){
    int amount, amountaferDiscount, savedAmount;
    
    printf("Enter the Cost of items: ");
    scanf("%d", &amount);

    if (amount >= 500){

        if (amount < 2000){
            amountaferDiscount = amount * 0.95;
            savedAmount = amount - amountaferDiscount;
            printf("You will recieve 5%% discount\n");
            printf("Original Amount: %d\n", amount);
            printf("Amount after Discount: %d\n", amountaferDiscount);
            printf("Saved Amount: %d\n", savedAmount);

        } else if (amount >= 2000 & amount < 4000){
            amountaferDiscount = amount * 0.90;
            savedAmount = amount - amountaferDiscount;
            printf("You will recieve 10%% discount\n");
            printf("Original Amount: %d\n", amount);
            printf("Amount after Discount: %d\n", amountaferDiscount);
            printf("Saved Amount: %d\n", savedAmount);

        } else if (amount >= 4000 && amount < 6000){
            amountaferDiscount = amount * 0.80;
            savedAmount = amount - amountaferDiscount;
            printf("You will recieve 20%% discount\n");
            printf("Original Amount: %d\n", amount);
            printf("Amount after Discount: %d\n", amountaferDiscount);
            printf("Saved Amount: %d\n", savedAmount);
            printf("You will recieve 35%% discount\n");
        } else {
            amountaferDiscount = amount * 0.65;
            savedAmount = amount - amountaferDiscount;
            printf("You will recieve 35%% discount\n");
            printf("Original Amount: %d\n", amount);
            printf("Amount after Discount: %d\n", amountaferDiscount);
            printf("Saved Amount: %d\n", savedAmount);
        };
    } else{
        printf("Cost less than 500 is not eligible for discount\n");
    }
}