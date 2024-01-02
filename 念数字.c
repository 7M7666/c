#include <stdio.h>
int main()
{//念数字
int x;
scanf("%d",&x);
if (x<0){
    printf("fu ");
    x=-x;
}
int a,b=x;
for(a=1;b>9;a*10){
    b/=10;
    a*=10;
}printf("a是%d\n",a);
do {
    int c=x/a;
    switch (c){
        case 0:
        printf("lin");
        break;
        case 1:
        printf("yi");
        break;
        case 2:
        printf("er");
        break;
        case 3:
        printf("san");
        break;
        case 4:
        printf("si");
        break;
        case 5:
        printf("wu");
        break;
        case 6:
        printf("liu");
        break;
        case 7:
        printf("qi");
        break;
        case 8:
        printf("ba");
        break;
        case 9:
        printf("jiu");


    }if (a>9)
    {
        printf(" ");
    }
    
    x%=a;
    a/=10;
    }while(a>0);



    return 0;
}
