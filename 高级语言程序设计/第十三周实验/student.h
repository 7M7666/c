#ifndef STUDENT_H
#define STUDENT_H

// 结构体表示学生成绩信息
typedef struct Student {
    double math;
    double english;
    double chinese;
    double all;
} Student;

extern Student students[10];
void cal();
void input();

#endif