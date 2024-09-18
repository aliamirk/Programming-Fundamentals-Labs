#include <stdio.h>

int main(){
    int studentScore;
    printf("\nEnter your score: ");
    scanf("%d", &studentScore);

    if (studentScore >= 90 && studentScore <= 100){
        printf("Your Grade is A\n");
    } else if (studentScore >= 80 && studentScore < 90){
        printf("Your Grade is B\n");
    } else if (studentScore >= 70 && studentScore < 80){
        printf("Your Grade is C\n");
    } else if (studentScore >= 60 && studentScore < 70){
        printf("Your Grade is D\n");
    } else{
        printf("You are Fail.\n");
    }
    return 0;
}