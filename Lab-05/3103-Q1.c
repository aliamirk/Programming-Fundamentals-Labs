#include <stdio.h>

int main() {
    char color;
    
    printf("Enter the color of the traffic light (R for Red, Y for Yellow, G for Green): ");
    scanf(" %c", &color);
    
    if (color == 'R' || color == 'r') {
        printf("Action: Stop\n");
    } else {
        if (color == 'Y' || color == 'y') {
            printf("Action: Caution\n");
        } else {
            if (color == 'G' || color == 'g') {
                printf("Action: Go\n");
            } else {
                printf("Invalid input! Please enter R, Y, or G.\n");
            }
        }
    }

    return 0;
}
