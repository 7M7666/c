#include <stdio.h>

int main(int argc,const char *argv[])
{
    int a = 0;
    printf("������һ������\n");
    scanf("%d", &a);
    if (a>=0)
    {
        printf("��������ľ���ֵ��%d\n",a);
    }else
    {
        a = -a;
        printf("��������ľ���ֵ��%d\n",a);
    }
    return 0;
}
