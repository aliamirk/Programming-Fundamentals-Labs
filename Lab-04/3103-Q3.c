#include<stdio.h>

int main(){
    char InputCh;

    printf("Enter a character: ");
    scanf(" %c", &InputCh);

    if (InputCh >= 'A'  && InputCh <= 'Z'){
        printf("Character is a UpperCase Alphabet\n");
    } else if (InputCh >= 'a' && InputCh <= 'z'){
        printf("Character is a LowerCase Alphabet\n");
    } else if (InputCh >= '0' && InputCh <= '9'){
        printf("Character is a Digit\n");
    } else{
        printf("Character is a Special Symbol\n");
    }
}