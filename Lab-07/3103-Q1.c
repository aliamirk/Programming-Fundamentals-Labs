#include <stdio.h>

int main(){
	int sum, num, i;
	int userArray[9];
    sum = 0;
	
	for(i=1; i<10; i++){
		printf("(%d) - Enter Numbers from (1 to 9): ", i);
		scanf("%d", &num);
		userArray[i] = num;
		sum = sum + num;
	}
	printf("\nThe sum is: %d\n", sum);
	return 0;
}