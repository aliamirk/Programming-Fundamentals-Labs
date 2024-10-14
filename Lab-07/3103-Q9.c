#include <stdio.h>

int main() {
    char input[100];

    printf("Enter a string :\n");
    scanf("%[^0-9]", input);

    printf("Filtered string: %s\n", input);

    return 0;
}
