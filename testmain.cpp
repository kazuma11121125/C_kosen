#include <stdio.h>

int main(void)
    {
        int i;
        int a[3];
        int sum = 0;
        printf("3つの整数を入力してください。\n");
        for (i = 0; i<=2;i++)
            {   
                printf("%d回目:",i+1);
                scanf("%d",&a[i]);
                sum =  sum + a[i];
            }
        printf("それらの和は%dです。\n",sum);           
}