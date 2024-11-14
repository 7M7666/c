#include <stdio.h>
//99乘法表
int main(int argc,const char *argv[])
{

    int i, j;
    for(i = 1; i <= 9; i++) {
        for(j = 1; j <= i; j++) {
            printf("%d*%d=%-2d ", j, i, i*j); // 使用%-2d来左对齐并占用两个字符宽度
        }
        printf("\n");
    }


   return 0;
}
