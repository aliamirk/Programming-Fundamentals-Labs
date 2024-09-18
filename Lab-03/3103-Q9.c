#include <stdio.h>


int main(){
    float taxRate, _netSalary, _taxAmount;
    int salary;

    printf("Enter your Salary: ");
    scanf("%d", &salary);

    printf("Enter Tax Rate: ");
    scanf("%f", &taxRate);

    _taxAmount = salary * taxRate;
     printf("The tax amount for your salary is: %.2f\n",_taxAmount);

     _netSalary = salary - _taxAmount;
    printf("Your Net Salary amount is: %.2f\n \n",_netSalary);
    
};