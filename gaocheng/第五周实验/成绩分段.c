#include <stdio.h>
int main() {
    int scores[4];
    double sum = 0.0;
    double average_score=0;
    int i=0;
    // ���û�����ȡ���ſγ̵ķ���
    printf("���������ſγ̵ķ������ÿո������: ");
    for (i = 0; i < 4; i++) {
        scanf("%d", &scores[i]);
        sum += scores[i];
    }
    // ����ƽ����
    average_score = sum / 4;

    // ʹ�� switch ������жϳɼ��ȼ�
    printf("���ſγ̵�ƽ������: %.2f\n", average_score);
    switch ((int)average_score / 10) {
        case 9:
        case 10:
            printf("�ɼ�����\n");
            break;
        case 7:
        case 8:
            printf("�ɼ�����\n");
            break;
        case 6:
            printf("�ɼ�����\n");
            break;
        default:
            printf("�ɼ�������\n");
            break;
    }

    return 0;
}
