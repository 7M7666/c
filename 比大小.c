
#include<stdio.h>
int main()
{int a,b,c;
scanf ("%d %d %d",&a,&b,&c);

switch (a>b){
case 1:
if (a>c){ 
printf("%d",a);
}else 
{printf("%d",c);}
break;
default:
if (b>c) {
printf("%d",b);
}else{ 
printf("%d",c);
}}
	return 0;
}