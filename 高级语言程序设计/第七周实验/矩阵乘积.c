#include <stdio.h>

int main(int argc,const char *argv[])
{
    int A[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int B[3][2] = {{1, 4}, {2, 5}, {3, 6}};
    int C[2][2]; // 结果

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            C[i][j] = 0;
            for (int k = 0; k < 3; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    printf("结果是:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
