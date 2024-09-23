#include <stdio.h>

// Static function
static void printMessage() {
    printf("This is a static function.\n");
}

// Static object
static int staticVar = 10;

void main() {
    printMessage();
    printf("Static variable: %d\n", staticVar);

    // Accessing static variable from another function
    accessStaticVar();
}

// Another function accessing static variable
void accessStaticVar() {
    printf("Accessing static variable from another function: %d\n", staticVar);
}

