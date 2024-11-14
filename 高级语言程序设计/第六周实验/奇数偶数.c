#include <stdio.h>

int main(int argc, const char *argv[])
{
    double q = 1, w = 0;
    int cnt = 0;
    int input;

    printf("请输入一些整数，输入0停止\n");
    while (1)
    {
        scanf("%d", &input);
        if (input == 0)
        {
            break;
        }
        if (input % 2 == 0)
        {
            q *= input;
        }
        else
        {
            w += input;
            cnt++;
        }
    }
    if (cnt > 0)
    {
        w /= cnt;
    }
    printf("偶数的乘积是%.2lf\n", q);
    printf("奇数的平均数是%.2f\n", w);
    return 0;
}
