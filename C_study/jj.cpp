#include <stdio.h> 

int max2(int a, int b, int c)
{
    int max = a;
    if (b < max)
        max = b;
    if (c  < max)
        max = c;
    return max;
}

int main(void)
{
    int a,b,c;

    puts("二つの整数を入力してください。");
    printf("整数1:");
    scanf("%d",&a);
    printf("整数2:");
    scanf("%d",&b);
    printf("整数3:");
    scanf("%d",&c);
    printf("最小値は%dです。\n", max2(a,b,c));
    return 0;
}