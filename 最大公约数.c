#include <stdio.h>
int main()
{//最大公约数，欧几里得算法g（a,b）=g（b,a%b）
int a,b,c=0;
int s;
printf("输入非0值以继续程序");
do
{scanf("%d",&s);

scanf("%d %d",&a,&b);
while(a%b!=0){
c=a%b;    
a=b;
b=c;
}printf("这两个数的最大公约数是%d",b);
}while(s!=0);

    return 0;
}