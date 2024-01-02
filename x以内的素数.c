#include <stdio.h>
int main(){
    int a=1;
    int x;
    int b=1;//用b来判断是否为素数
    scanf("%d",&x);
    int c;
    for (c=1;c<=x;c++){
      for (a=2;a<c;a++){
    if(c%a==0){
    b=0;
    break;}
    }if (b==1)
{ printf("%d是素数\n",c); 
}else{
   printf("%d不是素数\n",c);
}
b=1;//重新赋值

    }
    return 0;
}