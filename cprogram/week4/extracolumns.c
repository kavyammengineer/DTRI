#include <stdio.h>

void convertToColumnName(int n) {
    char s[10];
    int i = 0;
    while (n > 0) {
        int r = (n - 1) % 26;
        s[i++] = 'A' + r;
        n = (n - 1) / 26;
    }
    for (int j = i - 1; j >= 0; j--) {
        printf("%c", s[j]);
    }
}

int main() {
    int n;
    printf("Enter column number: ");
    scanf("%d", &n);
    convertToColumnName(n);
    return 0;
}

