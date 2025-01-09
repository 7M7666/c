#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 1000

// 判断两个字符是否相等
int charequal(char a, char b, int sensitive);
// 判断字符串s是否在lines中存在
int exits(char *s, char *lines, int sensitive);
// 在多行文字中查找包含字符串s的行并输出
int ismatch(char *s, char *lines[], int sensitive, int line);

int main(int argc, const char *argv[])
{
    char s[MAX];
    int sensitive;
    int line;

    // 输入要匹配的字符串
    printf("输入要匹配的字符串\n");
    scanf("%s", s);

    // 输入大小写敏感选项
    printf("输入大小写敏感选项\n");
    scanf("%d", &sensitive);

    // 输入行数
    printf("输入行数\n");
    scanf("%d", &line);

    char *lines[line];
    //为每行字符串分配内存并存储
    printf("输入多行文字\n");
    for (int i = 0; i < line; i++)
    {
        lines[i] = (char *)malloc((MAX + 1) * sizeof(char));
        scanf("%s", lines[i]);
    }
    printf("结果如下：\n");
    // 调用ismatch函数进行匹配并输出结果
    ismatch(s, lines, sensitive, line);

    // 释放为每行字符串分配的内存
    for (int i = 0; i < line; i++)
    {
        free(lines[i]);
    }

    return 0;
}

int charequal(char a, char b, int sensitive)
{
    if (sensitive)
    {
        return a == b;
    }
    else
    {
        return ((a >= 'A' && a <= 'Z'? a + 32 : a) == (b >= 'A' && b <= 'Z'? b + 32 : b));
    }
}

int exits(char *s, char *lines, int sensitive)
{
    int slen = strlen(s);
    int llen = strlen(lines);

    for (int i = 0; i <= llen - slen; i++)
    {
        int j = 0;
        for (j; j < slen; j++)
        {
            if (!charequal(s[j], lines[i + j], sensitive))
                break;
        }
        if (j == slen)
            return 1;
    }
    return 0;
}

int ismatch(char *s, char *lines[], int sensitive, int line)
{
    for (int i = 0; i < line; i++)
    {
        if (exits(s, lines[i], sensitive))
        {
            printf("%s\n", lines[i]);
        }
    }
}