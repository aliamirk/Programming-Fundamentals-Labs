#include<stdio.h>

int main(){

    int num;
    printf("Enter any Number: ");
    scanf("%d", &num);

    if (num%3 == 0){
        printf("Number is a multiple of three.\n");
    } 
    else {
        printf("Number is NOT a multiple of three. \n");
    };

}