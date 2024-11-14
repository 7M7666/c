/*输入格式：输入第一行包含一个整数n。第二行包含n个正整数，相邻整数之间使用一个空格分隔。 
输出格式：输出一个整数，表示答案。 
样例输入：5 1 5 4 8 20 
样例输出：1 
样例说明：相差最小的两个数是5和4，它们之间的差值是1。 
样例输入：5 9 3 6 1 3 
样例输出：0 
样例说明：有两个相同的数3，它们之间的差值是0.
*/
#include <stdio.h>
#include <math.h>
int main(int argc,const char *argv[])
{
   int n;
    printf("输入一个整数n代表数列中整数的个数\n");
    scanf("%d", &n);
    int num[n];
    int max=0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
        if(max<num[i])
            max = num[i];
    }

    int min = max; // 初始化最小差值为最大可能的整数
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int diff = abs(num[i] - num[j]); // 计算差值
            if (diff < min)
            {
                min = diff; // 更新最小差值
            }
        }
    }
    printf("%d\n", min); // 输出最小差值
   return 0;
}
