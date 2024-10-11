#include <stdio.h>
int search(int key,int a[],int length);
int main()
{/*找出key在数组a中的位置
key：要寻找的数字
a:要寻找的数组
length：数组a的长度
return：如果找到返回其在a的位置 找不到就返回-1*/
int a[]={0,1,3,5,6,7,9,8,4,2,};//留一个逗号 记得有个等于
int x;
int length;
printf("请输入要查找的值\n");
scanf("%d",&x);
length=sizeof(a)/sizeof(a[0]);//判断数组的长度！！
if (search(x,a,length)==-1){
    printf("找不到！\n");
} 
    else{
        printf("这个数%d的位置是%d\n",x,search(x,a,length)+1);
    }
    return 0;
}
int search(int key,int a[],int length)//数组作为参数时不能再【】给出数组的大小，不能再用sizeof（）计算数组的完整个数
{
    int q=-1;
    int i=0;
    for(i;i<length;i++){
        if (a[i]==key){
            q=i;
            break;
        }
    }
    return q;//单一出口的思想很重要
}//题外话；如果要做数组的赋值 必须进行遍历数组 没有别的方法可以做
/*for (i=0;i<length;i++){
    b[i]=a[i];
}*/