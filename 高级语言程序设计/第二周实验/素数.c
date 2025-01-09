#include <stdio.h>
#include <stdbool.h>  // 使用 bool 类型

// 判断一个数是否为素数，返回布尔值
bool isprime(int n);

int main() {
    int n;
    printf("请输入一个正整数（大于0）来判断这个数是否为素数：\n");

    // 数据验证，防止输入不符合正整数的数
    while (1) {
        if (scanf("%d", &n) != 1 || n <= 0) {
            // 清除错误输入
            while (getchar() != '\n');  // 清除输入缓冲区
            printf("输入错误，请输入一个正整数：\n");
        } else {
            break;  // 输入有效，跳出循环
        }
    }

    // 根据 isprime 函数的返回值输出结果
    if (isprime(n)) {
        printf("%d 是素数\n", n);
    } else {
        printf("%d 不是素数\n", n);
    }

    return 0;
}

// 判断一个数是否为素数
bool isprime(int n) {
    if (n <= 1) {
        return false;  // 1 及以下的数不是素数
    }
    if (n == 2 || n == 3) {
        return true;  // 2 和 3 是素数
    }
    if (n % 2 == 0 || n % 3 == 0) {
        return false;  // 排除 2 和 3 的倍数
    }

    // 检查 6k ± 1 的因子
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) {
            return false;  // 如果 n 能被 i 或 i+2 整除，则不是素数
        }
    }

    return true;  // 如果没有找到因子，则是素数
}