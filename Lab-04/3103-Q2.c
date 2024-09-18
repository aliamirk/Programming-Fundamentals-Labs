#include<stdio.h>

int main(){

    float Num1, Num2;
    char Operator;

    printf("Enter Number 1: ");
    scanf("%f", &Num1);

    printf("Enter Number 2: ");
    scanf("%f", &Num2);

    printf("Enter Operator: + | - | * | / | ");
    scanf(" %c", &Operator);

    switch (Operator)
    {
    case '+':
        printf("Result: %.2f\n", Num1+Num2);
        break;
    case '-':
        printf("Result: %.2f\n", Num1-Num2);
        break;
    case '/':
        printf("Result: %.2f\n", Num1/Num2);
        break;
    case '*':
        printf("Result: %.2f\n", Num1*Num2);
        break;
    default:
        printf("Invalid Input");
        break;
    }


}