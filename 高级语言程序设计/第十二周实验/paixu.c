#include <stdio.h>

// ������������ָ����ָ���ֵ�ĺ�������
void swap(int *a, int *b);

int main(int argc, const char *argv[])
{
    int a[3][10];
    // ��ʾ�û������ά���������
    printf("������һ��[3][10]���������\n");
    // ���ѭ�������У���ȷ��ȡÿһ�е�Ԫ�ش����ά����
    for (int i = 0; i < 3; i++)
    {
        // �ڲ�ѭ��������
        for (int j = 0; j < 10; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // ��ÿһ�н���ð��������ȷ��˫��ѭ������
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
        printf("��%d�д�С�����˳������:", i + 1);
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