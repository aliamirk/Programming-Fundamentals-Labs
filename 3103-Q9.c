#include <stdio.h>

int main() {
    int age;
    int price;

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age >= 0 && age <= 12) {
        price = 5;  // Children
    } else if (age >= 13 && age <= 17) {
        price = 10; // Teens
    } else if (age >= 18 && age <= 64) {
        price = 20; // Adults
    } else if (age >= 65) {
        price = 15; // Seniors
    } else {
        printf("Invalid age.\n");
        return 1; 
    }

    printf("The ticket price for your age group is $%d.\n", price);

    return 0;
}
