
#include <stdio.h>
#include <stdlib.h>

void print2Darray(int **mat, int r, int c);

int main()
{
    int rows = 0, cols = 0;
    printf("enter rows and cols\n");
    scanf("%d%d", &rows, &cols);
    int **arr = (int **)malloc(rows * sizeof(int *));

    for (int i = 0; i < rows; i++)
    {
        arr[i] = (int *)malloc(rows * sizeof(int));
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    print2Darray(arr, rows, cols);

    for (int i = 0; i < rows; i++)
    {
        free(arr[i]);
    }
    free(arr);
    return 0;
}

void print2Darray(int **mat, int r, int c)
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}
