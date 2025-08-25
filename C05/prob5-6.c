#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
    int i, data[10];
    srand((unsigned)time(NULL));

    for(i = 0; i < 10; i++){
        data[i] = rand() % 10 + 1;
        printf("%d ", data[i]);
    }
    printf("\n\n");

    int min = 10, max = 0;

    for(i = 0; i < 10; i++){
        if(data[i] < min) min = data[i];
        if(data[i] > max) max = data[i];
    }

    printf("最大値：%d\n", max);
    printf("最小値：%d\n", min);

}