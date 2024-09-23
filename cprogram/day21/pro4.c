#include<stdio.h>
void read_dimensions(int *rows, int *cols, char matrix_name);
void read_matrix(int rows, int cols, int matrix[rows][cols],char matrix_name);
void multiply_matrices( int a[10][10],int b[10][10], int c[10][10],int  n,int  m,int  p,int q);

int main()
{
    int a[10][10],b[10][10],c[10][10],m,n,p,q;
        read_dimensions(&n, &m, 'A');
         read_dimensions(&p, &q, 'B');
          if (m != p)
            {
        printf("Matrix multiplication is not possible.\n");
                return 1;
            }
    read_matrix(n, m, a,'A');
    read_matrix(p, q, b,'B');
    multiply_matrices(a, b, c, n, m, p, q);

    printf("Resultant matrix C:\n");
    print_matrix(n, q, c);

    return 0;

}
void read_dimensions(int *rows, int *cols, char matrix_name)
{
    printf("Enter the number of rows and columns for %c:\n", matrix_name);
    scanf("%d%d", rows, cols);
}
void read_matrix(int rows, int cols, int matrix[rows][cols],char matrix_name)
{
    printf("Enter the matrix %c:\n", matrix_name);
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
}
void multiply_matrices(int a[10][10], int b[10][10], int c[10][10], int n, int m, int p, int q)
{
   for (int i = 0; i < n; i++)
        {
        for (int j = 0; j < q; j++)
         {
            c[i][j] = 0;
            for (int k = 0; k < m; k++)
             {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    for (int i = 0; i < n; i++)
        {
        for (int j = 0; j < q; j++)
        {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
}




