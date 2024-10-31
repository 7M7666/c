#include <stdio.h>

int main(int argc,const char *argv[])
{
    int a = 0;
    printf("请输入一个整数\n");
    scanf("%d", &a);
    if (a>=0)
    {
        printf("这个整数的绝对值是%d\n",a);
    }else
    {
        a = -a;
        printf("这个整数的绝对值是%d\n",a);
    }
    return 0;
}
