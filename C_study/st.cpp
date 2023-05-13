#include <stdio.h>

int main(void){
    int i;
    int a[3] = {17 ,23 ,36};
    int b[3];
    int j = 2;
    for (int i = 0; i <3; i++){
        b[i] = a[j];
        j--;
    }
    puts("a  b\n-----");
    for (int i = 0; i<3; i++){
        printf("%d %d\n",a[i],b[i]);
    }    
}