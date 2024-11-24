#include <stdio.h>
#include <string.h>

int main() {
    char words[5][20];
    for (int i = 0; i < 5; i++) scanf("%s", words[i]);
    for (int i = 0; i < 5; i++) {
        int len = strlen(words[i]), isPalindrome = 1;
        for (int j = 0; j < len / 2; j++) {
            if (words[i][j] != words[i][len - j - 1]) {
                isPalindrome = 0;
                break;
            }
        }
        printf("%s\n", isPalindrome ? "Palindrome" : "Not Palindrome");
    }
    return 0;
}
