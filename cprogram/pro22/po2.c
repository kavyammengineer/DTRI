#include <stdio.h>
#include <stdlib.h>

int main() {
    int numElements;
    printf("Enter the number of elements: ");
    scanf("%d", &numElements);

    // Allocate memory for an array of integers using malloc
    int* arr = calloc(numElements , sizeof(int));

    // Check if memory allocation was successful
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Assign values to the allocated memory
    for (int i = 0; i < numElements-2; i++) {
        arr[i] = i * 2;
    }

    // Print the values
    printf("Array elements: ");
    for (int i = 0; i < numElements; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Deallocate the memory using free
    free(arr);

    return 0;
}
