
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

int* sortNumbers(int count, ...) {
    int* numbers = (int*)malloc(count * sizeof(int));
    va_list args;
    va_start(args, count);
    for (int i = 0; i < count; i++) {
        numbers[i] = va_arg(args, int);
    }
    va_end(args);

    // Sort the numbers
    for (int i = 0; i < count - 1; i++) {
        for (int j = i + 1; j < count; j++) {
            if (numbers[i] > numbers[j]) {
                int temp = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = temp;
            }
        }
    }

    return numbers;
}

int main() {
    int* numbers = sortNumbers(5, 3, 1, 4, 2, 5);
    for (int i = 0; i < 5; i++) {
        printf("%d ", numbers[i]);
    }
    free(numbers);
    return 0;
}
