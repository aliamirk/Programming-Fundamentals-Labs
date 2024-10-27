#include <stdio.h>

int main(){
    int i = 4;
    char num[4];
    printf("Enter any Number: ");
    scanf("%s", &num);

    while (i>1){
        printf("%c", num[i]);
        i -= 1;
    }
    printf("4321");
    return 0;
}