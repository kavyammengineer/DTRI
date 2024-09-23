#include<stdio.h>
int main()
{
    int i,j,n,m,a[10][10],b[10][10];
    printf(" enter the number of rows");
    scanf("%d",&n);
    printf(" enter the number of colums");
    scanf("%d",&m);
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
            scanf("%d",&a[i][j]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
            scanf("%d",&b[i][j]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
            printf("%d ",a[i][j]+b[i][j]);
            printf("\n");
    }


    return 0;

}
