#include <stdio.h>

int main(){
	int sum, num, i;
	int userArray[9];
	
	for(i=1; i<10; i++){
		printf("Enter Numbers from (1 to 9): ");
		scanf("%d", &num);
		userArray[i] = num;
		sum = sum + num;
	}
	printf("\nThe sum is: %d", sum);
	return 0;
}