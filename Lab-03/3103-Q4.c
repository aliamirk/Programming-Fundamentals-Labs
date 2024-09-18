#include <stdio.h>

int main(){
    int length, width, Area;
    
    printf("Enter Length of Rectangle: ");
    scanf("%d",&length);

    printf("Enter Width of Rectangle: ");
    scanf("%d",&width);

    Area = length * width;
    printf("\nThe area of rectangle is: %d\n",Area);
};
