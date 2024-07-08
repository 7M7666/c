/*输入一个正数x和一个正整数n，求下列算式的值。要求定义两个调用函数：fact(n)计算n的阶乘；mypow(x,n)计算x的n次幂（即xn），两个函数的返回值类型是double。
      x - x2/2! + x3/3! + ... + (-1)n-1xn/n!
×输出保留4位小数。*/
#include <stdio.h>
double fact(int k) {
    
    double sum=1.0;
    for(int i=1;i<=k;i++){
        sum=i*sum;
    }
return sum;}
double mypow(double x,int n){
    int i=1;
    double q=x;
    for(i;i<n;i++){
        x=x*q;
    }
    return x;
}
int main()
{
    double sum=0;
    double x;
    int n;
    scanf("%lf %d",&x,&n);
    int i=1;
    for(i;i<=n;i++){
        sum+=mypow((-1.0),i-1)*mypow((double)i,i)/fact(i);
    }
    printf("%.4f",sum);
    return 0;
}/*#include<stdio.h>
#include<math.h>
double fact(double n)
{
    int i;
    double  sum=1;
    for(i=1;i<=n;i++)
    {
        sum=sum*i;
    }
    return sum;
}
double mypow(double x,int n)
{
    int i;
    double sum=0,fac;
    for(i=1;i<=n;i++)
    {
        fac=fact(i);
        sum=(pow((-1),i-1)*pow(x,i))/fac+sum;
    }
    return sum;
}
int main()
{
    int i,n;
    double x,sum,fac;
    scanf("%lf %d",&x,&n);
    sum=mypow(x,n);
    printf("%.4lf",sum);
    return 0;
}*/