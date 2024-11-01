#include <stdio.h>
#include <string.h>

int n;

void compressWords(char wordArray[][20], int n);

int main() {
    // Define Array
    int i;
    printf("Enter the Number of Words: ");
    scanf("%d", &n);
    
    char words[n][20]; // Define 2D array to hold the words
    for (i = 0; i < n; i++) {
        if (i == 0) getchar(); // Clear NewLine Character
        // Input Words
        printf("Enter Word-%d: ", i + 1);
        fgets(words[i], 20, stdin);
        words[i][strcspn(words[i], "\n")] = '\0'; // Remove the newline character
    }

    printf("\nYou entered:\n");
    for (i = 0; i < n; i++) {
        printf("%s\n", words[i]);
    }

    compressWords(words, n); // Pass the array and its size

    printf("\nCompressed Words:\n");
    for (i = 0; i < n; i++) {
        printf("%s\n", words[i]); // Print the compressed words
    }

    return 0;
}

void compressWords(char wordArray[][20], int n) {
    int i, j, k;
    
    for (i = 0; i < n; i++) { // Loop Over Each Word
        char temp[20]; // Temp array to hold compressed word
        k = 0; // Index for temp array
        
        for (j = 0; wordArray[i][j] != '\0'; j++) { // Loop Over Each Character of the word 
            if (j == 0 || wordArray[i][j] != wordArray[i][j - 1]) { // Check if the character is different from the previous one
                temp[k] = wordArray[i][j]; // Copy the character from wordArray to temp
                k++;

            }
        }
        temp[k] = '\0'; // terminate the temp array
        strcpy(wordArray[i], temp); // Copy compressed word back to the original array
    }
}
