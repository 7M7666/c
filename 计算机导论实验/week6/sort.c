#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 100000

// 打印数组的函数
void printArray(int arr[], int size);

// 生成随机数的函数
void generateRandomNumbers(int arr[], int size);

// 冒泡排序的函数
void bubbleSort(int arr[], int size);

// 快速排序的函数
void quickSort(int arr[], int low, int high);

// 打印数组的函数
void printArray(int arr[], int size);

// 主函数
int main() {
    int arr[SIZE], arrBubble[SIZE], arrQuick[SIZE];
    clock_t start, end;
    double cpu_time_used;

    // 生成随机数
    generateRandomNumbers(arr, SIZE);

    // 打印原始数组
    printf("Original array:\n");
    printArray(arr, SIZE);

    // 复制数组以进行排序
    for (int i = 0; i < SIZE; i++) {
        arrBubble[i] = arr[i];
        arrQuick[i] = arr[i];
    }

    // 冒泡排序
    start = clock();
    bubbleSort(arrBubble, SIZE);
    end = clock();
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("Bubble Sorted array:\n");
    printArray(arrBubble, SIZE);
    printf("Bubble Sort time: %f seconds\n", cpu_time_used);

    // 快速排序
    start = clock();
    quickSort(arrQuick, 0, SIZE - 1);
    end = clock();
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("Quick Sorted array:\n");
    printArray(arrQuick, SIZE);
    printf("Quick Sort time: %f seconds\n", cpu_time_used);

    return 0;
}

// 生成随机数的函数
void generateRandomNumbers(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 1000+1; // 生成1到1000之间的随机数
    }
}

// 冒泡排序的函数
void bubbleSort(int arr[], int size) {
    int temp;
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// 快速排序的函数
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pivot = arr[high];
        int i = (low - 1);

        for (int j = low; j <= high - 1; j++) {
            if (arr[j] < pivot) {
                i++;
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        int temp = arr[i + 1];
        arr[i + 1] = arr[high];
        arr[high] = temp;

        int partitionIndex = i + 1;

        quickSort(arr, low, partitionIndex - 1);
        quickSort(arr, partitionIndex + 1, high);
    }
}

// 打印数组的函数
void printArray(int arr[], int size) {
    // 由于数组大小为100000，这里只打印前10个元素作为示例
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("...\n");
}
