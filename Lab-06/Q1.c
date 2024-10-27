#include <stdio.h>

// Using do-while loop because it iterates atleast once.

int main(){
    int i, num, sum;
    sum = 0;
    do {
        printf("\n Enter any number: ");
        scanf("%d", &num);

        if (num != 0){
            sum += num;
            printf("The Sum is: %d \n", sum);
        } else{
            printf("Program Exited");
            return 1;
        }

    } while (num != 0);
    return 0;
}

// Enter a number to add to sum