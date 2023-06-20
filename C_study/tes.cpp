#include <stdio.h>
#define number 7

int main(void){
    int i,t;
    int y[number];
    int x[number];

    for(i =0; i < number; i++){
        printf("x[%d]:",i);
        scanf("%d",&x[i]);
    }
    int num = number;
    for (i = 0; i < number; i++){
        y[i] = x[num];
        num -1;
    }

}