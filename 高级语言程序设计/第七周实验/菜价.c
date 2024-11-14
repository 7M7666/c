#include <stdio.h>

int main(int argc, const char *argv[]) {
    int n;
    printf("请输入商店的个数n\n");
    scanf("%d", &n);

    int prices[n];
    for (int i = 0; i < n; i++) {
        printf("请输入第一天第%d个商店的菜价\n", i + 1);
        scanf("%d", &prices[i]);
    }

    printf("第二天每个商店的菜价如下：\n");
    for (int i = 0; i < n; i++) {
        int average_price;
        if (i == 0) {
            average_price = (prices[i] + prices[i + 1]) / 2;
        } else if (i == n - 1) {
            average_price = (prices[i] + prices[i - 1]) / 2;
        } else {
            average_price = (prices[i - 1] + prices[i] + prices[i + 1]) / 3;
        }
        printf("第二天第%d个商店的菜价是%d\n", i + 1, average_price);
    }

    return 0;
}
