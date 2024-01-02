#include <stdio.h>
int main()
{
int a;
int b=10;
int c;
int sum=0;
scanf("%d",&a);
while (a>10){
while(a/b>10){
    b=b*10;
}
c=a/b;
printf("c=%d\n",c);
a=a%b;
b=10;
sum=sum*10+c;
printf("sum=%d\n",sum);}
sum=sum*10+a;
printf("%d\n",sum);
    return 0;
}