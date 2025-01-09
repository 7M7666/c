#include <stdio.h>

// 交换两个整数指针所指向的值的函数声明
void swap(int *a, int *b);

int main(int argc, const char *argv[])
{
    int a[3][10];
    // 提示用户输入二维数组的数据
    printf("请输入一个[3][10]数组的数据\n");
    // 外层循环控制行，正确读取每一行的元素存入二维数组
    for (int i = 0; i < 3; i++)
    {
        // 内层循环控制列
        for (int j = 0; j < 10; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // 对每一行进行冒泡排序，正确的双层循环控制
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            for (int k = 0; k < 9 - j; k++)
            {
                if (a[i][k] > a[i][k + 1])
                {
                    swap(&a[i][k], &a[i][k + 1]);
                }
            }
        }
    }

    for (int i = 0; i < 3; i++)
    {
        printf("第%d行从小到大的顺序如下:", i + 1);
        for (int k = 0; k < 10; k++)
        {
            printf(" %d", a[i][k]);
        }
        printf("\n");
    }

    return 0;
}

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}