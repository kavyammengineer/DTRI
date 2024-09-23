#include<stdio.h>
int getarray(int a[],int n);
int printarray(int a[],int n);
int sortarray(int a[],int n);
int main()
{
    int a[5]={0,0,0,0,0};
   int n=sizeof(a)/sizeof(a[0]);
    getarray(a,n);
}
int getarray(int a[],int n)
{
    printf("enter the array:");
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("the array is:");
     for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    sortarray(a,n);

}
int sortarray(int a[],int n)
{
    int i,j,temp=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;

            }
        }
    }
    printarray( a, n);
}
int printarray(int a[],int n)
{
    int i;
    printf("the sorted array:");
 for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
