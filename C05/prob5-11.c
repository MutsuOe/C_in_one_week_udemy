#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
    int i, a[10];
    srand((unsigned)time(NULL));

    for(i = 0; i < 5; i++){
        a[i] = rand() % 100 + 1;
        printf("%d\t", a[i]);
    }
    printf("\n\n");

    printf("0以上60未満：");
    for(i = 0; i < 5; i++){
        if(0 <= a[i] && a[i] < 60) printf("%d ", a[i]);
    }
    printf("\n60以上80未満の数：");
    for(i = 0; i < 5; i++){
        if(60 <= a[i] && a[i] < 80) printf("%d ", a[i]);
    }
    printf("\n80以上の数：");
    for(i = 0; i < 5; i++){
        if(80 <= a[i] ) printf("%d ", a[i]);
    }
    printf("\n");
    
}