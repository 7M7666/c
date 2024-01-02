#include <stdio.h>
void sum(int begin,int end);
int main()
{int a,b;
int i=1;
while(i!=0){
scanf("%d %d",&a,&b);
sum(a,b);
printf("请输入一个不等于0的值以继续算数");
scanf("%d",&i);}
    return 0;
}
void sum(int begin,int end){
int sum;
int i=begin;
for(i;i<=end;i++){
    sum+=i;
}printf("从%d到%d的和是%d\n",begin,end,sum);
}