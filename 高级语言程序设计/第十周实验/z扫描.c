#include <stdio.h>

#define MAX 500

int main() {
    int n;
    int matrix[MAX][MAX];
    int result[MAX * MAX];

    // ��ȡ�����С
    printf("��������С\n");
    scanf("%d", &n);

    // ��ȡ����Ԫ��
    printf("�������Ԫ��\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int index = 0;
    int x = 0, y = 0;
    int direction = 1; // 1��ʾ�����ϣ�-1��ʾ������

    while (index < n * n) {
        result[index] = matrix[x][y];
        index++;

        if (direction == 1) {
            if (x > 0 && y < n - 1) {
                x--;
                y++;
            } else if (x == 0 && y < n - 1) {
                y++;
                direction = -1;
            } else if (y == n - 1) {
                x++;
                direction = -1;
            }
        } else {
            if (x < n - 1 && y > 0) {
                x++;
                y--;
            } else if (x < n - 1 && y == 0) {
                x++;
                y = 0;
                direction = 1;
            } else if (x == n - 1) {
                y++;
                direction = 1;
            }
        }
    }

    // ���ɨ����
    printf("������£�\n");
    for (int i = 0; i < n * n; i++) {
        printf("%d ", result[i]);
    }

    return 0;
}