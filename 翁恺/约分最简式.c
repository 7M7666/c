#include <stdio.h>
int main()
{//约分最简式,实际上是分子分母的最大公约数
int a,b;
scanf("%d/%d",&a,&b);
int q,w;
q=a;
w=b;
int c;
while (a%b!=0){
   c=a%b;
   a=b;
b=c;
}
printf("%d/%d",q/b,w/b);

    return 0;
}