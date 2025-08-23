#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int main(){
    int a, b;
    srand((unsigned)time(NULL));
    a = rand() % 10 + 1;
    b = rand() % 10 + 1;
    printf("a = %d, b = %d\n", a, b);

    if(a > b) printf("aのほうが大きいです。\n");
    else if (a < b) printf("bのほうが大きいです。\n");
    else printf("等しいです\n");

}