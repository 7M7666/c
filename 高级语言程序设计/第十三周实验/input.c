#include "student.h"
#include <stdio.h>
Student students[10];
void input()
{
    for (int i = 0; i < 10; i++)
    {
        printf("请输入第%d个学生的数学成绩",i+1);
        scanf("%lf", &students[i].math);
        printf("请输入第%d个学生的语文成绩",i+1);
        scanf("%lf", &students[i].chinese);
        printf("请输入第%d个学生的英语成绩",i+1);
        scanf("%lf", &students[i].english);
    }
    
}