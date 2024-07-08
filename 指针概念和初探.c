#include <stdio.h>
void f(int *p);
void g(int k);
int main()
{
    int i=6;
    f(&i);
    g(i);
    f(&i);
    return 0;
}
void f(int *p){
    printf("p=%p\n",p);//此时这是对变量i的地址
    printf("*p=%d\n",*p);//*p就是i，而且可以通过改变*p改变函数外i的值，通过改变局部变量可以改变全局变量
*p=21;

}
void g(int k){
    printf("k=%d",k);
}//函数参数表里的数组就是指针啊！