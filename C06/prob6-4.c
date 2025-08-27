#include <stdio.h>

void numJudge(int);
                         
int main(int argc,char** argv){
    int a;
    printf("整数値を入力してください：");
    scanf("%d",&a);
    numJudge(a);

    return 0;
}

void numJudge(int a){
    
    if(a == 0){
        printf("0です\n");
    }else if(a%2 == 0){
        printf("偶数です\n");
    }else{
        printf("奇数です\n");
    }

}