#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int main(){
    int a, b;
    srand((unsigned)time(NULL));
    
    a = rand() % 46 - 10;
    printf("%d\n", a);
    
    if(a >= 30) printf("真夏日です。\n");
    else if (25 <= a && a < 30) printf("夏日です。");

    if(a < 0)printf("真冬日です\n");
   

    
    

}