#include <stdio.h>

int main() {
    char str[100];

    // Prompt for user input
    printf("Enter a string (stops reading at first space or newline): ");
    
    // Use scanf to read until space or newline
    scanf("%99[^\n ]", str);  // Read until a space or newline is encountered

    // Output the string
    printf("The input string is: %s\n", str);

    return 0;
}
