#include <stdio.h>

int main(void) {
    int num_rows;
    printf("段数: ");
    scanf("%d", &num_rows);

    int max_width = (num_rows - 1) * 2 + 1;
    for (int row = 1; row <= num_rows; row++) {
        int asterisks = (row - 1) * 2 + 1;
        int spaces = max_width - asterisks;
        for (int i = 0; i < spaces / 2; i++) {
            printf(" ");
        }
        for (int i = 0; i < asterisks; i++) {
            printf("*");
        }
        for (int i = 0; i < spaces / 2; i++) {
            printf(" ");
        }
        printf("\n");
    }

    return 0;
}