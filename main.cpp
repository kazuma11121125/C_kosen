#include <stdio.h>
#include <unistd.h>
#include <time.h>
int main(void)
{   
    int ret;
    printf("system start\n");
    do {
            int no;
            int ts;
            int tst;
            int ret = 0;
            int i,u;//for
            printf("loop test inpurt\n");
            scanf("%d", &no);
            if (no >= 1000)
                {
                    printf("oh! The numbers are big, and it takes time, okay?\nOK・・・0\nNo・・・1\n");
                    scanf("%d",&ts);
                    switch (ts)
                        {
                        case 0 :{
                            printf("100I'm really going to do it, okay?\nOK・・・0\nNo・・・1\n");
                            scanf("%d",&tst);
                            switch (tst)
                                {   
                                    case 0 : printf("OK....start\n"); ret = 0;
                                    case 1 : ret = 1; printf("\n");
                                }
                            }
                        case 1 : ret = 1; printf("\n");
                        }
                }
            if(ret ==0)
                {
                    for (i = 0; i <=no; i++)
                        {
                            printf("1:%d\n",i);
                        }
                }
                printf("----\nloop restart?\nYes・・0\nNo・・1\n");
                scanf("%d",&ret);
        }
        while (ret==0);
        printf("Finish Googbye!");
        
    
    
}