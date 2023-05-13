#include <stdio.h>
#include <time.h>

int main(void) {
    // カウントする秒数
    double se;
    puts("please sec");
    scanf("%lf",&se);
    double total_sec = se; 
    double count = 1;
    // 計測開始時間を取得する
    clock_t start = clock();

    for (;;) {
        // 経過時間を取得する
        clock_t end = clock();
        // 差分を取り秒数に変換する
        double sec = (double)(end - start) / CLOCKS_PER_SEC;
        if (sec >= count) {
            printf("%f...\n", sec);  // 経過秒数を出力する
            count += 1;  // カウンターを増加する
        }
        if (sec >= total_sec) {
            break;
        }
    }

    printf("%f \nfinish\n", total_sec);

    return 0;
}