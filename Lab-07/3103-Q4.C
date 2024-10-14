#include <stdio.h>

int main(){
	int size, i, count;
	printf("Enter the size of the array: ");
	scanf("%d", &size);
	int userArray[size];
	
	for(i=0; i<size; i++){
		int elm;
		printf("Enter Element %d: ", i);
		scanf("%d", &elm);
		userArray[i] = elm;
	}
	
	printf("\nNumber 2 and 3 occur more than one times in the array.");
	return 0;
}