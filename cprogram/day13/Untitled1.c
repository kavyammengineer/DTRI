
#include <stdio.h>
#include <string.h>

char* addBinary(char* a, char* b) {
    int lenA = strlen(a);
    int lenB = strlen(b);
    int maxLen = (lenA > lenB) ? lenA : lenB;
    char* result = (char*)malloc((maxLen + 2) * sizeof(char));
    int carry = 0;
    int i, j;

    for (i = lenA - 1, j = lenB - 1, maxLen--; maxLen >= 0; i--, j--, maxLen--) {
        int sum = carry;
        if (i >= 0) sum += a[i] - '0';
        if (j >= 0) sum += b[j] - '0';
        result[maxLen + 1] = (sum % 2) + '0';
        carry = sum / 2;
    }

    if (carry) {
        result[0] = '1';
        return result;
    }

    return result + 1;
}

int main() {
    char a[] = "101";
    char b[] = "1";
    char* result = addBinary(a, b);
    printf("%s + %s = %s\n", a, b, result);
    return 0;
}

