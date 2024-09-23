
#include <stdio.h>

void printPascalsTriangle(int n) {
    int i, j;
    int triangle[n][n];

    // Initialize the first row
    triangle[0][0] = 1;

    // Fill in the rest of the triangle
    for (i = 1; i < n; i++)
      {
        triangle[i][0] = 1;
        for (j = 1; j <= i; j++) {
            triangle[i][j] = triangle[i-1][j-1] + triangle[i-1][j];
        }


    }

    // Print the triangle
    for (i = 0; i < n; i++)
        {
        for (j = 0; j <= i; j++) {
            printf("%d ", triangle[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    printPascalsTriangle(n);
    return 0;
}


