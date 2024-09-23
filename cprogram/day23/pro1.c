#include<stdio.h>
int* listofdiv(int n,int *psize);
int main()
{
    int n,size=0,*psize;
    printf("enter the n:");
    scanf("%d",&n);
    psize=&size;
    int *res=listofdiv(n,psize);
    for(int i=0;i<size;i++)
    {
        printf("%d ",res[i]);
    }

}
int* listofdiv(int n,int *psize)
{
    int count=0;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }
    *psize=count;
    int *arr=malloc(count*sizeof(int));
    int k=0;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
           arr[k++]=i;
        }
    }
    return arr;

}

