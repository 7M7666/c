#include <stdio.h>

int main(int argc,const char *argv[])
{
    int year, month, day;
    int daysinmonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int totaldays = 0;
    int i;
    //获取年份、月份和日期
    printf("请输入年份: ");
    scanf("%d", &year);
    printf("请输入月份: ");
    scanf("%d", &month);
    printf("请输入日期: ");
    scanf("%d", &day);

    // 判断是否为闰年
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        daysinmonth[2] = 29; // 闰年2月有29天
    }

    // 计算总天数
    for (i = 1; i < month; i++) {
        totaldays += daysinmonth[i];
    }
    totaldays += day;

    // 输出结果
    printf("这一天是%d年的第%d天。\n", year, totaldays);

    return 0;
}
