
#include <stdio.h>
#include <string.h>

void generateCombinations(char* digits, int index, char* combination, char* mapping[]) {
    if (digits[index] == '\0') {
        printf("%s\n", combination);
        return;
    }

    char* letters = mapping[digits[index] - '0'];
    for (int i = 0; letters[i] != '\0'; i++) {
        combination[index] = letters[i];
        generateCombinations(digits, index + 1, combination, mapping);
    }
}

int main() {
    char* mapping[] = {"0", "1", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    char digits[] = "03";
    int length = strlen(digits);
    char combination[length + 1];
    combination[length] = '\0';

    generateCombinations(digits, 0, combination, mapping);
    return 0;
}

