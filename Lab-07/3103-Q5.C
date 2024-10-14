#include <stdio.h>

int main(){
	int i, vowels = 0, consonants = 0;
	char userStr[100];
	printf("Enter a statement: ");
	scanf("%99[^\n]", &userStr);
	
	for (i=0; userStr[i] != '\0'; i++){
		char ch = userStr[i];
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            vowels++;
        } else {
            consonants++;
        }
    }
    
    printf("Number of vowels: %d\n", vowels);
    printf("Number of consonants: %d\n", consonants);
}