#include <stdio.h>

int main(){
    double weight;
    printf("Enter the Weight of Object: ");
    scanf("%lf", &weight);

    if (weight <= 5){
        printf("The Cost is $10\n");
    } else if (weight > 5 && weight <= 10){
        printf("The Cost is $20\n");
    } else{
        printf("The Cost is $30\n");
    }

    return 0;
}