#include <stdio.h>
//公倍公约
int gcd(int m,int n);

int main()
{
    int m,n;
    scanf("%d%d",&m,&n);
    printf("%d\n",gcd(m,n));
    printf("%d",m*n/gcd(m,n));

    return 0;
}
int gcd(int m,int n){
    int r;
while(m%n)
{
    r=m%n;
    m=n;
    n=r;
}
return n;

}
