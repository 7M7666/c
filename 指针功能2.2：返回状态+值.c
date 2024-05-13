#include <stdio.h>
int divide(int a,int b,int *c);
int main()
{int a=5,b=2,c;
if(divide(a,b,&c)){
    printf("%d/%d=%d\n",a,b,c);
}


    return 0;
}int divide(int a,int b,int *c){
    int ret=1;
    if(b==0)return 0;
    else{
        *c=a/b;
    }return ret;
}