#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    srand((unsigned)time(NULL));
    n = rand() % 3 + 1;
    printf("n: %d\n", n);

    if(n == 1) printf("グー\n");
    else if (n == 2) printf("パー\n");
    else printf("チョキ\n");

}