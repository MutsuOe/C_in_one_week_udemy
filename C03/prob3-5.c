#include <stdio.h>

int main(){
    int a;
    printf("整数：");
    scanf("%d", &a);

    if( 20 <= a && a < 80){
        printf("２０以上８０未満\n");
    }
}