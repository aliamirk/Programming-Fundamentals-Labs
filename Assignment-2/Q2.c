#include <stdio.h>

int main(){
    char *slogans[] = {"buy now", "save big", "limited offer"};
    int chArray[26], freq1[26], freq2[26], freq3[26], i, j, k, asciiValue;
    
    // Fill the array with ASCII values for 'a' to 'z' and initialize frequencies to 0 for all characters
    for (k = 0; k < 26; k++) {
        chArray[k] = 97 + k;
        freq1[k] = 0;
        freq2[k] = 0;
        freq3[k] = 0;
    }

    for (i = 0; i < 3; i++){
        if (i == 0){  
            for (j = 0; slogans[i][j] != '\0'; j++){
                asciiValue = (int)slogans[i][j];
                if (asciiValue >= 97 && asciiValue <= 122) // only lowercase letters
                    freq1[asciiValue - 97]++;
            }
        } else if (i == 1){
            for (j = 0; slogans[i][j] != '\0'; j++){
                asciiValue = (int)slogans[i][j];
                if (asciiValue >= 97 && asciiValue <= 122)
                    freq2[asciiValue - 97]++;
            }
        } else {
            for (j = 0; slogans[i][j] != '\0'; j++){
                asciiValue = (int)slogans[i][j];
                if (asciiValue >= 97 && asciiValue <= 122)
                    freq3[asciiValue - 97]++;
            }
        }
    }

    // Output the frequencies for each slogan
    printf("\nFirst Slogan Character Frequencies ---------\n");
    for (i = 0; i < 26; i++){
        if (freq1[i] > 0){
        printf("%c: %d, ", chArray[i], freq1[i]);
        }
    }
    printf("\n");
    printf("\nSecond Slogan Character Frequencies ---------\n");
    for (i = 0; i < 26; i++){
        if (freq2[i] > 0){
            printf("%c: %d, ", chArray[i], freq2[i]);
        }    
    }
    printf("\n");
    printf("\nThird Slogan Character Frequencies ---------\n");
    for (i = 0; i < 26; i++){
        if (freq3[i] > 0){
            printf("%c: %d ", chArray[i], freq3[i]);
        }   
    }
    printf("\n \n");

    return 0;
}
