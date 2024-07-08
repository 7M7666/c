/*编写程序，输入一个正整数n，求下列算式的值。要求定义和调用函数fact(k)计算k的阶乘，函数返回值的类型是double。
1+1/2+ .... +1/n!
输出保留五位小数*/
 #include <stdio.h>
double fact(int k) ;
 int main()
 {
    int n;
    double sum=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
    sum=1.0/fact(i)+sum;
    }
   printf("sum=%.5lf",sum);
    return 0;
 } 
double fact(int k) {
    
    double sum=1.0;
    for(int i=1;i<=k;i++){
        sum=i*sum;
    }
return sum;
 }

       