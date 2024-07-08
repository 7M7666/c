#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(int argc,char *agrgv[]){
    printf("-------------------数字炸弹--------------------\n");
    int bomb,num,gao,di,player=1;
    srand(time(0));
    bomb=rand()%100+1;
    gao=100;
    di=1;
    printf("炸弹已经放入雷区\n");
    do{
        do{
        printf("玩家%d进入哪个位置 %d-%d?\n",player,di,gao);
        scanf("%d",&num);

    }while(num<di||num>gao);//限制玩家输入的区间上下
    if(num==bomb)
    printf("哈哈哈哈哈你这个笨蛋~%d有炸弹~玩家%d炸了~~\n",bomb,player);
    else{
        if (num>bomb)
        {
            printf("区间%d-%d是安全的\n",num,gao);
            gao=num;
        }else{
            printf("区间%d-%d是安全的\n",di,num);
            di=num;
        }
        
    }
    player=(player==1?2:1);
    }while (num!=bomb);
    
    return 0;
    }