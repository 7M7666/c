#include <stdio.h>
#include <time.h>

long long fibonacci(int n);
void multiply(long long F[2][2], long long M[2][2]);
void power(long long F[2][2], int n);

int main() {
    clock_t startTime = clock();
    int n;
    double usedTime = 0;

    printf("请输入斐波那契的项数：\n");
    scanf("%d", &n);
    while (n <= 0) {
        printf("请输入一个非0的正整数，来输出斐波那契数列的项数\n");
        scanf("%d", &n);
    }

    long long* fiboArray = (long long*)malloc(n * sizeof(long long)); // 动态分配数组

    for (int i = 0; i < n; i++) {
        fiboArray[i] = fibonacci(i);
    }

    clock_t endTime = clock();
    usedTime = ((double)(endTime - startTime)) / CLOCKS_PER_SEC;
    printf("矩阵方法使用的时间是%f秒\n", usedTime);

    // 打印斐波那契数列
    for (int i = 0; i < n; i++) {
        printf("斐波那契数列的第%d项为：%lld\n", i + 1, fiboArray[i]);
    }

    free(fiboArray); // 释放动态分配的内存
    return 0;
}

long long fibonacci(int n) {
    long long F[2][2] = {{1, 1}, {1, 0}};
    if (n == 0)
        return 0;
    power(F, n - 1);
    return F[0][0];
}

void multiply(long long F[2][2], long long M[2][2]) {
    long long x = F[0][0] * M[0][0] + F[0][1] * M[1][0];
    long long y = F[0][0] * M[0][1] + F[0][1] * M[1][1];
    long long z = F[1][0] * M[0][0] + F[1][1] * M[1][0];
    long long w = F[1][0] * M[0][1] + F[1][1] * M[1][1];

    F[0][0] = x;
    F[0][1] = y;
    F[1][0] = z;
    F[1][1] = w;
}

void power(long long F[2][2], int n) {
    int i;
    long long M[2][2] = {{1, 1}, {1, 0}};
    for (i = 2; i <= n; i++)
        multiply(F, M);
}
