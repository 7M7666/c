#include <stdio.h>
#include <stdlib.h>

// 学生结构体，score改为指针以便动态分配内存
typedef struct stud{
    char num [50];
    char name [50];
    int gender;
    int *score;
} stud;

// 数据输入函数，将学生信息写入文件
void data_in(stud *stu, int n) {
    FILE *fp;
    fp = fopen("student.dat", "ab");//追加二进制
    if (fp == NULL) {
        printf("Error opening file!\n");
        return;
    }
    for (int i = 0; i < n; i++) {
        // 这里需要确保每个 stu[i].score 已经正确分配内存并初始化
        fwrite(&stu[i], sizeof(stud), 1, fp);
    }
    fclose(fp);
}

int main(int argc, const char *argv[]) {
    int n, m;
    printf("please put the nums of stu\n");
    scanf("%d", &n);
    printf("please put the nums of score\n");
    scanf("%d", &m);

    // 检查输入的有效性
    if (n <= 0 || m <= 0) {
        printf("Invalid input! n and m should be positive integers.\n");
        return 1;
    }

    // 动态分配内存创建学生结构体数组
    stud *stu = (stud *)malloc(n * sizeof(stud));
    if (stu == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // 为每个学生的score分配内存（这里假设每个学生有m个成绩）
    for (int i = 0; i < n; i++) {
        stu[i].score = (int *)malloc(m * sizeof(int));
        if (stu[i].score == NULL) {
            printf("Memory allocation for score failed!\n");
            // 释放已分配的内存
            for (int j = 0; j < i; j++) {
                free(stu[j].score);
            }
            free(stu);
            return 1;
        }
    }

    // 这里可以添加输入学生信息的代码

    // 调用data_in函数将学生信息写入文件
    data_in(stu, n);

    // 释放动态分配的内存
    for (int i = 0; i < n; i++) {
        free(stu[i].score);
    }
    free(stu);

    return 0;
}