//Բ�����
#include <stdio.h>
#define PI 3.1415925

int main(int argc,const char *argv[])
{
    //��ȡ1-15Բ�İ뾶
    int r[15] ;
    for (int i = 0; i < 15;i++){
        r[i] = i + 1;
    }
    //��ȡ���ǵ����
    double s[15];
    for (int i = 0; i < 15;i++){
        s[i] = r[i] * r[i] * PI;
    }
    printf("��������30��100֮���Բ���\n");
    for (int i = 0; i < 15;i++){
        if(s[i]>30&&s[i]<100){
            printf("�뾶��%d��Բ�������%.2f\n", r[i], s[i]);
        }
    }
        return 0;
}
