#include <stdio.h>
#include <ctype.h>

void toUpperCase(char *str) {
    for (int i = 0; str[i]; i++) str[i] = toupper(str[i]);
}

int main() {
    char str[100];
    scanf("%s", str);
    toUpperCase(str);
    printf("%s\n", str);
    return 0;
}
