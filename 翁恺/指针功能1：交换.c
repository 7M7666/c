#include <stdio.h>
void swap(int *p,int *q);
int main()
{int a=7;
int b=8;
swap(&a,&b);
printf("a=%d\n",a);
printf("b=%d\n",b);

    return 0;
}
void swap(int *p,int*q){
    int t=*p;
    *p=*q;
    *q=t;
}
///传近去的参数实际上是需要保存带回的变量