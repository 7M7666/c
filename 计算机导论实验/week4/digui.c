#include <stdio.h>
#include <time.h>

long long fibonacci(int n);
void calculateFibonacci(int n, long long* fiboArray);

int main() {
    clock_t startTime = clock();
    int n = 50;
    long long fiboArray[50]; // 用于存储斐波那契数列的数组

    calculateFibonacci(n, fiboArray);

    clock_t endTime = clock();
    double timeUsed = ((double)(endTime - startTime)) / CLOCKS_PER_SEC;
    printf("递归方法使用的时间是%f秒\n", timeUsed);

    // 打印斐波那契数列
    for (int i = 0; i < n; i++) {
        printf("斐波那契数列的第%d项是%lld\n", i + 1, fiboArray[i]);
    }

    return 0;
}

long long fibonacci(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

void calculateFibonacci(int n, long long* fiboArray) {
    for (int i = 0; i < n; i++) {
        fiboArray[i] = fibonacci(i);
    }
}
