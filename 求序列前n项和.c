#include <stdio.h>
int main()
{//求序列前n项和
double sum=0.0;
int cnt=0;
int n;
scanf("%d",&n);
double a =2.0;
double b=1.0;
double c;
while(cnt<n){
c=b+a;
sum=sum+c/a;
b++;
a++;
    cnt++;
}printf("%f",sum+2.0);
    return 0;
}