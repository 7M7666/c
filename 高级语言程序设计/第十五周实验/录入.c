#include <stdio.h>
#include <stdlib.h>

typedef struct students
{
    char num[50];
    char name[50];
    int english;
    int math;
    int chinese;
}students;

int main(int argc,const char *argv[])
{
    FILE *fp=NULL;
    students stu[50];
    int n;
    printf("输入你要输入的学生数量，不超过50个\n");
    scanf("%d",&n);
    printf("输入学生信息：学号，姓名，英语成绩，数学成绩，语文成绩\n");
    for (int i = 0; i < n;i++)
    {
        scanf("%s", stu[i].num);//字符串不需要and符号
        scanf("%s", stu[i].name);
        scanf("%d", &stu[i].english);
        scanf("%d", &stu[i].math);
        scanf("%d", &stu[i].chinese);
    }
    if((fp=fopen("student.dat","w+b"))==NULL)
    {
        printf("can not open the file!");
        exit(1);
    }
    fwrite(stu, sizeof(students), n, fp);
    fclose(fp);
    printf("学生信息已成功写入文件 student.dat\n");
    return 0;
}
