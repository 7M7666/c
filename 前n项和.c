#include <stdio.h>
int main()
{
    double n;
    double a;
    double sum=0.0;
    //如果要交替+-可以设置一个sign 利用分子来进行每一项的正负加和
    int sign=1;
scanf("%lf",&n);
printf("这是1+..1/n的前n项和\n");
for (a=1.0;a<=n;a++){
sum=sign/a+sum;
sign=-sign;
}
printf("%f是前%f项和\n",sum,n);
    return 0;
}