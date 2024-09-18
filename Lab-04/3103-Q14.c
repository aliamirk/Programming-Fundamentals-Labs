#include <stdio.h>

int main() {
    int hour;

    printf("Enter the time in 24-hour format (0-24): ");
    scanf("%d", &hour);

    if (hour >= 5 && hour < 12) {
        printf("Good Morning\n");
    } else if (hour >= 12 && hour < 18) {
        printf("Good Evening\n");
    } else if (hour >= 18 && hour <= 24) {
        printf("Good Night\n");
    } else if (hour >= 0 && hour < 5) {
        printf("Good Night\n");
    } else {
        printf("Invalid time input!\n");
    }

    return 0;
}
