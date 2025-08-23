#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int main(){
    int a, b;
    srand((unsigned)time(NULL));
    a = rand() % 100 + 1;

    printf("点数： %d\n", a);

    if(a >= 80) printf("優\n");
    else if (a >= 70) printf("良\n");
    else if (a >= 60) printf("可\n");
    else printf("不可\n");

}