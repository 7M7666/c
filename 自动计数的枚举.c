//套路 自动计数的枚举
#include <stdio.h>
enum color{red=1,green,yellow=5 ,num};
int main()
{int color=-1;
char*colornames[num]={"red","green","yellow",};//一个二维数组
char *name=NULL;
printf("write down your color\n");
scanf("%d",&color);
if (color>=0&&color<num){
    name=colornames[color];

}else {
    name="unknown";
}printf("your color is %s\n",name);
    return 0;
}