#include <stdio.h>

int main(int argc,const char *argv[])
{
   char a;
   printf("������һ��Сд��ĸ\n");
   scanf("%c",&a);
   printf("���Ĵ�д��ĸ��%c\nСд��ĸ��ASCII����%d\n��д��ĸ��ASCII����%d\n",a-32,a,a-32);
   return 0;
}
