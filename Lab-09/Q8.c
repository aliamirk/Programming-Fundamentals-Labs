#include <stdio.h>
#include <string.h>

int isVowel(char c) {
    char vowels[] = "aeiouAEIOU";
    for (int i = 0; vowels[i]; i++) {
        if (c == vowels[i]) return 1;
    }
    return 0;
}

int main() {
    char arr[5][20];
    printf("\n-----------\n");
    for (int i = 0; i < 5; i++) scanf("%s", arr[i]);
    for (int i = 0; i < 5; i++) {
        for (int j = 0; arr[i][j]; j++) {
            if (isVowel(arr[i][j])) arr[i][j] = '*';
        }
        printf("%s\n", arr[i]);
    }
    return 0;
}
