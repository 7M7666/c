#include <stdio.h>

int main(int argc,const char *argv[])
{
   double number, a, b;

    printf("请输入一个浮点数: ");
    scanf("%lf", &number);

    // 提取整数部分
    a = (int)number;

    // 计算小数部分
    b = number - a;

    // 输出结果
    printf("整数部分是: %d\n", (int)a);
    printf("小数部分是: %.2f\n", b);

    return 0;
}
