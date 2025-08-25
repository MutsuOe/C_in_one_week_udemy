#include <stdio.h>

int main(){
    int i;
    double d[4] = {1.2, -1.3, 5.2, 4.8};

    for(i=0; i < 4; i++){
        printf("d[%d] = %.1f\t", i, d[i]);
    }
    printf("\n");

}