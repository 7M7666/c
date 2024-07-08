#include <stdio.h>
int isprime(int x,int prime[],int a);
int main(void)
{
int prime[10]={2};
int cnt=1;//因为是第二个位置
int i=3;
while (cnt<10)
{
    if(isprime(i,prime,cnt)){
prime[cnt++]=i;//套路：此式子做了两件事 ①：给数组赋值 ②cnt++移动到数组下一个位置
    }
    i++;
}for(int i=0;i<10;i++){
    printf("%d\n",prime[i]);
}

    return 0;
}int isprime(int x,int prime[],int a){
    int ret=1;
    int i;
    for(i=0;i<a;i++){
        if (x%prime[i]==0)
        {
        ret=0;
        break;
        }
        
    }return ret;
}