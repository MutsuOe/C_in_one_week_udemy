#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    srand((unsigned)time(NULL));
    n = rand() % 100 + 1;
    printf("n: %d\n", n);

    if(n < 50) printf("５０未満です。\n");
    else printf("５０以上です。\n");

}