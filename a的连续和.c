#include <stdio.h>
int main()
{//求a的连续和，a的范围是0-9.n的范围是0-8 求s=a+n个a的和
int a;
int n;
scanf("%d %d",&a,&n);
while(a>10||a<0||n<0||n>9){
    printf("a的范围是0-9,n的范围是0-8");

}
int cnt=0;
int sum=0;
while(cnt<n){
sum+=a;
a=a*10+a;
    cnt++;
}printf("%d",sum);
    return 0;
}