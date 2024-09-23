#include<stdio.h>
void monotonic_inc_dec(int a[],int n);

int main()
{
    int a[10],i,n;
    printf("enter the  size of the array:");
    scanf("%d",&n);
    printf("enter the array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    monotonic_inc_dec(a,n);
    getchar();
    return 0;
}
void monotonic_inc_dec(int a[],int n)
{
    int i;
    int flag_inc=1,flag_dec=1;
    for(i=1;i<n;i++)
    {
        if(a[i-1]>a[i])
        {
            flag_inc=0;
        }

        if(a[i-1]<a[i])
            {
                flag_dec=0;
            }


    }
    if(flag_inc)
    {
        printf("array is  increasing monotonic");

    }
    else if(flag_dec)
    {
        printf("array is decreasing monotonic");
    }
    else
    {
        printf(" array is not monotonic");
    }
}

