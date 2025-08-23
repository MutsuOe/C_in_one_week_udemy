#include <stdio.h>

int main(){
    int a;
    printf("整数：");
    scanf("%d", &a);
    
    if(a <= 10 || 90 <= a){
        printf("１０以下か９０以上です。\n");
    }
}