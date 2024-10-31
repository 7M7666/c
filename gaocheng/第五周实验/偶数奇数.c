#include <stdio.h>

int main(int argc,const char *argv[])
{
    int a = 0;
    printf("请输入一个整数\n");
    scanf("%d", &a);
    if(a%2==0)
    {
        printf("这个数是偶数");
    }
    else
    {
        printf("这个数是奇数");
    }

    return 0;
}
