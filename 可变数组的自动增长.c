#include <stdio.h>
#include <stdlib.h>
typedef struct 
{
    int *array;
    int size;
}Array;//首先定义了一个结构 结构里面有一个数组/指针和一个int类型的大小
const blocks=20;
Array arraycreate(int insize)
{
    Array a;
    a.size=insize;
    a.array=(int*)malloc(sizeof (int)*a.size);
    return a;//返回一个本地变量的结构
}//malloc是动态内存分配 一定要记得free！！！！
void arrayfree(Array *a)
{
    free(a->array);
    a->array=NULL;
    a->size=0;
}//封装 保密权在我 解释权在我 开后门在我
int arraysize(const Array *a)
{
    return a->size;
}
int arrayget(Array *a,int indenx)
{
    if (indenx>=a->size)
    {
        arrayinflate(a,(indenx/blocks+1)*blocks-a->size);//把数组分成若干个blocks 然后看这个数组需要几个blocks 减去a-》size是因为inflate接受的参数是增长空间
    }
    
    return a->array[indenx];
}
int arrayset(Array *a,int indenx,int value)
{
    a->array[indenx]=value;
}
void arrayinflate(Array *a,int moresize)
{
    int *p=(int*)malloc(sizeof((int)(a->size+moresize)));//给这个数组定义申请一个空间
    for(int i=0;i<a->size;i++)
    {
        p[i]=a->array[i];//数组的复制
    }
    free(a->array);
    a->array=p;
    a->size+=moresize;
}
int main()
{
    Array a=arraycreate(5);
    printf("%d",arraysize(&a));
    int number=0;
    int cnt=0;
    while (number!=-1)
    {
        scanf("%d",&number);
        if(number!=-1)
        {
            arrayset(&a,cnt++,number);

        }
    }//一个无限数组出来了
    
    arrayfree(&a);
    return 0;
}