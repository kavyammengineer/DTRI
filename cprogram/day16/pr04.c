#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Seed the random number generator
    srand(time(NULL));

    // Generate a random number between 0 and 100
    int random_number = rand() % 101;

    printf("Random number: %d\n", random_number);

    return 0;
}
