#include <stdio.h>
#define PI 3.1415926

int main(int argc,const char *argv[])
{
   // 球
   double r = 0, c = 0, s = 0, v = 0,s1=0;
   printf("请输入球的半径: ");
   scanf("%lf", &r);
   c = 2 * PI * r;
   s = 4.0*PI * r * r;
   s1 = PI * r * r;
   v = (4.0 / 3) * PI * r * r * r; // 使用4.0确保浮点数除法
   printf("这个球的周长是%.2f\n", c);
   printf("这个球的面积是%.2f\n", s1);
   printf("这个球的表面积是%.2f\n", s); // 这里的面积实际上是球的表面积
   printf("这个球的体积是%.2f\n", v);

   return 0;
}
