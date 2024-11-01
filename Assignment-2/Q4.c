#include <stdio.h>
#include <string.h>

int main() {
    int n = 6, count, i, j, m;
    char transactions[6][4] = {"eat", "tea", "tan", "ate", "nat", "bat"};
    char current[4], next[4];
    int indexes[3][3] = {{-1, -1, -1}, {-1, -1, -1}, {-1, -1, -1}};

    for (i = 0; i < n; i++) { // Loop Over Each Word
        strcpy(current, transactions[i]);
        int flag = 0;

        for (m = i + 1; m < n; m++) { // Compare with subsequent words
            strcpy(next, transactions[m]);
            count = 0; // Reset for each new comparison

            // Compare characters
            for (j = 0; current[j] != '\0'; j++) {
                for (int k = 0; next[k] != '\0'; k++) {
                    if (next[k] == current[j]) {
                        count++; // Increment Count if the character is present in both words
                    }
                }
            }

            // Check if they are scrambled strings
            if (count == strlen(current) && count == strlen(next)) { // Means they are anagrams  
                printf("Strings \"%s\" and \"%s\" are scrambled strings.\n", current, next);
                flag++;
                
                // Store indexes
                indexes[i][0] = i;
                indexes[i][1] = m; 
                if (flag == 2){
                    indexes[i][2] = m;
                }
            }
        }
    }

    printf("\nScrambled string indexes:\n");
    for (i = 0; i < 3; i++) {
        if (indexes[i][2] > 0){
            printf("{ %s %s %s }", transactions[indexes[i][0]], transactions[1], transactions[indexes[i][2]]);
        } else if (indexes[i][1]>0){
            printf("{ %s %s }", transactions[indexes[i][0]], transactions[indexes[i][1]]);
        } else{
            printf("{ %s }", transactions[indexes[i][0]]);
        }
    }

    return 0;
}
