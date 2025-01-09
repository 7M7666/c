#include <stdio.h>

// ��������
void cal(int year, int month);  // calendar -> cal
int max(int year, int month);   // maxday -> max
int wek(int year, int month);   // weekday1 -> wek

int main() {
    int year, month, choice;
    
    while (1) {
        printf("\n=== ������ѯϵͳ ===\n");
        printf("1. ��ѯ����\n");
        printf("2. �˳�����\n");
        printf("��ѡ�����: ");
        scanf("%d", &choice);
        
        if (choice == 2) {
            printf("�������˳�\n");
            break;
        }
        
        if (choice != 1) {
            printf("��Ч��ѡ�����������룡\n");
            continue;
        }
        
        printf("���������: ");
        scanf("%d", &year);
        
        while (year < 1900) {
            printf("������ݱ�����ڵ���1900\n");
            printf("�������������: ");
            scanf("%d", &year);
        }
        
        printf("�������·�: ");
        scanf("%d", &month);
        
        while (month < 1 || month > 12) {
            printf("�����·ݱ�����1��12֮��\n");
            printf("�����������·�: ");
            scanf("%d", &month);
        }
        
        cal(year, month);
    }
    return 0;
}

int max(int year, int month) {
    int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    return (month == 2 && year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) 
           ? 29 : days[month - 1];
}

int wek(int year, int month) {
    static int t[] = {0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4};
    year -= month < 3;
    return (year + year/4 - year/100 + year/400 + t[month-1] + 1) % 7;
}

void cal(int year, int month) {
    char *weekdays[] = {"��", "һ", "��", "��", "��", "��", "��"};
    int start = wek(year, month);
    int days = max(year, month);
    
    printf("\n\t\t%d��%d��\n", year, month);
    printf("\n");
    
    // ��ӡ����ͷ
    for (int i = 0; i < 7; i++) {
        printf("%s\t", weekdays[i]);
    }
    printf("\n");
    
    // ��ӡ����ǰ�Ŀո�
    for (int i = 0; i < start; i++) {
        printf("\t");
    }
    
    // ��ӡ����
    for (int i = 1; i <= days; i++) {
        printf("%d\t", i);
        if ((i + start) % 7 == 0) {
            printf("\n");
        }
    }
    printf("\n\n");
}
