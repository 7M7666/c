
#include<stdio.h>
int main()
{
    int n,i,j,k;
    scanf("%d",&n);
    int yc=3*n;
    for(i=1;i<=3*n;i++) 
    {
        for(k=1;k<=3*n-i;k++)
            printf(" ");
        for(j=1;j<=i;j++)
        {
            if(i>3&&((i-1)%3==0&&(j%3==2||j%3==0)||(i-3)%3==2&&j%3==0))
            {
                printf("  "); 
            }
            else
            printf("* ");
        }
        printf("\n");
    }
    for(int e=1;e<=n;e++)
    {
	for(int p=1;p<=6*n;p++)
    {
    	if(p==(6*n+1)/2)
    	{
    		printf("**");
            printf(" ");
		}
		else printf(" ");
	}
	printf("\n");
	}
    return 0;
}