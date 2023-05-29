#include <stdio.h>

#define spr(x) ((x) * (x))

int main(void){
    int n;
    double x;

    printf("整数を入力してください：");
    scanf("%d",&n);
    printf("その数の2乗は%dです。\n",spr(n));

    printf("実数を入力してください。:");
    scanf("%lf",&x);
    printf("その数の2乘は%fです。\n",spr(x));
    return 0;
}