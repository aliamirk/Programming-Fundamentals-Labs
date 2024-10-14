#include <stdio.h>

int main(){
	int num, i, j;
	int userArray[9];
	
	for(i=0; i<9; i++){
		printf("Enter Numbers from (1 to 9): ");
		scanf("%d", &num);
		userArray[i] = num;
	}
	printf("\nAfter reverse order\n");
	for(j=8; j>=0; j--){
		printf("%d\n", userArray[j]);
	}

	return 0;
}