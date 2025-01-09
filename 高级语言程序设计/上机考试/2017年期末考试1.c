
#include <stdio.h>

int isleap(int year)
{
    return (year % 4 == 0 && year % 100!= 0) || (year % 400 == 0);  // 这里补充完整判断闰年的逻辑，原代码少了==0
}

int main(int argc, const char *argv[])
{
    int year, mons, day, sum = 0, days;
    scanf("%d-%d-%d", &year, &mons, &day);  // 格式化输入的分隔符要统一正确，原代码此处有错误
    int mon[12] = {31, isleap(year)? 29 : 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    for (int i = 0; i < mons - 1; i++)  // 循环计算输入月份之前所有月份的天数总和
    {
        sum += mon[i];
    }
    sum += day;  // 加上输入月份已经过去的天数
    days = sum;
    printf("%dyear%dmon%dday is %dyear's %d day\n", year, mons, day, year, days);
    return 0;
}