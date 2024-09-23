#include <stdio.h>

// Static object to count function calls
static int callCount = 0;

// Function that increments call count
void incrementCallCount() {
    callCount++;
    printf("Function called %d times.\n", callCount);
}

int main() {
    incrementCallCount();
    incrementCallCount();
    incrementCallCount();
    return 0;
}


