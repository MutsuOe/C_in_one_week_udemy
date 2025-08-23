#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int n, i;
    srand((unsigned)time(NULL));
    n = rand() % 10 + 1;
    printf("数：%d\n\n", n);

    i = 1;
    do{
        printf("*");
        i++;
    }while(i <= n);
    printf("\n");


    
}