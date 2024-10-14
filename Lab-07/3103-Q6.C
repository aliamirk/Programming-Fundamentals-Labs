#include <stdio.h>

int main(){
    int userArray[10] = {1,2,3,4,5,6,7,8,9,10};
    int searchItem, i;

    printf("Enter an item to search in the array: ");
    scanf("%d", &searchItem);

    for (i=0; i<10; i++){
        if (userArray[i] == searchItem){
            printf("Item found at Index: %d\n", i);
            return 0;
        }
    }
    printf("Item Not Found: -1\n");
    return -1;
}