//200以内被7整除的数字
#include <stdio.h>

int main(int argc,const char *argv[])
{
    printf("输出200以内被7整除的数字\n");
   for(int i=1;i<=200;i++){
    if(i%7==0){
        printf("%d",i);
        printf(" ");
    }
    
   }
   return 0;
}
