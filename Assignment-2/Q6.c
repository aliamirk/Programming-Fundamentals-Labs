#include <stdio.h>

int firstmove(int num) {
    if (num % 5 == 0) {
        return -1;
    }else {
        return num % 5;
    }
}

int main() {
    int num;
    printf("Enter the number of matchsticks: ");
    scanf("%d", &num);

    int result = firstmove(num);
    if (result == -1) {
        printf("It's impossible for A to guarantee a win.\n");
    }else {
        printf("A should pick %d matchsticks on his first turn to guarantee a win.", result);
    }

    return 0;
}