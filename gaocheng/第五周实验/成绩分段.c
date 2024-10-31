#include <stdio.h>
int main() {
    int scores[4];
    double sum = 0.0;
    double average_score=0;
    int i=0;
    // 从用户处获取四门课程的分数
    printf("请输入四门课程的分数（用空格隔开）: ");
    for (i = 0; i < 4; i++) {
        scanf("%d", &scores[i]);
        sum += scores[i];
    }
    // 计算平均分
    average_score = sum / 4;

    // 使用 switch 语句来判断成绩等级
    printf("四门课程的平均分是: %.2f\n", average_score);
    switch ((int)average_score / 10) {
        case 9:
        case 10:
            printf("成绩优秀\n");
            break;
        case 7:
        case 8:
            printf("成绩良好\n");
            break;
        case 6:
            printf("成绩及格\n");
            break;
        default:
            printf("成绩不及格\n");
            break;
    }

    return 0;
}
