#include <stdio.h>

int main(void)
{
    int num;
    
    num = 4;
    int max_width = 1+(num-1)*2;

    for(int i = 0; i < num; i++)
    {
            int width = i*2+1;
            int sp = max_width-width;
            int spe = sp/2;
            for (int c = 0; spe >c; c++){
                printf(" ");
            }
            for (int h = 0; width>h; h++){
                printf("*");
            }
            for (int j =0; spe> j; j++){
                printf(" ");
            }
    printf("\n");
    }
}