#include <stdio.h>
int main()
{//输入0-9的数字统计数字出现个数
int number[10]={0};//调皮的遍历！这样就可以不用遍历数组把他们全部赋0！这样说的数字第一位是0
int cnt;
int x;
printf("请输入一个0-9的数字 统计这些数字的个数 输入-1结束 \n");
scanf("%d",&x);
while (x!=-1)
{
    if (x>=1&&x<=9)
    {
       number[x]++; 
    }
    scanf("%d",&x);
}for(cnt=0;cnt<10;cnt++){
    printf("数字%d的次数是%d\n",cnt,number[cnt]);
}

    return 0;
}