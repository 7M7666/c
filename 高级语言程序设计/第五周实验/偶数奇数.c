#include <stdio.h>

int main(int argc,const char *argv[])
{
    int a = 0;
    printf("������һ������\n");
    scanf("%d", &a);
    if(a%2==0)
    {
        printf("�������ż��");
    }
    else
    {
        printf("�����������");
    }

    return 0;
}
