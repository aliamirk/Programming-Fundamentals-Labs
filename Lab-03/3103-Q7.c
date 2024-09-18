#include <stdio.h>


int main(){
    float _fahrenheit, _celcius;

    printf("Enter Temperature in Celcius: ");
    scanf("%f", &_celcius);

    _fahrenheit = (1.8 * _celcius) + 32;
    printf("The given temperature in fahrenheit is: %.2f \n", _fahrenheit);
};