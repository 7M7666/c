#include <stdio.h>

int main(int argc,const char *argv[])
{
    int year, month, day;
    int daysinmonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int totaldays = 0;
    int i;
    //��ȡ��ݡ��·ݺ�����
    printf("���������: ");
    scanf("%d", &year);
    printf("�������·�: ");
    scanf("%d", &month);
    printf("����������: ");
    scanf("%d", &day);

    // �ж��Ƿ�Ϊ����
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        daysinmonth[2] = 29; // ����2����29��
    }

    // ����������
    for (i = 1; i < month; i++) {
        totaldays += daysinmonth[i];
    }
    totaldays += day;

    // ������
    printf("��һ����%d��ĵ�%d�졣\n", year, totaldays);

    return 0;
}
