#include <stdio.h>
int main()
{//做出给定整数集，输入一个数字，要求输出从他开始的连续三位数字的不重复位数
int n;
scanf("%d",&n);
int j,k,l;
int cnt=0;
j=n;
 while (j<=n+3)
 {k=n;
    while(k<=n+3){
        l=n;
        while(l<=n+3){
            if (j!=k&&j!=l&&k!=l){
                printf("%d%d%d",j,k,l);
cnt++;
if (cnt==6)
{
printf("\n");
cnt=0;
}else{
    printf(" ");
}

            }
            
            
            l++;

        }
        k++;
    }
    j++;
 }
 
 
    return 0;
}