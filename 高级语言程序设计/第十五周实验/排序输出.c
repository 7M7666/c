#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct students
{
    char num[50];
    char name[50];
    int english;
    int math;
    int chinese;
} students;

// ����������
void engsort(students stu[], int n); // ��Ӣ��ɼ���������
void mathsort(students stu[], int n); // ����ѧ�ɼ���������
void chinesesort(students stu[], int n); // �����ĳɼ���������
void sort(students stu[], int n); // �ۺ�������

int main(int argc, const char *argv[])
{
    FILE *fp = NULL;
    students stu[50];
    int n;

    // ���ļ�
    if ((fp = fopen("student.dat", "rb")) == NULL)
    {
        printf("�޷����ļ���\n");
        exit(1);
    }

    // ��ȡ�ļ�����
    n = fread(stu, sizeof(students), 50, fp);
    if (n == 0)
    {
        printf("�ļ�Ϊ�ջ��ȡʧ�ܣ�\n");
        fclose(fp);
        exit(1);
    }

    // �ر��ļ�
    fclose(fp);

    // �����ۺ�������
    sort(stu, n);

    return 0;
}

// ��Ӣ��ɼ���������
void engsort(students stu[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (stu[j].english < stu[min].english)
            {
                min = j;
            }
        }
        if (min != i)
        {
            students temp = stu[i];
            stu[i] = stu[min];
            stu[min] = temp;
        }
    }

    // ���������ѧ����Ϣ
    printf("��Ӣ��ɼ�����������ѧ����Ϣ��\n");
    printf("ѧ��\t����\tӢ��\t��ѧ\t����\n");
    for (int i = 0; i < n; i++)
    {
        printf("%s\t%s\t%d\t%d\t%d\n",
               stu[i].num, stu[i].name, stu[i].english, stu[i].math, stu[i].chinese);
    }
    printf("\n");
}

// ����ѧ�ɼ���������
void mathsort(students stu[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (stu[j].math < stu[min].math)
            {
                min = j;
            }
        }
        if (min != i)
        {
            students temp = stu[i];
            stu[i] = stu[min];
            stu[min] = temp;
        }
    }

    // ���������ѧ����Ϣ
    printf("����ѧ�ɼ�����������ѧ����Ϣ��\n");
    printf("ѧ��\t����\tӢ��\t��ѧ\t����\n");
    for (int i = 0; i < n; i++)
    {
        printf("%s\t%s\t%d\t%d\t%d\n",
               stu[i].num, stu[i].name, stu[i].english, stu[i].math, stu[i].chinese);
    }
    printf("\n");
}

// �����ĳɼ���������
void chinesesort(students stu[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (stu[j].chinese < stu[min].chinese)
            {
                min = j;
            }
        }
        if (min != i)
        {
            students temp = stu[i];
            stu[i] = stu[min];
            stu[min] = temp;
        }
    }

    // ���������ѧ����Ϣ
    printf("�����ĳɼ�����������ѧ����Ϣ��\n");
    printf("ѧ��\t����\tӢ��\t��ѧ\t����\n");
    for (int i = 0; i < n; i++)
    {
        printf("%s\t%s\t%d\t%d\t%d\n",
               stu[i].num, stu[i].name, stu[i].english, stu[i].math, stu[i].chinese);
    }
    printf("\n");
}

// �ۺ�������
void sort(students stu[], int n)
{
    // ��Ӣ��ɼ�����
    engsort(stu, n);

    // ����ѧ�ɼ�����
    mathsort(stu, n);

    // �����ĳɼ�����
    chinesesort(stu, n);
}