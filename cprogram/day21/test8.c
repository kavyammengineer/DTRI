#include<stdio.h>
int main()
{
    int a[10][10],b[10][10],c[10][10],n,m,p,q,i,j,k;
    printf("enter the number of rows and columns for A:");
    scanf("%d%d",&n,&m);
    printf("enter the number of rows and columns for B:");
    scanf("%d%d",&p,&q);
    printf("enter the matrix of a:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
     printf("enter the matrix of b:\n");
     for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    if(m!=p)
    {
        printf("matrix multiplication is not possible:");
    }

    printf("enter the matrix of c:\n");
     for(i=0;i<n;i++)
    {
        for(j=0;j<q;j++)
        {
            c[i][j]=0;
            for(k=0;k<n;k++)
            {
                c[i][j]+=a[i][k]*b[k][j];
            }


        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<q;j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }


}
