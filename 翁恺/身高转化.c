#include <stdio.h>

int main()
{
    int a=0;
    int b=0;

    printf("请输入身高，几英尺几寸")
    ;
    scanf("%d %d",&a,&b);
    printf("身高是%f米",(a+b/12.0)*0.3048);
    return 0;
}