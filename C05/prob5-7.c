#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
    int i, a[5];
    srand((unsigned)time(NULL));

    for(i = 0; i < 5; i++){
        a[i] = rand() % 10 + 1;
        printf("%d ", a[i]);
    }
    printf("\n\n");

    int sum = 0, avg =0;

    for(i = 0; i < 5; i++){
        sum += a[i];
    }
    avg = sum / 5;

    printf("合計値：%d\n", sum);
    printf("平均値：%d\n", avg);

    printf("\n平均値より大きい数：");
    for(i = 0; i < 5; i++){
        if(a[i] > avg) printf("%d ", a[i]);
    }
    printf("\n平均値より小さい数：");
    for(i = 0; i < 5; i++){
        if(a[i] < avg) printf("%d ", a[i]);
    }
    printf("\n");

}