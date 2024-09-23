#include <stdio.h>

int main() {
    signed char byte = 127; // Assigning the maximum positive value to a signed char

    printf("Value of byte: %d\n", byte);

    byte = -128; // Assigning the minimum negative value to a signed char
    printf("Value of byte: %d\n", byte);

    // Performing arithmetic operations
    byte = 10;
    printf("Value of byte + 20: %d\n", byte + 20);

    byte = -10;
    printf("Value of byte - 20: %d\n", byte - 20);

    return 0;
}


