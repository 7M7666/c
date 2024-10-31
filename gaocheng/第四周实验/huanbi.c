//环比增长率
#include <stdio.h>

int main(int argc,const char *argv[])
 {
    int sales[4]; // 存储四个季度的销售额
    int csales[4]; // 存储各季度累计销售额
    double growthrate[3]; // 存储三个季度的环比增长率
    // 输入四个季度的销售额
    printf("请输入四个季度的销售额\n");
    for (int i = 0; i < 4; i++) 
    {
        scanf("%d", &sales[i]);
    }
    // 计算累计销售额
    csales[0] = sales[0];
    for (int i = 1; i < 4; i++) 
    {
        csales[i] = csales[i - 1] + sales[i];
    }
    // 计算环比增长率
    for (int i = 0; i < 3; i++)
    {
        growthrate[i] = ((double)(sales[i + 1] - sales[i]) / sales[i]) * 100;
    }
    // 输出累计销售额
    printf("各季度自年初起的累计销售额:\n");
    for (int i = 0; i < 4; i++) {
        printf("第%d季度累计销售额: %d\n", i + 1, csales[i]);
    }
    // 输出环比增长率
    printf("第一季度外的三个季度的环比增长率:\n");
    for (int i = 0; i < 3; i++) {
        printf("第%d季度环比增长率: %.2f%%\n", i + 2, growthrate[i]);
    }
    return 0;
}

