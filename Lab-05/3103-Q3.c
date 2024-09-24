#include <stdio.h>

int main() {
    int score;
    printf("Enter your score (0-100): ");
    scanf("%d", &score);

    if (score >= 90 && score <= 100) {
        printf("Grade: A\n");
        printf("Outstanding!\n");
    } 
    else if (score >= 80 && score < 90) {
        printf("Grade: B\n");
        printf("Well done!\n");
    } 
    else if (score >= 70 && score < 80) {
        printf("Grade: C\n");
        printf("You passed.\n");
    } 
    else if (score >= 60 && score < 70) {
        printf("Grade: D\n");
        printf("You need to improve.\n");
    } 
    else if (score >= 0 && score < 60) {
        printf("Grade: F\n");
        printf("Better luck next time.\n");
    } 
    else {
        printf("Invalid score! Please enter a number between 0 and 100.\n");
    }

    return 0;
}
