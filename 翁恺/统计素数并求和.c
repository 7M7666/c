#include <stdio.h>
int main()
{//统计素数并求和 给定整数q，w之间的素数的个数以及他们的和
 int z,x;
 scanf("%d %d",&z,&x);
 
 int q;
 q=z;
 int cnt=0;
 int sum=0;
 while(q<=x){
 //scanf("%d",&q);
 int a=1;//判断
 int w=2;
 for(w;w<q;w++){
  if(q%w==0){

    a=0;
  }
 }
 if (a==1)
 {
  printf("%d是素数\n",q);
  cnt++;
  sum=q+sum;
 }a=1;
 q++;
 }printf("%d是素数的个数\n",cnt);
printf("%d是这些素数的和\n",sum);
  return 0;
}