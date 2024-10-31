//圆的面积
#include <stdio.h>
#define PI 3.1415925

int main(int argc,const char *argv[])
{
    //获取1-15圆的半径
    int r[15] ;
    for (int i = 0; i < 15;i++){
        r[i] = i + 1;
    }
    //获取他们的面积
    double s[15];
    for (int i = 0; i < 15;i++){
        s[i] = r[i] * r[i] * PI;
    }
    printf("输出面积在30到100之间的圆面积\n");
    for (int i = 0; i < 15;i++){
        if(s[i]>30&&s[i]<100){
            printf("半径是%d的圆的面积是%.2f\n", r[i], s[i]);
        }
    }
        return 0;
}
