#include <stdio.h>

float calculate(float a, float b, char op) {
    if (op == '+') return a + b;
    if (op == '-') return a - b;
    if (op == '*') return a * b;
    if (op == '/') return a / b;
    return 0;
}

int main() {
    float num1, num2;
    char op;
    scanf("%f %f %c", &num1, &num2, &op);
    printf("%.2f\n", calculate(num1, num2, op));
    return 0;
}
