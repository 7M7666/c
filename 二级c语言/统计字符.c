#include<stdio.h>
//输入一行字符，分别统计出其中英文字母、空格、数字和其它字符的个数。
void f(char a[100])
{
int i=0;
int p=0,q=0,m=0,n=0;
while(a[i]!='\0')
{if(a[i]>='a'&&a[i]<='z'||a[i]>='A'&&a[i]<='Z')//判断是否为英文字母
 {
        p++;
    }
    else if(a[i]==' ')//判断是否为空格
    {
    q++;
    }
else if(a[i]>='0'&&a[i]<='9')//判断是否为数字
    {
    m++;
    }
    else
    {
    n++;
    }
    i++;
}
printf("%d\n%d\n%d\n%d",p,q,m,n);
} 
int main()

{

char a[100];

int p,q,m,n;

gets(a);

f(a);

return 0;

}//gets(str);==scanf("%s", string);

