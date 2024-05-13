#include <stdio.h>
int main()
{int n;
scanf("%d",&n);
int first=1;
int i=1;
for (i;i<n;i++){
    first*=10;
}//遍历100-999
printf("%d\n",first);
i=first;
while(i<first*10){
int sum=0;
int t=i;
do {
    int a=t%10;
    t/=10;
    int p=1;
    int j=0;
    for(j;j<n;j++){
        p=p*a;
    }//循环求出要乘上几次幂
    sum=sum+p;
}while(t>0);
if(i==sum){
    printf("%d\n",sum);
}
    i++;
}
    return 0;
}
