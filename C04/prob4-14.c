#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
    int n, i;
    srand((unsigned)time(NULL));
    n = rand() % 10 +1;

    if(n %2 == 0){
        for(i=1; i<=n; i++) printf("★\t");
        printf("\n");
    }else{
        for(i=1; i<=n; i++) printf("☆\t");
        printf("\n");
    }

    
}