#include <stdio.h>
#include <stdbool.h>

char grid[5][5] = {
        {' ', ' ', 'I', 'X', ' '},
        {' ', 'X', ' ', ' ', ' '},
        {'I', ' ', 'X', 'X', ' '},
        {' ', ' ', ' ', 'I', 'X'},
        {' ', 'X', ' ', ' ', 'P'}
    };
    
int posrow= 4;
int poscol = 4;
int prevrow =4;
int prevcol = 4;

void printgrid() {
    int i, j;
    for(i = 0; i < 5; i++) {
        printf("{");
        for(j = 0; j < 5; j++) {
            if(j!=4){
                printf("%c|", grid[i][j]);
            }else{
                printf("%c", grid[i][j]);
            }
        }
        printf("}\n");
    }
}

bool validatemove(char input){
    
    int row=posrow,col=poscol;
    
    if(input=='w' || input=='W'){
        row = posrow-1;
    }else if(input=='a'||input=='A'){
        col = poscol-1;
    }else if(input=='s'||input=='S'){
        row= posrow+1;
    }else if(input=='d'||input=='D'){
        col = poscol+1;
    }
    
    if (row>4 || col>4 || row<0 ||col<0){
        return false;
    }else if(grid[row][col]=='X'){
        return false;
    }else{
        prevrow = posrow;
        prevcol = poscol;
        posrow = row;
        poscol = col;
        return true;
    }
}

void updategrid(){
    grid[posrow][poscol] = 'P';
    grid[prevrow][prevcol] = ' ';
    
}

int main() {

    char input = ' ';
    
    while(input != 'q' && input != 'Q') {
        
        printgrid();
        printf("Enter a move (W: up, S: down, A: left, D: right, Q: quit): ");
        scanf(" %c", &input);
        if(validatemove(input)==true){
            updategrid();
        }
    }

    return 0;
}