#include <stdio.h>

int main(int argc, const char *argv[]) {
    int n;
    printf("�������̵�ĸ���n\n");
    scanf("%d", &n);

    int prices[n];
    for (int i = 0; i < n; i++) {
        printf("�������һ���%d���̵�Ĳ˼�\n", i + 1);
        scanf("%d", &prices[i]);
    }

    printf("�ڶ���ÿ���̵�Ĳ˼����£�\n");
    for (int i = 0; i < n; i++) {
        int average_price;
        if (i == 0) {
            average_price = (prices[i] + prices[i + 1]) / 2;
        } else if (i == n - 1) {
            average_price = (prices[i] + prices[i - 1]) / 2;
        } else {
            average_price = (prices[i - 1] + prices[i] + prices[i + 1]) / 3;
        }
        printf("�ڶ����%d���̵�Ĳ˼���%d\n", i + 1, average_price);
    }

    return 0;
}
