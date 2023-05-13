#include <stdio.h>

int sump(int s){
    int a = 0;
    for (int i = 1; i <=s; i++)
        a = a+i;
    return a;
}


int main(void){
    int s;
    puts("数値を入れてください。");
    scanf("%d",&s);
    printf("1からの和は%dです\n",sump(s));    
}
