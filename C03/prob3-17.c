#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int main(){
    int a, b;
    srand((unsigned)time(NULL));
    a = rand() % 100 + 1;

    printf("%d\n", a);

    if(a <= 50){
        if(a % 2 == 0) printf("50以下の偶数です。");
        else printf("50以下です。\n");
    }else{
        if(a % 2 == 0)printf("偶数です。");
    }
    

}