#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
    int i, j, a[3][3];
    srand((unsigned)time(NULL));
    int max = 0, min = 10;

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            a[i][j] = rand() % 9 + 1;
            printf("%d ", a[i][j]);
            if(a[i][j] > max) max = a[i][j];
            if(a[i][j] < min) min = a[i][j];
        }
        printf("\n");
    }
    printf("最大値：%d\n", max);
    printf("最小値：%d\n", min);
    
}