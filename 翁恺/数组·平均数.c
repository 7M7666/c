#include <stdio.h>
int main()
{//写一个程序计算用户输入的数字的平均数并输出这些数中大于其平均数的数
int number[100];
int i;
int cnt=0;
double sum=0.0;
printf("请输入一个非负一的值以继续运算\n");
scanf("%d",&i);
while(i!=-1){
number[cnt]=i;
sum+=i;
cnt++;
scanf("%d",&i);
}if (cnt>0){
    printf("这些数字的平均数是%f\n",sum/cnt);
}int x;//遍历数组
for(x=0;x<cnt;x++){
    if(number[x]>sum/cnt){
        printf("%d\n",number[x]);
    }
}
    return 0;
}