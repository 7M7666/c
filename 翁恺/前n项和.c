#include <stdio.h>
int main()
{
    double n;
    double a;
    double sum=0.0;
    //���Ҫ����+-��������һ��sign ���÷���������ÿһ��������Ӻ�
    int sign=1;
scanf("%lf",&n);
printf("����1+..1/n��ǰn���\n");
for (a=1.0;a<=n;a++){
sum=sign/a+sum;
sign=-sign;
}
printf("%f��ǰ%f���\n",sum,n);
    return 0;
}