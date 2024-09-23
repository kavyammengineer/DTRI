#include<stdio.h>
 int maxof_num( int a[10][10], int m, int n);
int main()
{
    int a[10][10],i,j,m,n,res;
    printf("enter the number of rows");
    scanf("%d",&m);
      printf("enter the number of rows");
    scanf("%d",&n);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    }
    res=maxof_num(a,m,n);
    printf("the max value is %d",res);

}
  int maxof_num( int a[10][10], int m, int n)
 {
     int i,j;
     int max=a[0][0];
     for(i=0; i<m;i++)
    {
        for(j=0;j<n;j++)
            if(a[i][j]>max)
            {
                max=a[i][j];
            }
    }
    return max;
 }

