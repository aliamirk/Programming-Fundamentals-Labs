#include <stdio.h>

int main() {
    int speedLimit, driverSpeed;

    printf("Enter the speed limit (in mph): ");
    scanf("%d", &speedLimit);
    printf("Enter the driver's speed (in mph): ");
    scanf("%d", &driverSpeed);

    if (driverSpeed >= speedLimit + 10) {
        printf("Speeding.\n");
    } else {
        printf("Driving safely.\n");
    }

    if (driverSpeed % 5 == 0) {
        printf("The driver's speed is a multiple of 5.\n");
    } else {
        printf("The driver's speed is not a multiple of 5.\n");
    }

    return 0;
}
