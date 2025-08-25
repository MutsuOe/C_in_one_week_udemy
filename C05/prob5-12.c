#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
    int i, j, a[3][3];
    srand((unsigned)time(NULL));

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            a[i][j] = rand() % 9 + 1;
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    printf("\n");
    
}