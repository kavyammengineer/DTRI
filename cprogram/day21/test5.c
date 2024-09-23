#include<stdio.h>
void getarray(int a[],int n);
void sort_array(int a[],int n);
void display_array(int a[],int n);
int main()
{
   int a[20],n;
   printf("the array size:");
   scanf("%d",&n);
   getarray(a,n);
   sort_array(a,n);
    display_array(a,n);
}

void getarray(int a[],int n)
{
    int i;
    printf("enter the array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

}
void sort_array(int a[],int n)
{
    int i,j,temp;
    for(i=0;i<n;i++)
    {
        for(j=i;j<n-1;j++)
        {
            if(a[i]>a[j+1])
            {
                temp=a[i];
                a[i]=a[j+1];
                a[j+1]=temp;
            }
        }
    }

}
void display_array(int a[],int n)
{
    int j;
    for(j=0;j<n;j++)
    {
        printf("%d ",a[j]);
    }
}

