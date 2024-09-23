#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    // Allocate memory for a string using malloc
    char* str = malloc(20 * sizeof(char));

    // Check if memory allocation was successful
    if (str == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Copy a string into the allocated memory
    strcpy(str, "Hello, World!");

    // Print the string
    printf("String: %s\n", str);

    // Deallocate the memory using free
    free(str);

    return 0;
}

