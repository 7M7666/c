#include <stdio.h>

int main() {
    int n, max = 0, min = 0;
    printf("请输入序列中整数的个数 n:\n");
    scanf("%d", &n);
    int num;
    printf("请输入第1个整数:\n");
    scanf("%d", &num);
    while (num == 0||num<0) {
            printf("输入错误：请输入非零正整数。\n");
            scanf("%d", &num);
        }
    min = num;
    for (int i = 1; i < n; i++) {
        printf("请输入第 %d 个整数:\n", i+1);
        scanf("%d", &num);
        //防止用户输入不合法
        if (num <= 0) {
            printf("输入错误：请输入非零正整数。\n");
            return 1;
        }
        // 更新最大最小值
        if (num > max) {
            max = num;
        }
        if (num < min) {
            min = num;
        }
    }
    printf("最大值是: %d\n", max);
    printf("最小值是: %d\n", min);

    return 0;
}
