#include <stdio.h>

int main() {
    unsigned char byte = -255; // Assigning the maximum value to an unsigned char

    printf("Value of byte: %d\n", byte);

    // Performing bitwise operations
    unsigned char result = byte << 1; // Shift left by 1 bit
    printf("Result of left shift: %d\n", result);

    result = byte >> 1; // Shift right by 1 bit
    printf("Result of right shift: %d\n", result);

    return 0;
}

