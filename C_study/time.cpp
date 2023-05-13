/* localtime.c: 今日の日時を表示する */
#include <stdio.h>
#include <time.h>
#include <unistd.h>
int main(void)
{
    time_t timer;        /* 時刻を取り出すための型（実際はunsigned long型） */
    struct tm *local;    /* tm構造体（時刻を扱う */
 
    while(true)
        {
            /* 年月日と時分秒保存用 */
            int year, month, day, hour, minute, second;
            
            timer = time(NULL);        /* 現在時刻を取得 */
            local = localtime(&timer);    /* 地方時に変換 */
        
            year = local->tm_year + 1900;        /* 1900年からの年数を取得 */
            month = local->tm_mon + 1;        /* 0を1月としている*/
            day = local->tm_mday;
            hour = local->tm_hour;
            minute = local->tm_min;
            second = local->tm_sec;
        
            /* 現在の日時を表示 */
            printf("%02d/%02d/%02d %02d.%02d.%02d\n", year, month, day, hour, minute, second);
            sleep(1);
        }
} 