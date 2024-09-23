#include<stdio.h>
int main()
{
    int a[]={5,4,3,2,1},n,i;
    int  flag_inc=1,flag_dec=1;
    n=sizeof(a)/sizeof(a[0]);
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
    if(flag_inc || flag_dec)
    {
        printf(" the array is monotonic");

    }
    else
    {
        printf(" the array is  not monotonic");
    }
    return 0;

}
