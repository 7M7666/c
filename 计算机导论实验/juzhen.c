#include <stdio.h>
#include <time.h>
#include<stdio.h>

long long fibonacci(int n);
void multiply(long long F[2][2], long long M[2][2]);
void power(long long F[2][2], int n);

int main () {
    clock_t fstarttime=0, fendtime=0;
    int n;
    double usedtime = 0;
    printf("请输入斐波那契的项数：\n");
    scanf("%d", &n);
    while (n<=0)
    {
        printf("请输入一个非0的正整数，来输出斐波那契数列的项数\n");
        scanf("%d", &n);
    }
    fstarttime = clock();
    for (int i = 1; i <=n; i++)
    {
        printf("斐波那契数列的第%d项为：%lld\n", i, fibonacci(i));
    }
    fendtime = clock();
    usedtime = (((double)(fendtime - fstarttime)) )/ CLOCKS_PER_SEC;
    printf("矩阵方法使用的时间是%f\n", usedtime);
    return 0;
}
// 斐波那契数列函数
long long fibonacci(int n)
 {
    long long F[2][2] = {{1,1},{1,0}};
    if (n == 0)
        return 0;
    power(F, n - 1);
    return F[0][0];
}
//创建一个2x2的矩阵
void multiply(long long F[2][2], long long M[2][2]) 
{
    long long x =  F[0][0]*M[0][0] + F[0][1]*M[1][0];
    long long y =  F[0][0]*M[0][1] + F[0][1]*M[1][1];
    long long z =  F[1][0]*M[0][0] + F[1][1]*M[1][0];
    long long w =  F[1][0]*M[0][1] + F[1][1]*M[1][1];
  
    F[0][0] = x;
    F[0][1] = y;
    F[1][0] = z;
    F[1][1] = w;
}
//快速幂
void power(long long F[2][2], int n) 
{
    int i;
    long long M[2][2] = {{1,1},{1,0}};
    for (i = 2; i <= n; i++)
        multiply(F, M);
}
 