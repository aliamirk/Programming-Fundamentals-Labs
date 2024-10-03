#include <stdio.h>

int main(){
    int age;
    printf("Enter your Age: ");
    scanf("%d", &age);

    if (age <= 10){
        printf("Your Age Group is Child\n");
    } else{
        if (age > 10 && age < 19){
            printf("Your Age group is Teenager\n");
        } else if (age >= 19 && age < 30){
            printf("Your Age Group is Adult\n");
        } else {
            printf("Your Age Group is Senior\n");
        }
    }

}