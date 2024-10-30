#include <stdio.h>

int main(){
    int userArray[5];
    int i, j, sml, secSml;
    int smlIndex = 0;
    sml = 9999;
    secSml = 9999; 

    for (i=0; i<5; i++){
        printf("Enter Element %d: ", i);
        scanf("%d", &userArray[i]);

        if (userArray[i] < sml){
            sml = userArray[i];
            smlIndex = i;
        }
    }

    for(j=0; j<5; j++){
        if (j != smlIndex){
            if (userArray[j] < secSml){
            secSml = userArray[j];
        }
        }
    }

    printf("\nThe Second Smallest Element in the Array is: %d\n", secSml);

}