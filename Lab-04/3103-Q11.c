#include <stdio.h>

int main(){
    int temp;
    printf("Enter Temperature: ");
    scanf("%d", &temp);

    if (temp < 15){
        printf("The temperature is Cold.\n");
    } else if (temp >= 15 && temp <= 30){
        printf("The temperature is Warm.\n");
    } else{
        printf("The temperature is Hot.\n");
    }

    return 0;
}