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

// 声明排序函数
void engsort(students stu[], int n); // 按英语成绩升序排序
void mathsort(students stu[], int n); // 按数学成绩升序排序
void chinesesort(students stu[], int n); // 按语文成绩升序排序
void sort(students stu[], int n); // 综合排序函数

int main(int argc, const char *argv[])
{
    FILE *fp = NULL;
    students stu[50];
    int n;

    // 打开文件
    if ((fp = fopen("student.dat", "rb")) == NULL)
    {
        printf("无法打开文件！\n");
        exit(1);
    }

    // 读取文件数据
    n = fread(stu, sizeof(students), 50, fp);
    if (n == 0)
    {
        printf("文件为空或读取失败！\n");
        fclose(fp);
        exit(1);
    }

    // 关闭文件
    fclose(fp);

    // 调用综合排序函数
    sort(stu, n);

    return 0;
}

// 按英语成绩升序排序
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

    // 输出排序后的学生信息
    printf("按英语成绩升序排序后的学生信息：\n");
    printf("学号\t姓名\t英语\t数学\t语文\n");
    for (int i = 0; i < n; i++)
    {
        printf("%s\t%s\t%d\t%d\t%d\n",
               stu[i].num, stu[i].name, stu[i].english, stu[i].math, stu[i].chinese);
    }
    printf("\n");
}

// 按数学成绩升序排序
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

    // 输出排序后的学生信息
    printf("按数学成绩升序排序后的学生信息：\n");
    printf("学号\t姓名\t英语\t数学\t语文\n");
    for (int i = 0; i < n; i++)
    {
        printf("%s\t%s\t%d\t%d\t%d\n",
               stu[i].num, stu[i].name, stu[i].english, stu[i].math, stu[i].chinese);
    }
    printf("\n");
}

// 按语文成绩升序排序
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

    // 输出排序后的学生信息
    printf("按语文成绩升序排序后的学生信息：\n");
    printf("学号\t姓名\t英语\t数学\t语文\n");
    for (int i = 0; i < n; i++)
    {
        printf("%s\t%s\t%d\t%d\t%d\n",
               stu[i].num, stu[i].name, stu[i].english, stu[i].math, stu[i].chinese);
    }
    printf("\n");
}

// 综合排序函数
void sort(students stu[], int n)
{
    // 按英语成绩排序
    engsort(stu, n);

    // 按数学成绩排序
    mathsort(stu, n);

    // 按语文成绩排序
    chinesesort(stu, n);
}