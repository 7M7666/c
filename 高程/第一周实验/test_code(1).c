#include <stdio.h>
int main()
{
	int sign=1;
	double deno=4.0,sum=5.0,term;//修改了数据
	while(deno<=100)
		{
			sign=-sign;
			term=sign/deno;//实际上是+-变换
			sum+=term;//再次修改
			deno++;//我喜欢用deno++
		}
	printf("sum=%f",sum);//重新用英文键盘写了输出语句
	return 0;
}
