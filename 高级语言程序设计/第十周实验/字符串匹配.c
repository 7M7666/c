#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 1000

// �ж������ַ��Ƿ����
int charequal(char a, char b, int sensitive);
// �ж��ַ���s�Ƿ���lines�д���
int exits(char *s, char *lines, int sensitive);
// �ڶ��������в��Ұ����ַ���s���в����
int ismatch(char *s, char *lines[], int sensitive, int line);

int main(int argc, const char *argv[])
{
    char s[MAX];
    int sensitive;
    int line;

    // ����Ҫƥ����ַ���
    printf("����Ҫƥ����ַ���\n");
    scanf("%s", s);

    // �����Сд����ѡ��
    printf("�����Сд����ѡ��\n");
    scanf("%d", &sensitive);

    // ��������
    printf("��������\n");
    scanf("%d", &line);

    char *lines[line];
    //Ϊÿ���ַ��������ڴ沢�洢
    printf("�����������\n");
    for (int i = 0; i < line; i++)
    {
        lines[i] = (char *)malloc((MAX + 1) * sizeof(char));
        scanf("%s", lines[i]);
    }
    printf("������£�\n");
    // ����ismatch��������ƥ�䲢������
    ismatch(s, lines, sensitive, line);

    // �ͷ�Ϊÿ���ַ���������ڴ�
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