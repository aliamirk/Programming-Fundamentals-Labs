#include <stdio.h>
#include <string.h>

int main() {
    char str[100], reversed[100];
    int i, length, isPalindrome = 1;

    printf("Enter a string: ");
    scanf("%s", str);

    length = strlen(str);

    // Reverse the string
    for(i = 0; i < length; i++) {
        reversed[i] = str[length - 1 - i];
    }
    reversed[length] = '\0';

    for(i = 0; i < length; i++) {
        if(str[i] != reversed[i]) {
            isPalindrome = 0;  // Not a palindrome
            break;
        }
    }

    // Output the result
    if(isPalindrome) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}
