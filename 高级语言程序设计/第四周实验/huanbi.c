#include <stdio.h>
#include <stdbool.h>

// 函数声明
void inp(int a[], int n);
void cum(int a[], int b[], int n);
void gr(int a[], double c[], int n);
void prt(int b[], double c[], int n);

int main() {
    int a[4];      // 存储四个季度的销售额
    int b[4];      // 存储累计销售额
    double c[3];   // 存储环比增长率

    // 输入四个季度的销售额
    printf("请输入四个季度的销售额（必须为正整数）：\n");
    inp(a, 4);

    // 计算累计销售额
    cum(a, b, 4);

    // 计算环比增长率
    gr(a, c, 4);

    // 输出结果
    prt(b, c, 4);

    return 0;
}

// 输入销售额，并进行输入验证
void inp(int a[], int n) {
    for (int i = 0; i < n; i++) {
        while (1) {
            printf("第%d季度销售额: ", i + 1);
            if (scanf("%d", &a[i]) == 1 && a[i] > 0) {
                break;  // 输入有效，跳出循环
            } else {
                // 清除错误输入
                while (getchar() != '\n');
                printf("输入无效，请输入一个正整数！\n");
            }
        }
    }
}

// 计算累计销售额
void cum(int a[], int b[], int n) {
    b[0] = a[0];
    for (int i = 1; i < n; i++) {
        b[i] = b[i - 1] + a[i];
    }
}

// 计算环比增长率
void gr(int a[], double c[], int n) {
    for (int i = 0; i < n - 1; i++) {
        if (a[i] == 0) {
            c[i] = 0.0;  // 如果上一季度销售额为0，增长率设为0
        } else {
            c[i] = ((double)(a[i + 1] - a[i]) / a[i]) * 100;
        }
    }
}

// 输出结果
void prt(int b[], double c[], int n) {
    // 输出累计销售额
    printf("\n各季度自年初起的累计销售额:\n");
    for (int i = 0; i < n; i++) {
        printf("第%d季度累计销售额: %d\n", i + 1, b[i]);
    }

    // 输出环比增长率
    printf("\n第一季度外的三个季度的环比增长率:\n");
    for (int i = 0; i < n - 1; i++) {
        printf("第%d季度环比增长率: %.2f%%\n", i + 2, c[i]);
    }
}