#include <stdio.h>

int main(int argc,const char *argv[])
{
   double number, a, b;

    printf("������һ��������: ");
    scanf("%lf", &number);

    // ��ȡ��������
    a = (int)number;

    // ����С������
    b = number - a;

    // ������
    printf("����������: %d\n", (int)a);
    printf("С��������: %.2f\n", b);

    return 0;
}
