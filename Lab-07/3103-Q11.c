#include <stdio.h>

int main() {
    char str[100];
    int count = 0, i = 0;

    printf("Enter a string: ");
    scanf("%[^\n]", str);  // Accepts the whole line including spaces

    // Count whitespace characters
    while(str[i] != '\0') {
        if(str[i] == ' ') {
            count++;
        }
        i++;
    }

    printf("Number of whitespace characters: %d\n", count);

    return 0;
}
