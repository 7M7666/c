#include <stdio.h>
#include <stdbool.h>

// ��������
void inp(int s[], int n);  // ����ɼ�
double avg(int s[], int n); // ����ƽ���ɼ�
void prt(int s[], int n, double a); // ����ɼ���ƽ���ɼ�

int main() {
    int s[4];  // �洢���ſεĳɼ�
    double a;  // �洢ƽ���ɼ�

    // �������ſεĳɼ�
    printf("���������ſεĳɼ���0-100����\n");
    inp(s, 4);

    // ����ƽ���ɼ�
    a = avg(s, 4);

    // ����ɼ���ƽ���ɼ�
    prt(s, 4, a);

    return 0;
}

// ����ɼ���������������֤
void inp(int s[], int n) {
    for (int i = 0; i < n; i++) {
        while (1) {
            printf("��%d�ſγɼ�: ", i + 1);
            if (scanf("%d", &s[i]) == 1 && s[i] >= 0 && s[i] <= 100) {
                break;  // ������Ч������ѭ��
            } else {
                // �����������
                while (getchar() != '\n');
                printf("������Ч�������� 0 �� 100 ֮���������\n");
            }
        }
    }
}

// ����ƽ���ɼ�
double avg(int s[], int n) {
    double sum = 0;
    for (int i = 0; i < n; i++) {
        sum += s[i];
    }
    return sum / n;
}

// ����ɼ���ƽ���ɼ�
void prt(int s[], int n, double a) {
    printf("\n���ſεĳɼ��ǣ�\n");
    for (int i = 0; i < n; i++) {
        printf("��%d�ſγɼ�: %d\n", i + 1, s[i]);
    }
    printf("���ſε�ƽ���ɼ���: %.2f\n", a);
}