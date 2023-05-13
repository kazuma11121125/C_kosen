#include <stdio.h>

int main(void)
{
    int i;
    double a[2];
    double result;
    printf("２つの整数を入力してください\n");
    for (i = 0; i <= 1; i++)
    {
        printf("%d回目:", i + 1);
        scanf("%lf", &a[i]);
    }
    result = a[0] / a[1]*100;
    printf("%f%%",result);

}