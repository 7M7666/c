#include <stdio.h>

int main() {
    int n, max = 0, min = 0;
    printf("�����������������ĸ��� n:\n");
    scanf("%d", &n);
    int num;
    printf("�������1������:\n");
    scanf("%d", &num);
    while (num == 0||num<0) {
            printf("������������������������\n");
            scanf("%d", &num);
        }
    min = num;
    for (int i = 1; i < n; i++) {
        printf("������� %d ������:\n", i+1);
        scanf("%d", &num);
        //��ֹ�û����벻�Ϸ�
        if (num <= 0) {
            printf("������������������������\n");
            return 1;
        }
        // ���������Сֵ
        if (num > max) {
            max = num;
        }
        if (num < min) {
            min = num;
        }
    }
    printf("���ֵ��: %d\n", max);
    printf("��Сֵ��: %d\n", min);

    return 0;
}
