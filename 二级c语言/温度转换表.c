#include <stdio.h>
int cotf(int c);
int main()
{
   
    for(int c=-100;c<=150;c=c+5){
        printf("c=%d->f=%d\n",c,cotf(c));

    }
    return 0;
}
int cotf(int c){
    
    return c*9/5+32;
    
}