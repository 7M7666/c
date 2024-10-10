#include <stdio.h>

// 函数声明
void calendar(int year, int month);
int maxday(int year, int month);
int weekday1(int year, int month, int day);

int main() {
    int year, month;
    printf("请输入年份:\n");
    scanf("%d", &year);
    //数据验证
    while (year < 1900) {
        printf("错误：年份必须大于等于1900。\n");
        printf("请输入年份:\n");
        scanf("%d", &year);;
    }
    printf("请输入月份:\n");
    scanf("%d", &month);
    while (month < 1 || month > 12) {
        printf("错误：月份必须在1到12之间。\n");
        printf("请输入月份:\n");
        scanf("%d", &month);
    }
    calendar(year, month); // 调用日历函数
    return 0;
}

// 某月的最大天数
int maxday(int year, int month) {
    
    int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (month == 2 && (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0))) {
        return 29;
    }
    return days[month - 1];
}

// 查询某月1日是星期几
int weekday1(int year, int month, int day) {
    
    int sum = 0;
    for (int i = 1900; i < year; i++) { // 从1900年开始计时
        if (i % 4 == 0 && (i % 100 != 0 || i % 400 == 0)) {
            // 闰年
            sum += 366;
        } else {
            sum += 365;
        }
    }
    for (int i = 0; i < month - 1; i++) {
        sum += maxday(year, i + 1); // 加上每个月的总天数
    }
    sum += day;
    return (sum % 7)-1; // 减去1，因为1900年1月1日是星期一
}

// 主体函数，输出月份日历，使用“一二三四五六日”作为抬头
void calendar(int year, int month) {
    int weekday = weekday1(year, month, 1);
    int themaxday = maxday(year, month);
    
    printf("\n\t\t\t\t%d年%d月\n", year, month); // 注释现在是几年几月的日历
    printf("\n \t一\t二\t三\t四\t五\t六\t日\n\n"); // 用tab可以更好看
    // 输出tab制表符
    for (int i = 0; i < weekday; i++) {
        printf("\t");
    }
    // 输出对应的日期
    for (int i = 1; i <= themaxday; i++) {
        printf("\t%2d", i);
        if ((i + weekday) % 7 == 0) { // 星期天就换行
            printf("\n");
        }
    }
    printf("\n"); // 输出一个换行符 让结果更好看
}
