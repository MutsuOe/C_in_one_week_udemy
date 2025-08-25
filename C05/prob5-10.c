#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
    int i, a[5], j;
    srand((unsigned)time(NULL));

    for(i = 0; i < 5; i++){
        a[i] = rand() % 10 + 1;
        printf("%d\t", a[i]);
    }
    printf("\n\n");

    for(i = 0; i < 5; i++){
        for(j = 0; j < a[i]; j++){
            printf("*");
        }
        printf("\n");
    }
    printf("\n");
    
}