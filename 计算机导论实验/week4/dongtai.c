#include <stdio.h>
#include <time.h>

long long* f1(int n);

int main() {
    clock_t fstarttime = 0, fendtime = 0;
    int n = 50; // 计算斐波那契数列的前50项
    double usedtime = 0;
    long long* fiboArray;

    fstarttime = clock();
    fiboArray = f1(n); // 调用函数并获取斐波那契数列数组
    fendtime = clock();

    usedtime = ((double)(fendtime - fstarttime)) / CLOCKS_PER_SEC;
    printf("动态规划方法使用的时间是%f秒\n", usedtime);

    // 打印斐波那契数列
    for (int i = 0; i < n; i++) {
        printf("斐波那契数列的第%d项是%lld\n", i + 1, fiboArray[i]);
    }

    // 释放分配的内存
    free(fiboArray);

    return 0;
}

long long* f1(int n) {
    long long* fibo = (long long*)malloc(n * sizeof(long long)); // 动态分配数组
    fibo[0] = 1, fibo[1] = 1;
    for (int i = 2; i < n; i++) {
        fibo[i] = fibo[i - 1] + fibo[i - 2];
    }
    return fibo;
}
