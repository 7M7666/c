/*分段问题描述：给定一个整数数列，数列中连续相同的最长整数序列算成一段，问数列中共有多少段？ 

输入格式：输入的第一行包含一个整数 n,表示数列中整数的个数。第二行包含n个整数a1, a2, , an,表示给定的数列，相邻的整数之间用一个 空格分隔。

输出格式：输出一个整数，表示给定的数列有多个段。

样例输入：8 8 8 8 0 12 12 8 0 

样例输出：5 

样例说明：8 8 8 是第一段，0是第二段，12 12是第三段，倒数第二个整数 8 是第四段，最后一个0是第五段。*/
#include <stdio.h>

int main(int argc, const char *argv[])
{
    int n;
    printf("输入一个整数n代表数列中整数的个数\n");
    scanf("%d", &n);
    int num[n];
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }
    for (int i = 0; i < n - 1; i++) 
    {
        if (num[i + 1] == num[i])
        {
            continue;
        }
        cnt++;
    }
    // 添加最后一个元素的判断
    if (n > 0)
    {
        cnt++; // 最后一个元素总是构成一个新段
    }
    
    printf("%d", cnt);
    return 0;
}
