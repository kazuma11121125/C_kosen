#include <stdio.h>

void set_zero(int v[], int n){
    int i;
    for (i = 0; i< n; i++){
        v[i] = 0; 
    }
}

void print_array(const int v[], int n)
{
    int i;
    printf("{");
    for (i =0; i < n; i++){
        printf("%d", v[i]);
    }
    printf("}");
}

int main(void)
{
    int ary[] = {1, 2, 3, 4, 5,};
    int ary2[] = {3 ,2 ,1};
    printf("ary1");
}