#include <stdio.h>
int main()
{
int one;
int two;
int five;
int x;
int out;
scanf("%d",&x);
for (one=1;one<x*10;one++)
{
    for ( two = 1; two < x*10/2; two++)
    {
        for ( five = 1; five <x*10/5; five++)
        {
            if (one+five*5+two*2==x*10)

            {
                printf("可以用%d个一角%d个两角%d个五角凑出%d元\n",one,two,five,x);
                goto out;
            }
            
        }
        
    }
    
}
out:
    return 0;

}