#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    srand((unsigned)time(NULL));
    n = rand() % 10 + 1;
    printf("n: %d\n", n);

    if(n==1) printf("１です。\n");
    else printf("１ではありません\n");

}