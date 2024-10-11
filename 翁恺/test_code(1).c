#include <stdio.h>
int main()
{
	int sign=1;
	double deno=4.0,sum=5.0,term;
	while(deno<=100)
		{
			sign=-sign;
			term=sign/deno;
			sum=sum+term;
			deno=deno+1;
		}
	printf("sum=%f",sum);
	return 0;
}
