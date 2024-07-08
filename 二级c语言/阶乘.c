/*求1+2!+3!+4!+…+30!。

科学计数法，保留两位小数。*/
#include <stdio.h>
int q(double w);
int main()
{
    double sum=0;
    double w=30;
    for(w=30;w>=1;w--){
        sum+=q(w);
    }
    printf("%.2e",sum);
    return 0;
}
int q(double w){

    for (int i=1;i<30;i++){
    w=w*i;
}
return w;
}
/*#include<stdio.h>
int main()
{
    int i;
    double j=1,sum=0;
    
    for(i=1;i<=30;i++)
    {
        j = j*i;
        sum = sum+j;
    }
    printf("%.2e\n",sum);
 
    return 0;
 */
