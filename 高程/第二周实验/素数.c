#include <stdio.h>
int isprime(int n);//
int main()
{
    int n;
    printf("请输入一个正整数看这个数是否为素数\n");

    // 数据验证，防止输入不符合正整数的数
    while (1) {
        if (scanf("%d", &n) != 1 || n <= 0) {
            // 清除错误输入
            // 清除输入缓冲区
            while (getchar() != '\n');
            printf("输入错误，请输入一个正整数：\n");
        } else {
            break; // 输入有效，跳出循环
        }
    }
    isprime(n);
    return 0;
}
int isprime(int n){
    if(n<=1){
        printf("这个数不是素数\n");
    }else if (n==2||n==3)
    {
        printf("这个数是素数\n");
    }else if (n%2==0||n%3==0)//去掉2和3的倍数
    {
        printf("这个数不是素数\n");
    }else{
        for(int i=5;i*i<=n;i+=6)//去掉5，11等等的倍数
        {
            if (n%i==0||n%(i+2)==0)
            {
                printf("这个数不是素数\n");
            }
            
        }printf("这个数是素数\n");
    }//完成时间O（根号n）
    
    
}