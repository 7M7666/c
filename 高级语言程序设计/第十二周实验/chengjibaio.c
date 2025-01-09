#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 定义学生结构体
typedef struct Student {
    char id[20];    // 学号
    char name[50];  // 姓名
    int english;    // 英语成绩
    int math;       // 数学成绩
    int chinese;    // 语文成绩
} Student;

void swap(Student *a, Student *b);
void sortEnglish(Student *stu, int n);
void sortMath(Student *stu, int n);
void sortChinese(Student *stu, int n);

int main() {
    int num;
    printf("请输入学生的数量: ");
    scanf("%d", &num);
    Student *stu = (Student *)malloc(num * sizeof(Student));
    // 录入学生信息
    for (int i = 0; i < num; i++) {
        printf("请输入第 %d 个学生的学号、姓名、英语成绩、数学成绩、语文成绩（用空格隔开）:\n", i + 1);
        scanf("%s %s %d %d %d", stu[i].id, stu[i].name, &stu[i].english, &stu[i].math, &stu[i].chinese);
        getchar();  // 吸收换行符
    }

    // 按照英语成绩排序并输出
    sortEnglish(stu, num);
    printf("按照英语成绩从小到大排序后的结果：\n");
    for (int i = 0; i < num; i++) {
        printf("学号: %s  姓名: %s\n", stu[i].id, stu[i].name);
    }

    // 按照数学成绩排序并输出
    sortMath(stu, num);
    printf("按照数学成绩从小到大排序后的结果：\n");
    for (int i = 0; i < num; i++) {
        printf("学号: %s  姓名: %s\n", stu[i].id, stu[i].name);
    }

    // 按照语文成绩排序并输出
    sortChinese(stu, num);
    printf("按照语文成绩从小到大排序后的结果：\n");
    for (int i = 0; i < num; i++) {
        printf("学号: %s  姓名: %s\n", stu[i].id, stu[i].name);
    }

    free(stu);
    return 0;
}

// 交换两个学生结构体的函数
void swap(Student *a, Student *b) {
    Student temp = *a;
    *a = *b;
    *b = temp;
}

// 按照英语成绩排序的函数
void sortEnglish(Student *stu, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (stu[j].english > stu[j + 1].english) {
                swap(&stu[j], &stu[j + 1]);
            }
        }
    }
}

// 按照数学成绩排序的函数
void sortMath(Student *stu, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (stu[j].math > stu[j + 1].math) {
                swap(&stu[j], &stu[j + 1]);
            }
        }
    }
}

// 按照语文成绩排序的函数
void sortChinese(Student *stu, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (stu[j].chinese > stu[j + 1].chinese) {
                swap(&stu[j], &stu[j + 1]);
            }
        }
    }
}

