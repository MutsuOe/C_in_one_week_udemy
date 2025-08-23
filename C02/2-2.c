#include <stdio.h>

/*
変数を用いた計算
*/

int main(){
    //使用する変数の定義
    int a;  //変数宣言
    int b = 3;  //宣言と代入
    int add, sub;   //複数の変数を同時に宣言
    double avg;
    a = 6;  //代入（最初の代入を”初期化”という

    add = a + b;
    sub = a - b;
    avg = (a + b) / 2.0 ; //平均，2.0で割らないと，整数同士の商になってしまう（4）
    
    printf("%d + %d = %d\n", a, b, add);
    printf("%d + %d = %d\n", a, b, sub);
    printf("%d と %d の平均値： %f\n", a, b, avg);
    
}