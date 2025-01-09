
// 找到数组中最小的两个数
void findTwoMin(int *arr, int n, int *min1, int *min2) {
    if (arr[0] > arr[1]) {
        *min1 = 1;
        *min2 = 0;
    } else {
        *min1 = 0;
        *min2 = 1;
    }
    for (int i = 2; i < n; i++) {
        if (arr[i] < arr[*min1]) {
            *min2 = *min1;
            *min1 = i;
        } else if (arr[i] < arr[*min2]) {
            *min2 = i;
        }
    }
}
