#include <stdio.h>
int main()
{const int n=100;
int prime[n];
int i;
int x;
for (i=0;i<n;i++){
    prime[i]=1;
}
for (x=2;x<n;x++)
{
if (prime[x]){
    for(i=2;i*x<n;i++){
        prime[i*x]=0;
    }
}
}for (i=2; i<n; i++)
{
if(prime[i]){
    printf("%d\n",i);
}
}
//素数的倍数全删

    return 0;
}