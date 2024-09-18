#include <stdio.h>

int main() {
    int Num1,Num2,temp;

    printf("Enter Number 1: ");
    scanf("%d" ,&Num1);

    printf("Enter Number 2: ");
    scanf("%d",&Num2);


    temp = Num2;
    Num2 = Num1;
    Num1 =  temp;
    
    printf("\nAfter swapping:\n");
    printf("Number 1 = %d\nNumber 2 = %d\n", Num1, Num2);

    return 0;
};