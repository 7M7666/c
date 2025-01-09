#include <stdio.h>
#include <stdbool.h>

// ��������
void inp(int a[], int n);
void cum(int a[], int b[], int n);
void gr(int a[], double c[], int n);
void prt(int b[], double c[], int n);

int main() {
    int a[4];      // �洢�ĸ����ȵ����۶�
    int b[4];      // �洢�ۼ����۶�
    double c[3];   // �洢����������

    // �����ĸ����ȵ����۶�
    printf("�������ĸ����ȵ����۶����Ϊ����������\n");
    inp(a, 4);

    // �����ۼ����۶�
    cum(a, b, 4);

    // ���㻷��������
    gr(a, c, 4);

    // ������
    prt(b, c, 4);

    return 0;
}

// �������۶������������֤
void inp(int a[], int n) {
    for (int i = 0; i < n; i++) {
        while (1) {
            printf("��%d�������۶�: ", i + 1);
            if (scanf("%d", &a[i]) == 1 && a[i] > 0) {
                break;  // ������Ч������ѭ��
            } else {
                // �����������
                while (getchar() != '\n');
                printf("������Ч��������һ����������\n");
            }
        }
    }
}

// �����ۼ����۶�
void cum(int a[], int b[], int n) {
    b[0] = a[0];
    for (int i = 1; i < n; i++) {
        b[i] = b[i - 1] + a[i];
    }
}

// ���㻷��������
void gr(int a[], double c[], int n) {
    for (int i = 0; i < n - 1; i++) {
        if (a[i] == 0) {
            c[i] = 0.0;  // �����һ�������۶�Ϊ0����������Ϊ0
        } else {
            c[i] = ((double)(a[i + 1] - a[i]) / a[i]) * 100;
        }
    }
}

// ������
void prt(int b[], double c[], int n) {
    // ����ۼ����۶�
    printf("\n���������������ۼ����۶�:\n");
    for (int i = 0; i < n; i++) {
        printf("��%d�����ۼ����۶�: %d\n", i + 1, b[i]);
    }

    // �������������
    printf("\n��һ��������������ȵĻ���������:\n");
    for (int i = 0; i < n - 1; i++) {
        printf("��%d���Ȼ���������: %.2f%%\n", i + 2, c[i]);
    }
}