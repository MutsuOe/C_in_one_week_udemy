#include <stdio.h>

double triangle(double, double);

                        
int main(int argc,char** argv){
    double teihen,takasa;	//	底辺と高さを入れる変数
    double menseki;		//	三角形の面積
    printf("底辺=");
    scanf("%lf",&teihen);		//	1つ目の数、aを入力
    printf("高さ=");
    scanf("%lf",&takasa);		//	2つ目の数、bを入力

    printf("面積：%lf\n\n", triangle(teihen, takasa));
    return 0;
}

double triangle(double h, double k){
    return h * k /2.0;
}