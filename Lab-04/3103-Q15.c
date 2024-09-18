#include <stdio.h>

int main(){

    int noSnack, quantity, i, total;
    char snackType;
    int noBurger, noFrenchFries, noPizza, noSandwiches;

    noBurger = 0;
    noFrenchFries = 0;
    noPizza = 0;
    noSandwiches = 0;
    total = 0;

    printf("\nPlease Select from the Following Menu: \n");
    printf("B= Burger\n");
    printf("F= French Fries\n");
    printf("P= Pizza\n");
    printf("S= Sandwich\n");

    printf("How many types of Snacks do you want to order: ");
    scanf("%d", &noSnack);

    for ( i = 1 ; i <= noSnack; i++)
    {
        printf("Enter Snack %d: ", i);
        scanf(" %c", &snackType);

        printf("Enter the Quantity: ");
        scanf("%d", &quantity);

        if (snackType == 'B'){
            noBurger = quantity;
            total += quantity * 200;
        }else if (snackType == 'F'){
            noFrenchFries = quantity;
            total += quantity * 50;
        } else if(snackType == 'P'){
            noPizza = quantity;
            total += quantity * 500;
        } else{
            noSandwiches = quantity;
            total += quantity * 150;
        }
    }

    printf("-------------------------------------\n");
    printf("You have Ordered! \n");

    if (noBurger > 0){
        printf("%d Burger (s) value %d PKR\n", noBurger, noBurger * 200);
    }
    if(noFrenchFries > 0){
        printf("%d French Fries (s) value %d PKR\n", noFrenchFries, noFrenchFries * 50);
    }
    if (noPizza > 0){
        printf("%d Pizza (s) value %d PKR\n", noPizza, noPizza * 500);
    }
    if (noSandwiches > 0){
        printf("%d Sandwiches (s) value %d PKR\n\n", noSandwiches, noSandwiches * 150);
    }
    printf("Total Cost: %d\n", total);
    printf("-------------------------------------\n");

    return 0;

}
