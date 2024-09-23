#include<stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *sentence ;
    int length = 0, lastLength = 0;
    int capacity = 100;

    sentence = (char *)malloc(capacity * sizeof(char));

    printf("Enter a sentence: ");
    fgets(sentence, capacity, stdin);

    // Remove newline character
    sentence[strcspn(sentence, "\n")] = 0;

    for (int i = 0; sentence[i] != '\0'; i++) {
        if (sentence[i] == ' ') {
            lastLength = length;
            length = 0;
        } else {
            length++;
        }
    }

    lastLength = length;
    printf("Length of the last word: %d\n", lastLength);

    return 0;
}
