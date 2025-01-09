#include <stdio.h>

// 检查是否是闰年
int isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

// 检查日期是否合法
int isValidDate(int year, int month, int day) {
    if (month < 1 || month > 12) return 0;

    int daysInMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (isLeapYear(year)) daysInMonth[2] = 29;

    return day >= 1 && day <= daysInMonth[month];
}

// 计算某个日期是星期几（0=周日, 1=周一, ..., 6=周六）
int getWeekDay(int year, int month, int day) {
    if (month == 1 || month == 2) {
        month += 12;
        year -= 1;
    }
    int k = year % 100;
    int j = year / 100;
    int weekday = (day + 13 * (month + 1) / 5 + k + k / 4 + j / 4 - 2 * j) % 7;
    return (weekday + 7) % 7;
}

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        char inputDate[11];
        int year, month, day;

        scanf("%s", inputDate);
        sscanf(inputDate, "%d-%d-%d", &year, &month, &day);

        if (!isValidDate(year, month, day)) {
            printf("Invalid date\n");
            continue;
        }

        int targetWeekDay = getWeekDay(year, month, day);
        int nextYear = year + 1;

        // 寻找下一个满足条件的年份
        while (1) {
            // 检查日期是否有效且是同一个星期几
            if (isValidDate(nextYear, month, day) && 
                getWeekDay(nextYear, month, day) == targetWeekDay) {
                // 检查是否满足闰年条件之一
                if (isLeapYear(nextYear)) {
                    printf("%d\n", nextYear);
                    break;
                }
            }
            nextYear++;
        }
    }

    return 0;
} 