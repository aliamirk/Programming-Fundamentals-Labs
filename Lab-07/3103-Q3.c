#include <stdio.h>

int main(){
	int userArray[10] = {4,1,6,8,10,21,8,9,2,6};
	int max, min, i;
	max = userArray[0];
    min = userArray[0];
	
	for (i=0; i<=9; i++){
		
		if (userArray[i] > max){
			max = userArray[i];
		}
		
		if (userArray[i] < min){
			min = userArray[i];
		}
	}
	printf("\nMaximum Number in Array is: %d", max);
	printf("\nMinimum Number in Array is: %d\n", min);
}