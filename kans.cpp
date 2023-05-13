#include <stdio.h>

int min3(int a, int b, int c)
{
    int min =a;
    if (b <min){
        min =b;
    }
    if (c <min){
        min = c;    
    }
    return min;
}

int main(void)
{
    int a, b, c;
    puts("3つの整数を入れてください。");
    printf("整数1:");
    scanf("%d",&a);
    printf("整数2:");
    scanf("%d",&b);
    printf("整数3:");
    scanf("%d",&c);
    printf("最小値は%dです。\n", min3(a,b,c));
    return 0;
}