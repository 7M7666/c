//寻找矩阵最值：输入一个正整数n (1≤ n ≤6),再输入一个n 行n列的矩阵，找出该矩阵中绝对值最大的元素以及它的行下标和列下标。
//输出格式：数 行 列
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n][n];
    int i,j;
    for(i=0;i<n;i++)//遍历赋值
    {
        for(j=0;j<n;j++)
        {
         scanf("%d",&a[i][j]);
        }
    }
    int max;
    int t,k;
    for(i=0;i<n;i++)//遍历找出max
    {
        max=a[0][0];
        for(j=0;j<n;j++)
        {
            if(a[i][j]>max)
            {
                max=a[i][j];
                t=i;
                k=j;
            }
        }
    }
    printf("%d %d %d",max,t+1,k+1);
    return 0;

}

