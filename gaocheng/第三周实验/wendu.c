#include <stdio.h>

int main(int argc,const char *argv[])
{
    double f = 0, c = 0;
    printf("请输入一个华氏温度\n");
    scanf("%lf", &f);
    c = 5 * (f - 32) / 9;
    printf("它的摄氏温度是%.2f\n",c);
    return 0;
}
