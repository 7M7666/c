# 期末c语言笔记
---
- [期末c语言笔记](#期末c语言笔记)
  - [数组](#数组)
    - [数组赋值](#数组赋值)
    - [递归实现Fibonacci](#递归实现fibonacci)
    - [将一个二维数组的行和列互换](#将一个二维数组的行和列互换)
    - [**找最大最小值**--打擂台法](#找最大最小值--打擂台法)
  - [排序](#排序)
    - [冒泡排序](#冒泡排序)
    - [选择排序](#选择排序)
    - [快速排序](#快速排序)

## 数组
### 数组赋值
```
int a[n]={0};//其中n为整数 赋值的时候必须加上中括号
int a[3][4];
a[3][4]=0; X没有a34数组
2维数据的长度不能省
```
### 递归实现Fibonacci
```
#include<stdio.h>
int main{
    int a[20]={1,1};//给0，1赋值为1
    for(int i=0;i<20;i++){
       a[i]=a[i-1]+a[i-2];
    }
    return 0;
}
```
### 将一个二维数组的行和列互换
```
int a[3][2]={{1,2},{3,4},{5,6}};
int b[2][3],i,j;
for(int i=0;i<=1;i++){//处理第一行数据
    for (int j=0;j<=2；j++){
        printf("%d",&a[i][j]);
        b[j][i]=a[i][j];
    }
}
```
### **找最大最小值**--打擂台法
```
int a[3][4]
max=a[0][0]
for(int i=0;i<3;i++){
    for(int j=0;j<4;j++){
        if a[i][j]>max
        max=a[i][j];
        i=q;
        j=w;
    }
}
```
## 排序
### 冒泡排序
```
for(int i=0;i<n;i++){//进行n次循环，进行n比较
    for(int j=0;i<n-i;j++){//每一趟中实现n-i次比较
        if(a[j]>a[j+1]){
            temp=a[j+1];
            a[j+1]=a[j];
            a[j]=temp;
    }}
}
```
### 选择排序
```
void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        if (minIndex!= i) {
            swap(&arr[i], &arr[minIndex]);
        }
    }
}
```
### 快速排序
```
int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = low - 1;
    for (int j = low; j < high; j++) {
        if (arr[j] <= pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return i + 1;
}
// 快速排序的递归函数
void quickSort(int arr[], int low, int high) {
    if (low < high) {//结束条件是子数组长度为1
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);//排完左边
        quickSort(arr, pi + 1, high);//再排右边
    }
}
```
---
## 文件
### 总结
"r": 只读，文件必须存在。

"w": 只写，文件不存在则创建，存在则截断。

"a": 追加，文件不存在则创建，存在则追加。

"r+": 读写，文件必须存在。

"w+": 读写，文件不存在则创建，存在则截断。

"a+": 读写，文件不存在则创建，存在则追加。

对于二进制文件，只需在模式字符串中加入 "b"，如 "rb"、"wb" 等

### 关键点总结
- fscanf():

适合读取格式化的数据（如单词、数字等）。

遇到空格或换行符会停止读取。

- fgets():

适合读取整行文本（包括换行符）。

可以指定最大读取字符数，避免缓冲区溢出。

- 文件指针的位置:

每次读取操作后，文件指针会自动移动到下一个位置。

例如，fscanf() 读取第一个单词后，文件指针会停留在空格后，fgets() 会从该位置继续读取。

- 换行符的处理:

fgets() 会保留换行符 \n，而 fscanf() 会忽略空格和换行符。