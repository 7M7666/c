#include <stdio.h>

int main(int argc, const char *argv[])
{
    double q = 1, w = 0;
    int cnt = 0;
    int input;

    printf("������һЩ����������0ֹͣ\n");
    while (1)
    {
        scanf("%d", &input);
        if (input == 0)
        {
            break;
        }
        if (input % 2 == 0)
        {
            q *= input;
        }
        else
        {
            w += input;
            cnt++;
        }
    }
    if (cnt > 0)
    {
        w /= cnt;
    }
    printf("ż���ĳ˻���%.2lf\n", q);
    printf("������ƽ������%.2f\n", w);
    return 0;
}
