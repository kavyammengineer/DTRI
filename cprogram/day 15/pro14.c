
#include <stdio.h>

void sortArray(int *arr, int size) {
    int i, j, temp;
    for (i = 0; i < size - 1; i++) {
        for (j = i + 1; j < size; j++) {
            if ((arr[i]) > (arr[j])) {
                temp = (arr[i]);
                (arr[i]) = (arr[j] );
                (arr [j]) = temp;
            }
        }
    }
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int size = sizeof(arr) / sizeof(arr[0]);
    sortArray(arr, size);
    printf("Sorted array: \n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr  [i]);
    }
    return 0;
}
