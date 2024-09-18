#include <stdio.h>

int main(){

    int distance = 1207;
    float _totalfuelCost, _totalfuelConsumed;  
    int fuelpriceForward, fuelPriceReturn, fuelAverage, costForward, costReturn;
    fuelpriceForward = 118;
    fuelPriceReturn = 123;

    printf("Enter the car's fuel average: ");
    scanf("%d", &fuelAverage);

    if (fuelAverage <= 0)
    {
        printf("Invalid Input, fuel average must be greater than 0");
        return 1;
    }
    else
    {
        // Calculating Total Fuel Consumed of a single trip
        _totalfuelConsumed = distance / fuelAverage;

        // Calculating Forward and Return Fuel Prices
        costForward =  fuelpriceForward * _totalfuelConsumed;
        costReturn = fuelPriceReturn * _totalfuelConsumed;

        // Calculating Final Cost and Fuel Consumed
        _totalfuelConsumed = _totalfuelConsumed * 2;
        _totalfuelCost = costForward + costReturn;

        printf("The Total Cost for the journey is: %.1f\n", _totalfuelCost);
        printf("The Total Fuel Consumed for the journey is: %.1f\n \n", _totalfuelConsumed);
    };    

    return 0;
};