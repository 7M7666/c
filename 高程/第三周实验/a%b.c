#include <stdio.h>

int main(int argc,const char *argv[])
{
    int a = 0, b = 0;
    printf("�������������ͱ���a b");
    scanf("%d %d", &a, &b);
    int q, w;
    q = a / b;
    w = a % b;
    printf("a/b=%d\na%b=%d\n", q, w);
    return 0;
}
