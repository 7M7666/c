/*�����ʽ�������һ�а���һ������n���ڶ��а���n������������������֮��ʹ��һ���ո�ָ��� 
�����ʽ�����һ����������ʾ�𰸡� 
�������룺5 1 5 4 8 20 
���������1 
����˵���������С����������5��4������֮��Ĳ�ֵ��1�� 
�������룺5 9 3 6 1 3 
���������0 
����˵������������ͬ����3������֮��Ĳ�ֵ��0.
*/
#include <stdio.h>
#include <math.h>
int main(int argc,const char *argv[])
{
   int n;
    printf("����һ������n���������������ĸ���\n");
    scanf("%d", &n);
    int num[n];
    int max=0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
        if(max<num[i])
            max = num[i];
    }

    int min = max; // ��ʼ����С��ֵΪ�����ܵ�����
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int diff = abs(num[i] - num[j]); // �����ֵ
            if (diff < min)
            {
                min = diff; // ������С��ֵ
            }
        }
    }
    printf("%d\n", min); // �����С��ֵ
   return 0;
}
