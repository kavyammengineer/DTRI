#include <stdarg.h>
#include <stdio.h>

double maxFloat(int count, ...) {
    va_list args;
    va_start(args, count);
    double max = va_arg(args, double);
    for (int i = 1; i < count; i++) {
        double current = va_arg(args, double);
        if (current > max) {
            max = current;
        }
    }
    va_end(args);
    return max;
}

int main() {
    printf("Max: %f\n", maxFloat(3, 10.5, 20.2, 30.1));
    printf("Max: %f\n", maxFloat(5, 1.1, 2.2, 3.3, 4.4, 5.5));
    return 0;
}

