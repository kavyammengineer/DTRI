
#include <stdio.h>

void multiply_arrays(int *restrict a, int *restrict b, int *restrict result, int n) {
    for (int i = 0; i < n; i++) {
        result[i] = a[i] * b[i];
    }
}

int main() {
    int a[] = {1, 2, 3, 4, 5};
    int b[] = {6, 7, 8, 9, 10};
    int result[5];

    multiply_arrays(a, b, result, 5);

    printf("Result: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");

    return 0;
}

