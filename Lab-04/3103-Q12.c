#include <stdio.h>

int main(){
    int age;
    printf("Enter your Age: ");
    scanf("%d", &age);

    if (age <= 12){
        printf("You Age Group is Child\n");
    } else if (age >= 13 && age <= 19){
        printf("You Age Group is Teenager\n");
    } else if (age >= 20 && age <= 64){
        printf("You Age Group is Adult\n");
    } else{
        printf("You Age Group is Senior\n");
    }

}