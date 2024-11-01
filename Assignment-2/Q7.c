#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

bool validatestring(char arr[6][5], char *string) {
    int len = strlen(string);
    int horizontal = 5 - len;
    int vertical = 6 - len;
    int count, i, j;
    int index = 0;


    if (len > 6) {
        return false;
    }

    if (horizontal >= 0) {
        while (index <= horizontal) {
            for (j = 0; j < 6; j++) {
                count = 0;
                for (i = 0; i < len; i++) {
                    if (arr[j][index + i] == string[i]) {
                        count++;
                    } else {
                        break;  
                    }
                }
                if (count == len) {
                    return true;
                }
            }
            index++;
        }
    }

    index = 0; 

    
    if (vertical >= 0) {
        while (index <= vertical) {
            for (j = 0; j < 5; j++) {
                count = 0;
                for (i = 0; i < len; i++) {
                    if (arr[index + i][j] == string[i]) {
                        count++;
                    } else {
                        break;  
                    }
                }
                if (count == len) {
                    return true;
                }
            }
            index++;
        }
    }

    return false;  
}

int main() {
    char grid[6][5];
    int i,j;
    char word[100];
    int score=0;
    
    for(i=0;i<6;i++){
        for(j=0;j<5;j++){
            grid[i][j] = 'a' + (rand() % 26);
        }
    }
    
    grid[5][0] = '0';
    grid[5][1] = '5';
    grid[5][2] = '5';
    grid[5][3] = '8';
    
    for(i=0;i<6;i++){
        for(j=0;j<5;j++){
            printf(" %c",grid[i][j]);
        }
        printf("\n");
    }
    
    while(strcmp(word,"end")!=0){
        
        printf("enter a word:");
        scanf("%s",word);
        if(validatestring(grid,word)==true){
            printf("The provided word was found in the grid\n");
            score++;
            printf("score: %d\n",score);
        }
        
    
    }
    return 0;
}