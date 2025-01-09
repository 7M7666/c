#include <stdio.h>

int main(int argc, const char *argv[]) {
    int i, j;

    // 打印99乘法表
    printf("九九乘法表：\n");
    for (i = 1; i <= 9; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d*%d=%-2d ", j, i, i * j); // 使用%-2d来左对齐并占用两个字符宽度
        }
        printf("\n"); // 换行
    }

    return 0;
}