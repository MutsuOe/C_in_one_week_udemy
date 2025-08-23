#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
    int n, i, min = 1000;
    srand((unsigned)time(NULL));

    for(i = 0; i < 5; i++){
        n = rand() % 100 +1;
        printf("%d\n", n);

        if(n <= min) min = n;
    }

    printf("最小値：%d\n", min);
    
}