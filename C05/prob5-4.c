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

    printf("5以上の数：");
    for(i = 0; i < 10; i++){
        if(d[i] >= 5) printf("%d ", d[i]);
    }
    printf("\n");
    printf("5未満の数：");
    for(i = 0; i < 10; i++){
        if(d[i] < 5 ) printf("%d ", d[i]);
    }
    printf("\n");

}