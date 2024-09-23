
#include <stdio.h>
#include <stdlib.h>

int main() {
    // Declare a pointer to an integer
    int* ptr;

    // Allocate memory for an integer using malloc
    ptr = malloc(sizeof(int));

    // Check if memory allocation was successful
    if (ptr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Assign a value to the allocated memory
    *ptr = 10;

    // Print the value
    printf("Value: %d\n", *ptr);

    // Deallocate the memory using free
    free(ptr);

    return 0;
}

