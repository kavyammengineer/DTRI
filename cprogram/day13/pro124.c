#include <stdio.h>

void removeDuplicates(char *str) {
    int i, j, k;
    for (i = 0; str[i] != '\0'; i++) {
        for (j = i + 1; str[j] != '\0'; j++) {
            if (str[i] == str[j]) {
                // Shift characters to remove duplicate
                for (k = j; str[k] != '\0'; k++) {
                    str[k] = str[k + 1];
                }
                j--; // Decrement j to recheck the new character
            }
        }
    }
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    removeDuplicates(str);

    printf("String with duplicates removed: %s\n", str);

    return 0;
}

