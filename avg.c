#include <stdio.h>
int main(){
    int a=0;
    int b=0;
    int sum=0;
scanf("%d",&a);
do
{if (a!=-1)
{
sum =sum+a;
printf("现在的总和是%d\n",sum);
b++;
printf("现在的个数是%d\n",b);
 scanf("%d",&a);
    /* code */
}

   
} while (a!=-1);

printf("平均数是%f\n",1.0*sum/b);



    
    return 0;
}