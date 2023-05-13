#include <stdio.h>
#define NUMBER 80
int main(void)
{
    int i, j;
    int num;
    int tesu[NUMBER];
    int bunpu[11] = {0};
    int max = 0;
    printf("人数を入力してください");

    do{
        scanf("%d", &num);
        if (num < 1 || num > NUMBER)
            printf("1〜%dで入力してください。\n", NUMBER);

    } while (num < 1 || num > NUMBER);

    printf("%d人の人数を入力してください\n", num);
    for (i = 0; i < num; i++)
    {
        printf("%2d番:", i + 1);
        do
        {
            scanf("%d", &tesu[i]);
            if (tesu[i] < 0 || tesu[i] > 100)
                printf("0~100で入力してください:\n");

        } while (tesu[i] < 0 || tesu[i] > 100);
        bunpu[tesu[i] / 10]++;
    }
    for (int i = 1; i < 10; i++)
    {
        if (bunpu[i] > max){
            max = bunpu[i];
        }
    }
    for (int fo = max; fo > 0; fo--){
        int ha = 0;
        for (; ha < 9; ha++){
            if (bunpu[ha] == fo){
                printf("*　");
            }
            else{
                printf("　");
            }
        }
        if (ha < 9){
            printf("\n");
        }
        
    }
    printf("\n--------------------------------\n");
    printf("0 10 20 30 40 50 60 70 80 90 100\n");
}