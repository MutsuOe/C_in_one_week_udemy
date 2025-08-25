#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
    int a[6], i;
    srand((unsigned)time(NULL));

    for(i=0; i < 6; i++){
        a[i] = rand() % 10 + 1;
    }
    for(i = 0; i < 6; i++){
        printf("a[%d] = %d\t", i, a[i]);
    }
    printf("\n");

}