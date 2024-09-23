
#include <stdio.h>

void find_frequency(int arr[], int n) {
    int i, j, count;
    for (i = 0; i < n; i++) {
        count = 0;
        for (j = 0; j < n; j++)
            {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        printf("Frequency of %d: %d\n", arr[i], count );
    }
}

int main() {
    int arr[] = {1, 2, 2, 3, 3, 3, 4, 4, 4, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    find_frequency(arr, n);
    return 0;
}

