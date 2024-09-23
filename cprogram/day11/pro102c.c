#include<stdio.h>
int main()
{
    int i,j,n,m,p,q,a[10][10],b[10][10],c[10][10],k;
    printf(" enter the number of rows");
    scanf("%d%d",&m,&p);
    printf(" enter the number of colums");
    scanf("%d%d",&n,&q);
    if(n!=p)
    {
        printf(" the multiplication is not possible\n");
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    }
    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
            scanf("%d",&b[i][j]);
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<q;j++)
            {
              c[i][j]=0;
               for (k = 0; k < n; k++)
                {
                c[i][j] += a[i][k] * b[k][j];

                }

        }

}
for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++)
            {
            printf("%d ", c[i][j]);
        }
        printf("\n");




}return 0;
}

