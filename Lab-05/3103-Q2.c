#include <stdio.h>

int main() {
    int rating;

    // Asking the user for a rating
    printf("Rate the movie 'The Lion King' (1 to 5): ");
    scanf("%d", &rating);

    // Providing feedback based on the rating
    if (rating == 5) {
        printf("Excellent\n");
    } else if (rating == 4) {
        printf("Good\n");
    } else if (rating == 3) {
        printf("Average\n");
    } else if (rating == 2) {
        printf("Poor\n");
    } else if (rating == 1) {
        printf("Terrible\n");
    } else {
        printf("Invalid rating. Please enter a number between 1 and 5.\n");
    }

    return 0;
}
