#include <stdio.h>


int main() {
    float principle, rate, time, interest;

    printf("Enter the following values within the given limits:\n");
    printf("Principle: Between 100 Rs. and 1,000,000 Rs.\n");
    printf("Rate of interest: Between 5%% and 10%%\n");
    printf("Time period: Between 1 and 10 years\n");

    printf("\nEnter the Principle amount (Rs.): ");
    scanf("%f", &principle);
    printf("Enter the Rate of Interest (%%): ");
    scanf("%f", &rate);
    printf("Enter the Time period (years): ");
    scanf("%f", &time);

    if (principle < 100 || principle > 1000000) {
        printf("Invalid Principle amount! It must be between 100 Rs. and 1,000,000 Rs.\n");
        return 1;
    }

    if (rate < 5 || rate > 10) {
        printf("Invalid Rate of Interest! It must be between 5%% and 10%%.\n");
        return 1;
    }

    if (time < 1 || time > 10) {
        printf("Invalid Time period! It must be between 1 and 10 years.\n");
        return 1;
    }

    interest = (principle * rate * time) / 100;

    printf("\nThe Simple Interest is: %.2f Rs.\n", interest);

    return 0;
}