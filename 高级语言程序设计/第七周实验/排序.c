#include <stdio.h>
void quickSort(int array[], int low, int high);
int main(int argc,const char *argv[])
{
    int n, i;
    printf("�����������������ĸ��� n\n");
    scanf("%d", &n);
    int array[n];
    printf("������%d��������������\n", n);
    for (i = 0; i < n; i++) scanf("%d", &array[i]);
    quickSort(array, 0, n - 1);
    printf("����������Ϊ��\n");
    for (i = 0; i < n; i++) printf("%d ", array[i]);
    return 0;
}
void quickSort(int array[], int low, int high)
{
    int i = low, j = high, temp, pivot = array[(low + high) / 2];
    while (i <= j) {
        while (array[i] < pivot) i++;
        while (array[j] > pivot) j--;
        if (i <= j) {
            temp = array[i];
            array[i++] = array[j];
            array[j--] = temp;
        }
    }
    if (low < j) quickSort(array, low, j);
    if (i < high) quickSort(array, i, high);
}
