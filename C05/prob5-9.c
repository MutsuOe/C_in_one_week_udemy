#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
    int i, a[10];
    srand((unsigned)time(NULL));

    for(i = 0; i < 10; i++){
        a[i] = rand() % 100 + 1;
        printf("%d\t", a[i]);
    }
    printf("\n\n");

    printf("50以上の数：");
    for(i = 0; i < 10; i++){
        if(a[i] >= 50) printf("%d\t", a[i]);
    }
    printf("\n50未満の数：");
    for(i = 0; i < 10; i++){
        if(a[i] < 50) printf("%d\t", a[i]);
    }
    printf("\n");
    
}