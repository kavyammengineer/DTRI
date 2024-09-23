#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>

bool isValid(char* s) {
    int* stack = malloc(10000 * sizeof(int));
    if (stack == NULL) {
        // Handle memory allocation error
        return false;
    }
    int top = 0;
    for (int i = 0; s[i]; i++) {
        if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
            stack[top++] = s[i];
        } else {
            if (top == 0) {
                free(stack);
                return false;
            }
            switch (s[i]) {
                case ')':
                    if (stack[--top] != '(') {
                        free(stack);
                        return false;
                    }
                    break;
                case ']':
                    if (stack[--top] != '[') {
                        free(stack);
                        return false;
                    }
                    break;
                case '}':
                    if (stack[--top] != '{') {
                        free(stack);
                        return false;
                    }
                    break;
                default:'
                    free(stack);
                    return false;
            }
        }
    }
    free(stack);
    return top == 0;
}

int main() {
    char* s1 = "((()))";
    char* s2 = "(()";
    char* s3 = "()[]{}";
    char* s4 = "(]";

    printf("%s is %s\n", s1, isValid(s1) ? "valid" : "invalid");
    printf("%s is %s\n", s2, isValid(s2) ? "valid" : "invalid");
    printf("%s is %s\n", s3, isValid(s3) ? "valid" : "invalid");
    printf("%s is %s\n", s4, isValid(s4) ? "valid" : "invalid");

    return 0;
}

