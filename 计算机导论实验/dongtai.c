#include <stdio.h>
#include <time.h>
void f1(int n);
int main(int argc,const char *argv[])
{
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
    f1(n);
    fendtime = clock();
    usedtime = (((double)(fendtime - fstarttime)) )/ CLOCKS_PER_SEC;
    printf("动态规划方法使用的时间是%f\n", usedtime);
    return 0;
}
void f1(int n)
{
    
    long long fibo[n-1];
    fibo[0] = 1, fibo[1] = 1;
    for (int i = 2; i < n; i++)
    {
        fibo[i] = fibo[i - 1] + fibo[i - 2];
    }
    printf("斐波那契数列的前%d项如下：\n", n+1);
    for (int i = 0; i < n;i++)
    {
        printf("斐波那契数列的第%d项是%lld\n",i+1, fibo[i]);
    }
}