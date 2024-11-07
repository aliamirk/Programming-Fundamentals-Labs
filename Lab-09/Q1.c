#include <stdio.h>
#include <string.h>

int main() {
    char first[100];
    char second[100];
    int n;

    printf("Enter the first string: ");
    scanf("%s", first);

    printf("Enter the second string: ");
    scanf("%s", second);

    printf("Enter the number of characters to append from the source string: ");
    scanf("%d", &n);

    strncat(first, second, n);

    printf("final string: %s\n", first);

    return 0;
}