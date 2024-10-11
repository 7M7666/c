#include <stdio.h>
#include <time.h>
long long f(int n);
void f1(int n);
void mmm(long long a[2][2], long long b[2][2], long long result[2][2]);
void mp(long long m[2][2], int n, long long result[2][2]);
long long FIBONACCI(int n);
int main(int argc,const char *argv[])
{
    int fstarttime=0, fendtime=0;
    int n;
    int usedtime = 0;
    long long FIBO[n];
    printf("请输入斐波那契的项数：\n");
    while (n<=0)
    {
        printf("请输入一个非0的正整数，来输出斐波那契数列的项数\n");
        scanf("%d", &n);
    }
    fstarttime = clock();
    for (int i = 1; i <= n;i++)
    {
        printf("斐波那契的第%d项是%d\n", n, f(n));
    }
        
    fendtime = clock();
    usedtime = ((double)(fendtime - fstarttime)) / CLOCKS_PER_SEC;
    printf("递归方法使用的时间是%f\n", usedtime);
    fstarttime = clock();
    f1(n);
    fendtime = clock();
    usedtime = ((double)(fendtime - fstarttime)) / CLOCKS_PER_SEC;
    printf("动态规划方法使用的时间是%f\n", usedtime);
    fstarttime = clock();
    for (int i = 0; i < n; i++) {
        FIBO[i] = FIBONACCI(i + 1);
    }
     printf("斐波那契数列的前50项如下：\n");
    for (int i = 0; i < n; i++) {
        printf("%lld ", FIBO[i]);
    }
    printf("\n");
    fendtime = clock();
    usedtime = ((double)(fendtime - fstarttime)) / CLOCKS_PER_SEC;
    printf("矩阵方法使用的时间是%f\n", usedtime);
    return 0;
}
//递归
long long f(int n)
{
    
        if (n == 1 || n == 2)
        {
            return 1;
        }
    else
    {
        return f(n - 1) + f(n - 2);
    }
    
    }
        
//动态规划
void f1(int n)
{
    
    int fibo[n-1];
    fibo[0] = 1, fibo[1] = 1;
    for (int i = 2; i < n; i++)
    {
        fibo[i] = fibo[i - 1] + fibo[i - 2];
    }
    printf("斐波那契数列的前%d项如下：\n", n+1);
    for (int i = 0; i < n;i++)
    {
        printf("斐波那契数列的第%d项是%d\n",i+1, fibo[i]);
    }
}
//矩阵乘法
void mmm(long long a[2][2], long long b[2][2], long long result[2][2]) {
    long long x = a[0][0] * b[0][0] + a[0][1] * b[1][0];
    long long y = a[0][0] * b[0][1] + a[0][1] * b[1][1];
    long long z = a[1][0] * b[0][0] + a[1][1] * b[1][0];
    long long w = a[1][0] * b[0][1] + a[1][1] * b[1][1];

    result[0][0] = x;
    result[0][1] = y;
    result[1][0] = z;
    result[1][1] = w;
}

void mp(long long m[2][2], int n, long long result[2][2]) {
    if (n <= 1) {
        return;
    }
    long long temp[2][2];
    mp(m, n / 2, result);
    mmm(result, result, temp);

    if (n % 2 == 1) {
        mmm(temp, m, result);
    } else {
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                result[i][j] = temp[i][j];
            }
        }
    }
}

long long FIBONACCI(int n) {
    if (n <= 0) return 0;
    if (n == 1 || n == 2) return 1;

    long long m[2][2] = {{1, 1}, {1, 0}};
    long long result[2][2] = {{1, 0}, {0, 1}}; // 单位矩阵

    mp(m, n - 1, result);

    return result[0][0];
}
