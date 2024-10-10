#include<stdio.h>
#include<stdlib.h> 

int main()
{
    double x = 0, y = 0;
    printf("请输入长方形的长和宽，输入格式“x y”\n");
    scanf("%lf %lf", &x, &y); 
    double c, s; 
    c = 2 * (x + y);
    s = x * y;
    printf("这个长方形的周长是%.2f\n面积是%.2f", c, s); 
    return 0;
}
