#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    srand((unsigned)time(NULL));
    n = rand() % 100 + 1;
    printf("n: %d\n", n);

    if(20 <= n && n < 80) printf("20以上80未満です\n");
    else printf("20未満か、80以上です\n");

}