#include <stdio.h>
#include <time.h>
long long f(int n);
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
    for (int i = 1; i <= n;i++)
    {
        printf("斐波那契的第%d项是%lld\n", i, f(i));
    }
    fendtime = clock();
    usedtime = (double)(fendtime - fstarttime)/CLOCKS_PER_SEC;
    printf("递归方法使用的时间是%f\n", usedtime);
    return 0;
}
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