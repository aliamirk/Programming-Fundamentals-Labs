#include <stdio.h>

// Leap Year Rules:
// A year that is exactly divisible by 4 is a leap year.
// f a year is divisible by 100, it is not a leap year.
// If a year is divisible by 400, then it is always a leap year.

int main(){
    int year;
    printf("Enter Year to Check: ");
    scanf("%d", &year);

    if (year % 400 == 0) {
        printf("%d is a leap year.\n", year);
    } 
    else if (year % 100 == 0) {
        printf("%d is not a leap year.\n", year);
    } 
    else if (year % 4 == 0) {
        printf("%d is a leap year.\n", year);
    } 
    else {
        printf("%d is not a leap year.\n", year);
    }
}