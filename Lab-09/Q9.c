#include <stdio.h>

int power(int base, int exp) {
    int result = 1;
    for (int i = 0; i < exp; i++) result *= base;
    return result;
}

int main() {
    int base, exp;
    scanf("%d %d", &base, &exp);
    printf("%d\n", power(base, exp));
    return 0;
}
