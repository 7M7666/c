#include <stdio.h>
int main()
{//九九乘法表！输入一个1<=n<=9输出一个1*1到n*n的九九乘法表！
int a,b,c;
scanf("%d",&a);
b=1;

while(b<=a){
    c=1;
    while(c<=b){
        printf("%d*%d=%d",c,b,c*b);
        c++;
        if(c*b<9){
            printf("   ");
            
        }else{
            printf("  ");
        }
    }
    printf("\n");
    b++;
}
    return 0;
}