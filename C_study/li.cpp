#include <stdio.h>

int main(void){
    int a;
    printf("データ数:");
    scanf("%d",&a);
    int v[a];
    int p;
    for (int i=0; i<a; i++){
        printf("%d番:",i+1);
        scanf("%d",&p);
        v[i] = p;
    }
    //表示
    printf("{");
    for(int i=0; i<a-1; i++){
        printf("%d, ",v[i]);
    }
    printf("%d}\n",v[a-1]);
}  