#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    srand((unsigned)time(NULL));
    n = rand() % 21 - 10;
    printf("n: %d\n", n);

    if(n < 0) printf("負の値です\n");
    else if (n > 0) printf("正の値です\n");
    else printf("0です\n");

}