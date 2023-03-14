#include <stdio.h>

int findSecondMinimum(int arr[], int size) {
    int min = arr[0];
    int secondMin = arr[1];
    for (int i = 2; i < size; i++) {
        if (arr[i] < min) {
            secondMin = min;
            min = arr[i];
        } else if (arr[i] < secondMin && arr[i] != min) {
            secondMin = arr[i];
        }
    }
    return secondMin;
}

int main() {
    int arr[] = {4, 2, 5, 1, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    int secondMin = findSecondMinimum(arr, size);
    printf("The second minimum number in the array is: %d\n", secondMin);
    return 0;
}