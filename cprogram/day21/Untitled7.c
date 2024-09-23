#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void mixedstring(char *str1, char *str2);

int main() {
    char str1[10], str2[10];
    printf("Enter the first string: ");
    scanf("%s", str1);
    printf("Enter the second string: ");
    scanf("%s", str2);
    mixedstring(str1, str2);
    return 0;
}

void mixedstring(char *str1, char *str2) {
    int n1 = strlen(str1);
    int n2 = strlen(str2);
    int a = n1 + n2;
    char *c = malloc(a * sizeof(char)); // Use char instead of int
    int k = 0,i,j; // Declare j and use it correctly
    for (i=0,j=0; i < n1 || j < n2;i++,j++) {
        c[k++] = str1[i]; // Fix i++ issue
        c[k++] = str2[j];
    }
    c[k] = '\0'; // Null-terminate the string
    printf("%s\n", c);
    free(c); // Free dynamically allocated memory
}

