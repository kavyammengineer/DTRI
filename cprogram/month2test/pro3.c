#include<stdio.h>
int **triangle_pascel(int num);
int main()
{
    int num,i,j;
    printf("enter the numb:");
    scanf("%d",&num);
    int **res=triangle_pascel(num);
    for(i=0;i<num;i++)
    { for (j = 0; j < num - i - 1; j++) {
        printf(" ");
    }
        for(j=0;j<=i;j++)
        {
            printf(" ");
            printf("%d",res[i][j]);

        }
        printf("\n");

    }
}
int **triangle_pascel(int num)
{
    int i,j;
    int** col=malloc(num*sizeof(int*));
    for(i=0;i<num;i++)
    {
         col[i]=malloc((i+1)*sizeof(int));
        col[i][i]=col[i][0]=1;
        for(j=1;j<i;j++)
            {
                //col[i][i]=col[i][0]=0;
                    col[i][j]=col[i-1][j-1]+col[i-1][j];
        }
    }
return col;

}
