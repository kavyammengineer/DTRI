

#include <stdarg.h>
#include <stdio.h>

double average(int count, ...) {
    va_list args;
    va_start(args, count);
    double sum = 0;
    for (int i = 0; i < count; i++) {
        sum += va_arg(args, int);
    }
    va_end(args);
    return sum / count;
}

int main() {
    printf("Average: %f\n", average(3, 10, 20, 30));
    printf("Average: %f\n", average(5, 1, 2, 3, 4, 5));
    return 0;
}
