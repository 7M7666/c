#include <stdio.h>
/*输入一个华氏温度，要求输出摄氏温度。公式为：华氏度=摄氏度*1.8+32
保留两位小数
*/
int main()
{
    double f;
    double c;
    scanf("%lf",&f);
    c=(f-32.0)/1.80;
    printf("%.2f",c);
    return 0;
}