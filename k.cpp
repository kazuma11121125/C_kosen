#include <stdio.h>

int main(void) {
    puts("  |  1  2  3  4  5  6  7  8  9");
    puts("--|---------------------------");
    for (int x = 1; x < 10; x++) {
        printf("%d | ", x);
        for (int i = 1; i < 10; i++) {
            printf("%2d ", x * i);
        }
        puts("");
    }
    return 0;
}