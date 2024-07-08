#include&lt;stdio.h&gt;

#include&lt;math.h&gt;

int main()

{

    int a[10],s[10];

    int t;

    int temp;

    for(int i=0;i&lt;10;i++){

    scanf("%d",&amp;s[i]);

    a[i]=abs(s[i]);//这里换算绝对值

    }

    int min=a[0];

    for(int i=1;i&lt;=9;i++){

    if(min&gt;a[i]){

    min=a[i];//这里遍历比较找最小值

t=i;//这里是下标

    }

    }

    temp=s[t];

    s[t]=s[9];

    s[9]=temp;//这里与最后的元素进行交换

    for(int j=0;j&lt;10;j++){

    // if(j==9){

    // printf("%d",a[9]);

    // break;//

    // }

    printf("%d ",s[j]);//最后输出就可以啦

    }

    return 0;

}