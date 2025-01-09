#include <stdio.h>

int main(int argc,const char *argv[])
{
   // 读取指令数量
      int n;
      printf("请输入指令的数量n: ");
      scanf("%d", &n);
      while (n < 1 || n > 100) {
         printf("输入不合法，请重新输入指令数量n\n");
         scanf("%d", &n);
      }
    // 读取购买的票数
      int p[100];
      int sum = 0;
      for (int i = 0; i < n; i++) {
         printf("请输入第 %d 次购买的票数（1 - 5之间）: ", i + 1);
         scanf("%d", &p[i]);
         while (p[i] > 5 || p[i] < 1) {
            printf("不合法，请重新输入，一次最多买5张，此次请重新输入第 %d 次购买的票数: ", i + 1);
            scanf("%d", &p[i]);
         }
         sum += p[i];
         if (sum > 100) {
            printf("票数买超过了100张\n");
            return 1;
         }
      }
   
    // 初始化座位数组，标记所有座位为未占用（这里用0表示未占用，1表示已占用）
      int seat[20][5];
      for (int i = 0; i < 20; i++) {
         for (int j = 0; j < 5; j++) {
            seat[i][j] = 0; 
            } 
         }
      // 处理每条购票指令并分配座位
      for (int i = 0; i < n; i++) {
         int tickets = p[i];
         int assigned = 0;

        // 先尝试在同一排找到相邻的空座位
         for (int row = 0; row < 20; row++) {
            int empty = 0;
            for (int col = 0; col < 5; col++) {
                  if (seat[row][col] == 0) {
                     empty++;
                     if (empty == tickets) {
                        // 找到了足够的相邻空座位，分配并标记为已占用
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

        // 如果没有找到相邻的空座位，就在所有空座位中找编号最小的几个
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
