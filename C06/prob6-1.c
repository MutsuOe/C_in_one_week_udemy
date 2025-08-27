#include <stdio.h>
                     
//	関数のプロトタイプ宣言
int add(int,int);

int main(int argc,char** argv){
    int a,b;
    int result;
    printf("a=");
    scanf("%d",&a);		//	1つ目の数、aを入力
    printf("b=");
    scanf("%d",&b);		//	2つ目の数、bを入力
    result = add(a,b);	//	3つ目の数、cを入力
    printf("%d + %d = %d\n",a,b,result);	//	計算結果を出力

    result = sub(a, b);
    printf("%d - %d = %d\n", a, b, result);
    return 0;
}

//	二つの整数の和を求める関数
int add(int n1,int n2){
    return n1 + n2;
}

int sub(int n1,int n2){
    return n1 - n2;
}