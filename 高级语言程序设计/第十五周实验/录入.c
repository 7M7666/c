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
    printf("������Ҫ�����ѧ��������������50��\n");
    scanf("%d",&n);
    printf("����ѧ����Ϣ��ѧ�ţ�������Ӣ��ɼ�����ѧ�ɼ������ĳɼ�\n");
    for (int i = 0; i < n;i++)
    {
        scanf("%s", stu[i].num);//�ַ�������Ҫand����
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
    printf("ѧ����Ϣ�ѳɹ�д���ļ� student.dat\n");
    return 0;
}
