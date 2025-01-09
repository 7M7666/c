#include <stdio.h>
#include <stdbool.h>

// 函数声明
void inp(int s[], int n);  // 输入成绩
double avg(int s[], int n); // 计算平均成绩
void prt(int s[], int n, double a); // 输出成绩和平均成绩

int main() {
    int s[4];  // 存储四门课的成绩
    double a;  // 存储平均成绩

    // 输入四门课的成绩
    printf("请输入四门课的成绩（0-100）：\n");
    inp(s, 4);

    // 计算平均成绩
    a = avg(s, 4);

    // 输出成绩和平均成绩
    prt(s, 4, a);

    return 0;
}

// 输入成绩，并进行输入验证
void inp(int s[], int n) {
    for (int i = 0; i < n; i++) {
        while (1) {
            printf("第%d门课成绩: ", i + 1);
            if (scanf("%d", &s[i]) == 1 && s[i] >= 0 && s[i] <= 100) {
                break;  // 输入有效，跳出循环
            } else {
                // 清除错误输入
                while (getchar() != '\n');
                printf("输入无效，请输入 0 到 100 之间的整数！\n");
            }
        }
    }
}

// 计算平均成绩
double avg(int s[], int n) {
    double sum = 0;
    for (int i = 0; i < n; i++) {
        sum += s[i];
    }
    return sum / n;
}

// 输出成绩和平均成绩
void prt(int s[], int n, double a) {
    printf("\n四门课的成绩是：\n");
    for (int i = 0; i < n; i++) {
        printf("第%d门课成绩: %d\n", i + 1, s[i]);
    }
    printf("四门课的平均成绩是: %.2f\n", a);
}