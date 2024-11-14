#include <stdio.h>

int main(int argc, const char *argv[])
{
    int scores[4]; // 存储成绩
    double sum = 0; // 计算成绩和
    printf("请输入四门课的成绩\n");
    for (int i = 0; i < 4; i++)
    {
        scanf("%d", &scores[i]); // 使用 &scores[i] 来获取地址
    }
    for (int i = 0; i < 4; i++)
    {
        sum += scores[i];
    }
    sum = sum / 4.0; // 平均成绩
    printf("这四门课的成绩是\n");
    for (int i = 0; i < 4; i++)
    {
        printf("%d\n", scores[i]);
    }
    printf("这四门课的平均成绩是%.2f\n", sum);
    return 0;
}
