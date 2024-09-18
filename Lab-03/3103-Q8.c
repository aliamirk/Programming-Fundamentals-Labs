#include <stdio.h>


int main(){
    int item1,item2,item3,total;
    total = 0;

    printf("Enter cost of item 1: ");
    scanf("%d", &item1);
    total = total + item1;

    printf("Enter cost of item 3: ");
    scanf("%d", &item2);
    total = total + item2;

    printf("Enter cost of item 3: ");
    scanf("%d", &item3);
    total = total + item3;

    printf("The total cost of items is: %d\n", total);

    return 0;
};