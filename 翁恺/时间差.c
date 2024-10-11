#include <stdio.h>
int main()
{int a;
int b;
int c
;
int d;
    printf("请输入两个时间，几点几分\n");
    scanf("%d %d %d %d",&a,&b,&c,&d);
    printf("时间差为%d时%d分",(a*60+b-c*60-d)/60,(a*60+b-c*60-d)%60);
    return 0;
}