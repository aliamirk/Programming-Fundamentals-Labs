#include <stdio.h>

int main(){
    int total, day, amount;
    total = 0;

    for(day=1; day<8; day++){
        printf("Enter sales for Day %d: ", day);
        scanf("%d", &amount);

        total += amount;
    }

    printf("The total sales for the week are - $%d", total);
    return 0;
}