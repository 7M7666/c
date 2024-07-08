#include<stdio.h>
int main()
{
    int a,b=0,c=0,d=0;
    /*b用于统计85分及以上的人数，c用于统计84到60的人数，
    d用于统计59分及以下的人数*/ 
    scanf("%d", &a);
    //如果第一个数就是0或负数，那么循环就不会执行 
    while(a>0){
    if(a>=85)
        b++;
    else if(a>=60)
        c++;
    else
        d++;
    scanf("%d", &a);
    //输入之后就立马进行判断 
    } 
    printf(">=85:%d\n",b);
    printf("60-84:%d\n",c);
    printf("<60:%d",d);
    return 0;
}