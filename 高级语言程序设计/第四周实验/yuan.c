#include <stdio.h>
#define PI 3.1415926

int main() {
    double r = 0, c = 0, s = 0, v = 0, s1 = 0;

    // ������İ뾶
    printf("��������İ뾶������Ϊ������: ");
    while (1) {
        if (scanf("%lf", &r) == 1 && r > 0) {
            break;  // ������Ч������ѭ��
        } else {
            // �����������
            while (getchar() != '\n');
            printf("������Ч��������һ������: ");
        }
    }

    // ����
    c = 2 * PI * r;            // Բ���ܳ�
    s1 = PI * r * r;           // Բ�����
    s = 4.0 * PI * r * r;      // ��ı����
    v = (4.0 / 3) * PI * r * r * r;  // ������

    // ������
    printf("\n���������£�\n");
    printf("Բ���ܳ���: %.2f\n", c);
    printf("Բ�������: %.2f\n", s1);
    printf("��ı������: %.2f\n", s);
    printf("��������: %.2f\n", v);

    return 0;
}