#include <stdio.h>
int isPrime(int m,int n); //声明isPrime()函数 
int main()
{
    int m,n;
    scanf("%d%d",&m,&n);
    printf("%d",isPrime(m,n));
}
int isPrime(int m,int n)  //实现isPrime()函数 
{
    int sum=0;
    for(int i=m; i<=n; i++)
    {
        for(int j=2; j<=i; j++) 
        {
            if(i%j==0&&i!=j)//没有考虑到2的情况
                break; 
            if(i%j==0&&i==j)
            {
                sum+=i;    
            }
        }
    }
    return sum;   
}