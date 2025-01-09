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
    printf("数学平均成绩：%.2f\n", summath);
    printf("语文平均成绩：%.2f\n", sumchinese);
    printf("英语平均成绩：%.2f\n", sumenglish);
    printf("个人平均成绩如下\n");
    for (int i = 0; i < 10; i++)
    {
        printf("第%d个学生的平均成绩是%.2f\n", i+1,students[i].all);
    }
    
}