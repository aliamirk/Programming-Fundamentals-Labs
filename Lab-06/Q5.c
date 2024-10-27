#include <stdio.h>

int main(){
    int i, noWays, noPeople;
    noWays = 1;
    
    printf("Enter the number of participants: ");
    scanf("%d", &noPeople);
    i = noPeople;

    while (i>0){
        noWays = noWays * i;
        i -= 1;
    }
    printf("The total number of ways to arrange %d participants are :%d", noPeople, noWays);
}