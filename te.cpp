#include <stdio.h>

#define NUM 5

int main(void)
{
    int i;
    int a[NUM];
    int min,max;

    printf("%d人の点数をはよ書け\n", NUM);
    for(i = 0; i < NUM; i++){
        printf("%d人目 : ",i + 1);
        scanf("%d", &a[i]);
    }
    
    min = max = 0;

    for (i = 0 ; i < NUM ;i++){
        if (a[i] < min){
            min = a[i];
        }
        if (a[i] > max){
            max = a[i];
        }
    }
    printf("最大値 : %d\n最小値 : %d", max, min);
    
    return 0;
}