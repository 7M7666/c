#include <stdio.h>

#define MAX 500

int main() {
    int n;
    int matrix[MAX][MAX];
    int result[MAX * MAX];

    // 读取矩阵大小
    printf("输入矩阵大小\n");
    scanf("%d", &n);

    // 读取矩阵元素
    printf("输入矩阵元素\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int index = 0;
    int x = 0, y = 0;
    int direction = 1; // 1表示向右上，-1表示向左下

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

    // 输出扫描结果
    printf("结果如下：\n");
    for (int i = 0; i < n * n; i++) {
        printf("%d ", result[i]);
    }

    return 0;
}