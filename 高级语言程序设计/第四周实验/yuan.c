#include <stdio.h>
#define PI 3.1415926

int main() {
    double r = 0, c = 0, s = 0, v = 0, s1 = 0;

    // 输入球的半径
    printf("请输入球的半径（必须为正数）: ");
    while (1) {
        if (scanf("%lf", &r) == 1 && r > 0) {
            break;  // 输入有效，跳出循环
        } else {
            // 清除错误输入
            while (getchar() != '\n');
            printf("输入无效，请输入一个正数: ");
        }
    }

    // 计算
    c = 2 * PI * r;            // 圆的周长
    s1 = PI * r * r;           // 圆的面积
    s = 4.0 * PI * r * r;      // 球的表面积
    v = (4.0 / 3) * PI * r * r * r;  // 球的体积

    // 输出结果
    printf("\n计算结果如下：\n");
    printf("圆的周长是: %.2f\n", c);
    printf("圆的面积是: %.2f\n", s1);
    printf("球的表面积是: %.2f\n", s);
    printf("球的体积是: %.2f\n", v);

    return 0;
}