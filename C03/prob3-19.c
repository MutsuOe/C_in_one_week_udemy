#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int main(){
    int y;
    printf("西暦：");
    scanf("%d", &y);

    if(y<=0){
        printf("異常な値です。\n");
    }else{
        if(y % 400 == 0){
            printf("閏年です。\n");
        }else if(y % 100 == 0){
            printf("閏年ではありません。\n");
        }else if(y % 4 == 0){
            printf("閏年です。\n");
        }
    }

}