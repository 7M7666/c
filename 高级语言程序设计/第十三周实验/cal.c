#include "student.h"
#include <stdio.h>

void cal()
{
    double summath=0,sumchinese=0,sumenglish=0,all=0;
    for (int i = 0; i < 10; i++)
    {
        summath += students[i].math;
        sumchinese += students[i].chinese;
        sumenglish += students[i].english;
        students[i].all = (students[i].math + students[i].chinese + students[i].english)/3;
    }
    summath /= 10;
    sumchinese /= 10;
    sumenglish /= 10;
    printf("��ѧƽ���ɼ���%.2f\n", summath);
    printf("����ƽ���ɼ���%.2f\n", sumchinese);
    printf("Ӣ��ƽ���ɼ���%.2f\n", sumenglish);
    printf("����ƽ���ɼ�����\n");
    for (int i = 0; i < 10; i++)
    {
        printf("��%d��ѧ����ƽ���ɼ���%.2f\n", i+1,students[i].all);
    }
    
}