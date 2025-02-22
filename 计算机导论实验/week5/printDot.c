#include "stdio.h"
#include "string.h"
#include "stdlib.h"

const int reglen = 94;       //每区(行)有 94 位(列)
const int font_width = 16;  // 单字点阵宽度(列数)
const int font_height = 16;  // 单字点阵高度(行数)
const int dotsize = 16 * 16 / 8;   //一个汉字点阵所占的字节数
const int subcode = 0xa0;      //内码与区、位码的差值

char* font_file_name = "chs16.fon"; // 点阵字库文件名
char str[] = "李宛霖";    //要显示点阵信息的汉字

void printcharbindot(char* bindot, int dotlen);
int main(int argc, char* argv[])
{
    FILE* fp = fopen(font_file_name, "rb");
    if (fp == NULL) {
        printf("无法打开字体文件\n");
        return 1;
    }

    int string_size = strlen(str);
    char bindot[16 * 16 / 8] = { 0 };   //存储点阵信息的数组

    for (int i = 0; i < string_size; i += 2) {
        int offset = 0;
        unsigned char regcode;  //区码
        unsigned char bitcode;  //位码 

        // 计算区位码，
        regcode = (unsigned char)str[i] - subcode;
        bitcode = (unsigned char)str[i + 1] - subcode;

        // 再计算汉字在字库中的位置，进而得出此字符点阵在字体文件中的偏移
        offset = ((regcode - 1) * reglen + bitcode - 1) * dotsize;

        // 在字库文件中读取其点阵数据
        fseek(fp, offset, SEEK_SET);
        fread(bindot, sizeof(bindot), 1, fp);

        //输出其点阵信息
        printcharbindot(bindot, dotsize);
        printf("\n"); // 每个汉字的点阵输出后换行
    }

    fclose(fp);
    system("pause");
    return 0;
}

//按顺序输出点阵的每一位信息
void printcharbindot(char* bindot, int len)
{
    int charnum = 0;  //当前字节号
    int bitnum = 0;  //已读取的位数
    int bitindex = 0;  //当前位号
    int bitvalue;     //当前位的值
    for (charnum = 0; charnum < len; ++charnum)
    {
        //从高到低顺次输出一个字节的每位信息
        for (bitindex = 7;bitindex >= 0; --bitindex)
        {
            //输出当前字节第bitindex位的值
            bitvalue = ((bindot[charnum] >> bitindex) & 0x1);
            printf("%c", bitvalue ? '#' : ' '); // 如果位为1，输出#，否则输出空格

            //满16位输出一行
            if ((++bitnum % font_width) == 0)
                printf("\n");
        }
    }
}