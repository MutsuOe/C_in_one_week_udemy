#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int n, i;
    srand((unsigned)time(NULL));
    n = rand() % 10 + 1;
    printf("数：%d\n\n", n);

    i = 1;
    while(i <= n){
        printf("*");
        i++;
    }
    printf("\n");

    
}