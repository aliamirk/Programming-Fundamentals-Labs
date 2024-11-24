#include <stdio.h>

void swapIntegers(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x, y;
    scanf("%d %d", &x, &y);
    swapIntegers(&x, &y);
    printf("%d %d\n", x, y);
    return 0;
}
