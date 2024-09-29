#include <stdio.h>

int main(){
    int age;
    printf("Enter your Age: ");
    scanf("%d", &age);

    if (age <= 10){
        printf("Your Age Group is Child");
    } else{
        if (age > 10 && age < 19){
            printf("Your Age group is Teenager");
        } else if (age >= 19 && age < 30){
            printf("Your Age Group is Adult");
        } else {
            printf("Your Age Group is Senior");
        }
    }

}