#include <stdio.h>
int q(int);//函数头这里要说分号也要说参数类型！！！！！！！！！！！！！！
int main()
{int a,b;
scanf("%d %d",&a,&b);//输入扫描区间
int sum=0,cnt=0;
int i;
if (a==1)a=2;
for(i=a;i<=b;i++){
    if(q(i)){
        sum+=i;
        cnt++;
        printf("%d\n",i);
    }
}printf("素数的和是%d 素数个数是%d",sum,cnt);

    return 0;
}
int q(int i){
    int w=1;
    int e;
    for(e=2;e<i-1;e++){
        if (i%e==0)
        {
            w=0;
            break;
        }
        
    }return w;
}