#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int i, d[10];
    srand((unsigned)time(NULL));
    for(i = 0; i < 10; i++){
        d[i] = rand() % 10 + 1;
        printf("%d ", d[i]);
    }
    printf("\n");

    printf("奇数：");
    for(i = 0; i < 10; i++){
        if(d[i]%2 != 0) printf("%d ", d[i]);
    }
    printf("\n");
    printf("偶数：");
    for(i = 0; i < 10; i++){
        if(d[i]%2 == 0) printf("%d ", d[i]);
    }
    printf("\n");

}