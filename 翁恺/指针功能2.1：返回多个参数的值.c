#include <stdio.h>
void minmax(int a[],int len,int *min,int*max);
int main()
{int a[]={2,4,56,3,76,43,13,57,58,};
int min,max;
minmax(a,sizeof(a)/sizeof(a[0]),&min,&max);
printf("min=%d\n",min);
printf("max=%d\n",max);
    return 0;
}void minmax(int a[],int len,int *min,int*max){
    int i;
    *min=*max=a[0];
    for (i=0;i<len;i++){
        if (a[i]<*min){
            *min=a[i];
        }if (a[i]>*max){
            *max=a[i];
        }
    }
}//函数的结果不止一个