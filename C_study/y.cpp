#include <stdio.h>

int main(void)
{
    int put;
    int num;
    printf("整数を入力してください\nA:");
    scanf("%d", &put);
    printf("B:");
    scanf("%d", &num);
    if (num % put)
        {
            printf("BはAの約数です。\n");
        }
    else
        {
            printf("BはAの約数ではありません。\n");
        }
}