#include<stdio.h>
int main()
{
    int n;
    printf("enter the size of the array");
    scanf("%d",&n);
    int *a=calloc(n,sizeof(int));
    printf("enter the array:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",a+i);
    }
    printf("the array is:");
    for(int i=0;i<n;i++)
    {
        printf("%d ",*(a+i));
    }
}
