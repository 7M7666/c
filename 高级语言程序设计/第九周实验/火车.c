#include <stdio.h>

int main(int argc,const char *argv[])
{
   // ��ȡָ������
      int n;
      printf("������ָ�������n: ");
      scanf("%d", &n);
      while (n < 1 || n > 100) {
         printf("���벻�Ϸ�������������ָ������n\n");
         scanf("%d", &n);
      }
    // ��ȡ�����Ʊ��
      int p[100];
      int sum = 0;
      for (int i = 0; i < n; i++) {
         printf("������� %d �ι����Ʊ����1 - 5֮�䣩: ", i + 1);
         scanf("%d", &p[i]);
         while (p[i] > 5 || p[i] < 1) {
            printf("���Ϸ������������룬һ�������5�ţ��˴������������ %d �ι����Ʊ��: ", i + 1);
            scanf("%d", &p[i]);
         }
         sum += p[i];
         if (sum > 100) {
            printf("Ʊ���򳬹���100��\n");
            return 1;
         }
      }
   
    // ��ʼ����λ���飬���������λΪδռ�ã�������0��ʾδռ�ã�1��ʾ��ռ�ã�
      int seat[20][5];
      for (int i = 0; i < 20; i++) {
         for (int j = 0; j < 5; j++) {
            seat[i][j] = 0; 
            } 
         }
      // ����ÿ����Ʊָ�������λ
      for (int i = 0; i < n; i++) {
         int tickets = p[i];
         int assigned = 0;

        // �ȳ�����ͬһ���ҵ����ڵĿ���λ
         for (int row = 0; row < 20; row++) {
            int empty = 0;
            for (int col = 0; col < 5; col++) {
                  if (seat[row][col] == 0) {
                     empty++;
                     if (empty == tickets) {
                        // �ҵ����㹻�����ڿ���λ�����䲢���Ϊ��ռ��
                        for (int k = col - tickets + 1; k <= col; k++) {
                              seat[row][k] = 1;
                            printf("%d ", row * 5 + k + 1);
                        }
                        assigned = 1;
                        break;
                     }
                  } else {
                     empty = 0;
                  }
            }
            if (assigned) {
                  printf("\n");
                  break;
            }
         }

        // ���û���ҵ����ڵĿ���λ���������п���λ���ұ����С�ļ���
         if (!assigned) {
            int aseat = 0;
            for (int row = 0; row < 20 && aseat < tickets; row++) {
                  for (int col = 0; col < 5 && aseat < tickets; col++) {
                     if (seat[row][col] == 0) {
                        seat[row][col] = 1;
                        printf("%d ", row * 5 + col + 1);
                        aseat++;
                     }
                  }
            }
            printf("\n");
         }
      }

   
   return 0;
}
