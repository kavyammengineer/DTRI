#include<stdio.h>
int main()
{
    int a[10],n,i;
    printf("enter the number:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
    scanf("%d",&a[i]);
    }
    int j,r=0,count=0;
    int output[10];
    int mul=1;
    for(i=0;i<n;i++)

    {
         for(j=0;j<n;j++){
        if(a[j]==a[i])
        {
           count++;
        }
        else
        {
            mul=mul*a[j];
        }
        if (j==(n-1))
             {
                 output[r]=mul;
                 r++;
                 mul=1;
             }
         }

    }
    for(r=0;r<n;r++)
    printf(" the %d",output[r]);

}
