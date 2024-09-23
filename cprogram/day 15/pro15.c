#include <stdio.h>

void printReverse(int *arr, int size) {
    for (int i = size - 1; i >= 0; i--) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}

int sumOfElements(int *arr, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += *(arr + i);
    }
    return sum;
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: \n");
    for (int i = 0; i < size; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");

    printf("Reverse array: \n");
    printReverse(arr, size);

    int sum = sumOfElements(arr, size);
    printf("Sum of all elements: %d\n", sum);

    return 0;
}

