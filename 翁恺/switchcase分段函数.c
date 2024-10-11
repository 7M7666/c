#include <stdio.h>
int main ()
{int b=0;
    int a;
    scanf("%d",&a);
    
    b=(b==a)+(a>0)+(b!=a)+(a>=0);
    switch (b){
    case 2:
    printf ("a=0",0);
    break;
    case 3:
    printf("a>0,a=%d",2*a);
    break;
    default:
    printf("a<0,a=%d",-a);
    return 0;}

}