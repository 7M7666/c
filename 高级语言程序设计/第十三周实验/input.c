#include "student.h"
#include <stdio.h>
Student students[10];
void input()
{
    for (int i = 0; i < 10; i++)
    {
        printf("�������%d��ѧ������ѧ�ɼ�",i+1);
        scanf("%lf", &students[i].math);
        printf("�������%d��ѧ�������ĳɼ�",i+1);
        scanf("%lf", &students[i].chinese);
        printf("�������%d��ѧ����Ӣ��ɼ�",i+1);
        scanf("%lf", &students[i].english);
    }
    
}