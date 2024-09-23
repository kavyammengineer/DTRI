#include<stdio.h>
 void matrix_array(int a[],int n1,int n2);
int main()
{
    int a[30]={};
    int n,i,n1,n2;
    printf("enter the size of the array:");
    scanf("%d",&n);
    printf("enter the array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
     printf("enter the size of row:");
    scanf("%d",&n1);
     printf("enter the size of column:");
    scanf("%d",&n2);
matrix_array(a,n1,n2);
}
 void matrix_array(int a[],int n1,int n2)
{
    int c[10][10],i,j,r=0;
    for(i=0;i<n1;i++)
    {
        for(j=0;j<n2;j++)
        {
            c[i][j]=a[r++];
        }
    }
    for(i=0;i<n1;i++)
    {
        for(j=0;j<n2;j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }


}

