#include<stdio.h>
int main()
{
    int i,j,n,m,a[10][10]; int max;
    printf(" enter the number of rows");
    scanf("%d",&m);
    printf(" enter the number of colums");
    scanf("%d",&n);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    }
    max=a[0][0];
     for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++){

            if(a[i][j]<max)
            {
                max=a[i][j];
            }
    }

    }
    printf(" the largest value is %d ",max);
    return 0;
}
