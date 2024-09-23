#include<stdio.h>
int main()
{
    int arr[10][10];
    int i,j,n,m;
    printf(" enter the no of rows");
    scanf("%d",&n);
     printf(" enter the no of coloums");
    scanf("%d",&m);

    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)

           scanf("%d ",&arr[i][j]);
              printf("\n");
    }
    printf(" the elements:\n");
 for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
            printf("%d ",arr[i][j]);
             printf("\n");
    }
    printf("Press any key to continue...");
    getchar();
    return 0;
}
