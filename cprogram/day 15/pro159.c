#include <stdio.h>

void decompress(int encoded[], int size) {
    for (int i = 0; i < size; i += 2) {
        int value = encoded[i];
        int count = encoded[i + 1];
        for (int j = 0; j < count; j++) {
            printf("%d ", value);
        }
    }
}

int main() {
    int encoded[] = {1, 3, 2, 5, 3, 1};
    int size = sizeof(encoded) / sizeof(encoded[0]);
    decompress(encoded, size);
    return 0;
}

