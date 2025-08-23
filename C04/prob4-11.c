#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
    int n, i, max = 0;
    srand((unsigned)time(NULL));

    for(i = 0; i < 5; i++){
        n = rand() % 100 +1;
        printf("%d\n", n);

        if(n >= max) max = n;
    }

    printf("最大値：%d\n", max);
    
}