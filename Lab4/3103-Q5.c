#include<stdio.h>

int main(){
  int customerID, unitsConsumed;
  int _amount, _surcharge;
  float _netAmount;
  _surcharge = 0;

  printf("\nEnter your Customer ID: ");
  scanf("%d", &customerID);

  printf("Enter your Electricity Units Consumed: ");
  scanf("%d", &unitsConsumed);

if (unitsConsumed <= 199){

    _amount = unitsConsumed * 16.20;
    if (_amount > 18000){
        _surcharge = _amount * 0.15;
    };
    _netAmount = _amount + _surcharge;
    printf("\nCustomer ID: %d\n", customerID);
    printf("Units Consumed: %d\n", unitsConsumed);
    printf("Amount Charges @16.20/Unit : %d\n", _amount);
    printf("Surcharge Amount: %d\n", _surcharge);
    printf("Net Amount Paid by the Customer: %.2f\n\n", _netAmount);

}else if (unitsConsumed >= 200 && unitsConsumed < 300){

    _amount = unitsConsumed * 20.10;
    if (_amount > 18000){
        _surcharge = _amount * 0.15;
    };
    _netAmount = _amount + _surcharge;
    printf("\nCustomer ID: %d\n", customerID);
    printf("Units Consumed: %d\n", unitsConsumed);
    printf("Amount Charges @20.10/Unit : %d\n", _amount);
    printf("Surcharge Amount: %d\n", _surcharge);
    printf("Net Amount Paid by the Customer: %.2f\n\n", _netAmount);

} else if (unitsConsumed >= 300 && unitsConsumed < 500){

    _amount = unitsConsumed * 27.10;
    if (_amount > 18000){
        _surcharge = _amount * 0.15;
    };
    _netAmount = _amount + _surcharge;
    printf("\nCustomer ID: %d\n", customerID);
    printf("Units Consumed: %d\n", unitsConsumed);
    printf("Amount Charges @27.10/Unit : %d\n", _amount);
    printf("Surcharge Amount: %d\n", _surcharge);
    printf("Net Amount Paid by the Customer: %.2f\n\n", _netAmount);
} else{
    _amount = unitsConsumed * 35.90;
    if (_amount > 18000){
        _surcharge = _amount * 0.15;
    };
    _netAmount = _amount + _surcharge;
    printf("\nCustomer ID: %d\n", customerID);
    printf("Units Consumed: %d\n", unitsConsumed);
    printf("Amount Charges @35.90/Unit : %d\n", _amount);
    printf("Surcharge Amount: %d\n", _surcharge);
    printf("Net Amount Paid by the Customer: %.2f\n\n", _netAmount);
}
}