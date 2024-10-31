#include "stdio.h"
#include "string.h"
#include "stdlib.h"

const int reglen = 94;       //ÿ��(��)�� 94 λ(��)
const int font_width  = 16;  // ���ֵ�����(����)
const int font_height = 16;  // ���ֵ���߶�(����)
const int dotsize = 16 * 16/8;   //һ�����ֵ�����ռ���ֽ���
const int subcode = 0xa0;      //����������λ��Ĳ�ֵ

char *font_file_name = "chs16.fon"; // �����ֿ��ļ���
char str[] = "��";    //Ҫ��ʾ������Ϣ�ĺ���
char bindot[16 * 16/8] = {0};   //�洢������Ϣ������

void printcharbindot(char* bindot, int dotlen);
int main(int argc, char* argv[])
{
    FILE *fp = fopen(font_file_name, "rb");
    int string_size = font_width * font_height;


    int i=0,j=0;
   	int offset=0;
	unsigned char regcode;  //����
    unsigned char bitcode;  //λ�� 

    // ������λ�룬
    regcode = (unsigned char)str[i]-subcode;
    bitcode = (unsigned char)str[i+1]-subcode;
// 
//    �ټ��㺺�����ֿ��е�λ�ã������ó����ַ������������ļ��е�ƫ��

	offset=((regcode-1)*reglen+bitcode-1)*dotsize;
    
    // ���ֿ��ļ��ж�ȡ���������
    fseek(fp, offset, SEEK_SET);
    fread(bindot, sizeof(bindot),1, fp);
    
    //����������Ϣ
    printcharbindot(bindot, dotsize);
    
    fclose(fp);
    system("pause");
    return 0;
}

//��˳����������ÿһλ��Ϣ
void printcharbindot(char* bindot, int len)
{
    int charnum = 0;  //��ǰ�ֽں�
    int bitnum  = 0;  //�Ѷ�ȡ��λ��
    int bitindex =0;  //��ǰλ��
    int bitvalue;     //��ǰλ��ֵ
    for (charnum =0; charnum < len; ++charnum)
    {
        //�Ӹߵ���˳�����һ���ֽڵ�ÿλ��Ϣ
        for(bitindex = 7;bitindex>=0; --bitindex)
        {
            //�����ǰ�ֽڵ�bitindexλ��ֵ
            bitvalue  = ((bindot[charnum]>>bitindex) & 0x1 );  
            printf("%c", bitvalue+'0');

            //��12λ���һ��
            if ((++bitnum %16) == 0)
                printf("\n");
        }
    }
}