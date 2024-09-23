#include<stdio.h>

void fun1(int a[10][10],int b[10][10],int n,int m);
void fun2(int a[10][10],int b[10][10], int n,int m);
int main()
{
    int a[10][10],b[10][10],n,m,p,q,i,j;
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
    if(n!=m || p!=q)
    {
        printf("matrix addition and subtraction not possible:");
    }
    else
        {
            fun1(a,b,n,m);
            fun2(a,b,n,m);
        }



}
void fun1(int a[10][10],int b[10][10], int n,int m)
{
    printf("the addition matrix is:\n ");
    int i,j;
     for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d ",a[i][j]+b[i][j]);

        }
        printf("\n");
    }
}
void fun2(int a[10][10],int b[10][10], int n,int m)
{
    printf("the addition matrix is:\n");
    int i,j;
     for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d ",a[i][j]-b[i][j]);

        }
        printf("\n");
    }
}
