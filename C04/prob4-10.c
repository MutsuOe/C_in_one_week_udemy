#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
    int n;
    srand((unsigned)time(NULL));

    int i;

    for(i = 0; i < 5; i++){
        n = rand() % 100 +1;
        printf("%d\n", n);
    }
    
}