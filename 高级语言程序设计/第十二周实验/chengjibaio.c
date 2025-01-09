#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// ����ѧ���ṹ��
typedef struct Student {
    char id[20];    // ѧ��
    char name[50];  // ����
    int english;    // Ӣ��ɼ�
    int math;       // ��ѧ�ɼ�
    int chinese;    // ���ĳɼ�
} Student;

void swap(Student *a, Student *b);
void sortEnglish(Student *stu, int n);
void sortMath(Student *stu, int n);
void sortChinese(Student *stu, int n);

int main() {
    int num;
    printf("������ѧ��������: ");
    scanf("%d", &num);
    Student *stu = (Student *)malloc(num * sizeof(Student));
    // ¼��ѧ����Ϣ
    for (int i = 0; i < num; i++) {
        printf("������� %d ��ѧ����ѧ�š�������Ӣ��ɼ�����ѧ�ɼ������ĳɼ����ÿո������:\n", i + 1);
        scanf("%s %s %d %d %d", stu[i].id, stu[i].name, &stu[i].english, &stu[i].math, &stu[i].chinese);
        getchar();  // ���ջ��з�
    }

    // ����Ӣ��ɼ��������
    sortEnglish(stu, num);
    printf("����Ӣ��ɼ���С���������Ľ����\n");
    for (int i = 0; i < num; i++) {
        printf("ѧ��: %s  ����: %s\n", stu[i].id, stu[i].name);
    }

    // ������ѧ�ɼ��������
    sortMath(stu, num);
    printf("������ѧ�ɼ���С���������Ľ����\n");
    for (int i = 0; i < num; i++) {
        printf("ѧ��: %s  ����: %s\n", stu[i].id, stu[i].name);
    }

    // �������ĳɼ��������
    sortChinese(stu, num);
    printf("�������ĳɼ���С���������Ľ����\n");
    for (int i = 0; i < num; i++) {
        printf("ѧ��: %s  ����: %s\n", stu[i].id, stu[i].name);
    }

    free(stu);
    return 0;
}

// ��������ѧ���ṹ��ĺ���
void swap(Student *a, Student *b) {
    Student temp = *a;
    *a = *b;
    *b = temp;
}

// ����Ӣ��ɼ�����ĺ���
void sortEnglish(Student *stu, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (stu[j].english > stu[j + 1].english) {
                swap(&stu[j], &stu[j + 1]);
            }
        }
    }
}

// ������ѧ�ɼ�����ĺ���
void sortMath(Student *stu, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (stu[j].math > stu[j + 1].math) {
                swap(&stu[j], &stu[j + 1]);
            }
        }
    }
}

// �������ĳɼ�����ĺ���
void sortChinese(Student *stu, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (stu[j].chinese > stu[j + 1].chinese) {
                swap(&stu[j], &stu[j + 1]);
            }
        }
    }
}

