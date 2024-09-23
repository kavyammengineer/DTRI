#include<stdio.h>
int  largestnumber(int a[],int n);
int main()
{
    int n;
    printf("enter the col:");
    scanf("%d",&n);
    int * a=(int*)calloc(n,sizeof(int));
    int *res=largestnumber(a, n);
    printf(" the value is %d",res);
}
int largestnumber(int a[],int n)
{
    int i;
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }

    printf("find the largest:");
  int largest=a[0];
    for(i=1;i<n;i++)

    {
         if(a[i]>largest)
        {
            largest=a[i];

        }
    }

    return  largest;
}

