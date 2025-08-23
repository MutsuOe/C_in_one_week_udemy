#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int main(){
    int a, b;
    srand((unsigned)time(NULL));
    a = rand() % 100 + 1;

    printf("%d\n", a);

    if(a % 2 == 0 && a % 3 == 0) printf("2と3の公倍数です。\n");
    else if (a % 2 == 0) printf("2の倍数です。\n");
    else if (a % 3 == 0) printf("3の倍数です。\n");


}