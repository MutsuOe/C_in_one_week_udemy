#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
    int i, a[5];
    srand((unsigned)time(NULL));

    for(i = 0; i < 5; i++){
        a[i] = rand() % 21 - 10;
        printf("%d\t", a[i]);
    }
    printf("\n\n");

    int cnt = 0;
    for(i = 0; i < 5; i++){
        if(a[i] > 0) cnt += 1;
    }
    printf("0より大きい数：%d個\n", cnt);

    cnt = 0;
    for(i = 0; i < 5; i++){
        if(a[i] < 0) cnt += 1;
    }
    printf("0より小さい数：%d個\n", cnt);
    cnt = 0;
    for(i = 0; i < 5; i++){
        if(a[i] == 0) cnt += 1;
    }
    printf("0の個数：%d個\n", cnt);



}