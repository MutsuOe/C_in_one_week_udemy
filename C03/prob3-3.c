#include <stdio.h>

int main(){
    int a;
    printf("整数：");
    scanf("%d", &a);

    if(a < 50){
        printf("50未満\n");
    }
}