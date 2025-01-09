#include <stdio.h>

// 函数声明
void cal(int year, int month);  // calendar -> cal
int max(int year, int month);   // maxday -> max
int wek(int year, int month);   // weekday1 -> wek

int main() {
    int year, month, choice;
    
    while (1) {
        printf("\n=== 日历查询系统 ===\n");
        printf("1. 查询日历\n");
        printf("2. 退出程序\n");
        printf("请选择操作: ");
        scanf("%d", &choice);
        
        if (choice == 2) {
            printf("程序已退出\n");
            break;
        }
        
        if (choice != 1) {
            printf("无效的选择，请重新输入！\n");
            continue;
        }
        
        printf("请输入年份: ");
        scanf("%d", &year);
        
        while (year < 1900) {
            printf("错误：年份必须大于等于1900\n");
            printf("请重新输入年份: ");
            scanf("%d", &year);
        }
        
        printf("请输入月份: ");
        scanf("%d", &month);
        
        while (month < 1 || month > 12) {
            printf("错误：月份必须在1到12之间\n");
            printf("请重新输入月份: ");
            scanf("%d", &month);
        }
        
        cal(year, month);
    }
    return 0;
}

int max(int year, int month) {
    int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    return (month == 2 && year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) 
           ? 29 : days[month - 1];
}

int wek(int year, int month) {
    static int t[] = {0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4};
    year -= month < 3;
    return (year + year/4 - year/100 + year/400 + t[month-1] + 1) % 7;
}

void cal(int year, int month) {
    char *weekdays[] = {"日", "一", "二", "三", "四", "五", "六"};
    int start = wek(year, month);
    int days = max(year, month);
    
    printf("\n\t\t%d年%d月\n", year, month);
    printf("\n");
    
    // 打印星期头
    for (int i = 0; i < 7; i++) {
        printf("%s\t", weekdays[i]);
    }
    printf("\n");
    
    // 打印日期前的空格
    for (int i = 0; i < start; i++) {
        printf("\t");
    }
    
    // 打印日期
    for (int i = 1; i <= days; i++) {
        printf("%d\t", i);
        if ((i + start) % 7 == 0) {
            printf("\n");
        }
    }
    printf("\n\n");
}
