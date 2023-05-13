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
    do {
        scanf("%d", &num);
        if (num < 1 || num > NUMBER) {
            printf("1〜%dで入力してください。\n", NUMBER);
        }
    } while (num < 1 || num > NUMBER);

    printf("%d人の人数を入力してください\n", num);
    for (i = 0; i < num; i++) {
        printf("%2d番:", i + 1);
        do {
            scanf("%d", &tesu[i]);
            if (tesu[i] < 0 || tesu[i] > 100) {
                printf("0~100で入力してください:\n");
            }
        } while (tesu[i] < 0 || tesu[i] > 100);
        bunpu[tesu[i] / 10]++;
    }

    for (int i = 1; i < 10; i++) {
        if (bunpu[i] > max) {
            max = bunpu[i];
        }
    }

    // 横方向のグラフを描画する
    printf("分布グラフ\n");
    for (i = max; i > 0; i--) {
        for (j = 0; j <= 10; j++) {
            if (bunpu[j] >= i) {
                printf("*  ");
            } else {
                printf("   ");
            }
        }
        printf("\n");
    }
    printf("--------------------------------\n");
    printf("0 10 20 30 40 50 60 70 80 90 100\n");
    return 0;
}