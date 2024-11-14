#include <stdio.h>

int main(int argc,const char *argv[])
{
   char a;
   printf("请输入一个小写字母\n");
   scanf("%c",&a);
   printf("它的大写字母是%c\n小写字母的ASCII码是%d\n大写字母的ASCII码是%d\n",a-32,a,a-32);
   return 0;
}
