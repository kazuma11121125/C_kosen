#include <stdio.h>
#define NUMBER 5
int max_of(int v[], int n){
    int i;
    int max = v[0];
    for (i = 1; i < n; i++){
        if (v[i] > max){
            max = v[i];
        }
    }
    return max;
}

int min_of(int v[], int n){
    int i;
    int min = v[0];
    for (i = 0; i < n; i++){
        if (v[i] < min){
            min = v[i];
        }
    }
    return min;
}

int main(void){
    int i;
    int eng[NUMBER];
    int mat[NUMBER];
    int max_e, max_m;
    int min_e, min_m;
    printf("%d人の人数を入力してください。\n", NUMBER);
    for (i = 0; i < NUMBER; i++){
        printf("%d人目\n英語:",i +1);
        scanf("%d",&eng[i]);
        printf("数学:");
        scanf("%d",&mat[i]);
    }
    max_e = max_of(eng, NUMBER);
    max_m = max_of(mat, NUMBER);
    min_e = min_of(eng, NUMBER);
    min_m = min_of(mat, NUMBER);
    printf("---結果---\n英語の最高得点:%d\n英語の最低得点:%d\n------\n",max_e,min_e);
    printf("数学の最高得点:%d\n数学の最低得点:%d\n",max_m,min_m);
    printf("分布\n");
}