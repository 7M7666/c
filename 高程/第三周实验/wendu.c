#include <stdio.h>

int main(int argc,const char *argv[])
{
    double f = 0, c = 0;
    printf("������һ�������¶�\n");
    scanf("%lf", &f);
    c = 5 * (f - 32) / 9;
    printf("���������¶���%.2f\n",c);
    return 0;
}
